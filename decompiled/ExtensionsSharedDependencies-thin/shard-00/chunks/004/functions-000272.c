/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00561110; end: 0056134b;  */

undefined8 FUN_00561110(undefined8 *param_1,ulong param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  if (((param_2 & 0xff) == 0x13) || ((2L << (param_2 & 0x3f) & 0x80004U) == 0)) {
    return 0;
  }
  uVar9 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar9 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  uVar1 = (uint)param_2 >> 8;
  if ((uVar1 & 0xff) != 0) {
    uVar3 = (uint)(param_2 >> 0x20);
    uVar11 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
    uVar7 = uVar9;
    if (param_3 <= uVar9) {
      uVar7 = (ulong)param_3;
    }
    if (-1 < (int)param_3) {
      uVar9 = uVar7;
    }
    uVar7 = 0;
    if (uVar9 <= uVar11) {
      uVar7 = uVar11 - uVar9;
    }
    if ((uVar1 & 1) == 0) {
      if (uVar9 < uVar11) {
        puVar10 = (undefined8 *)param_4[3];
        param_4[2] = param_4[2] + uVar7;
        puVar8 = param_4 + 0x84;
        uVar11 = (long)puVar8 - (long)puVar10;
        if (uVar11 <= uVar7 && uVar7 - uVar11 != 0) {
          puVar6 = param_4 + 4;
          puVar5 = puVar8;
          if (puVar8 != puVar10) {
            _memset(puVar10,0x20,uVar11);
            lVar4 = param_4[3];
            param_4[3] = (undefined8 *)(lVar4 + uVar11);
            puVar5 = (undefined8 *)(lVar4 + uVar11);
          }
          (*(code *)param_4[1])(*param_4,puVar6,(long)puVar5 - (long)puVar6);
          param_4[3] = puVar6;
          for (uVar7 = uVar7 - uVar11; puVar10 = puVar6, 0x400 < uVar7; uVar7 = uVar7 - 0x400) {
            _memset(puVar6,0x20,0x400);
            param_4[3] = puVar8;
            (*(code *)param_4[1])(*param_4,puVar6,0x400);
            param_4[3] = puVar6;
          }
        }
        _memset(puVar10,0x20,uVar7);
        param_4[3] = param_4[3] + uVar7;
      }
      if (uVar9 == 0) {
        return 1;
      }
      lVar4 = param_4[3];
      param_4[2] = param_4[2] + uVar9;
      if ((ulong)((long)param_4 + (0x420 - lVar4)) <= uVar9) {
        puVar8 = param_4 + 4;
        (*(code *)param_4[1])(*param_4,puVar8,lVar4 - (long)puVar8);
        param_4[3] = puVar8;
        (*(code *)param_4[1])(*param_4,puVar2,uVar9);
        return 1;
      }
      _memcpy(lVar4,puVar2,uVar9);
    }
    else {
      if (uVar9 != 0) {
        lVar4 = param_4[3];
        param_4[2] = param_4[2] + uVar9;
        if (uVar9 < (ulong)((long)param_4 + (0x420 - lVar4))) {
          _memcpy(lVar4,puVar2,uVar9);
          param_4[3] = param_4[3] + uVar9;
        }
        else {
          puVar8 = param_4 + 4;
          (*(code *)param_4[1])(*param_4,puVar8,lVar4 - (long)puVar8);
          param_4[3] = puVar8;
          (*(code *)param_4[1])(*param_4,puVar2,uVar9);
        }
      }
      if (uVar11 <= uVar9) {
        return 1;
      }
      puVar8 = (undefined8 *)param_4[3];
      param_4[2] = param_4[2] + uVar7;
      puVar2 = param_4 + 0x84;
      uVar9 = (long)puVar2 - (long)puVar8;
      if (uVar9 <= uVar7 && uVar7 - uVar9 != 0) {
        puVar10 = param_4 + 4;
        puVar6 = puVar2;
        if (puVar2 != puVar8) {
          _memset(puVar8,0x20,uVar9);
          lVar4 = param_4[3];
          param_4[3] = (undefined8 *)(lVar4 + uVar9);
          puVar6 = (undefined8 *)(lVar4 + uVar9);
        }
        (*(code *)param_4[1])(*param_4,puVar10,(long)puVar6 - (long)puVar10);
        param_4[3] = puVar10;
        for (uVar7 = uVar7 - uVar9; puVar8 = puVar10, 0x400 < uVar7; uVar7 = uVar7 - 0x400) {
          _memset(puVar10,0x20,0x400);
          param_4[3] = puVar2;
          (*(code *)param_4[1])(*param_4,puVar10,0x400);
          param_4[3] = puVar10;
        }
      }
      _memset(puVar8,0x20,uVar7);
      uVar9 = uVar7;
    }
    param_4[3] = param_4[3] + uVar9;
    return 1;
  }
  if (uVar9 != 0) {
    param_4[2] = param_4[2] + uVar9;
    if (uVar9 < (ulong)((long)param_4 + (0x420 - param_4[3]))) {
      _memcpy();
      param_4[3] = param_4[3] + uVar9;
      return 1;
    }
    puVar8 = param_4 + 4;
    (*(code *)param_4[1])(*param_4,puVar8,param_4[3] - (long)puVar8);
    param_4[3] = puVar8;
    (*(code *)param_4[1])(*param_4,puVar2,uVar9);
  }
  return 1;
}



/* Entry: 0056134c; end: 0056138b;  */

undefined8 * FUN_0056134c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 4;
  (*(code *)param_1[1])(*param_1,puVar1,param_1[3] - (long)puVar1);
  param_1[3] = puVar1;
  return param_1;
}



/* Entry: 0056138c; end: 00561817;  */

ulong FUN_0056138c(ulong param_1,code *param_2,byte *param_3,ulong *param_4,long param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  ulong *puVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uStack_4b8;
  uint uStack_4b0;
  byte bStack_4ac;
  undefined1 uStack_4ab;
  byte bStack_4aa;
  undefined1 uStack_4a9;
  ulong uStack_4a8;
  uint uStack_49c;
  uint uStack_498;
  uint uStack_494;
  ulong uStack_490;
  code *pcStack_488;
  long lStack_480;
  undefined1 *puStack_478;
  undefined1 auStack_470 [1024];
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_00999f88;
  puVar2 = &uStack_490;
  puVar8 = auStack_470;
  lStack_480 = 0;
  lVar10 = param_5;
  uStack_490 = param_1;
  pcStack_488 = param_2;
  puStack_478 = puVar8;
  if (param_4 == (ulong *)0xffffffffffffffff) {
    uStack_4b0 = (uint)param_5;
    bStack_4ac = (byte)((ulong)param_5 >> 0x20);
    uStack_4ab = (undefined1)((ulong)param_5 >> 0x28);
    bStack_4aa = (byte)((ulong)param_5 >> 0x30);
    uStack_4a9 = (undefined1)((ulong)param_5 >> 0x38);
    pcVar13 = *(char **)(param_3 + 0x10);
    pcVar3 = *(char **)(param_3 + 0x18);
    uStack_4a8 = param_6;
    if (pcVar13 != pcVar3) {
      uVar16 = 0;
      lVar12 = *(long *)(param_3 + 8);
      lVar9 = lVar12;
      do {
        lVar9 = lVar9 + uVar16;
        uVar16 = (lVar12 + *(long *)(pcVar13 + 8)) - lVar9;
        uStack_4b8 = puVar2;
        if (*pcVar13 == '\x01') {
          puVar7 = &uStack_4b8;
          FUN_005619c4(puVar7,pcVar13 + 0x10);
          puVar2 = uStack_4b8;
          if (((ulong)puVar7 & 1) == 0) goto LAB_00561734;
        }
        else if (uVar16 != 0) {
          lStack_480 = lStack_480 + uVar16;
          if (uVar16 < (ulong)((long)alStack_70 - (long)puStack_478)) {
            _memcpy(puStack_478,lVar9,uVar16);
            puStack_478 = puStack_478 + uVar16;
            puVar2 = uStack_4b8;
          }
          else {
            (*pcStack_488)(uStack_490,puVar8,(long)puStack_478 - (long)puVar8);
            puStack_478 = puVar8;
            (*pcStack_488)(uStack_490,lVar9,uVar16);
            puVar2 = uStack_4b8;
          }
        }
        pcVar13 = pcVar13 + 0x20;
      } while (pcVar13 != pcVar3);
    }
    uVar14 = *param_3 ^ 1;
  }
  else {
    uStack_49c = 0;
    if (param_4 != (ulong *)0x0) {
      pbVar1 = param_3 + (long)param_4;
      do {
        uVar16 = (long)pbVar1 - (long)param_3;
        pbVar4 = param_3;
        _memchr(param_3,0x25,uVar16);
        if (pbVar4 == (byte *)0x0) {
          lStack_480 = lStack_480 + uVar16;
          if (uVar16 < (ulong)((long)alStack_70 - (long)puStack_478)) {
            _memcpy(puStack_478,param_3,uVar16);
            puStack_478 = puStack_478 + uVar16;
          }
          else {
            (*pcStack_488)(uStack_490,puVar8,(long)puStack_478 - (long)puVar8);
            puStack_478 = puVar8;
            (*pcStack_488)(uStack_490,param_3,uVar16);
          }
          break;
        }
        uVar16 = (long)pbVar4 - (long)param_3;
        if (uVar16 != 0) {
          lStack_480 = lStack_480 + uVar16;
          if (uVar16 < (ulong)((long)alStack_70 - (long)puStack_478)) {
            _memcpy(puStack_478,param_3,uVar16);
            puStack_478 = puStack_478 + uVar16;
          }
          else {
            (*pcStack_488)(uStack_490,puVar8,(long)puStack_478 - (long)puVar8);
            puStack_478 = puVar8;
            (*pcStack_488)(uStack_490,param_3,uVar16);
          }
        }
        param_3 = pbVar4 + 1;
        puVar2 = (ulong *)CONCAT44(uStack_4b8._4_4_,(int)uStack_4b8);
        if (pbVar1 <= param_3) goto LAB_00561734;
        if ((long)(char)(&UNK_008111e1)[*param_3] < 0) {
          if (*param_3 == 0x25) {
            lStack_480 = lStack_480 + 1;
            if ((ulong)((long)alStack_70 - (long)puStack_478) < 2) {
              (*pcStack_488)(uStack_490,puVar8,(long)puStack_478 - (long)puVar8);
              puStack_478 = puVar8;
              (*pcStack_488)(uStack_490,"%",1);
            }
            else {
              *puStack_478 = 0x25;
              puStack_478 = puStack_478 + 1;
            }
            goto LAB_005614c8;
          }
          uStack_4b8._4_4_ = 0xffffffff;
          uStack_4b0 = 0xffffffff;
          bStack_4ac = 0;
          uStack_4ab = 9;
          bStack_4aa = 0x13;
          param_4 = (ulong *)&uStack_49c;
          FUN_00565ba8(param_3,pbVar1,&uStack_4b8,param_4);
          puVar2 = (ulong *)CONCAT44(uStack_4b8._4_4_,(int)uStack_4b8);
          uVar14 = 0;
          if (param_3 == (byte *)0x0) goto LAB_00561798;
          lVar9 = (long)(int)uStack_4b8;
          if (param_6 <= lVar9 - 1U) goto LAB_00561734;
          if (bStack_4ac == 0) {
            uVar11 = 0xffffffff00000000;
            uVar16 = 0xffffffff;
          }
          else {
            uStack_494 = uStack_4b8._4_4_;
            if ((int)uStack_4b8._4_4_ < -1) {
              if (param_6 < ~uStack_4b8._4_4_) goto LAB_00561734;
              lVar12 = param_5 + (ulong)~uStack_4b8._4_4_ * 0x10;
              uVar5 = *(undefined8 *)(lVar12 + -0x10);
              param_4 = (ulong *)&uStack_494;
              (**(code **)(lVar12 + -8))(uVar5,0x13,0,param_4);
              puVar2 = (ulong *)CONCAT44(uStack_4b8._4_4_,(int)uStack_4b8);
              if ((int)uVar5 == 0) goto LAB_00561734;
              if (-1 < (int)uStack_494) goto LAB_00561594;
              if (uStack_494 < 0x80000002) {
                uStack_494 = 0x80000001;
              }
              uStack_494 = -uStack_494;
              uVar15 = 1;
              uVar14 = 1;
            }
            else {
LAB_00561594:
              uVar15 = 0;
              uVar14 = 0;
            }
            uVar16 = (ulong)uStack_4b0;
            uStack_498 = uStack_4b0;
            if ((int)uStack_4b0 < -1) {
              puVar2 = (ulong *)CONCAT44(uStack_4b8._4_4_,(int)uStack_4b8);
              if (param_6 < (uVar16 ^ 0xffffffff)) goto LAB_00561734;
              lVar12 = param_5 + (uVar16 ^ 0xffffffff) * 0x10;
              uVar5 = *(undefined8 *)(lVar12 + -0x10);
              param_4 = (ulong *)&uStack_498;
              (**(code **)(lVar12 + -8))(uVar5,0x13,0,param_4);
              puVar2 = (ulong *)CONCAT44(uStack_4b8._4_4_,(int)uStack_4b8);
              if ((int)uVar5 == 0) goto LAB_00561734;
              uVar16 = (ulong)uStack_498;
              uVar14 = uVar15;
            }
            uVar11 = (ulong)uStack_494 << 0x20 | (ulong)(bStack_4ac | uVar14) << 8;
          }
          puVar2 = (ulong *)(param_5 + (lVar9 - 1U) * 0x10);
          uVar6 = *puVar2;
          param_4 = &uStack_490;
          (*(code *)puVar2[1])(uVar6,uVar11 | bStack_4aa,uVar16,param_4);
          puVar2 = (ulong *)CONCAT44(uStack_4b8._4_4_,(int)uStack_4b8);
          if ((uVar6 & 1) == 0) goto LAB_00561734;
        }
        else {
          uVar16 = (ulong)uStack_49c;
          puVar2 = (ulong *)CONCAT44(uStack_4b8._4_4_,(int)uStack_4b8);
          if (((int)uStack_49c < 0) ||
             (uStack_49c = uStack_49c + 1,
             puVar2 = (ulong *)CONCAT44(uStack_4b8._4_4_,(int)uStack_4b8), param_6 <= uVar16))
          goto LAB_00561734;
          puVar2 = (ulong *)(param_5 + uVar16 * 0x10);
          uVar16 = *puVar2;
          param_4 = &uStack_490;
          (*(code *)puVar2[1])
                    (uVar16,(long)(char)(&UNK_008111e1)[*param_3] | 0xffffffff00000000,0xffffffff,
                     param_4);
          puVar2 = (ulong *)CONCAT44(uStack_4b8._4_4_,(int)uStack_4b8);
          if ((uVar16 & 1) == 0) goto LAB_00561734;
LAB_005614c8:
          param_3 = pbVar4 + 2;
        }
      } while (param_3 != pbVar1);
    }
    puVar2 = (ulong *)CONCAT44(uStack_4b8._4_4_,(int)uStack_4b8);
    uVar14 = 1;
  }
LAB_00561798:
  lVar9 = (long)puStack_478 - (long)puVar8;
  uVar16 = uStack_490;
  uStack_4b8 = puVar2;
  (*pcStack_488)(uStack_490,puVar8,lVar9);
  if (*(long *)PTR____stack_chk_guard_00999f88 == alStack_70[0]) {
    return (ulong)(uVar14 & 1);
  }
  ___stack_chk_fail();
  FUN_0056134c(&uStack_490);
  uVar11 = uVar16;
  __Unwind_Resume();
  lVar12 = (long)*(char *)(uVar11 + 0x17);
  uVar6 = uVar11;
  if (lVar12 < 0) {
    lVar12 = *(long *)(uVar11 + 8);
    FUN_0056138c(uVar11,FUN_005619c0,puVar8,lVar9,param_4,lVar10,param_7,param_8,uVar14,uVar16,
                 &stack0xfffffffffffffff0,FUN_00561818);
  }
  else {
    FUN_0056138c(uVar11,FUN_005619c0,puVar8,lVar9,param_4,lVar10,param_7,param_8,uVar14,uVar16,
                 &stack0xfffffffffffffff0,FUN_00561818);
  }
  if ((uVar6 & 1) != 0) {
    return uVar11;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (uVar11,lVar12,0xffffffffffffffff);
  return uVar11;
LAB_00561734:
  uVar14 = 0;
  goto LAB_00561798;
}



/* Entry: 00561818; end: 0056189b;  */

ulong FUN_00561818(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)*(char *)(param_1 + 0x17);
  uVar1 = param_1;
  if (lVar2 < 0) {
    lVar2 = *(long *)(param_1 + 8);
    FUN_0056138c(param_1,FUN_005619c0,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_0056138c(param_1,FUN_005619c0,param_2,param_3,param_4,param_5);
  }
  if ((uVar1 & 1) != 0) {
    return param_1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (param_1,lVar2,0xffffffffffffffff);
  return param_1;
}



/* Entry: 0056189c; end: 00561933;  */

void FUN_0056189c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1;
  FUN_0056138c(param_1,FUN_005619c0,param_2,param_3,param_4,param_5);
  if (((ulong)puVar1 & 1) != 0) {
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



/* Entry: 00561934; end: 005619bf;  */

ulong FUN_00561934(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar1 = param_2 - 1;
  uStack_40 = 0;
  if (param_2 != 0) {
    uStack_40 = uVar1;
  }
  uStack_38 = 0;
  plVar2 = &lStack_48;
  lStack_48 = param_1;
  FUN_0056138c(plVar2,FUN_00561b44);
  if (((ulong)plVar2 & 1) != 0) {
    if (param_2 != 0) {
      if (uStack_38 <= uVar1) {
        uVar1 = uStack_38;
      }
      *(undefined1 *)(param_1 + uVar1) = 0;
    }
    return uStack_38;
  }
  ___error();
  *(undefined4 *)plVar2 = 0x16;
  return 0xffffffff;
}



/* Entry: 005619c0; end: 005619c3;  */

void FUN_005619c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 005619c4; end: 00561b43;  */

undefined8 FUN_005619c4(undefined8 *param_1,int *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uStack_48;
  uint uStack_44;
  
  iVar3 = *param_2;
  if ((ulong)param_1[2] <= (long)iVar3 - 1U) {
    return 0;
  }
  lVar6 = param_1[1];
  if ((char)param_2[3] == '\0') {
    uVar5 = 0xffffffff00000000;
    uVar7 = 0xffffffff;
    goto LAB_00561b10;
  }
  uStack_44 = param_2[1];
  if ((int)uStack_44 < -1) {
    if ((ulong)param_1[2] < (ulong)~uStack_44) {
      return 0;
    }
    lVar1 = lVar6 + (ulong)~uStack_44 * 0x10;
    uVar4 = *(undefined8 *)(lVar1 + -0x10);
    (**(code **)(lVar1 + -8))(uVar4,0x13,0,&uStack_44);
    if ((int)uVar4 == 0) {
      return 0;
    }
    if (-1 < (int)uStack_44) goto LAB_00561a50;
    if (uStack_44 < 0x80000002) {
      uStack_44 = 0x80000001;
    }
    uStack_44 = -uStack_44;
    uVar8 = 1;
    uVar7 = 1;
    uStack_48 = param_2[2];
  }
  else {
LAB_00561a50:
    uVar8 = 0;
    uVar7 = 0;
    uStack_48 = param_2[2];
  }
  if ((int)uStack_48 < -1) {
    if ((ulong)param_1[2] < (ulong)~uStack_48) {
      return 0;
    }
    lVar1 = param_1[1] + (ulong)~uStack_48 * 0x10;
    uVar4 = *(undefined8 *)(lVar1 + -0x10);
    (**(code **)(lVar1 + -8))(uVar4,0x13,0,&uStack_48);
    uVar7 = uVar8;
    if ((int)uVar4 == 0) {
      return 0;
    }
  }
  uVar5 = (ulong)uStack_44 << 0x20 | (ulong)(*(byte *)(param_2 + 3) | uVar7) << 8;
  uVar7 = uStack_48;
LAB_00561b10:
  puVar2 = (undefined8 *)(lVar6 + ((long)iVar3 - 1U) * 0x10);
  uVar4 = *puVar2;
  (*(code *)puVar2[1])(uVar4,uVar5 | *(byte *)((long)param_2 + 0xe),uVar7,*param_1);
  return uVar4;
}



/* Entry: 00561b44; end: 00561b9b;  */

void FUN_00561b44(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_1[1];
  if (param_3 <= (ulong)param_1[1]) {
    uVar1 = param_3;
  }
  _memcpy(*param_1,param_2,uVar1);
  *param_1 = *param_1 + uVar1;
  param_1[1] = param_1[1] - uVar1;
  param_1[2] = param_1[2] + param_3;
  return;
}



/* Entry: 00561b9c; end: 00561c77;  */

void FUN_00561b9c(undefined8 *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pcVar1 = "";
  pcVar2 = pcVar1;
  if ((param_2 & 1) != 0) {
    pcVar2 = "-";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pcVar2,param_2 & 1);
  pcVar2 = pcVar1;
  if ((param_2 & 2) != 0) {
    pcVar2 = "+";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pcVar2,(param_2 & 2) >> 1);
  pcVar2 = pcVar1;
  if ((param_2 & 4) != 0) {
    pcVar2 = " ";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pcVar2,(param_2 & 4) >> 2);
  pcVar2 = pcVar1;
  if ((param_2 & 8) != 0) {
    pcVar2 = "#";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pcVar2,(param_2 & 8) >> 3);
  if ((param_2 & 0x10) != 0) {
    pcVar1 = "0";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pcVar1,(param_2 & 0x10) >> 4);
  return;
}



/* Entry: 00561c78; end: 00561f33;  */

undefined8
FUN_00561c78(undefined8 *param_1,undefined8 param_2,ulong param_3,uint param_4,uint param_5,
            uint param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  uVar7 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU));
  uVar5 = param_3;
  if (param_5 <= param_3) {
    uVar5 = (ulong)param_5;
  }
  if (-1 < (int)param_5) {
    param_3 = uVar5;
  }
  uVar5 = 0;
  if (param_3 <= uVar7) {
    uVar5 = uVar7 - param_3;
  }
  if ((param_6 & 1) == 0) {
    if (param_3 < uVar7) {
      puVar6 = (undefined8 *)param_1[3];
      param_1[2] = param_1[2] + uVar5;
      puVar1 = param_1 + 0x84;
      uVar7 = (long)puVar1 - (long)puVar6;
      if (uVar7 <= uVar5 && uVar5 - uVar7 != 0) {
        puVar2 = param_1 + 4;
        puVar4 = puVar1;
        if (puVar1 != puVar6) {
          _memset(puVar6,0x20,uVar7);
          lVar3 = param_1[3];
          param_1[3] = (undefined8 *)(lVar3 + uVar7);
          puVar4 = (undefined8 *)(lVar3 + uVar7);
        }
        (*(code *)param_1[1])(*param_1,puVar2,(long)puVar4 - (long)puVar2);
        param_1[3] = puVar2;
        for (uVar5 = uVar5 - uVar7; puVar6 = puVar2, 0x400 < uVar5; uVar5 = uVar5 - 0x400) {
          _memset(puVar2,0x20,0x400);
          param_1[3] = puVar1;
          (*(code *)param_1[1])(*param_1,puVar2,0x400);
          param_1[3] = puVar2;
        }
      }
      _memset(puVar6,0x20,uVar5);
      param_1[3] = param_1[3] + uVar5;
    }
    if (param_3 == 0) {
      return 1;
    }
    lVar3 = param_1[3];
    param_1[2] = param_1[2] + param_3;
    if ((ulong)((long)param_1 + (0x420 - lVar3)) <= param_3) {
      puVar1 = param_1 + 4;
      (*(code *)param_1[1])(*param_1,puVar1,lVar3 - (long)puVar1);
      param_1[3] = puVar1;
      (*(code *)param_1[1])(*param_1,param_2,param_3);
      return 1;
    }
    _memcpy(lVar3,param_2,param_3);
  }
  else {
    if (param_3 != 0) {
      lVar3 = param_1[3];
      param_1[2] = param_1[2] + param_3;
      if (param_3 < (ulong)((long)param_1 + (0x420 - lVar3))) {
        _memcpy(lVar3,param_2,param_3);
        param_1[3] = param_1[3] + param_3;
      }
      else {
        puVar1 = param_1 + 4;
        (*(code *)param_1[1])(*param_1,puVar1,lVar3 - (long)puVar1);
        param_1[3] = puVar1;
        (*(code *)param_1[1])(*param_1,param_2,param_3);
      }
    }
    if (uVar7 <= param_3) {
      return 1;
    }
    puVar6 = (undefined8 *)param_1[3];
    param_1[2] = param_1[2] + uVar5;
    puVar1 = param_1 + 0x84;
    uVar7 = (long)puVar1 - (long)puVar6;
    if (uVar7 <= uVar5 && uVar5 - uVar7 != 0) {
      puVar2 = param_1 + 4;
      puVar4 = puVar1;
      if (puVar1 != puVar6) {
        _memset(puVar6,0x20,uVar7);
        lVar3 = param_1[3];
        param_1[3] = (undefined8 *)(lVar3 + uVar7);
        puVar4 = (undefined8 *)(lVar3 + uVar7);
      }
      (*(code *)param_1[1])(*param_1,puVar2,(long)puVar4 - (long)puVar2);
      param_1[3] = puVar2;
      for (uVar5 = uVar5 - uVar7; puVar6 = puVar2, 0x400 < uVar5; uVar5 = uVar5 - 0x400) {
        _memset(puVar2,0x20,0x400);
        param_1[3] = puVar1;
        (*(code *)param_1[1])(*param_1,puVar2,0x400);
        param_1[3] = puVar2;
      }
    }
    _memset(puVar6,0x20,uVar5);
    param_3 = uVar5;
  }
  param_1[3] = param_1[3] + param_3;
  return 1;
}



/* Entry: 00561f34; end: 005628ef;  */

segment_command *
FUN_00561f34(double param_1,segment_command *param_2,segment_command *param_3,
            segment_command *param_4,undefined1 *param_5,char *param_6,char *param_7)

{
  qword *pqVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined1 uVar12;
  undefined1 auVar13 [16];
  char cVar14;
  bool bVar15;
  segment_command *psVar16;
  segment_command *psVar17;
  segment_command *psVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  int iVar21;
  uint uVar22;
  undefined2 *puVar23;
  byte *pbVar24;
  segment_command *psVar25;
  qword *pqVar26;
  char *pcVar27;
  byte *pbVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  char *pcVar31;
  byte bVar32;
  long lVar33;
  segment_command *psVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  segment_command *psVar38;
  uint uVar39;
  segment_command *psVar40;
  segment_command *psVar41;
  ulong uVar42;
  qword *pqVar43;
  ulong uVar44;
  ulong uVar45;
  double dVar46;
  undefined1 auStack_150 [16];
  segment_command *psStack_140;
  segment_command *psStack_138;
  uint uStack_12c;
  undefined1 auStack_128 [42];
  undefined1 uStack_fe;
  segment_command sStack_fd;
  byte bStack_79;
  undefined1 uStack_78;
  char cStack_77;
  char cStack_76;
  char acStack_75 [13];
  long lStack_68;
  
  psVar34 = (segment_command *)auStack_150;
  psVar41 = (segment_command *)auStack_150;
  puVar19 = auStack_150;
  puVar20 = auStack_150;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((long)param_1 < 0) {
    psVar38 = (segment_command *)(segment_command_00000020.segname + 5);
    dVar46 = -param_1;
LAB_00561fb0:
    puVar23 = (undefined2 *)(auStack_128 + 1);
    auStack_128[0] = (char)psVar38;
  }
  else {
    bVar32 = *(byte *)((long)&param_2->cmd + 1);
    dVar46 = param_1;
    if ((bVar32 >> 1 & 1) != 0) {
      psVar38 = (segment_command *)(segment_command_00000020.segname + 3);
      goto LAB_00561fb0;
    }
    if ((bVar32 >> 2 & 1) != 0) {
      psVar38 = &segment_command_00000020;
      goto LAB_00561fb0;
    }
    psVar38 = (segment_command *)0x0;
    puVar23 = (undefined2 *)auStack_128;
  }
  if (NAN(dVar46)) {
    bVar32 = (byte)param_2->cmd;
    bVar15 = (bVar32 & 0xf9) == 9 || bVar32 == 7;
    pcVar27 = "nan";
    pcVar31 = "NAN";
LAB_00561ff8:
    if (!bVar15) {
      pcVar31 = pcVar27;
    }
    *puVar23 = *(undefined2 *)pcVar31;
    *(char *)(puVar23 + 1) = pcVar31[2];
    param_5 = (undefined1 *)(ulong)param_2->cmdsize;
    psVar18 = (segment_command *)auStack_128;
    psVar17 = (segment_command *)((long)puVar23 + (3 - (long)auStack_128));
    param_7 = (char *)(ulong)(*(byte *)((long)&param_2->cmd + 1) & 1);
    param_6 = (char *)0xffffffff;
    psVar16 = param_3;
    FUN_00561c78(param_3,psVar18);
    param_4 = psVar17;
    if (((ulong)psVar16 & 1) == 0) goto LAB_00562038;
    goto LAB_0056285c;
  }
  if (ABS(dVar46) == INFINITY) {
    bVar32 = (byte)param_2->cmd;
    bVar15 = (bVar32 & 0xf9) == 9 || bVar32 == 7;
    pcVar27 = "inf";
    pcVar31 = "INF";
    goto LAB_00561ff8;
  }
LAB_00562038:
  uVar39 = *(uint *)param_2->segname;
  uVar22 = 6;
  if (-1 < (int)uVar39) {
    uVar22 = uVar39;
  }
  psVar40 = (segment_command *)(ulong)uVar22;
  uStack_12c = 0;
  _frexp(auStack_128);
  _ldexp(0x35);
  uVar35 = auStack_128._0_4_ - 0x35;
  psVar17 = (segment_command *)(ulong)uVar35;
  psVar16 = (segment_command *)(long)dVar46;
  bVar11 = (byte)param_2->cmd;
  bVar32 = bVar11 & 0xfe;
  uVar12 = SUB81(psVar38,0);
  psVar18 = psVar17;
  psVar25 = (segment_command *)0x0;
  if (bVar32 < 0xc) {
    if (bVar32 == 8) {
      if ((int)auStack_128._0_4_ < 0x35) {
        if (0xffffff7f < uVar35) {
          uStack_fe = 0x2e;
          uVar42 = (ulong)psVar16 >> ((ulong)(0x35 - auStack_128._0_4_) & 0x3f);
          if (uVar35 < 0xffffffc1) {
            uVar42 = 0;
          }
          psVar41 = (segment_command *)(auStack_128 + 0x29);
          do {
            psVar18 = psVar41;
            psVar41 = (segment_command *)((long)&psVar18[-1].flags + 3);
            *(byte *)&psVar18->cmd = (char)uVar42 + (char)(uVar42 / 10) * -10 | 0x30;
            bVar15 = 9 < uVar42;
            uVar42 = uVar42 / 10;
          } while (bVar15);
          psVar38 = (segment_command *)(auStack_128 + 0x2b);
          *(byte *)&psVar41->cmd = 0x30;
          if (uVar35 < 0xffffffc0) {
            auStack_150[0] = uVar12;
            auStack_150._8_8_ = psVar40;
            psStack_140 = param_2;
            psStack_138 = param_3;
            FUN_005645ac(psVar16,0,psVar38,(ulong)(0x35 - auStack_128._0_4_),psVar40);
          }
          else {
            uVar45 = (long)psVar16 << ((ulong)(auStack_128._0_4_ + 0xb) & 0x3f);
            psVar16 = psVar38;
            uVar42 = uVar45;
            psVar17 = psVar40;
            if (uVar22 != 0) {
              do {
                psVar16 = psVar38;
                auStack_150[0] = uVar12;
                auStack_150._8_8_ = psVar40;
                psStack_140 = param_2;
                psStack_138 = param_3;
                if (uVar42 == 0) goto LAB_00562704;
                uVar45 = uVar42 * 10;
                auVar13._8_8_ = 0;
                auVar13._0_8_ = uVar42;
                psVar16 = (segment_command *)((long)&psVar38->cmd + 1);
                *(byte *)&psVar38->cmd = SUB161(auVar13 * ZEXT816(10),8) | 0x30;
                psVar17 = (segment_command *)((long)&psVar17[-1].flags + 3);
                psVar38 = psVar16;
                uVar42 = uVar45;
              } while (psVar17 != (segment_command *)0x0);
            }
            auStack_150[0] = uVar12;
            auStack_150._8_8_ = psVar40;
            psStack_140 = param_2;
            psStack_138 = param_3;
            if ((long)uVar45 < 0) {
              psVar38 = psVar16;
              if (uVar45 == 0x8000000000000000) {
                pcVar27 = (char *)((long)&psVar16[-1].flags + 3);
                psVar38 = (segment_command *)(pcVar27 + -(ulong)(*pcVar27 == '.'));
                bVar32 = (byte)psVar38->cmd;
                if ((bVar32 & 0x81) == 1) {
                  do {
                    if (bVar32 != 0x2e) {
                      if (bVar32 != 0x39) goto LAB_005626fc;
                      *(byte *)&psVar38->cmd = 0x30;
                    }
                    psVar38 = (segment_command *)((long)&psVar38[-1].flags + 3);
                    bVar32 = (byte)psVar38->cmd;
                  } while( true );
                }
              }
              else {
                while( true ) {
                  do {
                    psVar38 = (segment_command *)((long)&psVar38[-1].flags + 3);
                    bVar32 = (byte)psVar38->cmd;
                  } while (bVar32 == 0x2e);
                  if (bVar32 != 0x39) break;
                  *(byte *)&psVar38->cmd = 0x30;
                }
LAB_005626fc:
                *(byte *)&psVar38->cmd = bVar32 + 1;
              }
            }
          }
LAB_00562704:
          if ((byte)psVar41->cmd != 0x30) {
            psVar18 = psVar41;
          }
          psVar17 = (segment_command *)((long)psVar16 - (long)psVar18);
          psVar41 = psVar16;
          goto joined_r0x00562718;
        }
        psVar17 = (segment_command *)(ulong)(0x35 - auStack_128._0_4_);
        psVar18 = (segment_command *)0x0;
        auStack_150[0] = uVar12;
        auStack_150._8_8_ = psVar40;
        psStack_140 = param_2;
        psStack_138 = param_3;
        FUN_00562d74(psVar16,0);
        param_5 = puVar20;
      }
      else {
        iVar21 = (auStack_128._0_4_ - (int)LZCOUNT(psVar16)) + 0xb;
        if (iVar21 < 0x81) {
          psVar18 = (segment_command *)(auStack_128 + 0x2a);
          uStack_fe = 0x2e;
          psVar41 = (segment_command *)(auStack_128 + 0x2b);
          if (iVar21 < 0x41) {
            uVar42 = (long)psVar16 << ((ulong)psVar17 & 0x3f);
            do {
              psVar18 = (segment_command *)((long)&psVar18[-1].flags + 3);
              *(byte *)&psVar18->cmd = (char)uVar42 + (char)(uVar42 / 10) * -10 | 0x30;
              bVar15 = 9 < uVar42;
              uVar42 = uVar42 / 10;
            } while (bVar15);
          }
          else {
            uVar45 = (long)psVar16 << ((ulong)psVar17 & 0x3f);
            bVar15 = (uVar35 & 0x40) == 0;
            uVar42 = uVar45;
            if (bVar15) {
              uVar42 = ((ulong)psVar16 >> 1) >> ((ulong)~uVar35 & 0x3f);
            }
            uVar44 = 0;
            if (bVar15) {
              uVar44 = uVar45;
            }
            if (uVar42 != 0) {
              do {
                uVar39 = (int)uVar44 + (int)(uVar44 / 10) * -10 + (int)(uVar42 % 10) * 6;
                uVar22 = (uVar39 & 0xff) / 10;
                uVar44 = uVar44 / 10 + (uVar42 % 10) * 0x1999999999999999 + (ulong)uVar22;
                psVar18 = (segment_command *)((long)&psVar18[-1].flags + 3);
                *(byte *)&psVar18->cmd = (char)uVar39 + (char)uVar22 * -10 | 0x30;
                bVar15 = 9 < uVar42;
                uVar42 = uVar42 / 10;
              } while (bVar15);
            }
            do {
              psVar18 = (segment_command *)((long)&psVar18[-1].flags + 3);
              *(byte *)&psVar18->cmd = (char)uVar44 + (char)(uVar44 / 10) * -10 | 0x30;
              bVar15 = 9 < uVar44;
              uVar44 = uVar44 / 10;
            } while (bVar15);
          }
          psVar17 = (segment_command *)((long)psVar41 - (long)psVar18);
          auStack_150[0] = uVar12;
          auStack_150._8_8_ = psVar40;
          psStack_140 = param_2;
          psStack_138 = param_3;
joined_r0x00562718:
          if (((segment_command *)auStack_150._8_8_ == (segment_command *)0x0) &&
             ((*(byte *)((long)&psStack_140->cmd + 1) >> 3 & 1) == 0)) {
            psVar17 = (segment_command *)((long)&psVar17[-1].flags + 3);
          }
          param_7 = "";
          param_6 = ((segment_command *)auStack_150._8_8_)->segname +
                    (long)(auStack_128 + (0x23 - (long)psVar41));
          param_5 = (undefined1 *)0x0;
          FUN_00564700();
          psVar16 = psVar34;
        }
        else {
          psVar18 = (segment_command *)0x0;
          auStack_150[0] = uVar12;
          auStack_150._8_8_ = psVar40;
          psStack_140 = param_2;
          psStack_138 = param_3;
          FUN_00562c7c(psVar16,0);
          param_5 = puVar19;
        }
      }
LAB_0056285c:
      param_4 = psVar17;
      psVar25 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    }
    else if (bVar32 == 10) {
      param_5 = auStack_128;
      param_6 = (char *)&uStack_12c;
      FUN_00564ef0();
      if (((ulong)psVar16 & 1) != 0) {
        pbVar24 = (byte *)sStack_fd._53_8_;
        if (((*(byte *)((long)&param_2->cmd + 1) >> 3 & 1) == 0) &&
           (pbVar24 = (byte *)(sStack_fd._53_8_ + -1), *(byte *)(sStack_fd._53_8_ + -1) != 0x2e)) {
          pbVar24 = (byte *)sStack_fd._53_8_;
        }
        bVar11 = (byte)param_2->cmd;
        bVar32 = 0x45;
        if ((bVar11 & 0xf9) != 9 && bVar11 != 7) {
          bVar32 = 0x65;
        }
        *pbVar24 = bVar32;
        pbVar28 = pbVar24 + 2;
        bVar32 = 0x2d;
        if (-1 < (int)uStack_12c) {
          bVar32 = 0x2b;
        }
        uVar22 = -uStack_12c;
        if (-1 < (int)uStack_12c) {
          uVar22 = uStack_12c;
        }
        pbVar24[1] = bVar32;
        sStack_fd._53_8_ = pbVar24 + 3;
        if (uVar22 < 100) goto LAB_005625c8;
LAB_00562124:
        *pbVar28 = (char)(uVar22 / 100) + 0x30;
        cVar14 = (char)(uVar22 / 10);
        *(byte *)sStack_fd._53_8_ =
             cVar14 + (char)(((ulong)uVar22 / 10) * 0x1999999a >> 0x20) * -10 | 0x30;
        bVar32 = (char)uVar22 + cVar14 * -10;
        sStack_fd._53_8_ = (byte *)(sStack_fd._53_8_ + 1);
        goto LAB_005625e8;
      }
      FUN_00565924(param_1,param_2,param_3);
      psVar16 = param_2;
      psVar18 = param_3;
      param_4 = psVar40;
      psVar25 = param_2;
    }
  }
  else if (bVar32 == 0xc) {
    if (uVar22 == 0) {
      psVar40 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    }
    param_4 = (segment_command *)((long)&psVar40[-1].flags + 3);
    param_5 = auStack_128;
    param_6 = (char *)&uStack_12c;
    FUN_00564ef0();
    if (((ulong)psVar16 & 1) != 0) {
      psVar41 = (segment_command *)(ulong)uStack_12c;
      uVar39 = uStack_12c;
      if ((int)uStack_12c < 0) {
        if (0xfffffffb < uStack_12c) {
          *(byte *)((long)(dword *)sStack_fd._45_8_ + 1) = (byte)*(dword *)sStack_fd._45_8_;
          psVar41 = (segment_command *)sStack_fd._45_8_;
          for (uVar22 = uStack_12c; uVar22 != 0xffffffff; uVar22 = uVar22 + 1) {
            *(byte *)&psVar41->cmd = 0x30;
            psVar41 = (segment_command *)((long)&psVar41[-1].flags + 3);
          }
          uVar39 = 0;
          sStack_fd._45_8_ = (long)&psVar41[-1].flags + 3;
          *(byte *)&psVar41->cmd = 0x2e;
          *(byte *)&((segment_command *)sStack_fd._45_8_)->cmd = 0x30;
        }
      }
      else if ((psVar41 < psVar40) && (uStack_12c != 0)) {
        pbVar24 = (byte *)((long)(dword *)sStack_fd._45_8_ + 1);
        bVar32 = *pbVar24;
        _memmove(pbVar24,(byte *)((long)(dword *)sStack_fd._45_8_ + 2),psVar41);
        pbVar24[(long)psVar41] = bVar32;
        uVar39 = 0;
      }
      if ((*(byte *)((long)&param_2->cmd + 1) >> 3 & 1) == 0) {
        bVar32 = *(byte *)(sStack_fd._53_8_ + -1);
        pbVar24 = (byte *)(sStack_fd._53_8_ + -1);
        while (pbVar28 = pbVar24, bVar32 == 0x30) {
          pbVar24 = pbVar28 + -1;
          sStack_fd._53_8_ = pbVar28;
          bVar32 = pbVar28[-1];
        }
        if (bVar32 == 0x2e) {
          sStack_fd._53_8_ = pbVar28;
        }
      }
      if (uVar39 != 0) {
        bVar11 = (byte)param_2->cmd;
        bVar32 = 0x45;
        if ((bVar11 & 0xf9) != 9 && bVar11 != 7) {
          bVar32 = 0x65;
        }
        *(byte *)sStack_fd._53_8_ = bVar32;
        pbVar28 = (byte *)(sStack_fd._53_8_ + 2);
        bVar32 = 0x2d;
        if (-1 < (int)uVar39) {
          bVar32 = 0x2b;
        }
        uVar22 = -uVar39;
        if (-1 < (int)uVar39) {
          uVar22 = uVar39;
        }
        *(byte *)(sStack_fd._53_8_ + 1) = bVar32;
        sStack_fd._53_8_ = sStack_fd._53_8_ + 3;
        if (99 < uVar22) goto LAB_00562124;
LAB_005625c8:
        bVar32 = (byte)((uVar22 & 0xff) / 10);
        *pbVar28 = bVar32 | 0x30;
        bVar32 = (char)uVar22 + bVar32 * -10;
LAB_005625e8:
        *(byte *)sStack_fd._53_8_ = bVar32 | 0x30;
        sStack_fd._53_8_ = (byte *)(sStack_fd._53_8_ + 1);
      }
      psVar17 = (segment_command *)(sStack_fd._53_8_ + -sStack_fd._45_8_);
      param_6 = (char *)(ulong)param_2->cmdsize;
      param_5 = (undefined1 *)(ulong)*(byte *)((long)&param_2->cmd + 1);
      psVar18 = (segment_command *)sStack_fd._45_8_;
      FUN_005628f0();
      psVar16 = psVar38;
      param_7 = (char *)param_3;
      goto LAB_0056285c;
    }
    FUN_00565924(param_1,param_2,param_3);
    psVar16 = param_2;
    psVar18 = param_3;
    psVar25 = param_2;
  }
  else if (bVar32 == 0xe) {
    iVar21 = auStack_128._0_4_ + 0xb;
    if (0 < (long)psVar16) {
      iVar2 = iVar21;
      if (-0x3ff < iVar21) {
        iVar2 = -0x3fe;
      }
      do {
        if (iVar21 < -0x3fd) {
          uVar42 = 0;
          uVar22 = 0xfffffc02;
          psVar16 = (segment_command *)((ulong)psVar16 >> ((ulong)(-iVar2 - 0x3fe) & 0x3f));
          goto joined_r0x00562760;
        }
        psVar16 = (segment_command *)((long)psVar16 * 2);
        iVar21 = iVar21 + -1;
      } while (0 < (long)psVar16);
    }
    uVar42 = (ulong)psVar16 >> 0x3f;
    uVar22 = 0;
    if (psVar16 != (segment_command *)0x0) {
      uVar22 = iVar21 - 1;
    }
    psVar16 = (segment_command *)((long)psVar16 << 1);
joined_r0x00562760:
    psVar34 = psVar16;
    if (-1 < (int)uVar39) {
      uVar45 = 0;
      if (psVar40 < (segment_command *)((long)&MACH_HEADER.ncmds + 1)) {
        uVar45 = 0x10 - (long)psVar40;
      }
      if (uVar39 < 0x10) {
        uVar44 = uVar45 * 4;
        uVar36 = (ulong)psVar16 & 0xffffffffffffffffU >> (uVar45 * -4 & 0x3f);
        uVar37 = 8L << ((ulong)((int)uVar44 - 4) & 0x3f);
        if (uVar36 == uVar37) {
          uVar35 = (uint)uVar42;
          if (uVar45 != 0x10) {
            uVar35 = (uint)(((ulong)psVar16 & 0xfL << (uVar44 & 0x3f)) >> (uVar44 & 0x3f));
          }
          if ((uVar35 & 1) != 0) {
LAB_00562620:
            lVar3 = 0;
            if (uVar45 < 0x10) {
              lVar3 = 1L << (uVar44 & 0x3f);
            }
            bVar15 = (long)psVar16 < 0;
            psVar16 = (segment_command *)(psVar16->segname + lVar3 + -8);
            uVar35 = (uint)(0xf < uVar45);
            if (bVar15 && -1 < (long)psVar16) {
              uVar35 = 1;
            }
            uVar42 = (ulong)((uint)uVar42 + uVar35);
          }
        }
        else if (uVar37 < uVar36) goto LAB_00562620;
      }
      else {
        uVar45 = 0;
      }
      uVar44 = 0xffffffffffffffff;
      if (uVar39 < 0x10) {
        uVar44 = ~(0xffffffffffffffffU >> (uVar45 * -4 & 0x3f));
      }
      psVar34 = (segment_command *)(uVar44 & (ulong)psVar16);
      psVar16 = psVar40;
    }
    lVar3 = 0;
    if (bVar11 != 0xf) {
      lVar3 = 0x10;
    }
    bStack_79 = 0x30;
    uStack_78 = 0x58;
    if (bVar11 != 0xf) {
      uStack_78 = 0x78;
    }
    cStack_77 = "0123456789ABCDEF0123456789abcdef"[uVar42 + lVar3];
    if ((psVar16 == (segment_command *)0x0) && ((*(byte *)((long)&param_2->cmd + 1) >> 3 & 1) == 0))
    {
      pcVar27 = &cStack_76;
    }
    else {
      pcVar27 = acStack_75;
      cStack_76 = '.';
    }
    lVar33 = 0;
    for (; psVar34 != (segment_command *)0x0; psVar34 = (segment_command *)((long)psVar34 << 4)) {
      *pcVar27 = "0123456789ABCDEF0123456789abcdef"[((ulong)psVar34 >> 0x3c) + lVar3];
      lVar33 = lVar33 + 1;
      pcVar27 = pcVar27 + 1;
    }
    param_6 = (char *)0x0;
    if (-1 < (int)uVar39) {
      param_6 = (char *)((long)psVar40 - lVar33);
    }
    psVar17 = (segment_command *)(pcVar27 + -(long)&bStack_79);
    uVar29 = 0x50;
    if (bVar11 != 0xf) {
      uVar29 = 0x70;
    }
    uVar30 = 0x2b;
    if (0x7fffffff < uVar22) {
      uVar30 = 0x2d;
    }
    auStack_128[1] = uVar30;
    auStack_128[0] = uVar29;
    uVar39 = -uVar22;
    if (-1 < (int)uVar22) {
      uVar39 = uVar22;
    }
    auStack_150[0] = uVar12;
    auStack_150._8_8_ = psVar40;
    psStack_140 = param_2;
    psStack_138 = param_3;
    func_0x005748b4(uVar39,auStack_128 + 2);
    _strlen(auStack_128);
    psVar18 = (segment_command *)&bStack_79;
    param_7 = auStack_128;
    param_5 = (undefined1 *)0x0;
    FUN_00564700(auStack_150,psVar18);
    psVar16 = psVar41;
    goto LAB_0056285c;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return psVar25;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  psVar41 = param_4;
  if ((int)psVar16 != 0) {
    psVar41 = (segment_command *)((long)&param_4->cmd + 1);
  }
  uVar42 = 0;
  if (psVar41 <= (segment_command *)((ulong)param_6 & 0xffffffff)) {
    uVar42 = (long)((ulong)param_6 & 0xffffffff) - (long)psVar41;
  }
  uVar45 = uVar42;
  if (0x7fffffff < (uint)param_6) {
    uVar45 = 0;
  }
  psVar41 = psVar16;
  if (((ulong)param_5 & 1) == 0) {
    if ((((uint)param_5 & 0xff) >> 4 & 1) == 0) {
      if (uVar45 == 0) goto LAB_0056298c;
      psVar41 = (segment_command *)((segment_command *)param_7)->vmaddr;
      *(ulong *)(((segment_command *)param_7)->segname + 8) =
           *(long *)(((segment_command *)param_7)->segname + 8) + uVar45;
      pqVar43 = &((segment_command *)((long)param_7 + 0x3f0))->filesize;
      uVar44 = (long)pqVar43 - (long)psVar41;
      if (uVar44 <= uVar45 && uVar45 - uVar44 != 0) {
        pqVar1 = &((segment_command *)param_7)->vmsize;
        pqVar26 = pqVar43;
        if ((segment_command *)pqVar43 != psVar41) {
          _memset(psVar41,0x20,uVar44);
          pqVar26 = (qword *)(((segment_command *)param_7)->vmaddr + uVar44);
          ((segment_command *)param_7)->vmaddr = (qword)pqVar26;
        }
        uVar4._0_4_ = ((segment_command *)param_7)->cmd;
        uVar4._4_4_ = ((segment_command *)param_7)->cmdsize;
        (**(code **)((segment_command *)param_7)->segname)
                  (uVar4,pqVar1,(long)pqVar26 - (long)pqVar1);
        ((segment_command *)param_7)->vmaddr = (qword)pqVar1;
        for (uVar42 = uVar45 - uVar44; psVar41 = (segment_command *)pqVar1, 0x400 < uVar42;
            uVar42 = uVar42 - 0x400) {
          _memset(pqVar1,0x20,0x400);
          ((segment_command *)param_7)->vmaddr = (qword)pqVar43;
          uVar5._0_4_ = ((segment_command *)param_7)->cmd;
          uVar5._4_4_ = ((segment_command *)param_7)->cmdsize;
          (**(code **)((segment_command *)param_7)->segname)(uVar5,pqVar1,0x400);
          ((segment_command *)param_7)->vmaddr = (qword)pqVar1;
        }
      }
      _memset(psVar41,0x20,uVar42);
      uVar45 = 0;
      ((segment_command *)param_7)->vmaddr = ((segment_command *)param_7)->vmaddr + uVar42;
    }
    uVar44 = 0;
    uVar42 = uVar45;
  }
  else {
LAB_0056298c:
    uVar42 = 0;
    uVar44 = uVar45;
  }
  if ((int)psVar16 != 0) {
    pqVar43 = (qword *)((segment_command *)param_7)->vmaddr;
    *(long *)(((segment_command *)param_7)->segname + 8) =
         *(long *)(((segment_command *)param_7)->segname + 8) + 1;
    if (&((segment_command *)((long)param_7 + 0x3f0))->filesize == pqVar43) {
      pqVar43 = &((segment_command *)param_7)->vmsize;
      psVar41 = *(segment_command **)param_7;
      (**(code **)((segment_command *)param_7)->segname)(psVar41,pqVar43,0x400);
      ((segment_command *)param_7)->vmaddr = (qword)pqVar43;
    }
    *(char *)pqVar43 = (char)psVar16;
    ((segment_command *)param_7)->vmaddr = ((segment_command *)param_7)->vmaddr + 1;
  }
  if (uVar42 != 0) {
    psVar41 = (segment_command *)((segment_command *)param_7)->vmaddr;
    *(ulong *)(((segment_command *)param_7)->segname + 8) =
         *(long *)(((segment_command *)param_7)->segname + 8) + uVar42;
    pqVar43 = &((segment_command *)((long)param_7 + 0x3f0))->filesize;
    uVar45 = (long)pqVar43 - (long)psVar41;
    if (uVar45 <= uVar42 && uVar42 - uVar45 != 0) {
      pqVar1 = &((segment_command *)param_7)->vmsize;
      pqVar26 = pqVar43;
      if ((segment_command *)pqVar43 != psVar41) {
        _memset(psVar41,0x30,uVar45);
        pqVar26 = (qword *)(((segment_command *)param_7)->vmaddr + uVar45);
        ((segment_command *)param_7)->vmaddr = (qword)pqVar26;
      }
      uVar6._0_4_ = ((segment_command *)param_7)->cmd;
      uVar6._4_4_ = ((segment_command *)param_7)->cmdsize;
      (**(code **)((segment_command *)param_7)->segname)(uVar6,pqVar1,(long)pqVar26 - (long)pqVar1);
      ((segment_command *)param_7)->vmaddr = (qword)pqVar1;
      for (uVar42 = uVar42 - uVar45; psVar41 = (segment_command *)pqVar1, 0x400 < uVar42;
          uVar42 = uVar42 - 0x400) {
        _memset(pqVar1,0x30,0x400);
        ((segment_command *)param_7)->vmaddr = (qword)pqVar43;
        uVar7._0_4_ = ((segment_command *)param_7)->cmd;
        uVar7._4_4_ = ((segment_command *)param_7)->cmdsize;
        (**(code **)((segment_command *)param_7)->segname)(uVar7,pqVar1,0x400);
        ((segment_command *)param_7)->vmaddr = (qword)pqVar1;
      }
    }
    _memset(psVar41,0x30,uVar42);
    ((segment_command *)param_7)->vmaddr = ((segment_command *)param_7)->vmaddr + uVar42;
  }
  if (param_4 != (segment_command *)0x0) {
    psVar41 = (segment_command *)((segment_command *)param_7)->vmaddr;
    *(char **)(((segment_command *)param_7)->segname + 8) =
         param_4->segname + *(long *)(((segment_command *)param_7)->segname + 8) + -8;
    if (param_4 < (segment_command *)((long)param_7 + (0x420 - (long)psVar41))) {
      _memcpy(psVar41,psVar18,param_4);
      ((segment_command *)param_7)->vmaddr =
           (qword)(param_4->segname + (((segment_command *)param_7)->vmaddr - 8));
    }
    else {
      pqVar43 = &((segment_command *)param_7)->vmsize;
      uVar8._0_4_ = ((segment_command *)param_7)->cmd;
      uVar8._4_4_ = ((segment_command *)param_7)->cmdsize;
      (**(code **)((segment_command *)param_7)->segname)
                (uVar8,pqVar43,(long)psVar41 - (long)pqVar43);
      ((segment_command *)param_7)->vmaddr = (qword)pqVar43;
      psVar41 = *(segment_command **)param_7;
      (**(code **)((segment_command *)param_7)->segname)(psVar41,psVar18,param_4);
    }
  }
  if (uVar44 != 0) {
    psVar41 = (segment_command *)((segment_command *)param_7)->vmaddr;
    *(ulong *)(((segment_command *)param_7)->segname + 8) =
         *(long *)(((segment_command *)param_7)->segname + 8) + uVar44;
    pqVar43 = &((segment_command *)((long)param_7 + 0x3f0))->filesize;
    uVar42 = (long)pqVar43 - (long)psVar41;
    if (uVar42 <= uVar44 && uVar44 - uVar42 != 0) {
      pqVar1 = &((segment_command *)param_7)->vmsize;
      pqVar26 = pqVar43;
      if ((segment_command *)pqVar43 != psVar41) {
        _memset(psVar41,0x20,uVar42);
        pqVar26 = (qword *)(((segment_command *)param_7)->vmaddr + uVar42);
        ((segment_command *)param_7)->vmaddr = (qword)pqVar26;
      }
      uVar9._0_4_ = ((segment_command *)param_7)->cmd;
      uVar9._4_4_ = ((segment_command *)param_7)->cmdsize;
      (**(code **)((segment_command *)param_7)->segname)(uVar9,pqVar1,(long)pqVar26 - (long)pqVar1);
      ((segment_command *)param_7)->vmaddr = (qword)pqVar1;
      for (uVar44 = uVar44 - uVar42; psVar41 = (segment_command *)pqVar1, 0x400 < uVar44;
          uVar44 = uVar44 - 0x400) {
        _memset(pqVar1,0x20,0x400);
        ((segment_command *)param_7)->vmaddr = (qword)pqVar43;
        uVar10._0_4_ = ((segment_command *)param_7)->cmd;
        uVar10._4_4_ = ((segment_command *)param_7)->cmdsize;
        (**(code **)((segment_command *)param_7)->segname)(uVar10,pqVar1,0x400);
        ((segment_command *)param_7)->vmaddr = (qword)pqVar1;
      }
    }
    _memset(psVar41,0x20,uVar44);
    ((segment_command *)param_7)->vmaddr = ((segment_command *)param_7)->vmaddr + uVar44;
  }
  return psVar41;
}



/* Entry: 005628f0; end: 00562c7b;  */

void FUN_005628f0(int param_1,undefined8 param_2,ulong param_3,uint param_4,uint param_5,
                 undefined8 *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = param_3;
  if (param_1 != 0) {
    uVar8 = param_3 + 1;
  }
  uVar5 = 0;
  if (uVar8 <= param_5) {
    uVar5 = param_5 - uVar8;
  }
  uVar8 = uVar5;
  if (0x7fffffff < param_5) {
    uVar8 = 0;
  }
  if ((param_4 & 1) == 0) {
    if (((param_4 & 0xff) >> 4 & 1) == 0) {
      if (uVar8 == 0) goto LAB_0056298c;
      puVar4 = (undefined8 *)param_6[3];
      param_6[2] = param_6[2] + uVar8;
      puVar6 = param_6 + 0x84;
      uVar7 = (long)puVar6 - (long)puVar4;
      if (uVar7 <= uVar8 && uVar8 - uVar7 != 0) {
        puVar1 = param_6 + 4;
        puVar3 = puVar6;
        if (puVar6 != puVar4) {
          _memset(puVar4,0x20,uVar7);
          lVar2 = param_6[3];
          param_6[3] = (undefined8 *)(lVar2 + uVar7);
          puVar3 = (undefined8 *)(lVar2 + uVar7);
        }
        (*(code *)param_6[1])(*param_6,puVar1,(long)puVar3 - (long)puVar1);
        param_6[3] = puVar1;
        for (uVar5 = uVar8 - uVar7; puVar4 = puVar1, 0x400 < uVar5; uVar5 = uVar5 - 0x400) {
          _memset(puVar1,0x20,0x400);
          param_6[3] = puVar6;
          (*(code *)param_6[1])(*param_6,puVar1,0x400);
          param_6[3] = puVar1;
        }
      }
      _memset(puVar4,0x20,uVar5);
      uVar8 = 0;
      param_6[3] = param_6[3] + uVar5;
    }
    uVar7 = 0;
    uVar5 = uVar8;
  }
  else {
LAB_0056298c:
    uVar5 = 0;
    uVar7 = uVar8;
  }
  if (param_1 != 0) {
    puVar6 = (undefined8 *)param_6[3];
    param_6[2] = param_6[2] + 1;
    if (param_6 + 0x84 == puVar6) {
      puVar6 = param_6 + 4;
      (*(code *)param_6[1])(*param_6,puVar6,0x400);
      param_6[3] = puVar6;
    }
    *(char *)puVar6 = (char)param_1;
    param_6[3] = param_6[3] + 1;
  }
  if (uVar5 != 0) {
    puVar4 = (undefined8 *)param_6[3];
    param_6[2] = param_6[2] + uVar5;
    puVar6 = param_6 + 0x84;
    uVar8 = (long)puVar6 - (long)puVar4;
    if (uVar8 <= uVar5 && uVar5 - uVar8 != 0) {
      puVar1 = param_6 + 4;
      puVar3 = puVar6;
      if (puVar6 != puVar4) {
        _memset(puVar4,0x30,uVar8);
        lVar2 = param_6[3];
        param_6[3] = (undefined8 *)(lVar2 + uVar8);
        puVar3 = (undefined8 *)(lVar2 + uVar8);
      }
      (*(code *)param_6[1])(*param_6,puVar1,(long)puVar3 - (long)puVar1);
      param_6[3] = puVar1;
      for (uVar5 = uVar5 - uVar8; puVar4 = puVar1, 0x400 < uVar5; uVar5 = uVar5 - 0x400) {
        _memset(puVar1,0x30,0x400);
        param_6[3] = puVar6;
        (*(code *)param_6[1])(*param_6,puVar1,0x400);
        param_6[3] = puVar1;
      }
    }
    _memset(puVar4,0x30,uVar5);
    param_6[3] = param_6[3] + uVar5;
  }
  if (param_3 != 0) {
    lVar2 = param_6[3];
    param_6[2] = param_6[2] + param_3;
    if (param_3 < (ulong)((long)param_6 + (0x420 - lVar2))) {
      _memcpy(lVar2,param_2,param_3);
      param_6[3] = param_6[3] + param_3;
    }
    else {
      puVar6 = param_6 + 4;
      (*(code *)param_6[1])(*param_6,puVar6,lVar2 - (long)puVar6);
      param_6[3] = puVar6;
      (*(code *)param_6[1])(*param_6,param_2,param_3);
    }
  }
  if (uVar7 != 0) {
    puVar4 = (undefined8 *)param_6[3];
    param_6[2] = param_6[2] + uVar7;
    puVar6 = param_6 + 0x84;
    uVar8 = (long)puVar6 - (long)puVar4;
    if (uVar8 <= uVar7 && uVar7 - uVar8 != 0) {
      puVar1 = param_6 + 4;
      puVar3 = puVar6;
      if (puVar6 != puVar4) {
        _memset(puVar4,0x20,uVar8);
        lVar2 = param_6[3];
        param_6[3] = (undefined8 *)(lVar2 + uVar8);
        puVar3 = (undefined8 *)(lVar2 + uVar8);
      }
      (*(code *)param_6[1])(*param_6,puVar1,(long)puVar3 - (long)puVar1);
      param_6[3] = puVar1;
      for (uVar7 = uVar7 - uVar8; puVar4 = puVar1, 0x400 < uVar7; uVar7 = uVar7 - 0x400) {
        _memset(puVar1,0x20,0x400);
        param_6[3] = puVar6;
        (*(code *)param_6[1])(*param_6,puVar1,0x400);
        param_6[3] = puVar1;
      }
    }
    _memset(puVar4,0x20,uVar7);
    param_6[3] = param_6[3] + uVar7;
  }
  return;
}



/* Entry: 00562c7c; end: 00562d73;  */

/* WARNING: Possible PIC construction at 0x00562d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00563048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x005630a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00563070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00562d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00562d24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00562d40) */
/* WARNING: Removing unreachable block (ram,0x00563074) */
/* WARNING: Removing unreachable block (ram,0x00563080) */
/* WARNING: Removing unreachable block (ram,0x0056304c) */
/* WARNING: Removing unreachable block (ram,0x00563058) */
/* WARNING: Removing unreachable block (ram,0x00562d0c) */
/* WARNING: Removing unreachable block (ram,0x00562d28) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00562c7c(char ***param_1,undefined8 param_2,dword *param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  char **ppcVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  char **ppcVar8;
  int iVar9;
  uint uVar10;
  qword qVar11;
  qword qVar12;
  qword qVar13;
  dword *pdVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  bool bVar18;
  char ***pppcVar19;
  char ***pppcVar20;
  char **ppcVar21;
  code *pcVar22;
  segment_command *psVar23;
  code *pcVar24;
  undefined1 *puVar25;
  ulong uVar26;
  long lVar27;
  char ***pppcVar28;
  char *pcVar29;
  char *pcVar30;
  char **ppcVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  undefined4 *puVar38;
  dword *unaff_x19;
  dword *pdVar40;
  char ***unaff_x20;
  segment_command *psVar41;
  char ***unaff_x21;
  undefined8 *puVar42;
  ulong uVar43;
  char *unaff_x22;
  char ***unaff_x23;
  char cVar44;
  char ***unaff_x24;
  char *pcVar45;
  char ***unaff_x25;
  char *pcVar46;
  long *plVar47;
  char *unaff_x26;
  dword *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *******pppppppuVar48;
  undefined8 *******pppppppuVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  byte abStack_2200 [7840];
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
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
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
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
  undefined8 uStack_1e8;
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
  long lStack_158;
  undefined8 *puStack_150;
  dword *pdStack_148;
  undefined8 *******pppppppuStack_140;
  code *pcStack_138;
  undefined1 auStack_130 [8];
  code *pcStack_128;
  char ***pppcStack_120;
  char *pcStack_118;
  dword **ppdStack_110;
  dword *pdStack_108;
  char **ppcStack_100;
  code *pcStack_f8;
  char ***pppcStack_f0;
  code *pcStack_e8;
  int iStack_e0;
  long lStack_c8;
  undefined8 *******pppppppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  char *pcStack_58;
  char **ppcStack_50;
  code *pcStack_48;
  char ***pppcStack_40;
  undefined8 uStack_38;
  int iStack_30;
  long lStack_18;
  undefined4 *puVar39;
  
  puVar15 = (undefined8 *)auStack_60;
  puVar16 = auStack_60;
  puVar17 = auStack_60;
  pppppppuVar48 = (undefined8 *******)&stack0xfffffffffffffff0;
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  iStack_30 = (int)param_3;
  ppcStack_50 = &pcStack_58;
  pcStack_48 = FUN_005637ac;
  pcVar22 = FUN_005635c8;
  uVar34 = ((iStack_30 + 0x9fU >> 5) * 0xb) / 10 + 0x7f >> 7;
  pcStack_58 = param_4;
  pppcStack_40 = param_1;
  uStack_38 = param_2;
  if (uVar34 < 3) {
    if (uVar34 == 1) {
      param_1 = &ppcStack_50;
      FUN_00563348();
LAB_00562d4c:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
        return;
      }
      ___stack_chk_fail();
      puVar15 = (undefined8 *)auStack_130;
      puVar16 = auStack_130;
      puVar17 = auStack_130;
      pcStack_68 = FUN_00562d74;
      pppppppuVar49 = &pppppppuStack_70;
      lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar27 = *(long *)(param_4 + 8);
      pcStack_128 = pcVar22;
      pppcStack_120 = param_1;
      pppppppuStack_70 = pppppppuVar48;
      if (lVar27 == 0) {
        lVar32 = *(long *)(param_4 + 0x10);
        uVar26 = 1;
        if ((*(byte *)(lVar32 + 1) & 8) != 0) {
          uVar26 = 2;
        }
        cVar44 = *param_4;
        if (cVar44 != '\0') {
          uVar26 = uVar26 + 1;
        }
        uVar34 = *(uint *)(lVar32 + 4);
        if (-1 < (int)uVar34) goto LAB_00562e00;
LAB_00562e60:
        pdVar40 = &MACH_HEADER.magic;
joined_r0x00562e70:
        unaff_x27 = (dword *)0x0;
        pdVar14 = pdVar40;
      }
      else {
        uVar26 = lVar27 + 2;
        lVar32 = *(long *)(param_4 + 0x10);
        cVar44 = *param_4;
        if (cVar44 != '\0') {
          uVar26 = lVar27 + 3;
        }
        uVar34 = *(uint *)(lVar32 + 4);
        if ((int)uVar34 < 0) goto LAB_00562e60;
LAB_00562e00:
        pdVar40 = (dword *)(uVar34 - uVar26);
        if (uVar34 < uVar26 || pdVar40 == (dword *)0x0) goto LAB_00562e60;
        if ((*(byte *)(lVar32 + 1) & 1) == 0) {
          if ((*(byte *)(lVar32 + 1) >> 4 & 1) == 0) {
            puVar42 = *(undefined8 **)(param_4 + 0x18);
            pcVar45 = (char *)puVar42[3];
            puVar42[2] = (char *)((long)pdVar40 + puVar42[2]);
            pcVar30 = (char *)(puVar42 + 0x84);
            pcVar46 = pcVar30 + -(long)pcVar45;
            if (pcVar46 <= pdVar40 && (dword *)((long)pdVar40 - (long)pcVar46) != (dword *)0x0) {
              pcVar2 = (char *)(puVar42 + 4);
              pcVar29 = pcVar30;
              if (pcVar30 != pcVar45) {
                _memset(pcVar45,0x20,pcVar46);
                lVar27 = puVar42[3];
                puVar42[3] = pcVar46 + lVar27;
                pcVar29 = pcVar46 + lVar27;
              }
              (*(code *)puVar42[1])(*puVar42,pcVar2,(long)pcVar29 - (long)pcVar2);
              puVar42[3] = pcVar2;
              for (pdVar40 = (dword *)((long)pdVar40 - (long)pcVar46); pcVar45 = pcVar2,
                  &section_000003d8.size < pdVar40; pdVar40 = pdVar40 + -0x100) {
                _memset(pcVar2,0x20,0x400);
                puVar42[3] = pcVar30;
                (*(code *)puVar42[1])(*puVar42,pcVar2,0x400);
                puVar42[3] = pcVar2;
              }
            }
            _memset(pcVar45,0x20,pdVar40);
            puVar42[3] = (char *)((long)pdVar40 + puVar42[3]);
            cVar44 = *param_4;
            unaff_x27 = (dword *)0x0;
            pdVar14 = &MACH_HEADER.magic;
            goto joined_r0x0056333c;
          }
          goto joined_r0x00562e70;
        }
        pdVar14 = &MACH_HEADER.magic;
        unaff_x27 = pdVar40;
      }
joined_r0x0056333c:
      unaff_x20 = (char ***)((long)pdVar14 + 1);
      if (cVar44 != '\0') {
        puVar42 = *(undefined8 **)(param_4 + 0x18);
        pcVar30 = (char *)puVar42[3];
        puVar42[2] = puVar42[2] + 1;
        if ((char *)(puVar42 + 0x84) == pcVar30) {
          pcVar30 = (char *)(puVar42 + 4);
          (*(code *)puVar42[1])(*puVar42,pcVar30,0x400);
          puVar42[3] = pcVar30;
        }
        *pcVar30 = cVar44;
        puVar42[3] = puVar42[3] + 1;
      }
      unaff_x26 = param_4 + 0x18;
      unaff_x28 = *(undefined8 **)unaff_x26;
      unaff_x24 = (char ***)unaff_x28[3];
      unaff_x28[2] = (char *)((long)unaff_x20 + unaff_x28[2]);
      unaff_x21 = (char ***)(unaff_x28 + 0x84);
      unaff_x25 = (char ***)((long)unaff_x21 - (long)unaff_x24);
      pppcVar19 = (char ***)((long)unaff_x20 - (long)unaff_x25);
      unaff_x23 = unaff_x20;
      if (unaff_x25 <= unaff_x20 && pppcVar19 != (char ***)0x0) {
        pppcVar20 = (char ***)(unaff_x28 + 4);
        pppcVar28 = unaff_x21;
        if (unaff_x21 != unaff_x24) {
          _memset(unaff_x24,0x30,unaff_x25);
          lVar27 = unaff_x28[3];
          unaff_x28[3] = (char ***)((long)unaff_x25 + lVar27);
          pppcVar28 = (char ***)((long)unaff_x25 + lVar27);
        }
        (*(code *)unaff_x28[1])(*unaff_x28,pppcVar20,(long)pppcVar28 - (long)pppcVar20);
        unaff_x28[3] = pppcVar20;
        for (; unaff_x23 = pppcVar19, unaff_x24 = pppcVar20, &section_000003d8.size < pppcVar19;
            pppcVar19 = pppcVar19 + -0x80) {
          _memset(pppcVar20,0x30,0x400);
          unaff_x28[3] = unaff_x21;
          (*(code *)unaff_x28[1])(*unaff_x28,pppcVar20,0x400);
          unaff_x28[3] = pppcVar20;
        }
      }
      pppcVar19 = unaff_x24;
      _memset(unaff_x24,0x30,unaff_x23);
      unaff_x28[3] = (char *)((long)unaff_x23 + unaff_x28[3]);
      if ((*(long *)(param_4 + 8) == 0) &&
         ((*(byte *)(*(long *)(param_4 + 0x10) + 1) >> 3 & 1) == 0)) {
        pdStack_108 = (dword *)0x0;
      }
      else {
        unaff_x20 = *(char ****)unaff_x26;
        unaff_x23 = (char ***)unaff_x20[3];
        unaff_x20[2] = (char **)((long)unaff_x20[2] + 1);
        if (unaff_x20 + 0x84 == unaff_x23) {
          unaff_x23 = unaff_x20 + 4;
          pppcVar19 = (char ***)*unaff_x20;
          (*(code *)unaff_x20[1])(pppcVar19,unaff_x23,0x400);
          unaff_x20[3] = (char **)unaff_x23;
        }
        *(char *)unaff_x23 = '.';
        unaff_x20[3] = (char **)((long)unaff_x20[3] + 1);
        pdStack_108 = *(dword **)(param_4 + 8);
      }
      ppdStack_110 = &pdStack_108;
      iStack_e0 = (int)param_3;
      ppcStack_100 = &pcStack_118;
      pcStack_f8 = FUN_00564114;
      pppcStack_f0 = pppcStack_120;
      pcStack_e8 = pcStack_128;
      pcVar22 = FUN_00564020;
      uVar34 = (iStack_e0 + 0x54U >> 5) + 0x7f >> 7;
      unaff_x19 = param_3;
      unaff_x22 = param_4;
      pppppppuVar48 = pppppppuVar49;
      pcStack_118 = param_4;
      if (uVar34 < 3) {
        if (uVar34 != 1) {
          if (uVar34 != 2) goto LAB_005630a4;
          pppcVar19 = &ppcStack_100;
          uVar50 = 0x563074;
          goto FUN_005633e8;
        }
        pppcVar19 = &ppcStack_100;
        FUN_00563348();
        unaff_x22 = *(char **)unaff_x26;
        psVar23 = (segment_command *)pcVar22;
        pdVar40 = pdStack_108;
      }
      else if (uVar34 == 3) {
        pppcVar19 = &ppcStack_100;
        func_0x00563460();
        unaff_x22 = *(char **)unaff_x26;
        psVar23 = (segment_command *)pcVar22;
        pdVar40 = pdStack_108;
      }
      else {
        if (uVar34 == 4) {
          pppcVar19 = &ppcStack_100;
          uVar50 = 0x5630a4;
          goto SUB_005634d8;
        }
        if (uVar34 == 5) {
          pppcVar20 = &ppcStack_100;
          uVar50 = 0x56304c;
          pcVar24 = pcVar22;
          pcVar22 = (code *)param_3;
          pppcVar19 = unaff_x20;
          goto SUB_00563550;
        }
LAB_005630a4:
        unaff_x22 = *(char **)unaff_x26;
        psVar23 = (segment_command *)pcVar22;
        pdVar40 = pdStack_108;
      }
      pdStack_108 = pdVar40;
      if (pdVar40 != (dword *)0x0) {
        unaff_x20 = *(char ****)(unaff_x22 + 0x18);
        *(char **)(unaff_x22 + 0x10) = (char *)((long)pdVar40 + *(long *)(unaff_x22 + 0x10));
        unaff_x23 = (char ***)(unaff_x22 + 0x420);
        unaff_x21 = (char ***)((long)unaff_x23 - (long)unaff_x20);
        if (unaff_x21 <= pdVar40 && (dword *)((long)pdVar40 - (long)unaff_x21) != (dword *)0x0) {
          pppcVar19 = (char ***)(unaff_x22 + 0x20);
          pppcVar20 = unaff_x23;
          if (unaff_x23 != unaff_x20) {
            _memset(unaff_x20,0x30,unaff_x21);
            lVar27 = *(long *)(unaff_x22 + 0x18);
            *(char ****)(unaff_x22 + 0x18) = (char ***)((long)unaff_x21 + lVar27);
            pppcVar20 = (char ***)((long)unaff_x21 + lVar27);
          }
          (**(code **)(unaff_x22 + 8))
                    (*(undefined8 *)unaff_x22,pppcVar19,(long)pppcVar20 - (long)pppcVar19);
          *(char ****)(unaff_x22 + 0x18) = pppcVar19;
          for (pdVar40 = (dword *)((long)pdVar40 - (long)unaff_x21); unaff_x20 = pppcVar19,
              &section_000003d8.size < pdVar40; pdVar40 = pdVar40 + -0x100) {
            _memset(pppcVar19,0x30,0x400);
            *(char ****)(unaff_x22 + 0x18) = unaff_x23;
            (**(code **)(unaff_x22 + 8))(*(undefined8 *)unaff_x22,pppcVar19,0x400);
            *(char ****)(unaff_x22 + 0x18) = pppcVar19;
          }
        }
        psVar23 = (segment_command *)(segment_command_00000020.segname + 8);
        pppcVar19 = unaff_x20;
        _memset(unaff_x20,0x30,pdVar40);
        *(char **)(unaff_x22 + 0x18) = (char *)((long)pdVar40 + *(long *)(unaff_x22 + 0x18));
        unaff_x22 = *(char **)unaff_x26;
        param_3 = pdVar40;
      }
      if (unaff_x27 != (dword *)0x0) {
        unaff_x20 = *(char ****)(unaff_x22 + 0x18);
        *(char **)(unaff_x22 + 0x10) = (char *)((long)unaff_x27 + *(long *)(unaff_x22 + 0x10));
        unaff_x23 = (char ***)(unaff_x22 + 0x420);
        unaff_x21 = (char ***)((long)unaff_x23 - (long)unaff_x20);
        pdVar40 = (dword *)((long)unaff_x27 - (long)unaff_x21);
        param_3 = unaff_x27;
        if (unaff_x21 <= unaff_x27 && pdVar40 != (dword *)0x0) {
          pppcVar19 = (char ***)(unaff_x22 + 0x20);
          pppcVar20 = unaff_x23;
          if (unaff_x23 != unaff_x20) {
            _memset(unaff_x20,0x20,unaff_x21);
            lVar27 = *(long *)(unaff_x22 + 0x18);
            *(char ****)(unaff_x22 + 0x18) = (char ***)((long)unaff_x21 + lVar27);
            pppcVar20 = (char ***)((long)unaff_x21 + lVar27);
          }
          (**(code **)(unaff_x22 + 8))
                    (*(undefined8 *)unaff_x22,pppcVar19,(long)pppcVar20 - (long)pppcVar19);
          *(char ****)(unaff_x22 + 0x18) = pppcVar19;
          for (; param_3 = pdVar40, unaff_x20 = pppcVar19, &section_000003d8.size < pdVar40;
              pdVar40 = pdVar40 + -0x100) {
            _memset(pppcVar19,0x20,0x400);
            *(char ****)(unaff_x22 + 0x18) = unaff_x23;
            (**(code **)(unaff_x22 + 8))(*(undefined8 *)unaff_x22,pppcVar19,0x400);
            *(char ****)(unaff_x22 + 0x18) = pppcVar19;
          }
        }
        psVar23 = &segment_command_00000020;
        pppcVar19 = unaff_x20;
        _memset(unaff_x20,0x20,param_3);
        *(char **)(unaff_x22 + 0x18) = (char *)((long)param_3 + *(long *)(unaff_x22 + 0x18));
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
        return;
      }
      ___stack_chk_fail();
      pcStack_138 = FUN_00563348;
      puVar15 = &uStack_360;
      pcVar22 = (code *)&uStack_360;
      lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      puStack_150 = unaff_x28;
      pdStack_148 = unaff_x27;
      pppppppuStack_140 = pppppppuVar49;
      (*(code *)psVar23)();
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
        return;
      }
      uVar50 = 0x5633e8;
      ___stack_chk_fail();
      unaff_x19 = param_3;
      pppppppuVar48 = &pppppppuStack_140;
    }
    else {
      if (uVar34 != 2) goto LAB_00562d4c;
      pppcVar19 = &ppcStack_50;
      uVar50 = 0x562d28;
    }
FUN_005633e8:
    *(undefined8 **)((long)puVar15 + -0x30) = unaff_x28;
    *(dword **)((long)puVar15 + -0x28) = unaff_x27;
    *(char ****)((long)puVar15 + -0x20) = unaff_x20;
    *(dword **)((long)puVar15 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)puVar15 + -0x10) = pppppppuVar48;
    *(undefined8 *)((long)puVar15 + -8) = uVar50;
    *(undefined8 *)((long)puVar15 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    _bzero((undefined1 *)((long)puVar15 + -0x438),0x400);
    unaff_x19 = (dword *)((long)puVar15 + -0x438);
    unaff_x20 = pppcVar19;
    (*pcVar22)(pppcVar19,unaff_x19,0x100);
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)puVar15 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 **)((long)puVar15 + -0x470) = unaff_x28;
    *(dword **)((long)puVar15 + -0x468) = unaff_x27;
    *(char ****)((long)puVar15 + -0x460) = pppcVar19;
    *(code **)((long)puVar15 + -0x458) = pcVar22;
    *(undefined1 **)((long)puVar15 + -0x450) = (undefined1 *)((long)puVar15 + -0x10);
    *(undefined8 *)((long)puVar15 + -0x448) = 0x563460;
    puVar16 = (undefined1 *)((long)puVar15 + -0xa80);
    *(undefined8 *)((long)puVar15 + -0x478) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    _bzero((undefined1 *)((long)puVar15 + -0xa78),0x600);
    pcVar22 = (code *)((long)puVar15 + -0xa78);
    pppcVar19 = unaff_x20;
    (*(code *)unaff_x19)(unaff_x20,pcVar22,0x180);
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)puVar15 + -0x478)) {
      return;
    }
    uVar50 = 0x5634d8;
    ___stack_chk_fail();
    pppppppuVar48 = (undefined8 *******)((long)puVar15 + -0x450);
SUB_005634d8:
    *(undefined8 **)(puVar16 + -0x30) = unaff_x28;
    *(dword **)(puVar16 + -0x28) = unaff_x27;
    *(char ****)(puVar16 + -0x20) = unaff_x20;
    *(dword **)(puVar16 + -0x18) = unaff_x19;
    *(undefined8 ********)(puVar16 + -0x10) = pppppppuVar48;
    *(undefined8 *)(puVar16 + -8) = uVar50;
    pppppppuVar49 = (undefined8 *******)(puVar16 + -0x10);
    puVar17 = puVar16 + -0x840;
    *(undefined8 *)(puVar16 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    _bzero(puVar16 + -0x838,0x800);
    pcVar24 = (code *)(puVar16 + -0x838);
    pppcVar20 = pppcVar19;
    (*pcVar22)(pppcVar19,pcVar24,0x200);
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar16 + -0x38)) {
      return;
    }
    uVar50 = 0x563550;
    ___stack_chk_fail();
  }
  else {
    if (uVar34 == 3) {
      param_1 = &ppcStack_50;
      func_0x00563460();
      goto LAB_00562d4c;
    }
    if (uVar34 == 4) {
      pppcVar19 = &ppcStack_50;
      uVar50 = 0x562d40;
      goto SUB_005634d8;
    }
    if (uVar34 != 5) goto LAB_00562d4c;
    pppcVar20 = &ppcStack_50;
    uVar50 = 0x562d0c;
    pcVar24 = pcVar22;
    pcVar22 = (code *)unaff_x19;
    pppcVar19 = unaff_x20;
    pppppppuVar49 = pppppppuVar48;
  }
SUB_00563550:
  *(undefined8 **)(puVar17 + -0x30) = unaff_x28;
  *(dword **)(puVar17 + -0x28) = unaff_x27;
  *(char ****)(puVar17 + -0x20) = pppcVar19;
  *(code **)(puVar17 + -0x18) = pcVar22;
  *(undefined8 ********)(puVar17 + -0x10) = pppppppuVar49;
  *(undefined8 *)(puVar17 + -8) = uVar50;
  *(undefined8 *)(puVar17 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  _bzero(puVar17 + -0xa38,0xa00);
  puVar25 = puVar17 + -0xa38;
  uVar26 = 0x280;
  pppcVar19 = pppcVar20;
  (*pcVar24)();
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar17 + -0x38)) {
    return;
  }
  ___stack_chk_fail();
  psVar23 = (segment_command *)(puVar17 + -0xa90);
  *(undefined1 **)(puVar17 + -0xa50) = puVar17 + -0x10;
  *(code **)(puVar17 + -0xa48) = FUN_005635c8;
  *(undefined8 *)(puVar17 + -0xa58) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  ppcVar21 = pppcVar19[2];
  ppcVar8 = pppcVar19[3];
  iVar9 = *(int *)(pppcVar19 + 4);
  *(undefined1 **)(puVar17 + -0xa68) = puVar25;
  *(ulong *)(puVar17 + -0xa60) = uVar26;
  iVar1 = iVar9 + 0x1f;
  if (-1 < iVar9) {
    iVar1 = iVar9;
  }
  iVar1 = (iVar1 >> 5) + 1;
  lVar27 = (long)iVar1;
  iVar5 = iVar9 + 0xbe;
  if (-0xa0 < iVar9) {
    iVar5 = iVar9 + 0x9f;
  }
  lVar32 = (long)(((iVar5 >> 5) * 0xb) / 10);
  *(undefined8 *)(puVar17 + -0xa70) = 0;
  *(long *)(puVar17 + -0xa88) = lVar32;
  uVar34 = iVar9 % 0x20;
  uVar6 = 0;
  if ((uVar34 & 0x40) == 0) {
    uVar6 = (int)((long)ppcVar21 << ((ulong)uVar34 & 0x3f));
  }
  *(undefined4 *)(puVar25 + (long)iVar1 * 4 + -4) = uVar6;
  uVar34 = 0x20 - uVar34;
  uVar37 = (ulong)ppcVar8 >> ((ulong)uVar34 & 0x3f);
  bVar18 = (uVar34 & 0x40) == 0;
  uVar35 = uVar37;
  if (bVar18) {
    uVar35 = ((long)ppcVar8 << 1) << ((ulong)~uVar34 & 0x3f) |
             (ulong)ppcVar21 >> ((ulong)uVar34 & 0x3f);
  }
  uVar36 = 0;
  if (bVar18) {
    uVar36 = uVar37;
  }
  if (uVar35 != 0 || uVar36 != 0) {
    do {
      do {
        *(int *)(puVar25 + lVar27 * 4) = (int)uVar35;
        lVar27 = lVar27 + 1;
        uVar35 = uVar35 >> 0x20 | uVar36 << 0x20;
        uVar36 = uVar36 >> 0x20;
      } while (uVar36 != 0);
    } while (uVar35 != 0);
  }
  if (lVar27 == 0) {
    uVar34 = *(uint *)(puVar25 + lVar32 * 4);
    uVar35 = (ulong)uVar34;
    *(long *)(puVar17 + -0xa90) = lVar32 + 1;
  }
  else {
    do {
      lVar33 = lVar32;
      uVar35 = 0;
      lVar32 = lVar27;
      do {
        uVar35 = (ulong)*(uint *)(puVar25 + lVar32 * 4 + -4) | uVar35 << 0x20;
        *(int *)(puVar25 + lVar32 * 4 + -4) = (int)(uVar35 / 1000000000);
        uVar35 = uVar35 % 1000000000;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar7 = lVar27 + -1;
      if (*(int *)(puVar25 + (lVar27 + -1) * 4) != 0) {
        lVar7 = lVar27;
      }
      lVar32 = lVar33 + -1;
      uVar34 = (uint)uVar35;
      *(uint *)(puVar25 + lVar32 * 4) = uVar34;
      lVar27 = lVar7;
    } while (lVar7 != 0);
    *(long *)(puVar17 + -0xa90) = lVar33;
  }
  if (uVar34 != 0) {
    do {
      uVar34 = (uint)uVar35;
      lVar27 = *(long *)(puVar17 + -0xa70);
      *(long *)(puVar17 + -0xa70) = lVar27 + 1;
      puVar17[-0xa78 - lVar27] = (char)uVar35 + (char)(uVar35 / 10) * -10 | 0x30;
      uVar35 = uVar35 / 10;
    } while (9 < uVar34);
  }
  ppcVar21 = *pppcVar19;
  (*(code *)pppcVar19[1])();
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar17 + -0xa58)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(puVar17 + -0xb30) = unaff_d15;
  *(undefined8 *)(puVar17 + -0xb28) = unaff_d14;
  *(undefined8 *)(puVar17 + -0xb20) = unaff_d13;
  *(undefined8 *)(puVar17 + -0xb18) = unaff_d12;
  *(undefined8 *)(puVar17 + -0xb10) = unaff_d11;
  *(undefined8 *)(puVar17 + -0xb08) = unaff_d10;
  *(undefined8 *)(puVar17 + -0xb00) = unaff_d9;
  *(undefined8 *)(puVar17 + -0xaf8) = unaff_d8;
  *(undefined8 **)(puVar17 + -0xaf0) = unaff_x28;
  *(dword **)(puVar17 + -0xae8) = unaff_x27;
  *(char **)(puVar17 + -0xae0) = unaff_x26;
  *(char ****)(puVar17 + -0xad8) = unaff_x25;
  *(char ****)(puVar17 + -0xad0) = unaff_x24;
  *(char ****)(puVar17 + -0xac8) = unaff_x23;
  *(char **)(puVar17 + -0xac0) = unaff_x22;
  *(char ****)(puVar17 + -0xab8) = unaff_x21;
  *(char ****)(puVar17 + -0xab0) = pppcVar20;
  *(code **)(puVar17 + -0xaa8) = pcVar24;
  *(undefined1 **)(puVar17 + -0xaa0) = puVar17 + -0xa50;
  *(code **)(puVar17 + -0xa98) = FUN_005637ac;
  *(undefined8 *)(puVar17 + -0xb40) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  qVar13 = *(qword *)((long)psVar23->segname + 8);
  qVar11 = psVar23->vmsize;
  qVar12 = psVar23->fileoff;
  *(qword *)(puVar17 + -0xb68) = psVar23->vmaddr;
  *(qword *)(puVar17 + -0xb70) = qVar13;
  *(qword *)(puVar17 + -0xb58) = qVar12;
  *(qword *)(puVar17 + -0xb60) = qVar11;
  *(qword *)(puVar17 + -0xb50) = psVar23->filesize;
  lVar27 = *(long *)psVar23;
  *(qword *)(puVar17 + -0xb78) = *(qword *)psVar23->segname;
  *(long *)(puVar17 + -0xb80) = lVar27;
  uVar37 = *(ulong *)(puVar17 + -0xb60);
  uVar35 = (*(long *)(puVar17 + -0xb78) - *(long *)(puVar17 + -0xb80)) * 9 + uVar37;
  *(char ***)(puVar17 + -0xb88) = ppcVar21;
  pcVar30 = *ppcVar21;
  lVar27 = *(long *)(pcVar30 + 0x10);
  if ((*(long *)(pcVar30 + 8) == 0) && ((*(byte *)(lVar27 + 1) >> 3 & 1) == 0)) {
    cVar44 = *pcVar30;
    if (cVar44 != '\0') {
      uVar35 = uVar35 + 1;
    }
    uVar34 = *(uint *)(lVar27 + 4);
    if ((int)uVar34 < 0) goto LAB_005638c8;
LAB_0056386c:
    uVar36 = uVar34 - uVar35;
    if (uVar34 < uVar35 || uVar36 == 0) goto LAB_005638c8;
    uVar35 = uVar36;
    if ((*(byte *)(lVar27 + 1) & 1) != 0) goto LAB_005638cc;
    if ((*(byte *)(lVar27 + 1) >> 4 & 1) == 0) {
      puVar42 = *(undefined8 **)(pcVar30 + 0x18);
      ppcVar21 = (char **)puVar42[3];
      puVar42[2] = puVar42[2] + uVar36;
      ppcVar8 = (char **)(puVar42 + 0x84);
      uVar35 = (long)ppcVar8 - (long)ppcVar21;
      uVar26 = uVar36 - uVar35;
      uVar43 = uVar36;
      if (uVar35 <= uVar36 && uVar26 != 0) {
        ppcVar3 = (char **)(puVar42 + 4);
        ppcVar31 = ppcVar8;
        if (ppcVar8 != ppcVar21) {
          _memset(ppcVar21,0x20,uVar35);
          lVar27 = puVar42[3];
          puVar42[3] = (char **)(lVar27 + uVar35);
          ppcVar31 = (char **)(lVar27 + uVar35);
        }
        (*(code *)puVar42[1])(*puVar42,ppcVar3,(long)ppcVar31 - (long)ppcVar3);
        puVar42[3] = ppcVar3;
        for (; uVar43 = uVar26, ppcVar21 = ppcVar3, 0x400 < uVar26; uVar26 = uVar26 - 0x400) {
          _memset(ppcVar3,0x20,0x400);
          puVar42[3] = ppcVar8;
          (*(code *)puVar42[1])(*puVar42,ppcVar3,0x400);
          puVar42[3] = ppcVar3;
        }
      }
      psVar23 = &segment_command_00000020;
      uVar26 = uVar43;
      _memset();
      uVar35 = 0;
      uVar36 = 0;
      puVar42[3] = puVar42[3] + uVar43;
      pcVar30 = (char *)**(undefined8 **)(puVar17 + -0xb88);
      cVar44 = *pcVar30;
    }
    else {
      uVar35 = 0;
    }
  }
  else {
    uVar35 = uVar35 + *(long *)(pcVar30 + 8) + 1;
    cVar44 = *pcVar30;
    if (cVar44 != '\0') {
      uVar35 = uVar35 + 1;
    }
    uVar34 = *(uint *)(lVar27 + 4);
    if (-1 < (int)uVar34) goto LAB_0056386c;
LAB_005638c8:
    uVar35 = 0;
LAB_005638cc:
    uVar36 = 0;
  }
  *(ulong *)(puVar17 + -0xba8) = uVar35;
  if (cVar44 != '\0') {
    puVar42 = *(undefined8 **)(pcVar30 + 0x18);
    psVar41 = (segment_command *)puVar42[3];
    puVar42[2] = puVar42[2] + 1;
    if ((segment_command *)(puVar42 + 0x84) == psVar41) {
      psVar41 = (segment_command *)(puVar42 + 4);
      ppcVar21 = (char **)*puVar42;
      uVar26 = 0x400;
      psVar23 = psVar41;
      (*(code *)puVar42[1])();
      puVar42[3] = psVar41;
    }
    *(char *)&psVar41->cmd = cVar44;
    puVar42[3] = puVar42[3] + 1;
    pcVar30 = (char *)**(undefined8 **)(puVar17 + -0xb88);
  }
  plVar47 = *(long **)(pcVar30 + 0x18);
  if (uVar36 != 0) {
    ppcVar21 = (char **)plVar47[3];
    plVar47[2] = plVar47[2] + uVar36;
    ppcVar8 = (char **)(plVar47 + 0x84);
    uVar26 = (long)ppcVar8 - (long)ppcVar21;
    if (uVar26 <= uVar36 && uVar36 - uVar26 != 0) {
      ppcVar3 = (char **)(plVar47 + 4);
      ppcVar31 = ppcVar8;
      if (ppcVar8 != ppcVar21) {
        _memset(ppcVar21,0x30,uVar26);
        lVar27 = plVar47[3];
        plVar47[3] = (long)(lVar27 + uVar26);
        ppcVar31 = (char **)(lVar27 + uVar26);
      }
      (*(code *)plVar47[1])(*plVar47,ppcVar3,(long)ppcVar31 - (long)ppcVar3);
      plVar47[3] = (long)ppcVar3;
      for (uVar36 = uVar36 - uVar26; ppcVar21 = ppcVar3, 0x400 < uVar36; uVar36 = uVar36 - 0x400) {
        _memset(ppcVar3,0x30,0x400);
        plVar47[3] = (long)ppcVar8;
        (*(code *)plVar47[1])(*plVar47,ppcVar3,0x400);
        plVar47[3] = (long)ppcVar3;
      }
    }
    psVar23 = (segment_command *)(segment_command_00000020.segname + 8);
    uVar26 = uVar36;
    _memset();
    plVar47[3] = plVar47[3] + uVar36;
    plVar47 = *(long **)(**(long **)(puVar17 + -0xb88) + 0x18);
  }
  if (uVar37 == 0) {
LAB_00563a40:
    uVar37 = uVar26;
    uVar26 = *(ulong *)(puVar17 + -0xb80);
    if (uVar26 < *(ulong *)(puVar17 + -0xb78)) {
LAB_00563a84:
      uVar34 = *(uint *)(*(long *)(puVar17 + -0xb58) + uVar26 * 4);
      *(ulong *)(puVar17 + -0xb80) = uVar26 + 1;
      puVar17[-0xb68] = (char)uVar34 + (char)(uVar34 / 10) * -10 | 0x30;
      puVar17[-0xb69] =
           (char)(uVar34 / 10) + (char)((ulong)(uVar34 / 10) * 0x1999999a >> 0x20) * -10 | 0x30;
      puVar17[-0xb6a] =
           (char)(uVar34 / 100) + (char)(((ulong)uVar34 / 100) * 0x1999999a >> 0x20) * -10 | 0x30;
      auVar52 = NEON_umull(CONCAT44(uVar34,uVar34),0x10624dd3d1b71759,4);
      uVar51 = NEON_ushl(CONCAT44(auVar52._12_4_,auVar52._4_4_),0xfffffffafffffff3,4);
      auVar53 = NEON_umull(uVar51,0x1999999a1999999a,4);
      uVar50 = NEON_ushl(CONCAT44(uVar34,uVar34),0xfffffffb00000000,4);
      auVar52 = NEON_umull(uVar50,0xa7c5ac5431bde83,4);
      uVar26 = NEON_ushl(CONCAT44(auVar52._12_4_,auVar52._4_4_),0xfffffff9ffffffee,4);
      uVar26 = uVar26 & 0xffff0000ffff;
      auVar52 = NEON_umull(uVar26,0x1999999a1999999a,4);
      uVar26 = CONCAT26((short)((ulong)uVar51 >> 0x20) + auVar53._12_2_ * -10,
                        CONCAT24((short)uVar51 + auVar53._4_2_ * -10,
                                 CONCAT22((short)(uVar26 >> 0x20) + auVar52._12_2_ * -10,
                                          (short)uVar26 + auVar52._4_2_ * -10))) | 0x30003000300030;
      *(uint *)(puVar17 + -0xb6e) =
           CONCAT13((char)(uVar26 >> 0x30),
                    CONCAT12((char)(uVar26 >> 0x20),CONCAT11((char)(uVar26 >> 0x10),(char)uVar26)));
      *(undefined8 *)(puVar17 + -0xb98) = 0xa0000000a;
      *(undefined8 *)(puVar17 + -0xba0) = 0xa0000000a;
      do {
        puVar17[-0xb6f] = (byte)((uVar34 / 10000000) % 10) | 0x30;
        puVar17[-0xb70] =
             (char)(uVar34 / 100000000) +
             (char)((uint)((ulong)uVar34 * 0x55e63b89 >> 0x20) / 0x14000000) * -10 | 0x30;
        *(undefined8 *)(puVar17 + -0xb60) = 9;
        plVar47 = *(long **)(**(long **)(puVar17 + -0xb88) + 0x18);
        puVar42 = (undefined8 *)plVar47[3];
        plVar47[2] = plVar47[2] + 9;
        if ((ulong)((long)plVar47 + (0x420 - (long)puVar42)) < 10) {
          plVar4 = plVar47 + 4;
          (*(code *)plVar47[1])(*plVar47,plVar4,(long)puVar42 - (long)plVar4);
          plVar47[3] = (long)plVar4;
          ppcVar21 = (char **)*plVar47;
          psVar23 = (segment_command *)(puVar17 + -0xb70);
          uVar37 = 9;
          (*(code *)plVar47[1])();
          uVar26 = *(ulong *)(puVar17 + -0xb80);
          if (*(ulong *)(puVar17 + -0xb78) <= uVar26) break;
        }
        else {
          uVar50 = *(undefined8 *)(puVar17 + -0xb70);
          *(undefined1 *)(puVar42 + 1) = puVar17[-0xb68];
          *puVar42 = uVar50;
          plVar47[3] = plVar47[3] + 9;
          uVar26 = *(ulong *)(puVar17 + -0xb80);
          if (*(ulong *)(puVar17 + -0xb78) <= uVar26) break;
        }
        *(ulong *)(puVar17 + -0xb80) = uVar26 + 1;
        uVar34 = *(uint *)(*(long *)(puVar17 + -0xb58) + uVar26 * 4);
        puVar17[-0xb68] = (char)uVar34 + (char)(uVar34 / 10) * -10 | 0x30;
        puVar17[-0xb69] =
             (char)(uVar34 / 10) + (char)((ulong)(uVar34 / 10) * 0x1999999a >> 0x20) * -10 | 0x30;
        puVar17[-0xb6a] =
             (char)(uVar34 / 100) + (char)(((ulong)uVar34 / 100) * 0x1999999a >> 0x20) * -10 | 0x30;
        auVar52 = NEON_umull(CONCAT44(uVar34,uVar34),0x10624dd3d1b71759,4);
        uVar51 = NEON_ushl(CONCAT44(auVar52._12_4_,auVar52._4_4_),0xfffffffafffffff3,4);
        uVar50 = NEON_ushl(CONCAT44(uVar34,uVar34),0xfffffffb00000000,4);
        auVar52 = NEON_umull(uVar50,0xa7c5ac5431bde83,4);
        uVar26 = NEON_ushl(CONCAT44(auVar52._12_4_,auVar52._4_4_),0xfffffff9ffffffee,4);
        uVar26 = uVar26 & 0xffff0000ffff;
        auVar54 = NEON_umull(uVar26,0x1999999a1999999a,4);
        auVar53 = NEON_umull(uVar51,0x1999999a1999999a,4);
        auVar52 = *(undefined1 (*) [16])(puVar17 + -0xba0);
        uVar26 = CONCAT26((short)((ulong)uVar51 >> 0x20) - auVar53._12_2_ * auVar52._12_2_,
                          CONCAT24((short)uVar51 - auVar53._4_2_ * auVar52._8_2_,
                                   CONCAT22((short)(uVar26 >> 0x20) - auVar54._12_2_ * auVar52._4_2_
                                            ,(short)uVar26 - auVar54._4_2_ * auVar52._0_2_))) |
                 0x30003000300030;
        *(uint *)(puVar17 + -0xb6e) =
             CONCAT13((char)(uVar26 >> 0x30),
                      CONCAT12((char)(uVar26 >> 0x20),CONCAT11((char)(uVar26 >> 0x10),(char)uVar26))
                     );
      } while( true );
    }
  }
  else {
    ppcVar21 = (char **)plVar47[3];
    plVar47[2] = plVar47[2] + uVar37;
    if (uVar37 < (ulong)((long)plVar47 + (0x420 - (long)ppcVar21))) {
      psVar23 = (segment_command *)(puVar17 + -uVar37 + -0xb67);
      uVar26 = uVar37;
      _memcpy();
      plVar47[3] = plVar47[3] + uVar37;
      goto LAB_00563a40;
    }
    plVar4 = plVar47 + 4;
    (*(code *)plVar47[1])(*plVar47,plVar4,(long)ppcVar21 - (long)plVar4);
    plVar47[3] = (long)plVar4;
    ppcVar21 = (char **)*plVar47;
    psVar23 = (segment_command *)(puVar17 + -uVar37 + -0xb67);
    (*(code *)plVar47[1])();
    uVar26 = *(ulong *)(puVar17 + -0xb80);
    if (uVar26 < *(ulong *)(puVar17 + -0xb78)) goto LAB_00563a84;
  }
  lVar27 = **(long **)(puVar17 + -0xb88);
  if ((*(long *)(lVar27 + 8) == 0) && ((*(byte *)(*(long *)(lVar27 + 0x10) + 1) >> 3 & 1) == 0)) {
    uVar26 = *(ulong *)(puVar17 + -0xba8);
  }
  else {
    plVar47 = *(long **)(lVar27 + 0x18);
    psVar41 = (segment_command *)plVar47[3];
    plVar47[2] = plVar47[2] + 1;
    uVar26 = *(ulong *)(puVar17 + -0xba8);
    if ((segment_command *)(plVar47 + 0x84) == psVar41) {
      psVar41 = (segment_command *)(plVar47 + 4);
      ppcVar21 = (char **)*plVar47;
      uVar37 = 0x400;
      psVar23 = psVar41;
      (*(code *)plVar47[1])();
      plVar47[3] = (long)psVar41;
    }
    *(undefined1 *)&psVar41->cmd = 0x2e;
    plVar47[3] = plVar47[3] + 1;
    uVar35 = *(ulong *)(**(long **)(puVar17 + -0xb88) + 8);
    puVar42 = *(undefined8 **)(**(long **)(puVar17 + -0xb88) + 0x18);
    if (uVar35 == 0) goto LAB_00563e74;
    ppcVar21 = (char **)puVar42[3];
    puVar42[2] = puVar42[2] + uVar35;
    ppcVar8 = (char **)(puVar42 + 0x84);
    uVar37 = (long)ppcVar8 - (long)ppcVar21;
    if (uVar37 <= uVar35 && uVar35 - uVar37 != 0) {
      ppcVar3 = (char **)(puVar42 + 4);
      ppcVar31 = ppcVar8;
      if (ppcVar8 != ppcVar21) {
        _memset(ppcVar21,0x30,uVar37);
        lVar27 = puVar42[3];
        puVar42[3] = (char **)(lVar27 + uVar37);
        ppcVar31 = (char **)(lVar27 + uVar37);
      }
      (*(code *)puVar42[1])(*puVar42,ppcVar3,(long)ppcVar31 - (long)ppcVar3);
      puVar42[3] = ppcVar3;
      for (uVar35 = uVar35 - uVar37; ppcVar21 = ppcVar3, 0x400 < uVar35; uVar35 = uVar35 - 0x400) {
        _memset(ppcVar3,0x30,0x400);
        puVar42[3] = ppcVar8;
        (*(code *)puVar42[1])(*puVar42,ppcVar3,0x400);
        puVar42[3] = ppcVar3;
      }
    }
    psVar23 = (segment_command *)(segment_command_00000020.segname + 8);
    uVar37 = uVar35;
    _memset();
    puVar42[3] = puVar42[3] + uVar35;
    lVar27 = **(long **)(puVar17 + -0xb88);
  }
  puVar42 = *(undefined8 **)(lVar27 + 0x18);
LAB_00563e74:
  if (uVar26 != 0) {
    ppcVar21 = (char **)puVar42[3];
    puVar42[2] = puVar42[2] + uVar26;
    ppcVar8 = (char **)(puVar42 + 0x84);
    uVar35 = (long)ppcVar8 - (long)ppcVar21;
    if (uVar35 <= uVar26 && uVar26 - uVar35 != 0) {
      ppcVar3 = (char **)(puVar42 + 4);
      ppcVar31 = ppcVar8;
      if (ppcVar8 != ppcVar21) {
        _memset(ppcVar21,0x20,uVar35);
        lVar27 = puVar42[3];
        puVar42[3] = (char **)(lVar27 + uVar35);
        ppcVar31 = (char **)(lVar27 + uVar35);
      }
      (*(code *)puVar42[1])(*puVar42,ppcVar3,(long)ppcVar31 - (long)ppcVar3);
      puVar42[3] = ppcVar3;
      for (uVar26 = uVar26 - uVar35; ppcVar21 = ppcVar3, 0x400 < uVar26; uVar26 = uVar26 - 0x400) {
        _memset(ppcVar3,0x20,0x400);
        puVar42[3] = ppcVar8;
        (*(code *)puVar42[1])(*puVar42,ppcVar3,0x400);
        puVar42[3] = ppcVar3;
      }
    }
    psVar23 = &segment_command_00000020;
    uVar37 = uVar26;
    _memset();
    puVar42[3] = puVar42[3] + uVar26;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar17 + -0xb40)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 **)(puVar17 + -0xbc0) = puVar17 + -0xaa0;
  *(code **)(puVar17 + -3000) = FUN_00564020;
  pcVar30 = ppcVar21[2];
  pcVar45 = ppcVar21[3];
  iVar9 = *(int *)(ppcVar21 + 4);
  iVar1 = iVar9 + 0x1f;
  if (-1 < iVar9) {
    iVar1 = iVar9;
  }
  uVar34 = (iVar1 >> 5) + 1;
  uVar26 = (ulong)uVar34;
  lVar27 = (long)(int)uVar34;
  *(long *)(puVar17 + -0xbd8) = lVar27;
  *(segment_command **)(puVar17 + -0xbd0) = psVar23;
  *(ulong *)(puVar17 + -0xbc8) = uVar37;
  uVar10 = iVar9 % 0x20;
  uVar6 = 0;
  if ((0x20 - uVar10 & 0x40) == 0) {
    uVar6 = (int)((long)pcVar30 << ((ulong)(0x20 - uVar10) & 0x3f));
  }
  *(undefined4 *)((long)psVar23->segname + lVar27 * 4 + -0xc) = uVar6;
  uVar37 = (ulong)pcVar45 >> ((ulong)uVar10 & 0x3f);
  bVar18 = (uVar10 & 0x40) == 0;
  uVar35 = uVar37;
  if (bVar18) {
    uVar35 = ((long)pcVar45 << 1) << ((ulong)~uVar10 & 0x3f) |
             (ulong)pcVar30 >> ((ulong)uVar10 & 0x3f);
  }
  uVar36 = 0;
  if (bVar18) {
    uVar36 = uVar37;
  }
  if (uVar35 != 0 || uVar36 != 0) {
    puVar38 = (undefined4 *)((long)psVar23->segname + lVar27 * 4 + -0x10);
    do {
      do {
        puVar39 = puVar38 + -1;
        *puVar38 = (int)uVar35;
        uVar35 = uVar35 >> 0x20 | uVar36 << 0x20;
        uVar36 = uVar36 >> 0x20;
        puVar38 = puVar39;
      } while (uVar36 != 0);
    } while (uVar35 != 0);
  }
  if (uVar34 != 0) {
    uVar26 = 0;
    lVar32 = (long)(iVar1 >> 5);
    do {
      uVar26 = uVar26 + (ulong)*(uint *)((long)psVar23->segname + lVar32 * 4 + -8) * 10;
      *(int *)((long)psVar23->segname + lVar32 * 4 + -8) = (int)uVar26;
      uVar26 = uVar26 >> 0x20;
      lVar32 = lVar32 + -1;
    } while (lVar32 != -1);
    if (*(int *)((long)psVar23->segname + lVar27 * 4 + -0xc) == 0) {
      *(long *)(puVar17 + -0xbd8) = lVar27 + -1;
    }
  }
  puVar17[-0xbe0] = (char)uVar26;
  (*(code *)ppcVar21[1])(*ppcVar21,puVar17 + -0xbe0);
  return;
}



/* Entry: 00562d74; end: 00563347;  */

/* WARNING: Possible PIC construction at 0x00563048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x005630a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00563070: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0056304c) */
/* WARNING: Removing unreachable block (ram,0x00563058) */
/* WARNING: Removing unreachable block (ram,0x00563074) */
/* WARNING: Removing unreachable block (ram,0x00563080) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00562d74(undefined8 param_1,undefined8 param_2,dword *param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  char **ppcVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  char **ppcVar8;
  int iVar9;
  uint uVar10;
  qword qVar11;
  qword qVar12;
  qword qVar13;
  dword *pdVar14;
  dword *pdVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  bool bVar19;
  char ***pppcVar20;
  char ***pppcVar21;
  char **ppcVar22;
  code *pcVar23;
  segment_command *psVar24;
  code *pcVar25;
  undefined1 *puVar26;
  ulong uVar27;
  long lVar28;
  char ***pppcVar29;
  char *pcVar30;
  char *pcVar31;
  char **ppcVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  undefined4 *puVar39;
  dword *pdVar41;
  char ***pppcVar42;
  segment_command *psVar43;
  undefined8 *puVar44;
  char ***pppcVar45;
  ulong uVar46;
  char cVar47;
  char ***pppcVar48;
  char *pcVar49;
  char *pcVar50;
  char ***pppcVar51;
  long *plVar52;
  undefined8 *******pppppppuVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  byte abStack_21a0 [7840];
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
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
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
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
  undefined8 uStack_1e8;
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
  undefined8 uStack_108;
  long lStack_f8;
  undefined8 *puStack_f0;
  dword *pdStack_e8;
  undefined8 *******pppppppuStack_e0;
  code *pcStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char *pcStack_b8;
  dword **ppdStack_b0;
  dword *pdStack_a8;
  char **ppcStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_80;
  long lStack_68;
  undefined4 *puVar40;
  
  puVar16 = (undefined8 *)auStack_d0;
  puVar17 = auStack_d0;
  puVar18 = auStack_d0;
  pppppppuVar53 = (undefined8 *******)&stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar28 = *(long *)(param_4 + 8);
  uStack_c8 = param_2;
  uStack_c0 = param_1;
  if (lVar28 == 0) {
    lVar33 = *(long *)(param_4 + 0x10);
    uVar27 = 1;
    if ((*(byte *)(lVar33 + 1) & 8) != 0) {
      uVar27 = 2;
    }
    cVar47 = *param_4;
    if (cVar47 != '\0') {
      uVar27 = uVar27 + 1;
    }
    uVar35 = *(uint *)(lVar33 + 4);
    if (-1 < (int)uVar35) goto LAB_00562e00;
LAB_00562e60:
    pdVar41 = &MACH_HEADER.magic;
joined_r0x00562e70:
    pdVar15 = (dword *)0x0;
    pdVar14 = pdVar41;
  }
  else {
    uVar27 = lVar28 + 2;
    lVar33 = *(long *)(param_4 + 0x10);
    cVar47 = *param_4;
    if (cVar47 != '\0') {
      uVar27 = lVar28 + 3;
    }
    uVar35 = *(uint *)(lVar33 + 4);
    if ((int)uVar35 < 0) goto LAB_00562e60;
LAB_00562e00:
    pdVar41 = (dword *)(uVar35 - uVar27);
    if (uVar35 < uVar27 || pdVar41 == (dword *)0x0) goto LAB_00562e60;
    if ((*(byte *)(lVar33 + 1) & 1) == 0) {
      if ((*(byte *)(lVar33 + 1) >> 4 & 1) == 0) {
        puVar44 = *(undefined8 **)(param_4 + 0x18);
        pcVar49 = (char *)puVar44[3];
        puVar44[2] = (char *)((long)pdVar41 + puVar44[2]);
        pcVar31 = (char *)(puVar44 + 0x84);
        pcVar50 = pcVar31 + -(long)pcVar49;
        if (pcVar50 <= pdVar41 && (dword *)((long)pdVar41 - (long)pcVar50) != (dword *)0x0) {
          pcVar2 = (char *)(puVar44 + 4);
          pcVar30 = pcVar31;
          if (pcVar31 != pcVar49) {
            _memset(pcVar49,0x20,pcVar50);
            lVar28 = puVar44[3];
            puVar44[3] = pcVar50 + lVar28;
            pcVar30 = pcVar50 + lVar28;
          }
          (*(code *)puVar44[1])(*puVar44,pcVar2,(long)pcVar30 - (long)pcVar2);
          puVar44[3] = pcVar2;
          for (pdVar41 = (dword *)((long)pdVar41 - (long)pcVar50); pcVar49 = pcVar2,
              &section_000003d8.size < pdVar41; pdVar41 = pdVar41 + -0x100) {
            _memset(pcVar2,0x20,0x400);
            puVar44[3] = pcVar31;
            (*(code *)puVar44[1])(*puVar44,pcVar2,0x400);
            puVar44[3] = pcVar2;
          }
        }
        _memset(pcVar49,0x20,pdVar41);
        puVar44[3] = (char *)((long)pdVar41 + puVar44[3]);
        cVar47 = *param_4;
        pdVar15 = (dword *)0x0;
        pdVar14 = &MACH_HEADER.magic;
        goto joined_r0x0056333c;
      }
      goto joined_r0x00562e70;
    }
    pdVar14 = &MACH_HEADER.magic;
    pdVar15 = pdVar41;
  }
joined_r0x0056333c:
  pppcVar42 = (char ***)((long)pdVar14 + 1);
  if (cVar47 != '\0') {
    puVar44 = *(undefined8 **)(param_4 + 0x18);
    pcVar31 = (char *)puVar44[3];
    puVar44[2] = puVar44[2] + 1;
    if ((char *)(puVar44 + 0x84) == pcVar31) {
      pcVar31 = (char *)(puVar44 + 4);
      (*(code *)puVar44[1])(*puVar44,pcVar31,0x400);
      puVar44[3] = pcVar31;
    }
    *pcVar31 = cVar47;
    puVar44[3] = puVar44[3] + 1;
  }
  pcVar31 = param_4 + 0x18;
  puVar44 = *(undefined8 **)pcVar31;
  pppcVar48 = (char ***)puVar44[3];
  puVar44[2] = (char *)((long)pppcVar42 + puVar44[2]);
  pppcVar45 = (char ***)(puVar44 + 0x84);
  pppcVar51 = (char ***)((long)pppcVar45 - (long)pppcVar48);
  pppcVar20 = (char ***)((long)pppcVar42 - (long)pppcVar51);
  pppcVar29 = pppcVar42;
  if (pppcVar51 <= pppcVar42 && pppcVar20 != (char ***)0x0) {
    pppcVar21 = (char ***)(puVar44 + 4);
    pppcVar29 = pppcVar45;
    if (pppcVar45 != pppcVar48) {
      _memset(pppcVar48,0x30,pppcVar51);
      lVar28 = puVar44[3];
      puVar44[3] = (char ***)((long)pppcVar51 + lVar28);
      pppcVar29 = (char ***)((long)pppcVar51 + lVar28);
    }
    (*(code *)puVar44[1])(*puVar44,pppcVar21,(long)pppcVar29 - (long)pppcVar21);
    puVar44[3] = pppcVar21;
    for (; pppcVar29 = pppcVar20, pppcVar48 = pppcVar21, &section_000003d8.size < pppcVar20;
        pppcVar20 = pppcVar20 + -0x80) {
      _memset(pppcVar21,0x30,0x400);
      puVar44[3] = pppcVar45;
      (*(code *)puVar44[1])(*puVar44,pppcVar21,0x400);
      puVar44[3] = pppcVar21;
    }
  }
  pppcVar20 = pppcVar48;
  _memset(pppcVar48,0x30,pppcVar29);
  puVar44[3] = (char *)((long)pppcVar29 + puVar44[3]);
  if ((*(long *)(param_4 + 8) == 0) && ((*(byte *)(*(long *)(param_4 + 0x10) + 1) >> 3 & 1) == 0)) {
    pdStack_a8 = (dword *)0x0;
  }
  else {
    pppcVar42 = *(char ****)pcVar31;
    pppcVar29 = (char ***)pppcVar42[3];
    pppcVar42[2] = (char **)((long)pppcVar42[2] + 1);
    if (pppcVar42 + 0x84 == pppcVar29) {
      pppcVar29 = pppcVar42 + 4;
      pppcVar20 = (char ***)*pppcVar42;
      (*(code *)pppcVar42[1])(pppcVar20,pppcVar29,0x400);
      pppcVar42[3] = (char **)pppcVar29;
    }
    *(char *)pppcVar29 = '.';
    pppcVar42[3] = (char **)((long)pppcVar42[3] + 1);
    pdStack_a8 = *(dword **)(param_4 + 8);
  }
  ppdStack_b0 = &pdStack_a8;
  iStack_80 = (int)param_3;
  ppcStack_a0 = &pcStack_b8;
  pcStack_98 = FUN_00564114;
  uStack_90 = uStack_c0;
  uStack_88 = uStack_c8;
  pcVar23 = FUN_00564020;
  uVar35 = (iStack_80 + 0x54U >> 5) + 0x7f >> 7;
  pcStack_b8 = param_4;
  if (uVar35 < 3) {
    if (uVar35 == 1) {
      pppcVar20 = &ppcStack_a0;
      FUN_00563348();
      param_4 = *(char **)pcVar31;
      psVar24 = (segment_command *)pcVar23;
      pdVar41 = pdStack_a8;
joined_r0x00563094:
      pdStack_a8 = pdVar41;
      if (pdVar41 != (dword *)0x0) {
        pppcVar42 = *(char ****)(param_4 + 0x18);
        *(char **)(param_4 + 0x10) = (char *)((long)pdVar41 + *(long *)(param_4 + 0x10));
        pppcVar29 = (char ***)(param_4 + 0x420);
        pppcVar45 = (char ***)((long)pppcVar29 - (long)pppcVar42);
        if (pppcVar45 <= pdVar41 && (dword *)((long)pdVar41 - (long)pppcVar45) != (dword *)0x0) {
          pppcVar20 = (char ***)(param_4 + 0x20);
          pppcVar21 = pppcVar29;
          if (pppcVar29 != pppcVar42) {
            _memset(pppcVar42,0x30,pppcVar45);
            lVar28 = *(long *)(param_4 + 0x18);
            *(char ****)(param_4 + 0x18) = (char ***)((long)pppcVar45 + lVar28);
            pppcVar21 = (char ***)((long)pppcVar45 + lVar28);
          }
          (**(code **)(param_4 + 8))
                    (*(undefined8 *)param_4,pppcVar20,(long)pppcVar21 - (long)pppcVar20);
          *(char ****)(param_4 + 0x18) = pppcVar20;
          for (pdVar41 = (dword *)((long)pdVar41 - (long)pppcVar45); pppcVar42 = pppcVar20,
              &section_000003d8.size < pdVar41; pdVar41 = pdVar41 + -0x100) {
            _memset(pppcVar20,0x30,0x400);
            *(char ****)(param_4 + 0x18) = pppcVar29;
            (**(code **)(param_4 + 8))(*(undefined8 *)param_4,pppcVar20,0x400);
            *(char ****)(param_4 + 0x18) = pppcVar20;
          }
        }
        psVar24 = (segment_command *)(segment_command_00000020.segname + 8);
        pppcVar20 = pppcVar42;
        _memset(pppcVar42,0x30,pdVar41);
        *(char **)(param_4 + 0x18) = (char *)((long)pdVar41 + *(long *)(param_4 + 0x18));
        param_4 = *(char **)pcVar31;
        param_3 = pdVar41;
      }
      if (pdVar15 != (dword *)0x0) {
        pppcVar42 = *(char ****)(param_4 + 0x18);
        *(char **)(param_4 + 0x10) = (char *)((long)pdVar15 + *(long *)(param_4 + 0x10));
        pppcVar29 = (char ***)(param_4 + 0x420);
        pppcVar45 = (char ***)((long)pppcVar29 - (long)pppcVar42);
        pdVar41 = (dword *)((long)pdVar15 - (long)pppcVar45);
        param_3 = pdVar15;
        if (pppcVar45 <= pdVar15 && pdVar41 != (dword *)0x0) {
          pppcVar20 = (char ***)(param_4 + 0x20);
          pppcVar21 = pppcVar29;
          if (pppcVar29 != pppcVar42) {
            _memset(pppcVar42,0x20,pppcVar45);
            lVar28 = *(long *)(param_4 + 0x18);
            *(char ****)(param_4 + 0x18) = (char ***)((long)pppcVar45 + lVar28);
            pppcVar21 = (char ***)((long)pppcVar45 + lVar28);
          }
          (**(code **)(param_4 + 8))
                    (*(undefined8 *)param_4,pppcVar20,(long)pppcVar21 - (long)pppcVar20);
          *(char ****)(param_4 + 0x18) = pppcVar20;
          for (; param_3 = pdVar41, pppcVar42 = pppcVar20, &section_000003d8.size < pdVar41;
              pdVar41 = pdVar41 + -0x100) {
            _memset(pppcVar20,0x20,0x400);
            *(char ****)(param_4 + 0x18) = pppcVar29;
            (**(code **)(param_4 + 8))(*(undefined8 *)param_4,pppcVar20,0x400);
            *(char ****)(param_4 + 0x18) = pppcVar20;
          }
        }
        psVar24 = &segment_command_00000020;
        pppcVar20 = pppcVar42;
        _memset(pppcVar42,0x20,param_3);
        *(char **)(param_4 + 0x18) = (char *)((long)param_3 + *(long *)(param_4 + 0x18));
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
        return;
      }
      ___stack_chk_fail();
      pcStack_d8 = FUN_00563348;
      puVar16 = &uStack_300;
      pcVar23 = (code *)&uStack_300;
      lStack_f8 = *(long *)PTR____stack_chk_guard_00999f88;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      puStack_f0 = puVar44;
      pdStack_e8 = pdVar15;
      pppppppuStack_e0 = pppppppuVar53;
      (*(code *)psVar24)();
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_f8) {
        return;
      }
      uVar54 = 0x5633e8;
      ___stack_chk_fail();
      pppppppuVar53 = &pppppppuStack_e0;
    }
    else {
      if (uVar35 != 2) {
LAB_005630a4:
        param_4 = *(char **)pcVar31;
        psVar24 = (segment_command *)pcVar23;
        pdVar41 = pdStack_a8;
        goto joined_r0x00563094;
      }
      pppcVar20 = &ppcStack_a0;
      uVar54 = 0x563074;
    }
    *(undefined8 **)((long)puVar16 + -0x30) = puVar44;
    *(dword **)((long)puVar16 + -0x28) = pdVar15;
    *(char ****)((long)puVar16 + -0x20) = pppcVar42;
    *(dword **)((long)puVar16 + -0x18) = param_3;
    *(undefined8 ********)((long)puVar16 + -0x10) = pppppppuVar53;
    *(undefined8 *)((long)puVar16 + -8) = uVar54;
    *(undefined8 *)((long)puVar16 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    _bzero((undefined1 *)((long)puVar16 + -0x438),0x400);
    param_3 = (dword *)((long)puVar16 + -0x438);
    pppcVar42 = pppcVar20;
    (*pcVar23)(pppcVar20,param_3,0x100);
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)puVar16 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 **)((long)puVar16 + -0x470) = puVar44;
    *(dword **)((long)puVar16 + -0x468) = pdVar15;
    *(char ****)((long)puVar16 + -0x460) = pppcVar20;
    *(code **)((long)puVar16 + -0x458) = pcVar23;
    *(undefined1 **)((long)puVar16 + -0x450) = (undefined1 *)((long)puVar16 + -0x10);
    *(undefined8 *)((long)puVar16 + -0x448) = 0x563460;
    pppppppuVar53 = (undefined8 *******)((long)puVar16 + -0x450);
    puVar17 = (undefined1 *)((long)puVar16 + -0xa80);
    *(undefined8 *)((long)puVar16 + -0x478) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    _bzero((undefined1 *)((long)puVar16 + -0xa78),0x600);
    pcVar23 = (code *)((long)puVar16 + -0xa78);
    pppcVar20 = pppcVar42;
    (*(code *)param_3)(pppcVar42,pcVar23,0x180);
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)puVar16 + -0x478)) {
      return;
    }
    uVar54 = 0x5634d8;
    ___stack_chk_fail();
SUB_005634d8:
    *(undefined8 **)(puVar17 + -0x30) = puVar44;
    *(dword **)(puVar17 + -0x28) = pdVar15;
    *(char ****)(puVar17 + -0x20) = pppcVar42;
    *(dword **)(puVar17 + -0x18) = param_3;
    *(undefined8 ********)(puVar17 + -0x10) = pppppppuVar53;
    *(undefined8 *)(puVar17 + -8) = uVar54;
    pppppppuVar53 = (undefined8 *******)(puVar17 + -0x10);
    puVar18 = puVar17 + -0x840;
    *(undefined8 *)(puVar17 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    _bzero(puVar17 + -0x838,0x800);
    pcVar25 = (code *)(puVar17 + -0x838);
    pppcVar21 = pppcVar20;
    (*pcVar23)(pppcVar20,pcVar25,0x200);
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar17 + -0x38)) {
      return;
    }
    uVar54 = 0x563550;
    ___stack_chk_fail();
  }
  else {
    if (uVar35 == 3) {
      pppcVar20 = &ppcStack_a0;
      func_0x00563460();
      param_4 = *(char **)pcVar31;
      psVar24 = (segment_command *)pcVar23;
      pdVar41 = pdStack_a8;
      goto joined_r0x00563094;
    }
    if (uVar35 == 4) {
      pppcVar20 = &ppcStack_a0;
      uVar54 = 0x5630a4;
      goto SUB_005634d8;
    }
    if (uVar35 != 5) goto LAB_005630a4;
    pppcVar21 = &ppcStack_a0;
    uVar54 = 0x56304c;
    pcVar25 = pcVar23;
    pcVar23 = (code *)param_3;
    pppcVar20 = pppcVar42;
  }
  *(undefined8 **)(puVar18 + -0x30) = puVar44;
  *(dword **)(puVar18 + -0x28) = pdVar15;
  *(char ****)(puVar18 + -0x20) = pppcVar20;
  *(code **)(puVar18 + -0x18) = pcVar23;
  *(undefined8 ********)(puVar18 + -0x10) = pppppppuVar53;
  *(undefined8 *)(puVar18 + -8) = uVar54;
  *(undefined8 *)(puVar18 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  _bzero(puVar18 + -0xa38,0xa00);
  puVar26 = puVar18 + -0xa38;
  uVar27 = 0x280;
  pppcVar42 = pppcVar21;
  (*pcVar25)();
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar18 + -0x38)) {
    return;
  }
  ___stack_chk_fail();
  psVar24 = (segment_command *)(puVar18 + -0xa90);
  *(undefined1 **)(puVar18 + -0xa50) = puVar18 + -0x10;
  *(code **)(puVar18 + -0xa48) = FUN_005635c8;
  *(undefined8 *)(puVar18 + -0xa58) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  ppcVar22 = pppcVar42[2];
  ppcVar8 = pppcVar42[3];
  iVar9 = *(int *)(pppcVar42 + 4);
  *(undefined1 **)(puVar18 + -0xa68) = puVar26;
  *(ulong *)(puVar18 + -0xa60) = uVar27;
  iVar1 = iVar9 + 0x1f;
  if (-1 < iVar9) {
    iVar1 = iVar9;
  }
  iVar1 = (iVar1 >> 5) + 1;
  lVar28 = (long)iVar1;
  iVar5 = iVar9 + 0xbe;
  if (-0xa0 < iVar9) {
    iVar5 = iVar9 + 0x9f;
  }
  lVar33 = (long)(((iVar5 >> 5) * 0xb) / 10);
  *(undefined8 *)(puVar18 + -0xa70) = 0;
  *(long *)(puVar18 + -0xa88) = lVar33;
  uVar35 = iVar9 % 0x20;
  uVar6 = 0;
  if ((uVar35 & 0x40) == 0) {
    uVar6 = (int)((long)ppcVar22 << ((ulong)uVar35 & 0x3f));
  }
  *(undefined4 *)(puVar26 + (long)iVar1 * 4 + -4) = uVar6;
  uVar35 = 0x20 - uVar35;
  uVar38 = (ulong)ppcVar8 >> ((ulong)uVar35 & 0x3f);
  bVar19 = (uVar35 & 0x40) == 0;
  uVar36 = uVar38;
  if (bVar19) {
    uVar36 = ((long)ppcVar8 << 1) << ((ulong)~uVar35 & 0x3f) |
             (ulong)ppcVar22 >> ((ulong)uVar35 & 0x3f);
  }
  uVar37 = 0;
  if (bVar19) {
    uVar37 = uVar38;
  }
  if (uVar36 != 0 || uVar37 != 0) {
    do {
      do {
        *(int *)(puVar26 + lVar28 * 4) = (int)uVar36;
        lVar28 = lVar28 + 1;
        uVar36 = uVar36 >> 0x20 | uVar37 << 0x20;
        uVar37 = uVar37 >> 0x20;
      } while (uVar37 != 0);
    } while (uVar36 != 0);
  }
  if (lVar28 == 0) {
    uVar35 = *(uint *)(puVar26 + lVar33 * 4);
    uVar36 = (ulong)uVar35;
    *(long *)(puVar18 + -0xa90) = lVar33 + 1;
  }
  else {
    do {
      lVar34 = lVar33;
      uVar36 = 0;
      lVar33 = lVar28;
      do {
        uVar36 = (ulong)*(uint *)(puVar26 + lVar33 * 4 + -4) | uVar36 << 0x20;
        *(int *)(puVar26 + lVar33 * 4 + -4) = (int)(uVar36 / 1000000000);
        uVar36 = uVar36 % 1000000000;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar7 = lVar28 + -1;
      if (*(int *)(puVar26 + (lVar28 + -1) * 4) != 0) {
        lVar7 = lVar28;
      }
      lVar33 = lVar34 + -1;
      uVar35 = (uint)uVar36;
      *(uint *)(puVar26 + lVar33 * 4) = uVar35;
      lVar28 = lVar7;
    } while (lVar7 != 0);
    *(long *)(puVar18 + -0xa90) = lVar34;
  }
  if (uVar35 != 0) {
    do {
      uVar35 = (uint)uVar36;
      lVar28 = *(long *)(puVar18 + -0xa70);
      *(long *)(puVar18 + -0xa70) = lVar28 + 1;
      puVar18[-0xa78 - lVar28] = (char)uVar36 + (char)(uVar36 / 10) * -10 | 0x30;
      uVar36 = uVar36 / 10;
    } while (9 < uVar35);
  }
  ppcVar22 = *pppcVar42;
  (*(code *)pppcVar42[1])();
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar18 + -0xa58)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(puVar18 + -0xb30) = unaff_d15;
  *(undefined8 *)(puVar18 + -0xb28) = unaff_d14;
  *(undefined8 *)(puVar18 + -0xb20) = unaff_d13;
  *(undefined8 *)(puVar18 + -0xb18) = unaff_d12;
  *(undefined8 *)(puVar18 + -0xb10) = unaff_d11;
  *(undefined8 *)(puVar18 + -0xb08) = unaff_d10;
  *(undefined8 *)(puVar18 + -0xb00) = unaff_d9;
  *(undefined8 *)(puVar18 + -0xaf8) = unaff_d8;
  *(undefined8 **)(puVar18 + -0xaf0) = puVar44;
  *(dword **)(puVar18 + -0xae8) = pdVar15;
  *(char **)(puVar18 + -0xae0) = pcVar31;
  *(char ****)(puVar18 + -0xad8) = pppcVar51;
  *(char ****)(puVar18 + -0xad0) = pppcVar48;
  *(char ****)(puVar18 + -0xac8) = pppcVar29;
  *(char **)(puVar18 + -0xac0) = param_4;
  *(char ****)(puVar18 + -0xab8) = pppcVar45;
  *(char ****)(puVar18 + -0xab0) = pppcVar21;
  *(code **)(puVar18 + -0xaa8) = pcVar25;
  *(undefined1 **)(puVar18 + -0xaa0) = puVar18 + -0xa50;
  *(code **)(puVar18 + -0xa98) = FUN_005637ac;
  *(undefined8 *)(puVar18 + -0xb40) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  qVar13 = *(qword *)((long)psVar24->segname + 8);
  qVar11 = psVar24->vmsize;
  qVar12 = psVar24->fileoff;
  *(qword *)(puVar18 + -0xb68) = psVar24->vmaddr;
  *(qword *)(puVar18 + -0xb70) = qVar13;
  *(qword *)(puVar18 + -0xb58) = qVar12;
  *(qword *)(puVar18 + -0xb60) = qVar11;
  *(qword *)(puVar18 + -0xb50) = psVar24->filesize;
  lVar28 = *(long *)psVar24;
  *(qword *)(puVar18 + -0xb78) = *(qword *)psVar24->segname;
  *(long *)(puVar18 + -0xb80) = lVar28;
  uVar38 = *(ulong *)(puVar18 + -0xb60);
  uVar36 = (*(long *)(puVar18 + -0xb78) - *(long *)(puVar18 + -0xb80)) * 9 + uVar38;
  *(char ***)(puVar18 + -0xb88) = ppcVar22;
  pcVar31 = *ppcVar22;
  lVar28 = *(long *)(pcVar31 + 0x10);
  if ((*(long *)(pcVar31 + 8) == 0) && ((*(byte *)(lVar28 + 1) >> 3 & 1) == 0)) {
    cVar47 = *pcVar31;
    if (cVar47 != '\0') {
      uVar36 = uVar36 + 1;
    }
    uVar35 = *(uint *)(lVar28 + 4);
    if ((int)uVar35 < 0) goto LAB_005638c8;
LAB_0056386c:
    uVar37 = uVar35 - uVar36;
    if (uVar35 < uVar36 || uVar37 == 0) goto LAB_005638c8;
    uVar36 = uVar37;
    if ((*(byte *)(lVar28 + 1) & 1) != 0) goto LAB_005638cc;
    if ((*(byte *)(lVar28 + 1) >> 4 & 1) == 0) {
      puVar44 = *(undefined8 **)(pcVar31 + 0x18);
      ppcVar22 = (char **)puVar44[3];
      puVar44[2] = puVar44[2] + uVar37;
      ppcVar8 = (char **)(puVar44 + 0x84);
      uVar36 = (long)ppcVar8 - (long)ppcVar22;
      uVar27 = uVar37 - uVar36;
      uVar46 = uVar37;
      if (uVar36 <= uVar37 && uVar27 != 0) {
        ppcVar3 = (char **)(puVar44 + 4);
        ppcVar32 = ppcVar8;
        if (ppcVar8 != ppcVar22) {
          _memset(ppcVar22,0x20,uVar36);
          lVar28 = puVar44[3];
          puVar44[3] = (char **)(lVar28 + uVar36);
          ppcVar32 = (char **)(lVar28 + uVar36);
        }
        (*(code *)puVar44[1])(*puVar44,ppcVar3,(long)ppcVar32 - (long)ppcVar3);
        puVar44[3] = ppcVar3;
        for (; uVar46 = uVar27, ppcVar22 = ppcVar3, 0x400 < uVar27; uVar27 = uVar27 - 0x400) {
          _memset(ppcVar3,0x20,0x400);
          puVar44[3] = ppcVar8;
          (*(code *)puVar44[1])(*puVar44,ppcVar3,0x400);
          puVar44[3] = ppcVar3;
        }
      }
      psVar24 = &segment_command_00000020;
      uVar27 = uVar46;
      _memset();
      uVar36 = 0;
      uVar37 = 0;
      puVar44[3] = puVar44[3] + uVar46;
      pcVar31 = (char *)**(undefined8 **)(puVar18 + -0xb88);
      cVar47 = *pcVar31;
    }
    else {
      uVar36 = 0;
    }
  }
  else {
    uVar36 = uVar36 + *(long *)(pcVar31 + 8) + 1;
    cVar47 = *pcVar31;
    if (cVar47 != '\0') {
      uVar36 = uVar36 + 1;
    }
    uVar35 = *(uint *)(lVar28 + 4);
    if (-1 < (int)uVar35) goto LAB_0056386c;
LAB_005638c8:
    uVar36 = 0;
LAB_005638cc:
    uVar37 = 0;
  }
  *(ulong *)(puVar18 + -0xba8) = uVar36;
  if (cVar47 != '\0') {
    puVar44 = *(undefined8 **)(pcVar31 + 0x18);
    psVar43 = (segment_command *)puVar44[3];
    puVar44[2] = puVar44[2] + 1;
    if ((segment_command *)(puVar44 + 0x84) == psVar43) {
      psVar43 = (segment_command *)(puVar44 + 4);
      ppcVar22 = (char **)*puVar44;
      uVar27 = 0x400;
      psVar24 = psVar43;
      (*(code *)puVar44[1])();
      puVar44[3] = psVar43;
    }
    *(char *)&psVar43->cmd = cVar47;
    puVar44[3] = puVar44[3] + 1;
    pcVar31 = (char *)**(undefined8 **)(puVar18 + -0xb88);
  }
  plVar52 = *(long **)(pcVar31 + 0x18);
  if (uVar37 != 0) {
    ppcVar22 = (char **)plVar52[3];
    plVar52[2] = plVar52[2] + uVar37;
    ppcVar8 = (char **)(plVar52 + 0x84);
    uVar27 = (long)ppcVar8 - (long)ppcVar22;
    if (uVar27 <= uVar37 && uVar37 - uVar27 != 0) {
      ppcVar3 = (char **)(plVar52 + 4);
      ppcVar32 = ppcVar8;
      if (ppcVar8 != ppcVar22) {
        _memset(ppcVar22,0x30,uVar27);
        lVar28 = plVar52[3];
        plVar52[3] = (long)(lVar28 + uVar27);
        ppcVar32 = (char **)(lVar28 + uVar27);
      }
      (*(code *)plVar52[1])(*plVar52,ppcVar3,(long)ppcVar32 - (long)ppcVar3);
      plVar52[3] = (long)ppcVar3;
      for (uVar37 = uVar37 - uVar27; ppcVar22 = ppcVar3, 0x400 < uVar37; uVar37 = uVar37 - 0x400) {
        _memset(ppcVar3,0x30,0x400);
        plVar52[3] = (long)ppcVar8;
        (*(code *)plVar52[1])(*plVar52,ppcVar3,0x400);
        plVar52[3] = (long)ppcVar3;
      }
    }
    psVar24 = (segment_command *)(segment_command_00000020.segname + 8);
    uVar27 = uVar37;
    _memset();
    plVar52[3] = plVar52[3] + uVar37;
    plVar52 = *(long **)(**(long **)(puVar18 + -0xb88) + 0x18);
  }
  if (uVar38 == 0) {
LAB_00563a40:
    uVar38 = uVar27;
    uVar27 = *(ulong *)(puVar18 + -0xb80);
    if (uVar27 < *(ulong *)(puVar18 + -0xb78)) {
LAB_00563a84:
      uVar35 = *(uint *)(*(long *)(puVar18 + -0xb58) + uVar27 * 4);
      *(ulong *)(puVar18 + -0xb80) = uVar27 + 1;
      puVar18[-0xb68] = (char)uVar35 + (char)(uVar35 / 10) * -10 | 0x30;
      puVar18[-0xb69] =
           (char)(uVar35 / 10) + (char)((ulong)(uVar35 / 10) * 0x1999999a >> 0x20) * -10 | 0x30;
      puVar18[-0xb6a] =
           (char)(uVar35 / 100) + (char)(((ulong)uVar35 / 100) * 0x1999999a >> 0x20) * -10 | 0x30;
      auVar56 = NEON_umull(CONCAT44(uVar35,uVar35),0x10624dd3d1b71759,4);
      uVar55 = NEON_ushl(CONCAT44(auVar56._12_4_,auVar56._4_4_),0xfffffffafffffff3,4);
      auVar57 = NEON_umull(uVar55,0x1999999a1999999a,4);
      uVar54 = NEON_ushl(CONCAT44(uVar35,uVar35),0xfffffffb00000000,4);
      auVar56 = NEON_umull(uVar54,0xa7c5ac5431bde83,4);
      uVar27 = NEON_ushl(CONCAT44(auVar56._12_4_,auVar56._4_4_),0xfffffff9ffffffee,4);
      uVar27 = uVar27 & 0xffff0000ffff;
      auVar56 = NEON_umull(uVar27,0x1999999a1999999a,4);
      uVar27 = CONCAT26((short)((ulong)uVar55 >> 0x20) + auVar57._12_2_ * -10,
                        CONCAT24((short)uVar55 + auVar57._4_2_ * -10,
                                 CONCAT22((short)(uVar27 >> 0x20) + auVar56._12_2_ * -10,
                                          (short)uVar27 + auVar56._4_2_ * -10))) | 0x30003000300030;
      *(uint *)(puVar18 + -0xb6e) =
           CONCAT13((char)(uVar27 >> 0x30),
                    CONCAT12((char)(uVar27 >> 0x20),CONCAT11((char)(uVar27 >> 0x10),(char)uVar27)));
      *(undefined8 *)(puVar18 + -0xb98) = 0xa0000000a;
      *(undefined8 *)(puVar18 + -0xba0) = 0xa0000000a;
      do {
        puVar18[-0xb6f] = (byte)((uVar35 / 10000000) % 10) | 0x30;
        puVar18[-0xb70] =
             (char)(uVar35 / 100000000) +
             (char)((uint)((ulong)uVar35 * 0x55e63b89 >> 0x20) / 0x14000000) * -10 | 0x30;
        *(undefined8 *)(puVar18 + -0xb60) = 9;
        plVar52 = *(long **)(**(long **)(puVar18 + -0xb88) + 0x18);
        puVar44 = (undefined8 *)plVar52[3];
        plVar52[2] = plVar52[2] + 9;
        if ((ulong)((long)plVar52 + (0x420 - (long)puVar44)) < 10) {
          plVar4 = plVar52 + 4;
          (*(code *)plVar52[1])(*plVar52,plVar4,(long)puVar44 - (long)plVar4);
          plVar52[3] = (long)plVar4;
          ppcVar22 = (char **)*plVar52;
          psVar24 = (segment_command *)(puVar18 + -0xb70);
          uVar38 = 9;
          (*(code *)plVar52[1])();
          uVar27 = *(ulong *)(puVar18 + -0xb80);
          if (*(ulong *)(puVar18 + -0xb78) <= uVar27) break;
        }
        else {
          uVar54 = *(undefined8 *)(puVar18 + -0xb70);
          *(undefined1 *)(puVar44 + 1) = puVar18[-0xb68];
          *puVar44 = uVar54;
          plVar52[3] = plVar52[3] + 9;
          uVar27 = *(ulong *)(puVar18 + -0xb80);
          if (*(ulong *)(puVar18 + -0xb78) <= uVar27) break;
        }
        *(ulong *)(puVar18 + -0xb80) = uVar27 + 1;
        uVar35 = *(uint *)(*(long *)(puVar18 + -0xb58) + uVar27 * 4);
        puVar18[-0xb68] = (char)uVar35 + (char)(uVar35 / 10) * -10 | 0x30;
        puVar18[-0xb69] =
             (char)(uVar35 / 10) + (char)((ulong)(uVar35 / 10) * 0x1999999a >> 0x20) * -10 | 0x30;
        puVar18[-0xb6a] =
             (char)(uVar35 / 100) + (char)(((ulong)uVar35 / 100) * 0x1999999a >> 0x20) * -10 | 0x30;
        auVar56 = NEON_umull(CONCAT44(uVar35,uVar35),0x10624dd3d1b71759,4);
        uVar55 = NEON_ushl(CONCAT44(auVar56._12_4_,auVar56._4_4_),0xfffffffafffffff3,4);
        uVar54 = NEON_ushl(CONCAT44(uVar35,uVar35),0xfffffffb00000000,4);
        auVar56 = NEON_umull(uVar54,0xa7c5ac5431bde83,4);
        uVar27 = NEON_ushl(CONCAT44(auVar56._12_4_,auVar56._4_4_),0xfffffff9ffffffee,4);
        uVar27 = uVar27 & 0xffff0000ffff;
        auVar58 = NEON_umull(uVar27,0x1999999a1999999a,4);
        auVar57 = NEON_umull(uVar55,0x1999999a1999999a,4);
        auVar56 = *(undefined1 (*) [16])(puVar18 + -0xba0);
        uVar27 = CONCAT26((short)((ulong)uVar55 >> 0x20) - auVar57._12_2_ * auVar56._12_2_,
                          CONCAT24((short)uVar55 - auVar57._4_2_ * auVar56._8_2_,
                                   CONCAT22((short)(uVar27 >> 0x20) - auVar58._12_2_ * auVar56._4_2_
                                            ,(short)uVar27 - auVar58._4_2_ * auVar56._0_2_))) |
                 0x30003000300030;
        *(uint *)(puVar18 + -0xb6e) =
             CONCAT13((char)(uVar27 >> 0x30),
                      CONCAT12((char)(uVar27 >> 0x20),CONCAT11((char)(uVar27 >> 0x10),(char)uVar27))
                     );
      } while( true );
    }
  }
  else {
    ppcVar22 = (char **)plVar52[3];
    plVar52[2] = plVar52[2] + uVar38;
    if (uVar38 < (ulong)((long)plVar52 + (0x420 - (long)ppcVar22))) {
      psVar24 = (segment_command *)(puVar18 + -uVar38 + -0xb67);
      uVar27 = uVar38;
      _memcpy();
      plVar52[3] = plVar52[3] + uVar38;
      goto LAB_00563a40;
    }
    plVar4 = plVar52 + 4;
    (*(code *)plVar52[1])(*plVar52,plVar4,(long)ppcVar22 - (long)plVar4);
    plVar52[3] = (long)plVar4;
    ppcVar22 = (char **)*plVar52;
    psVar24 = (segment_command *)(puVar18 + -uVar38 + -0xb67);
    (*(code *)plVar52[1])();
    uVar27 = *(ulong *)(puVar18 + -0xb80);
    if (uVar27 < *(ulong *)(puVar18 + -0xb78)) goto LAB_00563a84;
  }
  lVar28 = **(long **)(puVar18 + -0xb88);
  if ((*(long *)(lVar28 + 8) == 0) && ((*(byte *)(*(long *)(lVar28 + 0x10) + 1) >> 3 & 1) == 0)) {
    uVar27 = *(ulong *)(puVar18 + -0xba8);
  }
  else {
    plVar52 = *(long **)(lVar28 + 0x18);
    psVar43 = (segment_command *)plVar52[3];
    plVar52[2] = plVar52[2] + 1;
    uVar27 = *(ulong *)(puVar18 + -0xba8);
    if ((segment_command *)(plVar52 + 0x84) == psVar43) {
      psVar43 = (segment_command *)(plVar52 + 4);
      ppcVar22 = (char **)*plVar52;
      uVar38 = 0x400;
      psVar24 = psVar43;
      (*(code *)plVar52[1])();
      plVar52[3] = (long)psVar43;
    }
    *(undefined1 *)&psVar43->cmd = 0x2e;
    plVar52[3] = plVar52[3] + 1;
    uVar36 = *(ulong *)(**(long **)(puVar18 + -0xb88) + 8);
    puVar44 = *(undefined8 **)(**(long **)(puVar18 + -0xb88) + 0x18);
    if (uVar36 == 0) goto LAB_00563e74;
    ppcVar22 = (char **)puVar44[3];
    puVar44[2] = puVar44[2] + uVar36;
    ppcVar8 = (char **)(puVar44 + 0x84);
    uVar38 = (long)ppcVar8 - (long)ppcVar22;
    if (uVar38 <= uVar36 && uVar36 - uVar38 != 0) {
      ppcVar3 = (char **)(puVar44 + 4);
      ppcVar32 = ppcVar8;
      if (ppcVar8 != ppcVar22) {
        _memset(ppcVar22,0x30,uVar38);
        lVar28 = puVar44[3];
        puVar44[3] = (char **)(lVar28 + uVar38);
        ppcVar32 = (char **)(lVar28 + uVar38);
      }
      (*(code *)puVar44[1])(*puVar44,ppcVar3,(long)ppcVar32 - (long)ppcVar3);
      puVar44[3] = ppcVar3;
      for (uVar36 = uVar36 - uVar38; ppcVar22 = ppcVar3, 0x400 < uVar36; uVar36 = uVar36 - 0x400) {
        _memset(ppcVar3,0x30,0x400);
        puVar44[3] = ppcVar8;
        (*(code *)puVar44[1])(*puVar44,ppcVar3,0x400);
        puVar44[3] = ppcVar3;
      }
    }
    psVar24 = (segment_command *)(segment_command_00000020.segname + 8);
    uVar38 = uVar36;
    _memset();
    puVar44[3] = puVar44[3] + uVar36;
    lVar28 = **(long **)(puVar18 + -0xb88);
  }
  puVar44 = *(undefined8 **)(lVar28 + 0x18);
LAB_00563e74:
  if (uVar27 != 0) {
    ppcVar22 = (char **)puVar44[3];
    puVar44[2] = puVar44[2] + uVar27;
    ppcVar8 = (char **)(puVar44 + 0x84);
    uVar36 = (long)ppcVar8 - (long)ppcVar22;
    if (uVar36 <= uVar27 && uVar27 - uVar36 != 0) {
      ppcVar3 = (char **)(puVar44 + 4);
      ppcVar32 = ppcVar8;
      if (ppcVar8 != ppcVar22) {
        _memset(ppcVar22,0x20,uVar36);
        lVar28 = puVar44[3];
        puVar44[3] = (char **)(lVar28 + uVar36);
        ppcVar32 = (char **)(lVar28 + uVar36);
      }
      (*(code *)puVar44[1])(*puVar44,ppcVar3,(long)ppcVar32 - (long)ppcVar3);
      puVar44[3] = ppcVar3;
      for (uVar27 = uVar27 - uVar36; ppcVar22 = ppcVar3, 0x400 < uVar27; uVar27 = uVar27 - 0x400) {
        _memset(ppcVar3,0x20,0x400);
        puVar44[3] = ppcVar8;
        (*(code *)puVar44[1])(*puVar44,ppcVar3,0x400);
        puVar44[3] = ppcVar3;
      }
    }
    psVar24 = &segment_command_00000020;
    uVar38 = uVar27;
    _memset();
    puVar44[3] = puVar44[3] + uVar27;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar18 + -0xb40)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 **)(puVar18 + -0xbc0) = puVar18 + -0xaa0;
  *(code **)(puVar18 + -3000) = FUN_00564020;
  pcVar31 = ppcVar22[2];
  pcVar49 = ppcVar22[3];
  iVar9 = *(int *)(ppcVar22 + 4);
  iVar1 = iVar9 + 0x1f;
  if (-1 < iVar9) {
    iVar1 = iVar9;
  }
  uVar35 = (iVar1 >> 5) + 1;
  uVar27 = (ulong)uVar35;
  lVar28 = (long)(int)uVar35;
  *(long *)(puVar18 + -0xbd8) = lVar28;
  *(segment_command **)(puVar18 + -0xbd0) = psVar24;
  *(ulong *)(puVar18 + -0xbc8) = uVar38;
  uVar10 = iVar9 % 0x20;
  uVar6 = 0;
  if ((0x20 - uVar10 & 0x40) == 0) {
    uVar6 = (int)((long)pcVar31 << ((ulong)(0x20 - uVar10) & 0x3f));
  }
  *(undefined4 *)((long)psVar24->segname + lVar28 * 4 + -0xc) = uVar6;
  uVar38 = (ulong)pcVar49 >> ((ulong)uVar10 & 0x3f);
  bVar19 = (uVar10 & 0x40) == 0;
  uVar36 = uVar38;
  if (bVar19) {
    uVar36 = ((long)pcVar49 << 1) << ((ulong)~uVar10 & 0x3f) |
             (ulong)pcVar31 >> ((ulong)uVar10 & 0x3f);
  }
  uVar37 = 0;
  if (bVar19) {
    uVar37 = uVar38;
  }
  if (uVar36 != 0 || uVar37 != 0) {
    puVar39 = (undefined4 *)((long)psVar24->segname + lVar28 * 4 + -0x10);
    do {
      do {
        puVar40 = puVar39 + -1;
        *puVar39 = (int)uVar36;
        uVar36 = uVar36 >> 0x20 | uVar37 << 0x20;
        uVar37 = uVar37 >> 0x20;
        puVar39 = puVar40;
      } while (uVar37 != 0);
    } while (uVar36 != 0);
  }
  if (uVar35 != 0) {
    uVar27 = 0;
    lVar33 = (long)(iVar1 >> 5);
    do {
      uVar27 = uVar27 + (ulong)*(uint *)((long)psVar24->segname + lVar33 * 4 + -8) * 10;
      *(int *)((long)psVar24->segname + lVar33 * 4 + -8) = (int)uVar27;
      uVar27 = uVar27 >> 0x20;
      lVar33 = lVar33 + -1;
    } while (lVar33 != -1);
    if (*(int *)((long)psVar24->segname + lVar28 * 4 + -0xc) == 0) {
      *(long *)(puVar18 + -0xbd8) = lVar28 + -1;
    }
  }
  puVar18[-0xbe0] = (char)uVar27;
  (*(code *)ppcVar22[1])(*ppcVar22,puVar18 + -0xbe0);
  return;
}



/* Entry: 00563348; end: 005633e7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00563348(undefined8 *param_1,code *param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong *puVar6;
  int iVar7;
  uint uVar8;
  undefined6 uVar9;
  bool bVar10;
  long *plVar11;
  code *pcVar12;
  code *pcVar13;
  undefined1 *puVar14;
  segment_command *psVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  char *pcVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined4 *puVar27;
  ulong uVar29;
  segment_command *psVar30;
  char cVar31;
  undefined8 *puVar32;
  long *plVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_20d0 [8];
  long lStack_20c8;
  segment_command *psStack_20c0;
  ulong uStack_20b8;
  undefined1 *******pppppppuStack_20b0;
  code *pcStack_20a8;
  ulong uStack_2098;
  undefined8 uStack_2090;
  undefined8 uStack_2088;
  long *plStack_2078;
  ulong uStack_2070;
  qword qStack_2068;
  qword qStack_2060;
  undefined8 uStack_2058;
  ulong uStack_2050;
  qword qStack_2048;
  qword qStack_2040;
  qword qStack_2030;
  undefined1 ******ppppppuStack_1f90;
  code *pcStack_1f88;
  undefined1 auStack_1f80 [64];
  undefined1 *****pppppuStack_1f40;
  code *pcStack_1f38;
  undefined1 auStack_1f28 [2560];
  long lStack_1528;
  undefined1 ****ppppuStack_1500;
  undefined8 uStack_14f8;
  undefined1 auStack_14e8 [2048];
  long lStack_ce8;
  undefined1 ***pppuStack_cc0;
  undefined8 uStack_cb8;
  undefined1 auStack_ca8 [1536];
  long lStack_6a8;
  undefined1 **ppuStack_680;
  undefined8 uStack_678;
  undefined1 auStack_668 [1024];
  long lStack_268;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  long lStack_28;
  undefined4 *puVar28;
  
  pcVar12 = (code *)&uStack_230;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  (*param_2)(param_1,&uStack_230,0x80);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_005633e8;
  lStack_268 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_240 = &stack0xfffffffffffffff0;
  _bzero(auStack_668,0x400);
  pcVar13 = (code *)auStack_668;
  (*pcVar12)(param_1,pcVar13,0x100);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  uStack_678 = 0x563460;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_680 = &puStack_240;
  _bzero(auStack_ca8,0x600);
  pcVar12 = (code *)auStack_ca8;
  (*pcVar13)(param_1,pcVar12,0x180);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_6a8) {
    return;
  }
  ___stack_chk_fail();
  uStack_cb8 = 0x5634d8;
  lStack_ce8 = *(long *)PTR____stack_chk_guard_00999f88;
  pppuStack_cc0 = &ppuStack_680;
  _bzero(auStack_14e8,0x800);
  pcVar13 = (code *)auStack_14e8;
  (*pcVar12)(param_1,pcVar13,0x200);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_ce8) {
    return;
  }
  ___stack_chk_fail();
  uStack_14f8 = 0x563550;
  lStack_1528 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppuStack_1500 = &pppuStack_cc0;
  _bzero(auStack_1f28,0xa00);
  puVar14 = auStack_1f28;
  uVar16 = 0x280;
  (*pcVar13)();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1528) {
    return;
  }
  ___stack_chk_fail();
  psVar15 = (segment_command *)auStack_1f80;
  pppppuStack_1f40 = &ppppuStack_1500;
  pcStack_1f38 = FUN_005635c8;
  auStack_1f80._56_8_ = *(long *)PTR____stack_chk_guard_00999f88;
  uVar25 = param_1[2];
  uVar17 = param_1[3];
  iVar7 = *(int *)(param_1 + 4);
  auStack_1f80._40_8_ = puVar14;
  auStack_1f80._48_8_ = uVar16;
  iVar1 = iVar7 + 0x1f;
  if (-1 < iVar7) {
    iVar1 = iVar7;
  }
  iVar1 = (iVar1 >> 5) + 1;
  lVar18 = (long)iVar1;
  iVar3 = iVar7 + 0xbe;
  if (-0xa0 < iVar7) {
    iVar3 = iVar7 + 0x9f;
  }
  auStack_1f80._8_8_ = SEXT48(((iVar3 >> 5) * 0xb) / 10);
  auStack_1f80._32_8_ = 0;
  uVar23 = iVar7 % 0x20;
  uVar4 = 0;
  if ((uVar23 & 0x40) == 0) {
    uVar4 = (int)(uVar25 << ((ulong)uVar23 & 0x3f));
  }
  *(undefined4 *)(puVar14 + (long)iVar1 * 4 + -4) = uVar4;
  uVar23 = 0x20 - uVar23;
  uVar26 = uVar17 >> ((ulong)uVar23 & 0x3f);
  bVar10 = (uVar23 & 0x40) == 0;
  uVar24 = uVar26;
  if (bVar10) {
    uVar24 = (uVar17 << 1) << ((ulong)~uVar23 & 0x3f) | uVar25 >> ((ulong)uVar23 & 0x3f);
  }
  uVar25 = 0;
  if (bVar10) {
    uVar25 = uVar26;
  }
  if (uVar24 != 0 || uVar25 != 0) {
    do {
      do {
        *(int *)(puVar14 + lVar18 * 4) = (int)uVar24;
        lVar18 = lVar18 + 1;
        uVar24 = uVar24 >> 0x20 | uVar25 << 0x20;
        uVar25 = uVar25 >> 0x20;
      } while (uVar25 != 0);
    } while (uVar24 != 0);
  }
  lVar22 = auStack_1f80._8_8_;
  if (lVar18 == 0) {
    uVar23 = *(uint *)(puVar14 + auStack_1f80._8_8_ * 4);
    uVar25 = (ulong)uVar23;
    auStack_1f80._0_8_ = auStack_1f80._8_8_ + 1;
  }
  else {
    do {
      auStack_1f80._0_8_ = lVar22;
      uVar25 = 0;
      lVar22 = lVar18;
      do {
        uVar25 = (ulong)*(uint *)(puVar14 + lVar22 * 4 + -4) | uVar25 << 0x20;
        *(int *)(puVar14 + lVar22 * 4 + -4) = (int)(uVar25 / 1000000000);
        uVar25 = uVar25 % 1000000000;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar5 = lVar18 + -1;
      if (*(int *)(puVar14 + (lVar18 + -1) * 4) != 0) {
        lVar5 = lVar18;
      }
      uVar23 = (uint)uVar25;
      *(uint *)(puVar14 + (auStack_1f80._0_8_ + -1) * 4) = uVar23;
      lVar18 = lVar5;
      lVar22 = auStack_1f80._0_8_ + -1;
    } while (lVar5 != 0);
  }
  if (uVar23 != 0) {
    do {
      uVar23 = (uint)uVar25;
      lVar18 = 0x18 - auStack_1f80._32_8_;
      auStack_1f80._32_8_ = auStack_1f80._32_8_ + 1;
      auStack_1f80[lVar18] = (char)uVar25 + (char)(uVar25 / 10) * -10 | 0x30;
      uVar25 = uVar25 / 10;
    } while (9 < uVar23);
  }
  plVar11 = (long *)*param_1;
  (*(code *)param_1[1])();
  if (*(long *)PTR____stack_chk_guard_00999f88 == auStack_1f80._56_8_) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f88 = FUN_005637ac;
  qStack_2030 = *(qword *)PTR____stack_chk_guard_00999f88;
  qStack_2060 = *(qword *)((long)psVar15->segname + 8);
  uStack_2058 = psVar15->vmaddr;
  uVar17 = psVar15->vmsize;
  qStack_2048 = psVar15->fileoff;
  qStack_2040 = psVar15->filesize;
  uStack_2070 = *(ulong *)psVar15;
  qStack_2068 = *(qword *)psVar15->segname;
  uVar25 = (qStack_2068 - uStack_2070) * 9 + uVar17;
  pcVar19 = (char *)*plVar11;
  lVar18 = *(long *)(pcVar19 + 0x10);
  plStack_2078 = plVar11;
  uStack_2050 = uVar17;
  ppppppuStack_1f90 = &pppppuStack_1f40;
  if ((*(long *)(pcVar19 + 8) == 0) && ((*(byte *)(lVar18 + 1) >> 3 & 1) == 0)) {
    cVar31 = *pcVar19;
    if (cVar31 != '\0') {
      uVar25 = uVar25 + 1;
    }
    uVar23 = *(uint *)(lVar18 + 4);
    if ((int)uVar23 < 0) goto LAB_005638c8;
LAB_0056386c:
    uVar24 = uVar23 - uVar25;
    if (uVar23 < uVar25 || uVar24 == 0) goto LAB_005638c8;
    uStack_2098 = uVar24;
    if ((*(byte *)(lVar18 + 1) & 1) != 0) goto LAB_005638cc;
    if ((*(byte *)(lVar18 + 1) >> 4 & 1) == 0) {
      puVar32 = *(undefined8 **)(pcVar19 + 0x18);
      plVar11 = (long *)puVar32[3];
      puVar32[2] = puVar32[2] + uVar24;
      plVar33 = puVar32 + 0x84;
      uVar26 = (long)plVar33 - (long)plVar11;
      uVar16 = uVar24 - uVar26;
      uVar25 = uVar24;
      if (uVar26 <= uVar24 && uVar16 != 0) {
        plVar2 = puVar32 + 4;
        plVar21 = plVar33;
        if (plVar33 != plVar11) {
          _memset(plVar11,0x20,uVar26);
          lVar18 = puVar32[3];
          puVar32[3] = (long *)(lVar18 + uVar26);
          plVar21 = (long *)(lVar18 + uVar26);
        }
        (*(code *)puVar32[1])(*puVar32,plVar2,(long)plVar21 - (long)plVar2);
        puVar32[3] = plVar2;
        for (; uVar25 = uVar16, plVar11 = plVar2, 0x400 < uVar16; uVar16 = uVar16 - 0x400) {
          _memset(plVar2,0x20,0x400);
          puVar32[3] = plVar33;
          (*(code *)puVar32[1])(*puVar32,plVar2,0x400);
          puVar32[3] = plVar2;
        }
      }
      psVar15 = &segment_command_00000020;
      uVar16 = uVar25;
      _memset();
      uStack_2098 = 0;
      uVar24 = 0;
      puVar32[3] = puVar32[3] + uVar25;
      pcVar19 = (char *)*plStack_2078;
      cVar31 = *pcVar19;
    }
    else {
      uStack_2098 = 0;
    }
  }
  else {
    uVar25 = uVar25 + *(long *)(pcVar19 + 8) + 1;
    cVar31 = *pcVar19;
    if (cVar31 != '\0') {
      uVar25 = uVar25 + 1;
    }
    uVar23 = *(uint *)(lVar18 + 4);
    if (-1 < (int)uVar23) goto LAB_0056386c;
LAB_005638c8:
    uStack_2098 = 0;
LAB_005638cc:
    uVar24 = 0;
  }
  if (cVar31 != '\0') {
    puVar32 = *(undefined8 **)(pcVar19 + 0x18);
    psVar30 = (segment_command *)puVar32[3];
    puVar32[2] = puVar32[2] + 1;
    if ((segment_command *)(puVar32 + 0x84) == psVar30) {
      psVar30 = (segment_command *)(puVar32 + 4);
      plVar11 = (long *)*puVar32;
      uVar16 = 0x400;
      psVar15 = psVar30;
      (*(code *)puVar32[1])();
      puVar32[3] = psVar30;
    }
    *(char *)&psVar30->cmd = cVar31;
    puVar32[3] = puVar32[3] + 1;
    pcVar19 = (char *)*plStack_2078;
  }
  plVar33 = *(long **)(pcVar19 + 0x18);
  if (uVar24 != 0) {
    plVar11 = (long *)plVar33[3];
    plVar33[2] = plVar33[2] + uVar24;
    plVar2 = plVar33 + 0x84;
    uVar16 = (long)plVar2 - (long)plVar11;
    if (uVar16 <= uVar24 && uVar24 - uVar16 != 0) {
      plVar21 = plVar33 + 4;
      plVar20 = plVar2;
      if (plVar2 != plVar11) {
        _memset(plVar11,0x30,uVar16);
        lVar18 = plVar33[3];
        plVar33[3] = (long)(lVar18 + uVar16);
        plVar20 = (long *)(lVar18 + uVar16);
      }
      (*(code *)plVar33[1])(*plVar33,plVar21,(long)plVar20 - (long)plVar21);
      plVar33[3] = (long)plVar21;
      for (uVar24 = uVar24 - uVar16; plVar11 = plVar21, 0x400 < uVar24; uVar24 = uVar24 - 0x400) {
        _memset(plVar21,0x30,0x400);
        plVar33[3] = (long)plVar2;
        (*(code *)plVar33[1])(*plVar33,plVar21,0x400);
        plVar33[3] = (long)plVar21;
      }
    }
    psVar15 = (segment_command *)(segment_command_00000020.segname + 8);
    uVar16 = uVar24;
    _memset();
    plVar33[3] = plVar33[3] + uVar24;
    plVar33 = *(long **)(*plStack_2078 + 0x18);
  }
  if (uVar17 == 0) {
LAB_00563a40:
    uVar17 = uVar16;
    if (uStack_2070 < qStack_2068) {
LAB_00563a84:
      uVar23 = *(uint *)(qStack_2048 + uStack_2070 * 4);
      uVar16 = CONCAT71(uStack_2058._1_7_,(char)uVar23 + (char)(uVar23 / 10) * -10);
      auVar36 = NEON_umull(CONCAT44(uVar23,uVar23),0x10624dd3d1b71759,4);
      uVar35 = NEON_ushl(CONCAT44(auVar36._12_4_,auVar36._4_4_),0xfffffffafffffff3,4);
      auVar37 = NEON_umull(uVar35,0x1999999a1999999a,4);
      uVar34 = NEON_ushl(CONCAT44(uVar23,uVar23),0xfffffffb00000000,4);
      auVar36 = NEON_umull(uVar34,0xa7c5ac5431bde83,4);
      uVar25 = NEON_ushl(CONCAT44(auVar36._12_4_,auVar36._4_4_),0xfffffff9ffffffee,4);
      uVar25 = uVar25 & 0xffff0000ffff;
      auVar36 = NEON_umull(uVar25,0x1999999a1999999a,4);
      uVar25 = CONCAT26((short)((ulong)uVar35 >> 0x20) + auVar37._12_2_ * -10,
                        CONCAT24((short)uVar35 + auVar37._4_2_ * -10,
                                 CONCAT22((short)(uVar25 >> 0x20) + auVar36._12_2_ * -10,
                                          (short)uVar25 + auVar36._4_2_ * -10))) | 0x30003000300030;
      uVar9 = CONCAT24(CONCAT11((char)(uVar23 / 10) +
                                (char)((ulong)(uVar23 / 10) * 0x1999999a >> 0x20) * -10,
                                (char)(uVar23 / 100) +
                                (char)(((ulong)uVar23 / 100) * 0x1999999a >> 0x20) * -10),
                       CONCAT13((char)(uVar25 >> 0x30),
                                CONCAT12((char)(uVar25 >> 0x20),
                                         CONCAT11((char)(uVar25 >> 0x10),(char)uVar25))));
      uStack_2088 = 0xa0000000a;
      uStack_2090 = 0xa0000000a;
      do {
        uStack_2070 = uStack_2070 + 1;
        uStack_2058 = uVar16 | 0x30;
        qStack_2060 = CONCAT71(CONCAT61(uVar9,(char)((uVar23 / 10000000) % 10)),
                               (char)(uVar23 / 100000000) +
                               (char)((uint)((ulong)uVar23 * 0x55e63b89 >> 0x20) / 0x14000000) * -10
                              ) | 0x3030000000003030;
        uStack_2050 = 9;
        plVar33 = *(long **)(*plStack_2078 + 0x18);
        puVar6 = (ulong *)plVar33[3];
        plVar33[2] = plVar33[2] + 9;
        if ((ulong)((long)plVar33 + (0x420 - (long)puVar6)) < 10) {
          plVar11 = plVar33 + 4;
          (*(code *)plVar33[1])(*plVar33,plVar11,(long)puVar6 - (long)plVar11);
          plVar33[3] = (long)plVar11;
          plVar11 = (long *)*plVar33;
          psVar15 = (segment_command *)&qStack_2060;
          uVar17 = 9;
          (*(code *)plVar33[1])();
          if (qStack_2068 <= uStack_2070) break;
        }
        else {
          *(char *)(puVar6 + 1) = (char)uStack_2058;
          *puVar6 = qStack_2060;
          plVar33[3] = plVar33[3] + 9;
          if (qStack_2068 <= uStack_2070) break;
        }
        uVar23 = *(uint *)(qStack_2048 + uStack_2070 * 4);
        uVar16 = CONCAT71(uStack_2058._1_7_,(char)uVar23 + (char)(uVar23 / 10) * -10);
        auVar36 = NEON_umull(CONCAT44(uVar23,uVar23),0x10624dd3d1b71759,4);
        uVar35 = NEON_ushl(CONCAT44(auVar36._12_4_,auVar36._4_4_),0xfffffffafffffff3,4);
        uVar34 = NEON_ushl(CONCAT44(uVar23,uVar23),0xfffffffb00000000,4);
        auVar36 = NEON_umull(uVar34,0xa7c5ac5431bde83,4);
        uVar25 = NEON_ushl(CONCAT44(auVar36._12_4_,auVar36._4_4_),0xfffffff9ffffffee,4);
        uVar25 = uVar25 & 0xffff0000ffff;
        auVar37 = NEON_umull(uVar25,0x1999999a1999999a,4);
        auVar36 = NEON_umull(uVar35,0x1999999a1999999a,4);
        uVar25 = CONCAT26((short)((ulong)uVar35 >> 0x20) -
                          auVar36._12_2_ * (short)((ulong)uStack_2088 >> 0x20),
                          CONCAT24((short)uVar35 - auVar36._4_2_ * (short)uStack_2088,
                                   CONCAT22((short)(uVar25 >> 0x20) -
                                            auVar37._12_2_ * (short)((ulong)uStack_2090 >> 0x20),
                                            (short)uVar25 - auVar37._4_2_ * (short)uStack_2090))) |
                 0x30003000300030;
        uVar9 = CONCAT24(CONCAT11((char)(uVar23 / 10) +
                                  (char)((ulong)(uVar23 / 10) * 0x1999999a >> 0x20) * -10,
                                  (char)(uVar23 / 100) +
                                  (char)(((ulong)uVar23 / 100) * 0x1999999a >> 0x20) * -10),
                         CONCAT13((char)(uVar25 >> 0x30),
                                  CONCAT12((char)(uVar25 >> 0x20),
                                           CONCAT11((char)(uVar25 >> 0x10),(char)uVar25))));
      } while( true );
    }
  }
  else {
    plVar11 = (long *)plVar33[3];
    plVar33[2] = plVar33[2] + uVar17;
    if (uVar17 < (ulong)((long)plVar33 + (0x420 - (long)plVar11))) {
      psVar15 = (segment_command *)((long)&uStack_2058 + -uVar17 + 1);
      uVar16 = uVar17;
      _memcpy();
      plVar33[3] = plVar33[3] + uVar17;
      goto LAB_00563a40;
    }
    plVar2 = plVar33 + 4;
    (*(code *)plVar33[1])(*plVar33,plVar2,(long)plVar11 - (long)plVar2);
    plVar33[3] = (long)plVar2;
    plVar11 = (long *)*plVar33;
    psVar15 = (segment_command *)((long)&uStack_2058 + -uVar17 + 1);
    (*(code *)plVar33[1])();
    if (uStack_2070 < qStack_2068) goto LAB_00563a84;
  }
  uVar16 = uStack_2098;
  lVar18 = *plStack_2078;
  if ((*(long *)(lVar18 + 8) != 0) || ((*(byte *)(*(long *)(lVar18 + 0x10) + 1) >> 3 & 1) != 0)) {
    plVar33 = *(long **)(lVar18 + 0x18);
    psVar30 = (segment_command *)plVar33[3];
    plVar33[2] = plVar33[2] + 1;
    if ((segment_command *)(plVar33 + 0x84) == psVar30) {
      psVar30 = (segment_command *)(plVar33 + 4);
      plVar11 = (long *)*plVar33;
      uVar17 = 0x400;
      psVar15 = psVar30;
      (*(code *)plVar33[1])();
      plVar33[3] = (long)psVar30;
    }
    *(undefined1 *)&psVar30->cmd = 0x2e;
    plVar33[3] = plVar33[3] + 1;
    uVar25 = *(ulong *)(*plStack_2078 + 8);
    puVar32 = *(undefined8 **)(*plStack_2078 + 0x18);
    if (uVar25 == 0) goto LAB_00563e74;
    plVar11 = (long *)puVar32[3];
    puVar32[2] = puVar32[2] + uVar25;
    plVar33 = puVar32 + 0x84;
    uVar17 = (long)plVar33 - (long)plVar11;
    if (uVar17 <= uVar25 && uVar25 - uVar17 != 0) {
      plVar2 = puVar32 + 4;
      plVar21 = plVar33;
      if (plVar33 != plVar11) {
        _memset(plVar11,0x30,uVar17);
        lVar18 = puVar32[3];
        puVar32[3] = (long *)(lVar18 + uVar17);
        plVar21 = (long *)(lVar18 + uVar17);
      }
      (*(code *)puVar32[1])(*puVar32,plVar2,(long)plVar21 - (long)plVar2);
      puVar32[3] = plVar2;
      for (uVar25 = uVar25 - uVar17; plVar11 = plVar2, 0x400 < uVar25; uVar25 = uVar25 - 0x400) {
        _memset(plVar2,0x30,0x400);
        puVar32[3] = plVar33;
        (*(code *)puVar32[1])(*puVar32,plVar2,0x400);
        puVar32[3] = plVar2;
      }
    }
    psVar15 = (segment_command *)(segment_command_00000020.segname + 8);
    uVar17 = uVar25;
    _memset();
    puVar32[3] = puVar32[3] + uVar25;
    lVar18 = *plStack_2078;
  }
  puVar32 = *(undefined8 **)(lVar18 + 0x18);
LAB_00563e74:
  if (uVar16 != 0) {
    plVar11 = (long *)puVar32[3];
    puVar32[2] = puVar32[2] + uVar16;
    plVar33 = puVar32 + 0x84;
    uVar25 = (long)plVar33 - (long)plVar11;
    if (uVar25 <= uVar16 && uVar16 - uVar25 != 0) {
      plVar2 = puVar32 + 4;
      plVar21 = plVar33;
      if (plVar33 != plVar11) {
        _memset(plVar11,0x20,uVar25);
        lVar18 = puVar32[3];
        puVar32[3] = (long *)(lVar18 + uVar25);
        plVar21 = (long *)(lVar18 + uVar25);
      }
      (*(code *)puVar32[1])(*puVar32,plVar2,(long)plVar21 - (long)plVar2);
      puVar32[3] = plVar2;
      for (uVar16 = uVar16 - uVar25; plVar11 = plVar2, 0x400 < uVar16; uVar16 = uVar16 - 0x400) {
        _memset(plVar2,0x20,0x400);
        puVar32[3] = plVar33;
        (*(code *)puVar32[1])(*puVar32,plVar2,0x400);
        puVar32[3] = plVar2;
      }
    }
    psVar15 = &segment_command_00000020;
    uVar17 = uVar16;
    _memset();
    puVar32[3] = puVar32[3] + uVar16;
  }
  if (*(qword *)PTR____stack_chk_guard_00999f88 == qStack_2030) {
    return;
  }
  ___stack_chk_fail();
  pcStack_20a8 = FUN_00564020;
  uVar16 = plVar11[2];
  uVar25 = plVar11[3];
  iVar7 = (int)plVar11[4];
  iVar1 = iVar7 + 0x1f;
  if (-1 < iVar7) {
    iVar1 = iVar7;
  }
  uVar23 = (iVar1 >> 5) + 1;
  uVar24 = (ulong)uVar23;
  lStack_20c8 = (long)(int)uVar23;
  uVar8 = iVar7 % 0x20;
  uVar4 = 0;
  if ((0x20 - uVar8 & 0x40) == 0) {
    uVar4 = (int)(uVar16 << ((ulong)(0x20 - uVar8) & 0x3f));
  }
  *(undefined4 *)((long)psVar15->segname + lStack_20c8 * 4 + -0xc) = uVar4;
  uVar29 = uVar25 >> ((ulong)uVar8 & 0x3f);
  bVar10 = (uVar8 & 0x40) == 0;
  uVar26 = uVar29;
  if (bVar10) {
    uVar26 = (uVar25 << 1) << ((ulong)~uVar8 & 0x3f) | uVar16 >> ((ulong)uVar8 & 0x3f);
  }
  uVar16 = 0;
  if (bVar10) {
    uVar16 = uVar29;
  }
  if (uVar26 != 0 || uVar16 != 0) {
    puVar27 = (undefined4 *)((long)psVar15->segname + lStack_20c8 * 4 + -0x10);
    do {
      do {
        puVar28 = puVar27 + -1;
        *puVar27 = (int)uVar26;
        uVar26 = uVar26 >> 0x20 | uVar16 << 0x20;
        uVar16 = uVar16 >> 0x20;
        puVar27 = puVar28;
      } while (uVar16 != 0);
    } while (uVar26 != 0);
  }
  if (uVar23 != 0) {
    uVar24 = 0;
    lVar18 = (long)(iVar1 >> 5);
    do {
      uVar24 = uVar24 + (ulong)*(uint *)((long)psVar15->segname + lVar18 * 4 + -8) * 10;
      *(int *)((long)psVar15->segname + lVar18 * 4 + -8) = (int)uVar24;
      uVar24 = uVar24 >> 0x20;
      lVar18 = lVar18 + -1;
    } while (lVar18 != -1);
    if (*(int *)((long)psVar15->segname + lStack_20c8 * 4 + -0xc) == 0) {
      lStack_20c8 = lStack_20c8 + -1;
    }
  }
  auStack_20d0[0] = (undefined1)uVar24;
  psStack_20c0 = psVar15;
  uStack_20b8 = uVar17;
  pppppppuStack_20b0 = &ppppppuStack_1f90;
  (*(code *)plVar11[1])(*plVar11,auStack_20d0);
  return;
}



/* Entry: 005633e8; end: 005635c7;  */

void FUN_005633e8(undefined8 *param_1,code *param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong *puVar6;
  int iVar7;
  uint uVar8;
  undefined6 uVar9;
  bool bVar10;
  long *plVar11;
  code *pcVar12;
  code *pcVar13;
  undefined1 *puVar14;
  segment_command *psVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  char *pcVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined4 *puVar27;
  ulong uVar29;
  segment_command *psVar30;
  char cVar31;
  undefined8 *puVar32;
  long *plVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_1ea0 [8];
  long lStack_1e98;
  segment_command *psStack_1e90;
  ulong uStack_1e88;
  undefined1 ******ppppppuStack_1e80;
  code *pcStack_1e78;
  ulong uStack_1e68;
  undefined8 uStack_1e60;
  undefined8 uStack_1e58;
  long *plStack_1e48;
  ulong uStack_1e40;
  qword qStack_1e38;
  qword qStack_1e30;
  undefined8 uStack_1e28;
  ulong uStack_1e20;
  qword qStack_1e18;
  qword qStack_1e10;
  qword qStack_1e00;
  undefined1 *****pppppuStack_1d60;
  code *pcStack_1d58;
  undefined1 auStack_1d50 [64];
  undefined1 ****ppppuStack_1d10;
  code *pcStack_1d08;
  undefined1 auStack_1cf8 [2560];
  long lStack_12f8;
  undefined1 ***pppuStack_12d0;
  undefined8 uStack_12c8;
  undefined1 auStack_12b8 [2048];
  long lStack_ab8;
  undefined1 **ppuStack_a90;
  undefined8 uStack_a88;
  undefined1 auStack_a78 [1536];
  long lStack_478;
  undefined1 *puStack_450;
  undefined8 uStack_448;
  undefined1 auStack_438 [1024];
  long lStack_38;
  undefined4 *puVar28;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  _bzero(auStack_438,0x400);
  pcVar12 = (code *)auStack_438;
  (*param_2)(param_1,pcVar12,0x100);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uStack_448 = 0x563460;
  lStack_478 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_450 = &stack0xfffffffffffffff0;
  _bzero(auStack_a78,0x600);
  pcVar13 = (code *)auStack_a78;
  (*pcVar12)(param_1,pcVar13,0x180);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_478) {
    return;
  }
  ___stack_chk_fail();
  uStack_a88 = 0x5634d8;
  lStack_ab8 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_a90 = &puStack_450;
  _bzero(auStack_12b8,0x800);
  pcVar12 = (code *)auStack_12b8;
  (*pcVar13)(param_1,pcVar12,0x200);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_ab8) {
    return;
  }
  ___stack_chk_fail();
  uStack_12c8 = 0x563550;
  lStack_12f8 = *(long *)PTR____stack_chk_guard_00999f88;
  pppuStack_12d0 = &ppuStack_a90;
  _bzero(auStack_1cf8,0xa00);
  puVar14 = auStack_1cf8;
  uVar16 = 0x280;
  (*pcVar12)();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_12f8) {
    return;
  }
  ___stack_chk_fail();
  psVar15 = (segment_command *)auStack_1d50;
  ppppuStack_1d10 = &pppuStack_12d0;
  pcStack_1d08 = FUN_005635c8;
  auStack_1d50._56_8_ = *(long *)PTR____stack_chk_guard_00999f88;
  uVar25 = param_1[2];
  uVar17 = param_1[3];
  iVar7 = *(int *)(param_1 + 4);
  auStack_1d50._40_8_ = puVar14;
  auStack_1d50._48_8_ = uVar16;
  iVar1 = iVar7 + 0x1f;
  if (-1 < iVar7) {
    iVar1 = iVar7;
  }
  iVar1 = (iVar1 >> 5) + 1;
  lVar18 = (long)iVar1;
  iVar3 = iVar7 + 0xbe;
  if (-0xa0 < iVar7) {
    iVar3 = iVar7 + 0x9f;
  }
  auStack_1d50._8_8_ = SEXT48(((iVar3 >> 5) * 0xb) / 10);
  auStack_1d50._32_8_ = 0;
  uVar23 = iVar7 % 0x20;
  uVar4 = 0;
  if ((uVar23 & 0x40) == 0) {
    uVar4 = (int)(uVar25 << ((ulong)uVar23 & 0x3f));
  }
  *(undefined4 *)(puVar14 + (long)iVar1 * 4 + -4) = uVar4;
  uVar23 = 0x20 - uVar23;
  uVar26 = uVar17 >> ((ulong)uVar23 & 0x3f);
  bVar10 = (uVar23 & 0x40) == 0;
  uVar24 = uVar26;
  if (bVar10) {
    uVar24 = (uVar17 << 1) << ((ulong)~uVar23 & 0x3f) | uVar25 >> ((ulong)uVar23 & 0x3f);
  }
  uVar25 = 0;
  if (bVar10) {
    uVar25 = uVar26;
  }
  if (uVar24 != 0 || uVar25 != 0) {
    do {
      do {
        *(int *)(puVar14 + lVar18 * 4) = (int)uVar24;
        lVar18 = lVar18 + 1;
        uVar24 = uVar24 >> 0x20 | uVar25 << 0x20;
        uVar25 = uVar25 >> 0x20;
      } while (uVar25 != 0);
    } while (uVar24 != 0);
  }
  lVar22 = auStack_1d50._8_8_;
  if (lVar18 == 0) {
    uVar23 = *(uint *)(puVar14 + auStack_1d50._8_8_ * 4);
    uVar25 = (ulong)uVar23;
    auStack_1d50._0_8_ = auStack_1d50._8_8_ + 1;
  }
  else {
    do {
      auStack_1d50._0_8_ = lVar22;
      uVar25 = 0;
      lVar22 = lVar18;
      do {
        uVar25 = (ulong)*(uint *)(puVar14 + lVar22 * 4 + -4) | uVar25 << 0x20;
        *(int *)(puVar14 + lVar22 * 4 + -4) = (int)(uVar25 / 1000000000);
        uVar25 = uVar25 % 1000000000;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar5 = lVar18 + -1;
      if (*(int *)(puVar14 + (lVar18 + -1) * 4) != 0) {
        lVar5 = lVar18;
      }
      uVar23 = (uint)uVar25;
      *(uint *)(puVar14 + (auStack_1d50._0_8_ + -1) * 4) = uVar23;
      lVar18 = lVar5;
      lVar22 = auStack_1d50._0_8_ + -1;
    } while (lVar5 != 0);
  }
  if (uVar23 != 0) {
    do {
      uVar23 = (uint)uVar25;
      lVar18 = 0x18 - auStack_1d50._32_8_;
      auStack_1d50._32_8_ = auStack_1d50._32_8_ + 1;
      auStack_1d50[lVar18] = (char)uVar25 + (char)(uVar25 / 10) * -10 | 0x30;
      uVar25 = uVar25 / 10;
    } while (9 < uVar23);
  }
  plVar11 = (long *)*param_1;
  (*(code *)param_1[1])();
  if (*(long *)PTR____stack_chk_guard_00999f88 == auStack_1d50._56_8_) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1d58 = FUN_005637ac;
  qStack_1e00 = *(qword *)PTR____stack_chk_guard_00999f88;
  qStack_1e30 = *(qword *)((long)psVar15->segname + 8);
  uStack_1e28 = psVar15->vmaddr;
  uVar17 = psVar15->vmsize;
  qStack_1e18 = psVar15->fileoff;
  qStack_1e10 = psVar15->filesize;
  uStack_1e40 = *(ulong *)psVar15;
  qStack_1e38 = *(qword *)psVar15->segname;
  uVar25 = (qStack_1e38 - uStack_1e40) * 9 + uVar17;
  pcVar19 = (char *)*plVar11;
  lVar18 = *(long *)(pcVar19 + 0x10);
  plStack_1e48 = plVar11;
  uStack_1e20 = uVar17;
  pppppuStack_1d60 = &ppppuStack_1d10;
  if ((*(long *)(pcVar19 + 8) == 0) && ((*(byte *)(lVar18 + 1) >> 3 & 1) == 0)) {
    cVar31 = *pcVar19;
    if (cVar31 != '\0') {
      uVar25 = uVar25 + 1;
    }
    uVar23 = *(uint *)(lVar18 + 4);
    if ((int)uVar23 < 0) goto LAB_005638c8;
LAB_0056386c:
    uVar24 = uVar23 - uVar25;
    if (uVar23 < uVar25 || uVar24 == 0) goto LAB_005638c8;
    uStack_1e68 = uVar24;
    if ((*(byte *)(lVar18 + 1) & 1) != 0) goto LAB_005638cc;
    if ((*(byte *)(lVar18 + 1) >> 4 & 1) == 0) {
      puVar32 = *(undefined8 **)(pcVar19 + 0x18);
      plVar11 = (long *)puVar32[3];
      puVar32[2] = puVar32[2] + uVar24;
      plVar33 = puVar32 + 0x84;
      uVar26 = (long)plVar33 - (long)plVar11;
      uVar16 = uVar24 - uVar26;
      uVar25 = uVar24;
      if (uVar26 <= uVar24 && uVar16 != 0) {
        plVar2 = puVar32 + 4;
        plVar21 = plVar33;
        if (plVar33 != plVar11) {
          _memset(plVar11,0x20,uVar26);
          lVar18 = puVar32[3];
          puVar32[3] = (long *)(lVar18 + uVar26);
          plVar21 = (long *)(lVar18 + uVar26);
        }
        (*(code *)puVar32[1])(*puVar32,plVar2,(long)plVar21 - (long)plVar2);
        puVar32[3] = plVar2;
        for (; uVar25 = uVar16, plVar11 = plVar2, 0x400 < uVar16; uVar16 = uVar16 - 0x400) {
          _memset(plVar2,0x20,0x400);
          puVar32[3] = plVar33;
          (*(code *)puVar32[1])(*puVar32,plVar2,0x400);
          puVar32[3] = plVar2;
        }
      }
      psVar15 = &segment_command_00000020;
      uVar16 = uVar25;
      _memset();
      uStack_1e68 = 0;
      uVar24 = 0;
      puVar32[3] = puVar32[3] + uVar25;
      pcVar19 = (char *)*plStack_1e48;
      cVar31 = *pcVar19;
    }
    else {
      uStack_1e68 = 0;
    }
  }
  else {
    uVar25 = uVar25 + *(long *)(pcVar19 + 8) + 1;
    cVar31 = *pcVar19;
    if (cVar31 != '\0') {
      uVar25 = uVar25 + 1;
    }
    uVar23 = *(uint *)(lVar18 + 4);
    if (-1 < (int)uVar23) goto LAB_0056386c;
LAB_005638c8:
    uStack_1e68 = 0;
LAB_005638cc:
    uVar24 = 0;
  }
  if (cVar31 != '\0') {
    puVar32 = *(undefined8 **)(pcVar19 + 0x18);
    psVar30 = (segment_command *)puVar32[3];
    puVar32[2] = puVar32[2] + 1;
    if ((segment_command *)(puVar32 + 0x84) == psVar30) {
      psVar30 = (segment_command *)(puVar32 + 4);
      plVar11 = (long *)*puVar32;
      uVar16 = 0x400;
      psVar15 = psVar30;
      (*(code *)puVar32[1])();
      puVar32[3] = psVar30;
    }
    *(char *)&psVar30->cmd = cVar31;
    puVar32[3] = puVar32[3] + 1;
    pcVar19 = (char *)*plStack_1e48;
  }
  plVar33 = *(long **)(pcVar19 + 0x18);
  if (uVar24 != 0) {
    plVar11 = (long *)plVar33[3];
    plVar33[2] = plVar33[2] + uVar24;
    plVar2 = plVar33 + 0x84;
    uVar16 = (long)plVar2 - (long)plVar11;
    if (uVar16 <= uVar24 && uVar24 - uVar16 != 0) {
      plVar21 = plVar33 + 4;
      plVar20 = plVar2;
      if (plVar2 != plVar11) {
        _memset(plVar11,0x30,uVar16);
        lVar18 = plVar33[3];
        plVar33[3] = (long)(lVar18 + uVar16);
        plVar20 = (long *)(lVar18 + uVar16);
      }
      (*(code *)plVar33[1])(*plVar33,plVar21,(long)plVar20 - (long)plVar21);
      plVar33[3] = (long)plVar21;
      for (uVar24 = uVar24 - uVar16; plVar11 = plVar21, 0x400 < uVar24; uVar24 = uVar24 - 0x400) {
        _memset(plVar21,0x30,0x400);
        plVar33[3] = (long)plVar2;
        (*(code *)plVar33[1])(*plVar33,plVar21,0x400);
        plVar33[3] = (long)plVar21;
      }
    }
    psVar15 = (segment_command *)(segment_command_00000020.segname + 8);
    uVar16 = uVar24;
    _memset();
    plVar33[3] = plVar33[3] + uVar24;
    plVar33 = *(long **)(*plStack_1e48 + 0x18);
  }
  if (uVar17 == 0) {
LAB_00563a40:
    uVar17 = uVar16;
    if (uStack_1e40 < qStack_1e38) {
LAB_00563a84:
      uVar23 = *(uint *)(qStack_1e18 + uStack_1e40 * 4);
      uVar16 = CONCAT71(uStack_1e28._1_7_,(char)uVar23 + (char)(uVar23 / 10) * -10);
      auVar36 = NEON_umull(CONCAT44(uVar23,uVar23),0x10624dd3d1b71759,4);
      uVar35 = NEON_ushl(CONCAT44(auVar36._12_4_,auVar36._4_4_),0xfffffffafffffff3,4);
      auVar37 = NEON_umull(uVar35,0x1999999a1999999a,4);
      uVar34 = NEON_ushl(CONCAT44(uVar23,uVar23),0xfffffffb00000000,4);
      auVar36 = NEON_umull(uVar34,0xa7c5ac5431bde83,4);
      uVar25 = NEON_ushl(CONCAT44(auVar36._12_4_,auVar36._4_4_),0xfffffff9ffffffee,4);
      uVar25 = uVar25 & 0xffff0000ffff;
      auVar36 = NEON_umull(uVar25,0x1999999a1999999a,4);
      uVar25 = CONCAT26((short)((ulong)uVar35 >> 0x20) + auVar37._12_2_ * -10,
                        CONCAT24((short)uVar35 + auVar37._4_2_ * -10,
                                 CONCAT22((short)(uVar25 >> 0x20) + auVar36._12_2_ * -10,
                                          (short)uVar25 + auVar36._4_2_ * -10))) | 0x30003000300030;
      uVar9 = CONCAT24(CONCAT11((char)(uVar23 / 10) +
                                (char)((ulong)(uVar23 / 10) * 0x1999999a >> 0x20) * -10,
                                (char)(uVar23 / 100) +
                                (char)(((ulong)uVar23 / 100) * 0x1999999a >> 0x20) * -10),
                       CONCAT13((char)(uVar25 >> 0x30),
                                CONCAT12((char)(uVar25 >> 0x20),
                                         CONCAT11((char)(uVar25 >> 0x10),(char)uVar25))));
      uStack_1e58 = 0xa0000000a;
      uStack_1e60 = 0xa0000000a;
      do {
        uStack_1e40 = uStack_1e40 + 1;
        uStack_1e28 = uVar16 | 0x30;
        qStack_1e30 = CONCAT71(CONCAT61(uVar9,(char)((uVar23 / 10000000) % 10)),
                               (char)(uVar23 / 100000000) +
                               (char)((uint)((ulong)uVar23 * 0x55e63b89 >> 0x20) / 0x14000000) * -10
                              ) | 0x3030000000003030;
        uStack_1e20 = 9;
        plVar33 = *(long **)(*plStack_1e48 + 0x18);
        puVar6 = (ulong *)plVar33[3];
        plVar33[2] = plVar33[2] + 9;
        if ((ulong)((long)plVar33 + (0x420 - (long)puVar6)) < 10) {
          plVar11 = plVar33 + 4;
          (*(code *)plVar33[1])(*plVar33,plVar11,(long)puVar6 - (long)plVar11);
          plVar33[3] = (long)plVar11;
          plVar11 = (long *)*plVar33;
          psVar15 = (segment_command *)&qStack_1e30;
          uVar17 = 9;
          (*(code *)plVar33[1])();
          if (qStack_1e38 <= uStack_1e40) break;
        }
        else {
          *(char *)(puVar6 + 1) = (char)uStack_1e28;
          *puVar6 = qStack_1e30;
          plVar33[3] = plVar33[3] + 9;
          if (qStack_1e38 <= uStack_1e40) break;
        }
        uVar23 = *(uint *)(qStack_1e18 + uStack_1e40 * 4);
        uVar16 = CONCAT71(uStack_1e28._1_7_,(char)uVar23 + (char)(uVar23 / 10) * -10);
        auVar36 = NEON_umull(CONCAT44(uVar23,uVar23),0x10624dd3d1b71759,4);
        uVar35 = NEON_ushl(CONCAT44(auVar36._12_4_,auVar36._4_4_),0xfffffffafffffff3,4);
        uVar34 = NEON_ushl(CONCAT44(uVar23,uVar23),0xfffffffb00000000,4);
        auVar36 = NEON_umull(uVar34,0xa7c5ac5431bde83,4);
        uVar25 = NEON_ushl(CONCAT44(auVar36._12_4_,auVar36._4_4_),0xfffffff9ffffffee,4);
        uVar25 = uVar25 & 0xffff0000ffff;
        auVar37 = NEON_umull(uVar25,0x1999999a1999999a,4);
        auVar36 = NEON_umull(uVar35,0x1999999a1999999a,4);
        uVar25 = CONCAT26((short)((ulong)uVar35 >> 0x20) -
                          auVar36._12_2_ * (short)((ulong)uStack_1e58 >> 0x20),
                          CONCAT24((short)uVar35 - auVar36._4_2_ * (short)uStack_1e58,
                                   CONCAT22((short)(uVar25 >> 0x20) -
                                            auVar37._12_2_ * (short)((ulong)uStack_1e60 >> 0x20),
                                            (short)uVar25 - auVar37._4_2_ * (short)uStack_1e60))) |
                 0x30003000300030;
        uVar9 = CONCAT24(CONCAT11((char)(uVar23 / 10) +
                                  (char)((ulong)(uVar23 / 10) * 0x1999999a >> 0x20) * -10,
                                  (char)(uVar23 / 100) +
                                  (char)(((ulong)uVar23 / 100) * 0x1999999a >> 0x20) * -10),
                         CONCAT13((char)(uVar25 >> 0x30),
                                  CONCAT12((char)(uVar25 >> 0x20),
                                           CONCAT11((char)(uVar25 >> 0x10),(char)uVar25))));
      } while( true );
    }
  }
  else {
    plVar11 = (long *)plVar33[3];
    plVar33[2] = plVar33[2] + uVar17;
    if (uVar17 < (ulong)((long)plVar33 + (0x420 - (long)plVar11))) {
      psVar15 = (segment_command *)((long)&uStack_1e28 + -uVar17 + 1);
      uVar16 = uVar17;
      _memcpy();
      plVar33[3] = plVar33[3] + uVar17;
      goto LAB_00563a40;
    }
    plVar2 = plVar33 + 4;
    (*(code *)plVar33[1])(*plVar33,plVar2,(long)plVar11 - (long)plVar2);
    plVar33[3] = (long)plVar2;
    plVar11 = (long *)*plVar33;
    psVar15 = (segment_command *)((long)&uStack_1e28 + -uVar17 + 1);
    (*(code *)plVar33[1])();
    if (uStack_1e40 < qStack_1e38) goto LAB_00563a84;
  }
  uVar16 = uStack_1e68;
  lVar18 = *plStack_1e48;
  if ((*(long *)(lVar18 + 8) != 0) || ((*(byte *)(*(long *)(lVar18 + 0x10) + 1) >> 3 & 1) != 0)) {
    plVar33 = *(long **)(lVar18 + 0x18);
    psVar30 = (segment_command *)plVar33[3];
    plVar33[2] = plVar33[2] + 1;
    if ((segment_command *)(plVar33 + 0x84) == psVar30) {
      psVar30 = (segment_command *)(plVar33 + 4);
      plVar11 = (long *)*plVar33;
      uVar17 = 0x400;
      psVar15 = psVar30;
      (*(code *)plVar33[1])();
      plVar33[3] = (long)psVar30;
    }
    *(undefined1 *)&psVar30->cmd = 0x2e;
    plVar33[3] = plVar33[3] + 1;
    uVar25 = *(ulong *)(*plStack_1e48 + 8);
    puVar32 = *(undefined8 **)(*plStack_1e48 + 0x18);
    if (uVar25 == 0) goto LAB_00563e74;
    plVar11 = (long *)puVar32[3];
    puVar32[2] = puVar32[2] + uVar25;
    plVar33 = puVar32 + 0x84;
    uVar17 = (long)plVar33 - (long)plVar11;
    if (uVar17 <= uVar25 && uVar25 - uVar17 != 0) {
      plVar2 = puVar32 + 4;
      plVar21 = plVar33;
      if (plVar33 != plVar11) {
        _memset(plVar11,0x30,uVar17);
        lVar18 = puVar32[3];
        puVar32[3] = (long *)(lVar18 + uVar17);
        plVar21 = (long *)(lVar18 + uVar17);
      }
      (*(code *)puVar32[1])(*puVar32,plVar2,(long)plVar21 - (long)plVar2);
      puVar32[3] = plVar2;
      for (uVar25 = uVar25 - uVar17; plVar11 = plVar2, 0x400 < uVar25; uVar25 = uVar25 - 0x400) {
        _memset(plVar2,0x30,0x400);
        puVar32[3] = plVar33;
        (*(code *)puVar32[1])(*puVar32,plVar2,0x400);
        puVar32[3] = plVar2;
      }
    }
    psVar15 = (segment_command *)(segment_command_00000020.segname + 8);
    uVar17 = uVar25;
    _memset();
    puVar32[3] = puVar32[3] + uVar25;
    lVar18 = *plStack_1e48;
  }
  puVar32 = *(undefined8 **)(lVar18 + 0x18);
LAB_00563e74:
  if (uVar16 != 0) {
    plVar11 = (long *)puVar32[3];
    puVar32[2] = puVar32[2] + uVar16;
    plVar33 = puVar32 + 0x84;
    uVar25 = (long)plVar33 - (long)plVar11;
    if (uVar25 <= uVar16 && uVar16 - uVar25 != 0) {
      plVar2 = puVar32 + 4;
      plVar21 = plVar33;
      if (plVar33 != plVar11) {
        _memset(plVar11,0x20,uVar25);
        lVar18 = puVar32[3];
        puVar32[3] = (long *)(lVar18 + uVar25);
        plVar21 = (long *)(lVar18 + uVar25);
      }
      (*(code *)puVar32[1])(*puVar32,plVar2,(long)plVar21 - (long)plVar2);
      puVar32[3] = plVar2;
      for (uVar16 = uVar16 - uVar25; plVar11 = plVar2, 0x400 < uVar16; uVar16 = uVar16 - 0x400) {
        _memset(plVar2,0x20,0x400);
        puVar32[3] = plVar33;
        (*(code *)puVar32[1])(*puVar32,plVar2,0x400);
        puVar32[3] = plVar2;
      }
    }
    psVar15 = &segment_command_00000020;
    uVar17 = uVar16;
    _memset();
    puVar32[3] = puVar32[3] + uVar16;
  }
  if (*(qword *)PTR____stack_chk_guard_00999f88 == qStack_1e00) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e78 = FUN_00564020;
  uVar16 = plVar11[2];
  uVar25 = plVar11[3];
  iVar7 = (int)plVar11[4];
  iVar1 = iVar7 + 0x1f;
  if (-1 < iVar7) {
    iVar1 = iVar7;
  }
  uVar23 = (iVar1 >> 5) + 1;
  uVar24 = (ulong)uVar23;
  lStack_1e98 = (long)(int)uVar23;
  uVar8 = iVar7 % 0x20;
  uVar4 = 0;
  if ((0x20 - uVar8 & 0x40) == 0) {
    uVar4 = (int)(uVar16 << ((ulong)(0x20 - uVar8) & 0x3f));
  }
  *(undefined4 *)((long)psVar15->segname + lStack_1e98 * 4 + -0xc) = uVar4;
  uVar29 = uVar25 >> ((ulong)uVar8 & 0x3f);
  bVar10 = (uVar8 & 0x40) == 0;
  uVar26 = uVar29;
  if (bVar10) {
    uVar26 = (uVar25 << 1) << ((ulong)~uVar8 & 0x3f) | uVar16 >> ((ulong)uVar8 & 0x3f);
  }
  uVar16 = 0;
  if (bVar10) {
    uVar16 = uVar29;
  }
  if (uVar26 != 0 || uVar16 != 0) {
    puVar27 = (undefined4 *)((long)psVar15->segname + lStack_1e98 * 4 + -0x10);
    do {
      do {
        puVar28 = puVar27 + -1;
        *puVar27 = (int)uVar26;
        uVar26 = uVar26 >> 0x20 | uVar16 << 0x20;
        uVar16 = uVar16 >> 0x20;
        puVar27 = puVar28;
      } while (uVar16 != 0);
    } while (uVar26 != 0);
  }
  if (uVar23 != 0) {
    uVar24 = 0;
    lVar18 = (long)(iVar1 >> 5);
    do {
      uVar24 = uVar24 + (ulong)*(uint *)((long)psVar15->segname + lVar18 * 4 + -8) * 10;
      *(int *)((long)psVar15->segname + lVar18 * 4 + -8) = (int)uVar24;
      uVar24 = uVar24 >> 0x20;
      lVar18 = lVar18 + -1;
    } while (lVar18 != -1);
    if (*(int *)((long)psVar15->segname + lStack_1e98 * 4 + -0xc) == 0) {
      lStack_1e98 = lStack_1e98 + -1;
    }
  }
  auStack_1ea0[0] = (undefined1)uVar24;
  psStack_1e90 = psVar15;
  uStack_1e88 = uVar17;
  ppppppuStack_1e80 = &pppppuStack_1d60;
  (*(code *)plVar11[1])(*plVar11,auStack_1ea0);
  return;
}



/* Entry: 005635c8; end: 005637ab;  */

void FUN_005635c8(undefined8 *param_1,qword param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong *puVar6;
  int iVar7;
  uint uVar8;
  undefined6 uVar9;
  bool bVar10;
  long *plVar11;
  segment_command *psVar12;
  long lVar13;
  char *pcVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 *puVar23;
  ulong uVar25;
  segment_command *psVar26;
  ulong uVar27;
  char cVar28;
  undefined8 *puVar29;
  long *plVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_1a0 [8];
  long lStack_198;
  segment_command *psStack_190;
  ulong uStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_148;
  ulong uStack_140;
  qword qStack_138;
  qword qStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  qword qStack_118;
  qword qStack_110;
  qword qStack_100;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  byte abStack_3a [10];
  qword qStack_30;
  qword qStack_28;
  ulong uStack_20;
  long lStack_18;
  undefined4 *puVar24;
  
  psVar12 = (segment_command *)&lStack_50;
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar20 = param_1[2];
  uVar27 = param_1[3];
  iVar7 = *(int *)(param_1 + 4);
  iVar1 = iVar7 + 0x1f;
  if (-1 < iVar7) {
    iVar1 = iVar7;
  }
  iVar1 = (iVar1 >> 5) + 1;
  lVar13 = (long)iVar1;
  iVar3 = iVar7 + 0xbe;
  if (-0xa0 < iVar7) {
    iVar3 = iVar7 + 0x9f;
  }
  lStack_48 = (long)(((iVar3 >> 5) * 0xb) / 10);
  qStack_30 = 0;
  uVar18 = iVar7 % 0x20;
  uVar4 = 0;
  if ((uVar18 & 0x40) == 0) {
    uVar4 = (int)(uVar20 << ((ulong)uVar18 & 0x3f));
  }
  *(undefined4 *)(param_2 + (long)iVar1 * 4 + -4) = uVar4;
  uVar18 = 0x20 - uVar18;
  uVar22 = uVar27 >> ((ulong)uVar18 & 0x3f);
  bVar10 = (uVar18 & 0x40) == 0;
  uVar19 = uVar22;
  if (bVar10) {
    uVar19 = (uVar27 << 1) << ((ulong)~uVar18 & 0x3f) | uVar20 >> ((ulong)uVar18 & 0x3f);
  }
  uVar20 = 0;
  if (bVar10) {
    uVar20 = uVar22;
  }
  if (uVar19 != 0 || uVar20 != 0) {
    do {
      do {
        *(int *)(param_2 + lVar13 * 4) = (int)uVar19;
        lVar13 = lVar13 + 1;
        uVar19 = uVar19 >> 0x20 | uVar20 << 0x20;
        uVar20 = uVar20 >> 0x20;
      } while (uVar20 != 0);
    } while (uVar19 != 0);
  }
  if (lVar13 == 0) {
    uVar18 = *(uint *)(param_2 + lStack_48 * 4);
    uVar20 = (ulong)uVar18;
    lStack_50 = lStack_48 + 1;
  }
  else {
    lVar17 = lStack_48;
    do {
      lStack_50 = lVar17;
      uVar20 = 0;
      lVar17 = lVar13;
      do {
        uVar20 = (ulong)*(uint *)((param_2 - 4) + lVar17 * 4) | uVar20 << 0x20;
        *(int *)((param_2 - 4) + lVar17 * 4) = (int)(uVar20 / 1000000000);
        uVar20 = uVar20 % 1000000000;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar5 = lVar13 + -1;
      if (*(int *)(param_2 + (lVar13 + -1) * 4) != 0) {
        lVar5 = lVar13;
      }
      uVar18 = (uint)uVar20;
      *(uint *)(param_2 + (lStack_50 + -1) * 4) = uVar18;
      lVar13 = lVar5;
      lVar17 = lStack_50 + -1;
    } while (lVar5 != 0);
  }
  qStack_28 = param_2;
  uStack_20 = param_3;
  if (uVar18 != 0) {
    do {
      uVar18 = (uint)uVar20;
      lVar13 = 2 - qStack_30;
      qStack_30 = qStack_30 + 1;
      abStack_3a[lVar13] = (char)uVar20 + (char)(uVar20 / 10) * -10 | 0x30;
      uVar20 = uVar20 / 10;
    } while (9 < uVar18);
  }
  plVar11 = (long *)*param_1;
  (*(code *)param_1[1])();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_005637ac;
  qStack_100 = *(qword *)PTR____stack_chk_guard_00999f88;
  qStack_130 = *(qword *)((long)psVar12->segname + 8);
  uStack_128 = psVar12->vmaddr;
  uVar27 = psVar12->vmsize;
  qStack_118 = psVar12->fileoff;
  qStack_110 = psVar12->filesize;
  uStack_140 = *(ulong *)psVar12;
  qStack_138 = *(qword *)psVar12->segname;
  uVar20 = (qStack_138 - uStack_140) * 9 + uVar27;
  pcVar14 = (char *)*plVar11;
  lVar13 = *(long *)(pcVar14 + 0x10);
  plStack_148 = plVar11;
  uStack_120 = uVar27;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((*(long *)(pcVar14 + 8) == 0) && ((*(byte *)(lVar13 + 1) >> 3 & 1) == 0)) {
    cVar28 = *pcVar14;
    if (cVar28 != '\0') {
      uVar20 = uVar20 + 1;
    }
    uVar18 = *(uint *)(lVar13 + 4);
    if ((int)uVar18 < 0) goto LAB_005638c8;
LAB_0056386c:
    uVar19 = uVar18 - uVar20;
    if (uVar18 < uVar20 || uVar19 == 0) goto LAB_005638c8;
    uStack_168 = uVar19;
    if ((*(byte *)(lVar13 + 1) & 1) != 0) goto LAB_005638cc;
    if ((*(byte *)(lVar13 + 1) >> 4 & 1) == 0) {
      puVar29 = *(undefined8 **)(pcVar14 + 0x18);
      plVar11 = (long *)puVar29[3];
      puVar29[2] = puVar29[2] + uVar19;
      plVar30 = puVar29 + 0x84;
      uVar21 = (long)plVar30 - (long)plVar11;
      uVar20 = uVar19 - uVar21;
      uVar22 = uVar19;
      if (uVar21 <= uVar19 && uVar20 != 0) {
        plVar2 = puVar29 + 4;
        plVar16 = plVar30;
        if (plVar30 != plVar11) {
          _memset(plVar11,0x20,uVar21);
          lVar13 = puVar29[3];
          puVar29[3] = (long *)(lVar13 + uVar21);
          plVar16 = (long *)(lVar13 + uVar21);
        }
        (*(code *)puVar29[1])(*puVar29,plVar2,(long)plVar16 - (long)plVar2);
        puVar29[3] = plVar2;
        for (; uVar22 = uVar20, plVar11 = plVar2, 0x400 < uVar20; uVar20 = uVar20 - 0x400) {
          _memset(plVar2,0x20,0x400);
          puVar29[3] = plVar30;
          (*(code *)puVar29[1])(*puVar29,plVar2,0x400);
          puVar29[3] = plVar2;
        }
      }
      psVar12 = &segment_command_00000020;
      param_3 = uVar22;
      _memset();
      uStack_168 = 0;
      uVar19 = 0;
      puVar29[3] = puVar29[3] + uVar22;
      pcVar14 = (char *)*plStack_148;
      cVar28 = *pcVar14;
    }
    else {
      uStack_168 = 0;
    }
  }
  else {
    uVar20 = uVar20 + *(long *)(pcVar14 + 8) + 1;
    cVar28 = *pcVar14;
    if (cVar28 != '\0') {
      uVar20 = uVar20 + 1;
    }
    uVar18 = *(uint *)(lVar13 + 4);
    if (-1 < (int)uVar18) goto LAB_0056386c;
LAB_005638c8:
    uStack_168 = 0;
LAB_005638cc:
    uVar19 = 0;
  }
  if (cVar28 != '\0') {
    puVar29 = *(undefined8 **)(pcVar14 + 0x18);
    psVar26 = (segment_command *)puVar29[3];
    puVar29[2] = puVar29[2] + 1;
    if ((segment_command *)(puVar29 + 0x84) == psVar26) {
      psVar26 = (segment_command *)(puVar29 + 4);
      plVar11 = (long *)*puVar29;
      param_3 = 0x400;
      psVar12 = psVar26;
      (*(code *)puVar29[1])();
      puVar29[3] = psVar26;
    }
    *(char *)&psVar26->cmd = cVar28;
    puVar29[3] = puVar29[3] + 1;
    pcVar14 = (char *)*plStack_148;
  }
  plVar30 = *(long **)(pcVar14 + 0x18);
  if (uVar19 != 0) {
    plVar11 = (long *)plVar30[3];
    plVar30[2] = plVar30[2] + uVar19;
    plVar2 = plVar30 + 0x84;
    uVar20 = (long)plVar2 - (long)plVar11;
    if (uVar20 <= uVar19 && uVar19 - uVar20 != 0) {
      plVar16 = plVar30 + 4;
      plVar15 = plVar2;
      if (plVar2 != plVar11) {
        _memset(plVar11,0x30,uVar20);
        lVar13 = plVar30[3];
        plVar30[3] = (long)(lVar13 + uVar20);
        plVar15 = (long *)(lVar13 + uVar20);
      }
      (*(code *)plVar30[1])(*plVar30,plVar16,(long)plVar15 - (long)plVar16);
      plVar30[3] = (long)plVar16;
      for (uVar19 = uVar19 - uVar20; plVar11 = plVar16, 0x400 < uVar19; uVar19 = uVar19 - 0x400) {
        _memset(plVar16,0x30,0x400);
        plVar30[3] = (long)plVar2;
        (*(code *)plVar30[1])(*plVar30,plVar16,0x400);
        plVar30[3] = (long)plVar16;
      }
    }
    psVar12 = (segment_command *)(segment_command_00000020.segname + 8);
    param_3 = uVar19;
    _memset();
    plVar30[3] = plVar30[3] + uVar19;
    plVar30 = *(long **)(*plStack_148 + 0x18);
  }
  if (uVar27 == 0) {
LAB_00563a40:
    uVar27 = param_3;
    if (uStack_140 < qStack_138) {
LAB_00563a84:
      uVar18 = *(uint *)(qStack_118 + uStack_140 * 4);
      uVar20 = CONCAT71(uStack_128._1_7_,(char)uVar18 + (char)(uVar18 / 10) * -10);
      auVar33 = NEON_umull(CONCAT44(uVar18,uVar18),0x10624dd3d1b71759,4);
      uVar32 = NEON_ushl(CONCAT44(auVar33._12_4_,auVar33._4_4_),0xfffffffafffffff3,4);
      auVar34 = NEON_umull(uVar32,0x1999999a1999999a,4);
      uVar31 = NEON_ushl(CONCAT44(uVar18,uVar18),0xfffffffb00000000,4);
      auVar33 = NEON_umull(uVar31,0xa7c5ac5431bde83,4);
      uVar19 = NEON_ushl(CONCAT44(auVar33._12_4_,auVar33._4_4_),0xfffffff9ffffffee,4);
      uVar19 = uVar19 & 0xffff0000ffff;
      auVar33 = NEON_umull(uVar19,0x1999999a1999999a,4);
      uVar19 = CONCAT26((short)((ulong)uVar32 >> 0x20) + auVar34._12_2_ * -10,
                        CONCAT24((short)uVar32 + auVar34._4_2_ * -10,
                                 CONCAT22((short)(uVar19 >> 0x20) + auVar33._12_2_ * -10,
                                          (short)uVar19 + auVar33._4_2_ * -10))) | 0x30003000300030;
      uVar9 = CONCAT24(CONCAT11((char)(uVar18 / 10) +
                                (char)((ulong)(uVar18 / 10) * 0x1999999a >> 0x20) * -10,
                                (char)(uVar18 / 100) +
                                (char)(((ulong)uVar18 / 100) * 0x1999999a >> 0x20) * -10),
                       CONCAT13((char)(uVar19 >> 0x30),
                                CONCAT12((char)(uVar19 >> 0x20),
                                         CONCAT11((char)(uVar19 >> 0x10),(char)uVar19))));
      uStack_158 = 0xa0000000a;
      uStack_160 = 0xa0000000a;
      do {
        uStack_140 = uStack_140 + 1;
        uStack_128 = uVar20 | 0x30;
        qStack_130 = CONCAT71(CONCAT61(uVar9,(char)((uVar18 / 10000000) % 10)),
                              (char)(uVar18 / 100000000) +
                              (char)((uint)((ulong)uVar18 * 0x55e63b89 >> 0x20) / 0x14000000) * -10)
                     | 0x3030000000003030;
        uStack_120 = 9;
        plVar30 = *(long **)(*plStack_148 + 0x18);
        puVar6 = (ulong *)plVar30[3];
        plVar30[2] = plVar30[2] + 9;
        if ((ulong)((long)plVar30 + (0x420 - (long)puVar6)) < 10) {
          plVar11 = plVar30 + 4;
          (*(code *)plVar30[1])(*plVar30,plVar11,(long)puVar6 - (long)plVar11);
          plVar30[3] = (long)plVar11;
          plVar11 = (long *)*plVar30;
          psVar12 = (segment_command *)&qStack_130;
          uVar27 = 9;
          (*(code *)plVar30[1])();
          if (qStack_138 <= uStack_140) break;
        }
        else {
          *(char *)(puVar6 + 1) = (char)uStack_128;
          *puVar6 = qStack_130;
          plVar30[3] = plVar30[3] + 9;
          if (qStack_138 <= uStack_140) break;
        }
        uVar18 = *(uint *)(qStack_118 + uStack_140 * 4);
        uVar20 = CONCAT71(uStack_128._1_7_,(char)uVar18 + (char)(uVar18 / 10) * -10);
        auVar33 = NEON_umull(CONCAT44(uVar18,uVar18),0x10624dd3d1b71759,4);
        uVar32 = NEON_ushl(CONCAT44(auVar33._12_4_,auVar33._4_4_),0xfffffffafffffff3,4);
        uVar31 = NEON_ushl(CONCAT44(uVar18,uVar18),0xfffffffb00000000,4);
        auVar33 = NEON_umull(uVar31,0xa7c5ac5431bde83,4);
        uVar19 = NEON_ushl(CONCAT44(auVar33._12_4_,auVar33._4_4_),0xfffffff9ffffffee,4);
        uVar19 = uVar19 & 0xffff0000ffff;
        auVar34 = NEON_umull(uVar19,0x1999999a1999999a,4);
        auVar33 = NEON_umull(uVar32,0x1999999a1999999a,4);
        uVar19 = CONCAT26((short)((ulong)uVar32 >> 0x20) -
                          auVar33._12_2_ * (short)((ulong)uStack_158 >> 0x20),
                          CONCAT24((short)uVar32 - auVar33._4_2_ * (short)uStack_158,
                                   CONCAT22((short)(uVar19 >> 0x20) -
                                            auVar34._12_2_ * (short)((ulong)uStack_160 >> 0x20),
                                            (short)uVar19 - auVar34._4_2_ * (short)uStack_160))) |
                 0x30003000300030;
        uVar9 = CONCAT24(CONCAT11((char)(uVar18 / 10) +
                                  (char)((ulong)(uVar18 / 10) * 0x1999999a >> 0x20) * -10,
                                  (char)(uVar18 / 100) +
                                  (char)(((ulong)uVar18 / 100) * 0x1999999a >> 0x20) * -10),
                         CONCAT13((char)(uVar19 >> 0x30),
                                  CONCAT12((char)(uVar19 >> 0x20),
                                           CONCAT11((char)(uVar19 >> 0x10),(char)uVar19))));
      } while( true );
    }
  }
  else {
    plVar11 = (long *)plVar30[3];
    plVar30[2] = plVar30[2] + uVar27;
    if (uVar27 < (ulong)((long)plVar30 + (0x420 - (long)plVar11))) {
      psVar12 = (segment_command *)((long)&uStack_128 + -uVar27 + 1);
      param_3 = uVar27;
      _memcpy();
      plVar30[3] = plVar30[3] + uVar27;
      goto LAB_00563a40;
    }
    plVar2 = plVar30 + 4;
    (*(code *)plVar30[1])(*plVar30,plVar2,(long)plVar11 - (long)plVar2);
    plVar30[3] = (long)plVar2;
    plVar11 = (long *)*plVar30;
    psVar12 = (segment_command *)((long)&uStack_128 + -uVar27 + 1);
    (*(code *)plVar30[1])();
    if (uStack_140 < qStack_138) goto LAB_00563a84;
  }
  uVar20 = uStack_168;
  lVar13 = *plStack_148;
  if ((*(long *)(lVar13 + 8) != 0) || ((*(byte *)(*(long *)(lVar13 + 0x10) + 1) >> 3 & 1) != 0)) {
    plVar30 = *(long **)(lVar13 + 0x18);
    psVar26 = (segment_command *)plVar30[3];
    plVar30[2] = plVar30[2] + 1;
    if ((segment_command *)(plVar30 + 0x84) == psVar26) {
      psVar26 = (segment_command *)(plVar30 + 4);
      plVar11 = (long *)*plVar30;
      uVar27 = 0x400;
      psVar12 = psVar26;
      (*(code *)plVar30[1])();
      plVar30[3] = (long)psVar26;
    }
    *(undefined1 *)&psVar26->cmd = 0x2e;
    plVar30[3] = plVar30[3] + 1;
    uVar19 = *(ulong *)(*plStack_148 + 8);
    puVar29 = *(undefined8 **)(*plStack_148 + 0x18);
    if (uVar19 == 0) goto LAB_00563e74;
    plVar11 = (long *)puVar29[3];
    puVar29[2] = puVar29[2] + uVar19;
    plVar30 = puVar29 + 0x84;
    uVar27 = (long)plVar30 - (long)plVar11;
    if (uVar27 <= uVar19 && uVar19 - uVar27 != 0) {
      plVar2 = puVar29 + 4;
      plVar16 = plVar30;
      if (plVar30 != plVar11) {
        _memset(plVar11,0x30,uVar27);
        lVar13 = puVar29[3];
        puVar29[3] = (long *)(lVar13 + uVar27);
        plVar16 = (long *)(lVar13 + uVar27);
      }
      (*(code *)puVar29[1])(*puVar29,plVar2,(long)plVar16 - (long)plVar2);
      puVar29[3] = plVar2;
      for (uVar19 = uVar19 - uVar27; plVar11 = plVar2, 0x400 < uVar19; uVar19 = uVar19 - 0x400) {
        _memset(plVar2,0x30,0x400);
        puVar29[3] = plVar30;
        (*(code *)puVar29[1])(*puVar29,plVar2,0x400);
        puVar29[3] = plVar2;
      }
    }
    psVar12 = (segment_command *)(segment_command_00000020.segname + 8);
    uVar27 = uVar19;
    _memset();
    puVar29[3] = puVar29[3] + uVar19;
    lVar13 = *plStack_148;
  }
  puVar29 = *(undefined8 **)(lVar13 + 0x18);
LAB_00563e74:
  if (uVar20 != 0) {
    plVar11 = (long *)puVar29[3];
    puVar29[2] = puVar29[2] + uVar20;
    plVar30 = puVar29 + 0x84;
    uVar27 = (long)plVar30 - (long)plVar11;
    if (uVar27 <= uVar20 && uVar20 - uVar27 != 0) {
      plVar2 = puVar29 + 4;
      plVar16 = plVar30;
      if (plVar30 != plVar11) {
        _memset(plVar11,0x20,uVar27);
        lVar13 = puVar29[3];
        puVar29[3] = (long *)(lVar13 + uVar27);
        plVar16 = (long *)(lVar13 + uVar27);
      }
      (*(code *)puVar29[1])(*puVar29,plVar2,(long)plVar16 - (long)plVar2);
      puVar29[3] = plVar2;
      for (uVar20 = uVar20 - uVar27; plVar11 = plVar2, 0x400 < uVar20; uVar20 = uVar20 - 0x400) {
        _memset(plVar2,0x20,0x400);
        puVar29[3] = plVar30;
        (*(code *)puVar29[1])(*puVar29,plVar2,0x400);
        puVar29[3] = plVar2;
      }
    }
    psVar12 = &segment_command_00000020;
    uVar27 = uVar20;
    _memset();
    puVar29[3] = puVar29[3] + uVar20;
  }
  if (*(qword *)PTR____stack_chk_guard_00999f88 == qStack_100) {
    return;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_00564020;
  uVar20 = plVar11[2];
  uVar19 = plVar11[3];
  iVar7 = (int)plVar11[4];
  iVar1 = iVar7 + 0x1f;
  if (-1 < iVar7) {
    iVar1 = iVar7;
  }
  uVar18 = (iVar1 >> 5) + 1;
  uVar22 = (ulong)uVar18;
  lStack_198 = (long)(int)uVar18;
  uVar8 = iVar7 % 0x20;
  uVar4 = 0;
  if ((0x20 - uVar8 & 0x40) == 0) {
    uVar4 = (int)(uVar20 << ((ulong)(0x20 - uVar8) & 0x3f));
  }
  *(undefined4 *)((long)psVar12->segname + lStack_198 * 4 + -0xc) = uVar4;
  uVar25 = uVar19 >> ((ulong)uVar8 & 0x3f);
  bVar10 = (uVar8 & 0x40) == 0;
  uVar21 = uVar25;
  if (bVar10) {
    uVar21 = (uVar19 << 1) << ((ulong)~uVar8 & 0x3f) | uVar20 >> ((ulong)uVar8 & 0x3f);
  }
  uVar20 = 0;
  if (bVar10) {
    uVar20 = uVar25;
  }
  if (uVar21 != 0 || uVar20 != 0) {
    puVar23 = (undefined4 *)((long)psVar12->segname + lStack_198 * 4 + -0x10);
    do {
      do {
        puVar24 = puVar23 + -1;
        *puVar23 = (int)uVar21;
        uVar21 = uVar21 >> 0x20 | uVar20 << 0x20;
        uVar20 = uVar20 >> 0x20;
        puVar23 = puVar24;
      } while (uVar20 != 0);
    } while (uVar21 != 0);
  }
  if (uVar18 != 0) {
    uVar22 = 0;
    lVar13 = (long)(iVar1 >> 5);
    do {
      uVar22 = uVar22 + (ulong)*(uint *)((long)psVar12->segname + lVar13 * 4 + -8) * 10;
      *(int *)((long)psVar12->segname + lVar13 * 4 + -8) = (int)uVar22;
      uVar22 = uVar22 >> 0x20;
      lVar13 = lVar13 + -1;
    } while (lVar13 != -1);
    if (*(int *)((long)psVar12->segname + lStack_198 * 4 + -0xc) == 0) {
      lStack_198 = lStack_198 + -1;
    }
  }
  auStack_1a0[0] = (undefined1)uVar22;
  psStack_190 = psVar12;
  uStack_188 = uVar27;
  ppuStack_180 = &puStack_60;
  (*(code *)plVar11[1])(*plVar11,auStack_1a0);
  return;
}



/* Entry: 005637ac; end: 0056401f;  */

void FUN_005637ac(long *param_1,segment_command *param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  ulong *puVar4;
  int iVar5;
  uint uVar6;
  undefined6 uVar7;
  bool bVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar18;
  ulong uVar19;
  segment_command *psVar20;
  ulong uVar21;
  char cVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_150 [8];
  long lStack_148;
  segment_command *psStack_140;
  ulong uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_f8;
  ulong uStack_f0;
  qword qStack_e8;
  qword qStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  qword qStack_c8;
  qword qStack_c0;
  qword qStack_b0;
  undefined4 *puVar17;
  
  qStack_b0 = *(qword *)PTR____stack_chk_guard_00999f88;
  qStack_e0 = *(qword *)((long)param_2->segname + 8);
  uStack_d8 = param_2->vmaddr;
  uVar21 = param_2->vmsize;
  qStack_c8 = param_2->fileoff;
  qStack_c0 = param_2->filesize;
  uStack_f0 = *(ulong *)param_2;
  qStack_e8 = *(qword *)param_2->segname;
  uVar24 = (qStack_e8 - uStack_f0) * 9 + uVar21;
  pcVar10 = (char *)*param_1;
  lVar11 = *(long *)(pcVar10 + 0x10);
  plStack_f8 = param_1;
  uStack_d0 = uVar21;
  if ((*(long *)(pcVar10 + 8) == 0) && ((*(byte *)(lVar11 + 1) >> 3 & 1) == 0)) {
    cVar22 = *pcVar10;
    if (cVar22 != '\0') {
      uVar24 = uVar24 + 1;
    }
    uVar9 = *(uint *)(lVar11 + 4);
    if ((int)uVar9 < 0) goto LAB_005638c8;
LAB_0056386c:
    uVar19 = uVar9 - uVar24;
    if (uVar9 < uVar24 || uVar19 == 0) goto LAB_005638c8;
    uStack_118 = uVar19;
    if ((*(byte *)(lVar11 + 1) & 1) != 0) goto LAB_005638cc;
    if ((*(byte *)(lVar11 + 1) >> 4 & 1) == 0) {
      puVar23 = *(undefined8 **)(pcVar10 + 0x18);
      param_1 = (long *)puVar23[3];
      puVar23[2] = puVar23[2] + uVar19;
      plVar25 = puVar23 + 0x84;
      uVar15 = (long)plVar25 - (long)param_1;
      uVar24 = uVar19 - uVar15;
      uVar14 = uVar19;
      if (uVar15 <= uVar19 && uVar24 != 0) {
        plVar1 = puVar23 + 4;
        plVar13 = plVar25;
        if (plVar25 != param_1) {
          _memset(param_1,0x20,uVar15);
          lVar11 = puVar23[3];
          puVar23[3] = (long *)(lVar11 + uVar15);
          plVar13 = (long *)(lVar11 + uVar15);
        }
        (*(code *)puVar23[1])(*puVar23,plVar1,(long)plVar13 - (long)plVar1);
        puVar23[3] = plVar1;
        for (; uVar14 = uVar24, param_1 = plVar1, 0x400 < uVar24; uVar24 = uVar24 - 0x400) {
          _memset(plVar1,0x20,0x400);
          puVar23[3] = plVar25;
          (*(code *)puVar23[1])(*puVar23,plVar1,0x400);
          puVar23[3] = plVar1;
        }
      }
      param_2 = &segment_command_00000020;
      param_3 = uVar14;
      _memset();
      uStack_118 = 0;
      uVar19 = 0;
      puVar23[3] = puVar23[3] + uVar14;
      pcVar10 = (char *)*plStack_f8;
      cVar22 = *pcVar10;
    }
    else {
      uStack_118 = 0;
    }
  }
  else {
    uVar24 = uVar24 + *(long *)(pcVar10 + 8) + 1;
    cVar22 = *pcVar10;
    if (cVar22 != '\0') {
      uVar24 = uVar24 + 1;
    }
    uVar9 = *(uint *)(lVar11 + 4);
    if (-1 < (int)uVar9) goto LAB_0056386c;
LAB_005638c8:
    uStack_118 = 0;
LAB_005638cc:
    uVar19 = 0;
  }
  if (cVar22 != '\0') {
    puVar23 = *(undefined8 **)(pcVar10 + 0x18);
    psVar20 = (segment_command *)puVar23[3];
    puVar23[2] = puVar23[2] + 1;
    if ((segment_command *)(puVar23 + 0x84) == psVar20) {
      psVar20 = (segment_command *)(puVar23 + 4);
      param_1 = (long *)*puVar23;
      param_3 = 0x400;
      param_2 = psVar20;
      (*(code *)puVar23[1])();
      puVar23[3] = psVar20;
    }
    *(char *)&psVar20->cmd = cVar22;
    puVar23[3] = puVar23[3] + 1;
    pcVar10 = (char *)*plStack_f8;
  }
  plVar25 = *(long **)(pcVar10 + 0x18);
  if (uVar19 != 0) {
    param_1 = (long *)plVar25[3];
    plVar25[2] = plVar25[2] + uVar19;
    plVar1 = plVar25 + 0x84;
    uVar24 = (long)plVar1 - (long)param_1;
    if (uVar24 <= uVar19 && uVar19 - uVar24 != 0) {
      plVar13 = plVar25 + 4;
      plVar12 = plVar1;
      if (plVar1 != param_1) {
        _memset(param_1,0x30,uVar24);
        lVar11 = plVar25[3];
        plVar25[3] = (long)(lVar11 + uVar24);
        plVar12 = (long *)(lVar11 + uVar24);
      }
      (*(code *)plVar25[1])(*plVar25,plVar13,(long)plVar12 - (long)plVar13);
      plVar25[3] = (long)plVar13;
      for (uVar19 = uVar19 - uVar24; param_1 = plVar13, 0x400 < uVar19; uVar19 = uVar19 - 0x400) {
        _memset(plVar13,0x30,0x400);
        plVar25[3] = (long)plVar1;
        (*(code *)plVar25[1])(*plVar25,plVar13,0x400);
        plVar25[3] = (long)plVar13;
      }
    }
    param_2 = (segment_command *)(segment_command_00000020.segname + 8);
    param_3 = uVar19;
    _memset();
    plVar25[3] = plVar25[3] + uVar19;
    plVar25 = *(long **)(*plStack_f8 + 0x18);
  }
  if (uVar21 == 0) {
LAB_00563a40:
    uVar21 = param_3;
    if (uStack_f0 < qStack_e8) {
LAB_00563a84:
      uVar9 = *(uint *)(qStack_c8 + uStack_f0 * 4);
      uVar24 = CONCAT71(uStack_d8._1_7_,(char)uVar9 + (char)(uVar9 / 10) * -10);
      auVar28 = NEON_umull(CONCAT44(uVar9,uVar9),0x10624dd3d1b71759,4);
      uVar27 = NEON_ushl(CONCAT44(auVar28._12_4_,auVar28._4_4_),0xfffffffafffffff3,4);
      auVar29 = NEON_umull(uVar27,0x1999999a1999999a,4);
      uVar26 = NEON_ushl(CONCAT44(uVar9,uVar9),0xfffffffb00000000,4);
      auVar28 = NEON_umull(uVar26,0xa7c5ac5431bde83,4);
      uVar19 = NEON_ushl(CONCAT44(auVar28._12_4_,auVar28._4_4_),0xfffffff9ffffffee,4);
      uVar19 = uVar19 & 0xffff0000ffff;
      auVar28 = NEON_umull(uVar19,0x1999999a1999999a,4);
      uVar19 = CONCAT26((short)((ulong)uVar27 >> 0x20) + auVar29._12_2_ * -10,
                        CONCAT24((short)uVar27 + auVar29._4_2_ * -10,
                                 CONCAT22((short)(uVar19 >> 0x20) + auVar28._12_2_ * -10,
                                          (short)uVar19 + auVar28._4_2_ * -10))) | 0x30003000300030;
      uVar7 = CONCAT24(CONCAT11((char)(uVar9 / 10) +
                                (char)((ulong)(uVar9 / 10) * 0x1999999a >> 0x20) * -10,
                                (char)(uVar9 / 100) +
                                (char)(((ulong)uVar9 / 100) * 0x1999999a >> 0x20) * -10),
                       CONCAT13((char)(uVar19 >> 0x30),
                                CONCAT12((char)(uVar19 >> 0x20),
                                         CONCAT11((char)(uVar19 >> 0x10),(char)uVar19))));
      uStack_108 = 0xa0000000a;
      uStack_110 = 0xa0000000a;
      do {
        uStack_f0 = uStack_f0 + 1;
        uStack_d8 = uVar24 | 0x30;
        qStack_e0 = CONCAT71(CONCAT61(uVar7,(char)((uVar9 / 10000000) % 10)),
                             (char)(uVar9 / 100000000) +
                             (char)((uint)((ulong)uVar9 * 0x55e63b89 >> 0x20) / 0x14000000) * -10) |
                    0x3030000000003030;
        uStack_d0 = 9;
        plVar25 = *(long **)(*plStack_f8 + 0x18);
        puVar4 = (ulong *)plVar25[3];
        plVar25[2] = plVar25[2] + 9;
        if ((ulong)((long)plVar25 + (0x420 - (long)puVar4)) < 10) {
          plVar1 = plVar25 + 4;
          (*(code *)plVar25[1])(*plVar25,plVar1,(long)puVar4 - (long)plVar1);
          plVar25[3] = (long)plVar1;
          param_1 = (long *)*plVar25;
          param_2 = (segment_command *)&qStack_e0;
          uVar21 = 9;
          (*(code *)plVar25[1])();
          if (qStack_e8 <= uStack_f0) break;
        }
        else {
          *(char *)(puVar4 + 1) = (char)uStack_d8;
          *puVar4 = qStack_e0;
          plVar25[3] = plVar25[3] + 9;
          if (qStack_e8 <= uStack_f0) break;
        }
        uVar9 = *(uint *)(qStack_c8 + uStack_f0 * 4);
        uVar24 = CONCAT71(uStack_d8._1_7_,(char)uVar9 + (char)(uVar9 / 10) * -10);
        auVar28 = NEON_umull(CONCAT44(uVar9,uVar9),0x10624dd3d1b71759,4);
        uVar27 = NEON_ushl(CONCAT44(auVar28._12_4_,auVar28._4_4_),0xfffffffafffffff3,4);
        uVar26 = NEON_ushl(CONCAT44(uVar9,uVar9),0xfffffffb00000000,4);
        auVar28 = NEON_umull(uVar26,0xa7c5ac5431bde83,4);
        uVar19 = NEON_ushl(CONCAT44(auVar28._12_4_,auVar28._4_4_),0xfffffff9ffffffee,4);
        uVar19 = uVar19 & 0xffff0000ffff;
        auVar29 = NEON_umull(uVar19,0x1999999a1999999a,4);
        auVar28 = NEON_umull(uVar27,0x1999999a1999999a,4);
        uVar19 = CONCAT26((short)((ulong)uVar27 >> 0x20) -
                          auVar28._12_2_ * (short)((ulong)uStack_108 >> 0x20),
                          CONCAT24((short)uVar27 - auVar28._4_2_ * (short)uStack_108,
                                   CONCAT22((short)(uVar19 >> 0x20) -
                                            auVar29._12_2_ * (short)((ulong)uStack_110 >> 0x20),
                                            (short)uVar19 - auVar29._4_2_ * (short)uStack_110))) |
                 0x30003000300030;
        uVar7 = CONCAT24(CONCAT11((char)(uVar9 / 10) +
                                  (char)((ulong)(uVar9 / 10) * 0x1999999a >> 0x20) * -10,
                                  (char)(uVar9 / 100) +
                                  (char)(((ulong)uVar9 / 100) * 0x1999999a >> 0x20) * -10),
                         CONCAT13((char)(uVar19 >> 0x30),
                                  CONCAT12((char)(uVar19 >> 0x20),
                                           CONCAT11((char)(uVar19 >> 0x10),(char)uVar19))));
      } while( true );
    }
  }
  else {
    param_1 = (long *)plVar25[3];
    plVar25[2] = plVar25[2] + uVar21;
    if (uVar21 < (ulong)((long)plVar25 + (0x420 - (long)param_1))) {
      param_2 = (segment_command *)((long)&uStack_d8 + -uVar21 + 1);
      param_3 = uVar21;
      _memcpy();
      plVar25[3] = plVar25[3] + uVar21;
      goto LAB_00563a40;
    }
    plVar1 = plVar25 + 4;
    (*(code *)plVar25[1])(*plVar25,plVar1,(long)param_1 - (long)plVar1);
    plVar25[3] = (long)plVar1;
    param_1 = (long *)*plVar25;
    param_2 = (segment_command *)((long)&uStack_d8 + -uVar21 + 1);
    (*(code *)plVar25[1])();
    if (uStack_f0 < qStack_e8) goto LAB_00563a84;
  }
  uVar24 = uStack_118;
  lVar11 = *plStack_f8;
  if ((*(long *)(lVar11 + 8) != 0) || ((*(byte *)(*(long *)(lVar11 + 0x10) + 1) >> 3 & 1) != 0)) {
    plVar25 = *(long **)(lVar11 + 0x18);
    psVar20 = (segment_command *)plVar25[3];
    plVar25[2] = plVar25[2] + 1;
    if ((segment_command *)(plVar25 + 0x84) == psVar20) {
      psVar20 = (segment_command *)(plVar25 + 4);
      param_1 = (long *)*plVar25;
      uVar21 = 0x400;
      param_2 = psVar20;
      (*(code *)plVar25[1])();
      plVar25[3] = (long)psVar20;
    }
    *(undefined1 *)&psVar20->cmd = 0x2e;
    plVar25[3] = plVar25[3] + 1;
    uVar19 = *(ulong *)(*plStack_f8 + 8);
    puVar23 = *(undefined8 **)(*plStack_f8 + 0x18);
    if (uVar19 == 0) goto LAB_00563e74;
    param_1 = (long *)puVar23[3];
    puVar23[2] = puVar23[2] + uVar19;
    plVar25 = puVar23 + 0x84;
    uVar21 = (long)plVar25 - (long)param_1;
    if (uVar21 <= uVar19 && uVar19 - uVar21 != 0) {
      plVar1 = puVar23 + 4;
      plVar13 = plVar25;
      if (plVar25 != param_1) {
        _memset(param_1,0x30,uVar21);
        lVar11 = puVar23[3];
        puVar23[3] = (long *)(lVar11 + uVar21);
        plVar13 = (long *)(lVar11 + uVar21);
      }
      (*(code *)puVar23[1])(*puVar23,plVar1,(long)plVar13 - (long)plVar1);
      puVar23[3] = plVar1;
      for (uVar19 = uVar19 - uVar21; param_1 = plVar1, 0x400 < uVar19; uVar19 = uVar19 - 0x400) {
        _memset(plVar1,0x30,0x400);
        puVar23[3] = plVar25;
        (*(code *)puVar23[1])(*puVar23,plVar1,0x400);
        puVar23[3] = plVar1;
      }
    }
    param_2 = (segment_command *)(segment_command_00000020.segname + 8);
    uVar21 = uVar19;
    _memset();
    puVar23[3] = puVar23[3] + uVar19;
    lVar11 = *plStack_f8;
  }
  puVar23 = *(undefined8 **)(lVar11 + 0x18);
LAB_00563e74:
  if (uVar24 != 0) {
    param_1 = (long *)puVar23[3];
    puVar23[2] = puVar23[2] + uVar24;
    plVar25 = puVar23 + 0x84;
    uVar21 = (long)plVar25 - (long)param_1;
    if (uVar21 <= uVar24 && uVar24 - uVar21 != 0) {
      plVar1 = puVar23 + 4;
      plVar13 = plVar25;
      if (plVar25 != param_1) {
        _memset(param_1,0x20,uVar21);
        lVar11 = puVar23[3];
        puVar23[3] = (long *)(lVar11 + uVar21);
        plVar13 = (long *)(lVar11 + uVar21);
      }
      (*(code *)puVar23[1])(*puVar23,plVar1,(long)plVar13 - (long)plVar1);
      puVar23[3] = plVar1;
      for (uVar24 = uVar24 - uVar21; param_1 = plVar1, 0x400 < uVar24; uVar24 = uVar24 - 0x400) {
        _memset(plVar1,0x20,0x400);
        puVar23[3] = plVar25;
        (*(code *)puVar23[1])(*puVar23,plVar1,0x400);
        puVar23[3] = plVar1;
      }
    }
    param_2 = &segment_command_00000020;
    uVar21 = uVar24;
    _memset();
    puVar23[3] = puVar23[3] + uVar24;
  }
  if (*(qword *)PTR____stack_chk_guard_00999f88 == qStack_b0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_00564020;
  uVar24 = param_1[2];
  uVar19 = param_1[3];
  iVar5 = (int)param_1[4];
  iVar2 = iVar5 + 0x1f;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  uVar9 = (iVar2 >> 5) + 1;
  uVar14 = (ulong)uVar9;
  lStack_148 = (long)(int)uVar9;
  uVar6 = iVar5 % 0x20;
  uVar3 = 0;
  if ((0x20 - uVar6 & 0x40) == 0) {
    uVar3 = (int)(uVar24 << ((ulong)(0x20 - uVar6) & 0x3f));
  }
  *(undefined4 *)((long)param_2->segname + lStack_148 * 4 + -0xc) = uVar3;
  uVar18 = uVar19 >> ((ulong)uVar6 & 0x3f);
  bVar8 = (uVar6 & 0x40) == 0;
  uVar15 = uVar18;
  if (bVar8) {
    uVar15 = (uVar19 << 1) << ((ulong)~uVar6 & 0x3f) | uVar24 >> ((ulong)uVar6 & 0x3f);
  }
  uVar24 = 0;
  if (bVar8) {
    uVar24 = uVar18;
  }
  if (uVar15 != 0 || uVar24 != 0) {
    puVar16 = (undefined4 *)((long)param_2->segname + lStack_148 * 4 + -0x10);
    do {
      do {
        puVar17 = puVar16 + -1;
        *puVar16 = (int)uVar15;
        uVar15 = uVar15 >> 0x20 | uVar24 << 0x20;
        uVar24 = uVar24 >> 0x20;
        puVar16 = puVar17;
      } while (uVar24 != 0);
    } while (uVar15 != 0);
  }
  if (uVar9 != 0) {
    uVar14 = 0;
    lVar11 = (long)(iVar2 >> 5);
    do {
      uVar14 = uVar14 + (ulong)*(uint *)((long)param_2->segname + lVar11 * 4 + -8) * 10;
      *(int *)((long)param_2->segname + lVar11 * 4 + -8) = (int)uVar14;
      uVar14 = uVar14 >> 0x20;
      lVar11 = lVar11 + -1;
    } while (lVar11 != -1);
    if (*(int *)((long)param_2->segname + lStack_148 * 4 + -0xc) == 0) {
      lStack_148 = lStack_148 + -1;
    }
  }
  auStack_150[0] = (undefined1)uVar14;
  psStack_140 = param_2;
  uStack_138 = uVar21;
  puStack_130 = &stack0xfffffffffffffff0;
  (*(code *)param_1[1])(*param_1,auStack_150);
  return;
}



/* Entry: 00564020; end: 00564113;  */

void FUN_00564020(undefined8 *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar15;
  undefined1 auStack_30 [8];
  long lStack_28;
  long lStack_20;
  undefined8 uStack_18;
  undefined4 *puVar14;
  
  uVar12 = param_1[2];
  uVar4 = param_1[3];
  iVar5 = *(int *)(param_1 + 4);
  iVar2 = iVar5 + 0x1f;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  uVar1 = (iVar2 >> 5) + 1;
  uVar10 = (ulong)uVar1;
  lStack_28 = (long)(int)uVar1;
  uVar6 = iVar5 % 0x20;
  uVar3 = 0;
  if ((0x20 - uVar6 & 0x40) == 0) {
    uVar3 = (int)(uVar12 << ((ulong)(0x20 - uVar6) & 0x3f));
  }
  lVar8 = lStack_28 + -1;
  *(undefined4 *)(param_2 + lVar8 * 4) = uVar3;
  uVar15 = uVar4 >> ((ulong)uVar6 & 0x3f);
  bVar7 = (uVar6 & 0x40) == 0;
  uVar11 = uVar15;
  if (bVar7) {
    uVar11 = (uVar4 << 1) << ((ulong)~uVar6 & 0x3f) | uVar12 >> ((ulong)uVar6 & 0x3f);
  }
  uVar12 = 0;
  if (bVar7) {
    uVar12 = uVar15;
  }
  if (uVar11 != 0 || uVar12 != 0) {
    puVar13 = (undefined4 *)(param_2 + lVar8 * 4 + -4);
    do {
      do {
        puVar14 = puVar13 + -1;
        *puVar13 = (int)uVar11;
        uVar11 = uVar11 >> 0x20 | uVar12 << 0x20;
        uVar12 = uVar12 >> 0x20;
        puVar13 = puVar14;
      } while (uVar12 != 0);
    } while (uVar11 != 0);
  }
  if (uVar1 != 0) {
    uVar10 = 0;
    lVar9 = (long)(iVar2 >> 5);
    do {
      uVar10 = uVar10 + (ulong)*(uint *)(param_2 + lVar9 * 4) * 10;
      *(int *)(param_2 + lVar9 * 4) = (int)uVar10;
      uVar10 = uVar10 >> 0x20;
      lVar9 = lVar9 + -1;
    } while (lVar9 != -1);
    if (*(int *)(param_2 + lVar8 * 4) == 0) {
      lStack_28 = lVar8;
    }
  }
  auStack_30[0] = (undefined1)uVar10;
  lStack_20 = param_2;
  uStack_18 = param_3;
  (*(code *)param_1[1])(*param_1,auStack_30);
  return;
}



/* Entry: 00564114; end: 005645ab;  */

void FUN_00564114(long *param_1,byte *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  char *pcVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  int iVar21;
  
  if ((*(long *)(*param_1 + 8) != 0) && (uVar5 = *(ulong *)param_1[1], uVar5 != 0)) {
    uVar18 = (ulong)*param_2;
    lVar11 = *(long *)(param_2 + 8);
    lVar1 = *(long *)(param_2 + 0x10);
    lVar20 = lVar1 + -4;
    do {
      uVar17 = (uint)uVar18;
      cVar2 = (char)uVar18;
      if (uVar17 == 0) {
        if (lVar11 == 0) {
          return;
        }
LAB_005641c0:
        uVar18 = 0;
        lVar6 = lVar11;
        do {
          uVar18 = uVar18 + (ulong)*(uint *)(lVar20 + lVar6 * 4) * 10;
          *(int *)(lVar20 + lVar6 * 4) = (int)uVar18;
          uVar18 = uVar18 >> 0x20;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        lVar6 = lVar11 + -1;
        if (*(int *)(lVar1 + (lVar11 + -1) * 4) != 0) {
          lVar6 = lVar11;
        }
        lVar11 = lVar6;
        if (uVar18 != 9) goto joined_r0x00564294;
        lVar9 = lVar6;
        uVar15 = 0;
        do {
          uVar12 = uVar15;
          uVar15 = uVar12 + 1;
          if (lVar9 == 0) {
            uVar18 = 0;
            lVar11 = lVar6;
            break;
          }
          uVar18 = 0;
          lVar11 = lVar9;
          do {
            uVar18 = uVar18 + (ulong)*(uint *)(lVar20 + lVar11 * 4) * 10;
            *(int *)(lVar20 + lVar11 * 4) = (int)uVar18;
            uVar18 = uVar18 >> 0x20;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          lVar11 = lVar9 + -1;
          lVar3 = lVar11;
          if (*(int *)(lVar1 + lVar11 * 4) != 0) {
            lVar11 = lVar9;
            lVar3 = lVar6;
          }
          lVar6 = lVar3;
          lVar9 = lVar11;
          lVar11 = lVar6;
        } while (uVar18 == 9);
        lVar6 = lVar9;
        iVar21 = (int)uVar18;
        uVar12 = uVar12 + 2;
        bVar4 = uVar12 == uVar5;
        if (uVar5 <= uVar12) goto LAB_005643c0;
      }
      else {
        if (lVar11 != 0) goto LAB_005641c0;
        lVar6 = 0;
        uVar18 = 0;
joined_r0x00564294:
        iVar21 = (int)uVar18;
        bVar4 = uVar5 == 1;
        uVar12 = 1;
        uVar15 = 0;
        if (uVar5 < 2) {
LAB_005643c0:
          if (((bVar4) && ((byte)iVar21 < 6)) &&
             ((iVar21 != 5 || (((lVar6 == 0 && ((uVar17 & 0x81) != 1)) && (uVar15 == 0)))))) {
            puVar13 = *(undefined8 **)(*param_1 + 0x18);
            pcVar16 = (char *)puVar13[3];
            puVar13[2] = puVar13[2] + 1;
            if ((char *)(puVar13 + 0x84) == pcVar16) {
              pcVar16 = (char *)(puVar13 + 4);
              (*(code *)puVar13[1])(*puVar13,pcVar16,0x400);
              puVar13[3] = pcVar16;
            }
            *pcVar16 = cVar2 + '0';
            puVar13[3] = puVar13[3] + 1;
            plVar10 = (long *)param_1[1];
            uVar5 = *plVar10 - 1;
            if (uVar5 != 0) {
              puVar14 = *(undefined8 **)(*param_1 + 0x18);
              puVar19 = (undefined8 *)puVar14[3];
              puVar14[2] = puVar14[2] + uVar5;
              puVar13 = puVar14 + 0x84;
              uVar18 = (long)puVar13 - (long)puVar19;
              if (uVar18 <= uVar5 && uVar5 - uVar18 != 0) {
                puVar7 = puVar14 + 4;
                puVar8 = puVar13;
                if (puVar13 != puVar19) {
                  _memset(puVar19,0x39,uVar18);
                  lVar11 = puVar14[3];
                  puVar14[3] = (undefined8 *)(lVar11 + uVar18);
                  puVar8 = (undefined8 *)(lVar11 + uVar18);
                }
                (*(code *)puVar14[1])(*puVar14,puVar7,(long)puVar8 - (long)puVar7);
                puVar14[3] = puVar7;
                for (uVar5 = uVar5 - uVar18; puVar19 = puVar7, 0x400 < uVar5; uVar5 = uVar5 - 0x400)
                {
                  _memset(puVar7,0x39,0x400);
                  puVar14[3] = puVar13;
                  (*(code *)puVar14[1])(*puVar14,puVar7,0x400);
                  puVar14[3] = puVar7;
                }
              }
              _memset(puVar19,0x39,uVar5);
              puVar14[3] = puVar14[3] + uVar5;
              plVar10 = (long *)param_1[1];
            }
            *plVar10 = 0;
            return;
          }
          puVar13 = *(undefined8 **)(*param_1 + 0x18);
          pcVar16 = (char *)puVar13[3];
          puVar13[2] = puVar13[2] + 1;
          if ((char *)(puVar13 + 0x84) == pcVar16) {
            pcVar16 = (char *)(puVar13 + 4);
            (*(code *)puVar13[1])(*puVar13,pcVar16,0x400);
            puVar13[3] = pcVar16;
          }
          *pcVar16 = cVar2 + '1';
          puVar13[3] = puVar13[3] + 1;
          *(long *)param_1[1] = *(long *)param_1[1] + -1;
          return;
        }
      }
      puVar13 = *(undefined8 **)(*param_1 + 0x18);
      puVar13[2] = puVar13[2] + 1;
      if ((char *)(puVar13 + 0x84) == (char *)puVar13[3]) {
        pcVar16 = (char *)(puVar13 + 4);
        (*(code *)puVar13[1])(*puVar13,pcVar16,0x400);
        puVar13[3] = pcVar16;
        *pcVar16 = cVar2 + '0';
        puVar13[3] = puVar13[3] + 1;
      }
      else {
        *(char *)puVar13[3] = cVar2 + '0';
        puVar13[3] = puVar13[3] + 1;
      }
      if (uVar15 != 0) {
        puVar14 = *(undefined8 **)(*param_1 + 0x18);
        puVar19 = (undefined8 *)puVar14[3];
        puVar14[2] = puVar14[2] + uVar15;
        puVar13 = puVar14 + 0x84;
        uVar5 = (long)puVar13 - (long)puVar19;
        if (uVar5 <= uVar15 && uVar15 - uVar5 != 0) {
          puVar7 = puVar13;
          if (puVar13 != puVar19) {
            _memset(puVar19,0x39,uVar5);
            lVar6 = puVar14[3];
            puVar14[3] = (undefined8 *)(lVar6 + uVar5);
            puVar7 = (undefined8 *)(lVar6 + uVar5);
          }
          puVar19 = puVar14 + 4;
          (*(code *)puVar14[1])(*puVar14,puVar19,(long)puVar7 - (long)puVar19);
          puVar14[3] = puVar19;
          for (uVar15 = uVar15 - uVar5; 0x400 < uVar15; uVar15 = uVar15 - 0x400) {
            _memset(puVar19,0x39,0x400);
            puVar14[3] = puVar13;
            (*(code *)puVar14[1])(*puVar14,puVar19,0x400);
            puVar14[3] = puVar19;
          }
        }
        _memset(puVar19,0x39,uVar15);
        puVar14[3] = puVar14[3] + uVar15;
      }
      uVar5 = *(ulong *)param_1[1] - uVar12;
      *(ulong *)param_1[1] = uVar5;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 005645ac; end: 005646ff;  */

byte * FUN_005645ac(ulong param_1,long param_2,byte *param_3,int param_4,long param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  bool bVar6;
  byte *pbVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar1 = 0x80 - param_4;
  uVar11 = param_1 << ((ulong)uVar1 & 0x3f);
  bVar6 = (uVar1 & 0x40) == 0;
  uVar8 = uVar11;
  if (bVar6) {
    uVar8 = param_2 << ((ulong)uVar1 & 0x3f) | (param_1 >> 1) >> ((ulong)~uVar1 & 0x3f);
  }
  uVar5 = 0;
  if (bVar6) {
    uVar5 = uVar11;
  }
  for (; (param_5 != 0 && (uVar5 != 0)); uVar5 = uVar5 * 10) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5;
    uVar10 = SUB168(auVar2 * ZEXT816(10),8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar8;
    uVar11 = uVar8 * 10;
    uVar8 = uVar10 + uVar11;
    *param_3 = SUB161(auVar3 * ZEXT816(10),8) + '0' + CARRY8(uVar10,uVar11);
    param_5 = param_5 + -1;
    param_3 = param_3 + 1;
  }
  if (param_5 == 0) {
    if (-1 < (long)uVar8) {
      return param_3;
    }
  }
  else {
    do {
      if (uVar8 == 0) {
        return param_3;
      }
      uVar11 = uVar8 * 5;
      uVar10 = uVar8 * 10;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      pbVar7 = param_3 + 1;
      *param_3 = SUB161(auVar4 * ZEXT816(10),8) | 0x30;
      param_5 = param_5 + -1;
      param_3 = pbVar7;
      uVar8 = uVar10;
    } while (param_5 != 0);
    if ((uVar11 & 0x7fffffffffffffff) >> 0x3e == 0) {
      return pbVar7;
    }
  }
  pbVar7 = param_3;
  if (uVar8 == 0x8000000000000000 && uVar5 == 0) {
    pbVar7 = param_3 + -1 + -(ulong)(param_3[-1] == 0x2e);
    bVar9 = *pbVar7;
    if ((bVar9 & 0x81) != 1) {
      return param_3;
    }
    do {
      if (bVar9 != 0x2e) {
        if (bVar9 != 0x39) goto LAB_005646f0;
        *pbVar7 = 0x30;
      }
      pbVar7 = pbVar7 + -1;
      bVar9 = *pbVar7;
    } while( true );
  }
  while( true ) {
    do {
      pbVar7 = pbVar7 + -1;
      bVar9 = *pbVar7;
    } while (bVar9 == 0x2e);
    if (bVar9 != 0x39) break;
    *pbVar7 = 0x30;
  }
LAB_005646f0:
  *pbVar7 = bVar9 + 1;
  return param_3;
}



/* Entry: 00564700; end: 00564eef;  */

byte * FUN_00564700(byte *param_1,ulong param_2,qword *param_3,qword *param_4,byte *param_5,
                   undefined8 param_6,ulong param_7)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  uint uVar14;
  ulong uVar15;
  qword *pqVar16;
  qword *pqVar17;
  qword *pqVar18;
  long lVar19;
  byte *pbVar20;
  byte *pbVar21;
  char *pcVar22;
  byte *pbVar23;
  char *pcVar24;
  ulong uVar25;
  undefined1 *puVar26;
  char *pcVar27;
  int iVar28;
  ulong uVar29;
  byte *pbVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  char *pcVar34;
  byte *pbVar35;
  undefined8 *puVar36;
  byte *pbVar37;
  qword *pqVar38;
  qword *pqVar39;
  qword *pqStack_70;
  
  uVar14 = *(uint *)(*(long *)(param_1 + 0x10) + 4);
  bVar3 = *param_1;
  if ((int)uVar14 < 0) {
    pbVar21 = param_1;
    if (bVar3 != 0) {
      puVar36 = *(undefined8 **)(param_1 + 0x18);
      pbVar23 = (byte *)puVar36[3];
      puVar36[2] = puVar36[2] + 1;
      if ((byte *)(puVar36 + 0x84) == pbVar23) {
        pbVar23 = (byte *)(puVar36 + 4);
        pbVar21 = (byte *)*puVar36;
        (*(code *)puVar36[1])(pbVar21,pbVar23,0x400);
        puVar36[3] = pbVar23;
      }
      *pbVar23 = bVar3;
      puVar36[3] = puVar36[3] + 1;
    }
    if (param_3 != (qword *)0x0) {
      puVar36 = *(undefined8 **)(param_1 + 0x18);
      pbVar21 = (byte *)puVar36[3];
      puVar36[2] = (byte *)((long)param_3 + puVar36[2]);
      if ((byte *)((long)puVar36 + (0x420 - (long)pbVar21)) <= param_3) {
        puVar1 = puVar36 + 4;
        (*(code *)puVar36[1])(*puVar36,puVar1,(long)pbVar21 - (long)puVar1);
        puVar36[3] = puVar1;
        pbVar21 = (byte *)*puVar36;
        (*(code *)puVar36[1])(pbVar21,param_2,param_3);
        puVar36 = *(undefined8 **)(param_1 + 0x18);
        goto joined_r0x00564858;
      }
      _memcpy(pbVar21,param_2,param_3);
      puVar36[3] = (byte *)((long)param_3 + puVar36[3]);
    }
    puVar36 = *(undefined8 **)(param_1 + 0x18);
joined_r0x00564858:
    if (param_5 != (byte *)0x0) {
      pbVar21 = (byte *)puVar36[3];
      puVar36[2] = param_5 + puVar36[2];
      pbVar23 = (byte *)(puVar36 + 0x84);
      pbVar37 = pbVar23 + -(long)pbVar21;
      if (pbVar37 <= param_5 && param_5 + -(long)pbVar37 != (byte *)0x0) {
        pbVar35 = (byte *)(puVar36 + 4);
        pbVar30 = pbVar23;
        if (pbVar23 != pbVar21) {
          _memset(pbVar21,0x30,pbVar37);
          lVar19 = puVar36[3];
          puVar36[3] = pbVar37 + lVar19;
          pbVar30 = pbVar37 + lVar19;
        }
        (*(code *)puVar36[1])(*puVar36,pbVar35,(long)pbVar30 - (long)pbVar35);
        puVar36[3] = pbVar35;
        for (param_5 = param_5 + -(long)pbVar37; pbVar21 = pbVar35, &section_000003d8.size < param_5
            ; param_5 = param_5 + -0x400) {
          _memset(pbVar35,0x30,0x400);
          puVar36[3] = pbVar23;
          (*(code *)puVar36[1])(*puVar36,pbVar35,0x400);
          puVar36[3] = pbVar35;
        }
      }
      _memset(pbVar21,0x30,param_5);
      puVar36[3] = param_5 + puVar36[3];
      puVar36 = *(undefined8 **)(param_1 + 0x18);
    }
    if (param_7 == 0) {
      return pbVar21;
    }
    pbVar21 = (byte *)puVar36[3];
    puVar36[2] = puVar36[2] + param_7;
    if (param_7 < (ulong)((long)puVar36 + (0x420 - (long)pbVar21))) {
      _memcpy(pbVar21,param_6,param_7);
      puVar36[3] = puVar36[3] + param_7;
      return pbVar21;
    }
    puVar1 = puVar36 + 4;
    (*(code *)puVar36[1])(*puVar36,puVar1,(long)pbVar21 - (long)puVar1);
    puVar36[3] = puVar1;
    pbVar21 = (byte *)*puVar36;
                    /* WARNING: Could not recover jumptable at 0x00564a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar36[1])(pbVar21,param_6,param_7);
    return pbVar21;
  }
  pbVar21 = param_5 + (long)param_3 + param_7;
  if (bVar3 != 0) {
    pbVar21 = pbVar21 + 1;
  }
  pqVar39 = (qword *)((byte *)(ulong)uVar14 + -(long)pbVar21);
  pqVar16 = param_3;
  pqVar18 = param_4;
  pbVar37 = param_5;
  pbVar23 = param_1;
  if ((byte *)(ulong)uVar14 < pbVar21 || pqVar39 == (qword *)0x0) {
    pqVar39 = (qword *)0x0;
LAB_00564868:
    pqStack_70 = (qword *)0x0;
    pqVar38 = pqVar39;
    pqVar39 = pqStack_70;
  }
  else {
    bVar4 = *(byte *)(*(long *)(param_1 + 0x10) + 1);
    if ((bVar4 & 1) == 0) {
      if ((bVar4 >> 4 & 1) != 0) goto LAB_00564868;
      puVar36 = *(undefined8 **)(param_1 + 0x18);
      pbVar23 = (byte *)puVar36[3];
      puVar36[2] = (byte *)((long)pqVar39 + puVar36[2]);
      pbVar21 = (byte *)(puVar36 + 0x84);
      pbVar35 = pbVar21 + -(long)pbVar23;
      if (pbVar35 <= pqVar39 && (qword *)((long)pqVar39 - (long)pbVar35) != (qword *)0x0) {
        pbVar30 = (byte *)(puVar36 + 4);
        pbVar20 = pbVar21;
        if (pbVar21 != pbVar23) {
          _memset(pbVar23,0x20,pbVar35);
          lVar19 = puVar36[3];
          puVar36[3] = pbVar35 + lVar19;
          pbVar20 = pbVar35 + lVar19;
        }
        (*(code *)puVar36[1])(*puVar36,pbVar30,(long)pbVar20 - (long)pbVar30);
        puVar36[3] = pbVar30;
        for (pqVar39 = (qword *)((long)pqVar39 - (long)pbVar35); pbVar23 = pbVar30,
            &section_000003d8.size < pqVar39; pqVar39 = pqVar39 + -0x80) {
          _memset(pbVar30,0x20,0x400);
          puVar36[3] = pbVar21;
          (*(code *)puVar36[1])(*puVar36,pbVar30,0x400);
          puVar36[3] = pbVar30;
        }
      }
      pqVar16 = pqVar39;
      _memset(pbVar23,0x20);
      pqStack_70 = (qword *)0x0;
      puVar36[3] = (byte *)((long)pqVar39 + puVar36[3]);
      bVar3 = *param_1;
      pqVar39 = pqStack_70;
    }
    pqVar38 = (qword *)0x0;
  }
  if (bVar3 != 0) {
    puVar36 = *(undefined8 **)(param_1 + 0x18);
    pbVar21 = (byte *)puVar36[3];
    puVar36[2] = puVar36[2] + 1;
    if ((byte *)(puVar36 + 0x84) == pbVar21) {
      pbVar21 = (byte *)(puVar36 + 4);
      pbVar23 = (byte *)*puVar36;
      pqVar16 = &section_000003d8.size;
      (*(code *)puVar36[1])(pbVar23,pbVar21);
      puVar36[3] = pbVar21;
    }
    *pbVar21 = bVar3;
    puVar36[3] = puVar36[3] + 1;
  }
  param_1 = param_1 + 0x18;
  pqVar17 = param_3;
  if (param_4 <= param_3) {
    pqVar17 = param_4;
  }
  uVar15 = param_2;
  if (pqVar17 == (qword *)0x0) {
LAB_00564b24:
    puVar36 = *(undefined8 **)param_1;
    pqVar17 = pqVar16;
  }
  else {
    puVar36 = *(undefined8 **)param_1;
    pbVar23 = (byte *)puVar36[3];
    puVar36[2] = (byte *)((long)pqVar17 + puVar36[2]);
    if (pqVar17 < (byte *)((long)puVar36 + (0x420 - (long)pbVar23))) {
      pqVar16 = pqVar17;
      _memcpy();
      puVar36[3] = (byte *)((long)pqVar17 + puVar36[3]);
      goto LAB_00564b24;
    }
    puVar1 = puVar36 + 4;
    (*(code *)puVar36[1])(*puVar36,puVar1,(long)pbVar23 - (long)puVar1);
    puVar36[3] = puVar1;
    pbVar23 = (byte *)*puVar36;
    (*(code *)puVar36[1])(pbVar23);
    puVar36 = *(undefined8 **)param_1;
  }
  if (pqVar38 != (qword *)0x0) {
    pbVar23 = (byte *)puVar36[3];
    puVar36[2] = (byte *)((long)pqVar38 + puVar36[2]);
    pbVar21 = (byte *)(puVar36 + 0x84);
    pbVar35 = pbVar21 + -(long)pbVar23;
    if (pbVar35 <= pqVar38 && (qword *)((long)pqVar38 - (long)pbVar35) != (qword *)0x0) {
      pbVar30 = (byte *)(puVar36 + 4);
      pbVar20 = pbVar21;
      if (pbVar21 != pbVar23) {
        _memset(pbVar23,0x30,pbVar35);
        lVar19 = puVar36[3];
        puVar36[3] = pbVar35 + lVar19;
        pbVar20 = pbVar35 + lVar19;
      }
      (*(code *)puVar36[1])(*puVar36,pbVar30,(long)pbVar20 - (long)pbVar30);
      puVar36[3] = pbVar30;
      for (pqVar38 = (qword *)((long)pqVar38 - (long)pbVar35); pbVar23 = pbVar30,
          &section_000003d8.size < pqVar38; pqVar38 = pqVar38 + -0x80) {
        _memset(pbVar30,0x30,0x400);
        puVar36[3] = pbVar21;
        (*(code *)puVar36[1])(*puVar36,pbVar30,0x400);
        puVar36[3] = pbVar30;
      }
    }
    uVar15 = 0x30;
    pqVar17 = pqVar38;
    _memset(pbVar23);
    puVar36[3] = (byte *)((long)pqVar38 + puVar36[3]);
    puVar36 = *(undefined8 **)param_1;
  }
  uVar25 = (long)param_3 - (long)param_4;
  if (param_4 <= param_3) {
    if (uVar25 != 0) {
      pbVar23 = (byte *)puVar36[3];
      puVar36[2] = puVar36[2] + uVar25;
      if ((ulong)((long)puVar36 + (0x420 - (long)pbVar23)) <= uVar25) {
        puVar1 = puVar36 + 4;
        (*(code *)puVar36[1])(*puVar36,puVar1,(long)pbVar23 - (long)puVar1);
        puVar36[3] = puVar1;
        pbVar23 = (byte *)*puVar36;
        (*(code *)puVar36[1])(pbVar23,(byte *)((long)param_4 + param_2),uVar25);
        puVar36 = *(undefined8 **)param_1;
        goto joined_r0x00564c94;
      }
      _memcpy(pbVar23,(byte *)((long)param_4 + param_2),uVar25);
      puVar36[3] = puVar36[3] + uVar25;
    }
    puVar36 = *(undefined8 **)param_1;
joined_r0x00564c94:
    if (param_5 != (byte *)0x0) {
      pbVar23 = (byte *)puVar36[3];
      puVar36[2] = param_5 + puVar36[2];
      pbVar21 = (byte *)(puVar36 + 0x84);
      pbVar37 = pbVar21 + -(long)pbVar23;
      if (pbVar37 <= param_5 && param_5 + -(long)pbVar37 != (byte *)0x0) {
        pbVar35 = (byte *)(puVar36 + 4);
        pbVar30 = pbVar21;
        if (pbVar21 != pbVar23) {
          _memset(pbVar23,0x30,pbVar37);
          lVar19 = puVar36[3];
          puVar36[3] = pbVar37 + lVar19;
          pbVar30 = pbVar37 + lVar19;
        }
        (*(code *)puVar36[1])(*puVar36,pbVar35,(long)pbVar30 - (long)pbVar35);
        puVar36[3] = pbVar35;
        for (param_5 = param_5 + -(long)pbVar37; pbVar23 = pbVar35, &section_000003d8.size < param_5
            ; param_5 = param_5 + -0x400) {
          _memset(pbVar35,0x30,0x400);
          puVar36[3] = pbVar21;
          (*(code *)puVar36[1])(*puVar36,pbVar35,0x400);
          puVar36[3] = pbVar35;
        }
      }
      _memset(pbVar23,0x30,param_5);
      puVar36[3] = param_5 + puVar36[3];
      puVar36 = *(undefined8 **)param_1;
    }
    if (param_7 != 0) {
      pbVar23 = (byte *)puVar36[3];
      puVar36[2] = puVar36[2] + param_7;
      if (param_7 < (ulong)((long)puVar36 + (0x420 - (long)pbVar23))) {
        _memcpy(pbVar23,param_6,param_7);
        puVar36[3] = puVar36[3] + param_7;
      }
      else {
        puVar1 = puVar36 + 4;
        (*(code *)puVar36[1])(*puVar36,puVar1,(long)pbVar23 - (long)puVar1);
        puVar36[3] = puVar1;
        pbVar23 = (byte *)*puVar36;
        (*(code *)puVar36[1])(pbVar23,param_6,param_7);
      }
    }
    if (pqVar39 != (qword *)0x0) {
      puVar36 = *(undefined8 **)param_1;
      pbVar23 = (byte *)puVar36[3];
      puVar36[2] = (byte *)((long)pqVar39 + puVar36[2]);
      pbVar21 = (byte *)(puVar36 + 0x84);
      pbVar37 = pbVar21 + -(long)pbVar23;
      if (pbVar37 <= pqVar39 && (qword *)((long)pqVar39 - (long)pbVar37) != (qword *)0x0) {
        pbVar35 = (byte *)(puVar36 + 4);
        pbVar30 = pbVar21;
        if (pbVar21 != pbVar23) {
          _memset(pbVar23,0x20,pbVar37);
          lVar19 = puVar36[3];
          puVar36[3] = pbVar37 + lVar19;
          pbVar30 = pbVar37 + lVar19;
        }
        (*(code *)puVar36[1])(*puVar36,pbVar35,(long)pbVar30 - (long)pbVar35);
        puVar36[3] = pbVar35;
        for (pqVar39 = (qword *)((long)pqVar39 - (long)pbVar37); pbVar23 = pbVar35,
            &section_000003d8.size < pqVar39; pqVar39 = pqVar39 + -0x80) {
          _memset(pbVar35,0x20,0x400);
          puVar36[3] = pbVar21;
          (*(code *)puVar36[1])(*puVar36,pbVar35,0x400);
          puVar36[3] = pbVar35;
        }
      }
      _memset(pbVar23,0x20,pqVar39);
      puVar36[3] = (byte *)((long)pqVar39 + puVar36[3]);
    }
    return pbVar23;
  }
  pcVar34 = "string_view::substr";
  FUN_00435534();
  if ((byte *)((long)&segment_command_00000020.cmdsize + 3) < pqVar17) {
    return (byte *)0x0;
  }
  pbVar21 = (byte *)((long)pqVar18 + 0x29);
  pqVar18[0xb] = (qword)pbVar21;
  pqVar18[0xc] = (qword)pbVar21;
  uVar14 = (uint)uVar15;
  if ((int)uVar14 < 0) {
    if (0xffffffc3 < uVar14) {
      uVar29 = (ulong)-uVar14;
      uVar25 = ~(-1L << (uVar29 & 0x3f));
      uVar15 = (ulong)pcVar34 >> (uVar29 & 0x3f);
      if (uVar15 == 0) {
LAB_005653a0:
        uVar32 = (ulong)pcVar34 & uVar25;
        pbVar37[0] = 0;
        pbVar37[1] = 0;
        pbVar37[2] = 0;
        pbVar37[3] = 0;
        uVar15 = 0;
        if (uVar32 != 0) {
          iVar28 = 0;
          do {
            uVar32 = uVar32 * 10;
            iVar28 = iVar28 + -1;
          } while (uVar32 < uVar25 || uVar32 - uVar25 == 0);
          *(int *)pbVar37 = iVar28;
          uVar15 = uVar32;
        }
        lVar19 = pqVar18[0xb];
        pqVar18[0xb] = lVar19 + -1;
        *(char *)(lVar19 + -1) = (char)(uVar15 >> (uVar29 & 0x3f)) + '0';
        puVar26 = (undefined1 *)pqVar18[0xc];
        pqVar18[0xc] = (qword)(puVar26 + 1);
        *puVar26 = 0x2e;
        goto joined_r0x005653f4;
      }
      do {
        lVar19 = pqVar18[0xb];
        pqVar18[0xb] = lVar19 + -1;
        *(byte *)(lVar19 + -1) = (char)uVar15 + (char)(uVar15 / 10) * -10 | 0x30;
        bVar13 = 9 < uVar15;
        uVar15 = uVar15 / 10;
      } while (bVar13);
      puVar26 = (undefined1 *)pqVar18[0xb];
      puVar2 = (undefined1 *)pqVar18[0xc];
      uVar5 = *puVar26;
      pqVar18[0xb] = (qword)(puVar26 + -1);
      puVar26[-1] = uVar5;
      *(undefined1 *)(pqVar18[0xb] + 1) = 0x2e;
      uVar15 = (ulong)pcVar34 & uVar25;
      if (puVar2 == puVar26) goto LAB_005653a0;
      pbVar21 = puVar2 + ~(ulong)puVar26;
      *(int *)pbVar37 = (int)pbVar21;
      pqVar39 = (qword *)((long)pqVar17 - (long)pbVar21);
      if (pqVar17 < pbVar21) {
        pcVar22 = (char *)pqVar18[0xc];
        pcVar34 = pcVar22 + -((long)pbVar21 - (long)pqVar17);
        pqVar18[0xc] = (qword)pcVar34;
        if (*pcVar34 < '6') {
          if (*pcVar34 != '5') goto LAB_005655c8;
          if (uVar15 == 0) {
            if ((long)pbVar21 - (long)pqVar17 != 1) {
              pcVar24 = pcVar34 + 1;
              lVar19 = (long)puVar2 - (long)((long)pqVar17 + (long)puVar26);
              uVar14 = (int)lVar19 - 2;
              uVar15 = (ulong)uVar14 & 3;
              pcVar27 = pcVar24;
              if ((uVar14 & 3) != 0) {
                do {
                  pcVar24 = pcVar27 + 1;
                  if (*pcVar27 != '0') goto LAB_0056508c;
                  uVar15 = uVar15 - 1;
                  pcVar27 = pcVar24;
                } while (uVar15 != 0);
              }
              if (2 < lVar19 - 3U) {
                do {
                  if ((((*pcVar24 != '0') || (pcVar24[1] != '0')) || (pcVar24[2] != '0')) ||
                     (pcVar24[3] != '0')) goto LAB_0056508c;
                  pcVar24 = pcVar24 + 4;
                } while (pcVar24 != pcVar22);
              }
            }
            bVar3 = pcVar34[-1];
            if (bVar3 == 0x2e) {
              bVar3 = pcVar34[-2];
            }
            if ((bVar3 & 0x81) != 1) goto LAB_005655c8;
          }
        }
LAB_0056508c:
        pcVar22 = pcVar34 + -1;
        pcVar24 = (char *)pqVar18[0xb];
        if (pcVar24 <= pcVar22) {
          do {
            pcVar34 = pcVar22;
            cVar6 = *pcVar34;
            if (cVar6 != '.') {
              if (cVar6 != '9') {
                *pcVar34 = cVar6 + '\x01';
                return (byte *)((long)&MACH_HEADER.magic + 1);
              }
              *pcVar34 = '0';
              pcVar24 = (char *)pqVar18[0xb];
            }
            pcVar22 = pcVar34 + -1;
          } while (pcVar24 <= pcVar22);
        }
        *pcVar22 = '1';
        pqVar18[0xb] = (qword)pcVar22;
        cVar6 = *pcVar34;
        *pcVar34 = pcVar34[1];
        pcVar34[1] = cVar6;
        goto LAB_00565810;
      }
      while (pqVar39 != (qword *)0x0) {
        uVar15 = uVar15 * 10;
        pcVar34 = (char *)pqVar18[0xc];
        pqVar18[0xc] = (qword)(pcVar34 + 1);
        *pcVar34 = (char)(uVar15 >> (uVar29 & 0x3f)) + '0';
        pqVar17 = (qword *)((long)pqVar39 + -1);
joined_r0x005653f4:
        uVar15 = uVar15 & uVar25;
        pqVar39 = pqVar17;
      }
      cVar6 = (char)(uVar15 * 10 >> (uVar29 & 0x3f));
      if (cVar6 < '\x06') {
        if (cVar6 != '\x05') goto LAB_005655c8;
        pbVar23 = (byte *)pqVar18[0xc];
        if ((uVar15 * 10 & uVar25) == 0) {
          bVar3 = pbVar23[-1];
          if (bVar3 == 0x2e) {
            bVar3 = pbVar23[-2];
          }
          if ((bVar3 & 0x81) != 1) goto LAB_005655c8;
        }
      }
      else {
        pbVar23 = (byte *)pqVar18[0xc];
      }
      pbVar21 = pbVar23 + -1;
      pbVar35 = (byte *)pqVar18[0xb];
      if (pbVar35 <= pbVar21) {
        do {
          bVar3 = *pbVar21;
          if (bVar3 != 0x2e) {
            if (bVar3 != 0x39) goto LAB_005655c4;
            *pbVar21 = 0x30;
            pbVar35 = (byte *)pqVar18[0xb];
          }
          pbVar21 = pbVar21 + -1;
        } while (pbVar35 <= pbVar21);
        goto LAB_005657f0;
      }
      goto LAB_005657f4;
    }
    if (uVar14 < 0xffffff84) {
      return (byte *)0x0;
    }
    uVar7 = -uVar14;
    uVar25 = (ulong)uVar7;
    uVar29 = -1L << (uVar25 & 0x3f);
    bVar13 = (uVar7 & 0x40) == 0;
    uVar15 = uVar29;
    if (bVar13) {
      uVar15 = uVar29 | 0x7fffffffffffffffU >> ((ulong)(uVar14 - 1) & 0x3f);
    }
    uVar32 = 0;
    if (bVar13) {
      uVar32 = uVar29;
    }
    uVar32 = ~uVar32;
    uVar15 = ~uVar15;
    uVar29 = 0;
    if (bVar13) {
      uVar29 = (ulong)pcVar34 >> (uVar25 & 0x3f);
    }
    if (uVar29 == 0) {
      pbVar37[0] = 0;
      pbVar37[1] = 0;
      pbVar37[2] = 0;
      pbVar37[3] = 0;
      uVar33 = 0;
      uVar29 = uVar32 & (ulong)pcVar34;
      uVar31 = 0;
      if (uVar29 != 0) {
        iVar28 = 0;
        do {
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar29;
          uVar33 = SUB168(auVar10 * ZEXT816(10),8) + uVar33 * 10;
          uVar29 = uVar29 * 10;
          iVar28 = iVar28 + -1;
        } while (CARRY8(uVar15,~uVar33) || CARRY8(uVar15 + ~uVar33,(ulong)(uVar29 <= uVar32)));
        *(int *)pbVar37 = iVar28;
        uVar31 = uVar29;
      }
      bVar3 = (byte)(uVar33 >> (uVar25 & 0x3f));
      if ((uVar7 & 0x40) == 0) {
        bVar3 = (byte)((uVar33 << 1) << ((ulong)~uVar7 & 0x3f)) | (byte)(uVar31 >> (uVar25 & 0x3f));
      }
      *(byte *)(pqVar18 + 5) = bVar3 + 0x30;
      pqVar18[0xb] = (qword)(pqVar18 + 5);
      pqVar18[0xc] = (qword)((long)pqVar18 + 0x2a);
      *(byte *)((long)pqVar18 + 0x29) = 0x2e;
      uVar31 = uVar31 & uVar32;
      uVar33 = uVar33 & uVar15;
    }
    else {
      pbVar35 = (byte *)((long)pqVar18 + 0x27);
      *pbVar35 = (byte)uVar29 | 0x30;
      *(byte *)(pqVar18 + 5) = 0x2e;
      pqVar18[0xb] = (qword)pbVar35;
      uVar31 = uVar32 & (ulong)pcVar34;
      pbVar21 = pbVar21 + ~(ulong)(pqVar18 + 5);
      *(int *)pbVar37 = (int)pbVar21;
      if (pqVar17 < pbVar21) {
        lVar19 = (long)pbVar21 - (long)pqVar17;
        pbVar23 = (byte *)((long)pqVar18 + (0x29 - lVar19));
        pqVar18[0xc] = (qword)pbVar23;
        if ((char)*pbVar23 < '6') {
          if (*pbVar23 != 0x35) goto LAB_005655c8;
          if (uVar31 != 0) goto LAB_00565358;
          bVar3 = pbVar23[-1];
          if (bVar3 == 0x2e) {
            bVar3 = pbVar23[-2];
          }
          if ((bVar3 & 0x81) != 1) goto LAB_005655c8;
          pbVar21 = (byte *)((long)pqVar18 + (0x28 - lVar19));
        }
        else {
LAB_00565358:
          pbVar21 = (byte *)((long)pqVar18 + (0x28 - lVar19));
          if (0x29 - lVar19 < 0x28) goto LAB_005657f4;
        }
        do {
          bVar3 = *pbVar21;
          if (bVar3 != 0x2e) {
            if (bVar3 != 0x39) goto LAB_005655c4;
            *pbVar21 = 0x30;
            pbVar35 = (byte *)pqVar18[0xb];
          }
          pbVar21 = pbVar21 + -1;
        } while (pbVar35 <= pbVar21);
        goto LAB_005657f0;
      }
      uVar33 = 0;
      pqVar17 = (qword *)((long)pqVar17 - (long)pbVar21);
    }
    for (; pqVar17 != (qword *)0x0; pqVar17 = (qword *)((long)pqVar17 + -1)) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar31;
      uVar33 = SUB168(auVar11 * ZEXT816(10),8) + uVar33 * 10;
      bVar3 = (byte)(uVar33 >> (uVar25 & 0x3f));
      if ((uVar7 & 0x40) == 0) {
        bVar3 = (byte)(uVar33 * 2 << ((ulong)~uVar7 & 0x3f)) |
                (byte)(uVar31 * 10 >> (uVar25 & 0x3f));
      }
      uVar33 = uVar33 & uVar15;
      uVar31 = uVar31 * 10 & uVar32;
      pcVar34 = (char *)pqVar18[0xc];
      pqVar18[0xc] = (qword)(pcVar34 + 1);
      *pcVar34 = bVar3 + 0x30;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar31;
    uVar29 = SUB168(auVar12 * ZEXT816(10),8) + uVar33 * 10;
    bVar3 = (byte)(uVar29 >> (uVar25 & 0x3f));
    if ((uVar7 & 0x40) == 0) {
      bVar3 = (byte)(uVar29 * 2 << ((ulong)~uVar7 & 0x3f)) | (byte)(uVar31 * 10 >> (uVar25 & 0x3f));
    }
    if ((char)bVar3 < '\x06') {
      if (bVar3 != 5) {
LAB_005655c8:
        return (byte *)((long)&MACH_HEADER.magic + 1);
      }
      pbVar23 = (byte *)pqVar18[0xc];
      if ((uVar31 * 10 & uVar32) == 0 && (uVar29 & uVar15) == 0) {
        bVar3 = pbVar23[-1];
        if (bVar3 == 0x2e) {
          bVar3 = pbVar23[-2];
        }
        if ((bVar3 & 0x81) != 1) goto LAB_005655c8;
      }
    }
    else {
      pbVar23 = (byte *)pqVar18[0xc];
    }
    pbVar21 = pbVar23 + -1;
    pbVar35 = (byte *)pqVar18[0xb];
    if (pbVar35 <= pbVar21) {
      do {
        bVar3 = *pbVar21;
        if (bVar3 != 0x2e) {
          if (bVar3 != 0x39) goto LAB_005655c4;
          *pbVar21 = 0x30;
          pbVar35 = (byte *)pqVar18[0xb];
        }
        pbVar21 = pbVar21 + -1;
      } while (pbVar35 <= pbVar21);
      goto LAB_005657f0;
    }
  }
  else if (uVar14 < 0xc) {
    uVar15 = (long)pcVar34 << (uVar15 & 0xf);
    if (uVar15 == 0) {
      pbVar37[0] = 0xff;
      pbVar37[1] = 0xff;
      pbVar37[2] = 0xff;
      pbVar37[3] = 0xff;
      pbVar35 = (byte *)0xffffffffffffffff;
      lVar19 = -1 - (long)pqVar17;
      pbVar23 = pbVar21 + -lVar19;
      pqVar18[0xc] = (qword)pbVar23;
      bVar3 = *pbVar23;
    }
    else {
      do {
        lVar19 = pqVar18[0xb];
        pqVar18[0xb] = lVar19 + -1;
        *(byte *)(lVar19 + -1) = (char)uVar15 + (char)(uVar15 / 10) * -10 | 0x30;
        bVar13 = 9 < uVar15;
        uVar15 = uVar15 / 10;
      } while (bVar13);
      puVar26 = (undefined1 *)pqVar18[0xb];
      lVar19 = pqVar18[0xc];
      uVar5 = *puVar26;
      pqVar18[0xb] = (qword)(puVar26 + -1);
      puVar26[-1] = uVar5;
      *(undefined1 *)(pqVar18[0xb] + 1) = 0x2e;
      pbVar35 = (byte *)(~(ulong)puVar26 + lVar19);
      *(int *)pbVar37 = (int)pbVar35;
      lVar19 = (long)pqVar17 - (long)pbVar35;
      if (pbVar35 <= pqVar17) {
        if (lVar19 != 0) {
          do {
            puVar26 = (undefined1 *)pqVar18[0xc];
            pqVar18[0xc] = (qword)(puVar26 + 1);
            *puVar26 = 0x30;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          goto LAB_005652bc;
        }
        goto LAB_005655c8;
      }
      pbVar21 = (byte *)pqVar18[0xc];
      lVar19 = (long)pbVar35 - (long)pqVar17;
      pbVar23 = pbVar21 + -lVar19;
      pqVar18[0xc] = (qword)pbVar23;
      bVar3 = *pbVar23;
    }
    if ((char)bVar3 < '6') {
      if (bVar3 != 0x35) goto LAB_005655c8;
      if (lVar19 != 1) {
        pbVar30 = pbVar23 + 1;
        uVar14 = ~((int)pqVar17 - (int)pbVar35);
        uVar15 = (ulong)uVar14 & 3;
        pbVar20 = pbVar30;
        if ((uVar14 & 3) != 0) {
          do {
            pbVar30 = pbVar20 + 1;
            if (*pbVar20 != 0x30) goto LAB_00565254;
            uVar15 = uVar15 - 1;
            pbVar20 = pbVar30;
          } while (uVar15 != 0);
        }
        if ((byte *)((long)&MACH_HEADER.magic + 2) < pbVar35 + (~(ulong)pqVar17 - 1)) {
          do {
            if (((*pbVar30 != 0x30) || (pbVar30[1] != 0x30)) ||
               ((pbVar30[2] != 0x30 || (pbVar30[3] != 0x30)))) goto LAB_00565254;
            pbVar30 = pbVar30 + 4;
          } while (pbVar30 != pbVar21);
        }
      }
      bVar3 = pbVar23[-1];
      if (bVar3 == 0x2e) {
        bVar3 = pbVar23[-2];
      }
      if ((bVar3 & 0x81) != 1) goto LAB_005655c8;
    }
LAB_00565254:
    pbVar21 = pbVar23 + -1;
    pbVar35 = (byte *)pqVar18[0xb];
    if (pbVar35 <= pbVar21) {
      do {
        bVar3 = *pbVar21;
        if (bVar3 != 0x2e) {
          if (bVar3 != 0x39) goto LAB_005655c4;
          *pbVar21 = 0x30;
          pbVar35 = (byte *)pqVar18[0xb];
        }
        pbVar21 = pbVar21 + -1;
      } while (pbVar35 <= pbVar21);
      goto LAB_005657f0;
    }
  }
  else {
    if (0x4b < uVar14) {
      return (byte *)0x0;
    }
    uVar25 = (long)pcVar34 << (uVar15 & 0x3f);
    bVar13 = (uVar15 & 0x40) == 0;
    uVar15 = uVar25;
    if (bVar13) {
      uVar15 = ((ulong)pcVar34 >> 1) >> ((ulong)~uVar14 & 0x3f);
    }
    uVar29 = 0;
    if (bVar13) {
      uVar29 = uVar25;
    }
    if (uVar29 == 0 && uVar15 == 0) {
      pbVar37[0] = 0xff;
      pbVar37[1] = 0xff;
      pbVar37[2] = 0xff;
      pbVar37[3] = 0xff;
      pbVar35 = (byte *)0xffffffffffffffff;
      lVar19 = -1 - (long)pqVar17;
      pbVar23 = pbVar21 + -lVar19;
      pqVar18[0xc] = (qword)pbVar23;
      bVar3 = *pbVar23;
    }
    else {
      do {
        uVar32 = uVar29 >> 1 | uVar15 << 0x3f;
        uVar33 = uVar15 >> 1;
        uVar25 = uVar32 + uVar33;
        if (CARRY8(uVar32,uVar33)) {
          uVar25 = uVar25 + 1;
        }
        uVar8 = uVar32 - uVar25 % 5;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar8;
        bVar13 = uVar29 < 10;
        uVar31 = uVar15 + !bVar13;
        uVar15 = SUB168(auVar9 * ZEXT816(0xcccccccccccccccd),8) + uVar8 * -0x3333333333333334 +
                 (uVar33 - (uVar32 < uVar25 % 5)) * -0x3333333333333333;
        lVar19 = pqVar18[0xb];
        pqVar18[0xb] = lVar19 + -1;
        *(byte *)(lVar19 + -1) = (char)uVar29 + (char)(uVar8 * -0x3333333333333333) * -10 | 0x30;
        uVar29 = uVar8 * -0x3333333333333333;
      } while (!CARRY8(~uVar31,(ulong)bVar13));
      puVar26 = (undefined1 *)pqVar18[0xb];
      lVar19 = pqVar18[0xc];
      uVar5 = *puVar26;
      pqVar18[0xb] = (qword)(puVar26 + -1);
      puVar26[-1] = uVar5;
      *(undefined1 *)(pqVar18[0xb] + 1) = 0x2e;
      pbVar35 = (byte *)(~(ulong)puVar26 + lVar19);
      *(int *)pbVar37 = (int)pbVar35;
      lVar19 = (long)pqVar17 - (long)pbVar35;
      if (pbVar35 <= pqVar17) {
        if (lVar19 != 0) {
          do {
            puVar26 = (undefined1 *)pqVar18[0xc];
            pqVar18[0xc] = (qword)(puVar26 + 1);
            *puVar26 = 0x30;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
LAB_005652bc:
          return (byte *)((long)&MACH_HEADER.magic + 1);
        }
        goto LAB_005655c8;
      }
      pbVar21 = (byte *)pqVar18[0xc];
      lVar19 = (long)pbVar35 - (long)pqVar17;
      pbVar23 = pbVar21 + -lVar19;
      pqVar18[0xc] = (qword)pbVar23;
      bVar3 = *pbVar23;
    }
    if ((char)bVar3 < '6') {
      if (bVar3 != 0x35) goto LAB_005655c8;
      if (lVar19 != 1) {
        pbVar30 = pbVar23 + 1;
        uVar14 = ~((int)pqVar17 - (int)pbVar35);
        uVar15 = (ulong)uVar14 & 3;
        pbVar20 = pbVar30;
        if ((uVar14 & 3) != 0) {
          do {
            pbVar30 = pbVar20 + 1;
            if (*pbVar20 != 0x30) goto LAB_00565580;
            uVar15 = uVar15 - 1;
            pbVar20 = pbVar30;
          } while (uVar15 != 0);
        }
        if ((byte *)((long)&MACH_HEADER.magic + 2) < pbVar35 + (~(ulong)pqVar17 - 1)) {
          do {
            if (((*pbVar30 != 0x30) || (pbVar30[1] != 0x30)) ||
               ((pbVar30[2] != 0x30 || (pbVar30[3] != 0x30)))) goto LAB_00565580;
            pbVar30 = pbVar30 + 4;
          } while (pbVar30 != pbVar21);
        }
      }
      bVar3 = pbVar23[-1];
      if (bVar3 == 0x2e) {
        bVar3 = pbVar23[-2];
      }
      if ((bVar3 & 0x81) != 1) goto LAB_005655c8;
    }
LAB_00565580:
    pbVar21 = pbVar23 + -1;
    pbVar35 = (byte *)pqVar18[0xb];
    if (pbVar35 <= pbVar21) {
      do {
        bVar3 = *pbVar21;
        if (bVar3 != 0x2e) {
          if (bVar3 != 0x39) goto LAB_005655c4;
          *pbVar21 = 0x30;
          pbVar35 = (byte *)pqVar18[0xb];
        }
        pbVar21 = pbVar21 + -1;
      } while (pbVar35 <= pbVar21);
LAB_005657f0:
      pbVar23 = pbVar21 + 1;
    }
  }
LAB_005657f4:
  *pbVar21 = 0x31;
  pqVar18[0xb] = (qword)pbVar21;
  bVar3 = *pbVar23;
  *pbVar23 = pbVar23[1];
  pbVar23[1] = bVar3;
LAB_00565810:
  *(int *)pbVar37 = *(int *)pbVar37 + 1;
  pqVar18[0xc] = pqVar18[0xc] + -1;
  return (byte *)((long)&MACH_HEADER.magic + 1);
LAB_005655c4:
  *pbVar21 = bVar3 + 1;
  goto LAB_005655c8;
}



/* Entry: 00564ef0; end: 00565923;  */

undefined8 FUN_00564ef0(ulong param_1,uint param_2,byte *param_3,long param_4,int *param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  byte *pbVar13;
  char *pcVar14;
  byte *pbVar15;
  char *pcVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  char *pcVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  byte *pbVar24;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  char *pcVar29;
  byte *pbVar25;
  
  if ((byte *)((long)&segment_command_00000020.cmdsize + 3) < param_3) {
    return 0;
  }
  pbVar13 = (byte *)(param_4 + 0x29);
  *(byte **)(param_4 + 0x58) = pbVar13;
  *(byte **)(param_4 + 0x60) = pbVar13;
  if ((int)param_2 < 0) {
    if (0xffffffc3 < param_2) {
      uVar23 = (ulong)-param_2;
      uVar17 = ~(-1L << (uVar23 & 0x3f));
      uVar22 = param_1 >> (uVar23 & 0x3f);
      if (uVar22 == 0) {
LAB_005653a0:
        param_1 = param_1 & uVar17;
        *param_5 = 0;
        uVar22 = 0;
        if (param_1 != 0) {
          iVar21 = 0;
          do {
            param_1 = param_1 * 10;
            iVar21 = iVar21 + -1;
          } while (param_1 < uVar17 || param_1 - uVar17 == 0);
          *param_5 = iVar21;
          uVar22 = param_1;
        }
        lVar28 = *(long *)(param_4 + 0x58);
        *(long *)(param_4 + 0x58) = lVar28 + -1;
        *(char *)(lVar28 + -1) = (char)(uVar22 >> (uVar23 & 0x3f)) + '0';
        puVar19 = *(undefined1 **)(param_4 + 0x60);
        *(undefined1 **)(param_4 + 0x60) = puVar19 + 1;
        *puVar19 = 0x2e;
        goto joined_r0x005653f4;
      }
      do {
        lVar28 = *(long *)(param_4 + 0x58);
        *(long *)(param_4 + 0x58) = lVar28 + -1;
        *(byte *)(lVar28 + -1) = (char)uVar22 + (char)(uVar22 / 10) * -10 | 0x30;
        bVar12 = 9 < uVar22;
        uVar22 = uVar22 / 10;
      } while (bVar12);
      puVar19 = *(undefined1 **)(param_4 + 0x58);
      puVar1 = *(undefined1 **)(param_4 + 0x60);
      uVar2 = *puVar19;
      *(undefined1 **)(param_4 + 0x58) = puVar19 + -1;
      puVar19[-1] = uVar2;
      *(undefined1 *)(*(long *)(param_4 + 0x58) + 1) = 0x2e;
      uVar22 = param_1 & uVar17;
      if (puVar1 == puVar19) goto LAB_005653a0;
      pbVar13 = puVar1 + ~(ulong)puVar19;
      *param_5 = (int)pbVar13;
      pbVar15 = param_3 + -(long)pbVar13;
      if (param_3 < pbVar13) {
        pcVar14 = *(char **)(param_4 + 0x60);
        pcVar29 = pcVar14 + -((long)pbVar13 - (long)param_3);
        *(char **)(param_4 + 0x60) = pcVar29;
        if (*pcVar29 < '6') {
          if (*pcVar29 != '5') {
            return 1;
          }
          if (uVar22 == 0) {
            if ((long)pbVar13 - (long)param_3 != 1) {
              pcVar16 = pcVar29 + 1;
              uVar5 = (int)((long)puVar1 - (long)(param_3 + (long)puVar19)) - 2;
              uVar22 = (ulong)uVar5 & 3;
              pcVar20 = pcVar16;
              if ((uVar5 & 3) != 0) {
                do {
                  pcVar16 = pcVar20 + 1;
                  if (*pcVar20 != '0') goto LAB_0056508c;
                  uVar22 = uVar22 - 1;
                  pcVar20 = pcVar16;
                } while (uVar22 != 0);
              }
              if (2 < ((long)puVar1 - (long)(param_3 + (long)puVar19)) - 3U) {
                do {
                  if ((((*pcVar16 != '0') || (pcVar16[1] != '0')) || (pcVar16[2] != '0')) ||
                     (pcVar16[3] != '0')) goto LAB_0056508c;
                  pcVar16 = pcVar16 + 4;
                } while (pcVar16 != pcVar14);
              }
            }
            bVar4 = pcVar29[-1];
            if (bVar4 == 0x2e) {
              bVar4 = pcVar29[-2];
            }
            if ((bVar4 & 0x81) != 1) {
              return 1;
            }
          }
        }
LAB_0056508c:
        pcVar14 = pcVar29 + -1;
        pcVar16 = *(char **)(param_4 + 0x58);
        if (pcVar16 <= pcVar14) {
          do {
            pcVar29 = pcVar14;
            cVar3 = *pcVar29;
            if (cVar3 != '.') {
              if (cVar3 != '9') {
                *pcVar29 = cVar3 + '\x01';
                return 1;
              }
              *pcVar29 = '0';
              pcVar16 = *(char **)(param_4 + 0x58);
            }
            pcVar14 = pcVar29 + -1;
          } while (pcVar16 <= pcVar14);
        }
        *pcVar14 = '1';
        *(char **)(param_4 + 0x58) = pcVar14;
        cVar3 = *pcVar29;
        *pcVar29 = pcVar29[1];
        pcVar29[1] = cVar3;
        goto LAB_00565810;
      }
      while (pbVar15 != (byte *)0x0) {
        uVar22 = uVar22 * 10;
        pcVar29 = *(char **)(param_4 + 0x60);
        *(char **)(param_4 + 0x60) = pcVar29 + 1;
        *pcVar29 = (char)(uVar22 >> (uVar23 & 0x3f)) + '0';
        param_3 = pbVar15 + -1;
joined_r0x005653f4:
        uVar22 = uVar22 & uVar17;
        pbVar15 = param_3;
      }
      cVar3 = (char)(uVar22 * 10 >> (uVar23 & 0x3f));
      if (cVar3 < '\x06') {
        if (cVar3 != '\x05') {
          return 1;
        }
        pbVar15 = *(byte **)(param_4 + 0x60);
        if ((uVar22 * 10 & uVar17) == 0) {
          bVar4 = pbVar15[-1];
          if (bVar4 == 0x2e) {
            bVar4 = pbVar15[-2];
          }
          if ((bVar4 & 0x81) != 1) {
            return 1;
          }
        }
      }
      else {
        pbVar15 = *(byte **)(param_4 + 0x60);
      }
      pbVar13 = pbVar15 + -1;
      pbVar18 = *(byte **)(param_4 + 0x58);
      if (pbVar18 <= pbVar13) {
        do {
          bVar4 = *pbVar13;
          if (bVar4 != 0x2e) {
            if (bVar4 != 0x39) goto LAB_005655c4;
            *pbVar13 = 0x30;
            pbVar18 = *(byte **)(param_4 + 0x58);
          }
          pbVar13 = pbVar13 + -1;
        } while (pbVar18 <= pbVar13);
        goto LAB_005657f0;
      }
      goto LAB_005657f4;
    }
    if (param_2 < 0xffffff84) {
      return 0;
    }
    uVar5 = -param_2;
    uVar17 = (ulong)uVar5;
    uVar23 = -1L << (uVar17 & 0x3f);
    bVar12 = (uVar5 & 0x40) == 0;
    uVar22 = uVar23;
    if (bVar12) {
      uVar22 = uVar23 | 0x7fffffffffffffffU >> ((ulong)(param_2 - 1) & 0x3f);
    }
    uVar26 = 0;
    if (bVar12) {
      uVar26 = uVar23;
    }
    uVar26 = ~uVar26;
    uVar22 = ~uVar22;
    uVar23 = 0;
    if (bVar12) {
      uVar23 = param_1 >> (uVar17 & 0x3f);
    }
    if (uVar23 == 0) {
      *param_5 = 0;
      uVar23 = 0;
      param_1 = uVar26 & param_1;
      uVar27 = 0;
      if (param_1 != 0) {
        iVar21 = 0;
        do {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = param_1;
          uVar23 = SUB168(auVar9 * ZEXT816(10),8) + uVar23 * 10;
          param_1 = param_1 * 10;
          iVar21 = iVar21 + -1;
        } while (CARRY8(uVar22,~uVar23) || CARRY8(uVar22 + ~uVar23,(ulong)(param_1 <= uVar26)));
        *param_5 = iVar21;
        uVar27 = param_1;
      }
      bVar4 = (byte)(uVar23 >> (uVar17 & 0x3f));
      if ((uVar5 & 0x40) == 0) {
        bVar4 = (byte)((uVar23 << 1) << ((ulong)~uVar5 & 0x3f)) | (byte)(uVar27 >> (uVar17 & 0x3f));
      }
      *(char *)(param_4 + 0x28) = bVar4 + 0x30;
      *(char **)(param_4 + 0x58) = (char *)(param_4 + 0x28);
      *(long *)(param_4 + 0x60) = param_4 + 0x2a;
      *(undefined1 *)(param_4 + 0x29) = 0x2e;
      param_1 = uVar27 & uVar26;
      uVar23 = uVar23 & uVar22;
    }
    else {
      pbVar18 = (byte *)(param_4 + 0x27);
      *pbVar18 = (byte)uVar23 | 0x30;
      *(undefined1 *)(param_4 + 0x28) = 0x2e;
      *(byte **)(param_4 + 0x58) = pbVar18;
      param_1 = uVar26 & param_1;
      pbVar13 = pbVar13 + ~(ulong)(param_4 + 0x28);
      *param_5 = (int)pbVar13;
      if (param_3 < pbVar13) {
        lVar28 = (long)pbVar13 - (long)param_3;
        pbVar15 = (byte *)(param_4 + (0x29 - lVar28));
        *(byte **)(param_4 + 0x60) = pbVar15;
        if ((char)*pbVar15 < '6') {
          if (*pbVar15 != 0x35) {
            return 1;
          }
          if (param_1 != 0) goto LAB_00565358;
          bVar4 = pbVar15[-1];
          if (bVar4 == 0x2e) {
            bVar4 = pbVar15[-2];
          }
          if ((bVar4 & 0x81) != 1) {
            return 1;
          }
          pbVar13 = (byte *)((param_4 - lVar28) + 0x28);
        }
        else {
LAB_00565358:
          pbVar13 = (byte *)((param_4 - lVar28) + 0x28);
          if (0x29 - lVar28 < 0x28) goto LAB_005657f4;
        }
        do {
          bVar4 = *pbVar13;
          if (bVar4 != 0x2e) {
            if (bVar4 != 0x39) goto LAB_005655c4;
            *pbVar13 = 0x30;
            pbVar18 = *(byte **)(param_4 + 0x58);
          }
          pbVar13 = pbVar13 + -1;
        } while (pbVar18 <= pbVar13);
        goto LAB_005657f0;
      }
      uVar23 = 0;
      param_3 = param_3 + -(long)pbVar13;
    }
    for (; param_3 != (byte *)0x0; param_3 = param_3 + -1) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_1;
      uVar23 = SUB168(auVar10 * ZEXT816(10),8) + uVar23 * 10;
      bVar4 = (byte)(uVar23 >> (uVar17 & 0x3f));
      if ((uVar5 & 0x40) == 0) {
        bVar4 = (byte)(uVar23 * 2 << ((ulong)~uVar5 & 0x3f)) |
                (byte)(param_1 * 10 >> (uVar17 & 0x3f));
      }
      uVar23 = uVar23 & uVar22;
      param_1 = param_1 * 10 & uVar26;
      pcVar29 = *(char **)(param_4 + 0x60);
      *(char **)(param_4 + 0x60) = pcVar29 + 1;
      *pcVar29 = bVar4 + 0x30;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = param_1;
    uVar23 = SUB168(auVar11 * ZEXT816(10),8) + uVar23 * 10;
    bVar4 = (byte)(uVar23 >> (uVar17 & 0x3f));
    if ((uVar5 & 0x40) == 0) {
      bVar4 = (byte)(uVar23 * 2 << ((ulong)~uVar5 & 0x3f)) | (byte)(param_1 * 10 >> (uVar17 & 0x3f))
      ;
    }
    if ((char)bVar4 < '\x06') {
      if (bVar4 != 5) {
        return 1;
      }
      pbVar15 = *(byte **)(param_4 + 0x60);
      if ((param_1 * 10 & uVar26) == 0 && (uVar23 & uVar22) == 0) {
        bVar4 = pbVar15[-1];
        if (bVar4 == 0x2e) {
          bVar4 = pbVar15[-2];
        }
        if ((bVar4 & 0x81) != 1) {
          return 1;
        }
      }
    }
    else {
      pbVar15 = *(byte **)(param_4 + 0x60);
    }
    pbVar13 = pbVar15 + -1;
    pbVar18 = *(byte **)(param_4 + 0x58);
    if (pbVar18 <= pbVar13) {
      do {
        bVar4 = *pbVar13;
        if (bVar4 != 0x2e) {
          if (bVar4 != 0x39) goto LAB_005655c4;
          *pbVar13 = 0x30;
          pbVar18 = *(byte **)(param_4 + 0x58);
        }
        pbVar13 = pbVar13 + -1;
      } while (pbVar18 <= pbVar13);
LAB_005657f0:
      pbVar15 = pbVar13 + 1;
    }
  }
  else if (param_2 < 0xc) {
    param_1 = param_1 << ((ulong)param_2 & 0xf);
    if (param_1 == 0) {
      *param_5 = -1;
      pbVar18 = (byte *)0xffffffffffffffff;
      lVar28 = -1 - (long)param_3;
      pbVar15 = pbVar13 + -lVar28;
      *(byte **)(param_4 + 0x60) = pbVar15;
      bVar4 = *pbVar15;
    }
    else {
      do {
        lVar28 = *(long *)(param_4 + 0x58);
        *(long *)(param_4 + 0x58) = lVar28 + -1;
        *(byte *)(lVar28 + -1) = (char)param_1 + (char)(param_1 / 10) * -10 | 0x30;
        bVar12 = 9 < param_1;
        param_1 = param_1 / 10;
      } while (bVar12);
      puVar19 = *(undefined1 **)(param_4 + 0x58);
      lVar28 = *(long *)(param_4 + 0x60);
      uVar2 = *puVar19;
      *(undefined1 **)(param_4 + 0x58) = puVar19 + -1;
      puVar19[-1] = uVar2;
      *(undefined1 *)(*(long *)(param_4 + 0x58) + 1) = 0x2e;
      pbVar18 = (byte *)(~(ulong)puVar19 + lVar28);
      *param_5 = (int)pbVar18;
      lVar28 = (long)param_3 - (long)pbVar18;
      if (pbVar18 <= param_3) {
        if (lVar28 == 0) {
          return 1;
        }
        do {
          puVar19 = *(undefined1 **)(param_4 + 0x60);
          *(undefined1 **)(param_4 + 0x60) = puVar19 + 1;
          *puVar19 = 0x30;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        return 1;
      }
      pbVar13 = *(byte **)(param_4 + 0x60);
      lVar28 = (long)pbVar18 - (long)param_3;
      pbVar15 = pbVar13 + -lVar28;
      *(byte **)(param_4 + 0x60) = pbVar15;
      bVar4 = *pbVar15;
    }
    if ((char)bVar4 < '6') {
      if (bVar4 != 0x35) {
        return 1;
      }
      if (lVar28 != 1) {
        pbVar24 = pbVar15 + 1;
        uVar5 = ~((int)param_3 - (int)pbVar18);
        uVar22 = (ulong)uVar5 & 3;
        pbVar25 = pbVar24;
        if ((uVar5 & 3) != 0) {
          do {
            pbVar24 = pbVar25 + 1;
            if (*pbVar25 != 0x30) goto LAB_00565254;
            uVar22 = uVar22 - 1;
            pbVar25 = pbVar24;
          } while (uVar22 != 0);
        }
        if ((byte *)((long)&MACH_HEADER.magic + 2) < pbVar18 + (~(ulong)param_3 - 1)) {
          do {
            if (((*pbVar24 != 0x30) || (pbVar24[1] != 0x30)) ||
               ((pbVar24[2] != 0x30 || (pbVar24[3] != 0x30)))) goto LAB_00565254;
            pbVar24 = pbVar24 + 4;
          } while (pbVar24 != pbVar13);
        }
      }
      bVar4 = pbVar15[-1];
      if (bVar4 == 0x2e) {
        bVar4 = pbVar15[-2];
      }
      if ((bVar4 & 0x81) != 1) {
        return 1;
      }
    }
LAB_00565254:
    pbVar13 = pbVar15 + -1;
    pbVar18 = *(byte **)(param_4 + 0x58);
    if (pbVar18 <= pbVar13) {
      do {
        bVar4 = *pbVar13;
        if (bVar4 != 0x2e) {
          if (bVar4 != 0x39) goto LAB_005655c4;
          *pbVar13 = 0x30;
          pbVar18 = *(byte **)(param_4 + 0x58);
        }
        pbVar13 = pbVar13 + -1;
      } while (pbVar18 <= pbVar13);
      goto LAB_005657f0;
    }
  }
  else {
    if (0x4b < param_2) {
      return 0;
    }
    uVar17 = param_1 << ((ulong)param_2 & 0x3f);
    bVar12 = (param_2 & 0x40) == 0;
    uVar22 = uVar17;
    if (bVar12) {
      uVar22 = (param_1 >> 1) >> ((ulong)~param_2 & 0x3f);
    }
    uVar23 = 0;
    if (bVar12) {
      uVar23 = uVar17;
    }
    if (uVar23 == 0 && uVar22 == 0) {
      *param_5 = -1;
      pbVar18 = (byte *)0xffffffffffffffff;
      lVar28 = -1 - (long)param_3;
      pbVar15 = pbVar13 + -lVar28;
      *(byte **)(param_4 + 0x60) = pbVar15;
      bVar4 = *pbVar15;
    }
    else {
      do {
        uVar26 = uVar23 >> 1 | uVar22 << 0x3f;
        uVar27 = uVar22 >> 1;
        uVar17 = uVar26 + uVar27;
        if (CARRY8(uVar26,uVar27)) {
          uVar17 = uVar17 + 1;
        }
        uVar7 = uVar26 - uVar17 % 5;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar7;
        bVar12 = uVar23 < 10;
        uVar6 = uVar22 + !bVar12;
        uVar22 = SUB168(auVar8 * ZEXT816(0xcccccccccccccccd),8) + uVar7 * -0x3333333333333334 +
                 (uVar27 - (uVar26 < uVar17 % 5)) * -0x3333333333333333;
        lVar28 = *(long *)(param_4 + 0x58);
        *(long *)(param_4 + 0x58) = lVar28 + -1;
        *(byte *)(lVar28 + -1) = (char)uVar23 + (char)(uVar7 * -0x3333333333333333) * -10 | 0x30;
        uVar23 = uVar7 * -0x3333333333333333;
      } while (!CARRY8(~uVar6,(ulong)bVar12));
      puVar19 = *(undefined1 **)(param_4 + 0x58);
      lVar28 = *(long *)(param_4 + 0x60);
      uVar2 = *puVar19;
      *(undefined1 **)(param_4 + 0x58) = puVar19 + -1;
      puVar19[-1] = uVar2;
      *(undefined1 *)(*(long *)(param_4 + 0x58) + 1) = 0x2e;
      pbVar18 = (byte *)(~(ulong)puVar19 + lVar28);
      *param_5 = (int)pbVar18;
      lVar28 = (long)param_3 - (long)pbVar18;
      if (pbVar18 <= param_3) {
        if (lVar28 == 0) {
          return 1;
        }
        do {
          puVar19 = *(undefined1 **)(param_4 + 0x60);
          *(undefined1 **)(param_4 + 0x60) = puVar19 + 1;
          *puVar19 = 0x30;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        return 1;
      }
      pbVar13 = *(byte **)(param_4 + 0x60);
      lVar28 = (long)pbVar18 - (long)param_3;
      pbVar15 = pbVar13 + -lVar28;
      *(byte **)(param_4 + 0x60) = pbVar15;
      bVar4 = *pbVar15;
    }
    if ((char)bVar4 < '6') {
      if (bVar4 != 0x35) {
        return 1;
      }
      if (lVar28 != 1) {
        pbVar24 = pbVar15 + 1;
        uVar5 = ~((int)param_3 - (int)pbVar18);
        uVar22 = (ulong)uVar5 & 3;
        pbVar25 = pbVar24;
        if ((uVar5 & 3) != 0) {
          do {
            pbVar24 = pbVar25 + 1;
            if (*pbVar25 != 0x30) goto LAB_00565580;
            uVar22 = uVar22 - 1;
            pbVar25 = pbVar24;
          } while (uVar22 != 0);
        }
        if ((byte *)((long)&MACH_HEADER.magic + 2) < pbVar18 + (~(ulong)param_3 - 1)) {
          do {
            if (((*pbVar24 != 0x30) || (pbVar24[1] != 0x30)) ||
               ((pbVar24[2] != 0x30 || (pbVar24[3] != 0x30)))) goto LAB_00565580;
            pbVar24 = pbVar24 + 4;
          } while (pbVar24 != pbVar13);
        }
      }
      bVar4 = pbVar15[-1];
      if (bVar4 == 0x2e) {
        bVar4 = pbVar15[-2];
      }
      if ((bVar4 & 0x81) != 1) {
        return 1;
      }
    }
LAB_00565580:
    pbVar13 = pbVar15 + -1;
    pbVar18 = *(byte **)(param_4 + 0x58);
    if (pbVar18 <= pbVar13) {
      do {
        bVar4 = *pbVar13;
        if (bVar4 != 0x2e) {
          if (bVar4 != 0x39) {
LAB_005655c4:
            *pbVar13 = bVar4 + 1;
            return 1;
          }
          *pbVar13 = 0x30;
          pbVar18 = *(byte **)(param_4 + 0x58);
        }
        pbVar13 = pbVar13 + -1;
      } while (pbVar18 <= pbVar13);
      goto LAB_005657f0;
    }
  }
LAB_005657f4:
  *pbVar13 = 0x31;
  *(byte **)(param_4 + 0x58) = pbVar13;
  bVar4 = *pbVar15;
  *pbVar15 = pbVar15[1];
  pbVar15[1] = bVar4;
LAB_00565810:
  *param_5 = *param_5 + 1;
  *(long *)(param_4 + 0x60) = *(long *)(param_4 + 0x60) + -1;
  return 1;
}



/* Entry: 00565924; end: 00565ba7;  */

char * FUN_00565924(undefined8 param_1,byte *param_2,undefined8 *param_3,undefined8 param_4,
                   int *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  byte *pbVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *unaff_x23;
  ulong uVar17;
  byte bStack_109;
  char *pcStack_108;
  undefined8 uStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char *pcStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  char cStack_88;
  byte abStack_87 [31];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(uint *)(param_2 + 4);
  uVar2 = *(uint *)(param_2 + 8);
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar17 = (ulong)uVar2;
  cStack_88 = '%';
  FUN_00561b9c(&pcStack_a0,param_2[1]);
  pcVar16 = (char *)(long)uStack_90._7_1_;
  if ((long)pcVar16 < 0) {
    _memcpy(abStack_87,pcStack_a0,pcStack_98);
    __ZdlPv(pcStack_a0);
    pcVar16 = pcStack_98;
    unaff_x23 = pcStack_a0;
  }
  else {
    _memcpy(abStack_87,&pcStack_a0,pcVar16);
  }
  pbVar7 = abStack_87 + (long)pcVar16;
  (abStack_87 + 2)[(long)pcVar16] = 0x2a;
  pbVar7[0] = 0x2a;
  pbVar7[1] = 0x2e;
  if ((ulong)*param_2 < 0x13) {
    bVar11 = (&UNK_00811328)[*param_2];
  }
  else {
    bVar11 = 0;
  }
  (abStack_87 + 3)[(long)pcVar16] = bVar11;
  (abStack_87 + 4)[(long)pcVar16] = 0;
  pcVar14 = section_000001f8.segname;
  __Znwm();
  pcVar15 = (char *)(ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  uStack_90 = 0x8000000000000208;
  pcStack_98 = section_000001f8.sectname + 8;
  pcStack_a0 = pcVar14;
  _bzero();
  pcVar10 = &cStack_88;
  pcVar9 = section_000001f8.sectname + 8;
  pcVar12 = pcVar14;
  pcStack_c0 = pcVar15;
  uStack_b8 = uVar17;
  uStack_b0 = param_1;
  _snprintf();
  if (-1 < (int)pcVar12) {
    pcVar16 = (char *)&pcStack_a0;
    do {
      pcVar14 = (char *)((ulong)pcVar12 & 0xffffffff);
      if (uStack_90._7_1_ < 0) {
        pcVar13 = pcStack_98;
        pcVar6 = pcStack_a0;
        if (pcVar14 < pcStack_98) goto joined_r0x00565b0c;
      }
      else {
        if ((uint)pcVar12 < (uint)(int)uStack_90._7_1_) {
          pcVar6 = (char *)&pcStack_a0;
joined_r0x00565b0c:
          if ((uint)pcVar12 != 0) {
            pcVar12 = (char *)param_3[3];
            param_3[2] = pcVar14 + param_3[2];
            pcVar9 = pcVar6;
            pcVar10 = pcVar14;
            if (pcVar14 < (byte *)((long)param_3 + (0x420 - (long)pcVar12))) {
              _memcpy();
              param_3[3] = pcVar14 + param_3[3];
            }
            else {
              pcVar16 = (char *)(param_3 + 4);
              (*(code *)param_3[1])(*param_3,pcVar16,(long)pcVar12 - (long)pcVar16);
              param_3[3] = pcVar16;
              pcVar12 = (char *)*param_3;
              (*(code *)param_3[1])();
            }
          }
          pcVar13 = (char *)((long)&MACH_HEADER.magic + 1);
          pcVar5 = pcStack_a0;
          pcVar15 = pcVar6;
          goto joined_r0x00565b78;
        }
        pcVar13 = (char *)(long)(int)uStack_90._7_1_;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc
                (&pcStack_a0,pcVar14 + (1 - (long)pcVar13),0);
      pcVar9 = pcStack_98;
      pcVar12 = pcStack_a0;
      if (-1 < (long)uStack_90) {
        pcVar9 = (char *)(uStack_90 >> 0x38);
        pcVar12 = pcVar16;
      }
      pcVar10 = &cStack_88;
      pcStack_c0 = pcVar15;
      uStack_b8 = uVar17;
      uStack_b0 = param_1;
      _snprintf();
    } while (-1 < (int)pcVar12);
  }
  pcVar13 = (char *)0x0;
  pcVar5 = pcStack_a0;
joined_r0x00565b78:
  pcStack_a0 = pcVar5;
  if ((long)uStack_90 < 0) {
    __ZdlPv();
    pcVar12 = pcVar5;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return pcVar13;
  }
  ___stack_chk_fail();
  if ((long)uStack_90 < 0) {
    __ZdlPv(pcStack_a0);
  }
  pcVar6 = pcVar12;
  __Unwind_Resume();
  pcStack_f8 = unaff_x23;
  pcStack_f0 = pcVar16;
  pcStack_e8 = pcVar15;
  pcStack_e0 = pcVar14;
  pcStack_d8 = pcVar12;
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = FUN_00565ba8;
  iVar3 = *param_5;
  uStack_100 = uVar17;
  if (iVar3 < 0) {
LAB_00565ca4:
    if (pcVar6 == pcVar9) {
      return (char *)0x0;
    }
    pcStack_f8 = pcVar6 + 1;
    if ((byte)*pcVar6 - 0x3a < 0xfffffff7) {
      return (char *)0x0;
    }
    lVar8 = (long)&uStack_100 + 7;
    uStack_100._7_1_ = *pcVar6;
    FUN_005661f0(lVar8,&pcStack_f8,pcVar9);
    *(int *)pcVar10 = (int)lVar8;
    if (uStack_100._7_1_ != 0x24) {
      return (char *)0x0;
    }
    if (pcStack_f8 == pcVar9) {
      return (char *)0x0;
    }
    pcVar16 = pcStack_f8 + 1;
    uStack_100._7_1_ = *pcStack_f8;
    pcStack_f8 = pcVar16;
    uVar17 = (ulong)uStack_100._7_1_;
    if ((char)uStack_100._7_1_ < 'A') {
      if ((char)uStack_100._7_1_ < '1') {
        do {
          if (((&UNK_008111e1)[uVar17] & 0xe0) != 0xc0) {
            pcStack_f8 = pcVar16;
            uStack_100._7_1_ = (byte)uVar17;
            if ('/' < (char)uStack_100._7_1_) goto LAB_00565fac;
            if (uVar17 != 0x2a) goto LAB_00565fd4;
            pcVar10[0xc] = pcVar10[0xc] | 0x20;
            if (pcVar16 == pcVar9) {
              return (char *)0x0;
            }
            pcStack_f8 = pcVar16 + 1;
            uStack_100._7_1_ = *pcVar16;
            if (uStack_100._7_1_ - 0x3a < 0xfffffff7) {
              return (char *)0x0;
            }
            lVar8 = (long)&uStack_100 + 7;
            FUN_005661f0(lVar8,&pcStack_f8,pcVar9);
            pcVar16 = pcStack_f8;
            *(uint *)(pcVar10 + 4) = ~(uint)lVar8;
            if (uStack_100._7_1_ != 0x24) {
              return (char *)0x0;
            }
            if (pcStack_f8 == pcVar9) {
              return (char *)0x0;
            }
            pcStack_f8 = pcStack_f8 + 1;
            goto LAB_00565fd0;
          }
          pcVar10[0xc] = pcVar10[0xc] | (&UNK_008111e1)[uVar17] & 0x1f;
          if (pcVar16 == pcVar9) {
            return (char *)0x0;
          }
          pcStack_f8 = pcVar16 + 1;
          uStack_100._7_1_ = *pcVar16;
          uVar17 = (ulong)uStack_100._7_1_;
          pcVar16 = pcStack_f8;
        } while ((char)uStack_100._7_1_ < '1');
      }
      if (uVar17 < 0x3a) {
LAB_00565fac:
        pcVar16 = (char *)((long)&uStack_100 + 7);
        lVar8 = (long)&uStack_100 + 7;
        FUN_005661f0(lVar8,&pcStack_f8,pcVar9);
        pcVar10[0xc] = pcVar10[0xc] | 0x20;
        *(int *)(pcVar10 + 4) = (int)lVar8;
LAB_00565fd0:
        uVar17 = (ulong)(byte)*pcVar16;
LAB_00565fd4:
        pcVar16 = pcStack_f8;
        if (uVar17 == 0x2e) {
          pcVar10[0xc] = pcVar10[0xc] | 0x20;
          if (pcStack_f8 == pcVar9) {
            return (char *)0x0;
          }
          pcVar12 = pcStack_f8 + 1;
          uStack_100._7_1_ = *pcStack_f8;
          uVar17 = (ulong)uStack_100._7_1_;
          pcStack_f8 = pcVar12;
          if (uVar17 - 0x30 < 10) {
            lVar8 = (long)&uStack_100 + 7;
            FUN_005661f0(lVar8,&pcStack_f8,pcVar9);
            *(int *)(pcVar10 + 8) = (int)lVar8;
            uVar17 = (ulong)uStack_100._7_1_;
          }
          else if (uVar17 == 0x2a) {
            if (pcVar12 == pcVar9) {
              return (char *)0x0;
            }
            pcStack_f8 = pcVar16 + 2;
            uStack_100._7_1_ = pcVar16[1];
            if (uStack_100._7_1_ - 0x3a < 0xfffffff7) {
              return (char *)0x0;
            }
            lVar8 = (long)&uStack_100 + 7;
            FUN_005661f0(lVar8,&pcStack_f8,pcVar9);
            *(uint *)(pcVar10 + 8) = ~(uint)lVar8;
            if (uStack_100._7_1_ != 0x24) {
              return (char *)0x0;
            }
            if (pcStack_f8 == pcVar9) {
              return (char *)0x0;
            }
            uVar17 = (ulong)(byte)*pcStack_f8;
            pcStack_f8 = pcStack_f8 + 1;
          }
          else {
            pcVar10[8] = '\0';
            pcVar10[9] = '\0';
            pcVar10[10] = '\0';
            pcVar10[0xb] = '\0';
          }
        }
      }
    }
    bVar11 = (&UNK_008111e1)[uVar17];
    if ((uVar17 == 0x76) && (pcVar10[0xc] != 0)) {
      return (char *)0x0;
    }
    if (-1 < (char)bVar11) goto LAB_0056612c;
    if (0xbf < bVar11) {
      return (char *)0x0;
    }
    if (pcStack_f8 == pcVar9) {
      return (char *)0x0;
    }
    pcVar16 = pcStack_f8 + 1;
    bVar4 = *pcStack_f8;
    if ((bVar4 == 0x68) && ((bVar11 & 0x3f) == 0)) {
      pcVar10[0xd] = 1;
joined_r0x005661b4:
      if (pcVar16 == pcVar9) {
        return (char *)0x0;
      }
      pcVar16 = pcStack_f8 + 2;
      bVar4 = pcStack_f8[1];
    }
    else {
      if ((bVar4 == 0x6c) && ((bVar11 & 0x3f) == 2)) {
        pcVar10[0xd] = 3;
        goto joined_r0x005661b4;
      }
      pcVar10[0xd] = bVar11 & 0x3f;
    }
    if (bVar4 == 0x76) {
      return (char *)0x0;
    }
    bVar11 = (&UNK_008111e1)[(uint)bVar4];
    pcStack_f8 = pcVar16;
    if ((char)bVar11 < '\0') {
      return (char *)0x0;
    }
LAB_0056612c:
    pcVar10[0xe] = bVar11;
    return pcStack_f8;
  }
  if (pcVar6 == pcVar9) {
    return (char *)0x0;
  }
  pcStack_108 = pcVar6 + 1;
  bStack_109 = *pcVar6;
  uVar17 = (ulong)bStack_109;
  if ((char)bStack_109 < 'A') {
    while ((char)bStack_109 < '1') {
      if (((&UNK_008111e1)[uVar17] & 0xe0) != 0xc0) {
        bStack_109 = (byte)uVar17;
        if ('/' < (char)bStack_109) goto LAB_00565c60;
        if (uVar17 == 0x2a) {
          pcVar10[0xc] = pcVar10[0xc] | 0x20;
          if (pcStack_108 == pcVar9) {
            return (char *)0x0;
          }
          uVar17 = (ulong)(byte)*pcStack_108;
          *param_5 = iVar3 + 1;
          *(int *)(pcVar10 + 4) = -2 - iVar3;
          pcStack_108 = pcStack_108 + 1;
        }
        goto LAB_00565d14;
      }
      pcVar10[0xc] = pcVar10[0xc] | (&UNK_008111e1)[uVar17] & 0x1f;
      if (pcStack_108 == pcVar9) {
        return (char *)0x0;
      }
      bStack_109 = *pcStack_108;
      uVar17 = (ulong)bStack_109;
      pcStack_108 = pcStack_108 + 1;
    }
    if (uVar17 < 0x3a) {
LAB_00565c60:
      pbVar7 = &bStack_109;
      FUN_005661f0(pbVar7,&pcStack_108);
      uVar17 = (ulong)bStack_109;
      if (bStack_109 == 0x24) {
        if (iVar3 != 0) {
          return (char *)0x0;
        }
        *param_5 = -1;
        goto LAB_00565ca4;
      }
      pcVar10[0xc] = pcVar10[0xc] | 0x20;
      *(int *)(pcVar10 + 4) = (int)pbVar7;
LAB_00565d14:
      if (uVar17 == 0x2e) {
        pcVar10[0xc] = pcVar10[0xc] | 0x20;
        if (pcStack_108 == pcVar9) {
          return (char *)0x0;
        }
        pcVar16 = pcStack_108 + 1;
        bStack_109 = *pcStack_108;
        uVar17 = (ulong)bStack_109;
        if (uVar17 - 0x30 < 10) {
          pbVar7 = &bStack_109;
          pcStack_108 = pcVar16;
          FUN_005661f0(pbVar7,&pcStack_108,pcVar9);
          *(int *)(pcVar10 + 8) = (int)pbVar7;
          uVar17 = (ulong)bStack_109;
        }
        else if (uVar17 == 0x2a) {
          if (pcVar16 == pcVar9) {
            return (char *)0x0;
          }
          uVar17 = (ulong)(byte)pcStack_108[1];
          iVar3 = *param_5;
          *param_5 = iVar3 + 1;
          *(int *)(pcVar10 + 8) = -2 - iVar3;
          pcStack_108 = pcStack_108 + 2;
        }
        else {
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcStack_108 = pcVar16;
        }
      }
    }
  }
  bVar11 = (&UNK_008111e1)[uVar17];
  if ((uVar17 == 0x76) && (pcVar10[0xc] != 0)) {
    return (char *)0x0;
  }
  pcVar16 = pcStack_108;
  if (-1 < (char)bVar11) goto LAB_00565de8;
  if (0xbf < bVar11) {
    return (char *)0x0;
  }
  if (pcStack_108 == pcVar9) {
    return (char *)0x0;
  }
  pcVar16 = pcStack_108 + 1;
  bVar4 = *pcStack_108;
  if (bVar4 == 0x68 && (bVar11 & 0x3f) == 0) {
    pcVar10[0xd] = 1;
joined_r0x00565e70:
    if (pcVar16 == pcVar9) {
      return (char *)0x0;
    }
    pcVar16 = pcStack_108 + 2;
    bVar4 = pcStack_108[1];
  }
  else {
    if ((bVar4 == 0x6c) && ((bVar11 & 0x3f) == 2)) {
      pcVar10[0xd] = 3;
      goto joined_r0x00565e70;
    }
    pcVar10[0xd] = bVar11 & 0x3f;
  }
  if ((bVar4 == 0x76) || (bVar11 = (&UNK_008111e1)[(uint)bVar4], (char)bVar11 < '\0')) {
    return (char *)0x0;
  }
LAB_00565de8:
  pcVar10[0xe] = bVar11;
  iVar3 = *param_5;
  *param_5 = iVar3 + 1;
  *(int *)pcVar10 = iVar3 + 1;
  return pcVar16;
}



/* Entry: 00565ba8; end: 00565eb7;  */

byte * FUN_00565ba8(byte *param_1,byte *param_2,int *param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  byte bVar7;
  byte bStack_49;
  byte *pbStack_48;
  
  iVar1 = *param_4;
  if (iVar1 < 0) {
LAB_00565ca4:
    if (param_1 == param_2) {
      return (byte *)0x0;
    }
    bVar7 = *param_1;
    if (bVar7 - 0x3a < 0xfffffff7) {
      return (byte *)0x0;
    }
    puVar4 = &stack0xffffffffffffffc7;
    FUN_005661f0(puVar4,&stack0xffffffffffffffc8,param_2);
    *param_3 = (int)puVar4;
    if (bVar7 != 0x24) {
      return (byte *)0x0;
    }
    if (param_1 + 1 == param_2) {
      return (byte *)0x0;
    }
    pbVar3 = param_1 + 2;
    bVar7 = param_1[1];
    uVar5 = (ulong)bVar7;
    if ((char)bVar7 < 'A') {
      while ((char)bVar7 < '1') {
        if (((&UNK_008111e1)[uVar5] & 0xe0) != 0xc0) {
          if ('/' < (char)uVar5) goto LAB_00565fac;
          pbVar6 = pbVar3;
          if (uVar5 != 0x2a) goto LAB_00565fd4;
          *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
          if (pbVar3 == param_2) {
            return (byte *)0x0;
          }
          pbVar6 = pbVar3 + 1;
          bVar7 = *pbVar3;
          if (bVar7 - 0x3a < 0xfffffff7) {
            return (byte *)0x0;
          }
          puVar4 = &stack0xffffffffffffffc7;
          FUN_005661f0(puVar4,&stack0xffffffffffffffc8,param_2);
          param_3[1] = ~(uint)puVar4;
          if (bVar7 != 0x24) {
            return (byte *)0x0;
          }
          if (pbVar6 == param_2) {
            return (byte *)0x0;
          }
          pbVar3 = pbVar3 + 2;
          goto LAB_00565fd0;
        }
        *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | (&UNK_008111e1)[uVar5] & 0x1f;
        if (pbVar3 == param_2) {
          return (byte *)0x0;
        }
        bVar7 = *pbVar3;
        uVar5 = (ulong)bVar7;
        pbVar3 = pbVar3 + 1;
      }
      if (uVar5 < 0x3a) {
LAB_00565fac:
        pbVar6 = &stack0xffffffffffffffc7;
        puVar4 = &stack0xffffffffffffffc7;
        FUN_005661f0(puVar4,&stack0xffffffffffffffc8,param_2);
        *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
        param_3[1] = (int)puVar4;
LAB_00565fd0:
        uVar5 = (ulong)*pbVar6;
        pbVar6 = pbVar3;
LAB_00565fd4:
        pbVar3 = pbVar6;
        if (uVar5 == 0x2e) {
          *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
          if (pbVar6 == param_2) {
            return (byte *)0x0;
          }
          pbVar3 = pbVar6 + 1;
          bVar7 = *pbVar6;
          uVar5 = (ulong)bVar7;
          if (uVar5 - 0x30 < 10) {
            puVar4 = &stack0xffffffffffffffc7;
            FUN_005661f0(puVar4,&stack0xffffffffffffffc8,param_2);
            param_3[2] = (int)puVar4;
            uVar5 = (ulong)bVar7;
          }
          else if (uVar5 == 0x2a) {
            if (pbVar3 == param_2) {
              return (byte *)0x0;
            }
            bVar7 = pbVar6[1];
            if (bVar7 - 0x3a < 0xfffffff7) {
              return (byte *)0x0;
            }
            puVar4 = &stack0xffffffffffffffc7;
            FUN_005661f0(puVar4,&stack0xffffffffffffffc8,param_2);
            param_3[2] = ~(uint)puVar4;
            if (bVar7 != 0x24) {
              return (byte *)0x0;
            }
            if (pbVar6 + 2 == param_2) {
              return (byte *)0x0;
            }
            pbVar3 = pbVar6 + 3;
            uVar5 = (ulong)pbVar6[2];
          }
          else {
            param_3[2] = 0;
          }
        }
      }
    }
    bVar7 = (&UNK_008111e1)[uVar5];
    if ((uVar5 == 0x76) && ((char)param_3[3] != '\0')) {
      return (byte *)0x0;
    }
    if (-1 < (char)bVar7) goto LAB_0056612c;
    if (0xbf < bVar7) {
      return (byte *)0x0;
    }
    if (pbVar3 == param_2) {
      return (byte *)0x0;
    }
    pbVar6 = pbVar3 + 1;
    bVar2 = *pbVar3;
    if ((bVar2 == 0x68) && ((bVar7 & 0x3f) == 0)) {
      *(undefined1 *)((long)param_3 + 0xd) = 1;
joined_r0x005661b4:
      if (pbVar6 == param_2) {
        return (byte *)0x0;
      }
      pbVar6 = pbVar3 + 2;
      bVar2 = pbVar3[1];
    }
    else {
      if ((bVar2 == 0x6c) && ((bVar7 & 0x3f) == 2)) {
        *(undefined1 *)((long)param_3 + 0xd) = 3;
        goto joined_r0x005661b4;
      }
      *(byte *)((long)param_3 + 0xd) = bVar7 & 0x3f;
    }
    if (bVar2 == 0x76) {
      return (byte *)0x0;
    }
    bVar7 = (&UNK_008111e1)[(uint)bVar2];
    pbVar3 = pbVar6;
    if ((char)bVar7 < '\0') {
      return (byte *)0x0;
    }
LAB_0056612c:
    *(byte *)((long)param_3 + 0xe) = bVar7;
    return pbVar3;
  }
  if (param_1 == param_2) {
    return (byte *)0x0;
  }
  pbStack_48 = param_1 + 1;
  bStack_49 = *param_1;
  uVar5 = (ulong)bStack_49;
  if ((char)bStack_49 < 'A') {
    while ((char)bStack_49 < '1') {
      if (((&UNK_008111e1)[uVar5] & 0xe0) != 0xc0) {
        bStack_49 = (byte)uVar5;
        if ('/' < (char)bStack_49) goto LAB_00565c60;
        if (uVar5 == 0x2a) {
          *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
          if (pbStack_48 == param_2) {
            return (byte *)0x0;
          }
          uVar5 = (ulong)*pbStack_48;
          *param_4 = iVar1 + 1;
          param_3[1] = -2 - iVar1;
          pbStack_48 = pbStack_48 + 1;
        }
        goto LAB_00565d14;
      }
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | (&UNK_008111e1)[uVar5] & 0x1f;
      if (pbStack_48 == param_2) {
        return (byte *)0x0;
      }
      bStack_49 = *pbStack_48;
      uVar5 = (ulong)bStack_49;
      pbStack_48 = pbStack_48 + 1;
    }
    if (uVar5 < 0x3a) {
LAB_00565c60:
      pbVar3 = &bStack_49;
      FUN_005661f0(pbVar3,&pbStack_48);
      uVar5 = (ulong)bStack_49;
      if (bStack_49 == 0x24) {
        if (iVar1 != 0) {
          return (byte *)0x0;
        }
        *param_4 = -1;
        goto LAB_00565ca4;
      }
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
      param_3[1] = (int)pbVar3;
LAB_00565d14:
      if (uVar5 == 0x2e) {
        *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
        if (pbStack_48 == param_2) {
          return (byte *)0x0;
        }
        pbVar3 = pbStack_48 + 1;
        bStack_49 = *pbStack_48;
        uVar5 = (ulong)bStack_49;
        if (uVar5 - 0x30 < 10) {
          pbVar6 = &bStack_49;
          pbStack_48 = pbVar3;
          FUN_005661f0(pbVar6,&pbStack_48,param_2);
          param_3[2] = (int)pbVar6;
          uVar5 = (ulong)bStack_49;
        }
        else if (uVar5 == 0x2a) {
          if (pbVar3 == param_2) {
            return (byte *)0x0;
          }
          uVar5 = (ulong)pbStack_48[1];
          iVar1 = *param_4;
          *param_4 = iVar1 + 1;
          param_3[2] = -2 - iVar1;
          pbStack_48 = pbStack_48 + 2;
        }
        else {
          param_3[2] = 0;
          pbStack_48 = pbVar3;
        }
      }
    }
  }
  bVar7 = (&UNK_008111e1)[uVar5];
  if ((uVar5 == 0x76) && ((char)param_3[3] != '\0')) {
    return (byte *)0x0;
  }
  pbVar3 = pbStack_48;
  if (-1 < (char)bVar7) goto LAB_00565de8;
  if (0xbf < bVar7) {
    return (byte *)0x0;
  }
  if (pbStack_48 == param_2) {
    return (byte *)0x0;
  }
  pbVar3 = pbStack_48 + 1;
  bVar2 = *pbStack_48;
  if (bVar2 == 0x68 && (bVar7 & 0x3f) == 0) {
    *(undefined1 *)((long)param_3 + 0xd) = 1;
joined_r0x00565e70:
    if (pbVar3 == param_2) {
      return (byte *)0x0;
    }
    pbVar3 = pbStack_48 + 2;
    bVar2 = pbStack_48[1];
  }
  else {
    if ((bVar2 == 0x6c) && ((bVar7 & 0x3f) == 2)) {
      *(undefined1 *)((long)param_3 + 0xd) = 3;
      goto joined_r0x00565e70;
    }
    *(byte *)((long)param_3 + 0xd) = bVar7 & 0x3f;
  }
  if ((bVar2 == 0x76) || (bVar7 = (&UNK_008111e1)[(uint)bVar2], (char)bVar7 < '\0')) {
    return (byte *)0x0;
  }
LAB_00565de8:
  *(byte *)((long)param_3 + 0xe) = bVar7;
  iVar1 = *param_4;
  *param_4 = iVar1 + 1;
  *param_3 = iVar1 + 1;
  return pbVar3;
}



/* Entry: 00565eb8; end: 005661ef;  */

byte * FUN_00565eb8(byte *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  byte bStack_39;
  byte *pbStack_38;
  
  if (param_1 == param_2) {
    return (byte *)0x0;
  }
  pbStack_38 = param_1 + 1;
  bStack_39 = *param_1;
  if (bStack_39 - 0x3a < 0xfffffff7) {
    return (byte *)0x0;
  }
  pbVar4 = &bStack_39;
  FUN_005661f0(pbVar4,&pbStack_38,param_2);
  *param_3 = (int)pbVar4;
  if (bStack_39 != 0x24) {
    return (byte *)0x0;
  }
  if (pbStack_38 == param_2) {
    return (byte *)0x0;
  }
  pbVar4 = pbStack_38 + 1;
  bStack_39 = *pbStack_38;
  uVar3 = (ulong)bStack_39;
  pbStack_38 = pbVar4;
  if ((char)bStack_39 < 'A') {
    while (pbStack_38 = pbVar4, (char)bStack_39 < '1') {
      if (((&UNK_008111e1)[uVar3] & 0xe0) != 0xc0) {
        bStack_39 = (byte)uVar3;
        if ('/' < (char)bStack_39) goto LAB_00565fac;
        if (uVar3 != 0x2a) goto LAB_00565fd4;
        *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
        if (pbVar4 == param_2) {
          return (byte *)0x0;
        }
        pbStack_38 = pbVar4 + 1;
        bStack_39 = *pbVar4;
        if (bStack_39 - 0x3a < 0xfffffff7) {
          return (byte *)0x0;
        }
        pbVar2 = &bStack_39;
        FUN_005661f0(pbVar2,&pbStack_38,param_2);
        pbVar4 = pbStack_38;
        param_3[1] = ~(uint)pbVar2;
        if (bStack_39 != 0x24) {
          return (byte *)0x0;
        }
        if (pbStack_38 == param_2) {
          return (byte *)0x0;
        }
        pbStack_38 = pbStack_38 + 1;
        goto LAB_00565fd0;
      }
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | (&UNK_008111e1)[uVar3] & 0x1f;
      if (pbVar4 == param_2) {
        return (byte *)0x0;
      }
      bStack_39 = *pbVar4;
      uVar3 = (ulong)bStack_39;
      pbVar4 = pbVar4 + 1;
    }
    if (uVar3 < 0x3a) {
LAB_00565fac:
      pbVar4 = &bStack_39;
      pbVar2 = &bStack_39;
      FUN_005661f0(pbVar2,&pbStack_38,param_2);
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
      param_3[1] = (int)pbVar2;
LAB_00565fd0:
      uVar3 = (ulong)*pbVar4;
LAB_00565fd4:
      if (uVar3 == 0x2e) {
        *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
        if (pbStack_38 == param_2) {
          return (byte *)0x0;
        }
        pbVar4 = pbStack_38 + 1;
        bStack_39 = *pbStack_38;
        uVar3 = (ulong)bStack_39;
        if (uVar3 - 0x30 < 10) {
          pbVar2 = &bStack_39;
          pbStack_38 = pbVar4;
          FUN_005661f0(pbVar2,&pbStack_38,param_2);
          param_3[2] = (int)pbVar2;
          uVar3 = (ulong)bStack_39;
        }
        else if (uVar3 == 0x2a) {
          if (pbVar4 == param_2) {
            return (byte *)0x0;
          }
          bStack_39 = pbStack_38[1];
          if (bStack_39 - 0x3a < 0xfffffff7) {
            return (byte *)0x0;
          }
          pbVar4 = &bStack_39;
          pbStack_38 = pbStack_38 + 2;
          FUN_005661f0(pbVar4,&pbStack_38,param_2);
          param_3[2] = ~(uint)pbVar4;
          if (bStack_39 != 0x24) {
            return (byte *)0x0;
          }
          if (pbStack_38 == param_2) {
            return (byte *)0x0;
          }
          uVar3 = (ulong)*pbStack_38;
          pbStack_38 = pbStack_38 + 1;
        }
        else {
          param_3[2] = 0;
          pbStack_38 = pbVar4;
        }
      }
    }
  }
  bVar5 = (&UNK_008111e1)[uVar3];
  if ((uVar3 == 0x76) && (*(char *)(param_3 + 3) != '\0')) {
    return (byte *)0x0;
  }
  if (-1 < (char)bVar5) goto LAB_0056612c;
  if (0xbf < bVar5) {
    return (byte *)0x0;
  }
  if (pbStack_38 == param_2) {
    return (byte *)0x0;
  }
  pbVar4 = pbStack_38 + 1;
  bVar1 = *pbStack_38;
  if ((bVar1 == 0x68) && ((bVar5 & 0x3f) == 0)) {
    *(undefined1 *)((long)param_3 + 0xd) = 1;
joined_r0x005661b4:
    if (pbVar4 == param_2) {
      return (byte *)0x0;
    }
    pbVar4 = pbStack_38 + 2;
    bVar1 = pbStack_38[1];
  }
  else {
    if ((bVar1 == 0x6c) && ((bVar5 & 0x3f) == 2)) {
      *(undefined1 *)((long)param_3 + 0xd) = 3;
      goto joined_r0x005661b4;
    }
    *(byte *)((long)param_3 + 0xd) = bVar5 & 0x3f;
  }
  if (bVar1 == 0x76) {
    return (byte *)0x0;
  }
  bVar5 = (&UNK_008111e1)[(uint)bVar1];
  pbStack_38 = pbVar4;
  if ((char)bVar5 < '\0') {
    return (byte *)0x0;
  }
LAB_0056612c:
  *(byte *)((long)param_3 + 0xe) = bVar5;
  return pbStack_38;
}



/* Entry: 005661f0; end: 005663bb;  */

int FUN_005661f0(byte *param_1,long *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = (char)*param_1 + -0x30;
  pbVar3 = (byte *)*param_2;
  if (pbVar3 != param_3) {
    *param_2 = (long)(pbVar3 + 1);
    bVar1 = *pbVar3;
    *param_1 = bVar1;
    if (0xfffffff5 < bVar1 - 0x3a) {
      iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
      pbVar3 = (byte *)*param_2;
      if (pbVar3 != param_3) {
        *param_2 = (long)(pbVar3 + 1);
        bVar1 = *pbVar3;
        *param_1 = bVar1;
        if (0xfffffff5 < bVar1 - 0x3a) {
          iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
          pbVar3 = (byte *)*param_2;
          if (pbVar3 != param_3) {
            *param_2 = (long)(pbVar3 + 1);
            bVar1 = *pbVar3;
            *param_1 = bVar1;
            if (0xfffffff5 < bVar1 - 0x3a) {
              iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
              pbVar3 = (byte *)*param_2;
              if (pbVar3 != param_3) {
                *param_2 = (long)(pbVar3 + 1);
                bVar1 = *pbVar3;
                *param_1 = bVar1;
                if (0xfffffff5 < bVar1 - 0x3a) {
                  iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
                  pbVar3 = (byte *)*param_2;
                  if (pbVar3 != param_3) {
                    *param_2 = (long)(pbVar3 + 1);
                    bVar1 = *pbVar3;
                    *param_1 = bVar1;
                    if (0xfffffff5 < bVar1 - 0x3a) {
                      iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
                      pbVar3 = (byte *)*param_2;
                      if (pbVar3 != param_3) {
                        *param_2 = (long)(pbVar3 + 1);
                        bVar1 = *pbVar3;
                        *param_1 = bVar1;
                        if (0xfffffff5 < bVar1 - 0x3a) {
                          iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
                          pbVar3 = (byte *)*param_2;
                          if (pbVar3 != param_3) {
                            *param_2 = (long)(pbVar3 + 1);
                            bVar1 = *pbVar3;
                            *param_1 = bVar1;
                            if (0xfffffff5 < bVar1 - 0x3a) {
                              iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
                              pbVar3 = (byte *)*param_2;
                              if (pbVar3 != param_3) {
                                *param_2 = (long)(pbVar3 + 1);
                                bVar1 = *pbVar3;
                                *param_1 = bVar1;
                                if (0xfffffff5 < bVar1 - 0x3a) {
                                  iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
                                  pbVar3 = (byte *)*param_2;
                                  if (pbVar3 != param_3) {
                                    *param_2 = (long)(pbVar3 + 1);
                                    *param_1 = *pbVar3;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* Entry: 005663bc; end: 00566587;  */

undefined8 * FUN_005663bc(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  
  uVar8 = uRam0000000000b694a0;
  if ((uRam0000000000b694a0 & 1) == 0) {
    uVar9 = uRam0000000000b694a0 | 1;
    do {
      uVar4 = uRam0000000000b694a0;
      if (uRam0000000000b694a0 != uVar8) {
        ClearExclusiveLocal();
        break;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb694a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        uRam0000000000b694a0 = uVar9;
      }
    } while (cVar1 != '\0');
    puVar10 = puRam0000000000b69498;
    if ((uVar4 & 1) == 0) goto joined_r0x00566518;
  }
  FUN_00777048(0xb694a0);
  puVar10 = puRam0000000000b69498;
joined_r0x00566518:
  puRam0000000000b69498 = puVar10;
  if (puVar10 != (undefined8 *)0x0) {
    puRam0000000000b69498 = (undefined8 *)puVar10[0x2b];
  }
  uVar8 = uRam0000000000b694a0 & 2;
  do {
    uVar9 = uRam0000000000b694a0;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb694a0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      uRam0000000000b694a0 = uVar8;
    }
  } while (cVar1 != '\0');
  if (7 < uVar9) {
    FUN_007771d4(0xb694a0);
  }
  if (puVar10 == (undefined8 *)0x0) {
    if (iRam0000000000b6b688 != 0xdd) {
      FUN_0056f028(0xb6b688,0,FUN_0056e014);
    }
    lVar5 = 0x25f;
    FUN_0056e5c0(0x25f,0xb6b540);
    puVar10 = (undefined8 *)(lVar5 + 0xffU & 0xffffffffffffff00);
    FUN_00566650(puVar10);
    *(undefined4 *)(puVar10 + 0x29) = 0;
    *(undefined4 *)((long)puVar10 + 0x14c) = 0;
    *(undefined1 *)(puVar10 + 0x2a) = 0;
  }
  *(undefined1 *)((long)puVar10 + 0x14) = 0;
  *(undefined4 *)(puVar10 + 3) = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined1 *)(puVar10 + 2) = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[4] = 0;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  *(undefined1 *)((long)puVar10 + 0x13) = 0;
  *(undefined2 *)((long)puVar10 + 0x11) = 0;
  puVar10[7] = 0;
  puVar10[0x28] = 0;
  *(undefined4 *)(puVar10 + 0x29) = 0;
  *(undefined4 *)((long)puVar10 + 0x14c) = 0;
  *(undefined1 *)(puVar10 + 0x2a) = 0;
  puVar10[0x2b] = 0;
  puVar3 = PTR___tlv_bootstrap_00b2c558;
  ppuVar7 = &PTR___tlv_bootstrap_00b2c558;
  ppuVar6 = ppuVar7;
  (*(code *)PTR___tlv_bootstrap_00b2c558)();
  if (((ulong)*ppuVar6 & 1) == 0) {
    ppuVar6 = &PTR___tlv_bootstrap_00b2c540;
    (*(code *)PTR___tlv_bootstrap_00b2c540)();
    *ppuVar6 = (undefined *)puVar10;
    ppuVar6[1] = FUN_00566588;
    __tlv_atexit(FUN_00576d08,ppuVar6,0);
    (*(code *)puVar3)();
    *(undefined1 *)ppuVar7 = 1;
  }
  ppuVar7 = &PTR___tlv_bootstrap_00b2c378;
  (*(code *)PTR___tlv_bootstrap_00b2c378)();
  *ppuVar7 = (undefined *)puVar10;
  return puVar10;
}



/* Entry: 00566588; end: 0056664f;  */

void FUN_00566588(long param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined **ppuVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_0056e178();
  }
  ppuVar4 = &PTR___tlv_bootstrap_00b2c378;
  (*(code *)PTR___tlv_bootstrap_00b2c378)();
  *ppuVar4 = (undefined *)0x0;
  uVar5 = uRam0000000000b694a0;
  if ((uRam0000000000b694a0 & 1) == 0) {
    uVar6 = uRam0000000000b694a0 | 1;
    do {
      uVar3 = uRam0000000000b694a0;
      if (uRam0000000000b694a0 != uVar5) {
        ClearExclusiveLocal();
        if ((uRam0000000000b694a0 & 1) != 0) goto LAB_0056663c;
        goto LAB_005665ec;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb694a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        uRam0000000000b694a0 = uVar6;
      }
    } while (cVar1 != '\0');
    if ((uVar3 & 1) == 0) goto LAB_005665ec;
  }
LAB_0056663c:
  FUN_00777048(0xb694a0);
LAB_005665ec:
  *(long *)(param_1 + 0x158) = lRam0000000000b69498;
  uVar5 = uRam0000000000b694a0 & 2;
  do {
    uVar6 = uRam0000000000b694a0;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb694a0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      uRam0000000000b694a0 = uVar5;
    }
  } while (cVar1 != '\0');
  lRam0000000000b69498 = param_1;
  if (7 < uVar6) {
    FUN_007771d4(0xb694a0);
  }
  return;
}



/* Entry: 00566650; end: 005666df;  */

void FUN_00566650(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0xb0) = 0;
  lVar2 = param_1 + 0x40;
  _pthread_mutex_init(lVar2,0);
  if ((int)lVar2 != 0) {
    FUN_00584c60(3,"pthread_waiter.cc",0x44,"pthread_mutex_init failed: %d");
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x5666bc);
    (*pcVar1)();
  }
  param_1 = param_1 + 0x80;
  _pthread_cond_init(param_1,0);
  if ((int)param_1 == 0) {
    return;
  }
  FUN_00584c60(3,"pthread_waiter.cc",0x49,"pthread_cond_init failed: %d");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5666e0);
  (*pcVar1)();
}



/* Entry: 005666e0; end: 005666e7;  */

void FUN_005666e0(long param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1 + 0x40;
  iVar2 = iVar3;
  _pthread_mutex_lock();
  if (iVar2 != 0) {
    FUN_00584c60(3,"pthread_waiter.cc",0x2a,"pthread_mutex_lock failed: %d");
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x566c60);
    (*pcVar1)();
  }
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  if (*(int *)(param_1 + 0xb0) != 0) {
    iVar2 = (int)param_1 + 0x80;
    _pthread_cond_signal();
    if (iVar2 != 0) {
      FUN_00584c60(3,"pthread_waiter.cc",0x9e,"pthread_cond_signal failed: %d");
      goto LAB_00566c38;
    }
  }
  _pthread_mutex_unlock();
  if (iVar3 == 0) {
    return;
  }
  FUN_00584c60(3,"pthread_waiter.cc",0x34,"pthread_mutex_unlock failed: %d");
LAB_00566c38:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x566c3c);
  (*pcVar1)();
}



/* Entry: 005666e8; end: 0056677f;  */

void FUN_005666e8(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  int *piVar5;
  undefined **ppuVar6;
  
  ppuVar4 = &PTR___tlv_bootstrap_00b2c378;
  (*(code *)PTR___tlv_bootstrap_00b2c378)();
  ppuVar6 = (undefined **)*ppuVar4;
  if ((undefined **)*ppuVar4 == (undefined **)0x0) {
    FUN_005663bc();
    ppuVar6 = ppuVar4;
  }
  uVar1 = *(uint *)(ppuVar6 + 0x29);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  *(uint *)((long)ppuVar6 + 0x14c) = uVar1;
  *(undefined1 *)(ppuVar6 + 0x2a) = 0;
  piVar5 = (int *)ppuVar6[0x28];
  if (piVar5 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_00566780(ppuVar6 + 8,param_1);
  piVar5 = (int *)ppuVar6[0x28];
  if (piVar5 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(ppuVar6 + 0x2a) = 0;
  *(undefined4 *)((long)ppuVar6 + 0x14c) = 0;
  return;
}



/* Entry: 00566780; end: 00566b3f;  */

undefined8 FUN_00566780(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uStack_50;
  ulong uStack_48;
  
  lVar2 = param_1;
  _pthread_mutex_lock();
  if ((int)lVar2 != 0) {
    FUN_00584c60(3,"pthread_waiter.cc",0x2a,"pthread_mutex_lock failed: %d");
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x566ab0);
    (*pcVar1)();
  }
  iVar5 = *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  if (iVar5 == 0) {
    if (param_2 == 0xffffffffffffffff) {
      lVar2 = param_1 + 0x40;
      _pthread_cond_wait(lVar2,param_1);
      if ((int)lVar2 != 0) {
LAB_00566824:
        FUN_00584c60(3,"pthread_waiter.cc",0x7b,"pthread_cond_wait failed: %d");
        goto LAB_00566a88;
      }
LAB_005668a4:
      iVar5 = *(int *)(param_1 + 0x74);
      if (iVar5 == 0) {
        ppuVar4 = &PTR___tlv_bootstrap_00b2c378;
        (*(code *)PTR___tlv_bootstrap_00b2c378)();
        uVar9 = param_2 >> 1;
        uVar7 = uVar9;
        if (uVar9 < 2) {
          uVar7 = 1;
        }
        if (param_2 == 0xffffffffffffffff) {
          do {
            puVar6 = *ppuVar4;
            if (((puVar6[0x150] & 1) == 0) &&
               (0x3c < *(int *)(puVar6 + 0x148) - *(int *)(puVar6 + 0x14c))) {
              puVar6[0x150] = 1;
            }
            lVar2 = param_1 + 0x40;
            _pthread_cond_wait(lVar2,param_1);
            if ((int)lVar2 != 0) goto LAB_00566824;
            iVar5 = *(int *)(param_1 + 0x74);
          } while (iVar5 == 0);
        }
        else {
          ppuVar3 = ppuVar4;
          if ((param_2 & 1) == 0) {
            do {
              puVar6 = *ppuVar4;
              if (((puVar6[0x150] & 1) == 0) &&
                 (0x3c < *(int *)(puVar6 + 0x148) - *(int *)(puVar6 + 0x14c))) {
                puVar6[0x150] = 1;
              }
              ppuVar3 = (undefined **)(param_1 + 0x40);
              uStack_50 = uVar7 / 1000000000;
              uStack_48 = uVar7 % 1000000000;
              _pthread_cond_timedwait(ppuVar3,param_1,&uStack_50);
              if ((int)ppuVar3 != 0) goto LAB_00566894;
              iVar5 = *(int *)(param_1 + 0x74);
            } while (iVar5 == 0);
          }
          else {
            do {
              puVar6 = *ppuVar4;
              if (((puVar6[0x150] & 1) == 0) &&
                 (0x3c < *(int *)(puVar6 + 0x148) - *(int *)(puVar6 + 0x14c))) {
                puVar6[0x150] = 1;
              }
              __ZNSt3__16chrono12steady_clock3nowEv();
              uStack_48 = uVar9 - (long)ppuVar3 &
                          ((long)(uVar9 - (long)ppuVar3) >> 0x3f ^ 0xffffffffffffffffU);
              uStack_50 = uStack_48 / 1000000000;
              uStack_48 = uStack_48 % 1000000000;
              ppuVar3 = (undefined **)(param_1 + 0x40);
              _pthread_cond_timedwait_relative_np(ppuVar3,param_1,&uStack_50);
              if ((int)ppuVar3 != 0) goto LAB_00566894;
              iVar5 = *(int *)(param_1 + 0x74);
            } while (iVar5 == 0);
          }
        }
      }
      goto LAB_005668ac;
    }
    uVar7 = param_2 >> 1;
    if ((param_2 & 1) == 0) {
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      uStack_50 = uVar7 / 1000000000;
      uStack_48 = uVar7 % 1000000000;
      ppuVar3 = (undefined **)(param_1 + 0x40);
      _pthread_cond_timedwait(ppuVar3,param_1,&uStack_50);
    }
    else {
      __ZNSt3__16chrono12steady_clock3nowEv();
      uStack_48 = uVar7 - lVar2 & ((long)(uVar7 - lVar2) >> 0x3f ^ 0xffffffffffffffffU);
      uStack_50 = uStack_48 / 1000000000;
      uStack_48 = uStack_48 % 1000000000;
      ppuVar3 = (undefined **)(param_1 + 0x40);
      _pthread_cond_timedwait_relative_np(ppuVar3,param_1,&uStack_50);
    }
    if ((int)ppuVar3 == 0) goto LAB_005668a4;
LAB_00566894:
    if ((int)ppuVar3 != 0x3c) {
      FUN_00584c60(3,"pthread_waiter.cc",0x84,"PthreadWaiter::TimedWait() failed: %d");
      goto LAB_00566a88;
    }
    uVar8 = 0;
  }
  else {
LAB_005668ac:
    *(int *)(param_1 + 0x74) = iVar5 + -1;
    uVar8 = 1;
  }
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
  _pthread_mutex_unlock();
  if ((int)param_1 == 0) {
    return uVar8;
  }
  FUN_00584c60(3,"pthread_waiter.cc",0x34,"pthread_mutex_unlock failed: %d");
LAB_00566a88:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x566a8c);
  (*pcVar1)();
}



/* Entry: 00566b40; end: 00566b9b;  */

undefined8 * FUN_00566b40(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = (int)*param_1;
  _pthread_mutex_unlock();
  if (iVar2 == 0) {
    return param_1;
  }
  FUN_00584c60(3,"pthread_waiter.cc",0x34,"pthread_mutex_unlock failed: %d");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x566b98);
  (*pcVar1)();
}



/* Entry: 00566b9c; end: 00566c77;  */

void FUN_00566b9c(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = param_1;
  _pthread_mutex_lock();
  if ((int)lVar3 != 0) {
    FUN_00584c60(3,"pthread_waiter.cc",0x2a,"pthread_mutex_lock failed: %d");
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x566c60);
    (*pcVar1)();
  }
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar2 = (int)param_1 + 0x40;
    _pthread_cond_signal();
    if (iVar2 != 0) {
      FUN_00584c60(3,"pthread_waiter.cc",0x9e,"pthread_cond_signal failed: %d");
      goto LAB_00566c38;
    }
  }
  _pthread_mutex_unlock();
  if ((int)param_1 == 0) {
    return;
  }
  FUN_00584c60(3,"pthread_waiter.cc",0x34,"pthread_mutex_unlock failed: %d");
LAB_00566c38:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x566c3c);
  (*pcVar1)();
}



/* Entry: 00566c78; end: 00566d7b;  */

int FUN_00566c78(int param_1,ulong param_2)

{
  int iVar1;
  bool bVar2;
  
  if (iRam0000000000b694c0 == 0xdd) {
    iVar1 = *(int *)((param_2 & 0xffffffff) * 4 + 0xb694c8);
    bVar2 = false;
  }
  else {
    FUN_00568724(0xb694c0);
    iVar1 = *(int *)((param_2 & 0xffffffff) * 4 + 0xb694c8);
    bVar2 = iRam0000000000b694c0 != 0xdd;
  }
  if (bVar2) {
    FUN_00568724(0xb694c0);
  }
  if (iVar1 <= param_1) {
    if (param_1 == iVar1) {
      _sched_yield();
      return param_1 + 1;
    }
    FUN_0056f240(uRam0000000000b694d0,uRam0000000000b694d8);
    return 0;
  }
  return param_1 + 1;
}



/* Entry: 00566d7c; end: 00566dd3;  */

void FUN_00566d7c(int *param_1)

{
  code *pcVar1;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_00584c60(3,"low_level_scheduling.h",0x7f,"Check %s failed: %s");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x566dd0);
  (*pcVar1)();
}



/* Entry: 00566dd4; end: 00566fff;  */

undefined1  [16] FUN_00566dd4(ulong *param_1,ulong param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  uint *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar7 = uRam0000000000b6b538;
  if ((uRam0000000000b6b538 & 1) == 0) {
    uVar9 = uRam0000000000b6b538 | 1;
    do {
      uVar3 = uRam0000000000b6b538;
      if (uRam0000000000b6b538 != uVar7) {
        ClearExclusiveLocal();
        break;
      }
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0xb6b538,0x10);
      if (bVar5) {
        cVar1 = ExclusiveMonitorsStatus();
        uRam0000000000b6b538 = uVar9;
      }
    } while (cVar1 != '\0');
    if ((uVar3 & 1) != 0) goto LAB_00566f20;
    piVar8 = (int *)(((ulong)param_1 % 0x407) * 8 + 0xb69500);
    piVar11 = *(int **)piVar8;
  }
  else {
LAB_00566f20:
    FUN_00777048(0xb6b538);
    piVar8 = (int *)(((ulong)param_1 % 0x407) * 8 + 0xb69500);
    piVar11 = *(int **)piVar8;
  }
  if (piVar11 == (int *)0x0) {
LAB_00566f5c:
    uVar10 = *param_1;
    if ((uVar10 & param_2) != 0) {
      do {
        if ((uVar10 & param_3) == 0) {
          if (*param_1 == uVar10) {
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar5) {
              *param_1 = uVar10 & ~param_2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
        }
        uVar10 = *param_1;
      } while ((uVar10 & param_2) != 0);
    }
    uVar7 = uRam0000000000b6b538 & 2;
    do {
      uVar9 = uRam0000000000b6b538;
      uVar10 = (ulong)uRam0000000000b6b538;
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0xb6b538,0x10);
      if (bVar5) {
        cVar1 = ExclusiveMonitorsStatus();
        uRam0000000000b6b538 = uVar7;
      }
    } while (cVar1 != '\0');
    if (7 < uVar9) {
      return ZEXT816(0xb6b538);
    }
LAB_00566fbc:
    auVar13._8_8_ = uVar10;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  if ((*(ulong *)(piVar11 + 4) ^ (ulong)param_1) != 0xf03a5f7bf03a5f7b) {
    do {
      piVar8 = piVar11;
      piVar11 = *(int **)(piVar8 + 2);
      if (piVar11 == (int *)0x0) goto LAB_00566f5c;
    } while ((*(ulong *)(piVar11 + 4) ^ (ulong)param_1) != 0xf03a5f7bf03a5f7b);
    piVar8 = piVar8 + 2;
  }
  *(undefined8 *)piVar8 = *(undefined8 *)(piVar11 + 2);
  iVar6 = *piVar11;
  *piVar11 = iVar6 + -1;
  uVar10 = *param_1;
  if ((uVar10 & param_2) != 0) {
    do {
      if ((uVar10 & param_3) == 0) {
        if (*param_1 == uVar10) {
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar5) {
            *param_1 = uVar10 & ~param_2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
      }
      uVar10 = *param_1;
    } while ((uVar10 & param_2) != 0);
  }
  uVar7 = uRam0000000000b6b538 & 2;
  do {
    uVar9 = uRam0000000000b6b538;
    uVar10 = (ulong)uRam0000000000b6b538;
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0xb6b538,0x10);
    if (bVar5) {
      cVar1 = ExclusiveMonitorsStatus();
      uRam0000000000b6b538 = uVar7;
    }
  } while (cVar1 != '\0');
  if (7 < uVar9) {
    param_1 = (ulong *)0xb6b538;
    FUN_007771d4(0xb6b538);
  }
  if (iVar6 + -1 != 0) goto LAB_00566fbc;
  puVar12 = (uint *)0x0;
  if (piVar11 == (int *)0x0) goto LAB_0056e264;
  puVar12 = *(uint **)(piVar11 + -4);
  bVar5 = false;
  if (((byte)puVar12[0x49] >> 1 & 1) != 0) {
    iVar6 = 1;
    _pthread_sigmask(1,&stack0xffffffffffffffdc,(ulong)&stack0xffffffffffffffc8 | 4);
    bVar5 = iVar6 == 0;
  }
  uVar7 = *puVar12;
  if ((uVar7 & 1) == 0) {
    do {
      uVar9 = *puVar12;
      if (uVar9 != uVar7) {
        ClearExclusiveLocal();
        break;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar2) {
        *puVar12 = uVar7 | 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((uVar9 & 1) != 0) goto LAB_0056e27c;
  }
  else {
LAB_0056e27c:
    FUN_00777048(puVar12);
  }
  FUN_0056e368(piVar11,puVar12);
  if (0 < (int)puVar12[0x48]) {
    puVar12[0x48] = puVar12[0x48] - 1;
    uVar7 = *puVar12;
    do {
      uVar9 = *puVar12;
      uVar10 = (ulong)uVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar2) {
        *puVar12 = uVar7 & 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (7 < uVar9) {
      FUN_007771d4();
    }
    if (bVar5) {
      uVar10 = (ulong)&stack0xffffffffffffffc8 | 4;
      puVar12 = (uint *)((long)&MACH_HEADER.magic + 3);
      _pthread_sigmask(3,uVar10,0);
      if ((int)puVar12 != 0) {
        FUN_00584c60(3,"low_level_alloc.cc",0x12d,"pthread_sigmask failed: %d");
        goto LAB_0056e2e4;
      }
    }
LAB_0056e264:
    auVar14._8_8_ = uVar10;
    auVar14._0_8_ = puVar12;
    return auVar14;
  }
  FUN_00584c60(3,"low_level_alloc.cc",0x203,"Check %s failed: %s");
LAB_0056e2e4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x56e2e8);
  (*pcVar4)();
}



/* Entry: 00567000; end: 00567037;  */

undefined8 * FUN_00567000(undefined8 *param_1)

{
  if (((uint)*param_1 >> 4 & 1) != 0) {
    FUN_00566dd4(param_1,0x10,0x40);
  }
  return param_1;
}



/* Entry: 00567038; end: 0056737f;  */

void FUN_00567038(ulong *param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  uVar5 = *param_1;
  if ((uVar5 & 0x4d) != 4) {
    return;
  }
  do {
    if (*param_1 != uVar5) {
      ClearExclusiveLocal();
      return;
    }
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = uVar5 | 0x48;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar6 = (long *)(uVar5 & 0xffffffffffffff00);
  if (plVar6 == (long *)0x0) goto LAB_00567244;
  plVar7 = (long *)*plVar6;
  plVar8 = plVar6;
  if (plVar7 == param_2) {
LAB_00567194:
    lVar10 = *plVar7;
    *plVar8 = lVar10;
    if (plVar7 == plVar6) {
      bVar4 = plVar8 != plVar6;
      plVar6 = (long *)0x0;
      if (bVar4) {
        plVar6 = plVar8;
      }
    }
    else if (plVar8 != plVar6) {
      if ((*(long *)plVar8[4] == **(long **)(lVar10 + 0x20)) &&
         ((int)plVar8[3] == *(int *)(lVar10 + 0x18))) {
        plVar9 = (long *)((long *)plVar8[4])[1];
        plVar7 = (long *)(*(long **)(lVar10 + 0x20))[1];
        if ((plVar9 == (long *)0x0) || (plVar9[2] == 0)) {
          if ((plVar7 == (long *)0x0) || (plVar7[2] == 0)) goto LAB_005672a4;
        }
        else if ((plVar7 != (long *)0x0) &&
                (((plVar9[2] == plVar7[2] && (plVar9[3] == plVar7[3])) &&
                 (*plVar9 == *plVar7 && plVar9[1] == plVar7[1])))) {
LAB_005672a4:
          if (*(long *)(lVar10 + 8) == 0) {
            plVar8[1] = lVar10;
          }
          else {
            plVar8[1] = *(long *)(lVar10 + 8);
          }
        }
      }
    }
    *param_2 = 0;
    *(undefined4 *)((long)param_2 + 0x1c) = 0;
  }
  else {
    plVar9 = (long *)param_2[4];
    lVar10 = *plVar9;
    do {
      if ((lVar10 == *(long *)plVar7[4]) && ((int)param_2[3] == (int)plVar7[3])) {
        plVar11 = (long *)plVar9[1];
        plVar8 = (long *)((long *)plVar7[4])[1];
        if ((plVar11 == (long *)0x0) || (plVar11[2] == 0)) {
          if ((plVar8 != (long *)0x0) && (plVar8[2] != 0)) goto LAB_005670fc;
        }
        else if ((plVar8 == (long *)0x0) ||
                (((plVar11[2] != plVar8[2] || (plVar11[3] != plVar8[3])) ||
                 (*plVar11 != *plVar8 || plVar11[1] != plVar8[1])))) goto LAB_005670fc;
        if ((long *)plVar7[1] == param_2) {
          plVar8 = (long *)param_2[1];
          if ((long *)param_2[1] == (long *)0x0) {
            plVar8 = (long *)0x0;
            if ((long *)*plVar7 != param_2) {
              plVar8 = (long *)*plVar7;
            }
          }
          plVar7[1] = (long)plVar8;
        }
LAB_00567160:
        plVar11 = (long *)*plVar7;
        plVar8 = plVar7;
      }
      else {
LAB_005670fc:
        plVar11 = (long *)plVar7[1];
        if (plVar11 == (long *)0x0) goto LAB_00567160;
        plVar3 = plVar7;
        for (plVar2 = (long *)plVar11[1]; plVar8 = plVar11, plVar2 != (long *)0x0;
            plVar2 = (long *)plVar2[1]) {
          plVar3[1] = (long)plVar2;
          plVar11 = plVar2;
          plVar3 = plVar8;
        }
        plVar7[1] = (long)plVar8;
        plVar11 = (long *)*plVar8;
      }
      plVar7 = plVar11;
    } while ((plVar8 != plVar6) && (plVar7 != param_2));
    if (plVar7 == param_2) goto LAB_00567194;
  }
  if (plVar6 != (long *)0x0) {
    do {
      while( true ) {
        uVar5 = *param_1;
        plVar6[5] = 0;
        *(undefined1 *)((long)plVar6 + 0x13) = 0;
        if (*param_1 == uVar5) break;
        ClearExclusiveLocal();
      }
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar4) {
        *param_1 = uVar5 & 0x12 | (ulong)plVar6 | 4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return;
  }
LAB_00567244:
  do {
    while (*param_1 != *param_1) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = *param_1 & 0x12;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}



/* Entry: 00567380; end: 00567527;  */

void FUN_00567380(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)((long)param_2 + 0x1c);
  do {
    if (iVar4 != 1) {
      if ((param_2[4] == 0) && ((*(byte *)((long)param_2 + 0x14) & 1) == 0)) {
        FUN_00584c60(3,"mutex.cc",0x488,"Check %s failed: %s");
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x567510);
        (*pcVar1)();
      }
      param_2[4] = 0;
      return;
    }
    uVar2 = *(ulong *)(param_2[4] + 0x10);
    FUN_005666e8();
    if ((uVar2 & 1) == 0) {
      FUN_00567038(param_1,param_2);
      if (*param_2 != 0) {
        iVar4 = 0;
        do {
          while ((iRam0000000000b694c0 == 0xdd ||
                 (FUN_00568724(0xb694c0), iVar5 = iRam0000000000b694cc, iRam0000000000b694c0 == 0xdd
                 ))) {
            iVar5 = iRam0000000000b694cc;
            if (iRam0000000000b694cc <= iVar4) goto LAB_00567450;
LAB_00567414:
            iVar4 = iVar4 + 1;
            FUN_00567038(param_1,param_2);
            if (*param_2 == 0) goto LAB_005673cc;
          }
          FUN_00568724(0xb694c0);
          if (iVar4 < iVar5) goto LAB_00567414;
LAB_00567450:
          if (iVar4 == iVar5) {
            _sched_yield(uRam0000000000b694d0,uRam0000000000b694d8);
            goto LAB_00567414;
          }
          FUN_0056f240();
          iVar4 = 0;
          FUN_00567038(param_1,param_2);
        } while (*param_2 != 0);
      }
LAB_005673cc:
      lVar3 = param_2[4];
      *(undefined8 *)(lVar3 + 8) = 0;
      *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
    }
    iVar4 = *(int *)((long)param_2 + 0x1c);
  } while( true );
}



/* Entry: 00567528; end: 00567613;  */

void FUN_00567528(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
  if ((uVar6 & 0x19) == 0) {
    while (*param_1 == uVar6) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar6 | 8;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  }
  iVar5 = iRam0000000000b694c4;
  if (iRam0000000000b694c0 != 0xdd) {
    FUN_00568724(0xb694c0);
    iVar5 = iRam0000000000b694c4;
  }
  do {
    uVar6 = *param_1;
    if ((uVar6 & 0x11) != 0) break;
    if (((uint)uVar6 >> 3 & 1) == 0) {
      while (*param_1 == uVar6) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = uVar6 | 8;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      ClearExclusiveLocal();
    }
    iVar3 = iVar5 + -1;
    bVar2 = 0 < iVar5;
    iVar5 = iVar3;
  } while (iVar3 != 0 && bVar2);
  FUN_00567658(param_1,&UNK_00811348,0,0xffffffffffffffff,0);
  if (((ulong)param_1 & 1) == 0) {
    FUN_00584c60(3,"mutex.cc",0x719,"Check %s failed: %s");
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x7767f4);
    (*pcVar4)();
  }
  return;
}



/* Entry: 00567614; end: 00567657;  */

void FUN_00567614(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  if ((uVar4 & 0x1c) == 0) {
    while (*param_1 == uVar4) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = (uVar4 | 1) + 0x100;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  }
  FUN_00567658(param_1,&UNK_00811370,0,0xffffffffffffffff,0);
  if (((ulong)param_1 & 1) != 0) {
    return;
  }
  FUN_00584c60(3,"mutex.cc",0x719,"Check %s failed: %s");
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x7767f4);
  (*pcVar3)();
}



/* Entry: 00567658; end: 00567c7f;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00567658(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 uVar14;
  ulong *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 uStack_68;
  
  uVar11 = *param_1;
  if ((*param_2 & uVar11) == 0) {
    uVar8 = 0xfffffffffffffffd;
    if ((param_5 & 1) == 0) {
      uVar8 = 0xffffffffffffffff;
    }
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    do {
      if (*param_1 != uVar11) {
        uVar14 = 0;
        ClearExclusiveLocal();
        goto LAB_00567704;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar4) {
        *param_1 = (uVar1 | uVar11 & uVar8) + uVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((param_3 == 0) || (*(code **)(param_3 + 0x10) == (code *)0x0)) {
      return 1;
    }
    uVar11 = param_3;
    (**(code **)(param_3 + 0x10))();
    uVar14 = 1;
    if ((uVar11 & 1) != 0) {
      return 1;
    }
  }
  else {
    uVar14 = 0;
  }
LAB_00567704:
  ppuVar6 = &PTR___tlv_bootstrap_00b2c378;
  (*(code *)PTR___tlv_bootstrap_00b2c378)();
  puVar7 = *ppuVar6;
  if (puVar7 == (undefined *)0x0) {
    FUN_005663bc();
  }
  uStack_88 = 0;
  uStack_78 = 0;
  puStack_a0 = param_2;
  uStack_98 = param_3;
  uStack_90 = param_4;
  puStack_80 = puVar7;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_68 = 0;
  if (param_3 != 0) {
    uVar9 = (uint)param_5;
    if (*(long *)(param_3 + 0x10) != 0) {
      uVar9 = (uint)param_5 | 2;
    }
    param_5 = (ulong)uVar9;
  }
  puStack_70 = puVar7;
  if ((bool)uVar14) {
    FUN_007767f4(param_1,&puStack_a0);
    FUN_00567380(param_1,puStack_80);
    param_5 = (ulong)((uint)param_5 | 1);
    uVar9 = (uint)*param_1;
  }
  else {
    uVar9 = (uint)*param_1;
  }
  if ((uVar9 >> 4 & 1) == 0) {
    lVar12 = *(long *)(puStack_80 + 0x20);
  }
  else {
    uVar10 = 4;
    if (puStack_a0 != (ulong *)&UNK_00811348) {
      uVar10 = 6;
    }
    FUN_00567ce4(param_1,uVar10);
    lVar12 = *(long *)(puStack_80 + 0x20);
  }
  if ((lVar12 != 0) && ((puStack_80[0x14] & 1) == 0)) {
    FUN_00584c60(3,"mutex.cc",0x7b5,"Check %s failed: %s");
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x567c4c);
    (*pcVar5)();
  }
LAB_005677ec:
  uVar11 = *param_1;
  uVar9 = (uint)uVar11;
  if ((uVar9 & (uVar9 << 3 ^ 0x20) & 0x28) != 0) {
    if ((~uVar9 & 9) == 0) {
      FUN_00584c60(3,"mutex.cc",0x7a4,
                   "Check (v & (kMuWriter | kMuReader)) != (kMuWriter | kMuReader) failed: %s: Mutex corrupt: both reader and writer lock held: %p"
                  );
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x567c18);
      (*pcVar5)();
    }
    if ((uVar11 & 0x24) == 0x20) {
      FUN_00584c60(3,"mutex.cc",0x7a7,
                   "Check (v & (kMuWait | kMuWrWait)) != kMuWrWait failed: %s: Mutex corrupt: waiting writer with no waiters: %p"
                  );
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x567ab4);
      (*pcVar5)();
    }
  }
  if ((puStack_a0[3] & uVar11) == 0) {
    uVar8 = 0xfffffffffffffffd;
    if ((param_5 & 1) == 0) {
      uVar8 = 0xffffffffffffffff;
    }
    uVar1 = puStack_a0[1];
    uVar2 = puStack_a0[2];
    do {
      if (*param_1 != uVar11) goto LAB_005678f8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar4) {
        *param_1 = (uVar1 | uVar8 & uVar11) + uVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_005679e8:
    if (((uStack_98 == 0) || (*(code **)(uStack_98 + 0x10) == (code *)0x0)) ||
       (uVar8 = uStack_98, (**(code **)(uStack_98 + 0x10))(), (uVar8 & 1) != 0)) {
      if ((*(long *)(puStack_80 + 0x20) != 0) && ((puStack_80[0x14] & 1) == 0)) {
        FUN_00584c60(3,"mutex.cc",0x81c,"Check %s failed: %s");
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x567c80);
        (*pcVar5)();
      }
      if (((uint)uVar11 >> 4 & 1) != 0) {
        uVar10 = 5;
        if (puStack_a0 != (ulong *)&UNK_00811348) {
          uVar10 = 7;
        }
        FUN_00567ce4(param_1,uVar10);
      }
      if (param_3 == 0) {
        return 1;
      }
      if (uStack_98 != 0) {
        return 1;
      }
      if (*(code **)(param_3 + 0x10) == (code *)0x0) {
        return 1;
      }
      (**(code **)(param_3 + 0x10))(param_3);
      return param_3;
    }
    FUN_007767f4(param_1,&puStack_a0);
LAB_00567a0c:
    FUN_00567380(param_1,puStack_80);
    param_5 = (ulong)((uint)param_5 | 1);
    lVar12 = *(long *)(puStack_80 + 0x20);
  }
  else {
    if ((uVar11 & 0x44) == 0) {
      uVar8 = 0;
      FUN_00568070(0,&puStack_a0,uVar11,param_5);
      if (uVar8 == 0) {
        FUN_00584c60(3,"mutex.cc",0x7d2,"Check %s failed: %s");
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x567bb8);
        (*pcVar5)();
      }
      uVar1 = 0xb9;
      if ((param_5 & 1) == 0) {
        uVar1 = 0xbb;
      }
      uVar13 = uVar1 & uVar11 | 4;
      uVar2 = uVar13;
      if ((uVar11 & 1) != 0) {
        uVar2 = uVar1 & uVar11 | 0x24;
      }
      if (puStack_a0 != (ulong *)&UNK_00811348) {
        uVar2 = uVar13;
      }
      do {
        if (*param_1 != uVar11) {
          ClearExclusiveLocal();
          *(undefined8 *)(puStack_80 + 0x20) = 0;
          lVar12 = *(long *)(puStack_80 + 0x20);
          goto joined_r0x00567a58;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = uVar2 | uVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_00567a0c;
    }
    uVar8 = 0xffffffffffffffdf;
    if ((param_5 & 1) == 0) {
      uVar8 = 0xffffffffffffffff;
    }
    if ((uVar8 & uVar11 & puStack_a0[4]) == 0) {
      uVar8 = 0xffffffffffffffbc;
      if ((param_5 & 1) == 0) {
        uVar8 = 0xffffffffffffffbe;
      }
      do {
        if (*param_1 != uVar11) {
          ClearExclusiveLocal();
          goto LAB_00567a50;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = uVar8 & uVar11 | 0x41;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(long *)((uVar11 & 0xffffffffffffff00) + 0x28) =
           *(long *)((uVar11 & 0xffffffffffffff00) + 0x28) + 0x100;
      do {
        while (uVar11 = *param_1, *param_1 != uVar11) {
          ClearExclusiveLocal();
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = uVar11 & 0xffffffffffffffbf | 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_005679e8;
    }
    if ((uVar9 >> 6 & 1) == 0) {
      uVar8 = 0xffffffffffffffb9;
      if ((param_5 & 1) == 0) {
        uVar8 = 0xffffffffffffffbb;
      }
      do {
        if (*param_1 != uVar11) goto LAB_005678f8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = uVar8 & uVar11 | 0x44;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar8 = uVar11 & 0xffffffffffffff00;
      FUN_00568070(uVar8,&puStack_a0,uVar11,param_5);
      if (uVar8 == 0) {
        FUN_00584c60(3,"mutex.cc",0x801,"Check %s failed: %s");
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x567bec);
        (*pcVar5)();
      }
      uVar11 = (uVar11 & 1) << 5;
      if (puStack_a0 != (ulong *)&UNK_00811348) {
        uVar11 = 0;
      }
      do {
        while (*param_1 != *param_1) {
          ClearExclusiveLocal();
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = *param_1 & 0xbb | uVar11 | uVar8 | 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_00567a0c;
    }
LAB_00567a50:
    lVar12 = *(long *)(puStack_80 + 0x20);
  }
  goto joined_r0x00567a58;
LAB_005678f8:
  ClearExclusiveLocal();
  lVar12 = *(long *)(puStack_80 + 0x20);
joined_r0x00567a58:
  if ((lVar12 != 0) && ((puStack_80[0x14] & 1) == 0)) {
    FUN_00584c60(3,"mutex.cc",0x816,"Check %s failed: %s");
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x567b84);
    (*pcVar5)();
  }
  FUN_00566c78();
  goto LAB_005677ec;
}



/* Entry: 00567c80; end: 00567ce3;  */

void FUN_00567c80(ulong *param_1)

{
  code *pcVar1;
  
  if ((*param_1 & 9) != 0) {
    return;
  }
  FUN_005685fc();
  FUN_00584c60(3,"mutex.cc",0x9b0,"thread should hold at least a read lock on Mutex %p %s");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x567ce4);
  (*pcVar1)();
}



/* Entry: 00567ce4; end: 00567fe3;  */

/* WARNING: Removing unreachable block (ram,0x00776d74) */
/* WARNING: Removing unreachable block (ram,0x00776ff0) */
/* WARNING: Removing unreachable block (ram,0x00776d8c) */
/* WARNING: Removing unreachable block (ram,0x00776d2c) */
/* WARNING: Removing unreachable block (ram,0x00776860) */
/* WARNING: Removing unreachable block (ram,0x0077686c) */
/* WARNING: Removing unreachable block (ram,0x00776efc) */
/* WARNING: Removing unreachable block (ram,0x00776c34) */
/* WARNING: Removing unreachable block (ram,0x00776d90) */
/* WARNING: Removing unreachable block (ram,0x00776b90) */
/* WARNING: Removing unreachable block (ram,0x00776ba4) */
/* WARNING: Removing unreachable block (ram,0x00776bb0) */
/* WARNING: Removing unreachable block (ram,0x00776bdc) */
/* WARNING: Removing unreachable block (ram,0x00776bb8) */
/* WARNING: Removing unreachable block (ram,0x00776be4) */
/* WARNING: Removing unreachable block (ram,0x00776be8) */
/* WARNING: Removing unreachable block (ram,0x00776bf8) */
/* WARNING: Removing unreachable block (ram,0x00776c08) */
/* WARNING: Removing unreachable block (ram,0x00776c14) */
/* WARNING: Removing unreachable block (ram,0x00776c1c) */
/* WARNING: Removing unreachable block (ram,0x00776c20) */

void FUN_00567ce4(undefined8 **param_1,ulong param_2)

{
  char cVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  undefined8 **ppuVar19;
  undefined *puVar20;
  uint uVar21;
  undefined8 **ppuVar22;
  ulong unaff_x23;
  undefined8 **ppuVar23;
  bool bVar24;
  undefined2 *unaff_x25;
  ulong unaff_x26;
  undefined8 **ppuVar25;
  undefined8 **ppuVar26;
  ulong unaff_x27;
  undefined8 **ppuVar27;
  undefined8 *unaff_x28;
  undefined8 **ppuVar28;
  ulong uStack_610;
  undefined8 *puStack_608;
  undefined8 *puStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  undefined2 *puStack_5e8;
  undefined8 uStack_5e0;
  ulong uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 **ppuStack_5c8;
  undefined *puStack_5c0;
  undefined8 **ppuStack_5b8;
  undefined1 *puStack_5b0;
  code *pcStack_5a8;
  undefined *puStack_5a0;
  undefined8 **ppuStack_598;
  char *pcStack_590;
  undefined2 *puStack_588;
  ulong uStack_578;
  undefined2 uStack_570;
  undefined1 uStack_56e;
  undefined8 auStack_1b0 [40];
  long lStack_70;
  
  uVar21 = uRam0000000000b6b538;
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((uRam0000000000b6b538 & 1) == 0) {
    uVar15 = uRam0000000000b6b538 | 1;
    do {
      uVar5 = uRam0000000000b6b538;
      if (uRam0000000000b6b538 != uVar21) {
        ClearExclusiveLocal();
        break;
      }
      cVar1 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(0xb6b538,0x10);
      if (bVar24) {
        cVar1 = ExclusiveMonitorsStatus();
        uRam0000000000b6b538 = uVar15;
      }
    } while (cVar1 != '\0');
    if ((uVar5 & 1) != 0) goto LAB_00567dac;
    ppuVar19 = *(undefined8 ***)(((ulong)param_1 % 0x407) * 8 + 0xb69500);
    ppuVar8 = param_1;
  }
  else {
LAB_00567dac:
    ppuVar8 = (undefined8 **)0xb6b538;
    FUN_00777048();
    ppuVar19 = *(undefined8 ***)(((ulong)param_1 % 0x407) * 8 + 0xb69500);
  }
  for (; ppuVar19 != (undefined8 **)0x0; ppuVar19 = (undefined8 **)ppuVar19[1]) {
    if (((ulong)ppuVar19[2] ^ (ulong)param_1) == 0xf03a5f7bf03a5f7b) {
      *(uint *)ppuVar19 = *(uint *)ppuVar19 + 1;
      break;
    }
  }
  uVar21 = uRam0000000000b6b538 & 2;
  do {
    uVar15 = uRam0000000000b6b538;
    cVar1 = '\x01';
    bVar24 = (bool)ExclusiveMonitorPass(0xb6b538,0x10);
    if (bVar24) {
      cVar1 = ExclusiveMonitorsStatus();
      uRam0000000000b6b538 = uVar21;
    }
  } while (cVar1 != '\0');
  if (uVar15 < 8) {
    if (ppuVar19 == (undefined8 **)0x0) goto LAB_00567e04;
LAB_00567df8:
    if (*(char *)(ppuVar19 + 5) == '\x01') goto LAB_00567e04;
    if (((byte)(&UNK_00a01510)[(param_2 & 0xffffffff) * 0x10] >> 1 & 1) == 0) goto LAB_00567f14;
LAB_00567f04:
    if ((code *)ppuVar19[3] != (code *)0x0) {
      ppuVar8 = (undefined8 **)ppuVar19[4];
      (*(code *)ppuVar19[3])();
    }
LAB_00567f14:
    uVar21 = uRam0000000000b6b538;
    if ((uRam0000000000b6b538 & 1) == 0) {
      uVar15 = uRam0000000000b6b538 | 1;
      do {
        uVar5 = uRam0000000000b6b538;
        if (uRam0000000000b6b538 != uVar21) {
          ClearExclusiveLocal();
          break;
        }
        cVar1 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(0xb6b538,0x10);
        if (bVar24) {
          cVar1 = ExclusiveMonitorsStatus();
          uRam0000000000b6b538 = uVar15;
        }
      } while (cVar1 != '\0');
      if ((uVar5 & 1) != 0) goto LAB_00567f44;
    }
    else {
LAB_00567f44:
      ppuVar8 = (undefined8 **)0xb6b538;
      FUN_00777048();
    }
    uVar21 = *(uint *)ppuVar19 - 1;
    puVar20 = (undefined *)(ulong)uVar21;
    *(uint *)ppuVar19 = uVar21;
    uVar15 = uRam0000000000b6b538 & 2;
    do {
      uVar5 = uRam0000000000b6b538;
      cVar1 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(0xb6b538,0x10);
      if (bVar24) {
        cVar1 = ExclusiveMonitorsStatus();
        uRam0000000000b6b538 = uVar15;
      }
    } while (cVar1 != '\0');
    if (7 < uVar5) {
      ppuVar8 = (undefined8 **)0xb6b538;
      FUN_007771d4();
    }
    if (uVar21 == 0) {
      ppuVar8 = ppuVar19;
      FUN_0056e178();
    }
  }
  else {
    ppuVar8 = (undefined8 **)0xb6b538;
    FUN_007771d4();
    if (ppuVar19 != (undefined8 **)0x0) goto LAB_00567df8;
LAB_00567e04:
    puVar13 = auStack_1b0;
    FUN_00568b10(puVar13,0x28,1);
    uStack_578 = param_2;
    uStack_56e = 0;
    uStack_570 = 0x4020;
    if ((int)puVar13 != 0) {
      unaff_x26 = (ulong)puVar13 & 0xffffffff;
      unaff_x27 = 2;
      unaff_x25 = &uStack_570;
      puVar13 = auStack_1b0;
      do {
        unaff_x28 = puVar13 + 1;
        puStack_5a0 = (undefined *)*puVar13;
        uVar7 = (long)unaff_x25 + unaff_x27;
        _snprintf(uVar7,0x3c0 - unaff_x27," %p");
        if (((int)uVar7 < 0) || (0x3c0 - unaff_x27 <= (uVar7 & 0xffffffff))) break;
        unaff_x27 = (ulong)(uint)((int)uVar7 + (int)unaff_x27);
        unaff_x26 = unaff_x26 - 1;
        puVar13 = unaff_x28;
      } while (unaff_x26 != 0);
    }
    unaff_x23 = uStack_578;
    puVar20 = &UNK_00a01510;
    puStack_5a0 = (&PTR_s_TryLock_succeeded_00a01518)[(uStack_578 & 0xffffffff) * 2];
    pcStack_590 = "";
    if (ppuVar19 != (undefined8 **)0x0) {
      pcStack_590 = (char *)((long)ppuVar19 + 0x29);
    }
    puStack_588 = &uStack_570;
    ppuVar8 = (undefined8 **)0x0;
    ppuStack_598 = param_1;
    FUN_00584c60(0,"mutex.cc",0x1c5,"%s%p %s %s");
    if ((ppuVar19 != (undefined8 **)0x0) &&
       ((*(uint *)(&UNK_00a01510 + (unaff_x23 & 0xffffffff) * 0x10) >> 1 & 1) != 0))
    goto LAB_00567f04;
    if (ppuVar19 != (undefined8 **)0x0) goto LAB_00567f14;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar13 = *ppuVar8;
  if ((((ulong)puVar13 ^ 0xc) & 0x18) < (((ulong)puVar13 ^ 0xc) & 6)) {
    while (*ppuVar8 == puVar13) {
      cVar1 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar24) {
        *ppuVar8 = (undefined8 *)((ulong)puVar13 & 0xffffffffffffffd7);
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  }
  uStack_5e0 = 0xb6b538;
  uStack_5d0 = 0xb6b000;
  pcStack_5a8 = FUN_00567fe4;
  puVar13 = *ppuVar8;
  ppuVar9 = ppuVar8;
  puStack_600 = unaff_x28;
  uStack_5f8 = unaff_x27;
  uStack_5f0 = unaff_x26;
  puStack_5e8 = unaff_x25;
  uStack_5d8 = unaff_x23;
  ppuStack_5c8 = param_1;
  puStack_5c0 = puVar20;
  ppuStack_5b8 = ppuVar19;
  puStack_5b0 = &stack0xfffffffffffffff0;
  FUN_00567c80();
  uVar21 = (uint)puVar13;
  if ((uVar21 & (uVar21 << 3 ^ 0x20) & 0x28) == 0) {
LAB_0077683c:
    if ((uVar21 >> 4 & 1) != 0) {
      uVar12 = 8;
      if (((ulong)puVar13 & 8) == 0) {
        uVar12 = 9;
      }
      ppuVar9 = ppuVar8;
      FUN_00567ce4(ppuVar8,uVar12);
    }
    puStack_608 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    uStack_610 = 0;
    ppuVar27 = (undefined8 **)0x0;
    ppuVar23 = (undefined8 **)0x0;
    ppuVar25 = (undefined8 **)0x0;
    ppuVar26 = (undefined8 **)0x0;
    ppuVar19 = (undefined8 **)0x0;
LAB_00776894:
    do {
      puVar13 = *ppuVar8;
      uVar21 = (uint)puVar13;
      if (((uVar21 >> 3 & 1) == 0) || (((ulong)puVar13 & 6) == 4)) {
        if (((ulong)puVar13 & 5) == 1) {
          lVar17 = -0x101;
          if ((undefined8 *)0x1ff < puVar13) {
            lVar17 = -0x100;
          }
          while (*ppuVar8 == puVar13) {
            cVar1 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
            if (bVar24) {
              *ppuVar8 = (undefined8 *)(lVar17 + (long)puVar13);
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') {
              return;
            }
          }
          goto LAB_00776920;
        }
        if ((uVar21 >> 6 & 1) != 0) goto LAB_00776924;
        do {
          if (*ppuVar8 != puVar13) goto LAB_00776920;
          cVar1 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
          if (bVar24) {
            *ppuVar8 = (undefined8 *)((ulong)puVar13 | 0x40);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((uVar21 >> 2 & 1) == 0) {
          pcVar11 = "Check %s failed: %s";
          uVar10 = 0x85e;
          goto LAB_00776f58;
        }
        ppuVar22 = (undefined8 **)((ulong)puVar13 & 0xffffffffffffff00);
        if ((((ulong)puVar13 & 1) != 0) && (0x100 < (long)((ulong)ppuVar22[5] & 0xffffffffffffff00))
           ) {
          ppuVar22[5] = ppuVar22[5] + -0x20;
          goto LAB_00776dac;
        }
        if (ppuVar19 != (undefined8 **)0x0) {
          if ((*(byte *)((long)ppuVar22 + 0x13) & 1) == 0) {
            pcVar11 = "Check %s failed: %s";
            uVar10 = 0x896;
            goto LAB_00776f58;
          }
          if (((ulong)ppuVar19[2] & 1) == 0) {
            *(undefined1 *)(ppuVar19 + 2) = 1;
            if (ppuVar19[1] != (undefined8 *)0x0) {
              pcVar11 = "Check %s failed: %s";
              uVar10 = 0x89c;
              goto LAB_00776f58;
            }
            if (ppuVar19 != ppuVar22) {
              puVar14 = *ppuVar19;
              if ((*ppuVar19[4] == *(long *)puVar14[4]) &&
                 (*(uint *)(ppuVar19 + 3) == *(uint *)(puVar14 + 3))) {
                plVar18 = (long *)ppuVar19[4][1];
                plVar16 = (long *)((long *)puVar14[4])[1];
                if ((plVar18 == (long *)0x0) || (plVar18[2] == 0)) {
                  if ((plVar16 == (long *)0x0) || (plVar16[2] == 0)) goto LAB_00776a04;
                }
                else if ((plVar16 != (long *)0x0) &&
                        (((plVar18[2] == plVar16[2] && (plVar18[3] == plVar16[3])) &&
                         (*plVar18 == *plVar16 && plVar18[1] == plVar16[1])))) {
LAB_00776a04:
                  ppuVar19[1] = puVar14;
                }
              }
            }
          }
        }
        puVar14 = (undefined8 *)(*ppuVar22)[4];
        ppuVar28 = ppuVar22;
        if (((undefined *)*puVar14 != &UNK_00811348) ||
           ((lVar17 = puVar14[1], lVar17 != 0 && (*(long *)(lVar17 + 0x10) != 0)))) {
          if ((ppuVar25 == (undefined8 **)0x0) ||
             ((ppuVar19 != ppuVar22 && ((undefined *)*ppuVar25[4] != &UNK_00811348)))) {
            if (ppuVar19 != ppuVar22) {
              if (ppuVar19 != (undefined8 **)0x0) {
                ppuVar28 = ppuVar19;
              }
              ppuVar28 = (undefined8 **)*ppuVar28;
              *(undefined1 *)(ppuVar22 + 2) = 0;
              if (ppuVar22[1] == (undefined8 *)0x0) {
                *(undefined1 *)((long)ppuVar22 + 0x13) = 1;
                *ppuVar8 = puVar13;
                do {
                  *(undefined1 *)((long)ppuVar28 + 0x11) = 0;
                  ppuVar9 = (undefined8 **)ppuVar28[4][1];
                  if (ppuVar9 == (undefined8 **)0x0) {
LAB_00776ab4:
                    if (ppuVar25 == (undefined8 **)0x0) {
                      *(undefined1 *)((long)ppuVar28 + 0x11) = 1;
                      ppuVar26 = ppuVar19;
                      ppuVar25 = ppuVar28;
                      if ((undefined *)*ppuVar28[4] == &UNK_00811348) {
                        uStack_610 = 0x20;
                        ppuVar19 = ppuVar22;
                        goto LAB_00776894;
                      }
                    }
                    else if ((undefined *)*ppuVar28[4] == &UNK_00811370) {
                      *(undefined1 *)((long)ppuVar28 + 0x11) = 1;
                    }
                    else {
                      uStack_610 = 0x20;
                    }
                  }
                  else if (ppuVar9 != ppuVar27) {
                    if (((code *)ppuVar9[2] == (code *)0x0) ||
                       ((*(code *)ppuVar9[2])(), ((ulong)ppuVar9 & 1) != 0)) goto LAB_00776ab4;
                    ppuVar27 = (undefined8 **)ppuVar28[4][1];
                  }
                  if (((*(byte *)((long)ppuVar28 + 0x11) & 1) == 0) &&
                     (ppuVar19 = (undefined8 **)ppuVar28[1], ppuVar19 != (undefined8 **)0x0)) {
                    ppuVar4 = ppuVar28;
                    for (ppuVar3 = (undefined8 **)ppuVar19[1]; ppuVar2 = ppuVar19,
                        ppuVar3 != (undefined8 **)0x0; ppuVar3 = (undefined8 **)ppuVar3[1]) {
                      ppuVar4[1] = ppuVar3;
                      ppuVar19 = ppuVar3;
                      ppuVar9 = ppuVar2;
                      ppuVar4 = ppuVar2;
                    }
                    ppuVar28[1] = ppuVar2;
                    ppuVar28 = ppuVar2;
                  }
                  ppuVar19 = ppuVar22;
                  if (ppuVar28 == ppuVar22) goto LAB_00776894;
                  ppuVar19 = ppuVar28;
                  ppuVar28 = (undefined8 **)*ppuVar28;
                } while( true );
              }
              pcVar11 = "Check %s failed: %s";
              uVar10 = 0x8dc;
              goto LAB_00776f58;
            }
            ppuVar22[5] = (undefined8 *)0x0;
            *(undefined1 *)((long)ppuVar22 + 0x13) = 0;
            puVar13 = (undefined8 *)((ulong)puVar13 & 0xffffffffffffff96);
            goto LAB_00776dac;
          }
          if (ppuVar26 != (undefined8 **)0x0) {
            ppuVar28 = ppuVar26;
          }
          if ((undefined8 **)*ppuVar28 == ppuVar25) goto LAB_00776c7c;
          pcVar11 = "Check %s failed: %s";
          uVar10 = 0x919;
          goto LAB_00776f58;
        }
        *(undefined1 *)((long)*ppuVar22 + 0x11) = 1;
        uStack_610 = 0x20;
LAB_00776c7c:
        bVar24 = false;
        ppuVar9 = ppuVar22;
        ppuVar19 = &puStack_608;
        goto LAB_00776c88;
      }
      while (*ppuVar8 == puVar13) {
        cVar1 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar24) {
          *ppuVar8 = (undefined8 *)((ulong)puVar13 & 0xffffffffffffffd7);
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
LAB_00776920:
      ClearExclusiveLocal();
LAB_00776924:
      FUN_00566c78(ppuVar23,0);
      ppuVar9 = ppuVar23;
    } while( true );
  }
  if ((~uVar21 & 9) == 0) {
    pcVar11 = 
    "Check (v & (kMuWriter | kMuReader)) != (kMuWriter | kMuReader) failed: %s: Mutex corrupt: both reader and writer lock held: %p"
    ;
    uVar10 = 0x7a4;
  }
  else {
    if (((ulong)puVar13 & 0x24) != 0x20) goto LAB_0077683c;
    pcVar11 = 
    "Check (v & (kMuWait | kMuWrWait)) != kMuWrWait failed: %s: Mutex corrupt: waiting writer with no waiters: %p"
    ;
    uVar10 = 0x7a7;
  }
LAB_00776f58:
  FUN_00584c60(3,"mutex.cc",uVar10,pcVar11);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x776f60);
  (*pcVar6)();
  while ((ppuVar19 = ppuVar26, ppuVar28 != ppuVar9 || (!bVar24))) {
LAB_00776c88:
    ppuVar26 = (undefined8 **)*ppuVar28;
    if (*(char *)((long)ppuVar26 + 0x11) == '\x01') {
      if (ppuVar28[1] != (undefined8 *)0x0) {
        pcVar11 = "Check %s failed: %s";
        uVar10 = 0x41a;
        goto LAB_00776f58;
      }
      func_0x005672bc();
      *ppuVar26 = *ppuVar19;
      *ppuVar19 = ppuVar26;
      if ((ppuVar9 != ppuVar22) || ((undefined *)*ppuVar26[4] == &UNK_00811348)) break;
    }
    else {
      ppuVar28 = (undefined8 **)ppuVar26[1];
      if (ppuVar28 == (undefined8 **)0x0) {
        bVar24 = true;
        ppuVar28 = ppuVar26;
        ppuVar26 = ppuVar19;
      }
      else {
        ppuVar25 = ppuVar26;
        for (ppuVar23 = (undefined8 **)ppuVar28[1]; ppuVar23 != (undefined8 **)0x0;
            ppuVar23 = (undefined8 **)ppuVar23[1]) {
          ppuVar25[1] = ppuVar23;
          ppuVar25 = ppuVar28;
          ppuVar28 = ppuVar23;
        }
        ppuVar26[1] = ppuVar28;
        bVar24 = true;
        ppuVar26 = ppuVar19;
      }
    }
  }
  if (puStack_608 != (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
    if (ppuVar9 == (undefined8 **)0x0) {
      puVar13 = (undefined8 *)((ulong)puVar13 & 0x10 | 2);
    }
    else {
      ppuVar9[5] = (undefined8 *)0x0;
      *(undefined1 *)((long)ppuVar9 + 0x13) = 0;
      puVar13 = (undefined8 *)(uStack_610 | (ulong)ppuVar9 | (ulong)puVar13 & 0x10 | 6);
    }
LAB_00776dac:
    puVar14 = puStack_608;
    *ppuVar8 = puVar13;
    if (puStack_608 != (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      do {
        if ((*(byte *)((long)puVar14 + 0x12) & 1) == 0) {
          lVar17 = puVar14[4];
          *(undefined8 ***)(lVar17 + 0x30) = ppuVar9;
          *(undefined1 *)(lVar17 + 0x38) = 1;
        }
        puVar13 = (undefined8 *)*puVar14;
        *puVar14 = 0;
        *(undefined4 *)((long)puVar14 + 0x1c) = 0;
        FUN_005666e0(puVar14);
        puVar14 = puVar13;
        puStack_608 = puVar13;
      } while (puVar13 != (undefined8 *)((long)&MACH_HEADER.magic + 1));
    }
    return;
  }
  pcVar11 = "Check %s failed: %s";
  uVar10 = 0x930;
  goto LAB_00776f58;
}



/* Entry: 00567fe4; end: 0056806f;  */

/* WARNING: Removing unreachable block (ram,0x00776d74) */
/* WARNING: Removing unreachable block (ram,0x00776ff0) */
/* WARNING: Removing unreachable block (ram,0x00776d8c) */
/* WARNING: Removing unreachable block (ram,0x00776d2c) */
/* WARNING: Removing unreachable block (ram,0x00776860) */
/* WARNING: Removing unreachable block (ram,0x0077686c) */
/* WARNING: Removing unreachable block (ram,0x00776efc) */
/* WARNING: Removing unreachable block (ram,0x00776c34) */
/* WARNING: Removing unreachable block (ram,0x00776d90) */
/* WARNING: Removing unreachable block (ram,0x00776b90) */
/* WARNING: Removing unreachable block (ram,0x00776ba4) */
/* WARNING: Removing unreachable block (ram,0x00776bb0) */
/* WARNING: Removing unreachable block (ram,0x00776bdc) */
/* WARNING: Removing unreachable block (ram,0x00776bb8) */
/* WARNING: Removing unreachable block (ram,0x00776be4) */
/* WARNING: Removing unreachable block (ram,0x00776be8) */
/* WARNING: Removing unreachable block (ram,0x00776bf8) */
/* WARNING: Removing unreachable block (ram,0x00776c08) */
/* WARNING: Removing unreachable block (ram,0x00776c14) */
/* WARNING: Removing unreachable block (ram,0x00776c1c) */
/* WARNING: Removing unreachable block (ram,0x00776c20) */

void FUN_00567fe4(undefined8 **param_1)

{
  char cVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  code *pcVar5;
  undefined8 **ppuVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  undefined8 **ppuVar18;
  bool bVar19;
  undefined8 **ppuVar20;
  undefined8 **ppuVar21;
  undefined8 **ppuVar22;
  undefined8 **ppuVar23;
  ulong uStack_70;
  undefined8 *puStack_68;
  
  puVar10 = *param_1;
  if ((((ulong)puVar10 ^ 0xc) & 0x18) < (((ulong)puVar10 ^ 0xc) & 6)) {
    while (*param_1 == puVar10) {
      cVar1 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar19) {
        *param_1 = (undefined8 *)((ulong)puVar10 & 0xffffffffffffffd7);
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  }
  puVar10 = *param_1;
  ppuVar6 = param_1;
  FUN_00567c80();
  uVar15 = (uint)puVar10;
  if ((uVar15 & (uVar15 << 3 ^ 0x20) & 0x28) == 0) {
LAB_0077683c:
    if ((uVar15 >> 4 & 1) != 0) {
      uVar9 = 8;
      if (((ulong)puVar10 & 8) == 0) {
        uVar9 = 9;
      }
      ppuVar6 = param_1;
      FUN_00567ce4(param_1,uVar9);
    }
    puStack_68 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    uStack_70 = 0;
    ppuVar22 = (undefined8 **)0x0;
    ppuVar18 = (undefined8 **)0x0;
    ppuVar20 = (undefined8 **)0x0;
    ppuVar21 = (undefined8 **)0x0;
    ppuVar17 = (undefined8 **)0x0;
LAB_00776894:
    do {
      puVar10 = *param_1;
      uVar15 = (uint)puVar10;
      if (((uVar15 >> 3 & 1) == 0) || (((ulong)puVar10 & 6) == 4)) {
        if (((ulong)puVar10 & 5) == 1) {
          lVar13 = -0x101;
          if ((undefined8 *)0x1ff < puVar10) {
            lVar13 = -0x100;
          }
          while (*param_1 == puVar10) {
            cVar1 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar19) {
              *param_1 = (undefined8 *)(lVar13 + (long)puVar10);
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') {
              return;
            }
          }
          goto LAB_00776920;
        }
        if ((uVar15 >> 6 & 1) != 0) goto LAB_00776924;
        do {
          if (*param_1 != puVar10) goto LAB_00776920;
          cVar1 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar19) {
            *param_1 = (undefined8 *)((ulong)puVar10 | 0x40);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((uVar15 >> 2 & 1) == 0) {
          pcVar8 = "Check %s failed: %s";
          uVar7 = 0x85e;
          goto LAB_00776f58;
        }
        ppuVar16 = (undefined8 **)((ulong)puVar10 & 0xffffffffffffff00);
        if ((((ulong)puVar10 & 1) != 0) && (0x100 < (long)((ulong)ppuVar16[5] & 0xffffffffffffff00))
           ) {
          ppuVar16[5] = ppuVar16[5] + -0x20;
          goto LAB_00776dac;
        }
        if (ppuVar17 != (undefined8 **)0x0) {
          if ((*(byte *)((long)ppuVar16 + 0x13) & 1) == 0) {
            pcVar8 = "Check %s failed: %s";
            uVar7 = 0x896;
            goto LAB_00776f58;
          }
          if (((ulong)ppuVar17[2] & 1) == 0) {
            *(undefined1 *)(ppuVar17 + 2) = 1;
            if (ppuVar17[1] != (undefined8 *)0x0) {
              pcVar8 = "Check %s failed: %s";
              uVar7 = 0x89c;
              goto LAB_00776f58;
            }
            if (ppuVar17 != ppuVar16) {
              puVar11 = *ppuVar17;
              if ((*ppuVar17[4] == *(long *)puVar11[4]) &&
                 (*(int *)(ppuVar17 + 3) == *(int *)(puVar11 + 3))) {
                plVar14 = (long *)ppuVar17[4][1];
                plVar12 = (long *)((long *)puVar11[4])[1];
                if ((plVar14 == (long *)0x0) || (plVar14[2] == 0)) {
                  if ((plVar12 == (long *)0x0) || (plVar12[2] == 0)) goto LAB_00776a04;
                }
                else if ((plVar12 != (long *)0x0) &&
                        (((plVar14[2] == plVar12[2] && (plVar14[3] == plVar12[3])) &&
                         (*plVar14 == *plVar12 && plVar14[1] == plVar12[1])))) {
LAB_00776a04:
                  ppuVar17[1] = puVar11;
                }
              }
            }
          }
        }
        puVar11 = (undefined8 *)(*ppuVar16)[4];
        ppuVar23 = ppuVar16;
        if (((undefined *)*puVar11 != &UNK_00811348) ||
           ((lVar13 = puVar11[1], lVar13 != 0 && (*(long *)(lVar13 + 0x10) != 0)))) {
          if ((ppuVar20 == (undefined8 **)0x0) ||
             ((ppuVar17 != ppuVar16 && ((undefined *)*ppuVar20[4] != &UNK_00811348)))) {
            if (ppuVar17 != ppuVar16) {
              if (ppuVar17 != (undefined8 **)0x0) {
                ppuVar23 = ppuVar17;
              }
              ppuVar23 = (undefined8 **)*ppuVar23;
              *(undefined1 *)(ppuVar16 + 2) = 0;
              if (ppuVar16[1] == (undefined8 *)0x0) {
                *(undefined1 *)((long)ppuVar16 + 0x13) = 1;
                *param_1 = puVar10;
                do {
                  *(undefined1 *)((long)ppuVar23 + 0x11) = 0;
                  ppuVar6 = (undefined8 **)ppuVar23[4][1];
                  if (ppuVar6 == (undefined8 **)0x0) {
LAB_00776ab4:
                    if (ppuVar20 == (undefined8 **)0x0) {
                      *(undefined1 *)((long)ppuVar23 + 0x11) = 1;
                      ppuVar21 = ppuVar17;
                      ppuVar20 = ppuVar23;
                      if ((undefined *)*ppuVar23[4] == &UNK_00811348) {
                        uStack_70 = 0x20;
                        ppuVar17 = ppuVar16;
                        goto LAB_00776894;
                      }
                    }
                    else if ((undefined *)*ppuVar23[4] == &UNK_00811370) {
                      *(undefined1 *)((long)ppuVar23 + 0x11) = 1;
                    }
                    else {
                      uStack_70 = 0x20;
                    }
                  }
                  else if (ppuVar6 != ppuVar22) {
                    if (((code *)ppuVar6[2] == (code *)0x0) ||
                       ((*(code *)ppuVar6[2])(), ((ulong)ppuVar6 & 1) != 0)) goto LAB_00776ab4;
                    ppuVar22 = (undefined8 **)ppuVar23[4][1];
                  }
                  if (((*(byte *)((long)ppuVar23 + 0x11) & 1) == 0) &&
                     (ppuVar17 = (undefined8 **)ppuVar23[1], ppuVar17 != (undefined8 **)0x0)) {
                    ppuVar4 = ppuVar23;
                    for (ppuVar3 = (undefined8 **)ppuVar17[1]; ppuVar2 = ppuVar17,
                        ppuVar3 != (undefined8 **)0x0; ppuVar3 = (undefined8 **)ppuVar3[1]) {
                      ppuVar4[1] = ppuVar3;
                      ppuVar17 = ppuVar3;
                      ppuVar6 = ppuVar2;
                      ppuVar4 = ppuVar2;
                    }
                    ppuVar23[1] = ppuVar2;
                    ppuVar23 = ppuVar2;
                  }
                  ppuVar17 = ppuVar16;
                  if (ppuVar23 == ppuVar16) goto LAB_00776894;
                  ppuVar17 = ppuVar23;
                  ppuVar23 = (undefined8 **)*ppuVar23;
                } while( true );
              }
              pcVar8 = "Check %s failed: %s";
              uVar7 = 0x8dc;
              goto LAB_00776f58;
            }
            ppuVar16[5] = (undefined8 *)0x0;
            *(undefined1 *)((long)ppuVar16 + 0x13) = 0;
            puVar10 = (undefined8 *)((ulong)puVar10 & 0xffffffffffffff96);
            goto LAB_00776dac;
          }
          if (ppuVar21 != (undefined8 **)0x0) {
            ppuVar23 = ppuVar21;
          }
          if ((undefined8 **)*ppuVar23 == ppuVar20) goto LAB_00776c7c;
          pcVar8 = "Check %s failed: %s";
          uVar7 = 0x919;
          goto LAB_00776f58;
        }
        *(undefined1 *)((long)*ppuVar16 + 0x11) = 1;
        uStack_70 = 0x20;
LAB_00776c7c:
        bVar19 = false;
        ppuVar6 = ppuVar16;
        ppuVar17 = &puStack_68;
        goto LAB_00776c88;
      }
      while (*param_1 == puVar10) {
        cVar1 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar19) {
          *param_1 = (undefined8 *)((ulong)puVar10 & 0xffffffffffffffd7);
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
LAB_00776920:
      ClearExclusiveLocal();
LAB_00776924:
      FUN_00566c78(ppuVar18,0);
      ppuVar6 = ppuVar18;
    } while( true );
  }
  if ((~uVar15 & 9) == 0) {
    pcVar8 = 
    "Check (v & (kMuWriter | kMuReader)) != (kMuWriter | kMuReader) failed: %s: Mutex corrupt: both reader and writer lock held: %p"
    ;
    uVar7 = 0x7a4;
  }
  else {
    if (((ulong)puVar10 & 0x24) != 0x20) goto LAB_0077683c;
    pcVar8 = 
    "Check (v & (kMuWait | kMuWrWait)) != kMuWrWait failed: %s: Mutex corrupt: waiting writer with no waiters: %p"
    ;
    uVar7 = 0x7a7;
  }
  goto LAB_00776f58;
  while ((ppuVar17 = ppuVar21, ppuVar23 != ppuVar6 || (!bVar19))) {
LAB_00776c88:
    ppuVar21 = (undefined8 **)*ppuVar23;
    if (*(char *)((long)ppuVar21 + 0x11) == '\x01') {
      if (ppuVar23[1] != (undefined8 *)0x0) {
        pcVar8 = "Check %s failed: %s";
        uVar7 = 0x41a;
        goto LAB_00776f58;
      }
      func_0x005672bc();
      *ppuVar21 = *ppuVar17;
      *ppuVar17 = ppuVar21;
      if ((ppuVar6 != ppuVar16) || ((undefined *)*ppuVar21[4] == &UNK_00811348)) break;
    }
    else {
      ppuVar23 = (undefined8 **)ppuVar21[1];
      if (ppuVar23 == (undefined8 **)0x0) {
        bVar19 = true;
        ppuVar23 = ppuVar21;
        ppuVar21 = ppuVar17;
      }
      else {
        ppuVar20 = ppuVar21;
        for (ppuVar18 = (undefined8 **)ppuVar23[1]; ppuVar18 != (undefined8 **)0x0;
            ppuVar18 = (undefined8 **)ppuVar18[1]) {
          ppuVar20[1] = ppuVar18;
          ppuVar20 = ppuVar23;
          ppuVar23 = ppuVar18;
        }
        ppuVar21[1] = ppuVar23;
        bVar19 = true;
        ppuVar21 = ppuVar17;
      }
    }
  }
  if (puStack_68 != (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
    if (ppuVar6 == (undefined8 **)0x0) {
      puVar10 = (undefined8 *)((ulong)puVar10 & 0x10 | 2);
    }
    else {
      ppuVar6[5] = (undefined8 *)0x0;
      *(undefined1 *)((long)ppuVar6 + 0x13) = 0;
      puVar10 = (undefined8 *)(uStack_70 | (ulong)ppuVar6 | (ulong)puVar10 & 0x10 | 6);
    }
LAB_00776dac:
    puVar11 = puStack_68;
    *param_1 = puVar10;
    if (puStack_68 != (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      do {
        if ((*(byte *)((long)puVar11 + 0x12) & 1) == 0) {
          lVar13 = puVar11[4];
          *(undefined8 ***)(lVar13 + 0x30) = ppuVar6;
          *(undefined1 *)(lVar13 + 0x38) = 1;
        }
        puVar10 = (undefined8 *)*puVar11;
        *puVar11 = 0;
        *(undefined4 *)((long)puVar11 + 0x1c) = 0;
        FUN_005666e0(puVar11);
        puVar11 = puVar10;
        puStack_68 = puVar10;
      } while (puVar10 != (undefined8 *)((long)&MACH_HEADER.magic + 1));
    }
    return;
  }
  pcVar8 = "Check %s failed: %s";
  uVar7 = 0x930;
LAB_00776f58:
  FUN_00584c60(3,"mutex.cc",uVar7,pcVar8);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x776f60);
  (*pcVar5)();
}



/* Entry: 00568070; end: 0056859f;  */

long * FUN_00568070(long *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  byte bVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong *puVar14;
  long *plVar15;
  ulong *puVar16;
  long *plVar17;
  undefined4 uStack_4c;
  
  puVar16 = (ulong *)param_2[5];
  if (puVar16 != (ulong *)0x0) {
    param_2[5] = 0;
    do {
      uVar7 = *puVar16;
      if ((uVar7 & 1) == 0) {
        if (*puVar16 == uVar7) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar16,0x10);
          if (bVar3) {
            *puVar16 = uVar7 | 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            puVar10 = (ulong *)param_2[4];
            if (puVar10[4] == 0) {
              puVar10[4] = (ulong)param_2;
              puVar1 = (ulong *)(uVar7 & 0xfffffffffffffffc);
              puVar14 = puVar10;
              if (puVar1 != (ulong *)0x0) {
                *puVar10 = *puVar1;
                puVar14 = puVar1;
              }
              *puVar14 = (ulong)puVar10;
              *(undefined4 *)((long)puVar10 + 0x1c) = 1;
              *puVar16 = uVar7 & 2 | param_2[4];
              return param_1;
            }
            FUN_00584c60(3,"mutex.cc",0xa13,"Check %s failed: %s");
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x568538);
            (*pcVar5)();
          }
        }
        else {
          ClearExclusiveLocal();
        }
      }
      FUN_00566c78();
    } while( true );
  }
  plVar17 = (long *)param_2[4];
  if (((undefined8 *)plVar17[4] != (undefined8 *)0x0 && (undefined8 *)plVar17[4] != param_2) &&
     ((*(byte *)((long)plVar17 + 0x14) & 1) == 0)) {
    FUN_00584c60(3,"mutex.cc",0x394,"Check %s failed: %s");
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x56856c);
    (*pcVar5)();
  }
  plVar17[4] = (long)param_2;
  plVar17[1] = 0;
  *(undefined2 *)(plVar17 + 2) = 1;
  *(byte *)((long)plVar17 + 0x12) = (byte)(param_4 >> 1) & 1;
  plVar13 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (plVar17[6] < (long)plVar13) {
    plVar8 = plVar13;
    _pthread_self();
    iVar6 = (int)plVar8;
    _pthread_getschedparam();
    if (iVar6 == 0) {
      *(undefined4 *)(plVar17 + 3) = uStack_4c;
      plVar17[6] = (long)(plVar13 + 125000000);
    }
    else {
      FUN_00584c60(2,"mutex.cc",0x3a4,"pthread_getschedparam failed: %d");
    }
  }
  plVar13 = plVar17;
  if (param_1 == (long *)0x0) {
    *plVar17 = (long)plVar17;
    plVar17[5] = param_3;
    *(undefined1 *)((long)plVar17 + 0x13) = 0;
    goto LAB_005684c8;
  }
  iVar6 = (int)plVar17[3];
  lVar12 = param_1[3];
  bVar9 = *(byte *)((long)param_1 + 0x13);
  if (iVar6 <= (int)lVar12) {
LAB_005681cc:
    *plVar17 = *param_1;
    *param_1 = (long)plVar17;
    plVar17[5] = param_1[5];
    *(byte *)((long)plVar17 + 0x13) = bVar9;
    if (((char)param_1[2] == '\x01') && ((int)lVar12 == iVar6)) {
      if (*(long *)param_1[4] == *(long *)plVar17[4]) {
        plVar11 = (long *)((long *)param_1[4])[1];
        plVar8 = (long *)((long *)plVar17[4])[1];
        if ((plVar11 == (long *)0x0) || (plVar11[2] == 0)) {
          if ((plVar8 != (long *)0x0) && (plVar8[2] != 0)) goto LAB_005684c8;
        }
        else if ((((plVar8 == (long *)0x0) || (plVar11[2] != plVar8[2])) ||
                 (plVar11[3] != plVar8[3])) || (*plVar11 != *plVar8 || plVar11[1] != plVar8[1]))
        goto LAB_005684c8;
        param_1[1] = (long)plVar17;
      }
    }
    goto LAB_005684c8;
  }
  plVar8 = param_1;
  if ((bVar9 & 1) == 0) {
    do {
      plVar11 = plVar8;
      plVar13 = (long *)*plVar11;
      plVar15 = (long *)plVar13[1];
      plVar8 = plVar13;
      if (plVar15 != (long *)0x0) {
        plVar4 = plVar13;
        plVar8 = plVar15;
        for (plVar15 = (long *)plVar15[1]; plVar15 != (long *)0x0; plVar15 = (long *)plVar15[1]) {
          plVar4[1] = (long)plVar15;
          plVar4 = plVar8;
          plVar8 = plVar15;
        }
        plVar13[1] = (long)plVar8;
      }
    } while (iVar6 <= (int)plVar8[3]);
  }
  else if (((undefined *)*param_2 != &UNK_00811348) ||
          ((plVar11 = param_1, param_2[1] != 0 && (*(long *)(param_2[1] + 0x10) != 0)))) {
    bVar9 = 1;
    goto LAB_005681cc;
  }
  lVar12 = plVar11[1];
  *plVar17 = *plVar11;
  *plVar11 = (long)plVar17;
  if (lVar12 != 0) {
    if ((*(long *)plVar11[4] != *(long *)plVar17[4]) || ((int)plVar11[3] != iVar6)) {
LAB_0056856c:
      FUN_00584c60(3,"mutex.cc",0x3db,"Check %s failed: %s");
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x5685a0);
      (*pcVar5)();
    }
    plVar8 = (long *)((long *)plVar11[4])[1];
    plVar13 = (long *)((long *)plVar17[4])[1];
    if ((plVar8 == (long *)0x0) || (plVar8[2] == 0)) {
      if ((plVar13 != (long *)0x0) && (plVar13[2] != 0)) goto LAB_0056856c;
    }
    else if ((plVar13 == (long *)0x0) ||
            (((plVar8[2] != plVar13[2] || (plVar8[3] != plVar13[3])) ||
             (*plVar8 != *plVar13 || plVar8[1] != plVar13[1])))) goto LAB_0056856c;
  }
  if (plVar11 == param_1) {
    plVar8 = (long *)plVar17[4];
  }
  else {
    plVar8 = (long *)plVar17[4];
    if ((((char)plVar11[2] == '\x01') && (*(long *)plVar11[4] == *plVar8)) &&
       ((int)plVar11[3] == iVar6)) {
      plVar15 = (long *)((long *)plVar11[4])[1];
      plVar13 = (long *)plVar8[1];
      if ((plVar15 == (long *)0x0) || (plVar15[2] == 0)) {
        if ((plVar13 == (long *)0x0) || (plVar13[2] == 0)) goto LAB_005684fc;
      }
      else if ((((plVar13 != (long *)0x0) && (plVar15[2] == plVar13[2])) &&
               (plVar15[3] == plVar13[3])) && (*plVar15 == *plVar13 && plVar15[1] == plVar13[1])) {
LAB_005684fc:
        plVar11[1] = (long)plVar17;
      }
    }
  }
  lVar12 = *plVar17;
  plVar13 = param_1;
  if ((*plVar8 == **(long **)(lVar12 + 0x20)) && (iVar6 == *(int *)(lVar12 + 0x18))) {
    plVar11 = (long *)plVar8[1];
    plVar8 = (long *)(*(long **)(lVar12 + 0x20))[1];
    if ((plVar11 == (long *)0x0) || (plVar11[2] == 0)) {
      if ((plVar8 != (long *)0x0) && (plVar8[2] != 0)) goto LAB_005684c8;
    }
    else if ((plVar8 == (long *)0x0) ||
            (((plVar11[2] != plVar8[2] || (plVar11[3] != plVar8[3])) ||
             (*plVar11 != *plVar8 || plVar11[1] != plVar8[1])))) goto LAB_005684c8;
    plVar17[1] = lVar12;
  }
LAB_005684c8:
  *(undefined4 *)((long)plVar17 + 0x1c) = 1;
  return plVar13;
}



/* Entry: 005685a0; end: 005685fb;  */

void FUN_005685a0(undefined8 *param_1)

{
  code *pcVar1;
  
  if (((uint)*param_1 >> 3 & 1) != 0) {
    return;
  }
  FUN_005685fc();
  FUN_00584c60(3,"mutex.cc",0x9a7,"thread should hold write lock on Mutex %p %s");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5685fc);
  (*pcVar1)();
}



/* Entry: 005685fc; end: 00568723;  */

int * FUN_005685fc(ulong param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  uVar4 = uRam0000000000b6b538;
  if ((uRam0000000000b6b538 & 1) == 0) {
    uVar5 = uRam0000000000b6b538 | 1;
    do {
      uVar3 = uRam0000000000b6b538;
      if (uRam0000000000b6b538 != uVar4) {
        ClearExclusiveLocal();
        break;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb6b538,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        uRam0000000000b6b538 = uVar5;
      }
    } while (cVar1 != '\0');
    if ((uVar3 & 1) == 0) {
      piVar6 = *(int **)((param_1 % 0x407) * 8 + 0xb69500);
      goto joined_r0x005686c0;
    }
  }
  FUN_00777048(0xb6b538);
  piVar6 = *(int **)((param_1 % 0x407) * 8 + 0xb69500);
joined_r0x005686c0:
  do {
    if (piVar6 == (int *)0x0) {
LAB_005686d4:
      uVar4 = uRam0000000000b6b538 & 2;
      do {
        uVar5 = uRam0000000000b6b538;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0xb6b538,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          uRam0000000000b6b538 = uVar4;
        }
      } while (cVar1 != '\0');
      if (7 < uVar5) {
        FUN_007771d4(0xb6b538);
        return piVar6;
      }
      return piVar6;
    }
    if ((*(ulong *)(piVar6 + 4) ^ param_1) == 0xf03a5f7bf03a5f7b) {
      *piVar6 = *piVar6 + 1;
      goto LAB_005686d4;
    }
    piVar6 = *(int **)(piVar6 + 2);
  } while( true );
}



/* Entry: 00568724; end: 00568b0f;  */

/* WARNING: Removing unreachable block (ram,0x005687cc) */
/* WARNING: Removing unreachable block (ram,0x005687b4) */

void FUN_00568724(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_50;
  int iStack_48;
  
  plVar7 = &lStack_50;
  do {
    piVar4 = param_1;
    if (*param_1 != 0) {
      iVar14 = 0;
      ClearExclusiveLocal();
      goto LAB_00568788;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0x65c2937b;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_00568838;
LAB_00568788:
  do {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      puVar8 = &UNK_00811398;
      iVar11 = 0x65c2937b;
LAB_005687e4:
      do {
        if (*param_1 != iVar1) {
          ClearExclusiveLocal();
          goto LAB_00568788;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = iVar11;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      if (iVar1 != 0xdd) {
        if (iVar1 == 0x65c2937b) {
          puVar8 = &UNK_008113a4;
          iVar11 = 0x5a308d2;
          goto LAB_005687e4;
        }
        iVar14 = iVar14 + 1;
        piVar4 = param_1;
        FUN_00576d44(param_1,iVar1,iVar14,0);
        goto LAB_00568788;
      }
      puVar8 = &UNK_008113b0;
    }
  } while (puVar8[8] != '\x01');
  if (iVar1 != 0) {
    return;
  }
LAB_00568838:
  if (iRam0000000000b6b698 != 0xdd) {
    piVar4 = (int *)0xb6b698;
    func_0x00576bb4();
  }
  if (1 < iRam0000000000b6b694) {
    uRam0000000000b694c4 = 0x1388000005dc;
    uRam0000000000b694cc = 0xfa;
    lRam0000000000b694d0 = 0;
    uRam0000000000b694d8 = 40000;
    goto LAB_00568acc;
  }
  uRam0000000000b694c4 = 0;
  uRam0000000000b694cc = 0;
  __ZNSt3__16chrono12system_clock3nowEv();
  lVar5 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  lVar6 = (long)piVar4 - lVar5;
  if (lVar6 < 0) {
    uVar9 = (ulong)(lVar6 * -1000) % 1000000000;
    lVar13 = -uVar9;
    uVar15 = (lVar13 >> 0x3d) - (ulong)(lVar6 * -1000) / 1000000000;
    uVar16 = 0;
    if (uVar9 != 0) {
      uVar16 = (ulong)((int)lVar13 * 4 + 4000000000);
    }
  }
  else {
    uVar15 = (ulong)(lVar6 * 1000) / 1000000000;
    uVar16 = ((ulong)(lVar6 * 1000) % 1000000000) * 4;
  }
  _sched_yield();
  __ZNSt3__16chrono12system_clock3nowEv();
  lVar6 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  lVar5 = lVar5 - lVar6;
  if (lVar5 < 0) {
    uVar10 = (ulong)(lVar5 * -1000) % 1000000000;
    lVar6 = -uVar10;
    uVar12 = (lVar6 >> 0x3d) - (ulong)(lVar5 * -1000) / 1000000000;
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = (ulong)((int)lVar6 * 4 + 4000000000);
    }
  }
  else {
    uVar12 = (ulong)(lVar5 * 1000) / 1000000000;
    uVar9 = ((ulong)(lVar5 * 1000) % 1000000000) * 4;
  }
  iStack_48 = (int)uVar9 + -0x1194d800;
  if (uVar9 >= uVar16) {
    iStack_48 = (int)uVar9;
  }
  lStack_50 = (uVar12 - uVar15) - (ulong)(uVar9 < uVar16);
  iStack_48 = iStack_48 - (int)uVar16;
  if ((long)uVar15 < 0) {
    if (lStack_50 < (long)uVar12) {
      lStack_50 = 0x7fffffffffffffff;
      goto LAB_00568a18;
    }
  }
  else if ((long)uVar12 < lStack_50) {
    lStack_50 = -0x8000000000000000;
LAB_00568a18:
    iStack_48 = -1;
  }
  FUN_0056f7d8(&lStack_50,5);
  lStack_50 = 0;
  iStack_48 = 4000000;
  bVar3 = 4000000 < *(uint *)(plVar7 + 1);
  if (*plVar7 != 0) {
    bVar3 = 0 < *plVar7;
  }
  plVar7 = &lStack_50;
  if (!bVar3) {
    plVar7 = (long *)0xb694d0;
  }
  lStack_50 = 0;
  iStack_48 = 40000;
  bVar3 = *(uint *)(plVar7 + 1) >> 6 < 0x271;
  if (*plVar7 != 0) {
    bVar3 = *plVar7 < 0;
  }
  plVar7 = &lStack_50;
  if (!bVar3) {
    plVar7 = (long *)0xb694d0;
  }
  uRam0000000000b694d8 = (undefined4)plVar7[1];
  lRam0000000000b694d0 = *plVar7;
LAB_00568acc:
  do {
    iVar14 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0xdd;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar14 != 0x5a308d2) {
    return;
  }
  FUN_00576e00(param_1,1);
  return;
}



/* Entry: 00568b10; end: 00568bfb;  */

undefined1 * FUN_00568b10(undefined8 param_1,uint param_2,ulong param_3)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  dword *pdVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  short *psVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  ulong uVar12;
  short *psVar13;
  short *psVar14;
  ulong uVar15;
  undefined1 *puVar16;
  short *psVar17;
  ulong uVar18;
  undefined8 ***pppuStack_6f8;
  ulong uStack_6f0;
  undefined8 uStack_6e8;
  undefined1 *puStack_6e0;
  undefined1 auStack_6d8 [1024];
  long lStack_2d8;
  undefined1 auStack_270 [8];
  long lStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined1 auStack_248 [512];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar6 = &PTR___tlv_bootstrap_00b2c360;
  (*(code *)PTR___tlv_bootstrap_00b2c360)();
  uVar15 = param_3;
  if ((*(int *)ppuVar6 == 0) && ((bRam0000000000b1e650 & 1) == 0)) {
    *(undefined4 *)ppuVar6 = 1;
    puVar16 = auStack_248;
    _backtrace(puVar16,0x40);
    iVar1 = (int)param_3 + 2;
    uVar3 = (int)puVar16 - iVar1;
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    if ((int)param_2 <= (int)uVar3) {
      uVar3 = param_2;
    }
    puVar16 = (undefined1 *)(ulong)uVar3;
    if (0 < (int)uVar3) {
      uVar15 = (long)puVar16 << 3;
      _memcpy(param_1,auStack_248 + (long)iVar1 * 8);
    }
    *(int *)ppuVar6 = *(int *)ppuVar6 + -1;
  }
  else {
    puVar16 = (undefined1 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return puVar16;
  }
  ___stack_chk_fail();
  puVar16 = auStack_270;
  pcStack_258 = FUN_00568bfc;
  lStack_268 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = 1;
  puStack_260 = &stack0xfffffffffffffff0;
  _backtrace();
  bRam0000000000b1e650 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_268) {
    return puVar16;
  }
  ___stack_chk_fail();
  puVar7 = (undefined1 *)0x0;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_6e0 = puVar16;
  if ((puVar16 != (undefined1 *)0x0) && (0 < (int)uVar15)) {
    ppuVar8 = &puStack_6e0;
    _backtrace_symbols(ppuVar8,1);
    if (ppuVar8 == (undefined1 **)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      psVar17 = (short *)*ppuVar8;
      psVar9 = psVar17;
      _strlen();
      if (2 < (long)psVar9) {
        psVar2 = (short *)((long)psVar17 + (long)psVar9);
        psVar14 = psVar17;
        psVar13 = psVar9;
        while (_memchr(psVar14,0x20,psVar13 + -1), psVar14 != (short *)0x0) {
          if (*psVar14 == 0x3020 && (char)psVar14[1] == 'x') {
            if ((psVar14 != psVar2) &&
               (psVar14 = (short *)((long)psVar14 - (long)psVar17),
               psVar14 != (short *)0xffffffffffffffff)) {
              if (psVar9 <= psVar14) goto LAB_00568f94;
              uVar18 = (long)psVar9 - ((long)psVar14 + 1);
              if (0 < (long)uVar18) {
                psVar17 = (short *)((long)psVar17 + (long)((long)psVar14 + 1));
                psVar9 = psVar17;
                uVar12 = uVar18;
                goto LAB_00568d5c;
              }
            }
            break;
          }
          psVar14 = (short *)((long)psVar14 + 1);
          psVar13 = (short *)((long)psVar2 - (long)psVar14);
          if ((long)psVar13 < 3) break;
        }
      }
LAB_00568e48:
      pppuStack_6f8 = (undefined8 ****)0x0;
      uStack_6f0 = 0;
      uStack_6e8 = 0;
      ppppuVar10 = &pppuStack_6f8;
LAB_00568e54:
      _free(ppuVar8);
      FUN_00568fe4(ppppuVar10,auStack_6d8,0x400);
      if ((int)ppppuVar10 == 0) {
        ppppuVar10 = (undefined8 ****)pppuStack_6f8;
        if (-1 < (long)uStack_6e8) {
          ppppuVar10 = &pppuStack_6f8;
        }
        _strncpy(lVar11,ppppuVar10,uVar15 & 0xffffffff);
      }
      else {
        puVar16 = auStack_6d8;
        _strlen();
        if (puVar16 + 1 <= (undefined1 *)(uVar15 & 0xffffffff)) {
          _memcpy(lVar11,auStack_6d8);
        }
      }
      lVar11 = lVar11 + (uVar15 & 0xffffffff);
      if (*(char *)(lVar11 + -1) != '\0') {
        uVar15 = (uVar15 & 0xffffffff) - 1;
        if (2 < uVar15) {
          uVar15 = 3;
        }
        _memcpy((lVar11 + -1) - uVar15,"...");
        *(undefined1 *)(lVar11 + -1) = 0;
      }
      if ((long)uStack_6e8 < 0) {
        __ZdlPv(pppuStack_6f8);
      }
      puVar7 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2d8) {
    return puVar7;
  }
  ___stack_chk_fail(puVar7);
LAB_00568f94:
  FUN_00435534("string_view::substr");
LAB_00568fb8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x568fbc);
  (*pcVar5)();
LAB_00568d5c:
  _memchr(psVar9,0x20,uVar12);
  if (psVar9 == (short *)0x0) goto LAB_00568e48;
  if ((char)*psVar9 == ' ') {
    if ((psVar9 != psVar2) && (uVar12 = (long)psVar9 - (long)psVar17, uVar12 != 0xffffffffffffffff))
    {
      if (uVar18 <= uVar12) {
        FUN_00435534("string_view::substr");
        goto LAB_00568fb8;
      }
      uVar18 = uVar18 - (uVar12 + 1);
      if (2 < (long)uVar18) {
        psVar17 = (short *)((long)psVar17 + uVar12 + 1);
        psVar9 = psVar17;
        uVar12 = uVar18;
        goto LAB_00568dc8;
      }
    }
    goto LAB_00568e48;
  }
  psVar9 = (short *)((long)psVar9 + 1);
  uVar12 = (long)psVar2 - (long)psVar9;
  if ((long)uVar12 < 1) goto LAB_00568e48;
  goto LAB_00568d5c;
LAB_00568dc8:
  _memchr(psVar9,0x20,uVar12 - 2);
  if (psVar9 == (short *)0x0) goto LAB_00568e48;
  if (*psVar9 == 0x2b20 && (char)psVar9[1] == ' ') {
    if ((psVar9 != psVar2) && (uVar12 = (long)psVar9 - (long)psVar17, uVar12 != 0xffffffffffffffff))
    {
      if (uVar12 <= uVar18) {
        uVar18 = uVar12;
      }
      if (0x7ffffffffffffff6 < uVar18) {
        FUN_0040d740();
        goto LAB_00568fb8;
      }
      if (uVar18 < 0x17) {
        uStack_6e8 = CONCAT17((char)uVar18,(undefined7)uStack_6e8);
        ppppuVar10 = &pppuStack_6f8;
        if (psVar9 != psVar17) goto LAB_00568f64;
      }
      else {
        pdVar4 = &MACH_HEADER.flags;
        if ((dword *)(uVar18 | 7) != (dword *)0x17) {
          pdVar4 = (dword *)(uVar18 | 7);
        }
        ppppuVar10 = (undefined8 ****)((long)pdVar4 + 1U);
        __Znwm();
        uStack_6e8 = (long)pdVar4 + 1U | 0x8000000000000000;
        pppuStack_6f8 = ppppuVar10;
        uStack_6f0 = uVar18;
LAB_00568f64:
        _memmove(ppppuVar10,psVar17,uVar18);
      }
      *(undefined1 *)((long)ppppuVar10 + uVar18) = 0;
      ppppuVar10 = (undefined8 ****)pppuStack_6f8;
      if (-1 < (long)uStack_6e8) {
        ppppuVar10 = &pppuStack_6f8;
      }
      goto LAB_00568e54;
    }
    goto LAB_00568e48;
  }
  psVar9 = (short *)((long)psVar9 + 1);
  uVar12 = (long)psVar2 - (long)psVar9;
  if ((long)uVar12 < 3) goto LAB_00568e48;
  goto LAB_00568dc8;
}



/* Entry: 00568bfc; end: 00568c53;  */

void FUN_00568bfc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  short *psVar1;
  dword *pdVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  short *psVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  ulong uVar10;
  short *psVar11;
  short *psVar12;
  ulong uVar13;
  short *psVar14;
  undefined8 ***pppuStack_4a8;
  ulong uStack_4a0;
  undefined8 uStack_498;
  undefined1 *puStack_490;
  undefined1 auStack_488 [1024];
  long lStack_88;
  undefined1 auStack_20 [8];
  long lStack_18;
  
  puVar4 = auStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar9 = 1;
  _backtrace();
  uRam0000000000b1e650 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = 0;
  lStack_88 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_490 = puVar4;
  if ((puVar4 != (undefined1 *)0x0) && (0 < (int)param_3)) {
    ppuVar6 = &puStack_490;
    _backtrace_symbols(ppuVar6,1);
    if (ppuVar6 == (undefined1 **)0x0) {
      uVar5 = 0;
    }
    else {
      psVar14 = (short *)*ppuVar6;
      psVar7 = psVar14;
      _strlen();
      if (2 < (long)psVar7) {
        psVar1 = (short *)((long)psVar14 + (long)psVar7);
        psVar12 = psVar14;
        psVar11 = psVar7;
        while (_memchr(psVar12,0x20,psVar11 + -1), psVar12 != (short *)0x0) {
          if (*psVar12 == 0x3020 && (char)psVar12[1] == 'x') {
            if ((psVar12 != psVar1) &&
               (psVar12 = (short *)((long)psVar12 - (long)psVar14),
               psVar12 != (short *)0xffffffffffffffff)) {
              if (psVar7 <= psVar12) goto LAB_00568f94;
              uVar13 = (long)psVar7 - ((long)psVar12 + 1);
              if (0 < (long)uVar13) {
                psVar14 = (short *)((long)psVar14 + (long)((long)psVar12 + 1));
                psVar7 = psVar14;
                uVar10 = uVar13;
                goto LAB_00568d5c;
              }
            }
            break;
          }
          psVar12 = (short *)((long)psVar12 + 1);
          psVar11 = (short *)((long)psVar1 - (long)psVar12);
          if ((long)psVar11 < 3) break;
        }
      }
LAB_00568e48:
      pppuStack_4a8 = (undefined8 ****)0x0;
      uStack_4a0 = 0;
      uStack_498 = 0;
      ppppuVar8 = &pppuStack_4a8;
LAB_00568e54:
      _free(ppuVar6);
      FUN_00568fe4(ppppuVar8,auStack_488,0x400);
      if ((int)ppppuVar8 == 0) {
        ppppuVar8 = (undefined8 ****)pppuStack_4a8;
        if (-1 < (long)uStack_498) {
          ppppuVar8 = &pppuStack_4a8;
        }
        _strncpy(lVar9,ppppuVar8,param_3 & 0xffffffff);
      }
      else {
        puVar4 = auStack_488;
        _strlen();
        if (puVar4 + 1 <= (undefined1 *)(param_3 & 0xffffffff)) {
          _memcpy(lVar9,auStack_488);
        }
      }
      lVar9 = lVar9 + (param_3 & 0xffffffff);
      if (*(char *)(lVar9 + -1) != '\0') {
        uVar13 = (param_3 & 0xffffffff) - 1;
        if (2 < uVar13) {
          uVar13 = 3;
        }
        _memcpy((lVar9 + -1) - uVar13,"...");
        *(undefined1 *)(lVar9 + -1) = 0;
      }
      if ((long)uStack_498 < 0) {
        __ZdlPv(pppuStack_4a8);
      }
      uVar5 = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_88) {
    return;
  }
  ___stack_chk_fail(uVar5);
LAB_00568f94:
  FUN_00435534("string_view::substr");
LAB_00568fb8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x568fbc);
  (*pcVar3)();
LAB_00568d5c:
  _memchr(psVar7,0x20,uVar10);
  if (psVar7 == (short *)0x0) goto LAB_00568e48;
  if ((char)*psVar7 == ' ') {
    if ((psVar7 != psVar1) && (uVar10 = (long)psVar7 - (long)psVar14, uVar10 != 0xffffffffffffffff))
    {
      if (uVar13 <= uVar10) {
        FUN_00435534("string_view::substr");
        goto LAB_00568fb8;
      }
      uVar13 = uVar13 - (uVar10 + 1);
      if (2 < (long)uVar13) {
        psVar14 = (short *)((long)psVar14 + uVar10 + 1);
        psVar7 = psVar14;
        uVar10 = uVar13;
        goto LAB_00568dc8;
      }
    }
    goto LAB_00568e48;
  }
  psVar7 = (short *)((long)psVar7 + 1);
  uVar10 = (long)psVar1 - (long)psVar7;
  if ((long)uVar10 < 1) goto LAB_00568e48;
  goto LAB_00568d5c;
LAB_00568dc8:
  _memchr(psVar7,0x20,uVar10 - 2);
  if (psVar7 == (short *)0x0) goto LAB_00568e48;
  if (*psVar7 == 0x2b20 && (char)psVar7[1] == ' ') {
    if ((psVar7 != psVar1) && (uVar10 = (long)psVar7 - (long)psVar14, uVar10 != 0xffffffffffffffff))
    {
      if (uVar10 <= uVar13) {
        uVar13 = uVar10;
      }
      if (0x7ffffffffffffff6 < uVar13) {
        FUN_0040d740();
        goto LAB_00568fb8;
      }
      if (uVar13 < 0x17) {
        uStack_498 = CONCAT17((char)uVar13,(undefined7)uStack_498);
        ppppuVar8 = &pppuStack_4a8;
        if (psVar7 != psVar14) goto LAB_00568f64;
      }
      else {
        pdVar2 = &MACH_HEADER.flags;
        if ((dword *)(uVar13 | 7) != (dword *)0x17) {
          pdVar2 = (dword *)(uVar13 | 7);
        }
        ppppuVar8 = (undefined8 ****)((long)pdVar2 + 1U);
        __Znwm();
        uStack_498 = (long)pdVar2 + 1U | 0x8000000000000000;
        pppuStack_4a8 = ppppuVar8;
        uStack_4a0 = uVar13;
LAB_00568f64:
        _memmove(ppppuVar8,psVar14,uVar13);
      }
      *(undefined1 *)((long)ppppuVar8 + uVar13) = 0;
      ppppuVar8 = (undefined8 ****)pppuStack_4a8;
      if (-1 < (long)uStack_498) {
        ppppuVar8 = &pppuStack_4a8;
      }
      goto LAB_00568e54;
    }
    goto LAB_00568e48;
  }
  psVar7 = (short *)((long)psVar7 + 1);
  uVar10 = (long)psVar1 - (long)psVar7;
  if ((long)uVar10 < 3) goto LAB_00568e48;
  goto LAB_00568dc8;
}



/* Entry: 00568c54; end: 00568fe3;  */

void FUN_00568c54(long param_1,long param_2,uint param_3)

{
  short *psVar1;
  dword *pdVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  short *psVar6;
  undefined1 *puVar7;
  undefined8 ****ppppuVar8;
  ulong uVar9;
  short *psVar10;
  short *psVar11;
  ulong uVar12;
  short *psVar13;
  undefined8 ***pppuStack_488;
  ulong uStack_480;
  undefined8 uStack_478;
  long lStack_470;
  undefined1 auStack_468 [1024];
  long lStack_68;
  
  uVar4 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_470 = param_1;
  if ((param_1 != 0) && (0 < (int)param_3)) {
    plVar5 = &lStack_470;
    _backtrace_symbols(plVar5,1);
    if (plVar5 == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      psVar13 = (short *)*plVar5;
      psVar6 = psVar13;
      _strlen();
      if (2 < (long)psVar6) {
        psVar1 = (short *)((long)psVar13 + (long)psVar6);
        psVar11 = psVar13;
        psVar10 = psVar6;
        while (_memchr(psVar11,0x20,psVar10 + -1), psVar11 != (short *)0x0) {
          if (*psVar11 == 0x3020 && (char)psVar11[1] == 'x') {
            if ((psVar11 != psVar1) &&
               (psVar11 = (short *)((long)psVar11 - (long)psVar13),
               psVar11 != (short *)0xffffffffffffffff)) {
              if (psVar6 <= psVar11) goto LAB_00568f94;
              uVar12 = (long)psVar6 - ((long)psVar11 + 1);
              if (0 < (long)uVar12) {
                psVar13 = (short *)((long)psVar13 + (long)((long)psVar11 + 1));
                psVar6 = psVar13;
                uVar9 = uVar12;
                goto LAB_00568d5c;
              }
            }
            break;
          }
          psVar11 = (short *)((long)psVar11 + 1);
          psVar10 = (short *)((long)psVar1 - (long)psVar11);
          if ((long)psVar10 < 3) break;
        }
      }
LAB_00568e48:
      pppuStack_488 = (undefined8 ****)0x0;
      uStack_480 = 0;
      uStack_478 = 0;
      ppppuVar8 = &pppuStack_488;
LAB_00568e54:
      _free(plVar5);
      FUN_00568fe4(ppppuVar8,auStack_468,0x400);
      if ((int)ppppuVar8 == 0) {
        ppppuVar8 = (undefined8 ****)pppuStack_488;
        if (-1 < (long)uStack_478) {
          ppppuVar8 = &pppuStack_488;
        }
        _strncpy(param_2,ppppuVar8,param_3);
      }
      else {
        puVar7 = auStack_468;
        _strlen();
        if (puVar7 + 1 <= (undefined1 *)(ulong)param_3) {
          _memcpy(param_2,auStack_468);
        }
      }
      param_2 = param_2 + (ulong)param_3;
      if (*(char *)(param_2 + -1) != '\0') {
        uVar12 = (ulong)param_3 - 1;
        if (2 < uVar12) {
          uVar12 = 3;
        }
        _memcpy((param_2 + -1) - uVar12,"...");
        *(undefined1 *)(param_2 + -1) = 0;
      }
      if ((long)uStack_478 < 0) {
        __ZdlPv(pppuStack_488);
      }
      uVar4 = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail(uVar4);
LAB_00568f94:
  FUN_00435534("string_view::substr");
LAB_00568fb8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x568fbc);
  (*pcVar3)();
LAB_00568d5c:
  _memchr(psVar6,0x20,uVar9);
  if (psVar6 == (short *)0x0) goto LAB_00568e48;
  if ((char)*psVar6 == ' ') {
    if ((psVar6 != psVar1) && (uVar9 = (long)psVar6 - (long)psVar13, uVar9 != 0xffffffffffffffff)) {
      if (uVar12 <= uVar9) {
        FUN_00435534("string_view::substr");
        goto LAB_00568fb8;
      }
      uVar12 = uVar12 - (uVar9 + 1);
      if (2 < (long)uVar12) {
        psVar13 = (short *)((long)psVar13 + uVar9 + 1);
        psVar6 = psVar13;
        uVar9 = uVar12;
        goto LAB_00568dc8;
      }
    }
    goto LAB_00568e48;
  }
  psVar6 = (short *)((long)psVar6 + 1);
  uVar9 = (long)psVar1 - (long)psVar6;
  if ((long)uVar9 < 1) goto LAB_00568e48;
  goto LAB_00568d5c;
LAB_00568dc8:
  _memchr(psVar6,0x20,uVar9 - 2);
  if (psVar6 == (short *)0x0) goto LAB_00568e48;
  if (*psVar6 == 0x2b20 && (char)psVar6[1] == ' ') {
    if ((psVar6 != psVar1) && (uVar9 = (long)psVar6 - (long)psVar13, uVar9 != 0xffffffffffffffff)) {
      if (uVar9 <= uVar12) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff6 < uVar12) {
        FUN_0040d740();
        goto LAB_00568fb8;
      }
      if (uVar12 < 0x17) {
        uStack_478 = CONCAT17((char)uVar12,(undefined7)uStack_478);
        ppppuVar8 = &pppuStack_488;
        if (psVar6 != psVar13) goto LAB_00568f64;
      }
      else {
        pdVar2 = &MACH_HEADER.flags;
        if ((dword *)(uVar12 | 7) != (dword *)0x17) {
          pdVar2 = (dword *)(uVar12 | 7);
        }
        ppppuVar8 = (undefined8 ****)((long)pdVar2 + 1U);
        __Znwm();
        uStack_478 = (long)pdVar2 + 1U | 0x8000000000000000;
        pppuStack_488 = ppppuVar8;
        uStack_480 = uVar12;
LAB_00568f64:
        _memmove(ppppuVar8,psVar13,uVar12);
      }
      *(undefined1 *)((long)ppppuVar8 + uVar12) = 0;
      ppppuVar8 = (undefined8 ****)pppuStack_488;
      if (-1 < (long)uStack_478) {
        ppppuVar8 = &pppuStack_488;
      }
      goto LAB_00568e54;
    }
    goto LAB_00568e48;
  }
  psVar6 = (short *)((long)psVar6 + 1);
  uVar9 = (long)psVar1 - (long)psVar6;
  if ((long)uVar9 < 3) goto LAB_00568e48;
  goto LAB_00568dc8;
}



/* Entry: 00568fe4; end: 005691cb;  */

undefined1 * FUN_00568fe4(char *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  char **ppcVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  char *pcStack_50;
  undefined8 uStack_48;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  int iStack_28;
  
  ppcVar7 = &pcStack_50;
  uStack_30 = 0;
  iStack_28 = -0x10000;
  uStack_38 = 3;
  if (*param_1 == '_') {
    if (param_1[1] != 'Z') {
      return (undefined1 *)0x0;
    }
    iStack_34 = 2;
    iStack_3c = 2;
    pcStack_50 = param_1;
    uStack_48 = param_2;
    iStack_40 = param_3;
    FUN_0056923c();
    iStack_3c = iStack_3c + -1;
    if ((int)ppcVar7 != 0) {
      pcVar2 = pcStack_50 + iStack_34;
      if (*pcVar2 != '\0') {
        lVar9 = 0;
        pcVar8 = pcVar2 + 1;
        lVar5 = (long)iStack_34 + 2;
        do {
          cVar3 = pcVar2[lVar9];
          if (cVar3 != '.') {
            if (cVar3 == '\0') goto LAB_00569140;
            break;
          }
          uVar11 = (uint)(byte)(pcVar2 + lVar9)[1];
          bVar6 = (uVar11 & 0xffffffdf) - 0x41 < 0x1a;
          bVar1 = uVar11 == 0x5f || bVar6;
          if (uVar11 == 0x5f || bVar6) {
            do {
              lVar10 = lVar9;
              bVar4 = pcStack_50[lVar10 + lVar5];
              lVar9 = lVar10 + 1;
            } while (bVar4 == 0x5f || (bVar4 & 0xffffffdf) - 0x41 < 0x1a);
            lVar9 = lVar10 + 2;
            if (bVar4 == 0x2e) goto LAB_005690d4;
LAB_00569074:
            bVar1 = true;
          }
          else {
LAB_005690d4:
            if ((byte)pcVar8[lVar9] - 0x30 < 10) {
              do {
                lVar10 = lVar9;
                lVar9 = lVar10 + 1;
              } while ((byte)pcStack_50[lVar10 + lVar5] - 0x30 < 10);
              lVar9 = lVar10 + 2;
              goto LAB_00569074;
            }
          }
        } while (bVar1);
        if (*pcVar2 != '@') {
          return (undefined1 *)0x0;
        }
        if (iStack_28 < 0) {
          _strlen();
          FUN_0056bef8(&pcStack_50,pcVar2,pcVar8 + 1);
        }
      }
LAB_00569140:
      return (undefined1 *)(ulong)(0 < (int)uStack_30 && (int)uStack_30 < iStack_40);
    }
  }
  else {
    ppcVar7 = (char **)0x0;
  }
  return (undefined1 *)ppcVar7;
}



/* Entry: 005691cc; end: 0056923b;  */

undefined8 FUN_005691cc(long *param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  iVar2 = *(int *)((long)param_1 + 0x14);
  lVar3 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar2 + 1;
  *(int *)(param_1 + 3) = (int)lVar3 + 1;
  if ((iVar2 < 0x100) && ((int)lVar3 < 0x20000)) {
    pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
    if ((*pcVar1 != 'D') || (pcVar1[1] != 'v')) {
      *(int *)((long)param_1 + 0x14) = iVar2;
      return 0;
    }
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
    uVar4 = 1;
  }
  *(int *)((long)param_1 + 0x14) = iVar2;
  return uVar4;
}



/* Entry: 0056923c; end: 00569837;  */

void FUN_0056923c(long *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  
  iVar11 = *(int *)((long)param_1 + 0x14);
  lVar6 = param_1[3];
  iVar9 = iVar11 + 1;
  *(int *)((long)param_1 + 0x14) = iVar9;
  *(int *)(param_1 + 3) = (int)lVar6 + 1;
  if ((0xff < iVar11) || (0x1ffff < (int)lVar6)) goto LAB_005697ec;
  plVar7 = param_1;
  FUN_00569838();
  if ((int)plVar7 != 0) {
    FUN_00569bc4(param_1);
    iVar9 = *(int *)((long)param_1 + 0x14);
    goto LAB_005697ec;
  }
  iVar9 = *(int *)((long)param_1 + 0x14);
  iVar8 = (int)param_1[3];
  iVar11 = iVar9 + 1;
  *(int *)((long)param_1 + 0x14) = iVar11;
  *(int *)(param_1 + 3) = iVar8 + 1;
  if ((iVar9 < 0x100) && (iVar8 < 0x20000)) {
    puVar14 = (undefined8 *)((long)param_1 + 0x1c);
    uVar12 = *puVar14;
    uVar2 = *(undefined4 *)((long)param_1 + 0x24);
    uVar13 = *(uint *)(param_1 + 5);
    iVar10 = iVar8 + 2;
    *(int *)((long)param_1 + 0x14) = iVar9 + 2;
    *(int *)(param_1 + 3) = iVar10;
    if ((iVar9 < 0xff) && (iVar8 < 0x1ffff)) {
      iVar4 = *(int *)((long)param_1 + 0x1c);
      if (*(char *)(*param_1 + (long)iVar4) != 'T') goto LAB_00569320;
      lVar6 = (long)iVar4 + 1;
      iVar10 = iVar8 + 3;
      *(int *)((long)param_1 + 0x14) = iVar9 + 2;
      *(int *)(param_1 + 3) = iVar10;
      *(int *)((long)param_1 + 0x1c) = (int)lVar6;
      if (((0x1fffd < iVar8) || (uVar5 = *(byte *)(*param_1 + lVar6) - 0x48, 0xe < uVar5)) ||
         ((1 << (ulong)(uVar5 & 0x1f) & 0x5803U) == 0)) goto LAB_00569320;
      *(int *)((long)param_1 + 0x1c) = iVar4 + 2;
      *(int *)((long)param_1 + 0x14) = iVar11;
      plVar7 = param_1;
      FUN_0056afc4();
      if (((ulong)plVar7 & 1) == 0) {
        iVar11 = *(int *)((long)param_1 + 0x14);
        iVar10 = (int)param_1[3];
        goto LAB_00569324;
      }
    }
    else {
LAB_00569320:
      *(int *)((long)param_1 + 0x14) = iVar11;
LAB_00569324:
      *puVar14 = uVar12;
      *(undefined4 *)((long)param_1 + 0x24) = uVar2;
      *(uint *)(param_1 + 5) = uVar13;
      *(int *)((long)param_1 + 0x14) = iVar11 + 1;
      *(int *)(param_1 + 3) = iVar10 + 1;
      if ((iVar11 < 0x100) && (iVar10 < 0x20000)) {
        pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
        if ((*pcVar1 != 'T') || (pcVar1[1] != 'c')) goto LAB_005693ac;
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
        *(int *)((long)param_1 + 0x14) = iVar11;
        plVar7 = param_1;
        FUN_0056dd2c();
        if ((((int)plVar7 != 0) && (plVar7 = param_1, FUN_0056dd2c(), (int)plVar7 != 0)) &&
           (plVar7 = param_1, FUN_0056923c(), ((ulong)plVar7 & 1) != 0)) goto LAB_005697e0;
      }
      else {
LAB_005693ac:
        *(int *)((long)param_1 + 0x14) = iVar11;
      }
      *puVar14 = uVar12;
      *(undefined4 *)((long)param_1 + 0x24) = uVar2;
      *(uint *)(param_1 + 5) = uVar13;
      iVar8 = *(int *)((long)param_1 + 0x14);
      lVar6 = param_1[3];
      iVar11 = iVar8 + 1;
      iVar9 = (int)lVar6 + 1;
      *(int *)((long)param_1 + 0x14) = iVar11;
      *(int *)(param_1 + 3) = iVar9;
      if ((iVar8 < 0x100) && ((int)lVar6 < 0x20000)) {
        pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
        if ((*pcVar1 != 'G') || (pcVar1[1] != 'V')) goto LAB_0056942c;
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
        *(int *)((long)param_1 + 0x14) = iVar8;
        plVar7 = param_1;
        FUN_00569838();
        if (((ulong)plVar7 & 1) != 0) goto LAB_005697e0;
        iVar8 = *(int *)((long)param_1 + 0x14);
        iVar9 = (int)param_1[3];
        iVar11 = iVar8 + 1;
      }
      else {
LAB_0056942c:
        *(int *)((long)param_1 + 0x14) = iVar8;
      }
      *puVar14 = uVar12;
      *(undefined4 *)((long)param_1 + 0x24) = uVar2;
      *(uint *)(param_1 + 5) = uVar13;
      *(int *)((long)param_1 + 0x14) = iVar11;
      *(int *)(param_1 + 3) = iVar9 + 1;
      if (((iVar8 < 0x100) && (iVar9 < 0x20000)) &&
         (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'T')) {
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
        *(int *)((long)param_1 + 0x14) = iVar8;
        plVar7 = param_1;
        FUN_0056dd2c();
        if (((int)plVar7 != 0) && (plVar7 = param_1, FUN_0056923c(), ((ulong)plVar7 & 1) != 0))
        goto LAB_005697e0;
      }
      else {
        *(int *)((long)param_1 + 0x14) = iVar8;
      }
      *puVar14 = uVar12;
      *(undefined4 *)((long)param_1 + 0x24) = uVar2;
      *(uint *)(param_1 + 5) = uVar13;
      iVar9 = *(int *)((long)param_1 + 0x14);
      lVar6 = param_1[3];
      *(int *)((long)param_1 + 0x14) = iVar9 + 1;
      *(int *)(param_1 + 3) = (int)lVar6 + 1;
      if ((iVar9 < 0x100) && ((int)lVar6 < 0x20000)) {
        pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
        if ((*pcVar1 != 'T') || (pcVar1[1] != 'C')) goto LAB_00569550;
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
        *(int *)((long)param_1 + 0x14) = iVar9;
        plVar7 = param_1;
        FUN_0056afc4();
        if ((((int)plVar7 == 0) || (plVar7 = param_1, FUN_0056adfc(), (int)plVar7 == 0)) ||
           (plVar7 = param_1, FUN_0056a2d0(param_1,0x5f), (int)plVar7 == 0)) goto LAB_00569554;
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0x7fffffff;
        plVar7 = param_1;
        FUN_0056afc4();
        if ((int)plVar7 == 0) goto LAB_00569554;
        uVar13 = uVar13 & 0x80000000 | *(uint *)(param_1 + 5) & 0x7fffffff;
      }
      else {
LAB_00569550:
        *(int *)((long)param_1 + 0x14) = iVar9;
LAB_00569554:
        *puVar14 = uVar12;
        *(undefined4 *)((long)param_1 + 0x24) = uVar2;
        *(uint *)(param_1 + 5) = uVar13;
        iVar8 = *(int *)((long)param_1 + 0x14);
        iVar10 = (int)param_1[3];
        iVar11 = iVar8 + 1;
        iVar9 = iVar10 + 1;
        *(int *)((long)param_1 + 0x14) = iVar11;
        *(int *)(param_1 + 3) = iVar9;
        if ((iVar8 < 0x100) && (iVar10 < 0x20000)) {
          iVar4 = *(int *)((long)param_1 + 0x1c);
          if (*(char *)(*param_1 + (long)iVar4) != 'T') goto LAB_005695f0;
          lVar6 = (long)iVar4 + 1;
          iVar9 = iVar10 + 2;
          *(int *)((long)param_1 + 0x14) = iVar11;
          *(int *)(param_1 + 3) = iVar9;
          *(int *)((long)param_1 + 0x1c) = (int)lVar6;
          if ((0x1fffe < iVar10) ||
             ((cVar3 = *(char *)(*param_1 + lVar6), cVar3 != 'F' && (cVar3 != 'J'))))
          goto LAB_005695f0;
          *(int *)((long)param_1 + 0x1c) = iVar4 + 2;
          *(int *)((long)param_1 + 0x14) = iVar8;
          plVar7 = param_1;
          FUN_0056afc4();
          if (((ulong)plVar7 & 1) != 0) goto LAB_005697e0;
          iVar8 = *(int *)((long)param_1 + 0x14);
          iVar9 = (int)param_1[3];
          iVar11 = iVar8 + 1;
        }
        else {
LAB_005695f0:
          *(int *)((long)param_1 + 0x14) = iVar8;
        }
        *puVar14 = uVar12;
        *(undefined4 *)((long)param_1 + 0x24) = uVar2;
        *(uint *)(param_1 + 5) = uVar13;
        iVar10 = iVar9 + 1;
        *(int *)((long)param_1 + 0x14) = iVar11;
        *(int *)(param_1 + 3) = iVar10;
        if ((iVar8 < 0x100) && (iVar9 < 0x20000)) {
          pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
          if ((*pcVar1 != 'G') || (pcVar1[1] != 'R')) goto LAB_00569668;
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
          *(int *)((long)param_1 + 0x14) = iVar8;
          plVar7 = param_1;
          FUN_00569838();
          if (((ulong)plVar7 & 1) != 0) goto LAB_005697e0;
          iVar8 = *(int *)((long)param_1 + 0x14);
          iVar10 = (int)param_1[3];
          iVar11 = iVar8 + 1;
        }
        else {
LAB_00569668:
          *(int *)((long)param_1 + 0x14) = iVar8;
        }
        *puVar14 = uVar12;
        *(undefined4 *)((long)param_1 + 0x24) = uVar2;
        *(uint *)(param_1 + 5) = uVar13;
        iVar9 = iVar10 + 1;
        *(int *)((long)param_1 + 0x14) = iVar11;
        *(int *)(param_1 + 3) = iVar9;
        if ((iVar8 < 0x100) && (iVar10 < 0x20000)) {
          pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
          if ((*pcVar1 != 'G') || (pcVar1[1] != 'A')) goto LAB_005696e0;
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
          *(int *)((long)param_1 + 0x14) = iVar8;
          plVar7 = param_1;
          FUN_0056923c();
          if (((ulong)plVar7 & 1) != 0) goto LAB_005697e0;
          iVar8 = *(int *)((long)param_1 + 0x14);
          iVar9 = (int)param_1[3];
          iVar11 = iVar8 + 1;
        }
        else {
LAB_005696e0:
          *(int *)((long)param_1 + 0x14) = iVar8;
        }
        *puVar14 = uVar12;
        *(undefined4 *)((long)param_1 + 0x24) = uVar2;
        *(uint *)(param_1 + 5) = uVar13;
        *(int *)((long)param_1 + 0x14) = iVar11;
        *(int *)(param_1 + 3) = iVar9 + 1;
        if ((iVar8 < 0x100) && (iVar9 < 0x20000)) {
          iVar11 = *(int *)((long)param_1 + 0x1c);
          if (*(char *)(*param_1 + (long)iVar11) != 'T') goto LAB_00569780;
          lVar6 = (long)iVar11 + 1;
          *(int *)((long)param_1 + 0x14) = iVar8 + 1;
          *(int *)(param_1 + 3) = iVar9 + 2;
          *(int *)((long)param_1 + 0x1c) = (int)lVar6;
          if ((0x1fffe < iVar9) ||
             ((cVar3 = *(char *)(*param_1 + lVar6), cVar3 != 'v' && (cVar3 != 'h'))))
          goto LAB_00569780;
          *(int *)((long)param_1 + 0x1c) = iVar11 + 2;
          *(int *)((long)param_1 + 0x14) = iVar8;
          plVar7 = param_1;
          FUN_0056dd2c();
          if (((int)plVar7 != 0) && (plVar7 = param_1, FUN_0056923c(), ((ulong)plVar7 & 1) != 0))
          goto LAB_005697e0;
        }
        else {
LAB_00569780:
          *(int *)((long)param_1 + 0x14) = iVar8;
        }
        *puVar14 = uVar12;
        *(undefined4 *)((long)param_1 + 0x24) = uVar2;
      }
      *(uint *)(param_1 + 5) = uVar13;
    }
LAB_005697e0:
    iVar9 = *(int *)((long)param_1 + 0x14) + -1;
  }
  *(int *)((long)param_1 + 0x14) = iVar9;
LAB_005697ec:
  *(int *)((long)param_1 + 0x14) = iVar9 + -1;
  return;
}



/* Entry: 00569838; end: 00569bc3;  */

void FUN_00569838(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 uVar15;
  
  iVar2 = *(int *)((long)param_1 + 0x14);
  iVar4 = (int)param_1[3];
  iVar8 = iVar2 + 1;
  *(int *)((long)param_1 + 0x14) = iVar8;
  *(int *)(param_1 + 3) = iVar4 + 1;
  if ((0xff < iVar2) || (0x1ffff < iVar4)) goto LAB_00569b7c;
  iVar8 = iVar2 + 2;
  iVar9 = iVar4 + 2;
  *(int *)((long)param_1 + 0x14) = iVar8;
  *(int *)(param_1 + 3) = iVar9;
  if (iVar2 < 0xff && iVar4 < 0x1ffff) {
    puVar14 = (uint *)((long)param_1 + 0x1c);
    uVar10 = *(undefined8 *)puVar14;
    uVar3 = *(undefined4 *)((long)param_1 + 0x24);
    uVar5 = *(uint *)(param_1 + 5);
    iVar9 = iVar2 + 3;
    iVar1 = iVar4 + 3;
    *(int *)((long)param_1 + 0x14) = iVar9;
    *(int *)(param_1 + 3) = iVar1;
    if ((0xfd < iVar2) || (0x1fffd < iVar4)) {
LAB_00569a34:
      iVar9 = iVar1;
      *(int *)((long)param_1 + 0x14) = iVar8;
LAB_00569a3c:
      *(undefined8 *)puVar14 = uVar10;
      *(undefined4 *)((long)param_1 + 0x24) = uVar3;
      *(uint *)(param_1 + 5) = uVar5;
      goto LAB_00569a50;
    }
    lVar11 = *param_1;
    iVar6 = *(int *)((long)param_1 + 0x1c);
    if (*(char *)(lVar11 + iVar6) != 'N') goto LAB_00569a34;
    uVar13 = (long)iVar6 + 1;
    *(uint *)(param_1 + 5) = uVar5 & 0x8000ffff;
    *(int *)((long)param_1 + 0x14) = iVar8;
    *(int *)(param_1 + 3) = iVar4 + 4;
    *(int *)((long)param_1 + 0x1c) = (int)uVar13;
    if (iVar4 < 0x1fffd) {
      iVar1 = iVar2 + 4;
      *(int *)((long)param_1 + 0x14) = iVar1;
      *(int *)(param_1 + 3) = iVar4 + 5;
      if (((iVar2 < 0xfd) && (iVar4 != 0x1fffc)) && (*(char *)(lVar11 + uVar13) == 'r')) {
        uVar13 = (ulong)(iVar6 + 2U);
        *puVar14 = iVar6 + 2U;
      }
      uVar12 = (uint)uVar13;
      *(int *)((long)param_1 + 0x14) = iVar1;
      *(int *)(param_1 + 3) = iVar4 + 6;
      if (((iVar2 < 0xfd) && (iVar4 < 0x1fffb)) && (*(char *)(lVar11 + (int)uVar12) == 'V')) {
        uVar12 = uVar12 + 1;
        *puVar14 = uVar12;
      }
      *(int *)((long)param_1 + 0x14) = iVar1;
      *(int *)(param_1 + 3) = iVar4 + 7;
      if (((iVar2 < 0xfd) && (iVar4 < 0x1fffa)) && (*(char *)(lVar11 + (int)uVar12) == 'K')) {
        uVar12 = uVar12 + 1;
        *puVar14 = uVar12;
      }
      *(int *)((long)param_1 + 0x14) = iVar9;
      *(int *)(param_1 + 3) = iVar4 + 8;
      if ((iVar4 < 0x1fff9) &&
         ((*(char *)(lVar11 + (int)uVar12) == 'R' || (*(char *)(lVar11 + (int)uVar12) == 'O')))) {
        *puVar14 = uVar12 + 1;
      }
    }
    else {
      *(int *)((long)param_1 + 0x14) = iVar9;
      *(int *)(param_1 + 3) = iVar4 + 5;
    }
    *(int *)((long)param_1 + 0x14) = iVar8;
    plVar7 = param_1;
    FUN_0056a400();
    iVar8 = *(int *)((long)param_1 + 0x14);
    iVar9 = (int)param_1[3];
    if ((int)plVar7 == 0) goto LAB_00569a3c;
    *(uint *)(param_1 + 5) =
         *(uint *)(param_1 + 5) & 0x80000000 |
         *(uint *)(param_1 + 5) & 0xffff | (uVar5 >> 0x10 & 0x7fff) << 0x10;
    iVar1 = iVar9 + 1;
    *(int *)((long)param_1 + 0x14) = iVar8 + 1;
    *(int *)(param_1 + 3) = iVar1;
    if (((0xff < iVar8) || (0x1ffff < iVar9)) ||
       (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'E')) goto LAB_00569a34;
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
LAB_00569b10:
    iVar8 = iVar8 + -1;
    *(int *)((long)param_1 + 0x14) = iVar8;
    goto LAB_00569b7c;
  }
LAB_00569a50:
  *(int *)(param_1 + 3) = iVar9 + 1;
  if ((iVar8 < 0x101) && (iVar9 < 0x20000)) {
    uVar15 = *(undefined8 *)((long)param_1 + 0x24);
    uVar10 = *(undefined8 *)((long)param_1 + 0x1c);
    *(int *)((long)param_1 + 0x14) = iVar8 + 1;
    *(int *)(param_1 + 3) = iVar9 + 2;
    if ((iVar8 < 0x100) &&
       ((iVar9 < 0x1ffff && (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'Z')))) {
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
      *(int *)((long)param_1 + 0x14) = iVar8;
      plVar7 = param_1;
      FUN_0056923c();
      iVar8 = *(int *)((long)param_1 + 0x14);
      if ((int)plVar7 != 0) {
        lVar11 = param_1[3];
        *(int *)((long)param_1 + 0x14) = iVar8 + 1;
        *(int *)(param_1 + 3) = (int)lVar11 + 1;
        if (((0xff < iVar8) || (0x1ffff < (int)lVar11)) ||
           (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'E')) goto LAB_00569b20;
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
        *(int *)((long)param_1 + 0x14) = iVar8;
        plVar7 = param_1;
        FUN_0056d44c();
        iVar8 = *(int *)((long)param_1 + 0x14);
        if ((int)plVar7 != 0) goto LAB_00569b10;
      }
    }
    else {
LAB_00569b20:
      *(int *)((long)param_1 + 0x14) = iVar8;
    }
    *(undefined8 *)((long)param_1 + 0x24) = uVar15;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar10;
  }
  *(int *)((long)param_1 + 0x14) = iVar8 + -1;
  uVar15 = *(undefined8 *)((long)param_1 + 0x24);
  uVar10 = *(undefined8 *)((long)param_1 + 0x1c);
  plVar7 = param_1;
  FUN_00569cbc(param_1,0);
  if (((int)plVar7 == 0) || (plVar7 = param_1, FUN_0056a014(), ((ulong)plVar7 & 1) == 0)) {
    *(undefined8 *)((long)param_1 + 0x24) = uVar15;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar10;
    plVar7 = param_1;
    FUN_0056a198();
    if ((int)plVar7 != 0) {
      FUN_0056a014(param_1);
    }
  }
  iVar8 = *(int *)((long)param_1 + 0x14);
LAB_00569b7c:
  *(int *)((long)param_1 + 0x14) = iVar8 + -1;
  return;
}



/* Entry: 00569bc4; end: 00569cbb;  */

ulong FUN_00569bc4(ulong param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar7 = 0;
  iVar5 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar5 + 1;
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if ((iVar5 < 0x100) && (iVar2 < 0x20000)) {
    uVar6 = *(undefined8 *)(param_1 + 0x1c);
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar3 & 0x7fffffff;
    uVar7 = param_1;
    FUN_0056afc4();
    if ((int)uVar7 == 0) {
      *(undefined8 *)(param_1 + 0x1c) = uVar6;
      *(undefined4 *)(param_1 + 0x24) = uVar1;
      *(uint *)(param_1 + 0x28) = uVar3;
    }
    else {
      do {
        uVar4 = param_1;
        FUN_0056afc4();
      } while ((uVar4 & 1) != 0);
      *(uint *)(param_1 + 0x28) = uVar3 & 0x80000000 | *(uint *)(param_1 + 0x28) & 0x7fffffff;
      if ((int)uVar3 < 0) {
        FUN_0056bef8(param_1,"()",2);
      }
    }
    iVar5 = *(int *)(param_1 + 0x14) + -1;
  }
  *(int *)(param_1 + 0x14) = iVar5;
  return uVar7;
}



/* Entry: 00569cbc; end: 0056a013;  */

undefined8 FUN_00569cbc(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  byte *pbVar13;
  long lVar14;
  undefined8 uVar15;
  char *pcVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar15 = 0;
  iVar4 = *(int *)((long)param_1 + 0x14);
  iVar5 = (int)param_1[3];
  iVar1 = iVar4 + 1;
  *(int *)((long)param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 3) = iVar5 + 1;
  if ((0xff < iVar4) || (0x1ffff < iVar5)) goto LAB_00569ff4;
  iVar2 = iVar4 + 2;
  *(int *)((long)param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 3) = iVar5 + 2;
  if (iVar4 < 0xff && iVar5 < 0x1ffff) {
    pcVar16 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
    if ((*pcVar16 != 'S') || (pcVar16[1] != '_')) goto LAB_00569d64;
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
    *(int *)((long)param_1 + 0x14) = iVar1;
    if ((int)param_1[5] < 0) {
      uVar15 = 1;
      FUN_0056bef8(param_1,"?",1);
      goto LAB_00569ff4;
    }
LAB_00569ff0:
    uVar15 = 1;
    goto LAB_00569ff4;
  }
LAB_00569d64:
  uVar19 = *(undefined8 *)((long)param_1 + 0x24);
  uVar18 = *(undefined8 *)((long)param_1 + 0x1c);
  iVar10 = iVar5 + 3;
  *(int *)((long)param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 3) = iVar10;
  if ((iVar4 < 0xff) && (iVar5 < 0x1fffe)) {
    lVar11 = *param_1;
    if (*(char *)(lVar11 + *(int *)((long)param_1 + 0x1c)) == 'S') {
      lVar14 = (long)*(int *)((long)param_1 + 0x1c) + 1;
      iVar10 = iVar5 + 4;
      *(int *)((long)param_1 + 0x14) = iVar2;
      iVar12 = (int)lVar14;
      *(int *)(param_1 + 3) = iVar10;
      *(int *)((long)param_1 + 0x1c) = iVar12;
      if (iVar5 < 0x1fffd) {
        pbVar3 = (byte *)(lVar11 + lVar14);
        uVar8 = (uint)*pbVar3;
        if (*pbVar3 != 0) {
          lVar14 = 0;
          pbVar13 = pbVar3;
          do {
            bVar7 = uVar8 - 0x30 < 10;
            if ((!bVar7 && 0x18 < uVar8 - 0x41) && (bVar7 || uVar8 - 0x41 != 0x19)) {
              if (lVar14 == 0) goto LAB_00569e78;
              break;
            }
            pbVar13 = pbVar13 + 1;
            uVar8 = (uint)*pbVar13;
            lVar14 = lVar14 + -1;
          } while (uVar8 != 0);
          iVar12 = iVar12 + ((int)pbVar13 - (int)pbVar3);
          *(int *)((long)param_1 + 0x14) = iVar2;
          *(int *)(param_1 + 3) = iVar5 + 5;
          *(int *)((long)param_1 + 0x1c) = iVar12;
          iVar10 = 0x20001;
          if ((iVar5 != 0x1fffc) && (iVar10 = iVar5 + 5, *(char *)(lVar11 + iVar12) == '_')) {
            *(int *)((long)param_1 + 0x1c) = iVar12 + 1;
            *(int *)((long)param_1 + 0x14) = iVar1;
            if ((int)param_1[5] < 0) {
              FUN_0056bef8(param_1,"?",1);
              uVar15 = 1;
              goto LAB_00569ff4;
            }
            goto LAB_00569ff0;
          }
        }
      }
      else {
        iVar10 = 0x20001;
      }
    }
  }
LAB_00569e78:
  *(undefined8 *)((long)param_1 + 0x24) = uVar19;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar18;
  *(int *)((long)param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 3) = iVar10 + 1;
  if ((iVar4 < 0xff) && (iVar10 < 0x20000)) {
    if (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'S') goto LAB_00569f3c;
    lVar11 = (long)*(int *)((long)param_1 + 0x1c) + 1;
    *(int *)((long)param_1 + 0x1c) = (int)lVar11;
    *(int *)((long)param_1 + 0x14) = iVar1;
    bVar6 = *(byte *)(*param_1 + lVar11);
    if ((param_2 != 0) && (bVar6 == 0x74)) {
      ppuVar17 = &PTR_s_St_00a01da0;
LAB_00569ed0:
      if ((int)param_1[5] < 0) {
        FUN_0056bef8(param_1,"std",3);
      }
      pcVar16 = ppuVar17[1];
      if (((*pcVar16 != '\0') && ((int)param_1[5] < 0)) &&
         (FUN_0056bef8(param_1,"::",2), (int)param_1[5] < 0)) {
        if (*pcVar16 == '\0') {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar9 = pcVar16 + 1;
          _strlen(pcVar9);
          pcVar9 = pcVar9 + 1;
        }
        FUN_0056bef8(param_1,pcVar16,pcVar9);
      }
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
      goto LAB_00569ff0;
    }
    if (0x68 < bVar6) {
      if (bVar6 == 0x69) {
        ppuVar17 = &PTR_s_Si_00a01e00;
      }
      else if (bVar6 == 0x6f) {
        ppuVar17 = &PTR_s_So_00a01e18;
      }
      else {
        if (bVar6 != 0x73) goto LAB_00569f40;
        ppuVar17 = &PTR_s_Ss_00a01de8;
      }
      goto LAB_00569ed0;
    }
    if (bVar6 == 0x61) {
      ppuVar17 = &PTR_s_Sa_00a01db8;
      goto LAB_00569ed0;
    }
    if (bVar6 == 0x62) {
      ppuVar17 = &PTR_s_Sb_00a01dd0;
      goto LAB_00569ed0;
    }
    if (bVar6 == 100) {
      ppuVar17 = &PTR_s_Sd_00a01e30;
      goto LAB_00569ed0;
    }
  }
  else {
LAB_00569f3c:
    *(int *)((long)param_1 + 0x14) = iVar1;
  }
LAB_00569f40:
  uVar15 = 0;
  *(undefined8 *)((long)param_1 + 0x24) = uVar19;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar18;
LAB_00569ff4:
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
  return uVar15;
}



/* Entry: 0056a014; end: 0056a197;  */

undefined8 FUN_0056a014(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar5 = 0;
  iVar8 = *(int *)((long)param_1 + 0x14);
  iVar2 = (int)param_1[3];
  iVar7 = iVar8 + 1;
  *(int *)((long)param_1 + 0x14) = iVar7;
  *(int *)(param_1 + 3) = iVar2 + 1;
  if ((0xff < iVar8) || (0x1ffff < iVar2)) goto LAB_0056a144;
  uVar9 = *(undefined8 *)((long)param_1 + 0x1cU);
  uVar1 = *(undefined4 *)((long)param_1 + 0x24);
  uVar3 = *(uint *)(param_1 + 5);
  *(uint *)(param_1 + 5) = uVar3 & 0x7fffffff;
  *(int *)((long)param_1 + 0x14) = iVar8 + 2;
  *(int *)(param_1 + 3) = iVar2 + 2;
  if ((iVar8 < 0xff) &&
     ((iVar2 < 0x1ffff && (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'I')))) {
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
    *(int *)((long)param_1 + 0x14) = iVar7;
    plVar6 = param_1;
    FUN_0056d644();
    if ((int)plVar6 == 0) goto LAB_0056a124;
    do {
      plVar6 = param_1;
      FUN_0056d644();
    } while (((ulong)plVar6 & 1) != 0);
    iVar7 = *(int *)((long)param_1 + 0x14);
    lVar4 = param_1[3];
    *(int *)((long)param_1 + 0x14) = iVar7 + 1;
    *(int *)(param_1 + 3) = (int)lVar4 + 1;
    if (((0xff < iVar7) || (0x1ffff < (int)lVar4)) ||
       (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'E')) goto LAB_0056a120;
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
    *(int *)((long)param_1 + 0x14) = iVar7;
    *(uint *)(param_1 + 5) = uVar3 & 0x80000000 | *(uint *)(param_1 + 5) & 0x7fffffff;
    if ((int)uVar3 < 0) {
      FUN_0056bef8(param_1,"<>",2);
      uVar5 = 1;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
LAB_0056a120:
    *(int *)((long)param_1 + 0x14) = iVar7;
LAB_0056a124:
    uVar5 = 0;
    *(undefined8 *)((long)param_1 + 0x1cU) = uVar9;
    *(undefined4 *)((long)param_1 + 0x24) = uVar1;
    *(uint *)(param_1 + 5) = uVar3;
  }
  iVar8 = *(int *)((long)param_1 + 0x14) + -1;
LAB_0056a144:
  *(int *)((long)param_1 + 0x14) = iVar8;
  return uVar5;
}



/* Entry: 0056a198; end: 0056a2cf;  */

undefined8 FUN_0056a198(long *param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar4 = 0;
  iVar2 = *(int *)((long)param_1 + 0x14);
  lVar3 = param_1[3];
  iVar7 = iVar2 + 1;
  *(int *)((long)param_1 + 0x14) = iVar7;
  *(int *)(param_1 + 3) = (int)lVar3 + 1;
  if ((0xff < iVar2) || (0x1ffff < (int)lVar3)) {
LAB_0056a1e4:
    *(int *)((long)param_1 + 0x14) = iVar7 + -1;
    return uVar4;
  }
  plVar5 = param_1;
  FUN_0056d8f8();
  iVar7 = *(int *)((long)param_1 + 0x14);
  if (((ulong)plVar5 & 1) != 0) {
    uVar4 = 1;
    goto LAB_0056a1e4;
  }
  uVar8 = *(undefined8 *)((long)param_1 + 0x24);
  uVar4 = *(undefined8 *)((long)param_1 + 0x1c);
  lVar3 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar7 + 1;
  *(int *)(param_1 + 3) = (int)lVar3 + 1;
  if ((iVar7 < 0x100) && ((int)lVar3 < 0x20000)) {
    pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
    if ((*pcVar1 != 'S') || (pcVar1[1] != 't')) goto LAB_0056a284;
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
    *(int *)((long)param_1 + 0x14) = iVar7;
    if ((int)param_1[5] < 0) {
      FUN_0056bef8(param_1,"std::",5);
    }
    plVar5 = param_1;
    FUN_0056d8f8();
    if (((ulong)plVar5 & 1) != 0) {
      uVar6 = 1;
      goto LAB_0056a294;
    }
  }
  else {
LAB_0056a284:
    *(int *)((long)param_1 + 0x14) = iVar7;
  }
  uVar6 = 0;
  *(undefined8 *)((long)param_1 + 0x24) = uVar8;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar4;
LAB_0056a294:
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
  return uVar6;
}



/* Entry: 0056a2d0; end: 0056a3ff;  */

undefined8 FUN_0056a2d0(long *param_1,char param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)((long)param_1 + 0x14);
  lVar2 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar1 + 1;
  *(int *)(param_1 + 3) = (int)lVar2 + 1;
  if ((iVar1 < 0x100) && ((int)lVar2 < 0x20000)) {
    if (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != param_2) {
      *(int *)((long)param_1 + 0x14) = iVar1;
      return 0;
    }
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
    uVar3 = 1;
  }
  *(int *)((long)param_1 + 0x14) = iVar1;
  return uVar3;
}



/* Entry: 0056a400; end: 0056a67f;  */

long * FUN_0056a400(long *param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  
  plVar4 = (long *)0x0;
  iVar6 = *(int *)((long)param_1 + 0x14);
  lVar3 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar6 + 1;
  *(int *)(param_1 + 3) = (int)lVar3 + 1;
  if ((0xff < iVar6) || (0x1ffff < (int)lVar3)) goto LAB_0056a5a8;
  if (((int)param_1[5] < 0) && (0x1ffff < (int)param_1[5] * 2)) {
    FUN_0056bef8(param_1,"::",2);
  }
  plVar4 = param_1;
  FUN_0056a6e4();
  if (((((ulong)plVar4 & 1) != 0) ||
      (plVar4 = param_1, FUN_00569cbc(param_1,1), ((ulong)plVar4 & 1) != 0)) ||
     (plVar4 = param_1, FUN_0056a198(), ((ulong)plVar4 & 1) != 0)) {
LAB_0056a484:
    uVar5 = *(uint *)(param_1 + 5);
    do {
      uVar2 = (int)(uVar5 << 1) >> 0x11;
      if (-1 < (int)uVar2) {
        uVar5 = (uVar5 & 0x80000000 | uVar5 & 0xffff | (uVar2 & 0x7fff) << 0x10) + 0x10000;
        *(uint *)(param_1 + 5) = uVar5;
      }
      if (((int)uVar5 < 0) && (0x1ffff < (int)(uVar5 * 2))) {
        FUN_0056bef8(param_1,"::",2);
      }
      plVar4 = param_1;
      FUN_0056a6e4();
      if (((((ulong)plVar4 & 1) == 0) &&
          (plVar4 = param_1, FUN_00569cbc(param_1,1), ((ulong)plVar4 & 1) == 0)) &&
         (plVar4 = param_1, FUN_0056a198(), ((ulong)plVar4 & 1) == 0)) {
        iVar6 = *(int *)((long)param_1 + 0x14);
        lVar3 = param_1[3];
        *(int *)((long)param_1 + 0x14) = iVar6 + 1;
        *(int *)(param_1 + 3) = (int)lVar3 + 1;
        bVar1 = true;
        if ((0xff < iVar6) || (0x1ffff < (int)lVar3)) goto LAB_0056a560;
        if (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'M') {
          bVar1 = true;
          goto LAB_0056a560;
        }
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
        *(int *)((long)param_1 + 0x14) = iVar6;
        plVar4 = param_1;
        FUN_0056a8dc();
        if ((int)plVar4 == 0) goto code_r0x0056a54c;
      }
      uVar5 = *(uint *)(param_1 + 5);
    } while( true );
  }
  bVar1 = false;
  iVar6 = *(int *)((long)param_1 + 0x14);
  lVar3 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar6 + 1;
  *(int *)(param_1 + 3) = (int)lVar3 + 1;
  if ((iVar6 < 0x100) && ((int)lVar3 < 0x20000)) {
    if (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'M') {
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
      *(int *)((long)param_1 + 0x14) = iVar6;
      plVar4 = param_1;
      FUN_0056a8dc();
      if ((int)plVar4 != 0) goto LAB_0056a484;
      bVar1 = false;
      iVar6 = (int)param_1[5];
    }
    else {
      bVar1 = false;
      *(int *)((long)param_1 + 0x14) = iVar6;
      iVar6 = (int)param_1[5];
    }
  }
  else {
LAB_0056a560:
    *(int *)((long)param_1 + 0x14) = iVar6;
    iVar6 = (int)param_1[5];
  }
joined_r0x0056a554:
  if (((iVar6 < 0) && (0x1ffff < iVar6 * 2)) && (uVar5 = (int)param_1[4] - 2, 1 < (int)param_1[4]))
  {
    *(uint *)(param_1 + 4) = uVar5;
    *(undefined1 *)(param_1[1] + (ulong)uVar5) = 0;
  }
  if ((!bVar1) || (plVar4 = param_1, FUN_0056a014(), (int)plVar4 == 0)) {
    *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  plVar4 = param_1;
  FUN_0056a400(param_1);
LAB_0056a5a8:
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
  return plVar4;
code_r0x0056a54c:
  bVar1 = true;
  iVar6 = (int)param_1[5];
  goto joined_r0x0056a554;
}



/* Entry: 0056a680; end: 0056a6e3;  */

undefined8 FUN_0056a680(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)((long)param_1 + 0x14);
  lVar2 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar1 + 1;
  *(int *)(param_1 + 3) = (int)lVar2 + 1;
  if ((iVar1 < 0x100) && ((int)lVar2 < 0x20000)) {
    if (1 < *(byte *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) - 0x31) {
      *(int *)((long)param_1 + 0x14) = iVar1;
      return 0;
    }
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
    uVar3 = 1;
  }
  *(int *)((long)param_1 + 0x14) = iVar1;
  return uVar3;
}



/* Entry: 0056a6e4; end: 0056a8db;  */

undefined8 FUN_0056a6e4(long *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar11 = 0;
  iVar9 = *(int *)((long)param_1 + 0x14);
  iVar5 = (int)param_1[3];
  iVar1 = iVar9 + 1;
  *(int *)((long)param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 3) = iVar5 + 1;
  if ((0xff < iVar9) || (0x1ffff < iVar5)) goto LAB_0056a89c;
  iVar2 = iVar9 + 2;
  *(int *)((long)param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 3) = iVar5 + 2;
  if (iVar9 < 0xff && iVar5 < 0x1ffff) {
    pcVar4 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
    if ((*pcVar4 != 'T') || (pcVar4[1] != '_')) goto LAB_0056a774;
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
    *(int *)((long)param_1 + 0x14) = iVar1;
    if ((int)param_1[5] < 0) {
      uVar11 = 1;
      FUN_0056bef8(param_1,"?",1);
      goto LAB_0056a89c;
    }
LAB_0056a76c:
    uVar11 = 1;
  }
  else {
LAB_0056a774:
    uVar12 = *(undefined8 *)((long)param_1 + 0x1c);
    *(int *)((long)param_1 + 0x14) = iVar2;
    *(int *)(param_1 + 3) = iVar5 + 3;
    if ((iVar9 < 0xff) && (iVar5 < 0x1fffe)) {
      lVar7 = *param_1;
      iVar6 = *(int *)((long)param_1 + 0x1c);
      if (*(char *)(lVar7 + iVar6) == 'T') {
        uVar10 = (long)iVar6 + 1;
        *(int *)(param_1 + 3) = iVar5 + 4;
        *(int *)((long)param_1 + 0x1c) = (int)uVar10;
        if (iVar5 < 0x1fffd) {
          *(int *)((long)param_1 + 0x14) = iVar9 + 3;
          *(int *)(param_1 + 3) = iVar5 + 5;
          if (((iVar9 < 0xfe) && (iVar5 != 0x1fffc)) && (*(char *)(lVar7 + uVar10) == 'n')) {
            uVar10 = (ulong)(iVar6 + 2U);
            *(uint *)((long)param_1 + 0x1c) = iVar6 + 2U;
          }
          *(int *)((long)param_1 + 0x14) = iVar2;
          if (*(byte *)(lVar7 + (int)uVar10) - 0x30 < 10) {
            pbVar8 = (byte *)((int)uVar10 + lVar7);
            do {
              pbVar8 = pbVar8 + 1;
              iVar9 = (int)uVar10;
              uVar3 = iVar9 + 1;
              uVar10 = (ulong)uVar3;
            } while (*pbVar8 - 0x30 < 10);
            *(int *)((long)param_1 + 0x14) = iVar2;
            *(int *)(param_1 + 3) = iVar5 + 6;
            *(uint *)((long)param_1 + 0x1c) = uVar3;
            if ((iVar5 < 0x1fffb) && (*(char *)(lVar7 + (int)uVar3) == '_')) {
              *(int *)((long)param_1 + 0x1c) = iVar9 + 2;
              *(int *)((long)param_1 + 0x14) = iVar1;
              if ((int)param_1[5] < 0) {
                FUN_0056bef8(param_1,"?",1);
                uVar11 = 1;
                goto LAB_0056a89c;
              }
              goto LAB_0056a76c;
            }
          }
        }
      }
    }
    uVar11 = 0;
    *(int *)((long)param_1 + 0x14) = iVar1;
    *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)((long)param_1 + 0x24);
    *(undefined8 *)((long)param_1 + 0x1c) = uVar12;
  }
LAB_0056a89c:
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
  return uVar11;
}



/* Entry: 0056a8dc; end: 0056adfb;  */

undefined8 FUN_0056a8dc(long *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  uint *puVar23;
  char acStack_4c [19];
  char cStack_39;
  long lStack_38;
  
  uVar22 = 0;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar9 = *(int *)((long)param_1 + 0x14);
  iVar13 = (int)param_1[3];
  iVar14 = iVar9 + 1;
  *(int *)((long)param_1 + 0x14) = iVar14;
  *(int *)(param_1 + 3) = iVar13 + 1;
  plVar8 = param_1;
  if ((0xff < iVar9) || (0x1ffff < iVar13)) goto LAB_0056ad58;
  puVar23 = (uint *)((long)param_1 + 0x1c);
  uVar10 = *(undefined8 *)puVar23;
  uVar2 = *(undefined4 *)((long)param_1 + 0x24);
  uVar3 = *(uint *)(param_1 + 5);
  iVar21 = iVar9 + 2;
  iVar15 = iVar13 + 2;
  *(int *)((long)param_1 + 0x14) = iVar21;
  *(int *)(param_1 + 3) = iVar15;
  if ((iVar9 < 0xff) && (iVar13 < 0x1ffff)) {
    lVar17 = *param_1;
    iVar20 = *(int *)((long)param_1 + 0x1c);
    pcVar1 = (char *)(lVar17 + iVar20);
    if ((*pcVar1 != 'U') || (pcVar1[1] != 't')) goto LAB_0056ab38;
    uVar16 = (long)iVar20 + 2;
    *(int *)((long)param_1 + 0x14) = iVar14;
    *(int *)(param_1 + 3) = iVar13 + 3;
    *(int *)((long)param_1 + 0x1c) = (int)uVar16;
    if (iVar13 < 0x1fffe) {
      bVar6 = false;
      plVar8 = (long *)(ulong)(iVar9 + 3U);
      iVar15 = iVar13 + 4;
      *(uint *)((long)param_1 + 0x14) = iVar9 + 3U;
      *(int *)(param_1 + 3) = iVar15;
      if ((iVar9 < 0xfe) && (iVar13 != 0x1fffd)) {
        if (*(char *)(lVar17 + uVar16) == 'n') {
          uVar16 = (ulong)(iVar20 + 3U);
          *puVar23 = iVar20 + 3U;
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
      }
      *(int *)((long)param_1 + 0x14) = iVar21;
      bVar5 = *(byte *)(lVar17 + (int)uVar16);
      uVar19 = (uint)bVar5;
      if (9 < bVar5 - 0x30) goto LAB_0056aa50;
      iVar13 = 0;
      pbVar12 = (byte *)((int)uVar16 + lVar17);
      plVar8 = (long *)((long)&MACH_HEADER.cpusubtype + 2);
      do {
        pbVar12 = pbVar12 + 1;
        iVar13 = uVar19 + iVar13 * 10 + -0x30;
        uVar19 = (uint)*pbVar12;
        uVar18 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar18;
      } while (uVar19 - 0x30 < 10);
      *(uint *)((long)param_1 + 0x1c) = uVar18;
      iVar20 = -iVar13;
      if (!bVar6) {
        iVar20 = iVar13;
      }
      *(int *)((long)param_1 + 0x14) = iVar14;
      iVar13 = iVar15;
      if (iVar20 < 0x7ffffffe) goto LAB_0056aa58;
      goto LAB_0056ab3c;
    }
    iVar15 = 0x20001;
LAB_0056aa50:
    uVar18 = (uint)uVar16;
    *(int *)((long)param_1 + 0x14) = iVar14;
    iVar20 = -1;
    iVar13 = iVar15;
LAB_0056aa58:
    iVar15 = iVar13 + 1;
    *(int *)((long)param_1 + 0x14) = iVar21;
    *(int *)(param_1 + 3) = iVar15;
    if ((0x1ffff < iVar13) || (*(char *)(lVar17 + (int)uVar18) != '_')) goto LAB_0056ab38;
    *(uint *)((long)param_1 + 0x1c) = uVar18 + 1;
    *(int *)((long)param_1 + 0x14) = iVar14;
    if (((int)uVar3 < 0) &&
       (plVar8 = param_1, FUN_0056bef8(param_1,"{unnamed type#",0xe), (int)param_1[5] < 0)) {
      lVar17 = 0;
      iVar14 = iVar20 + 2;
      do {
        lVar11 = lVar17;
        (&cStack_39)[lVar11] = (char)iVar14 + (char)(iVar14 / 10) * -10 + '0';
        lVar17 = lVar11 + -1;
        if (&cStack_39 + lVar11 <= acStack_4c) break;
        uVar3 = iVar14 - 10;
        iVar14 = iVar14 / 10;
      } while (uVar3 < 0xffffffed);
      if (lVar17 != 0) {
        do {
          lVar7 = param_1[4];
          iVar14 = (int)lVar7 + 1;
          if ((int)param_1[2] <= iVar14) {
            *(int *)(param_1 + 4) = (int)param_1[2] + 1;
            break;
          }
          uVar4 = *(undefined1 *)((long)&lStack_38 + lVar17);
          *(int *)(param_1 + 4) = iVar14;
          *(undefined1 *)(param_1[1] + (long)(int)lVar7) = uVar4;
          lVar11 = lVar11 + 1;
          lVar17 = lVar17 + 1;
        } while (lVar11 != 1);
      }
      if ((int)param_1[4] < (int)param_1[2]) {
        *(undefined1 *)(param_1[1] + (long)(int)param_1[4]) = 0;
      }
      if (-1 < (int)param_1[5]) goto LAB_0056adb4;
      uVar22 = 1;
      plVar8 = param_1;
      FUN_0056bef8(param_1,"}",1);
    }
    else {
LAB_0056adb4:
      uVar22 = 1;
    }
  }
  else {
LAB_0056ab38:
    *(int *)((long)param_1 + 0x14) = iVar14;
LAB_0056ab3c:
    *(undefined8 *)puVar23 = uVar10;
    *(undefined4 *)((long)param_1 + 0x24) = uVar2;
    *(int *)((long)param_1 + 0x14) = iVar21;
    *(int *)(param_1 + 3) = iVar15 + 1;
    if ((iVar9 < 0xff) && (iVar15 < 0x20000)) {
      pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
      if ((*pcVar1 != 'U') || (pcVar1[1] != 'l')) goto LAB_0056ad34;
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
      *(int *)((long)param_1 + 0x14) = iVar14;
      *(uint *)(param_1 + 5) = uVar3 & 0x7fffffff;
      plVar8 = param_1;
      FUN_0056afc4();
      if ((int)plVar8 != 0) {
        do {
          plVar8 = param_1;
          FUN_0056afc4();
        } while (((ulong)plVar8 & 1) != 0);
        *(uint *)(param_1 + 5) = uVar3 & 0x80000000 | *(uint *)(param_1 + 5) & 0x7fffffff;
        iVar14 = *(int *)((long)param_1 + 0x14);
        iVar13 = (int)param_1[3];
        iVar9 = iVar14 + 1;
        *(int *)((long)param_1 + 0x14) = iVar9;
        *(int *)(param_1 + 3) = iVar13 + 1;
        if ((iVar14 < 0x100) && (iVar13 < 0x20000)) {
          lVar17 = *param_1;
          iVar21 = *(int *)((long)param_1 + 0x1c);
          if (*(char *)(lVar17 + iVar21) == 'E') {
            uVar16 = (long)iVar21 + 1;
            *(int *)((long)param_1 + 0x14) = iVar14;
            *(int *)(param_1 + 3) = iVar13 + 2;
            *(int *)((long)param_1 + 0x1c) = (int)uVar16;
            if (iVar13 < 0x1ffff) {
              bVar6 = false;
              iVar15 = iVar13 + 3;
              *(int *)((long)param_1 + 0x14) = iVar14 + 2;
              *(int *)(param_1 + 3) = iVar15;
              if ((iVar14 < 0xff) && (iVar13 != 0x1fffe)) {
                if (*(char *)(lVar17 + uVar16) == 'n') {
                  uVar16 = (ulong)(iVar21 + 2U);
                  *puVar23 = iVar21 + 2U;
                  bVar6 = true;
                }
                else {
                  bVar6 = false;
                }
              }
              *(int *)((long)param_1 + 0x14) = iVar9;
              bVar5 = *(byte *)(lVar17 + (int)uVar16);
              uVar19 = (uint)bVar5;
              if (9 < bVar5 - 0x30) goto LAB_0056acd0;
              iVar13 = 0;
              pbVar12 = (byte *)((int)uVar16 + lVar17);
              do {
                pbVar12 = pbVar12 + 1;
                iVar13 = uVar19 + iVar13 * 10 + -0x30;
                uVar19 = (uint)*pbVar12;
                plVar8 = (long *)(ulong)(uVar19 - 0x30);
                uVar18 = (int)uVar16 + 1;
                uVar16 = (ulong)uVar18;
              } while (uVar19 - 0x30 < 10);
              *(uint *)((long)param_1 + 0x1c) = uVar18;
              iVar21 = -iVar13;
              if (!bVar6) {
                iVar21 = iVar13;
              }
              *(int *)((long)param_1 + 0x14) = iVar14;
              if (0x7ffffffd < iVar21) goto LAB_0056ad38;
            }
            else {
              iVar15 = 0x20001;
LAB_0056acd0:
              uVar18 = (uint)uVar16;
              *(int *)((long)param_1 + 0x14) = iVar14;
              iVar21 = -1;
            }
            *(int *)((long)param_1 + 0x14) = iVar9;
            *(int *)(param_1 + 3) = iVar15 + 1;
            if ((iVar15 < 0x20000) && (*(char *)(lVar17 + (int)uVar18) == '_')) {
              *(uint *)((long)param_1 + 0x1c) = uVar18 + 1;
              *(int *)((long)param_1 + 0x14) = iVar14;
              func_0x00569178(param_1,"{lambda()#");
              FUN_0056aeb0(param_1,iVar21 + 2);
              plVar8 = param_1;
              func_0x00569178(param_1,"}");
              uVar22 = 1;
              goto LAB_0056ad50;
            }
          }
        }
        goto LAB_0056ad34;
      }
    }
    else {
LAB_0056ad34:
      *(int *)((long)param_1 + 0x14) = iVar14;
    }
LAB_0056ad38:
    uVar22 = 0;
    *(undefined8 *)puVar23 = uVar10;
    *(undefined4 *)((long)param_1 + 0x24) = uVar2;
    *(uint *)(param_1 + 5) = uVar3;
  }
LAB_0056ad50:
  iVar9 = *(int *)((long)param_1 + 0x14) + -1;
LAB_0056ad58:
  *(int *)((long)param_1 + 0x14) = iVar9;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return uVar22;
  }
  ___stack_chk_fail();
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
  __Unwind_Resume();
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
  __Unwind_Resume();
  uVar22 = 0;
  iVar14 = *(int *)((long)plVar8 + 0x14);
  iVar9 = (int)plVar8[3];
  *(int *)(plVar8 + 3) = iVar9 + 1;
  if ((iVar14 < 0x100) && (iVar9 < 0x20000)) {
    *(int *)((long)plVar8 + 0x14) = iVar14 + 2;
    *(int *)(plVar8 + 3) = iVar9 + 2;
    lVar17 = *plVar8;
    iVar13 = *(int *)((long)plVar8 + 0x1c);
    if ((iVar14 < 0xff && iVar9 < 0x1ffff) && (*(char *)(lVar17 + iVar13) == 'n')) {
      iVar13 = iVar13 + 1;
      *(int *)((long)plVar8 + 0x1c) = iVar13;
    }
    *(int *)((long)plVar8 + 0x14) = iVar14 + 1;
    if (9 < *(byte *)(lVar17 + iVar13) - 0x30) {
      *(int *)((long)plVar8 + 0x14) = iVar14;
      return 0;
    }
    pbVar12 = (byte *)(iVar13 + lVar17);
    do {
      pbVar12 = pbVar12 + 1;
      iVar13 = iVar13 + 1;
    } while (*pbVar12 - 0x30 < 10);
    *(int *)((long)plVar8 + 0x1c) = iVar13;
    uVar22 = 1;
  }
  *(int *)((long)plVar8 + 0x14) = iVar14;
  return uVar22;
}



/* Entry: 0056adfc; end: 0056aeaf;  */

undefined8 FUN_0056adfc(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  
  uVar4 = 0;
  iVar1 = *(int *)((long)param_1 + 0x14);
  iVar2 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar2 + 1;
  if ((iVar1 < 0x100) && (iVar2 < 0x20000)) {
    *(int *)((long)param_1 + 0x14) = iVar1 + 2;
    *(int *)(param_1 + 3) = iVar2 + 2;
    lVar5 = *param_1;
    iVar3 = *(int *)((long)param_1 + 0x1c);
    if ((iVar1 < 0xff && iVar2 < 0x1ffff) && (*(char *)(lVar5 + iVar3) == 'n')) {
      iVar3 = iVar3 + 1;
      *(int *)((long)param_1 + 0x1c) = iVar3;
    }
    *(int *)((long)param_1 + 0x14) = iVar1 + 1;
    if (9 < *(byte *)(lVar5 + iVar3) - 0x30) {
      *(int *)((long)param_1 + 0x14) = iVar1;
      return 0;
    }
    pbVar6 = (byte *)(iVar3 + lVar5);
    do {
      pbVar6 = pbVar6 + 1;
      iVar3 = iVar3 + 1;
    } while (*pbVar6 - 0x30 < 10);
    *(int *)((long)param_1 + 0x1c) = iVar3;
    uVar4 = 1;
  }
  *(int *)((long)param_1 + 0x14) = iVar1;
  return uVar4;
}



/* Entry: 0056aeb0; end: 0056afc3;  */

long * FUN_0056aeb0(long *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  byte *pbVar15;
  undefined **ppuVar16;
  char *pcVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  char acStack_2c [19];
  char cStack_19;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((int)param_1[5] < 0) {
    lVar11 = 0;
    pcVar17 = &cStack_19;
    do {
      lVar11 = lVar11 + 1;
      *pcVar17 = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
      if (pcVar17 <= acStack_2c) break;
      uVar3 = param_2 - 10;
      pcVar17 = pcVar17 + -1;
      param_2 = param_2 / 10;
    } while (uVar3 < 0xffffffed);
    if (lVar11 != 0) {
      lVar13 = -lVar11;
      lVar11 = 1 - lVar11;
      do {
        lVar5 = param_1[4];
        iVar9 = (int)lVar5 + 1;
        if ((int)param_1[2] <= iVar9) {
          *(int *)(param_1 + 4) = (int)param_1[2] + 1;
          iVar9 = (int)param_1[4];
          if (iVar9 < (int)param_1[2]) goto LAB_0056af78;
          goto LAB_0056af80;
        }
        uVar2 = *(undefined1 *)((long)&lStack_18 + lVar13);
        *(int *)(param_1 + 4) = iVar9;
        *(undefined1 *)(param_1[1] + (long)(int)lVar5) = uVar2;
        lVar11 = lVar11 + 1;
        lVar13 = lVar13 + 1;
      } while (lVar11 != 1);
    }
    iVar9 = (int)param_1[4];
    if (iVar9 < (int)param_1[2]) {
LAB_0056af78:
      *(undefined1 *)(param_1[1] + (long)iVar9) = 0;
    }
  }
LAB_0056af80:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar6 = (long *)0x0;
  iVar10 = *(int *)((long)param_1 + 0x14);
  iVar12 = (int)param_1[3];
  iVar9 = iVar10 + 1;
  *(int *)((long)param_1 + 0x14) = iVar9;
  *(int *)(param_1 + 3) = iVar12 + 1;
  if ((0xff < iVar10) || (0x1ffff < iVar12)) goto LAB_0056b9c8;
  uVar24 = *(undefined8 *)((long)param_1 + 0x24);
  uVar21 = *(undefined8 *)((long)param_1 + 0x1c);
  iVar18 = iVar12 + 2;
  *(int *)(param_1 + 3) = iVar18;
  plVar6 = param_1;
  if (iVar10 < 0xff && iVar12 < 0x1ffff) {
    iVar14 = 0;
    iVar18 = iVar10 + 3;
    *(int *)((long)param_1 + 0x14) = iVar18;
    *(int *)(param_1 + 3) = iVar12 + 3;
    if ((iVar10 < 0xfe) && (iVar12 < 0x1fffe)) {
      if (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'r') {
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
        iVar14 = 1;
      }
      else {
        iVar14 = 0;
      }
    }
    iVar20 = 0;
    *(int *)((long)param_1 + 0x14) = iVar18;
    *(int *)(param_1 + 3) = iVar12 + 4;
    if ((iVar10 < 0xfe) && (iVar12 < 0x1fffd)) {
      if (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'V') {
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
        iVar20 = 1;
        goto LAB_0056b0b4;
      }
      iVar20 = 0;
      bVar4 = false;
      *(int *)((long)param_1 + 0x14) = iVar18;
      *(int *)(param_1 + 3) = iVar12 + 5;
      iVar18 = 0;
      if (iVar10 < 0xfe) goto LAB_0056b0c8;
LAB_0056b0f4:
      iVar18 = iVar12 + 5;
      *(int *)((long)param_1 + 0x14) = iVar9;
      if (!bVar4 && iVar20 + iVar14 == 0) goto LAB_0056b140;
    }
    else {
LAB_0056b0b4:
      bVar4 = false;
      *(int *)((long)param_1 + 0x14) = iVar18;
      *(int *)(param_1 + 3) = iVar12 + 5;
      iVar18 = iVar20;
      if (0xfd < iVar10) goto LAB_0056b0f4;
LAB_0056b0c8:
      iVar20 = iVar18;
      iVar18 = iVar12 + 5;
      bVar4 = false;
      if (0x1fffb < iVar12) goto LAB_0056b0f4;
      if (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'K') {
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
        bVar4 = true;
        goto LAB_0056b0f4;
      }
      *(int *)((long)param_1 + 0x14) = iVar9;
      if (iVar20 + iVar14 == 0) goto LAB_0056b140;
    }
    FUN_0056afc4();
joined_r0x0056b1a4:
    if (((ulong)plVar6 & 1) == 0) {
LAB_0056b1a8:
      plVar6 = (long *)0x0;
      *(undefined8 *)((long)param_1 + 0x24) = uVar24;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar21;
    }
    else {
LAB_0056b9bc:
      plVar6 = (long *)((long)&MACH_HEADER.magic + 1);
    }
  }
  else {
    *(int *)((long)param_1 + 0x14) = iVar9;
LAB_0056b140:
    *(undefined8 *)((long)param_1 + 0x24) = uVar24;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar21;
    iVar12 = iVar10 + 2;
    *(int *)((long)param_1 + 0x14) = iVar12;
    *(int *)(param_1 + 3) = iVar18 + 1;
    if (((iVar10 < 0xff) && (iVar18 < 0x20000)) &&
       (uVar3 = *(byte *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) - 0x43,
       uVar3 < 0x10 && (1 << (ulong)(uVar3 & 0x1f) & 0xb011U) != 0)) {
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
      *(int *)((long)param_1 + 0x14) = iVar9;
      FUN_0056afc4();
      goto joined_r0x0056b1a4;
    }
    *(undefined8 *)((long)param_1 + 0x24) = uVar24;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar21;
    iVar14 = iVar18 + 2;
    *(int *)((long)param_1 + 0x14) = iVar12;
    *(int *)(param_1 + 3) = iVar14;
    if ((iVar10 < 0xff) && (iVar18 < 0x1ffff)) {
      pcVar17 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
      if ((*pcVar17 != 'D') || (pcVar17[1] != 'p')) goto LAB_0056b23c;
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
      *(int *)((long)param_1 + 0x14) = iVar9;
      plVar7 = param_1;
      FUN_0056afc4();
      if (((ulong)plVar7 & 1) == 0) {
        iVar9 = *(int *)((long)param_1 + 0x14);
        iVar14 = (int)param_1[3];
        *(undefined8 *)((long)param_1 + 0x24) = uVar24;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar21;
        *(int *)((long)param_1 + 0x14) = iVar9 + 1;
        *(int *)(param_1 + 3) = iVar14 + 1;
        if (iVar9 < 0x100) goto LAB_0056b258;
        goto LAB_0056b29c;
      }
      goto LAB_0056b9bc;
    }
LAB_0056b23c:
    *(int *)((long)param_1 + 0x14) = iVar9;
    *(undefined8 *)((long)param_1 + 0x24) = uVar24;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar21;
    *(int *)((long)param_1 + 0x14) = iVar12;
    *(int *)(param_1 + 3) = iVar18 + 3;
    if (iVar9 < 0x100) {
LAB_0056b258:
      if ((0x1ffff < iVar14) || (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'U'))
      goto LAB_0056b29c;
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
      *(int *)((long)param_1 + 0x14) = iVar9;
      plVar7 = param_1;
      FUN_0056badc();
      if (((int)plVar7 != 0) && (plVar7 = param_1, FUN_0056afc4(), ((ulong)plVar7 & 1) != 0))
      goto LAB_0056b9bc;
    }
    else {
LAB_0056b29c:
      *(int *)((long)param_1 + 0x14) = iVar9;
    }
    *(undefined8 *)((long)param_1 + 0x24) = uVar24;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar21;
    iVar12 = *(int *)((long)param_1 + 0x14);
    lVar11 = param_1[3];
    iVar9 = iVar12 + 1;
    iVar10 = (int)lVar11 + 1;
    *(int *)((long)param_1 + 0x14) = iVar9;
    *(int *)(param_1 + 3) = iVar10;
    if ((0xff < iVar12) || (0x1ffff < (int)lVar11)) {
LAB_0056b438:
      iVar12 = iVar10 + 1;
      *(int *)(param_1 + 3) = iVar12;
      if ((iVar9 < 0x101) && (iVar10 < 0x20000)) {
        uVar25 = *(undefined8 *)((long)param_1 + 0x24);
        uVar22 = *(undefined8 *)((long)param_1 + 0x1c);
        iVar12 = iVar9 + 1;
        iVar18 = iVar10 + 2;
        *(int *)((long)param_1 + 0x14) = iVar12;
        *(int *)(param_1 + 3) = iVar18;
        if ((iVar9 < 0x100) && (iVar10 < 0x1ffff)) {
          iVar18 = iVar10 + 3;
          *(int *)((long)param_1 + 0x14) = iVar9 + 2;
          *(int *)(param_1 + 3) = iVar18;
          if ((iVar9 < 0xff) && (iVar10 < 0x1fffe)) {
            pcVar17 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
            if ((*pcVar17 != 'D') || (pcVar17[1] != 'o')) goto LAB_0056b4d0;
            iVar9 = *(int *)((long)param_1 + 0x1c) + 2;
          }
          else {
LAB_0056b4d0:
            uVar26 = *(undefined8 *)((long)param_1 + 0x24);
            uVar23 = *(undefined8 *)((long)param_1 + 0x1c);
            iVar18 = iVar10 + 4;
            *(int *)((long)param_1 + 0x14) = iVar9 + 2;
            *(int *)(param_1 + 3) = iVar18;
            if ((0xfe < iVar9) || (0x1fffc < iVar10)) {
LAB_0056b564:
              *(int *)((long)param_1 + 0x14) = iVar12;
              iVar9 = iVar18;
LAB_0056b56c:
              *(undefined8 *)((long)param_1 + 0x24) = uVar26;
              *(undefined8 *)((long)param_1 + 0x1c) = uVar23;
              iVar18 = iVar9 + 1;
              *(int *)((long)param_1 + 0x14) = iVar12 + 1;
              *(int *)(param_1 + 3) = iVar18;
              if ((iVar12 < 0x100) && (iVar9 < 0x20000)) {
                pcVar17 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
                if ((*pcVar17 != 'D') || (pcVar17[1] != 'w')) goto LAB_0056b614;
                *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
                *(int *)((long)param_1 + 0x14) = iVar12;
                plVar7 = param_1;
                FUN_0056afc4();
                if ((int)plVar7 != 0) {
                  do {
                    plVar7 = param_1;
                    FUN_0056afc4();
                  } while (((ulong)plVar7 & 1) != 0);
                  iVar12 = *(int *)((long)param_1 + 0x14);
                  lVar11 = param_1[3];
                  iVar18 = (int)lVar11 + 1;
                  *(int *)((long)param_1 + 0x14) = iVar12 + 1;
                  *(int *)(param_1 + 3) = iVar18;
                  if (((iVar12 < 0x100) && ((int)lVar11 < 0x20000)) &&
                     (iVar9 = *(int *)((long)param_1 + 0x1c),
                     *(char *)(*param_1 + (long)iVar9) == 'E')) goto LAB_0056b60c;
                  goto LAB_0056b614;
                }
                iVar12 = *(int *)((long)param_1 + 0x14);
                iVar18 = (int)param_1[3];
              }
              else {
LAB_0056b614:
                *(int *)((long)param_1 + 0x14) = iVar12;
              }
              *(undefined8 *)((long)param_1 + 0x24) = uVar26;
              *(undefined8 *)((long)param_1 + 0x1c) = uVar23;
              goto LAB_0056b620;
            }
            pcVar17 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
            if ((*pcVar17 != 'D') || (pcVar17[1] != 'O')) goto LAB_0056b564;
            *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
            *(int *)((long)param_1 + 0x14) = iVar12;
            plVar7 = param_1;
            FUN_0056c000();
            iVar12 = *(int *)((long)param_1 + 0x14);
            iVar9 = (int)param_1[3];
            if ((int)plVar7 == 0) goto LAB_0056b56c;
            iVar18 = iVar9 + 1;
            *(int *)((long)param_1 + 0x14) = iVar12 + 1;
            *(int *)(param_1 + 3) = iVar18;
            if (((0xff < iVar12) || (0x1ffff < iVar9)) ||
               (iVar9 = *(int *)((long)param_1 + 0x1c), *(char *)(*param_1 + (long)iVar9) != 'E'))
            goto LAB_0056b564;
LAB_0056b60c:
            iVar9 = iVar9 + 1;
          }
          *(int *)((long)param_1 + 0x1c) = iVar9;
          *(int *)((long)param_1 + 0x14) = iVar12;
        }
LAB_0056b620:
        iVar9 = iVar12 + -1;
        *(int *)(param_1 + 3) = iVar18 + 1;
        if (((iVar12 < 0x101) && (iVar18 < 0x20000)) &&
           (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'F')) {
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          *(int *)((long)param_1 + 0x14) = iVar9;
          FUN_0056a2d0(param_1,0x59);
          plVar7 = param_1;
          FUN_00569bc4();
          if (((ulong)plVar7 & 1) == 0) {
            iVar9 = *(int *)((long)param_1 + 0x14);
          }
          else {
            FUN_0056a2d0(param_1,0x4f);
            plVar7 = param_1;
            FUN_0056a2d0(param_1,0x45);
            iVar9 = *(int *)((long)param_1 + 0x14);
            if ((int)plVar7 != 0) goto LAB_0056ba4c;
          }
        }
        else {
          *(int *)((long)param_1 + 0x14) = iVar9;
        }
        *(undefined8 *)((long)param_1 + 0x24) = uVar25;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar22;
        iVar12 = (int)param_1[3];
      }
      iVar10 = iVar12 + 1;
      *(int *)(param_1 + 3) = iVar10;
      if ((iVar9 < 0x101) && (iVar12 < 0x20000)) {
        plVar7 = param_1;
        FUN_00569838();
        iVar9 = *(int *)((long)param_1 + 0x14);
        iVar18 = iVar9 + -1;
        *(int *)((long)param_1 + 0x14) = iVar18;
        if (((ulong)plVar7 & 1) != 0) goto LAB_0056b9bc;
        iVar10 = (int)param_1[3];
        iVar12 = iVar10 + 1;
        *(int *)((long)param_1 + 0x14) = iVar9;
        *(int *)(param_1 + 3) = iVar12;
      }
      else {
        iVar18 = iVar9 + -1;
        *(int *)((long)param_1 + 0x14) = iVar18;
        iVar12 = iVar12 + 2;
        *(int *)((long)param_1 + 0x14) = iVar9;
        *(int *)(param_1 + 3) = iVar12;
      }
      if ((iVar18 < 0x100) && (iVar10 < 0x20000)) {
        uVar25 = *(undefined8 *)((long)param_1 + 0x24);
        uVar22 = *(undefined8 *)((long)param_1 + 0x1c);
        iVar12 = iVar18 + 2;
        iVar14 = iVar10 + 2;
        *(int *)((long)param_1 + 0x14) = iVar12;
        *(int *)(param_1 + 3) = iVar14;
        if ((iVar18 < 0xff) && (iVar10 < 0x1ffff)) {
          lVar11 = *param_1;
          iVar20 = *(int *)((long)param_1 + 0x1c);
          if (*(char *)(lVar11 + iVar20) != 'A') goto LAB_0056b82c;
          uVar19 = (long)iVar20 + 1;
          *(int *)((long)param_1 + 0x14) = iVar9;
          *(int *)(param_1 + 3) = iVar10 + 3;
          *(int *)((long)param_1 + 0x1c) = (int)uVar19;
          if (0x1fffd < iVar10) {
            iVar14 = 0x20001;
            goto LAB_0056b82c;
          }
          iVar14 = iVar10 + 4;
          *(int *)((long)param_1 + 0x14) = iVar18 + 3;
          *(int *)(param_1 + 3) = iVar14;
          if (((iVar18 < 0xfe) && (iVar10 != 0x1fffd)) && (*(char *)(lVar11 + uVar19) == 'n')) {
            uVar19 = (ulong)(iVar20 + 2U);
            *(uint *)((long)param_1 + 0x1c) = iVar20 + 2U;
          }
          *(int *)((long)param_1 + 0x14) = iVar12;
          if (9 < *(byte *)(lVar11 + (int)uVar19) - 0x30) goto LAB_0056b82c;
          pbVar15 = (byte *)((int)uVar19 + lVar11);
          do {
            pbVar15 = pbVar15 + 1;
            iVar18 = (int)uVar19;
            uVar3 = iVar18 + 1;
            uVar19 = (ulong)uVar3;
          } while (*pbVar15 - 0x30 < 10);
          iVar14 = iVar10 + 5;
          *(int *)((long)param_1 + 0x14) = iVar12;
          *(int *)(param_1 + 3) = iVar14;
          *(uint *)((long)param_1 + 0x1c) = uVar3;
          if ((0x1fffb < iVar10) || (*(char *)(lVar11 + (int)uVar3) != '_')) goto LAB_0056b82c;
          *(int *)((long)param_1 + 0x1c) = iVar18 + 2;
          *(int *)((long)param_1 + 0x14) = iVar9;
          plVar7 = param_1;
          FUN_0056afc4();
          if (((ulong)plVar7 & 1) == 0) {
            iVar9 = *(int *)((long)param_1 + 0x14);
            iVar14 = (int)param_1[3];
            goto LAB_0056b830;
          }
LAB_0056ba48:
          iVar9 = *(int *)((long)param_1 + 0x14);
          goto LAB_0056ba4c;
        }
LAB_0056b82c:
        *(int *)((long)param_1 + 0x14) = iVar9;
LAB_0056b830:
        *(undefined8 *)((long)param_1 + 0x24) = uVar25;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar22;
        iVar12 = iVar14 + 1;
        *(int *)((long)param_1 + 0x14) = iVar9 + 1;
        *(int *)(param_1 + 3) = iVar12;
        if (((iVar9 < 0x100) && (iVar14 < 0x20000)) &&
           (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'A')) {
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          *(int *)((long)param_1 + 0x14) = iVar9;
          FUN_0056c000(param_1);
          iVar9 = *(int *)((long)param_1 + 0x14);
          lVar11 = param_1[3];
          iVar12 = (int)lVar11 + 1;
          *(int *)((long)param_1 + 0x14) = iVar9 + 1;
          *(int *)(param_1 + 3) = iVar12;
          if (((0xff < iVar9) || (0x1ffff < (int)lVar11)) ||
             (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != '_')) goto LAB_0056b8d0;
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          *(int *)((long)param_1 + 0x14) = iVar9;
          plVar7 = param_1;
          FUN_0056afc4();
          if (((ulong)plVar7 & 1) != 0) goto LAB_0056ba48;
          iVar9 = *(int *)((long)param_1 + 0x14);
          iVar12 = (int)param_1[3];
        }
        else {
LAB_0056b8d0:
          *(int *)((long)param_1 + 0x14) = iVar9;
        }
        *(undefined8 *)((long)param_1 + 0x24) = uVar25;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar22;
        iVar18 = iVar9 + -1;
      }
      *(int *)((long)param_1 + 0x14) = iVar9;
      *(int *)(param_1 + 3) = iVar12 + 1;
      if ((iVar18 < 0x100) && (iVar12 < 0x20000)) {
        uVar25 = *(undefined8 *)((long)param_1 + 0x24);
        uVar22 = *(undefined8 *)((long)param_1 + 0x1c);
        *(int *)((long)param_1 + 0x14) = iVar18 + 2;
        *(int *)(param_1 + 3) = iVar12 + 2;
        if ((iVar18 < 0xff) &&
           ((iVar12 < 0x1ffff && (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'M')
            ))) {
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          *(int *)((long)param_1 + 0x14) = iVar9;
          plVar7 = param_1;
          FUN_0056afc4();
          if (((ulong)plVar7 & 1) == 0) {
            iVar9 = *(int *)((long)param_1 + 0x14);
          }
          else {
            plVar7 = param_1;
            FUN_0056afc4();
            iVar9 = *(int *)((long)param_1 + 0x14);
            if ((int)plVar7 != 0) goto LAB_0056ba4c;
          }
        }
        else {
          *(int *)((long)param_1 + 0x14) = iVar9;
        }
        *(undefined8 *)((long)param_1 + 0x24) = uVar25;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar22;
        iVar18 = iVar9 + -1;
      }
      *(int *)((long)param_1 + 0x14) = iVar18;
      plVar7 = param_1;
      FUN_0056bd34();
      if (((((ulong)plVar7 & 1) == 0) &&
          (plVar7 = param_1, FUN_00569cbc(param_1,0), ((ulong)plVar7 & 1) == 0)) &&
         ((plVar7 = param_1, FUN_0056be78(), (int)plVar7 == 0 ||
          (plVar7 = param_1, FUN_0056a014(), ((ulong)plVar7 & 1) == 0)))) {
        *(undefined8 *)((long)param_1 + 0x24) = uVar24;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar21;
        plVar7 = param_1;
        FUN_0056a6e4();
        if (((ulong)plVar7 & 1) != 0) goto LAB_0056b9bc;
        plVar7 = param_1;
        FUN_005691cc();
        if (((int)plVar7 != 0) && (plVar7 = param_1, FUN_0056adfc(), (int)plVar7 != 0)) {
          FUN_0056a2d0(param_1,0x5f);
          goto joined_r0x0056b1a4;
        }
        goto LAB_0056b1a8;
      }
      goto LAB_0056b9bc;
    }
    iVar18 = iVar12 + 2;
    if (iVar12 < 0xff) {
      pcVar17 = "v";
      ppuVar16 = &PTR_s_w_00a01608;
LAB_0056b330:
      if (pcVar17[1] == '\0') {
        cVar1 = *pcVar17;
        *(int *)((long)param_1 + 0x14) = iVar18;
        *(int *)(param_1 + 3) = iVar10 + 1;
        if ((iVar10 < 0x20000) &&
           (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == cVar1)) {
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          *(int *)((long)param_1 + 0x14) = iVar9;
          if ((int)param_1[5] < 0) {
            pcVar17 = ppuVar16[-2];
            if (*pcVar17 == '\0') {
LAB_0056ba38:
              pcVar8 = (char *)0x0;
            }
            else {
LAB_0056b3c8:
              pcVar8 = pcVar17 + 1;
              _strlen(pcVar8);
              pcVar8 = pcVar8 + 1;
            }
            FUN_0056bef8(param_1,pcVar17,pcVar8);
          }
          goto LAB_0056ba48;
        }
      }
      else {
        if (pcVar17[2] != '\0') goto LAB_0056b328;
        *(int *)((long)param_1 + 0x14) = iVar18;
        *(int *)(param_1 + 3) = iVar10 + 1;
        if (iVar10 < 0x20000) {
          pcVar8 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
          if ((*pcVar8 != *pcVar17) || (pcVar8[1] != pcVar17[1])) goto LAB_0056b320;
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
          *(int *)((long)param_1 + 0x14) = iVar9;
          if ((int)param_1[5] < 0) {
            pcVar17 = ppuVar16[-2];
            if (*pcVar17 != '\0') goto LAB_0056b3c8;
            goto LAB_0056ba38;
          }
          goto LAB_0056ba48;
        }
      }
LAB_0056b320:
      iVar10 = iVar10 + 1;
      *(int *)((long)param_1 + 0x14) = iVar9;
LAB_0056b328:
      pcVar17 = *ppuVar16;
      ppuVar16 = ppuVar16 + 3;
      if (pcVar17 == (char *)0x0) goto LAB_0056b3d8;
      goto LAB_0056b330;
    }
    pcVar17 = "v";
    ppuVar16 = &PTR_s_w_00a01608;
    do {
      if ((pcVar17[1] == '\0') || (pcVar17[2] == '\0')) {
        iVar10 = iVar10 + 1;
        *(int *)((long)param_1 + 0x14) = iVar9;
        *(int *)(param_1 + 3) = iVar10;
      }
      pcVar17 = *ppuVar16;
      ppuVar16 = ppuVar16 + 3;
    } while (pcVar17 != (char *)0x0);
LAB_0056b3d8:
    *(int *)((long)param_1 + 0x14) = iVar18;
    *(int *)(param_1 + 3) = iVar10 + 1;
    if (((0xfe < iVar12) || (0x1ffff < iVar10)) ||
       (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'u')) {
      *(int *)((long)param_1 + 0x14) = iVar9;
      iVar10 = iVar10 + 1;
LAB_0056b42c:
      *(undefined8 *)((long)param_1 + 0x24) = uVar24;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar21;
      goto LAB_0056b438;
    }
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
    *(int *)((long)param_1 + 0x14) = iVar9;
    plVar7 = param_1;
    FUN_0056badc();
    iVar9 = *(int *)((long)param_1 + 0x14);
    if (((ulong)plVar7 & 1) == 0) {
      iVar10 = (int)param_1[3];
      goto LAB_0056b42c;
    }
LAB_0056ba4c:
    *(int *)((long)param_1 + 0x14) = iVar9 + -1;
    plVar6 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  iVar10 = *(int *)((long)param_1 + 0x14) + -1;
LAB_0056b9c8:
  *(int *)((long)param_1 + 0x14) = iVar10;
  return plVar6;
}



/* Entry: 0056afc4; end: 0056badb;  */

undefined8 FUN_0056afc4(long *param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  undefined **ppuVar13;
  char *pcVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar4 = 0;
  iVar9 = *(int *)((long)param_1 + 0x14);
  iVar10 = (int)param_1[3];
  iVar8 = iVar9 + 1;
  *(int *)((long)param_1 + 0x14) = iVar8;
  *(int *)(param_1 + 3) = iVar10 + 1;
  if ((0xff < iVar9) || (0x1ffff < iVar10)) goto LAB_0056b9c8;
  uVar21 = *(undefined8 *)((long)param_1 + 0x24);
  uVar19 = *(undefined8 *)((long)param_1 + 0x1c);
  iVar16 = iVar10 + 2;
  *(int *)(param_1 + 3) = iVar16;
  plVar5 = param_1;
  if (iVar9 < 0xff && iVar10 < 0x1ffff) {
    iVar11 = 0;
    iVar16 = iVar9 + 3;
    *(int *)((long)param_1 + 0x14) = iVar16;
    *(int *)(param_1 + 3) = iVar10 + 3;
    if ((iVar9 < 0xfe) && (iVar10 < 0x1fffe)) {
      if (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'r') {
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
        iVar11 = 1;
      }
      else {
        iVar11 = 0;
      }
    }
    iVar18 = 0;
    *(int *)((long)param_1 + 0x14) = iVar16;
    *(int *)(param_1 + 3) = iVar10 + 4;
    if ((iVar9 < 0xfe) && (iVar10 < 0x1fffd)) {
      if (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'V') {
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
        iVar18 = 1;
        goto LAB_0056b0b4;
      }
      iVar18 = 0;
      bVar3 = false;
      *(int *)((long)param_1 + 0x14) = iVar16;
      *(int *)(param_1 + 3) = iVar10 + 5;
      iVar16 = 0;
      if (iVar9 < 0xfe) goto LAB_0056b0c8;
LAB_0056b0f4:
      iVar16 = iVar10 + 5;
      *(int *)((long)param_1 + 0x14) = iVar8;
      if (!bVar3 && iVar18 + iVar11 == 0) goto LAB_0056b140;
    }
    else {
LAB_0056b0b4:
      bVar3 = false;
      *(int *)((long)param_1 + 0x14) = iVar16;
      *(int *)(param_1 + 3) = iVar10 + 5;
      iVar16 = iVar18;
      if (0xfd < iVar9) goto LAB_0056b0f4;
LAB_0056b0c8:
      iVar18 = iVar16;
      iVar16 = iVar10 + 5;
      bVar3 = false;
      if (0x1fffb < iVar10) goto LAB_0056b0f4;
      if (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'K') {
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
        bVar3 = true;
        goto LAB_0056b0f4;
      }
      *(int *)((long)param_1 + 0x14) = iVar8;
      if (iVar18 + iVar11 == 0) goto LAB_0056b140;
    }
    FUN_0056afc4();
joined_r0x0056b1a4:
    if (((ulong)plVar5 & 1) == 0) {
LAB_0056b1a8:
      uVar4 = 0;
      *(undefined8 *)((long)param_1 + 0x24) = uVar21;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar19;
    }
    else {
LAB_0056b9bc:
      uVar4 = 1;
    }
  }
  else {
    *(int *)((long)param_1 + 0x14) = iVar8;
LAB_0056b140:
    *(undefined8 *)((long)param_1 + 0x24) = uVar21;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar19;
    iVar10 = iVar9 + 2;
    *(int *)((long)param_1 + 0x14) = iVar10;
    *(int *)(param_1 + 3) = iVar16 + 1;
    if (((iVar9 < 0xff) && (iVar16 < 0x20000)) &&
       (uVar2 = *(byte *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) - 0x43,
       uVar2 < 0x10 && (1 << (ulong)(uVar2 & 0x1f) & 0xb011U) != 0)) {
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
      *(int *)((long)param_1 + 0x14) = iVar8;
      FUN_0056afc4();
      goto joined_r0x0056b1a4;
    }
    *(undefined8 *)((long)param_1 + 0x24) = uVar21;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar19;
    iVar11 = iVar16 + 2;
    *(int *)((long)param_1 + 0x14) = iVar10;
    *(int *)(param_1 + 3) = iVar11;
    if ((iVar9 < 0xff) && (iVar16 < 0x1ffff)) {
      pcVar14 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
      if ((*pcVar14 != 'D') || (pcVar14[1] != 'p')) goto LAB_0056b23c;
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
      *(int *)((long)param_1 + 0x14) = iVar8;
      plVar6 = param_1;
      FUN_0056afc4();
      if (((ulong)plVar6 & 1) == 0) {
        iVar8 = *(int *)((long)param_1 + 0x14);
        iVar11 = (int)param_1[3];
        *(undefined8 *)((long)param_1 + 0x24) = uVar21;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar19;
        *(int *)((long)param_1 + 0x14) = iVar8 + 1;
        *(int *)(param_1 + 3) = iVar11 + 1;
        if (iVar8 < 0x100) goto LAB_0056b258;
        goto LAB_0056b29c;
      }
      goto LAB_0056b9bc;
    }
LAB_0056b23c:
    *(int *)((long)param_1 + 0x14) = iVar8;
    *(undefined8 *)((long)param_1 + 0x24) = uVar21;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar19;
    *(int *)((long)param_1 + 0x14) = iVar10;
    *(int *)(param_1 + 3) = iVar16 + 3;
    if (iVar8 < 0x100) {
LAB_0056b258:
      if ((0x1ffff < iVar11) || (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'U'))
      goto LAB_0056b29c;
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
      *(int *)((long)param_1 + 0x14) = iVar8;
      plVar6 = param_1;
      FUN_0056badc();
      if (((int)plVar6 != 0) && (plVar6 = param_1, FUN_0056afc4(), ((ulong)plVar6 & 1) != 0))
      goto LAB_0056b9bc;
    }
    else {
LAB_0056b29c:
      *(int *)((long)param_1 + 0x14) = iVar8;
    }
    *(undefined8 *)((long)param_1 + 0x24) = uVar21;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar19;
    iVar10 = *(int *)((long)param_1 + 0x14);
    lVar15 = param_1[3];
    iVar8 = iVar10 + 1;
    iVar9 = (int)lVar15 + 1;
    *(int *)((long)param_1 + 0x14) = iVar8;
    *(int *)(param_1 + 3) = iVar9;
    if ((0xff < iVar10) || (0x1ffff < (int)lVar15)) {
LAB_0056b438:
      iVar10 = iVar9 + 1;
      *(int *)(param_1 + 3) = iVar10;
      if ((iVar8 < 0x101) && (iVar9 < 0x20000)) {
        uVar22 = *(undefined8 *)((long)param_1 + 0x24);
        uVar4 = *(undefined8 *)((long)param_1 + 0x1c);
        iVar10 = iVar8 + 1;
        iVar16 = iVar9 + 2;
        *(int *)((long)param_1 + 0x14) = iVar10;
        *(int *)(param_1 + 3) = iVar16;
        if ((iVar8 < 0x100) && (iVar9 < 0x1ffff)) {
          iVar16 = iVar9 + 3;
          *(int *)((long)param_1 + 0x14) = iVar8 + 2;
          *(int *)(param_1 + 3) = iVar16;
          if ((iVar8 < 0xff) && (iVar9 < 0x1fffe)) {
            pcVar14 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
            if ((*pcVar14 != 'D') || (pcVar14[1] != 'o')) goto LAB_0056b4d0;
            iVar8 = *(int *)((long)param_1 + 0x1c) + 2;
          }
          else {
LAB_0056b4d0:
            uVar23 = *(undefined8 *)((long)param_1 + 0x24);
            uVar20 = *(undefined8 *)((long)param_1 + 0x1c);
            iVar16 = iVar9 + 4;
            *(int *)((long)param_1 + 0x14) = iVar8 + 2;
            *(int *)(param_1 + 3) = iVar16;
            if ((0xfe < iVar8) || (0x1fffc < iVar9)) {
LAB_0056b564:
              *(int *)((long)param_1 + 0x14) = iVar10;
              iVar8 = iVar16;
LAB_0056b56c:
              *(undefined8 *)((long)param_1 + 0x24) = uVar23;
              *(undefined8 *)((long)param_1 + 0x1c) = uVar20;
              iVar16 = iVar8 + 1;
              *(int *)((long)param_1 + 0x14) = iVar10 + 1;
              *(int *)(param_1 + 3) = iVar16;
              if ((iVar10 < 0x100) && (iVar8 < 0x20000)) {
                pcVar14 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
                if ((*pcVar14 != 'D') || (pcVar14[1] != 'w')) goto LAB_0056b614;
                *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
                *(int *)((long)param_1 + 0x14) = iVar10;
                plVar6 = param_1;
                FUN_0056afc4();
                if ((int)plVar6 != 0) {
                  do {
                    plVar6 = param_1;
                    FUN_0056afc4();
                  } while (((ulong)plVar6 & 1) != 0);
                  iVar10 = *(int *)((long)param_1 + 0x14);
                  lVar15 = param_1[3];
                  iVar16 = (int)lVar15 + 1;
                  *(int *)((long)param_1 + 0x14) = iVar10 + 1;
                  *(int *)(param_1 + 3) = iVar16;
                  if (((iVar10 < 0x100) && ((int)lVar15 < 0x20000)) &&
                     (iVar8 = *(int *)((long)param_1 + 0x1c),
                     *(char *)(*param_1 + (long)iVar8) == 'E')) goto LAB_0056b60c;
                  goto LAB_0056b614;
                }
                iVar10 = *(int *)((long)param_1 + 0x14);
                iVar16 = (int)param_1[3];
              }
              else {
LAB_0056b614:
                *(int *)((long)param_1 + 0x14) = iVar10;
              }
              *(undefined8 *)((long)param_1 + 0x24) = uVar23;
              *(undefined8 *)((long)param_1 + 0x1c) = uVar20;
              goto LAB_0056b620;
            }
            pcVar14 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
            if ((*pcVar14 != 'D') || (pcVar14[1] != 'O')) goto LAB_0056b564;
            *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
            *(int *)((long)param_1 + 0x14) = iVar10;
            plVar6 = param_1;
            FUN_0056c000();
            iVar10 = *(int *)((long)param_1 + 0x14);
            iVar8 = (int)param_1[3];
            if ((int)plVar6 == 0) goto LAB_0056b56c;
            iVar16 = iVar8 + 1;
            *(int *)((long)param_1 + 0x14) = iVar10 + 1;
            *(int *)(param_1 + 3) = iVar16;
            if (((0xff < iVar10) || (0x1ffff < iVar8)) ||
               (iVar8 = *(int *)((long)param_1 + 0x1c), *(char *)(*param_1 + (long)iVar8) != 'E'))
            goto LAB_0056b564;
LAB_0056b60c:
            iVar8 = iVar8 + 1;
          }
          *(int *)((long)param_1 + 0x1c) = iVar8;
          *(int *)((long)param_1 + 0x14) = iVar10;
        }
LAB_0056b620:
        iVar8 = iVar10 + -1;
        *(int *)(param_1 + 3) = iVar16 + 1;
        if (((iVar10 < 0x101) && (iVar16 < 0x20000)) &&
           (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'F')) {
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          *(int *)((long)param_1 + 0x14) = iVar8;
          FUN_0056a2d0(param_1,0x59);
          plVar6 = param_1;
          FUN_00569bc4();
          if (((ulong)plVar6 & 1) == 0) {
            iVar8 = *(int *)((long)param_1 + 0x14);
          }
          else {
            FUN_0056a2d0(param_1,0x4f);
            plVar6 = param_1;
            FUN_0056a2d0(param_1,0x45);
            iVar8 = *(int *)((long)param_1 + 0x14);
            if ((int)plVar6 != 0) goto LAB_0056ba4c;
          }
        }
        else {
          *(int *)((long)param_1 + 0x14) = iVar8;
        }
        *(undefined8 *)((long)param_1 + 0x24) = uVar22;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar4;
        iVar10 = (int)param_1[3];
      }
      iVar9 = iVar10 + 1;
      *(int *)(param_1 + 3) = iVar9;
      if ((iVar8 < 0x101) && (iVar10 < 0x20000)) {
        plVar6 = param_1;
        FUN_00569838();
        iVar8 = *(int *)((long)param_1 + 0x14);
        iVar16 = iVar8 + -1;
        *(int *)((long)param_1 + 0x14) = iVar16;
        if (((ulong)plVar6 & 1) != 0) goto LAB_0056b9bc;
        iVar9 = (int)param_1[3];
        iVar10 = iVar9 + 1;
        *(int *)((long)param_1 + 0x14) = iVar8;
        *(int *)(param_1 + 3) = iVar10;
      }
      else {
        iVar16 = iVar8 + -1;
        *(int *)((long)param_1 + 0x14) = iVar16;
        iVar10 = iVar10 + 2;
        *(int *)((long)param_1 + 0x14) = iVar8;
        *(int *)(param_1 + 3) = iVar10;
      }
      if ((iVar16 < 0x100) && (iVar9 < 0x20000)) {
        uVar22 = *(undefined8 *)((long)param_1 + 0x24);
        uVar4 = *(undefined8 *)((long)param_1 + 0x1c);
        iVar10 = iVar16 + 2;
        iVar11 = iVar9 + 2;
        *(int *)((long)param_1 + 0x14) = iVar10;
        *(int *)(param_1 + 3) = iVar11;
        if ((iVar16 < 0xff) && (iVar9 < 0x1ffff)) {
          lVar15 = *param_1;
          iVar18 = *(int *)((long)param_1 + 0x1c);
          if (*(char *)(lVar15 + iVar18) != 'A') goto LAB_0056b82c;
          uVar17 = (long)iVar18 + 1;
          *(int *)((long)param_1 + 0x14) = iVar8;
          *(int *)(param_1 + 3) = iVar9 + 3;
          *(int *)((long)param_1 + 0x1c) = (int)uVar17;
          if (0x1fffd < iVar9) {
            iVar11 = 0x20001;
            goto LAB_0056b82c;
          }
          iVar11 = iVar9 + 4;
          *(int *)((long)param_1 + 0x14) = iVar16 + 3;
          *(int *)(param_1 + 3) = iVar11;
          if (((iVar16 < 0xfe) && (iVar9 != 0x1fffd)) && (*(char *)(lVar15 + uVar17) == 'n')) {
            uVar17 = (ulong)(iVar18 + 2U);
            *(uint *)((long)param_1 + 0x1c) = iVar18 + 2U;
          }
          *(int *)((long)param_1 + 0x14) = iVar10;
          if (9 < *(byte *)(lVar15 + (int)uVar17) - 0x30) goto LAB_0056b82c;
          pbVar12 = (byte *)((int)uVar17 + lVar15);
          do {
            pbVar12 = pbVar12 + 1;
            iVar16 = (int)uVar17;
            uVar2 = iVar16 + 1;
            uVar17 = (ulong)uVar2;
          } while (*pbVar12 - 0x30 < 10);
          iVar11 = iVar9 + 5;
          *(int *)((long)param_1 + 0x14) = iVar10;
          *(int *)(param_1 + 3) = iVar11;
          *(uint *)((long)param_1 + 0x1c) = uVar2;
          if ((0x1fffb < iVar9) || (*(char *)(lVar15 + (int)uVar2) != '_')) goto LAB_0056b82c;
          *(int *)((long)param_1 + 0x1c) = iVar16 + 2;
          *(int *)((long)param_1 + 0x14) = iVar8;
          plVar6 = param_1;
          FUN_0056afc4();
          if (((ulong)plVar6 & 1) == 0) {
            iVar8 = *(int *)((long)param_1 + 0x14);
            iVar11 = (int)param_1[3];
            goto LAB_0056b830;
          }
LAB_0056ba48:
          iVar8 = *(int *)((long)param_1 + 0x14);
          goto LAB_0056ba4c;
        }
LAB_0056b82c:
        *(int *)((long)param_1 + 0x14) = iVar8;
LAB_0056b830:
        *(undefined8 *)((long)param_1 + 0x24) = uVar22;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar4;
        iVar10 = iVar11 + 1;
        *(int *)((long)param_1 + 0x14) = iVar8 + 1;
        *(int *)(param_1 + 3) = iVar10;
        if (((iVar8 < 0x100) && (iVar11 < 0x20000)) &&
           (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'A')) {
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          *(int *)((long)param_1 + 0x14) = iVar8;
          FUN_0056c000(param_1);
          iVar8 = *(int *)((long)param_1 + 0x14);
          lVar15 = param_1[3];
          iVar10 = (int)lVar15 + 1;
          *(int *)((long)param_1 + 0x14) = iVar8 + 1;
          *(int *)(param_1 + 3) = iVar10;
          if (((0xff < iVar8) || (0x1ffff < (int)lVar15)) ||
             (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != '_')) goto LAB_0056b8d0;
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          *(int *)((long)param_1 + 0x14) = iVar8;
          plVar6 = param_1;
          FUN_0056afc4();
          if (((ulong)plVar6 & 1) != 0) goto LAB_0056ba48;
          iVar8 = *(int *)((long)param_1 + 0x14);
          iVar10 = (int)param_1[3];
        }
        else {
LAB_0056b8d0:
          *(int *)((long)param_1 + 0x14) = iVar8;
        }
        *(undefined8 *)((long)param_1 + 0x24) = uVar22;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar4;
        iVar16 = iVar8 + -1;
      }
      *(int *)((long)param_1 + 0x14) = iVar8;
      *(int *)(param_1 + 3) = iVar10 + 1;
      if ((iVar16 < 0x100) && (iVar10 < 0x20000)) {
        uVar22 = *(undefined8 *)((long)param_1 + 0x24);
        uVar4 = *(undefined8 *)((long)param_1 + 0x1c);
        *(int *)((long)param_1 + 0x14) = iVar16 + 2;
        *(int *)(param_1 + 3) = iVar10 + 2;
        if ((iVar16 < 0xff) &&
           ((iVar10 < 0x1ffff && (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'M')
            ))) {
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          *(int *)((long)param_1 + 0x14) = iVar8;
          plVar6 = param_1;
          FUN_0056afc4();
          if (((ulong)plVar6 & 1) == 0) {
            iVar8 = *(int *)((long)param_1 + 0x14);
          }
          else {
            plVar6 = param_1;
            FUN_0056afc4();
            iVar8 = *(int *)((long)param_1 + 0x14);
            if ((int)plVar6 != 0) goto LAB_0056ba4c;
          }
        }
        else {
          *(int *)((long)param_1 + 0x14) = iVar8;
        }
        *(undefined8 *)((long)param_1 + 0x24) = uVar22;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar4;
        iVar16 = iVar8 + -1;
      }
      *(int *)((long)param_1 + 0x14) = iVar16;
      plVar6 = param_1;
      FUN_0056bd34();
      if (((((ulong)plVar6 & 1) == 0) &&
          (plVar6 = param_1, FUN_00569cbc(param_1,0), ((ulong)plVar6 & 1) == 0)) &&
         ((plVar6 = param_1, FUN_0056be78(), (int)plVar6 == 0 ||
          (plVar6 = param_1, FUN_0056a014(), ((ulong)plVar6 & 1) == 0)))) {
        *(undefined8 *)((long)param_1 + 0x24) = uVar21;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar19;
        plVar6 = param_1;
        FUN_0056a6e4();
        if (((ulong)plVar6 & 1) != 0) goto LAB_0056b9bc;
        plVar6 = param_1;
        FUN_005691cc();
        if (((int)plVar6 != 0) && (plVar6 = param_1, FUN_0056adfc(), (int)plVar6 != 0)) {
          FUN_0056a2d0(param_1,0x5f);
          goto joined_r0x0056b1a4;
        }
        goto LAB_0056b1a8;
      }
      goto LAB_0056b9bc;
    }
    iVar16 = iVar10 + 2;
    if (iVar10 < 0xff) {
      pcVar14 = "v";
      ppuVar13 = &PTR_s_w_00a01608;
LAB_0056b330:
      if (pcVar14[1] == '\0') {
        cVar1 = *pcVar14;
        *(int *)((long)param_1 + 0x14) = iVar16;
        *(int *)(param_1 + 3) = iVar9 + 1;
        if ((iVar9 < 0x20000) &&
           (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == cVar1)) {
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          *(int *)((long)param_1 + 0x14) = iVar8;
          if ((int)param_1[5] < 0) {
            pcVar14 = ppuVar13[-2];
            if (*pcVar14 == '\0') {
LAB_0056ba38:
              pcVar7 = (char *)0x0;
            }
            else {
LAB_0056b3c8:
              pcVar7 = pcVar14 + 1;
              _strlen(pcVar7);
              pcVar7 = pcVar7 + 1;
            }
            FUN_0056bef8(param_1,pcVar14,pcVar7);
          }
          goto LAB_0056ba48;
        }
      }
      else {
        if (pcVar14[2] != '\0') goto LAB_0056b328;
        *(int *)((long)param_1 + 0x14) = iVar16;
        *(int *)(param_1 + 3) = iVar9 + 1;
        if (iVar9 < 0x20000) {
          pcVar7 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
          if ((*pcVar7 != *pcVar14) || (pcVar7[1] != pcVar14[1])) goto LAB_0056b320;
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
          *(int *)((long)param_1 + 0x14) = iVar8;
          if ((int)param_1[5] < 0) {
            pcVar14 = ppuVar13[-2];
            if (*pcVar14 != '\0') goto LAB_0056b3c8;
            goto LAB_0056ba38;
          }
          goto LAB_0056ba48;
        }
      }
LAB_0056b320:
      iVar9 = iVar9 + 1;
      *(int *)((long)param_1 + 0x14) = iVar8;
LAB_0056b328:
      pcVar14 = *ppuVar13;
      ppuVar13 = ppuVar13 + 3;
      if (pcVar14 == (char *)0x0) goto LAB_0056b3d8;
      goto LAB_0056b330;
    }
    pcVar14 = "v";
    ppuVar13 = &PTR_s_w_00a01608;
    do {
      if ((pcVar14[1] == '\0') || (pcVar14[2] == '\0')) {
        iVar9 = iVar9 + 1;
        *(int *)((long)param_1 + 0x14) = iVar8;
        *(int *)(param_1 + 3) = iVar9;
      }
      pcVar14 = *ppuVar13;
      ppuVar13 = ppuVar13 + 3;
    } while (pcVar14 != (char *)0x0);
LAB_0056b3d8:
    *(int *)((long)param_1 + 0x14) = iVar16;
    *(int *)(param_1 + 3) = iVar9 + 1;
    if (((0xfe < iVar10) || (0x1ffff < iVar9)) ||
       (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'u')) {
      *(int *)((long)param_1 + 0x14) = iVar8;
      iVar9 = iVar9 + 1;
LAB_0056b42c:
      *(undefined8 *)((long)param_1 + 0x24) = uVar21;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar19;
      goto LAB_0056b438;
    }
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
    *(int *)((long)param_1 + 0x14) = iVar8;
    plVar6 = param_1;
    FUN_0056badc();
    iVar8 = *(int *)((long)param_1 + 0x14);
    if (((ulong)plVar6 & 1) == 0) {
      iVar9 = (int)param_1[3];
      goto LAB_0056b42c;
    }
LAB_0056ba4c:
    *(int *)((long)param_1 + 0x14) = iVar8 + -1;
    uVar4 = 1;
  }
  iVar9 = *(int *)((long)param_1 + 0x14) + -1;
LAB_0056b9c8:
  *(int *)((long)param_1 + 0x14) = iVar9;
  return uVar4;
}



/* Entry: 0056badc; end: 0056bccf;  */

undefined8 FUN_0056badc(long *param_1)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  char *pcVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  long lVar16;
  undefined8 uVar17;
  
  uVar5 = 0;
  iVar7 = *(int *)((long)param_1 + 0x14);
  iVar1 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar1 + 1;
  if ((0xff < iVar7) || (0x1ffff < iVar1)) goto LAB_0056bbfc;
  uVar17 = *(undefined8 *)((long)param_1 + 0x1c);
  *(int *)(param_1 + 3) = iVar1 + 2;
  if (iVar7 < 0xff && iVar1 < 0x1ffff) {
    bVar3 = false;
    *(int *)((long)param_1 + 0x14) = iVar7 + 3;
    *(int *)(param_1 + 3) = iVar1 + 3;
    lVar6 = *param_1;
    iVar10 = *(int *)((long)param_1 + 0x1c);
    if ((iVar7 < 0xfe) && (iVar1 < 0x1fffe)) {
      if (*(char *)(lVar6 + iVar10) == 'n') {
        iVar10 = iVar10 + 1;
        *(int *)((long)param_1 + 0x1c) = iVar10;
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
    }
    *(int *)((long)param_1 + 0x14) = iVar7 + 2;
    bVar2 = *(byte *)(lVar6 + iVar10);
    uVar14 = (uint)bVar2;
    if (bVar2 - 0x30 < 10) {
      uVar13 = 0;
      pbVar15 = (byte *)(iVar10 + lVar6);
      do {
        pbVar15 = pbVar15 + 1;
        uVar13 = (uVar14 + uVar13 * 10) - 0x30;
        uVar14 = (uint)*pbVar15;
        iVar10 = iVar10 + 1;
      } while (uVar14 - 0x30 < 10);
      uVar14 = -uVar13;
      if (!bVar3) {
        uVar14 = uVar13;
      }
      *(int *)((long)param_1 + 0x14) = iVar7 + 2;
      *(int *)(param_1 + 3) = iVar1 + 4;
      *(int *)((long)param_1 + 0x1c) = iVar10;
      if (iVar1 < 0x1fffd) {
        lVar16 = (long)(int)uVar14;
        pcVar4 = (char *)(lVar6 + iVar10);
        lVar8 = lVar16;
        pcVar11 = pcVar4;
        if (uVar14 == 0) {
LAB_0056bc90:
          FUN_0056bef8(param_1,pcVar4,lVar16);
        }
        else {
          do {
            if (*pcVar11 == '\0') goto LAB_0056bbe4;
            lVar8 = lVar8 + -1;
            pcVar11 = pcVar11 + 1;
          } while (lVar8 != 0);
          if (uVar14 < 0xc) goto LAB_0056bc90;
          cVar9 = *pcVar4;
          if (cVar9 == '\0') {
            lVar8 = 0;
          }
          else {
            lVar12 = 0;
            do {
              lVar8 = lVar12;
              if (cVar9 != "_GLOBAL__N_"[lVar12]) break;
              lVar8 = lVar12 + 1;
              cVar9 = *(char *)(lVar6 + iVar10 + 1 + lVar12);
              lVar12 = lVar8;
            } while (cVar9 != '\0');
          }
          if ("_GLOBAL__N_"[lVar8] != '\0') goto LAB_0056bc90;
          if ((int)param_1[5] < 0) {
            pcVar4 = "(anonymous namespace)";
            lVar16 = 0x15;
            goto LAB_0056bc90;
          }
        }
        *(uint *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + uVar14;
        iVar7 = *(int *)((long)param_1 + 0x14) + -2;
        uVar5 = 1;
        goto LAB_0056bbfc;
      }
    }
  }
LAB_0056bbe4:
  uVar5 = 0;
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)((long)param_1 + 0x24);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar17;
LAB_0056bbfc:
  *(int *)((long)param_1 + 0x14) = iVar7;
  return uVar5;
}



/* Entry: 0056bcd0; end: 0056bd33;  */

void FUN_0056bcd0(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar2 + 1;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if ((iVar2 < 0x100) && (iVar1 < 0x20000)) {
    FUN_00569838(param_1);
    iVar2 = *(int *)(param_1 + 0x14) + -1;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 0056bd34; end: 0056be77;  */

undefined8 FUN_0056bd34(long *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = 0;
  iVar7 = *(int *)((long)param_1 + 0x14);
  iVar2 = (int)param_1[3];
  iVar6 = iVar7 + 1;
  *(int *)((long)param_1 + 0x14) = iVar6;
  *(int *)(param_1 + 3) = iVar2 + 1;
  if ((0xff < iVar7) || (0x1ffff < iVar2)) goto LAB_0056be50;
  uVar9 = *(undefined8 *)((long)param_1 + 0x24);
  uVar8 = *(undefined8 *)((long)param_1 + 0x1c);
  *(int *)((long)param_1 + 0x14) = iVar7 + 2;
  *(int *)(param_1 + 3) = iVar2 + 2;
  if (iVar7 < 0xff && iVar2 < 0x1ffff) {
    iVar3 = *(int *)((long)param_1 + 0x1c);
    if (*(char *)(*param_1 + (long)iVar3) != 'D') goto LAB_0056be3c;
    lVar1 = (long)iVar3 + 1;
    *(int *)((long)param_1 + 0x14) = iVar7 + 2;
    *(int *)(param_1 + 3) = iVar2 + 3;
    *(int *)((long)param_1 + 0x1c) = (int)lVar1;
    if ((0x1fffd < iVar2) || ((*(byte *)(*param_1 + lVar1) | 0x20) != 0x74)) goto LAB_0056be3c;
    *(int *)((long)param_1 + 0x1c) = iVar3 + 2;
    *(int *)((long)param_1 + 0x14) = iVar6;
    plVar4 = param_1;
    FUN_0056c000();
    iVar6 = *(int *)((long)param_1 + 0x14);
    if ((int)plVar4 == 0) goto LAB_0056be40;
    lVar1 = param_1[3];
    *(int *)((long)param_1 + 0x14) = iVar6 + 1;
    *(int *)(param_1 + 3) = (int)lVar1 + 1;
    if (((0xff < iVar6) || (0x1ffff < (int)lVar1)) ||
       (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'E')) goto LAB_0056be3c;
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
    *(int *)((long)param_1 + 0x14) = iVar6;
    uVar5 = 1;
  }
  else {
LAB_0056be3c:
    *(int *)((long)param_1 + 0x14) = iVar6;
LAB_0056be40:
    uVar5 = 0;
    *(undefined8 *)((long)param_1 + 0x24) = uVar9;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar8;
  }
  iVar7 = iVar6 + -1;
LAB_0056be50:
  *(int *)((long)param_1 + 0x14) = iVar7;
  return uVar5;
}



/* Entry: 0056be78; end: 0056bef7;  */

ulong FUN_0056be78(ulong param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if ((iVar1 < 0x100) && (iVar2 < 0x20000)) {
    uVar3 = param_1;
    FUN_0056a6e4();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_1;
      FUN_00569cbc(param_1,0);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      return uVar3;
    }
    uVar3 = 1;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return uVar3;
}



/* Entry: 0056bef8; end: 0056bfff;  */

void FUN_0056bef8(long param_1,byte *param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  
  if ((param_3 != 0) && (*(int *)(param_1 + 0x28) < 0)) {
    if (*param_2 == 0x3c) {
      uVar3 = *(uint *)(param_1 + 0x20);
      if (((0 < (int)uVar3) && (uVar4 = *(uint *)(param_1 + 0x10), (int)uVar3 < (int)uVar4)) &&
         (puVar2 = (undefined1 *)(*(long *)(param_1 + 8) + (ulong)uVar3), puVar2[-1] == '<')) {
        if (uVar3 + 1 < uVar4) {
          *(uint *)(param_1 + 0x20) = uVar3 + 1;
          *puVar2 = 0x20;
          if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x10)) {
            *(undefined1 *)(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x20)) = 0;
          }
        }
        else {
          *(uint *)(param_1 + 0x20) = uVar4 + 1;
        }
      }
    }
    if ((*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x10)) &&
       ((*param_2 == 0x5f || ((*param_2 & 0xffffffdf) - 0x41 < 0x1a)))) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20);
      *(short *)(param_1 + 0x28) = (short)param_3;
    }
    do {
      iVar6 = *(int *)(param_1 + 0x20);
      iVar1 = iVar6 + 1;
      if (*(int *)(param_1 + 0x10) <= iVar1) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x10) + 1;
        return;
      }
      bVar5 = *param_2;
      *(int *)(param_1 + 0x20) = iVar1;
      *(byte *)(*(long *)(param_1 + 8) + (long)iVar6) = bVar5;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
    if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x10)) {
      *(undefined1 *)(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x20)) = 0;
      return;
    }
  }
  return;
}



/* Entry: 0056c000; end: 0056cb83;  */

undefined8 FUN_0056c000(long *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = 0;
  iVar2 = *(int *)((long)param_1 + 0x14);
  lVar11 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar2 + 1;
  *(int *)(param_1 + 3) = (int)lVar11 + 1;
  if ((0xff < iVar2) || (0x1ffff < (int)lVar11)) goto LAB_0056c054;
  plVar4 = param_1;
  FUN_0056a6e4();
  if ((((ulong)plVar4 & 1) == 0) && (plVar4 = param_1, FUN_0056cb84(), ((ulong)plVar4 & 1) == 0)) {
    uVar15 = *(undefined8 *)((long)param_1 + 0x24);
    uVar14 = *(undefined8 *)((long)param_1 + 0x1c);
    iVar6 = *(int *)((long)param_1 + 0x14);
    lVar11 = param_1[3];
    iVar7 = iVar6 + 1;
    iVar2 = (int)lVar11 + 1;
    *(int *)((long)param_1 + 0x14) = iVar7;
    *(int *)(param_1 + 3) = iVar2;
    if ((0xff < iVar6) || (0x1ffff < (int)lVar11)) {
LAB_0056c114:
      *(int *)((long)param_1 + 0x14) = iVar6;
      *(undefined8 *)((long)param_1 + 0x24) = uVar15;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar14;
      iVar9 = iVar2 + 1;
      *(int *)((long)param_1 + 0x14) = iVar7;
      *(int *)(param_1 + 3) = iVar9;
      if (iVar6 < 0x100) {
LAB_0056c130:
        if (0x1ffff < iVar2) goto LAB_0056c1e4;
        pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
        if ((*pcVar1 != 'c') || (pcVar1[1] != 'p')) goto LAB_0056c1e4;
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
        *(int *)((long)param_1 + 0x14) = iVar6;
        plVar4 = param_1;
        FUN_0056badc();
        if (((ulong)plVar4 & 1) != 0) {
          FUN_0056a014(param_1);
          do {
            plVar4 = param_1;
            FUN_0056c000();
          } while (((ulong)plVar4 & 1) != 0);
          iVar6 = *(int *)((long)param_1 + 0x14);
          lVar11 = param_1[3];
          iVar7 = iVar6 + 1;
          iVar9 = (int)lVar11 + 1;
          *(int *)((long)param_1 + 0x14) = iVar7;
          *(int *)(param_1 + 3) = iVar9;
          if (((iVar6 < 0x100) && ((int)lVar11 < 0x20000)) &&
             (iVar8 = *(int *)((long)param_1 + 0x1c), *(char *)(*param_1 + (long)iVar8) == 'E'))
          goto LAB_0056c304;
          goto LAB_0056c1e4;
        }
        iVar6 = *(int *)((long)param_1 + 0x14);
        iVar9 = (int)param_1[3];
        iVar7 = iVar6 + 1;
        *(undefined8 *)((long)param_1 + 0x24) = uVar15;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar14;
        iVar2 = iVar9 + 1;
        *(int *)((long)param_1 + 0x14) = iVar7;
        *(int *)(param_1 + 3) = iVar2;
      }
      else {
LAB_0056c1e4:
        *(int *)((long)param_1 + 0x14) = iVar6;
        *(undefined8 *)((long)param_1 + 0x24) = uVar15;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar14;
        iVar2 = iVar9 + 1;
        *(int *)((long)param_1 + 0x14) = iVar7;
        *(int *)(param_1 + 3) = iVar2;
      }
      if ((iVar6 < 0x100) && (iVar9 < 0x20000)) {
        pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
        if ((*pcVar1 == 'f') && (pcVar1[1] == 'p')) {
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
          *(int *)((long)param_1 + 0x14) = iVar6;
          func_0x0056a330(param_1);
          iVar6 = *(int *)((long)param_1 + 0x14);
          iVar2 = (int)param_1[3];
          iVar7 = iVar6 + 1;
          iVar9 = iVar2 + 1;
          *(int *)(param_1 + 3) = iVar9;
          if ((iVar6 < 0x100) && (iVar2 < 0x20000)) {
            iVar9 = iVar2 + 2;
            *(int *)((long)param_1 + 0x14) = iVar6 + 2;
            *(int *)(param_1 + 3) = iVar9;
            lVar11 = *param_1;
            iVar8 = *(int *)((long)param_1 + 0x1c);
            if ((iVar6 < 0xff) && ((iVar2 < 0x1ffff && (*(char *)(lVar11 + iVar8) == 'n')))) {
              iVar8 = iVar8 + 1;
              *(int *)((long)param_1 + 0x1c) = iVar8;
            }
            *(int *)((long)param_1 + 0x14) = iVar7;
            if (*(byte *)(lVar11 + iVar8) - 0x30 < 10) {
              pbVar12 = (byte *)(iVar8 + lVar11);
              do {
                pbVar12 = pbVar12 + 1;
                iVar8 = iVar8 + 1;
              } while (*pbVar12 - 0x30 < 10);
              *(int *)((long)param_1 + 0x1c) = iVar8;
            }
          }
          iVar2 = iVar9 + 1;
          *(int *)((long)param_1 + 0x14) = iVar7;
          *(int *)(param_1 + 3) = iVar2;
          if (((iVar6 < 0x100) && (iVar9 < 0x20000)) &&
             (iVar8 = *(int *)((long)param_1 + 0x1c), *(char *)(*param_1 + (long)iVar8) == '_'))
          goto LAB_0056c304;
        }
      }
      *(undefined8 *)((long)param_1 + 0x24) = uVar15;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar14;
      iVar9 = iVar2 + 1;
      *(int *)((long)param_1 + 0x14) = iVar7;
      *(int *)(param_1 + 3) = iVar9;
      if ((iVar6 < 0x100) && (iVar2 < 0x20000)) {
        lVar11 = *param_1;
        iVar8 = *(int *)((long)param_1 + 0x1c);
        pcVar1 = (char *)(lVar11 + iVar8);
        if ((*pcVar1 != 'f') || (pcVar1[1] != 'L')) goto LAB_0056c460;
        uVar13 = (long)iVar8 + 2;
        *(int *)((long)param_1 + 0x14) = iVar6;
        *(int *)(param_1 + 3) = iVar2 + 2;
        *(int *)((long)param_1 + 0x1c) = (int)uVar13;
        if (0x1fffe < iVar2) {
          iVar9 = 0x20002;
          *(int *)((long)param_1 + 0x14) = iVar7;
          *(undefined4 *)(param_1 + 3) = 0x20002;
          goto LAB_0056c460;
        }
        *(int *)((long)param_1 + 0x14) = iVar6 + 2;
        *(int *)(param_1 + 3) = iVar2 + 3;
        if (((iVar6 < 0xff) && (iVar2 != 0x1fffe)) && (*(char *)(lVar11 + uVar13) == 'n')) {
          uVar13 = (ulong)(iVar8 + 3U);
          *(uint *)((long)param_1 + 0x1c) = iVar8 + 3U;
        }
        *(int *)((long)param_1 + 0x14) = iVar7;
        uVar10 = (uint)uVar13;
        if (*(byte *)(lVar11 + (int)uVar10) - 0x30 < 10) {
          pbVar12 = (byte *)((int)uVar10 + lVar11);
          do {
            pbVar12 = pbVar12 + 1;
            uVar10 = (int)uVar13 + 1;
            uVar13 = (ulong)uVar10;
          } while (*pbVar12 - 0x30 < 10);
          *(uint *)((long)param_1 + 0x1c) = uVar10;
        }
        iVar9 = iVar2 + 4;
        *(int *)((long)param_1 + 0x14) = iVar7;
        *(int *)(param_1 + 3) = iVar9;
        if ((0x1fffc < iVar2) || (*(char *)(lVar11 + (int)uVar10) != 'p')) goto LAB_0056c460;
        *(uint *)((long)param_1 + 0x1c) = uVar10 + 1;
        *(int *)((long)param_1 + 0x14) = iVar6;
        func_0x0056a330(param_1);
        FUN_0056adfc(param_1);
        plVar4 = param_1;
        func_0x0056a2d0(param_1,0x5f);
        if (((ulong)plVar4 & 1) != 0) goto LAB_0056c050;
        iVar6 = *(int *)((long)param_1 + 0x14);
        iVar9 = (int)param_1[3];
        iVar7 = iVar6 + 1;
      }
      else {
LAB_0056c460:
        *(int *)((long)param_1 + 0x14) = iVar6;
      }
      *(undefined8 *)((long)param_1 + 0x24) = uVar15;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar14;
      *(int *)((long)param_1 + 0x14) = iVar7;
      *(int *)(param_1 + 3) = iVar9 + 1;
      plVar4 = param_1;
      if ((iVar6 < 0x100) && (iVar9 < 0x20000)) {
        pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
        if ((*pcVar1 != 'c') || (pcVar1[1] != 'v')) goto LAB_0056c508;
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
        *(int *)((long)param_1 + 0x14) = iVar6;
        plVar5 = param_1;
        FUN_0056afc4();
        if ((int)plVar5 == 0) goto LAB_0056c56c;
        uStack_28 = *(undefined8 *)((long)param_1 + 0x24);
        uStack_30 = *(undefined8 *)((long)param_1 + 0x1c);
        plVar5 = param_1;
        func_0x0056a2d0(param_1,0x5f);
        if ((int)plVar5 != 0) {
          do {
            plVar5 = param_1;
            FUN_0056c000();
          } while (((ulong)plVar5 & 1) != 0);
          plVar5 = param_1;
          func_0x0056a2d0(param_1,0x45);
          if (((ulong)plVar5 & 1) != 0) goto LAB_0056c050;
        }
        *(undefined8 *)((long)param_1 + 0x24) = uStack_28;
        *(undefined8 *)((long)param_1 + 0x1c) = uStack_30;
        FUN_0056c000();
LAB_0056c568:
        if (((ulong)plVar4 & 1) != 0) goto LAB_0056c050;
      }
      else {
LAB_0056c508:
        *(int *)((long)param_1 + 0x14) = iVar6;
        uStack_30 = CONCAT44(uStack_30._4_4_,0xffffffff);
        plVar5 = param_1;
        FUN_0056ce10(param_1,&uStack_30);
        iVar2 = 0;
        if (0 < (int)(uint)uStack_30) {
          iVar2 = (int)plVar5;
        }
        if (iVar2 == 1) {
          if ((uint)uStack_30 < 3) {
            if ((uint)uStack_30 == 2) goto LAB_0056c554;
LAB_0056c560:
            FUN_0056c000();
            goto LAB_0056c568;
          }
          plVar5 = param_1;
          FUN_0056c000();
          if (((ulong)plVar5 & 1) != 0) {
LAB_0056c554:
            plVar5 = param_1;
            FUN_0056c000();
            if ((int)plVar5 != 0) goto LAB_0056c560;
          }
        }
      }
LAB_0056c56c:
      *(undefined8 *)((long)param_1 + 0x24) = uVar15;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar14;
      iVar6 = *(int *)((long)param_1 + 0x14);
      lVar11 = param_1[3];
      iVar7 = iVar6 + 1;
      iVar2 = (int)lVar11 + 1;
      *(int *)((long)param_1 + 0x14) = iVar7;
      *(int *)(param_1 + 3) = iVar2;
      if ((iVar6 < 0x100) && ((int)lVar11 < 0x20000)) {
        pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
        if ((*pcVar1 != 's') || (pcVar1[1] != 't')) goto LAB_0056c5dc;
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
        *(int *)((long)param_1 + 0x14) = iVar6;
        plVar4 = param_1;
        FUN_0056afc4();
        if (((ulong)plVar4 & 1) != 0) goto LAB_0056c050;
        iVar6 = *(int *)((long)param_1 + 0x14);
        iVar2 = (int)param_1[3];
        iVar7 = iVar6 + 1;
      }
      else {
LAB_0056c5dc:
        *(int *)((long)param_1 + 0x14) = iVar6;
      }
      *(undefined8 *)((long)param_1 + 0x24) = uVar15;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar14;
      *(int *)((long)param_1 + 0x14) = iVar7;
      *(int *)(param_1 + 3) = iVar2 + 1;
      if ((iVar6 < 0x100) && (iVar2 < 0x20000)) {
        iVar7 = *(int *)((long)param_1 + 0x1c);
        if ((*(char *)(*param_1 + (long)iVar7) != 'd') ||
           (((char *)(*param_1 + (long)iVar7))[1] != 't')) goto LAB_0056c624;
LAB_0056c668:
        *(int *)((long)param_1 + 0x1c) = iVar7 + 2;
        *(int *)((long)param_1 + 0x14) = iVar6;
        plVar4 = param_1;
        FUN_0056c000();
        if (((int)plVar4 != 0) && (plVar4 = param_1, FUN_0056afc4(), ((ulong)plVar4 & 1) != 0))
        goto LAB_0056c050;
      }
      else {
LAB_0056c624:
        *(int *)((long)param_1 + 0x14) = iVar6 + 1;
        *(int *)(param_1 + 3) = iVar2 + 2;
        if ((iVar6 < 0x100) && (iVar2 < 0x1ffff)) {
          iVar7 = *(int *)((long)param_1 + 0x1c);
          if ((*(char *)(*param_1 + (long)iVar7) == 'p') &&
             (((char *)(*param_1 + (long)iVar7))[1] == 't')) goto LAB_0056c668;
        }
        *(int *)((long)param_1 + 0x14) = iVar6;
      }
      *(undefined8 *)((long)param_1 + 0x24) = uVar15;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar14;
      iVar2 = *(int *)((long)param_1 + 0x14);
      lVar11 = param_1[3];
      *(int *)((long)param_1 + 0x14) = iVar2 + 1;
      *(int *)(param_1 + 3) = (int)lVar11 + 1;
      if ((iVar2 < 0x100) && ((int)lVar11 < 0x20000)) {
        pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
        if ((*pcVar1 != 'd') || (pcVar1[1] != 's')) goto LAB_0056c708;
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
        *(int *)((long)param_1 + 0x14) = iVar2;
        plVar4 = param_1;
        FUN_0056c000();
        if (((int)plVar4 != 0) && (plVar4 = param_1, FUN_0056c000(), ((ulong)plVar4 & 1) != 0))
        goto LAB_0056c050;
      }
      else {
LAB_0056c708:
        *(int *)((long)param_1 + 0x14) = iVar2;
      }
      *(undefined8 *)((long)param_1 + 0x24) = uVar15;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar14;
      iVar6 = *(int *)((long)param_1 + 0x14);
      lVar11 = param_1[3];
      iVar7 = iVar6 + 1;
      iVar2 = (int)lVar11 + 1;
      *(int *)((long)param_1 + 0x14) = iVar7;
      *(int *)(param_1 + 3) = iVar2;
      if ((iVar6 < 0x100) && ((int)lVar11 < 0x20000)) {
        pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
        if ((*pcVar1 != 's') || (pcVar1[1] != 'p')) goto LAB_0056c77c;
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
        *(int *)((long)param_1 + 0x14) = iVar6;
        plVar4 = param_1;
        FUN_0056c000();
        if (((ulong)plVar4 & 1) != 0) goto LAB_0056c050;
        iVar6 = *(int *)((long)param_1 + 0x14);
        iVar2 = (int)param_1[3];
        iVar7 = iVar6 + 1;
      }
      else {
LAB_0056c77c:
        *(int *)((long)param_1 + 0x14) = iVar6;
      }
      uVar3 = 0;
      *(undefined8 *)((long)param_1 + 0x24) = uVar15;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar14;
      *(int *)((long)param_1 + 0x14) = iVar7;
      *(int *)(param_1 + 3) = iVar2 + 1;
      if ((iVar6 < 0x100) && (iVar2 < 0x20000)) {
        *(int *)((long)param_1 + 0x14) = iVar6 + 2;
        *(int *)(param_1 + 3) = iVar2 + 2;
        if ((iVar6 < 0xff) && (iVar2 < 0x1ffff)) {
          pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
          if ((*pcVar1 == 'g') && (pcVar1[1] == 's')) {
            *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
          }
        }
        *(int *)((long)param_1 + 0x14) = iVar7;
        plVar4 = param_1;
        uStack_30 = uVar14;
        uStack_28 = uVar15;
        FUN_0056d2a0();
        if (((ulong)plVar4 & 1) == 0) {
          *(undefined8 *)((long)param_1 + 0x24) = uVar15;
          *(undefined8 *)((long)param_1 + 0x1c) = uVar14;
          iVar2 = *(int *)((long)param_1 + 0x14);
          lVar11 = param_1[3];
          *(int *)((long)param_1 + 0x14) = iVar2 + 1;
          *(int *)(param_1 + 3) = (int)lVar11 + 1;
          if ((iVar2 < 0x100) && ((int)lVar11 < 0x20000)) {
            pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
            if ((*pcVar1 != 's') || (pcVar1[1] != 'r')) goto LAB_0056c880;
            *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
            *(int *)((long)param_1 + 0x14) = iVar2;
            plVar4 = param_1;
            FUN_0056a6e4();
            if ((int)plVar4 == 0) {
              plVar4 = param_1;
              FUN_0056bd34();
              if ((((ulong)plVar4 & 1) != 0) ||
                 (plVar4 = param_1, FUN_00569cbc(param_1,0), (int)plVar4 != 0)) goto LAB_0056ca08;
            }
            else {
              FUN_0056a014(param_1);
LAB_0056ca08:
              plVar4 = param_1;
              FUN_0056d2a0();
              if (((ulong)plVar4 & 1) != 0) goto LAB_0056c808;
            }
          }
          else {
LAB_0056c880:
            *(int *)((long)param_1 + 0x14) = iVar2;
          }
          *(undefined8 *)((long)param_1 + 0x24) = uVar15;
          *(undefined8 *)((long)param_1 + 0x1c) = uVar14;
          iVar2 = *(int *)((long)param_1 + 0x14);
          iVar7 = (int)param_1[3];
          *(int *)((long)param_1 + 0x14) = iVar2 + 1;
          *(int *)(param_1 + 3) = iVar7 + 1;
          if ((iVar2 < 0x100) && (iVar7 < 0x20000)) {
            iVar6 = *(int *)((long)param_1 + 0x1c);
            pcVar1 = (char *)(*param_1 + (long)iVar6);
            if ((*pcVar1 != 's') || (pcVar1[1] != 'r')) goto LAB_0056c91c;
            lVar11 = (long)iVar6 + 2;
            *(int *)((long)param_1 + 0x14) = iVar2 + 1;
            *(int *)(param_1 + 3) = iVar7 + 2;
            *(int *)((long)param_1 + 0x1c) = (int)lVar11;
            if ((0x1fffe < iVar7) || (*(char *)(*param_1 + lVar11) != 'N')) goto LAB_0056c91c;
            *(int *)((long)param_1 + 0x1c) = iVar6 + 3;
            *(int *)((long)param_1 + 0x14) = iVar2;
            plVar4 = param_1;
            FUN_0056a6e4();
            if ((int)plVar4 == 0) {
              plVar4 = param_1;
              FUN_0056bd34();
              if ((((ulong)plVar4 & 1) != 0) ||
                 (plVar4 = param_1, FUN_00569cbc(param_1,0), (int)plVar4 != 0)) goto LAB_0056caa4;
            }
            else {
              FUN_0056a014(param_1);
LAB_0056caa4:
              plVar4 = param_1;
              FUN_0056badc();
              if ((int)plVar4 != 0) {
                FUN_0056a014(param_1);
                while (plVar4 = param_1, FUN_0056badc(), (int)plVar4 != 0) {
                  FUN_0056a014(param_1);
                }
                plVar4 = param_1;
                func_0x0056a2d0(param_1,0x45);
                if (((int)plVar4 != 0) &&
                   (plVar4 = param_1, FUN_0056d2a0(), ((ulong)plVar4 & 1) != 0)) goto LAB_0056c808;
              }
            }
          }
          else {
LAB_0056c91c:
            *(int *)((long)param_1 + 0x14) = iVar2;
          }
          *(undefined8 *)((long)param_1 + 0x24) = uVar15;
          *(undefined8 *)((long)param_1 + 0x1c) = uVar14;
          iVar2 = *(int *)((long)param_1 + 0x14);
          iVar7 = (int)param_1[3];
          *(int *)((long)param_1 + 0x14) = iVar2 + 1;
          *(int *)(param_1 + 3) = iVar7 + 1;
          if ((iVar2 < 0x100) && (iVar7 < 0x20000)) {
            pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
            if ((*pcVar1 == 'g') && (pcVar1[1] == 's')) {
              *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
            }
          }
          *(int *)((long)param_1 + 0x14) = iVar2 + 1;
          *(int *)(param_1 + 3) = iVar7 + 2;
          if ((iVar2 < 0x100) && (iVar7 < 0x1ffff)) {
            pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
            if ((*pcVar1 != 's') || (pcVar1[1] != 'r')) goto LAB_0056ca68;
            *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
            *(int *)((long)param_1 + 0x14) = iVar2;
            plVar4 = param_1;
            FUN_0056badc();
            if ((int)plVar4 != 0) {
              FUN_0056a014(param_1);
              while (plVar4 = param_1, FUN_0056badc(), (int)plVar4 != 0) {
                FUN_0056a014(param_1);
              }
              iVar2 = *(int *)((long)param_1 + 0x14);
              lVar11 = param_1[3];
              *(int *)((long)param_1 + 0x14) = iVar2 + 1;
              *(int *)(param_1 + 3) = (int)lVar11 + 1;
              if (((0xff < iVar2) || (0x1ffff < (int)lVar11)) ||
                 (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'E'))
              goto LAB_0056ca68;
              *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
              *(int *)((long)param_1 + 0x14) = iVar2;
              plVar4 = param_1;
              FUN_0056d2a0();
              if (((ulong)plVar4 & 1) != 0) goto LAB_0056c808;
            }
          }
          else {
LAB_0056ca68:
            *(int *)((long)param_1 + 0x14) = iVar2;
          }
          uVar3 = 0;
          *(undefined8 *)((long)param_1 + 0x24) = uStack_28;
          *(undefined8 *)((long)param_1 + 0x1c) = uStack_30;
        }
        else {
LAB_0056c808:
          uVar3 = 1;
        }
        iVar6 = *(int *)((long)param_1 + 0x14) + -1;
      }
      *(int *)((long)param_1 + 0x14) = iVar6;
      goto LAB_0056c054;
    }
    pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
    if ((*pcVar1 != 'c') || (pcVar1[1] != 'l')) goto LAB_0056c114;
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
    *(int *)((long)param_1 + 0x14) = iVar6;
    plVar4 = param_1;
    FUN_0056c000();
    if ((int)plVar4 == 0) {
      iVar6 = *(int *)((long)param_1 + 0x14);
      iVar2 = (int)param_1[3];
      iVar7 = iVar6 + 1;
      *(undefined8 *)((long)param_1 + 0x24) = uVar15;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar14;
      iVar9 = iVar2 + 1;
      *(int *)((long)param_1 + 0x14) = iVar7;
      *(int *)(param_1 + 3) = iVar9;
      if (iVar6 < 0x100) goto LAB_0056c130;
      goto LAB_0056c1e4;
    }
    do {
      plVar4 = param_1;
      FUN_0056c000();
    } while (((ulong)plVar4 & 1) != 0);
    iVar6 = *(int *)((long)param_1 + 0x14);
    lVar11 = param_1[3];
    iVar7 = iVar6 + 1;
    iVar2 = (int)lVar11 + 1;
    *(int *)((long)param_1 + 0x14) = iVar7;
    *(int *)(param_1 + 3) = iVar2;
    if (((0xff < iVar6) || (0x1ffff < (int)lVar11)) ||
       (iVar8 = *(int *)((long)param_1 + 0x1c), *(char *)(*param_1 + (long)iVar8) != 'E'))
    goto LAB_0056c114;
LAB_0056c304:
    *(int *)((long)param_1 + 0x1c) = iVar8 + 1;
    *(int *)((long)param_1 + 0x14) = iVar6;
  }
LAB_0056c050:
  uVar3 = 1;
LAB_0056c054:
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
  return uVar3;
}



/* Entry: 0056cb84; end: 0056ce0f;  */

undefined8 FUN_0056cb84(long *param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = 0;
  iVar8 = *(int *)((long)param_1 + 0x14);
  iVar6 = (int)param_1[3];
  iVar1 = iVar8 + 1;
  *(int *)((long)param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 3) = iVar6 + 1;
  if ((0xff < iVar8) || (0x1ffff < iVar6)) goto LAB_0056cdd0;
  uVar10 = *(undefined8 *)((long)param_1 + 0x24);
  uVar9 = *(undefined8 *)((long)param_1 + 0x1c);
  *(int *)((long)param_1 + 0x14) = iVar8 + 2;
  *(int *)(param_1 + 3) = iVar6 + 2;
  if (iVar8 < 0xff && iVar6 < 0x1ffff) {
    pcVar3 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
    if ((*pcVar3 != 'L') || (pcVar3[1] != 'Z')) goto LAB_0056cc68;
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
    *(int *)((long)param_1 + 0x14) = iVar1;
    plVar5 = param_1;
    FUN_0056923c();
    if ((int)plVar5 != 0) {
      iVar8 = *(int *)((long)param_1 + 0x14);
      iVar6 = (int)param_1[3];
      *(int *)((long)param_1 + 0x14) = iVar8 + 1;
      *(int *)(param_1 + 3) = iVar6 + 1;
      if (iVar8 < 0x100) {
LAB_0056cc38:
        if ((iVar6 < 0x20000) && (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'E')
           ) {
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          *(int *)((long)param_1 + 0x14) = iVar8;
          uVar7 = 1;
          goto LAB_0056cdc8;
        }
      }
      goto LAB_0056cdb8;
    }
LAB_0056cdbc:
    uVar7 = 0;
    *(undefined8 *)((long)param_1 + 0x24) = uVar10;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar9;
  }
  else {
LAB_0056cc68:
    *(int *)((long)param_1 + 0x14) = iVar8 + 2;
    *(int *)(param_1 + 3) = iVar6 + 3;
    if ((0xfe < iVar8) ||
       ((0x1fffd < iVar6 || (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'L')))) {
      *(int *)((long)param_1 + 0x14) = iVar1;
LAB_0056ccdc:
      *(undefined8 *)((long)param_1 + 0x24) = uVar10;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar9;
      iVar8 = *(int *)((long)param_1 + 0x14);
      iVar6 = (int)param_1[3];
      iVar1 = iVar8 + 1;
      *(int *)((long)param_1 + 0x14) = iVar1;
      *(int *)(param_1 + 3) = iVar6 + 1;
      if ((iVar8 < 0x100) && (iVar6 < 0x20000)) {
        iVar4 = *(int *)((long)param_1 + 0x1c);
        if (*(char *)(*param_1 + (long)iVar4) == 'L') {
          lVar2 = (long)iVar4 + 1;
          *(int *)((long)param_1 + 0x14) = iVar1;
          *(int *)(param_1 + 3) = iVar6 + 2;
          *(int *)((long)param_1 + 0x1c) = (int)lVar2;
          if (iVar6 < 0x1ffff) {
            *(int *)((long)param_1 + 0x14) = iVar8 + 2;
            *(int *)(param_1 + 3) = iVar6 + 3;
            if ((((iVar8 < 0xff) && (iVar6 != 0x1fffe)) &&
                (pcVar3 = (char *)(*param_1 + lVar2), *pcVar3 == '_')) && (pcVar3[1] == 'Z')) {
              *(int *)((long)param_1 + 0x1c) = iVar4 + 3;
              *(int *)((long)param_1 + 0x14) = iVar1;
              plVar5 = param_1;
              FUN_0056923c();
              iVar1 = *(int *)((long)param_1 + 0x14);
              iVar8 = iVar1 + -1;
              *(int *)((long)param_1 + 0x14) = iVar8;
              if ((int)plVar5 == 0) goto LAB_0056cdbc;
              iVar6 = (int)param_1[3];
              *(int *)((long)param_1 + 0x14) = iVar1;
              *(int *)(param_1 + 3) = iVar6 + 1;
              if (iVar1 < 0x101) goto LAB_0056cc38;
            }
            else {
              *(int *)((long)param_1 + 0x14) = iVar1;
            }
          }
        }
      }
LAB_0056cdb8:
      *(int *)((long)param_1 + 0x14) = iVar8;
      goto LAB_0056cdbc;
    }
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
    *(int *)((long)param_1 + 0x14) = iVar1;
    plVar5 = param_1;
    FUN_0056afc4();
    if (((int)plVar5 == 0) || (plVar5 = param_1, FUN_0056d100(), ((ulong)plVar5 & 1) == 0))
    goto LAB_0056ccdc;
    uVar7 = 1;
  }
LAB_0056cdc8:
  iVar8 = *(int *)((long)param_1 + 0x14) + -1;
LAB_0056cdd0:
  *(int *)((long)param_1 + 0x14) = iVar8;
  return uVar7;
}



/* Entry: 0056ce10; end: 0056d0ff;  */

undefined1 FUN_0056ce10(long *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  long *plVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  long lVar14;
  int *piVar15;
  undefined **ppuVar16;
  byte *pbVar17;
  
  uVar6 = 0;
  iVar12 = *(int *)((long)param_1 + 0x14);
  iVar2 = (int)param_1[3];
  iVar10 = iVar12 + 1;
  *(int *)((long)param_1 + 0x14) = iVar10;
  *(int *)(param_1 + 3) = iVar2 + 1;
  if ((0xff < iVar12) || (0x1ffff < iVar2)) goto LAB_0056d0c8;
  piVar15 = (int *)((long)param_1 + 0x1c);
  pcVar13 = (char *)(*param_1 + (long)*piVar15);
  uVar6 = 0;
  if ((*pcVar13 == '\0') || (uVar6 = 0, pcVar13[1] == '\0')) goto LAB_0056d0c8;
  uVar9 = *(undefined8 *)piVar15;
  uVar3 = *(undefined4 *)((long)param_1 + 0x24);
  uVar8 = *(uint *)(param_1 + 5);
  iVar7 = iVar2 + 2;
  *(int *)((long)param_1 + 0x14) = iVar12 + 2;
  *(int *)(param_1 + 3) = iVar7;
  if ((((iVar12 < 0xff) && (iVar2 < 0x1ffff)) && (*pcVar13 == 'c')) && (pcVar13[1] == 'v')) {
    *(int *)((long)param_1 + 0x1c) = *piVar15 + 2;
    *(int *)((long)param_1 + 0x14) = iVar10;
    uVar11 = uVar8;
    if ((int)uVar8 < 0) {
      FUN_0056bef8(param_1,"operator ",9);
      uVar11 = *(uint *)(param_1 + 5);
    }
    *(uint *)(param_1 + 5) = uVar11 & 0x8000ffff;
    plVar5 = param_1;
    FUN_0056afc4();
    if (((ulong)plVar5 & 1) == 0) {
      iVar10 = *(int *)((long)param_1 + 0x14);
      iVar7 = (int)param_1[3];
      goto LAB_0056cf28;
    }
    *(uint *)(param_1 + 5) =
         *(uint *)(param_1 + 5) & 0x80000000 |
         *(uint *)(param_1 + 5) & 0xffff | (uVar8 >> 0x10 & 0x7fff) << 0x10;
    uVar6 = 1;
    if (param_2 != (int *)0x0) {
      *param_2 = 1;
    }
  }
  else {
    *(int *)((long)param_1 + 0x14) = iVar10;
LAB_0056cf28:
    *(undefined8 *)piVar15 = uVar9;
    *(undefined4 *)((long)param_1 + 0x24) = uVar3;
    *(uint *)(param_1 + 5) = uVar8;
    *(int *)((long)param_1 + 0x14) = iVar10 + 1;
    *(int *)(param_1 + 3) = iVar7 + 1;
    if ((iVar10 < 0x100) && (iVar7 < 0x20000)) {
      lVar14 = *param_1;
      iVar12 = *(int *)((long)param_1 + 0x1c);
      if (*(char *)(lVar14 + iVar12) != 'v') goto LAB_0056cfdc;
      lVar1 = (long)iVar12 + 1;
      *(int *)((long)param_1 + 0x1c) = (int)lVar1;
      *(int *)((long)param_1 + 0x14) = iVar10;
      cVar4 = *(char *)(lVar14 + lVar1);
      *(int *)((long)param_1 + 0x14) = iVar10 + 1;
      *(int *)(param_1 + 3) = iVar7 + 2;
      if ((0x1fffe < iVar7) || (9 < *(byte *)(lVar14 + lVar1) - 0x30)) goto LAB_0056cfdc;
      *(int *)((long)param_1 + 0x1c) = iVar12 + 2;
      *(int *)((long)param_1 + 0x14) = iVar10;
      if (param_2 != (int *)0x0) {
        *param_2 = cVar4 + -0x30;
      }
      plVar5 = param_1;
      FUN_0056badc();
      if (((ulong)plVar5 & 1) != 0) {
        uVar6 = 1;
        goto LAB_0056d0c0;
      }
    }
    else {
LAB_0056cfdc:
      *(int *)((long)param_1 + 0x14) = iVar10;
    }
    *(undefined4 *)((long)param_1 + 0x24) = uVar3;
    *(undefined8 *)piVar15 = uVar9;
    *(uint *)(param_1 + 5) = uVar8;
    pbVar17 = (byte *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
    uVar8 = (uint)*pbVar17;
    if ((uVar8 - 0x61 < 0x1a) && (uVar11 = (uint)pbVar17[1], (uVar11 & 0xffffffdf) - 0x41 < 0x1a)) {
      pcVar13 = "nw";
      ppuVar16 = &PTR_s_na_00a01908;
      do {
        if ((uVar8 == (byte)*pcVar13) && (uVar11 == (byte)pcVar13[1])) {
          if (param_2 != (int *)0x0) {
            *param_2 = *(int *)(ppuVar16 + -1);
          }
          func_0x00569178(param_1,"operator");
          pbVar17 = ppuVar16[-2];
          if (*pbVar17 - 0x61 < 0x1a) {
            func_0x00569178(param_1," ");
          }
          func_0x00569178(param_1,pbVar17);
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
          uVar6 = 1;
          goto LAB_0056d0c0;
        }
        pcVar13 = *ppuVar16;
        ppuVar16 = ppuVar16 + 3;
      } while ((byte *)pcVar13 != (byte *)0x0);
    }
    uVar6 = 0;
  }
LAB_0056d0c0:
  iVar12 = *(int *)((long)param_1 + 0x14) + -1;
LAB_0056d0c8:
  *(int *)((long)param_1 + 0x14) = iVar12;
  return uVar6;
}



/* Entry: 0056d100; end: 0056d29f;  */

undefined8 FUN_0056d100(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar5 = 0;
  iVar2 = *(int *)((long)param_1 + 0x14);
  iVar3 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar3 + 1;
  if ((0xff < iVar2) || (0x1ffff < iVar3)) goto LAB_0056d294;
  uVar13 = *(undefined8 *)((long)param_1 + 0x24);
  uVar12 = *(undefined8 *)((long)param_1 + 0x1c);
  iVar1 = iVar2 + 2;
  if (iVar2 < 0xff && iVar3 < 0x1ffff) {
    iVar6 = iVar3 + 3;
    *(int *)((long)param_1 + 0x14) = iVar2 + 3;
    *(int *)(param_1 + 3) = iVar6;
    lVar11 = *param_1;
    iVar8 = *(int *)((long)param_1 + 0x1c);
    if (((iVar2 < 0xfe) && (iVar3 < 0x1fffe)) && (*(char *)(lVar11 + iVar8) == 'n')) {
      iVar8 = iVar8 + 1;
      *(int *)((long)param_1 + 0x1c) = iVar8;
    }
    *(int *)((long)param_1 + 0x14) = iVar1;
    if (9 < *(byte *)(lVar11 + iVar8) - 0x30) goto LAB_0056d1e4;
    pbVar7 = (byte *)(iVar8 + lVar11);
    do {
      pbVar7 = pbVar7 + 1;
      iVar8 = iVar8 + 1;
    } while (*pbVar7 - 0x30 < 10);
    iVar6 = iVar3 + 4;
    *(int *)((long)param_1 + 0x14) = iVar1;
    *(int *)(param_1 + 3) = iVar6;
    *(int *)((long)param_1 + 0x1c) = iVar8;
    if ((0x1fffc < iVar3) || (*(char *)(lVar11 + iVar8) != 'E')) goto LAB_0056d1e4;
LAB_0056d278:
    *(int *)((long)param_1 + 0x1c) = iVar8 + 1;
    uVar5 = 1;
  }
  else {
    iVar6 = iVar3 + 2;
LAB_0056d1e4:
    *(undefined8 *)((long)param_1 + 0x24) = uVar13;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar12;
    *(int *)((long)param_1 + 0x14) = iVar1;
    *(int *)(param_1 + 3) = iVar6 + 1;
    if ((iVar2 < 0xff) && (iVar6 < 0x20000)) {
      pbVar7 = (byte *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
      uVar10 = (uint)*pbVar7;
      if (*pbVar7 != 0) {
        lVar11 = 0;
        pbVar9 = pbVar7;
        do {
          bVar4 = uVar10 - 0x30 < 10;
          if ((!bVar4 && 4 < uVar10 - 0x61) && (bVar4 || uVar10 - 0x61 != 5)) {
            if (lVar11 == 0) goto LAB_0056d284;
            break;
          }
          pbVar9 = pbVar9 + 1;
          uVar10 = (uint)*pbVar9;
          lVar11 = lVar11 + -1;
        } while (uVar10 != 0);
        iVar8 = *(int *)((long)param_1 + 0x1c) + ((int)pbVar9 - (int)pbVar7);
        *(int *)((long)param_1 + 0x14) = iVar1;
        *(int *)(param_1 + 3) = iVar6 + 2;
        *(int *)((long)param_1 + 0x1c) = iVar8;
        if ((iVar6 < 0x1ffff) && (*(char *)(*param_1 + (long)iVar8) == 'E')) goto LAB_0056d278;
      }
    }
LAB_0056d284:
    uVar5 = 0;
    *(undefined8 *)((long)param_1 + 0x24) = uVar13;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar12;
  }
LAB_0056d294:
  *(int *)((long)param_1 + 0x14) = iVar2;
  return uVar5;
}



/* Entry: 0056d2a0; end: 0056d44b;  */

undefined8 FUN_0056d2a0(long *param_1)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = 0;
  iVar6 = *(int *)((long)param_1 + 0x14);
  lVar2 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar6 + 1;
  *(int *)(param_1 + 3) = (int)lVar2 + 1;
  if ((0xff < iVar6) || (0x1ffff < (int)lVar2)) goto LAB_0056d3e4;
  plVar4 = param_1;
  FUN_0056badc();
  if ((int)plVar4 != 0) {
    FUN_0056a014(param_1);
LAB_0056d2ec:
    uVar3 = 1;
    goto LAB_0056d3e4;
  }
  uVar9 = *(undefined8 *)((long)param_1 + 0x24);
  uVar8 = *(undefined8 *)((long)param_1 + 0x1c);
  iVar5 = *(int *)((long)param_1 + 0x14);
  lVar2 = param_1[3];
  iVar7 = iVar5 + 1;
  iVar6 = (int)lVar2 + 1;
  *(int *)((long)param_1 + 0x14) = iVar7;
  *(int *)(param_1 + 3) = iVar6;
  if ((iVar5 < 0x100) && ((int)lVar2 < 0x20000)) {
    pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
    if ((*pcVar1 != 'o') || (pcVar1[1] != 'n')) goto LAB_0056d368;
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
    *(int *)((long)param_1 + 0x14) = iVar5;
    plVar4 = param_1;
    FUN_0056ce10(param_1,0);
    if (((ulong)plVar4 & 1) == 0) {
      iVar5 = *(int *)((long)param_1 + 0x14);
      iVar6 = (int)param_1[3];
      iVar7 = iVar5 + 1;
      goto LAB_0056d36c;
    }
    goto LAB_0056d3c8;
  }
LAB_0056d368:
  *(int *)((long)param_1 + 0x14) = iVar5;
LAB_0056d36c:
  *(undefined8 *)((long)param_1 + 0x24) = uVar9;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar8;
  *(int *)((long)param_1 + 0x14) = iVar7;
  *(int *)(param_1 + 3) = iVar6 + 1;
  if ((iVar5 < 0x100) && (iVar6 < 0x20000)) {
    pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
    if ((*pcVar1 != 'd') || (pcVar1[1] != 'n')) goto LAB_0056d3d4;
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
    *(int *)((long)param_1 + 0x14) = iVar5;
    plVar4 = param_1;
    FUN_0056a6e4();
    if (((ulong)plVar4 & 1) != 0) {
LAB_0056d3c8:
      FUN_0056a014(param_1);
      goto LAB_0056d2ec;
    }
    plVar4 = param_1;
    FUN_0056bd34();
    if ((((ulong)plVar4 & 1) != 0) ||
       (plVar4 = param_1, FUN_00569cbc(param_1,0), ((ulong)plVar4 & 1) != 0)) goto LAB_0056d2ec;
    plVar4 = param_1;
    FUN_0056badc();
    if ((int)plVar4 != 0) goto LAB_0056d3c8;
  }
  else {
LAB_0056d3d4:
    *(int *)((long)param_1 + 0x14) = iVar5;
  }
  uVar3 = 0;
  *(undefined8 *)((long)param_1 + 0x24) = uVar9;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar8;
LAB_0056d3e4:
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
  return uVar3;
}



/* Entry: 0056d44c; end: 0056d553;  */

undefined8 FUN_0056d44c(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  
  uVar3 = 0;
  iVar1 = *(int *)((long)param_1 + 0x14);
  lVar2 = param_1[3];
  iVar5 = iVar1 + 1;
  *(int *)((long)param_1 + 0x14) = iVar5;
  *(int *)(param_1 + 3) = (int)lVar2 + 1;
  if ((iVar1 < 0x100) && ((int)lVar2 < 0x20000)) {
    if ((int)param_1[5] < 0) {
      FUN_0056bef8(param_1,"::",2);
    }
    plVar4 = param_1;
    FUN_00569838();
    if (((ulong)plVar4 & 1) == 0) {
      if ((int)param_1[5] < 0) {
        *(undefined1 *)(param_1[1] + (long)(int)param_1[4] + -2) = 0;
      }
      iVar5 = *(int *)((long)param_1 + 0x14);
      lVar2 = param_1[3];
      *(int *)((long)param_1 + 0x14) = iVar5 + 1;
      *(int *)(param_1 + 3) = (int)lVar2 + 1;
      if (((0xff < iVar5) || (0x1ffff < (int)lVar2)) ||
         (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 's')) {
        *(int *)((long)param_1 + 0x14) = iVar5;
        *(int *)((long)param_1 + 0x14) = iVar5 + -1;
        return 0;
      }
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
      *(int *)((long)param_1 + 0x14) = iVar5;
    }
    FUN_0056d554(param_1);
    iVar5 = *(int *)((long)param_1 + 0x14);
    uVar3 = 1;
  }
  *(int *)((long)param_1 + 0x14) = iVar5 + -1;
  return uVar3;
}



/* Entry: 0056d554; end: 0056d643;  */

void FUN_0056d554(long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar2 = *(int *)((long)param_1 + 0x14);
  iVar3 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar3 + 1;
  if ((iVar2 < 0x100) && (iVar3 < 0x20000)) {
    uVar8 = *(undefined8 *)((long)param_1 + 0x1c);
    *(int *)((long)param_1 + 0x14) = iVar2 + 2;
    *(int *)(param_1 + 3) = iVar3 + 2;
    if (iVar2 < 0xff && iVar3 < 0x1ffff) {
      lVar7 = *param_1;
      iVar4 = *(int *)((long)param_1 + 0x1c);
      if (*(char *)(lVar7 + iVar4) == '_') {
        uVar5 = (long)iVar4 + 1;
        *(int *)(param_1 + 3) = iVar3 + 3;
        *(int *)((long)param_1 + 0x1c) = (int)uVar5;
        if (iVar3 < 0x1fffe) {
          *(int *)((long)param_1 + 0x14) = iVar2 + 3;
          *(int *)(param_1 + 3) = iVar3 + 4;
          if (((iVar2 < 0xfe) && (iVar3 != 0x1fffd)) && (*(char *)(lVar7 + uVar5) == 'n')) {
            uVar5 = (ulong)(iVar4 + 2U);
            *(uint *)((long)param_1 + 0x1c) = iVar4 + 2U;
          }
          *(int *)((long)param_1 + 0x14) = iVar2 + 2;
          if (*(byte *)(lVar7 + (int)uVar5) - 0x30 < 10) {
            pbVar6 = (byte *)((int)uVar5 + lVar7);
            do {
              pbVar6 = pbVar6 + 1;
              uVar1 = (int)uVar5 + 1;
              uVar5 = (ulong)uVar1;
            } while (*pbVar6 - 0x30 < 10);
            *(uint *)((long)param_1 + 0x1c) = uVar1;
            goto LAB_0056d63c;
          }
        }
      }
    }
    *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)((long)param_1 + 0x24);
    *(undefined8 *)((long)param_1 + 0x1c) = uVar8;
  }
LAB_0056d63c:
  *(int *)((long)param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 0056d644; end: 0056d8f7;  */

void FUN_0056d644(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar6 = *(int *)((long)param_1 + 0x14);
  iVar1 = (int)param_1[3];
  iVar4 = iVar6 + 1;
  *(int *)((long)param_1 + 0x14) = iVar4;
  *(int *)(param_1 + 3) = iVar1 + 1;
  if ((0xff < iVar6) || (0x1ffff < iVar1)) goto LAB_0056d8bc;
  uStack_28 = *(undefined8 *)((long)param_1 + 0x24);
  uStack_30 = *(undefined8 *)((long)param_1 + 0x1c);
  iVar5 = iVar1 + 2;
  *(int *)((long)param_1 + 0x14) = iVar6 + 2;
  *(int *)(param_1 + 3) = iVar5;
  if ((iVar6 < 0xff && iVar1 < 0x1ffff) &&
     (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'J')) {
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
    *(int *)((long)param_1 + 0x14) = iVar4;
    do {
      plVar3 = param_1;
      FUN_0056d644();
    } while (((ulong)plVar3 & 1) != 0);
    iVar4 = *(int *)((long)param_1 + 0x14);
    lVar2 = param_1[3];
    iVar5 = (int)lVar2 + 1;
    *(int *)((long)param_1 + 0x14) = iVar4 + 1;
    *(int *)(param_1 + 3) = iVar5;
    if (((0xff < iVar4) || (0x1ffff < (int)lVar2)) ||
       (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'E')) goto LAB_0056d710;
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
    *(int *)((long)param_1 + 0x14) = iVar4;
  }
  else {
LAB_0056d710:
    *(undefined8 *)((long)param_1 + 0x24) = uStack_28;
    *(undefined8 *)((long)param_1 + 0x1c) = uStack_30;
    *(int *)((long)param_1 + 0x14) = iVar4;
    *(int *)(param_1 + 3) = iVar5 + 1;
    if ((iVar4 < 0x100) && (iVar5 < 0x20000)) {
      *(int *)((long)param_1 + 0x14) = iVar4 + 2;
      *(int *)(param_1 + 3) = iVar5 + 2;
      if ((0xfe < iVar4) ||
         ((0x1fffe < iVar5 || (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'L'))))
      {
        *(int *)((long)param_1 + 0x14) = iVar4 + 1;
LAB_0056d7fc:
        *(undefined8 *)((long)param_1 + 0x24) = uStack_28;
        *(undefined8 *)((long)param_1 + 0x1c) = uStack_30;
        goto LAB_0056d804;
      }
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
      *(int *)((long)param_1 + 0x14) = iVar4 + 1;
      plVar3 = param_1;
      FUN_0056badc();
      if (((ulong)plVar3 & 1) == 0) {
        iVar4 = *(int *)((long)param_1 + 0x14) + -1;
        goto LAB_0056d7fc;
      }
      FUN_0056d554(param_1);
      *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
      FUN_0056a014(param_1);
      uStack_28 = *(undefined8 *)((long)param_1 + 0x24);
      uStack_30 = *(undefined8 *)((long)param_1 + 0x1c);
      plVar3 = param_1;
      FUN_0056d100();
      if ((int)plVar3 != 0) {
        iVar4 = *(int *)((long)param_1 + 0x14);
        lVar2 = param_1[3];
        *(int *)((long)param_1 + 0x14) = iVar4 + 1;
        *(int *)(param_1 + 3) = (int)lVar2 + 1;
        if (((iVar4 < 0x100) && ((int)lVar2 < 0x20000)) &&
           (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'E')) {
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          *(int *)((long)param_1 + 0x14) = iVar4;
          goto LAB_0056d8b4;
        }
        goto LAB_0056d8a8;
      }
LAB_0056d8ac:
      *(undefined8 *)((long)param_1 + 0x24) = uStack_28;
      *(undefined8 *)((long)param_1 + 0x1c) = uStack_30;
    }
    else {
LAB_0056d804:
      *(int *)((long)param_1 + 0x14) = iVar4;
      plVar3 = param_1;
      FUN_0056afc4();
      if ((((ulong)plVar3 & 1) == 0) && (plVar3 = param_1, FUN_0056cb84(), ((ulong)plVar3 & 1) == 0)
         ) {
        *(undefined8 *)((long)param_1 + 0x24) = uStack_28;
        *(undefined8 *)((long)param_1 + 0x1c) = uStack_30;
        iVar4 = *(int *)((long)param_1 + 0x14);
        lVar2 = param_1[3];
        *(int *)((long)param_1 + 0x14) = iVar4 + 1;
        *(int *)(param_1 + 3) = (int)lVar2 + 1;
        if ((0xff < iVar4) ||
           ((0x1ffff < (int)lVar2 ||
            (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'X')))) {
LAB_0056d8a8:
          *(int *)((long)param_1 + 0x14) = iVar4;
          goto LAB_0056d8ac;
        }
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
        *(int *)((long)param_1 + 0x14) = iVar4;
        plVar3 = param_1;
        FUN_0056c000();
        if (((int)plVar3 == 0) ||
           (plVar3 = param_1, FUN_0056a2d0(param_1,0x45), ((ulong)plVar3 & 1) == 0))
        goto LAB_0056d8ac;
      }
    }
  }
LAB_0056d8b4:
  iVar6 = *(int *)((long)param_1 + 0x14) + -1;
LAB_0056d8bc:
  *(int *)((long)param_1 + 0x14) = iVar6;
  return;
}



/* Entry: 0056d8f8; end: 0056dd2b;  */

undefined8 FUN_0056d8f8(long *param_1)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar5 = 0;
  iVar9 = *(int *)((long)param_1 + 0x14);
  lVar10 = param_1[3];
  iVar8 = iVar9 + 1;
  *(int *)((long)param_1 + 0x14) = iVar8;
  *(int *)(param_1 + 3) = (int)lVar10 + 1;
  if ((0xff < iVar9) || (0x1ffff < (int)lVar10)) goto LAB_0056dc98;
  plVar6 = param_1;
  FUN_0056ce10(param_1,0);
  iVar8 = *(int *)((long)param_1 + 0x14);
  if (((ulong)plVar6 & 1) == 0) {
    iVar9 = iVar8 + 1;
    iVar4 = (int)param_1[3];
    *(int *)((long)param_1 + 0x14) = iVar9;
    *(int *)(param_1 + 3) = iVar4 + 1;
    if ((iVar8 < 0x100) && (iVar4 < 0x20000)) {
      uVar11 = *(undefined8 *)((long)param_1 + 0x24);
      uVar5 = *(undefined8 *)((long)param_1 + 0x1c);
      iVar1 = iVar8 + 2;
      *(int *)((long)param_1 + 0x14) = iVar1;
      *(int *)(param_1 + 3) = iVar4 + 2;
      if ((0xfe < iVar8) || (0x1fffe < iVar4)) {
LAB_0056d9cc:
        *(int *)((long)param_1 + 0x14) = iVar9;
LAB_0056d9d0:
        *(undefined8 *)((long)param_1 + 0x24) = uVar11;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar5;
        iVar8 = *(int *)((long)param_1 + 0x14);
        iVar9 = (int)param_1[3];
        *(int *)((long)param_1 + 0x14) = iVar8 + 1;
        *(int *)(param_1 + 3) = iVar9 + 1;
        if ((iVar8 < 0x100) && (iVar9 < 0x20000)) {
          iVar4 = *(int *)((long)param_1 + 0x1c);
          if (*(char *)(*param_1 + (long)iVar4) == 'D') {
            lVar10 = (long)iVar4 + 1;
            *(int *)((long)param_1 + 0x14) = iVar8 + 1;
            *(int *)(param_1 + 3) = iVar9 + 2;
            *(int *)((long)param_1 + 0x1c) = (int)lVar10;
            if (((iVar9 < 0x1ffff) && (bVar3 = *(byte *)(*param_1 + lVar10), bVar3 < 0x35)) &&
               ((1L << ((ulong)bVar3 & 0x3f) & 0x17000000000000U) != 0)) {
              *(int *)((long)param_1 + 0x1c) = iVar4 + 2;
              *(int *)((long)param_1 + 0x14) = iVar8;
              lVar10 = param_1[1];
              iVar8 = *(int *)((long)param_1 + 0x24);
              uVar7 = *(uint *)(param_1 + 5);
              if ((int)uVar7 < 0) {
                FUN_0056bef8(param_1,"~",1);
                uVar7 = (uint)*(ushort *)(param_1 + 5);
              }
              lVar10 = lVar10 + iVar8;
LAB_0056db7c:
              FUN_0056bef8(param_1,lVar10,uVar7 & 0xffff);
              goto LAB_0056db88;
            }
          }
        }
        *(int *)((long)param_1 + 0x14) = iVar8;
        *(undefined8 *)((long)param_1 + 0x24) = uVar11;
        *(undefined8 *)((long)param_1 + 0x1c) = uVar5;
        iVar8 = iVar8 + -1;
        goto LAB_0056da38;
      }
      lVar10 = *param_1;
      iVar8 = *(int *)((long)param_1 + 0x1c);
      if (*(char *)(lVar10 + iVar8) != 'C') goto LAB_0056d9cc;
      lVar2 = (long)iVar8 + 1;
      *(int *)((long)param_1 + 0x14) = iVar1;
      *(int *)(param_1 + 3) = iVar4 + 3;
      *(int *)((long)param_1 + 0x1c) = (int)lVar2;
      if (0x1fffd < iVar4) {
        *(int *)((long)param_1 + 0x14) = iVar1;
        *(undefined4 *)(param_1 + 3) = 0x20002;
        goto LAB_0056d9cc;
      }
      if (*(byte *)(lVar10 + lVar2) - 0x31 < 4) {
        *(int *)((long)param_1 + 0x1c) = iVar8 + 2;
        *(int *)((long)param_1 + 0x14) = iVar9;
        lVar10 = param_1[1] + (long)*(int *)((long)param_1 + 0x24);
        uVar7 = (uint)*(ushort *)(param_1 + 5);
        goto LAB_0056db7c;
      }
      *(int *)((long)param_1 + 0x14) = iVar1;
      *(int *)(param_1 + 3) = iVar4 + 4;
      if ((iVar4 == 0x1fffd) || (*(char *)(lVar10 + lVar2) != 'I')) goto LAB_0056d9cc;
      *(int *)((long)param_1 + 0x1c) = iVar8 + 2;
      *(int *)((long)param_1 + 0x14) = iVar9;
      plVar6 = param_1;
      FUN_0056a680();
      if (((int)plVar6 == 0) || (plVar6 = param_1, FUN_0056bcd0(), ((ulong)plVar6 & 1) == 0))
      goto LAB_0056d9d0;
LAB_0056db88:
      iVar8 = *(int *)((long)param_1 + 0x14) + -1;
      *(int *)((long)param_1 + 0x14) = iVar8;
    }
    else {
LAB_0056da38:
      *(int *)((long)param_1 + 0x14) = iVar8;
      plVar6 = param_1;
      FUN_0056badc();
      iVar8 = *(int *)((long)param_1 + 0x14);
      if (((ulong)plVar6 & 1) == 0) {
        iVar9 = (int)param_1[3];
        *(int *)(param_1 + 3) = iVar9 + 1;
        if ((iVar8 < 0x100) && (iVar9 < 0x20000)) {
          uVar11 = *(undefined8 *)((long)param_1 + 0x24);
          uVar5 = *(undefined8 *)((long)param_1 + 0x1c);
          *(int *)((long)param_1 + 0x14) = iVar8 + 2;
          *(int *)(param_1 + 3) = iVar9 + 2;
          if ((iVar8 < 0xff) &&
             ((iVar9 < 0x1ffff &&
              (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == 'L')))) {
            *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
            *(int *)((long)param_1 + 0x14) = iVar8 + 1;
            plVar6 = param_1;
            FUN_0056badc();
            if (((ulong)plVar6 & 1) != 0) {
              FUN_0056d554(param_1);
              goto LAB_0056db88;
            }
            iVar8 = *(int *)((long)param_1 + 0x14) + -1;
          }
          else {
            *(int *)((long)param_1 + 0x14) = iVar8 + 1;
          }
          *(undefined8 *)((long)param_1 + 0x24) = uVar11;
          *(undefined8 *)((long)param_1 + 0x1c) = uVar5;
        }
        *(int *)((long)param_1 + 0x14) = iVar8;
        plVar6 = param_1;
        FUN_0056a8dc();
        iVar8 = *(int *)((long)param_1 + 0x14);
        if (((ulong)plVar6 & 1) == 0) {
          uVar5 = 0;
          goto LAB_0056dc98;
        }
      }
    }
  }
  uVar5 = 0;
  iVar9 = iVar8 + 1;
  iVar4 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar4 + 1;
  if ((iVar8 < 0x100) && (iVar4 < 0x20000)) {
    *(int *)((long)param_1 + 0x14) = iVar8 + 2;
    *(int *)(param_1 + 3) = iVar4 + 2;
    uVar5 = 1;
    if ((iVar8 < 0xff) && (iVar4 < 0x1ffff)) {
      while( true ) {
        if (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) != 'B') {
          uVar5 = 1;
          goto LAB_0056dc90;
        }
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
        *(int *)((long)param_1 + 0x14) = iVar9;
        uVar12 = *(undefined8 *)((long)param_1 + 0x24);
        uVar11 = *(undefined8 *)((long)param_1 + 0x1c);
        if ((int)param_1[5] < 0) {
          FUN_0056bef8(param_1,"[abi:",5);
        }
        plVar6 = param_1;
        FUN_0056badc();
        if (((ulong)plVar6 & 1) == 0) break;
        if ((int)param_1[5] < 0) {
          FUN_0056bef8(param_1,"]",1);
        }
        iVar9 = *(int *)((long)param_1 + 0x14);
        lVar10 = param_1[3];
        *(int *)((long)param_1 + 0x14) = iVar9 + 1;
        *(int *)(param_1 + 3) = (int)lVar10 + 1;
        uVar5 = 1;
        if ((0xff < iVar9) || (0x1ffff < (int)lVar10)) goto LAB_0056dc90;
      }
      uVar5 = 0;
      *(undefined8 *)((long)param_1 + 0x24) = uVar12;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar11;
      iVar9 = *(int *)((long)param_1 + 0x14);
    }
  }
LAB_0056dc90:
  iVar8 = iVar9 + -1;
  *(int *)((long)param_1 + 0x14) = iVar8;
LAB_0056dc98:
  *(int *)((long)param_1 + 0x14) = iVar8 + -1;
  return uVar5;
}



/* Entry: 0056dd2c; end: 0056e013;  */

undefined8 FUN_0056dd2c(long *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar4 = 0;
  iVar3 = *(int *)((long)param_1 + 0x14);
  iVar6 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar6 + 1;
  if ((0xff < iVar3) || (0x1ffff < iVar6)) goto LAB_0056de00;
  uVar13 = *(undefined8 *)((long)param_1 + 0x24);
  uVar12 = *(undefined8 *)((long)param_1 + 0x1c);
  iVar1 = iVar3 + 2;
  iVar5 = iVar6 + 2;
  *(int *)((long)param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 3) = iVar5;
  if (iVar3 < 0xff && iVar6 < 0x1ffff) {
    lVar7 = *param_1;
    iVar9 = *(int *)((long)param_1 + 0x1c);
    if (*(char *)(lVar7 + iVar9) != 'h') goto LAB_0056dda4;
    uVar8 = (long)iVar9 + 1;
    *(int *)((long)param_1 + 0x1c) = (int)uVar8;
    if (0x1fffd < iVar6) {
      iVar5 = 0x20001;
      goto LAB_0056dda4;
    }
    iVar5 = iVar6 + 4;
    if ((0xfd < iVar3) || (iVar6 == 0x1fffd)) goto LAB_0056dda4;
    iVar5 = iVar6 + 5;
    *(int *)((long)param_1 + 0x14) = iVar3 + 4;
    *(int *)(param_1 + 3) = iVar5;
    if ((iVar3 < 0xfd) && ((iVar6 < 0x1fffc && (*(char *)(lVar7 + uVar8) == 'n')))) {
      uVar8 = (ulong)(iVar9 + 2U);
      *(uint *)((long)param_1 + 0x1c) = iVar9 + 2U;
    }
    *(int *)((long)param_1 + 0x14) = iVar3 + 3;
    if (9 < *(byte *)(lVar7 + (int)uVar8) - 0x30) goto LAB_0056dda4;
    pbVar11 = (byte *)((int)uVar8 + lVar7);
    do {
      pbVar11 = pbVar11 + 1;
      iVar9 = (int)uVar8;
      uVar2 = iVar9 + 1;
      uVar8 = (ulong)uVar2;
    } while (*pbVar11 - 0x30 < 10);
    iVar5 = iVar6 + 6;
    *(int *)((long)param_1 + 0x14) = iVar1;
    *(int *)(param_1 + 3) = iVar5;
    *(uint *)((long)param_1 + 0x1c) = uVar2;
    if ((0x1fffa < iVar6) || (*(char *)(lVar7 + (int)uVar2) != '_')) goto LAB_0056dda4;
LAB_0056deb0:
    *(int *)((long)param_1 + 0x1c) = iVar9 + 2;
    uVar4 = 1;
  }
  else {
LAB_0056dda4:
    *(undefined8 *)((long)param_1 + 0x24) = uVar13;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar12;
    *(int *)((long)param_1 + 0x14) = iVar1;
    *(int *)(param_1 + 3) = iVar5 + 1;
    if ((iVar3 < 0xff) && (iVar5 < 0x20000)) {
      lVar7 = *param_1;
      iVar6 = *(int *)((long)param_1 + 0x1c);
      if (*(char *)(lVar7 + iVar6) == 'v') {
        uVar8 = (long)iVar6 + 1;
        *(int *)(param_1 + 3) = iVar5 + 2;
        *(int *)((long)param_1 + 0x1c) = (int)uVar8;
        if (((iVar5 < 0x1ffff) && (*(int *)(param_1 + 3) = iVar5 + 3, iVar3 < 0xfe)) &&
           (iVar5 != 0x1fffe)) {
          iVar9 = iVar3 + 3;
          *(int *)((long)param_1 + 0x14) = iVar3 + 4;
          *(int *)(param_1 + 3) = iVar5 + 4;
          if (((iVar3 < 0xfd) && (iVar5 < 0x1fffd)) && (*(char *)(lVar7 + uVar8) == 'n')) {
            uVar8 = (ulong)(iVar6 + 2U);
            *(uint *)((long)param_1 + 0x1c) = iVar6 + 2U;
          }
          *(int *)((long)param_1 + 0x14) = iVar9;
          if (*(byte *)(lVar7 + (int)uVar8) - 0x30 < 10) {
            pbVar11 = (byte *)((int)uVar8 + lVar7);
            do {
              pbVar11 = pbVar11 + 1;
              iVar6 = (int)uVar8;
              uVar2 = iVar6 + 1;
              uVar8 = (ulong)uVar2;
            } while (*pbVar11 - 0x30 < 10);
            *(int *)((long)param_1 + 0x14) = iVar9;
            *(int *)(param_1 + 3) = iVar5 + 5;
            *(uint *)((long)param_1 + 0x1c) = uVar2;
            if ((iVar5 < 0x1fffc) && (*(char *)(lVar7 + (int)uVar2) == '_')) {
              iVar10 = iVar6 + 2;
              *(int *)(param_1 + 3) = iVar5 + 6;
              *(int *)((long)param_1 + 0x1c) = iVar10;
              if (iVar5 + 4 != 0x1ffff) {
                *(int *)((long)param_1 + 0x14) = iVar3 + 4;
                *(int *)(param_1 + 3) = iVar5 + 7;
                if (((iVar3 < 0xfd) && (iVar5 < 0x1fffa)) && (*(char *)(lVar7 + iVar10) == 'n')) {
                  iVar10 = iVar6 + 3;
                  *(int *)((long)param_1 + 0x1c) = iVar10;
                }
                *(int *)((long)param_1 + 0x14) = iVar9;
                if (*(byte *)(lVar7 + iVar10) - 0x30 < 10) {
                  pbVar11 = (byte *)(iVar10 + lVar7);
                  do {
                    iVar9 = iVar10;
                    pbVar11 = pbVar11 + 1;
                    iVar10 = iVar9 + 1;
                  } while (*pbVar11 - 0x30 < 10);
                  *(int *)((long)param_1 + 0x14) = iVar1;
                  *(int *)(param_1 + 3) = iVar5 + 8;
                  *(int *)((long)param_1 + 0x1c) = iVar10;
                  if ((iVar5 < 0x1fff9) && (*(char *)(lVar7 + iVar10) == '_')) goto LAB_0056deb0;
                }
              }
            }
          }
        }
      }
    }
    uVar4 = 0;
    *(undefined8 *)((long)param_1 + 0x24) = uVar13;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar12;
  }
LAB_0056de00:
  *(int *)((long)param_1 + 0x14) = iVar3;
  return uVar4;
}



/* Entry: 0056e014; end: 0056e177;  */

void FUN_0056e014(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uRam0000000000b6b540 = 0;
  uRam0000000000b6b660 = 0x100000000;
  uVar1 = 0x1d;
  _sysconf();
  uRam0000000000b6b678 = 0x40;
  uRam0000000000b6b670 = 0x20;
  uRam0000000000b6b680 = 0;
  uRam0000000000b6b548 = 0;
  uRam0000000000b6b550 = 0xffffffffb3ca7422;
  uRam0000000000b6b558 = 0xb6b540;
  uRam0000000000b6b568 = 0;
  uRam0000000000b6b578 = 0;
  uRam0000000000b6b570 = 0;
  uRam0000000000b6b588 = 0;
  uRam0000000000b6b580 = 0;
  uRam0000000000b6b598 = 0;
  uRam0000000000b6b590 = 0;
  uRam0000000000b6b5a8 = 0;
  uRam0000000000b6b5a0 = 0;
  uRam0000000000b6b5b8 = 0;
  uRam0000000000b6b5b0 = 0;
  uRam0000000000b6b5c8 = 0;
  uRam0000000000b6b5c0 = 0;
  uRam0000000000b6b5d8 = 0;
  uRam0000000000b6b5d0 = 0;
  uRam0000000000b6b5e8 = 0;
  uRam0000000000b6b5e0 = 0;
  uRam0000000000b6b5f8 = 0;
  uRam0000000000b6b5f0 = 0;
  uRam0000000000b6b608 = 0;
  uRam0000000000b6b600 = 0;
  uRam0000000000b6b618 = 0;
  uRam0000000000b6b610 = 0;
  uRam0000000000b6b628 = 0;
  uRam0000000000b6b620 = 0;
  uRam0000000000b6b638 = 0;
  uRam0000000000b6b630 = 0;
  uRam0000000000b6b648 = 0;
  uRam0000000000b6b640 = 0;
  uRam0000000000b6b658 = 0;
  uRam0000000000b6b650 = 0;
  uRam0000000000b62688 = 0;
  uRam0000000000b627a8 = 0;
  uVar2 = 0x1d;
  uRam0000000000b6b668 = uVar1;
  _sysconf();
  uRam0000000000b627c0 = 0x40;
  uRam0000000000b627b8 = 0x20;
  uRam0000000000b627c8 = 0;
  uRam0000000000b62690 = 0;
  uRam0000000000b62698 = 0xffffffffb3cae7fa;
  uRam0000000000b626a0 = 0xb62688;
  uRam0000000000b626b0 = 0;
  uRam0000000000b626c0 = 0;
  uRam0000000000b626b8 = 0;
  uRam0000000000b626d0 = 0;
  uRam0000000000b626c8 = 0;
  uRam0000000000b626e0 = 0;
  uRam0000000000b626d8 = 0;
  uRam0000000000b626f0 = 0;
  uRam0000000000b626e8 = 0;
  uRam0000000000b62700 = 0;
  uRam0000000000b626f8 = 0;
  uRam0000000000b62710 = 0;
  uRam0000000000b62708 = 0;
  uRam0000000000b62720 = 0;
  uRam0000000000b62718 = 0;
  uRam0000000000b62730 = 0;
  uRam0000000000b62728 = 0;
  uRam0000000000b62740 = 0;
  uRam0000000000b62738 = 0;
  uRam0000000000b62750 = 0;
  uRam0000000000b62748 = 0;
  uRam0000000000b62760 = 0;
  uRam0000000000b62758 = 0;
  uRam0000000000b62770 = 0;
  uRam0000000000b62768 = 0;
  uRam0000000000b62780 = 0;
  uRam0000000000b62778 = 0;
  uRam0000000000b62790 = 0;
  uRam0000000000b62788 = 0;
  uRam0000000000b627a0 = 0;
  uRam0000000000b62798 = 0;
  uRam0000000000b627d0 = 0;
  uRam0000000000b628f0 = 0x200000000;
  uVar1 = 0x1d;
  uRam0000000000b627b0 = uVar2;
  _sysconf();
  uRam0000000000b628f8 = uVar1;
  uRam0000000000b62908 = 0x40;
  uRam0000000000b62900 = 0x20;
  uRam0000000000b62910 = 0;
  uRam0000000000b627d8 = 0;
  uRam0000000000b627e0 = 0xffffffffb3cae6b2;
  uRam0000000000b627e8 = 0xb627d0;
  uRam0000000000b627f8 = 0;
  uRam0000000000b62808 = 0;
  uRam0000000000b62800 = 0;
  uRam0000000000b62818 = 0;
  uRam0000000000b62810 = 0;
  uRam0000000000b62828 = 0;
  uRam0000000000b62820 = 0;
  uRam0000000000b62838 = 0;
  uRam0000000000b62830 = 0;
  uRam0000000000b62848 = 0;
  uRam0000000000b62840 = 0;
  uRam0000000000b62858 = 0;
  uRam0000000000b62850 = 0;
  uRam0000000000b62868 = 0;
  uRam0000000000b62860 = 0;
  uRam0000000000b62878 = 0;
  uRam0000000000b62870 = 0;
  uRam0000000000b62888 = 0;
  uRam0000000000b62880 = 0;
  uRam0000000000b62898 = 0;
  uRam0000000000b62890 = 0;
  uRam0000000000b628a8 = 0;
  uRam0000000000b628a0 = 0;
  uRam0000000000b628b8 = 0;
  uRam0000000000b628b0 = 0;
  uRam0000000000b628c8 = 0;
  uRam0000000000b628c0 = 0;
  uRam0000000000b628d8 = 0;
  uRam0000000000b628d0 = 0;
  uRam0000000000b628e8 = 0;
  uRam0000000000b628e0 = 0;
  return;
}



/* Entry: 0056e178; end: 0056e30f;  */

void FUN_0056e178(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  uint *puVar7;
  undefined2 uStack_38;
  uint *puStack_30;
  undefined4 uStack_24;
  
  if (param_1 == 0) {
    return;
  }
  puVar7 = *(uint **)(param_1 + -0x10);
  uStack_38 = 0;
  puStack_30 = puVar7;
  if (((byte)puVar7[0x49] >> 1 & 1) != 0) {
    uStack_24 = 0xffffffff;
    iVar6 = 1;
    _pthread_sigmask(1,&uStack_24,(ulong)&uStack_38 | 4);
    uStack_38 = CONCAT11(iVar6 == 0,(undefined1)uStack_38);
  }
  uVar2 = *puStack_30;
  if ((uVar2 & 1) == 0) {
    do {
      uVar1 = *puStack_30;
      if (uVar1 != uVar2) {
        ClearExclusiveLocal();
        break;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puStack_30,0x10);
      if (bVar4) {
        *puStack_30 = uVar2 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar1 & 1) != 0) goto LAB_0056e27c;
  }
  else {
LAB_0056e27c:
    FUN_00777048(puStack_30);
  }
  FUN_0056e368(param_1,puVar7);
  if ((int)puVar7[0x48] < 1) {
    FUN_00584c60(3,"low_level_alloc.cc",0x203,"Check %s failed: %s");
LAB_0056e2e4:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x56e2e8);
    (*pcVar5)();
  }
  puVar7[0x48] = puVar7[0x48] - 1;
  uVar2 = *puStack_30;
  do {
    uVar1 = *puStack_30;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puStack_30,0x10);
    if (bVar4) {
      *puStack_30 = uVar2 & 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (7 < uVar1) {
    FUN_007771d4();
  }
  if (uStack_38._1_1_ == '\x01') {
    iVar6 = 3;
    _pthread_sigmask(3,(ulong)&uStack_38 | 4,0);
    if (iVar6 != 0) {
      FUN_00584c60(3,"low_level_alloc.cc",0x12d,"pthread_sigmask failed: %d");
      goto LAB_0056e2e4;
    }
  }
  return;
}



/* Entry: 0056e310; end: 0056e367;  */

void FUN_0056e310(byte *param_1)

{
  code *pcVar1;
  
  if ((*param_1 & 1) != 0) {
    return;
  }
  FUN_00584c60(3,"low_level_alloc.cc",0x126,"Check %s failed: %s");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x56e364);
  (*pcVar1)();
}



/* Entry: 0056e368; end: 0056e5bf;  */

void FUN_0056e368(uint *param_1,long param_2)

{
  bool bVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  uint uVar5;
  ulong **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *apuStack_118 [30];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar3 = (ulong *)(param_1 + -8);
  if ((*(ulong *)(param_1 + -6) ^ (ulong)puVar3) != 0x4c833e95) goto LAB_0056e524;
  if (*(long *)(param_1 + -4) != param_2) {
    FUN_00584c60(3,"low_level_alloc.cc",0x1f0,"Check %s failed: %s");
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x56e58c);
    (*pcVar2)();
  }
  uVar8 = *puVar3;
  uVar7 = uVar8 - 0x28;
  if (*(ulong *)(param_2 + 0x138) < uVar8) {
    iVar12 = 0;
    do {
      iVar12 = iVar12 + 1;
      uVar8 = uVar8 >> 1;
    } while (*(ulong *)(param_2 + 0x138) < uVar8);
  }
  else {
    iVar12 = 0;
  }
  uVar7 = uVar7 >> 3;
  uVar5 = *(uint *)(param_2 + 0x140);
  do {
    uVar5 = uVar5 * 0x41c64e6d + 0x3039;
    iVar12 = iVar12 + 1;
  } while ((uVar5 >> 0x1e & 1) == 0);
  *(uint *)(param_2 + 0x140) = uVar5;
  if ((ulong)(long)iVar12 <= uVar7) {
    uVar7 = (long)iVar12;
  }
  uVar5 = (uint)uVar7;
  if ((int)uVar5 < 1) {
    FUN_00584c60(3,"low_level_alloc.cc",0x94,"Check %s failed: %s");
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x56e5c0);
    (*pcVar2)();
  }
  if (0x1c < uVar5) {
    uVar5 = 0x1d;
  }
  uVar8 = (ulong)uVar5;
  *param_1 = uVar5;
  uVar11 = *(uint *)(param_2 + 0x28);
  uVar7 = (ulong)uVar11;
  lVar9 = (long)(int)uVar11;
  puVar15 = (ulong *)(param_2 + 8);
  if (0 < (int)uVar11) {
    do {
      do {
        puVar14 = puVar15;
        puVar15 = (ulong *)puVar14[uVar7 + 4];
      } while (puVar15 != (ulong *)0x0 && puVar15 < puVar3);
      apuStack_118[uVar7 - 1] = puVar14;
      bVar1 = 1 < uVar7;
      uVar7 = uVar7 - 1;
      puVar15 = puVar14;
    } while (bVar1);
  }
  if ((int)uVar11 < (int)uVar5) {
    do {
      uVar11 = uVar11 + 1;
      apuStack_118[lVar9] = (ulong *)(param_2 + 8);
      lVar9 = lVar9 + 1;
      *(uint *)(param_2 + 0x28) = uVar11;
      uVar8 = (ulong)(int)*param_1;
    } while (lVar9 < (long)uVar8);
    if (*param_1 != 0) goto LAB_0056e4a8;
  }
  else {
LAB_0056e4a8:
    uVar7 = 0;
    do {
      puVar15 = apuStack_118[uVar7];
      *(ulong *)(param_1 + uVar7 * 2 + 2) = puVar15[uVar7 + 5];
      puVar15[uVar7 + 5] = (ulong)puVar3;
      uVar7 = uVar7 + 1;
    } while ((uVar8 & 0xffffffff) != uVar7);
  }
  *(ulong *)(param_1 + -6) = (ulong)puVar3 ^ 0xffffffffb37cc16a;
  FUN_0056ec54(puVar3);
  puVar3 = apuStack_118[0];
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
LAB_0056e524:
    FUN_00584c60(3,"low_level_alloc.cc",0x1ee,"Check %s failed: %s");
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x56e558);
    (*pcVar2)();
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar15 = (ulong *)apuStack_118[0][5];
  if ((puVar15 != (ulong *)0x0) && ((ulong *)((long)apuStack_118[0] + *apuStack_118[0]) == puVar15))
  {
    uVar4 = apuStack_118[0][2];
    uVar7 = *puVar15 + *apuStack_118[0];
    *apuStack_118[0] = uVar7;
    puVar15[1] = 0;
    puVar15[2] = 0;
    puVar14 = (ulong *)(uVar4 + 8);
    uVar5 = *(uint *)(uVar4 + 0x28);
    uVar8 = (ulong)uVar5;
    uVar13 = uVar8;
    puVar17 = puVar14;
    if (0 < (int)uVar5) {
      do {
        do {
          puVar16 = puVar17;
          puVar17 = (ulong *)puVar16[uVar13 + 4];
        } while (puVar17 != (ulong *)0x0 && puVar17 < puVar15);
        apuStack_118[uVar13 - 1] = puVar16;
        bVar1 = 1 < uVar13;
        uVar13 = uVar13 - 1;
        puVar17 = puVar16;
      } while (bVar1);
    }
    if (uVar5 == 0) {
      if (puVar15 != (ulong *)0x0) goto LAB_0056efc0;
    }
    else if (puVar15 != (ulong *)apuStack_118[0][5]) goto LAB_0056efc0;
    uVar13 = (ulong)(uint)puVar15[4];
    if ((uint)puVar15[4] != 0) {
      lVar9 = 5;
      ppuVar6 = apuStack_118;
      do {
        if ((ulong *)(*ppuVar6)[lVar9] != puVar15) break;
        (*ppuVar6)[lVar9] = puVar15[lVar9];
        lVar9 = lVar9 + 1;
        uVar13 = uVar13 - 1;
        ppuVar6 = ppuVar6 + 1;
      } while (uVar13 != 0);
    }
    if ((int)uVar5 < 1) {
joined_r0x0056eda8:
      bVar1 = false;
      if (uVar5 != 0) goto LAB_0056edac;
LAB_0056ee08:
      uVar8 = 0;
      puVar15 = (ulong *)0x0;
    }
    else {
      if (*(long *)(uVar4 + uVar8 * 8 + 0x28) == 0) {
        uVar13 = uVar8;
        do {
          uVar8 = uVar13 - 1;
          if (uVar13 == 0 || uVar8 == 0) {
            uVar8 = 0;
            bVar1 = false;
            puVar15 = (ulong *)0x0;
            *(undefined4 *)(uVar4 + 0x28) = 0;
            goto LAB_0056ee10;
          }
          lVar9 = uVar13 * 8;
          uVar13 = uVar8;
        } while (*(long *)(uVar4 + 0x20 + lVar9) == 0);
        uVar5 = (uint)uVar8;
        *(uint *)(uVar4 + 0x28) = uVar5;
        if ((long)uVar8 < 1) goto joined_r0x0056eda8;
      }
      uVar13 = uVar8 & 0xffffffff;
      puVar15 = puVar14;
      do {
        puVar17 = puVar15;
        do {
          puVar15 = puVar17;
          puVar17 = (ulong *)puVar15[uVar13 + 4];
        } while (puVar17 != (ulong *)0x0 && puVar17 < puVar3);
        apuStack_118[uVar13 - 1] = puVar15;
        bVar1 = 1 < uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar1);
      bVar1 = true;
      if ((int)uVar8 == 0) goto LAB_0056ee08;
LAB_0056edac:
      puVar15 = (ulong *)apuStack_118[0][5];
      uVar8 = uVar8 & 0xffffffff;
    }
LAB_0056ee10:
    if (puVar3 != puVar15) goto LAB_0056efc0;
    uVar13 = (ulong)(uint)puVar3[4];
    if ((uint)puVar3[4] != 0) {
      lVar9 = 5;
      ppuVar6 = apuStack_118;
      do {
        if ((ulong *)(*ppuVar6)[lVar9] != puVar3) break;
        (*ppuVar6)[lVar9] = puVar3[lVar9];
        lVar9 = lVar9 + 1;
        uVar13 = uVar13 - 1;
        ppuVar6 = ppuVar6 + 1;
      } while (uVar13 != 0);
    }
    if (bVar1) {
      uVar13 = uVar8 + 1;
      iVar12 = (int)uVar8;
      plVar10 = (long *)(uVar4 + uVar8 * 8 + 0x28);
      do {
        iVar12 = iVar12 + -1;
        if (*plVar10 != 0) break;
        *(int *)(uVar4 + 0x28) = iVar12;
        uVar13 = uVar13 - 1;
        plVar10 = plVar10 + -1;
      } while (1 < uVar13);
    }
    uVar8 = uVar7 - 0x28;
    if (*(ulong *)(uVar4 + 0x138) < uVar7) {
      iVar12 = 0;
      do {
        iVar12 = iVar12 + 1;
        uVar7 = uVar7 >> 1;
      } while (*(ulong *)(uVar4 + 0x138) < uVar7);
    }
    else {
      iVar12 = 0;
    }
    uVar8 = uVar8 >> 3;
    uVar5 = *(uint *)(uVar4 + 0x140);
    do {
      uVar5 = uVar5 * 0x41c64e6d + 0x3039;
      iVar12 = iVar12 + 1;
    } while ((uVar5 >> 0x1e & 1) == 0);
    *(uint *)(uVar4 + 0x140) = uVar5;
    if ((ulong)(long)iVar12 <= uVar8) {
      uVar8 = (long)iVar12;
    }
    uVar5 = (uint)uVar8;
    if ((int)uVar5 < 1) {
      FUN_00584c60(3,"low_level_alloc.cc",0x94,"Check %s failed: %s");
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x56f028);
      (*pcVar2)();
    }
    if (0x1c < uVar5) {
      uVar5 = 0x1d;
    }
    uVar7 = (ulong)uVar5;
    *(uint *)(puVar3 + 4) = uVar5;
    uVar11 = *(uint *)(uVar4 + 0x28);
    uVar8 = (ulong)uVar11;
    lVar9 = (long)(int)uVar11;
    puVar15 = puVar14;
    if (0 < (int)uVar11) {
      do {
        do {
          puVar17 = puVar15;
          puVar15 = (ulong *)puVar17[uVar8 + 4];
        } while (puVar15 != (ulong *)0x0 && puVar15 < puVar3);
        apuStack_118[uVar8 - 1] = puVar17;
        bVar1 = 1 < uVar8;
        uVar8 = uVar8 - 1;
        puVar15 = puVar17;
      } while (bVar1);
    }
    if ((int)uVar11 < (int)uVar5) {
      do {
        uVar11 = uVar11 + 1;
        apuStack_118[lVar9] = puVar14;
        lVar9 = lVar9 + 1;
        *(uint *)(uVar4 + 0x28) = uVar11;
        uVar7 = (ulong)(int)puVar3[4];
      } while (lVar9 < (long)uVar7);
      if ((int)puVar3[4] == 0) goto LAB_0056ef94;
    }
    uVar7 = uVar7 & 0xffffffff;
    lVar9 = 5;
    ppuVar6 = apuStack_118;
    do {
      puVar15 = *ppuVar6;
      puVar3[lVar9] = puVar15[lVar9];
      puVar15[lVar9] = (ulong)puVar3;
      lVar9 = lVar9 + 1;
      uVar7 = uVar7 - 1;
      ppuVar6 = ppuVar6 + 1;
    } while (uVar7 != 0);
  }
LAB_0056ef94:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
LAB_0056efc0:
  FUN_00584c60(3,"low_level_alloc.cc",0xbc,"Check %s failed: %s");
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x56eff4);
  (*pcVar2)();
}



/* Entry: 0056e5c0; end: 0056ec53;  */

ulong * FUN_0056e5c0(ulong param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined2 uStack_170;
  uint *puStack_168;
  undefined8 uStack_160;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar15 = (ulong *)0x0;
  if (param_1 == 0) {
LAB_0056e998:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
      return puVar15;
    }
    ___stack_chk_fail();
LAB_0056ebc0:
    FUN_00584c60(3,"low_level_alloc.cc",0x12d,"pthread_sigmask failed: %d");
    goto LAB_0056ec48;
  }
  uStack_170 = 0;
  puStack_168 = param_2;
  if (((byte)param_2[0x49] >> 1 & 1) != 0) {
    uStack_160._0_4_ = 0xffffffff;
    iVar4 = 1;
    _pthread_sigmask(1,&uStack_160,(ulong)&uStack_170 | 4);
    uStack_170 = CONCAT11(iVar4 == 0,(undefined1)uStack_170);
  }
  uVar8 = *puStack_168;
  if ((uVar8 & 1) == 0) {
    do {
      uVar12 = *puStack_168;
      if (uVar12 != uVar8) {
        ClearExclusiveLocal();
        break;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_168,0x10);
      if (bVar2) {
        *puStack_168 = uVar8 | 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((uVar12 & 1) != 0) goto LAB_0056e66c;
  }
  else {
LAB_0056e66c:
    FUN_00777048();
  }
  if (param_1 < 0xffffffffffffffe0) {
    uVar17 = param_1 + *(long *)(param_2 + 0x4c) + 0x1f;
    if (param_1 + 0x20 <= uVar17) {
      uVar17 = uVar17 & -*(long *)(param_2 + 0x4c);
      if (7 < uVar17 - 0x28) {
        uVar18 = uVar17 - 0x28 >> 3;
        puVar15 = (ulong *)(param_2 + 2);
        while( true ) {
          uVar7 = *(ulong *)(param_2 + 0x4e);
          uVar9 = 1;
          for (uVar11 = uVar17; uVar7 < uVar11; uVar11 = uVar11 >> 1) {
            uVar9 = uVar9 + 1;
          }
          uVar11 = uVar18;
          if (uVar9 <= uVar18) {
            uVar11 = uVar9;
          }
          uVar8 = (uint)uVar11;
          if (0x1c < uVar8) {
            uVar8 = 0x1d;
          }
          uVar12 = param_2[10];
          uVar9 = (ulong)uVar12;
          if ((int)uVar8 <= (int)uVar12) break;
LAB_0056e704:
          uVar8 = *param_2;
          do {
            uVar12 = *param_2;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
            if (bVar2) {
              *param_2 = uVar8 & 2;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (7 < uVar12) {
            FUN_007771d4(param_2);
          }
          uVar9 = (uVar17 - 1) + *(long *)(param_2 + 0x4a) * 0x10;
          if (uVar9 < uVar17) {
            FUN_00584c60(3,"low_level_alloc.cc",0x1b5,"Check %s failed: %s");
            goto LAB_0056ec48;
          }
          uVar9 = uVar9 & *(long *)(param_2 + 0x4a) * -0x10;
          puVar5 = (ulong *)0x0;
          _mmap(0,uVar9,3,0x1002,0xffffffff,0);
          if (puVar5 == (ulong *)0xffffffffffffffff) goto LAB_0056eb90;
          uVar8 = *param_2;
          if ((uVar8 & 1) == 0) {
            do {
              uVar12 = *param_2;
              if (uVar12 != uVar8) {
                ClearExclusiveLocal();
                break;
              }
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
              if (bVar2) {
                *param_2 = uVar8 | 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if ((uVar12 & 1) != 0) goto LAB_0056e810;
          }
          else {
LAB_0056e810:
            FUN_00777048(param_2);
          }
          *puVar5 = uVar9;
          puVar5[1] = (ulong)puVar5 ^ 0x4c833e95;
          puVar5[2] = (ulong)param_2;
          FUN_0056e368(puVar5 + 4,param_2);
        }
        puVar5 = puVar15;
        do {
          if ((int)(uint)puVar5[4] < (int)uVar8) {
            uVar6 = 0x1c5;
LAB_0056ea6c:
            FUN_00584c60(3,"low_level_alloc.cc",uVar6,"Check %s failed: %s");
            goto LAB_0056ec48;
          }
          puVar16 = (ulong *)puVar5[(ulong)(uVar8 - 1) + 5];
          if (puVar16 == (ulong *)0x0) goto LAB_0056e704;
          if ((puVar16[1] ^ (ulong)puVar16) != 0xffffffffb37cc16a) {
            uVar6 = 0x1ca;
            goto LAB_0056ea6c;
          }
          if ((uint *)puVar16[2] != param_2) {
            uVar6 = 0x1cb;
            goto LAB_0056ea6c;
          }
          if (puVar5 != puVar15) {
            if (puVar5 < puVar16) {
              if ((ulong *)((long)puVar5 + *puVar5) < puVar16) goto LAB_0056e7a0;
              uVar6 = 0x1d0;
            }
            else {
              uVar6 = 0x1cd;
            }
            goto LAB_0056ea6c;
          }
LAB_0056e7a0:
          uVar11 = *puVar16;
          puVar5 = puVar16;
        } while (uVar11 < uVar17);
        uVar18 = uVar9;
        if (0 < (int)uVar12) {
          do {
            puVar5 = puVar15;
            do {
              puVar15 = puVar5;
              puVar5 = (ulong *)puVar15[uVar18 + 4];
            } while (puVar5 != (ulong *)0x0 && puVar5 < puVar16);
            (&uStack_160)[uVar18 - 1] = puVar15;
            bVar2 = 1 < uVar18;
            uVar18 = uVar18 - 1;
          } while (bVar2);
        }
        if (uVar12 != 0) {
          if (puVar16 == *(ulong **)(CONCAT44(uStack_160._4_4_,(undefined4)uStack_160) + 0x28))
          goto LAB_0056e888;
LAB_0056e9e0:
          uVar6 = 0xbc;
LAB_0056eb3c:
          FUN_00584c60(3,"low_level_alloc.cc",uVar6,"Check %s failed: %s");
          goto LAB_0056ec48;
        }
        if (puVar16 != (ulong *)0x0) goto LAB_0056e9e0;
LAB_0056e888:
        puVar15 = puVar16 + 4;
        uVar18 = (ulong)(uint)*puVar15;
        if ((uint)*puVar15 != 0) {
          lVar14 = 5;
          plVar13 = &uStack_160;
          do {
            if (*(ulong **)(*plVar13 + lVar14 * 8) != puVar16) break;
            *(ulong *)(*plVar13 + lVar14 * 8) = puVar16[lVar14];
            lVar14 = lVar14 + 1;
            uVar18 = uVar18 - 1;
            plVar13 = plVar13 + 1;
          } while (uVar18 != 0);
        }
        if (0 < (int)uVar12) {
          uVar18 = uVar9 + 1;
          puVar10 = param_2 + uVar9 * 2 + 10;
          do {
            uVar12 = uVar12 - 1;
            if (*(long *)puVar10 != 0) break;
            param_2[10] = uVar12;
            uVar18 = uVar18 - 1;
            puVar10 = puVar10 + -2;
          } while (1 < uVar18);
        }
        if (CARRY8(uVar7,uVar17)) {
          uVar6 = 0x1b5;
          goto LAB_0056eb3c;
        }
        if (uVar11 < uVar7 + uVar17) {
          puVar16[1] = (ulong)puVar16 ^ 0x4c833e95;
        }
        else {
          plVar13 = (long *)((long)puVar16 + uVar17);
          *plVar13 = uVar11 - uVar17;
          plVar13[1] = (ulong)plVar13 ^ 0x4c833e95;
          plVar13[2] = (long)param_2;
          *puVar16 = uVar17;
          FUN_0056e368(plVar13 + 4,param_2);
          puVar16[1] = (ulong)puVar16 ^ 0x4c833e95;
          if ((uint *)puVar16[2] != param_2) {
            FUN_00584c60(3,"low_level_alloc.cc",0x25f,"Check %s failed: %s");
            goto LAB_0056ec48;
          }
        }
        param_2[0x48] = param_2[0x48] + 1;
        uVar8 = *puStack_168;
        do {
          uVar12 = *puStack_168;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puStack_168,0x10);
          if (bVar2) {
            *puStack_168 = uVar8 & 2;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (7 < uVar12) {
          FUN_007771d4();
        }
        if (uStack_170._1_1_ != '\x01') goto LAB_0056e998;
        iVar4 = 3;
        _pthread_sigmask(3,(ulong)&uStack_170 | 4,0);
        if (iVar4 == 0) goto LAB_0056e998;
        goto LAB_0056ebc0;
      }
      FUN_00584c60(3,"low_level_alloc.cc",0x94,"Check %s failed: %s");
      goto LAB_0056ec48;
    }
  }
  FUN_00584c60(3,"low_level_alloc.cc",0x1b5,"Check %s failed: %s");
LAB_0056ec48:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x56ec4c);
  (*pcVar3)();
LAB_0056eb90:
  ___error();
  FUN_00584c60(3,"low_level_alloc.cc",0x239,"mmap error: %d");
  goto LAB_0056ec48;
}



/* Entry: 0056ec54; end: 0056f027;  */

void FUN_0056ec54(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong *puVar16;
  long alStack_118 [30];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar11 = (ulong *)param_1[5];
  if ((puVar11 != (ulong *)0x0) && ((ulong *)((long)param_1 + *param_1) == puVar11)) {
    uVar4 = param_1[2];
    uVar7 = *puVar11 + *param_1;
    *param_1 = uVar7;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar2 = (ulong *)(uVar4 + 8);
    uVar6 = *(uint *)(uVar4 + 0x28);
    uVar8 = (ulong)uVar6;
    uVar13 = uVar8;
    puVar16 = puVar2;
    if (0 < (int)uVar6) {
      do {
        do {
          puVar15 = puVar16;
          puVar16 = (ulong *)puVar15[uVar13 + 4];
        } while (puVar16 != (ulong *)0x0 && puVar16 < puVar11);
        alStack_118[uVar13 - 1] = (long)puVar15;
        bVar1 = 1 < uVar13;
        uVar13 = uVar13 - 1;
        puVar16 = puVar15;
      } while (bVar1);
    }
    if (uVar6 == 0) {
      if (puVar11 != (ulong *)0x0) goto LAB_0056efc0;
    }
    else if (puVar11 != *(ulong **)(alStack_118[0] + 0x28)) goto LAB_0056efc0;
    uVar13 = (ulong)(uint)puVar11[4];
    if ((uint)puVar11[4] != 0) {
      lVar14 = 5;
      plVar5 = alStack_118;
      do {
        if (*(ulong **)(*plVar5 + lVar14 * 8) != puVar11) break;
        *(ulong *)(*plVar5 + lVar14 * 8) = puVar11[lVar14];
        lVar14 = lVar14 + 1;
        uVar13 = uVar13 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar13 != 0);
    }
    if ((int)uVar6 < 1) {
joined_r0x0056eda8:
      bVar1 = false;
      if (uVar6 != 0) goto LAB_0056edac;
LAB_0056ee08:
      uVar8 = 0;
      puVar11 = (ulong *)0x0;
    }
    else {
      if (*(long *)(uVar4 + uVar8 * 8 + 0x28) == 0) {
        uVar13 = uVar8;
        do {
          uVar8 = uVar13 - 1;
          if (uVar13 == 0 || uVar8 == 0) {
            uVar8 = 0;
            bVar1 = false;
            puVar11 = (ulong *)0x0;
            *(undefined4 *)(uVar4 + 0x28) = 0;
            goto LAB_0056ee10;
          }
          lVar14 = uVar13 * 8;
          uVar13 = uVar8;
        } while (*(long *)(uVar4 + 0x20 + lVar14) == 0);
        uVar6 = (uint)uVar8;
        *(uint *)(uVar4 + 0x28) = uVar6;
        if ((long)uVar8 < 1) goto joined_r0x0056eda8;
      }
      uVar13 = uVar8 & 0xffffffff;
      puVar11 = puVar2;
      do {
        puVar16 = puVar11;
        do {
          puVar11 = puVar16;
          puVar16 = (ulong *)puVar11[uVar13 + 4];
        } while (puVar16 != (ulong *)0x0 && puVar16 < param_1);
        alStack_118[uVar13 - 1] = (long)puVar11;
        bVar1 = 1 < uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar1);
      bVar1 = true;
      if ((int)uVar8 == 0) goto LAB_0056ee08;
LAB_0056edac:
      puVar11 = *(ulong **)(alStack_118[0] + 0x28);
      uVar8 = uVar8 & 0xffffffff;
    }
LAB_0056ee10:
    if (param_1 != puVar11) goto LAB_0056efc0;
    uVar13 = (ulong)(uint)param_1[4];
    if ((uint)param_1[4] != 0) {
      lVar14 = 5;
      plVar5 = alStack_118;
      do {
        if (*(ulong **)(*plVar5 + lVar14 * 8) != param_1) break;
        *(ulong *)(*plVar5 + lVar14 * 8) = param_1[lVar14];
        lVar14 = lVar14 + 1;
        uVar13 = uVar13 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar13 != 0);
    }
    if (bVar1) {
      uVar13 = uVar8 + 1;
      iVar12 = (int)uVar8;
      plVar5 = (long *)(uVar4 + uVar8 * 8 + 0x28);
      do {
        iVar12 = iVar12 + -1;
        if (*plVar5 != 0) break;
        *(int *)(uVar4 + 0x28) = iVar12;
        uVar13 = uVar13 - 1;
        plVar5 = plVar5 + -1;
      } while (1 < uVar13);
    }
    uVar8 = uVar7 - 0x28;
    if (*(ulong *)(uVar4 + 0x138) < uVar7) {
      iVar12 = 0;
      do {
        iVar12 = iVar12 + 1;
        uVar7 = uVar7 >> 1;
      } while (*(ulong *)(uVar4 + 0x138) < uVar7);
    }
    else {
      iVar12 = 0;
    }
    uVar8 = uVar8 >> 3;
    uVar6 = *(uint *)(uVar4 + 0x140);
    do {
      uVar6 = uVar6 * 0x41c64e6d + 0x3039;
      iVar12 = iVar12 + 1;
    } while ((uVar6 >> 0x1e & 1) == 0);
    *(uint *)(uVar4 + 0x140) = uVar6;
    if ((ulong)(long)iVar12 <= uVar8) {
      uVar8 = (long)iVar12;
    }
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < 1) {
      FUN_00584c60(3,"low_level_alloc.cc",0x94,"Check %s failed: %s");
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x56f028);
      (*pcVar3)();
    }
    if (0x1c < uVar6) {
      uVar6 = 0x1d;
    }
    uVar7 = (ulong)uVar6;
    *(uint *)(param_1 + 4) = uVar6;
    uVar10 = *(uint *)(uVar4 + 0x28);
    uVar8 = (ulong)uVar10;
    lVar14 = (long)(int)uVar10;
    puVar11 = puVar2;
    if (0 < (int)uVar10) {
      do {
        do {
          puVar16 = puVar11;
          puVar11 = (ulong *)puVar16[uVar8 + 4];
        } while (puVar11 != (ulong *)0x0 && puVar11 < param_1);
        alStack_118[uVar8 - 1] = (long)puVar16;
        bVar1 = 1 < uVar8;
        uVar8 = uVar8 - 1;
        puVar11 = puVar16;
      } while (bVar1);
    }
    if ((int)uVar10 < (int)uVar6) {
      do {
        uVar10 = uVar10 + 1;
        alStack_118[lVar14] = (long)puVar2;
        lVar14 = lVar14 + 1;
        *(uint *)(uVar4 + 0x28) = uVar10;
        uVar7 = (ulong)(int)param_1[4];
      } while (lVar14 < (long)uVar7);
      if ((int)param_1[4] == 0) goto LAB_0056ef94;
    }
    uVar7 = uVar7 & 0xffffffff;
    lVar14 = 5;
    plVar5 = alStack_118;
    do {
      lVar9 = *plVar5;
      param_1[lVar14] = *(ulong *)(lVar9 + lVar14 * 8);
      *(ulong **)(lVar9 + lVar14 * 8) = param_1;
      lVar14 = lVar14 + 1;
      uVar7 = uVar7 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar7 != 0);
  }
LAB_0056ef94:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
LAB_0056efc0:
  FUN_00584c60(3,"low_level_alloc.cc",0xbc,"Check %s failed: %s");
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x56eff4);
  (*pcVar3)();
}



/* Entry: 0056f028; end: 0056f18b;  */

/* WARNING: Removing unreachable block (ram,0x0056f0d4) */
/* WARNING: Removing unreachable block (ram,0x0056f0bc) */

undefined1  [16] FUN_0056f028(uint *param_1,ulong param_2,code *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  do {
    puVar4 = param_1;
    if (*param_1 != 0) {
      iVar8 = 0;
      ClearExclusiveLocal();
      goto LAB_0056f090;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0x65c2937b;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_0056f130;
LAB_0056f090:
  do {
    uVar1 = *param_1;
    uVar5 = (ulong)uVar1;
    if (uVar1 == 0) {
      puVar6 = &UNK_008113e0;
      uVar7 = 0x65c2937b;
LAB_0056f0ec:
      do {
        if (*param_1 != uVar1) {
          ClearExclusiveLocal();
          goto LAB_0056f090;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = uVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      if (uVar1 != 0xdd) {
        if (uVar1 == 0x65c2937b) {
          puVar6 = &UNK_008113ec;
          uVar7 = 0x5a308d2;
          goto LAB_0056f0ec;
        }
        iVar8 = iVar8 + 1;
        puVar4 = param_1;
        FUN_00576d44(param_1,uVar5,iVar8,param_2);
        goto LAB_0056f090;
      }
      puVar6 = &UNK_008113f8;
    }
  } while (puVar6[8] != '\x01');
  param_2 = uVar5;
  if (uVar1 != 0) goto LAB_0056f174;
LAB_0056f130:
  (*param_3)();
  do {
    uVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0xdd;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar5 = param_2;
  if (uVar1 == 0x5a308d2) {
    auVar10._8_8_ = 1;
    auVar10._0_8_ = param_1;
    return auVar10;
  }
LAB_0056f174:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = puVar4;
  return auVar9;
}



/* Entry: 0056f18c; end: 0056f23f;  */

undefined1  [16] FUN_0056f18c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  __ZNSt3__16chrono12system_clock3nowEv();
  lVar2 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  param_1 = param_1 - lVar2;
  if (-1 < param_1) {
    auVar4._0_8_ = (ulong)(param_1 * 1000) / 1000000000;
    auVar4._8_8_ = ((ulong)(param_1 * 1000) % 1000000000) * 4;
    return auVar4;
  }
  uVar3 = (ulong)(param_1 * -1000) % 1000000000;
  lVar2 = -uVar3;
  auVar5._0_8_ = (lVar2 >> 0x3d) - (ulong)(param_1 * -1000) / 1000000000;
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = (ulong)((int)lVar2 * 4 + 4000000000);
  }
  auVar5._8_8_ = uVar1;
  return auVar5;
}



/* Entry: 0056f240; end: 0056f3a3;  */

void FUN_0056f240(ulong param_1,uint param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar4 = param_1 & 0xffffffff;
  uVar5 = param_1 >> 0x20;
  if (param_1 != 0) goto LAB_0056f2b4;
LAB_0056f28c:
  if (param_2 == 0) {
    return;
  }
  if (param_2 == 0xffffffff) {
    uStack_60 = 0x7fffffffffffffff;
    uVar7 = 0xffffffff;
    uStack_58 = 999999999;
    goto LAB_0056f2f0;
  }
  uVar3 = (ulong)param_2;
  do {
    uStack_58 = uVar3 >> 2;
    uStack_60 = param_1;
    uVar7 = uVar3;
LAB_0056f2f0:
    do {
      puVar2 = &uStack_60;
      _nanosleep(&uStack_60,&uStack_60);
      if ((int)puVar2 != 0) {
        ___error();
        if (*(int *)puVar2 == 4) goto LAB_0056f2f0;
      }
      if (param_2 == 0xffffffff) {
        param_2 = 0xffffffff;
        param_1 = uVar4 | uVar5 << 0x20;
      }
      else {
        if (uVar7 == 0xffffffff) {
          uVar5 = (long)param_1 >> 0x3f ^ 0x8000000000000000;
LAB_0056f370:
          param_2 = 0xffffffff;
          uVar4 = uVar5 & 0xffffffff;
          uVar5 = uVar5 >> 0x20;
        }
        else {
          uVar3 = uVar4 | uVar5 << 0x20;
          uVar6 = (uint)uVar7;
          uVar1 = param_2 + 4000000000;
          if (param_2 >= uVar6) {
            uVar1 = param_2;
          }
          uVar7 = (uVar3 - param_1) - (ulong)(param_2 < uVar6);
          uVar4 = uVar7 & 0xffffffff;
          uVar5 = uVar7 >> 0x20;
          param_2 = uVar1 - uVar6;
          if ((long)param_1 < 0) {
            if ((long)uVar7 < (long)uVar3) {
              uVar5 = 0x7fffffffffffffff;
              goto LAB_0056f370;
            }
          }
          else if ((long)uVar3 < (long)uVar7) {
            uVar5 = 0x8000000000000000;
            goto LAB_0056f370;
          }
        }
        param_1 = uVar4 | uVar5 << 0x20;
      }
      if (param_1 == 0) goto LAB_0056f28c;
LAB_0056f2b4:
      if ((long)param_1 < 1) {
        return;
      }
      uStack_60 = 0x7fffffffffffffff;
      uVar3 = 0;
      if (param_1 != 0x7fffffffffffffff) {
        uVar3 = (ulong)param_2;
      }
      uVar7 = 0xffffffff;
      uStack_58 = 999999999;
    } while (uVar3 == 0xffffffff);
  } while( true );
}



/* Entry: 0056f3a4; end: 0056f74b;  */

ulong FUN_0056f3a4(byte param_1,ulong param_2,uint param_3,ulong param_4,uint param_5,ulong *param_6
                  )

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  if ((param_3 != 0xffffffff) && (param_5 != 0xffffffff)) {
    if ((param_4 == 0) && (param_5 == 4)) {
      if (param_2 < 0x225c17d00) {
        uVar11 = 0;
        uVar2 = param_3 >> 2;
        param_3 = param_3 & 3;
        uVar9 = param_2 * 1000000000 + (ulong)uVar2;
        goto LAB_0056f724;
      }
    }
    else if ((param_4 == 0) && (param_5 == 400)) {
      if (param_2 < 0xd6bf94d455) {
        uVar11 = 0;
        uVar9 = (ulong)param_3;
        param_3 = param_3 % 400;
        uVar9 = uVar9 / 400 + param_2 * 10000000;
        goto LAB_0056f724;
      }
    }
    else if ((param_4 == 0) && (param_5 == 4000)) {
      if (param_2 < 0x8637bd04b56) {
        uVar11 = 0;
        uVar9 = (ulong)param_3;
        param_3 = param_3 % 4000;
        uVar9 = uVar9 / 4000 + param_2 * 1000000;
        goto LAB_0056f724;
      }
    }
    else {
      if ((param_4 != 0) || (param_5 != 4000000)) {
        if ((0 < (long)param_4) && (param_5 == 0)) {
          if ((long)param_2 < 0) {
            uVar16 = -param_2 - (ulong)(param_3 != 0);
            uVar9 = 0;
            if (param_4 != 0) {
              uVar9 = uVar16 / param_4;
            }
            uVar16 = uVar16 - uVar9 * param_4;
            uVar11 = -uVar16;
            if (param_3 != 0) {
              uVar11 = ~uVar16;
            }
            uVar9 = -uVar9;
          }
          else if (param_4 == 1) {
            uVar11 = 0;
            uVar9 = param_2;
          }
          else {
            uVar9 = 0;
            if (param_4 != 0) {
              uVar9 = param_2 / param_4;
            }
            uVar11 = param_2 - uVar9 * param_4;
          }
          goto LAB_0056f724;
        }
        goto LAB_0056f50c;
      }
      if (param_2 < 0x20c49ba5a64af7) {
        uVar11 = 0;
        uVar9 = (ulong)param_3;
        param_3 = param_3 % 4000000;
        uVar9 = uVar9 / 4000000 + param_2 * 1000;
LAB_0056f724:
        *param_6 = uVar11;
        *(uint *)(param_6 + 1) = param_3;
        return uVar9;
      }
    }
    param_4 = 0;
  }
LAB_0056f50c:
  uVar16 = (long)(param_4 ^ param_2) >> 0x3f;
  uVar9 = (long)param_2 >> 0x3f;
  if ((param_3 == 0xffffffff) || (param_4 == 0 && param_5 == 0)) {
    *param_6 = uVar9 ^ 0x7fffffffffffffff;
    *(undefined4 *)(param_6 + 1) = 0xffffffff;
    return uVar16 ^ 0x7fffffffffffffff;
  }
  if (param_5 == 0xffffffff) {
    *param_6 = param_2;
    *(uint *)(param_6 + 1) = param_3;
    return 0;
  }
  uVar2 = 4000000000 - param_3;
  if (-1 < (long)param_2) {
    uVar2 = param_3;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2 ^ uVar9;
  lVar14 = SUB168(auVar4 * ZEXT816(4000000000),8);
  uVar12 = (param_2 ^ uVar9) * 4000000000;
  uVar11 = uVar12 + uVar2;
  if (CARRY8(uVar12,(ulong)uVar2)) {
    lVar14 = lVar14 + 1;
  }
  uVar2 = 4000000000 - param_5;
  if (-1 < (long)param_4) {
    uVar2 = param_5;
  }
  uVar13 = param_4 ^ (long)param_4 >> 0x3f;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar13;
  lVar15 = SUB168(auVar5 * ZEXT816(4000000000),8);
  uVar13 = uVar13 * 4000000000;
  uVar12 = uVar13 + uVar2;
  if (CARRY8(uVar13,(ulong)uVar2)) {
    lVar15 = lVar15 + 1;
  }
  uVar13 = uVar11;
  lVar10 = lVar14;
  ___udivti3(uVar11,lVar14,uVar12,lVar15);
  uVar16 = uVar16 ^ 0x7fffffffffffffff;
  lVar8 = 0;
  if ((param_1 & (lVar10 != 0 || (long)uVar13 < 0)) == 0) {
    uVar16 = uVar13;
    lVar8 = lVar10;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar16;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar12;
  uVar13 = uVar11 - uVar16 * uVar12;
  uVar11 = lVar14 - (SUB168(auVar6 * auVar7,8) + uVar16 * lVar15 + lVar8 * uVar12 +
                    (ulong)(uVar11 < uVar16 * uVar12));
  if (uVar11 == 0) {
    uVar9 = uVar13 / 4000000000;
  }
  else {
    if (1999999999 < uVar11) {
      *param_6 = uVar9 ^ 0x7fffffffffffffff;
      *(uint *)(param_6 + 1) =
           -(uint)((uVar13 != 0 || uVar11 != 2000000000) || param_2 < 0x8000000000000000);
      goto joined_r0x0056f684;
    }
    uVar9 = uVar13;
    ___udivti3(uVar13,uVar11,4000000000,0);
  }
  iVar3 = (int)uVar13 + (int)uVar9 * 0x1194d800;
  uVar11 = ~uVar9;
  if (iVar3 == 0) {
    uVar11 = -uVar9;
  }
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = -0x1194d800 - iVar3;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    iVar3 = iVar1;
    uVar9 = uVar11;
  }
  *param_6 = uVar9;
  *(int *)(param_6 + 1) = iVar3;
joined_r0x0056f684:
  if (((long)(param_4 ^ param_2) < 0) && (uVar16 != 0 || lVar8 != 0)) {
    uVar16 = -uVar16 | 0x8000000000000000;
  }
  else {
    uVar16 = uVar16 & 0x7fffffffffffffff;
  }
  return uVar16;
}



/* Entry: 0056f74c; end: 0056f7d7;  */

void FUN_0056f74c(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0xffffffff) {
    return;
  }
  if ((ulong)param_3 != 0xffffffff) {
    lVar2 = *param_1;
    *param_1 = lVar2 + param_2;
    if ((long)(4000000000 - (ulong)param_3) <= (long)(ulong)uVar1) {
      *param_1 = *param_1 + 1;
      uVar1 = uVar1 + 0x1194d800;
    }
    *(uint *)(param_1 + 1) = uVar1 + param_3;
    if (param_2 < 0) {
      if (*param_1 <= lVar2) {
        return;
      }
      param_2 = -0x8000000000000000;
    }
    else {
      if (lVar2 <= *param_1) {
        return;
      }
      param_2 = 0x7fffffffffffffff;
    }
    param_3 = 0xffffffff;
  }
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 0056f7d8; end: 0056f9ef;  */

void FUN_0056f7d8(ulong *param_1,ulong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  
  uVar13 = *param_1;
  uVar12 = (uint)param_1[1];
  if (uVar12 == 0xffffffff) {
    *param_1 = (long)(uVar13 ^ param_2) >> 0x3f ^ 0x7fffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    return;
  }
  uVar1 = 4000000000 - uVar12;
  if (-1 < (long)uVar13) {
    uVar1 = uVar12;
  }
  uVar15 = uVar13 ^ (long)uVar13 >> 0x3f;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar15;
  uVar17 = SUB168(auVar3 * ZEXT816(4000000000),8);
  uVar15 = uVar15 * 4000000000;
  uVar14 = uVar15 + uVar1;
  if (CARRY8(uVar15,(ulong)uVar1)) {
    uVar17 = uVar17 + 1;
  }
  uVar16 = param_2 ^ (long)param_2 >> 0x3f;
  uVar15 = -((long)param_2 >> 0x3f);
  uVar10 = uVar16 + uVar15;
  uVar18 = (ulong)CARRY8(uVar16,uVar15);
  if (uVar17 == 0) {
    if ((uVar14 | uVar10) >> 0x20 == 0) {
      uVar14 = uVar14 * uVar10;
LAB_0056f910:
      uVar10 = uVar14 / 4000000000;
      iVar19 = (int)uVar14 + (int)uVar10 * 0x1194d800;
      goto joined_r0x0056f9a0;
    }
  }
  else {
    if (uVar10 == 0 && uVar18 == 0) {
      uVar14 = 0;
      goto LAB_0056f910;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar17;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar10;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar10;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar14;
    if (CARRY8(SUB168(auVar5 * auVar8,8),uVar17 * uVar10 + uVar18 * uVar14) ||
        (SUB168(auVar4 * auVar7,8) != 0 || uVar17 != 0 && CARRY8(uVar16,uVar15))) {
      uVar10 = 0xffffffffffffffff;
      uVar17 = 0xffffffffffffffff;
      goto LAB_0056f9ac;
    }
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar14;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar10;
  uVar17 = SUB168(auVar6 * auVar9,8) + uVar14 * uVar18 + uVar17 * uVar10;
  uVar10 = uVar14 * uVar10;
  iVar19 = (int)uVar10;
  if (uVar17 == 0) {
    uVar10 = uVar10 / 4000000000;
    iVar19 = iVar19 + (int)uVar10 * 0x1194d800;
  }
  else {
    if (1999999999 < uVar17) {
LAB_0056f9ac:
      uVar12 = -((int)((uint)(uVar13 >> 0x20) ^ (uint)(param_2 >> 0x20)) >> 0x1f);
      uVar13 = 0x8000000000000000;
      if (uVar12 == 0) {
        uVar13 = 0x7fffffffffffffff;
      }
      uVar2 = 0;
      if ((uVar12 & (uVar10 == 0 && uVar17 == 2000000000)) == 0) {
        uVar2 = 0xffffffff;
      }
      *param_1 = uVar13;
      *(undefined4 *)(param_1 + 1) = uVar2;
      return;
    }
    ___udivti3(uVar10,uVar17,4000000000,0);
    iVar19 = iVar19 + (int)uVar10 * 0x1194d800;
  }
joined_r0x0056f9a0:
  uVar14 = uVar10;
  iVar11 = iVar19;
  if ((long)(uVar13 ^ param_2) < 0) {
    uVar14 = ~uVar10;
    iVar11 = -0x1194d800 - iVar19;
    if (iVar19 == 0) {
      uVar14 = -uVar10;
      iVar11 = 0;
    }
  }
  *param_1 = uVar14;
  *(int *)(param_1 + 1) = iVar11;
  return;
}



/* Entry: 0056f9f0; end: 0056fbab;  */

void FUN_0056f9f0(undefined8 *param_1,undefined *param_2,ulong param_3,long param_4,ulong param_5,
                 long param_6)

{
  dword *pdVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  while( true ) {
    lVar6 = param_6;
    lVar5 = param_4;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    param_5 = param_5 & 0xffffffff;
    if ((lVar5 == 0x7fffffffffffffff) && (param_5 == 0xffffffff)) {
      *(undefined1 *)((long)param_1 + 0x17) = 0xf;
      *param_1 = 0x6574696e69666e69;
      *(undefined8 *)((long)param_1 + 7) = 0x6572757475662d65;
      *(undefined1 *)((long)param_1 + 0xf) = 0;
      return;
    }
    if ((lVar5 == -0x8000000000000000) && (param_5 == 0xffffffff)) {
      *(undefined1 *)((long)param_1 + 0x17) = 0xd;
      *param_1 = 0x6574696e69666e69;
      *(undefined8 *)((long)param_1 + 5) = 0x747361702d657469;
      *(undefined1 *)((long)param_1 + 0xd) = 0;
      return;
    }
    lVar2 = 0;
    uVar4 = param_3;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    *(long *)((long)register0x00000008 + -0x60) = lVar2 / 1000000 + lVar5;
    *(ulong *)((long)register0x00000008 + -0x58) = param_5 * 250000;
    if (param_3 < 0x7ffffffffffffff7) break;
    FUN_0040d740();
    if (*(char *)((long)register0x00000008 + -0x61) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x78));
    }
    param_4 = lVar2;
    __Unwind_Resume();
    *(ulong *)((long)register0x00000008 + -0xb0) = param_5;
    *(undefined **)((long)register0x00000008 + -0xa8) = param_2;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = param_1;
    *(long *)((long)register0x00000008 + -0x98) = lVar2;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_0056fbac;
    param_6 = param_4;
    FUN_00584088();
    param_5 = uVar4 & 0xffffffff;
    param_2 = &UNK_00811404;
    param_3 = 0x18;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x98);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_1 = extraout_x8;
    unaff_x23 = lVar5;
    unaff_x24 = lVar6;
  }
  if (param_3 < 0x17) {
    *(char *)((long)register0x00000008 + -0x61) = (char)param_3;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x78);
    if (param_3 == 0) goto LAB_0056fb40;
  }
  else {
    pdVar1 = &MACH_HEADER.flags;
    if ((dword *)(param_3 | 7) != (dword *)0x17) {
      pdVar1 = (dword *)(param_3 | 7);
    }
    puVar3 = (undefined1 *)((long)pdVar1 + 1U);
    __Znwm();
    *(ulong *)((long)register0x00000008 + -0x70) = param_3;
    *(ulong *)((long)register0x00000008 + -0x68) = (long)pdVar1 + 1U | 0x8000000000000000;
    *(undefined1 **)((long)register0x00000008 + -0x78) = puVar3;
  }
  _memmove(puVar3,param_2,param_3);
LAB_0056fb40:
  puVar3[param_3] = 0;
  *(long *)((long)register0x00000008 + -0x80) = lVar6;
  FUN_00577508(param_1,(undefined1 *)((long)register0x00000008 + -0x78),
               (undefined1 *)((long)register0x00000008 + -0x60),
               (undefined1 *)((long)register0x00000008 + -0x58),
               (undefined1 *)((long)register0x00000008 + -0x80));
  if (*(char *)((long)register0x00000008 + -0x61) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x78));
  }
  return;
}



/* Entry: 0056fbac; end: 0056fbf7;  */

/* WARNING: Removing unreachable block (ram,0x0056faf8) */
/* WARNING: Removing unreachable block (ram,0x0056fb8c) */
/* WARNING: Removing unreachable block (ram,0x0056fb9c) */
/* WARNING: Removing unreachable block (ram,0x0056fba4) */
/* WARNING: Removing unreachable block (ram,0x0056fb04) */

void FUN_0056fbac(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lStack_80;
  long alStack_78 [4];
  long lStack_58;
  
  lVar2 = param_2;
  FUN_00584088();
  param_3 = param_3 & 0xffffffff;
  if ((param_2 == 0x7fffffffffffffff) && (param_3 == 0xffffffff)) {
    *(undefined1 *)((long)param_1 + 0x17) = 0xf;
    *param_1 = 0x6574696e69666e69;
    *(undefined8 *)((long)param_1 + 7) = 0x6572757475662d65;
    *(undefined1 *)((long)param_1 + 0xf) = 0;
  }
  else if ((param_2 == -0x8000000000000000) && (param_3 == 0xffffffff)) {
    *(undefined1 *)((long)param_1 + 0x17) = 0xd;
    *param_1 = 0x6574696e69666e69;
    *(undefined8 *)((long)param_1 + 5) = 0x747361702d657469;
    *(undefined1 *)((long)param_1 + 0xd) = 0;
  }
  else {
    lVar1 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    alStack_78[3] = lVar1 / 1000000 + param_2;
    lStack_58 = param_3 * 250000;
    lVar1 = 0x20;
    __Znwm();
    alStack_78[1] = 0x18;
    alStack_78[2] = -0x7fffffffffffffe0;
    alStack_78[0] = lVar1;
    _memmove(lVar1,&UNK_00811404,0x18);
    *(undefined1 *)(lVar1 + 0x18) = 0;
    lStack_80 = lVar2;
    FUN_00577508(param_1,alStack_78,alStack_78 + 3,&lStack_58,&lStack_80);
    if (alStack_78[2] < 0) {
      __ZdlPv(alStack_78[0]);
    }
  }
  return;
}


