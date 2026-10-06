/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077578a0; end: 10775792b;  */

undefined8 * FUN_1077578a0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (*(int *)(puVar1 + 6) == 2) {
    func_0x000107743614(param_2,param_3);
    func_0x000100066230();
    func_0x000100066230(unaff_x20 + 3,unaff_x19 + 0x18);
    return unaff_x20;
  }
  func_0x00010756c464();
  uVar3 = param_3[1];
  uVar2 = *param_3;
  puVar1[2] = param_3[2];
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uVar3 = param_3[4];
  uVar2 = param_3[3];
  puVar1[5] = param_3[5];
  puVar1[4] = uVar3;
  puVar1[3] = uVar2;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[3] = 0;
  *(undefined4 *)(puVar1 + 6) = 2;
  return puVar1;
}



/* Entry: 1077589ec; end: 107758b37;  */

long * FUN_1077589ec(undefined4 *param_1,long param_2,undefined8 param_3,long param_4,
                    undefined8 param_5)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 auStack_230 [24];
  undefined8 *puStack_218;
  undefined1 auStack_210 [56];
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [120];
  undefined8 uStack_148;
  long *plStack_f8;
  undefined1 auStack_f0 [56];
  undefined8 uStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_80 [3];
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  func_0x00010775931c();
  alStack_80[0] = 0;
  alStack_80[1] = 0;
  alStack_80[2] = 0;
  uStack_28 = extraout_x8;
  func_0x0001077593c0();
  func_0x0001074d2254(alStack_80,auStack_68);
  func_0x000104c2f714(auStack_68);
  func_0x0001077594d8(*(undefined8 *)(param_2 + 0x48));
  func_0x0001077593c0();
  func_0x000107759350();
  func_0x0001077593b8();
  func_0x0001077594d8(*(undefined8 *)(param_2 + 0x58));
  func_0x0001077593c0();
  func_0x000107759350();
  func_0x0001077593b8();
  func_0x0001077560f4(alStack_80,param_2 + 0x68);
  func_0x0001077560f4(alStack_80,param_2 + 0xa0);
  uVar1 = *(char *)(param_2 + 0x110) == '\x01';
  if ((bool)uVar1) {
    lVar2 = param_2 + 0xd8;
    func_0x00010725ffc4(lVar2);
    func_0x0001077560f4(alStack_80,lVar2);
  }
  func_0x0001077594d8(*(undefined8 *)(param_2 + 0x118));
  func_0x0001077593c0();
  func_0x000107759350();
  func_0x0001077593b8();
  func_0x000107327958(&uStack_90,alStack_80);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uStack_88;
  *(undefined8 *)(param_1 + 2) = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x000104c33108(&uStack_90);
  plVar8 = alStack_80;
  func_0x000107269124();
  func_0x000107759308(uStack_28);
  if ((bool)uVar1) {
    return plVar8;
  }
  ___stack_chk_fail();
  func_0x0001077593b8();
  plVar3 = alStack_80;
  func_0x000107269124();
  func_0x000107759334();
  puStack_98 = &DAT_107758b38;
  plVar4 = plVar3;
  lStack_b0 = param_2;
  plStack_a8 = plVar8;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010775931c();
  uStack_b8 = extraout_x8_00;
  (**(code **)(*plVar4 + 0x40))(auStack_f0);
  plStack_f8 = (long *)0x0;
  func_0x0001073f26dc(&plStack_f8,auStack_f0);
  func_0x00010756af98(&plStack_f8,plVar3 + 9);
  func_0x00010756af98(&plStack_f8,plVar3 + 0xb);
  func_0x0001073f26dc(&plStack_f8,plVar3 + 0xd);
  func_0x0001073f26dc(&plStack_f8,plVar3 + 0x14);
  func_0x000107756258(&plStack_f8,plVar3 + 0x1b);
  plVar3 = plVar3 + 0x23;
  func_0x00010756af98(&plStack_f8);
  plVar8 = plStack_f8;
  func_0x000104c2f714();
  func_0x000107759308(uStack_b8);
  if ((bool)uVar1) {
    return plVar8;
  }
  ___stack_chk_fail();
  puVar5 = auStack_f0;
  func_0x000104c2f714();
  func_0x000107759334();
  puVar6 = puVar5;
  func_0x00010775931c();
  uStack_148 = extraout_x8_01;
  (**(code **)(**(long **)(puVar6 + 0x58) + 0x48))();
  (**(code **)(**(long **)(puVar5 + 0x48) + 0x48))(*(long **)(puVar5 + 0x48),plVar3,param_4,param_5)
  ;
  uVar1 = *(char *)(param_4 + 400) == '\x01';
  if ((bool)uVar1) {
    lVar2 = param_4;
    func_0x00010756ec34(param_4);
    auStack_210[0] = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    puVar7 = (undefined8 *)0x28;
    __Znwm();
    *puVar7 = &PTR_DAT_1109d4e58;
    puVar7[1] = puVar5;
    puVar7[2] = plVar3;
    puVar7[3] = param_4;
    puVar7[4] = param_5;
    puStack_218 = puVar7;
    func_0x000107757aa4(auStack_1c8,puVar5,lVar2,auStack_210,auStack_230);
    func_0x00010727f7f8(auStack_1c0);
    func_0x000107758f48(auStack_230);
    plVar8 = (long *)auStack_210;
    func_0x00010724b3d8(plVar8);
    func_0x000107759308(uStack_148);
    if ((bool)uVar1) {
      return plVar8;
    }
  }
  else {
    plVar8 = *(long **)(puVar5 + 0x118);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar8 + 0x48);
    func_0x000107759308(uStack_148);
    if ((bool)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x000107758d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return plVar8;
    }
  }
  ___stack_chk_fail();
  func_0x0001077594cc();
  func_0x000107758f48();
  plVar8 = (long *)auStack_210;
  func_0x00010724b3d8();
  func_0x000107759334();
  *plVar8 = (long)&PTR_DAT_1109d4cf0;
  func_0x0001072c9b9c(plVar8 + 0x23);
  func_0x00010724b3d8(plVar8 + 0x1b);
  func_0x000104c2f714(plVar8 + 0x14);
  func_0x000104c2f714(plVar8 + 0xd);
  func_0x0001072c9b9c(plVar8 + 0xb);
  func_0x0001072c9b9c(plVar8 + 9);
  *plVar8 = (long)&PTR_FUN_1109d4888;
  func_0x0001001148fc(plVar8 + 5);
  func_0x0001072c9884(plVar8 + 2);
  return plVar8;
}



/* Entry: 107758e7c; end: 107758e83;  */

void FUN_107758e7c(void)

{
  return;
}



/* Entry: 107758fa4; end: 107758fb3;  */

void FUN_107758fa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107758fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107759288; end: 1077592bf;  */

long FUN_107759288(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109d4eb8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10775a90c; end: 10775abe3;  */

undefined1 FUN_10775a90c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(int *)(param_2 + 8) == 0x12) {
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x50);
    if (lVar4 - (long)puVar1 == *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48)) {
      uVar5 = 0;
      do {
        if ((ulong)(lVar4 - (long)puVar1 >> 8) <= uVar5) {
          return 1;
        }
        func_0x00010775abe4(puVar1,lVar4,uVar5);
        puVar2 = *(undefined8 **)(param_2 + 0x48);
        func_0x00010775abe4(puVar2,*(undefined8 *)(param_2 + 0x50),uVar5);
        uVar3 = *puVar1;
        func_0x00010775c270(uVar3,*puVar2);
        if ((int)uVar3 == 0) {
          return 0;
        }
        if (*(char *)(puVar1 + 4) == '\x01') {
          if (*(char *)(puVar2 + 4) != '\x01') {
            return 0;
          }
          uVar3 = puVar1[2];
          func_0x00010775c270(uVar3,puVar2[2]);
          if ((int)uVar3 == 0) {
            return 0;
          }
          if ((*(byte *)(puVar1 + 4) & 1) == 0) goto LAB_10775a9bc;
        }
        else {
LAB_10775a9bc:
          if ((*(byte *)(puVar2 + 4) & 1) != 0) {
            return 0;
          }
        }
        if (*(char *)(puVar1 + 7) == '\x01') {
          if (*(char *)(puVar2 + 7) != '\x01') {
            return 0;
          }
          uVar3 = puVar1[5];
          func_0x00010775c270(uVar3,puVar2[5]);
          if ((int)uVar3 == 0) {
            return 0;
          }
          if ((*(byte *)(puVar1 + 7) & 1) == 0) goto LAB_10775a9f4;
        }
        else {
LAB_10775a9f4:
          if ((*(byte *)(puVar2 + 7) & 1) != 0) {
            return 0;
          }
        }
        if (*(char *)(puVar1 + 10) == '\x01') {
          if (*(char *)(puVar2 + 10) != '\x01') {
            return 0;
          }
          uVar3 = puVar1[8];
          func_0x00010775c270(uVar3,puVar2[8]);
          if ((int)uVar3 == 0) {
            return 0;
          }
          if ((*(byte *)(puVar1 + 10) & 1) == 0) goto LAB_10775aa2c;
        }
        else {
LAB_10775aa2c:
          if ((*(byte *)(puVar2 + 10) & 1) != 0) {
            return 0;
          }
        }
        if (*(char *)(puVar1 + 0xd) == '\x01') {
          if (*(char *)(puVar2 + 0xd) != '\x01') {
            return 0;
          }
          uVar3 = puVar1[0xb];
          func_0x00010775c270(uVar3,puVar2[0xb]);
          if ((int)uVar3 == 0) {
            return 0;
          }
          if ((*(byte *)(puVar1 + 0xd) & 1) == 0) goto LAB_10775aa64;
        }
        else {
LAB_10775aa64:
          if ((*(byte *)(puVar2 + 0xd) & 1) != 0) {
            return 0;
          }
        }
        if (*(char *)(puVar1 + 0x10) == '\x01') {
          if (*(char *)(puVar2 + 0x10) != '\x01') {
            return 0;
          }
          uVar3 = puVar1[0xe];
          func_0x00010775c270(uVar3,puVar2[0xe]);
          if ((int)uVar3 == 0) {
            return 0;
          }
          if ((*(byte *)(puVar1 + 0x10) & 1) == 0) goto LAB_10775aa9c;
        }
        else {
LAB_10775aa9c:
          if ((*(byte *)(puVar2 + 0x10) & 1) != 0) {
            return 0;
          }
        }
        if (*(char *)(puVar1 + 0x13) == '\x01') {
          if (*(char *)(puVar2 + 0x13) != '\x01') {
            return 0;
          }
          uVar3 = puVar1[0x11];
          func_0x00010775c270(uVar3,puVar2[0x11]);
          if ((int)uVar3 == 0) {
            return 0;
          }
          if ((*(byte *)(puVar1 + 0x13) & 1) == 0) goto LAB_10775aad4;
        }
        else {
LAB_10775aad4:
          if ((*(byte *)(puVar2 + 0x13) & 1) != 0) {
            return 0;
          }
        }
        if (*(char *)(puVar1 + 0x16) == '\x01') {
          if (*(char *)(puVar2 + 0x16) != '\x01') {
            return 0;
          }
          uVar3 = puVar1[0x14];
          func_0x00010775c270(uVar3,puVar2[0x14]);
          if ((int)uVar3 == 0) {
            return 0;
          }
          if ((*(byte *)(puVar1 + 0x16) & 1) == 0) goto LAB_10775ab0c;
        }
        else {
LAB_10775ab0c:
          if ((*(byte *)(puVar2 + 0x16) & 1) != 0) {
            return 0;
          }
        }
        if (*(char *)(puVar1 + 0x19) == '\x01') {
          if (*(char *)(puVar2 + 0x19) != '\x01') {
            return 0;
          }
          uVar3 = puVar1[0x17];
          func_0x00010775c270(uVar3,puVar2[0x17]);
          if ((int)uVar3 == 0) {
            return 0;
          }
          if ((*(byte *)(puVar1 + 0x19) & 1) == 0) goto LAB_10775ab44;
        }
        else {
LAB_10775ab44:
          if ((*(byte *)(puVar2 + 0x19) & 1) != 0) {
            return 0;
          }
        }
        if (*(char *)(puVar1 + 0x1c) == '\x01') {
          if (*(char *)(puVar2 + 0x1c) != '\x01') {
            return 0;
          }
          uVar3 = puVar1[0x1a];
          func_0x00010775c270(uVar3,puVar2[0x1a]);
          if ((int)uVar3 == 0) {
            return 0;
          }
          if ((*(byte *)(puVar1 + 0x1c) & 1) == 0) goto LAB_10775ab7c;
        }
        else {
LAB_10775ab7c:
          if ((*(byte *)(puVar2 + 0x1c) & 1) != 0) {
            return 0;
          }
        }
        if (*(char *)(puVar1 + 0x1f) == '\x01') {
          if (*(char *)(puVar2 + 0x1f) != '\x01') {
            return 0;
          }
          uVar3 = puVar1[0x1d];
          func_0x00010775c270(uVar3,puVar2[0x1d]);
          if ((int)uVar3 == 0) {
            return 0;
          }
          if ((*(byte *)(puVar1 + 0x1f) & 1) == 0) goto LAB_10775abb4;
        }
        else {
LAB_10775abb4:
          if ((*(byte *)(puVar2 + 0x1f) & 1) != 0) {
            return 0;
          }
        }
        uVar5 = uVar5 + 1;
        puVar1 = *(undefined8 **)(param_1 + 0x48);
        lVar4 = *(long *)(param_1 + 0x50);
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10775bdc8; end: 10775be2f;  */

ulong * FUN_10775bdc8(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined1 auStack_a0 [112];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  puVar7 = (ulong *)auStack_a0;
  puVar4 = (ulong *)auStack_a0;
  puVar5 = (ulong *)auStack_a0;
  func_0x00010775c2a0(param_1);
  auStack_a0[0] = 0;
  uStack_30 = 0;
  uStack_28 = extraout_x8;
  func_0x0001074d1ee8();
  func_0x000107296ad0();
  func_0x00010775c25c(uStack_28);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x000107296ad0();
  func_0x00010775c370();
  puVar4 = puVar5 + 1;
  uVar9 = *puVar5;
  if ((uVar9 & 1) == 0) {
    uVar10 = 4;
  }
  else {
    puVar4 = (ulong *)puVar5[1];
    uVar10 = puVar5[2];
  }
  if (uVar9 >> 1 != uVar10) {
    uVar10 = puVar7[1];
    uVar11 = *puVar7;
    (puVar4 + (uVar9 >> 1) * 2)[1] = puVar7[1];
    puVar4[(uVar9 >> 1) * 2] = uVar11;
    if (uVar10 != 0) {
      plVar1 = (long *)(uVar10 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar9 = *puVar5;
    }
    *puVar5 = uVar9 + 2;
    return puVar5;
  }
  puVar4 = puVar5 + 1;
  uVar9 = *puVar5;
  if ((uVar9 & 1) == 0) {
    lVar8 = 8;
  }
  else {
    puVar4 = (ulong *)puVar5[1];
    lVar8 = puVar5[2] << 1;
  }
  uStack_f0 = 0;
  uStack_e8 = 0;
  puVar6 = &uStack_f0;
  puStack_f8 = puVar4;
  func_0x0001072c9aa8(puVar6,lVar8);
  uVar9 = uVar9 >> 1;
  puVar6 = puVar6 + uVar9 * 2;
  uVar10 = puVar7[1];
  uVar11 = *puVar7;
  puVar6[1] = puVar7[1];
  *puVar6 = uVar11;
  if (uVar10 != 0) {
    plVar1 = (long *)(uVar10 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001072c9ac8(puVar5,uStack_f0,&puStack_f8,uVar9);
  func_0x0001072c9af4(puVar5,puVar4,uVar9);
  func_0x0001072c9b28(puVar5);
  uVar10 = uStack_e8;
  uVar9 = uStack_f0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  puVar5[1] = uVar9;
  puVar5[2] = uVar10;
  *puVar5 = (*puVar5 | 1) + 2;
  func_0x0001072c9b78(&uStack_f0);
  return puVar6;
}



/* Entry: 10775c0f8; end: 10775c113;  */

void FUN_10775c0f8(long param_1)

{
  func_0x00010726ccd4();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 10775c76c; end: 10775cd6f;  */

/* WARNING: Possible PIC construction at 0x00010775ca24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010775c9c4: Changing call to branch */

void FUN_10775c76c(undefined4 *param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  long *unaff_x20;
  ulong unaff_x22;
  long lVar14;
  ulong uVar15;
  byte bVar16;
  uint6 uVar17;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  undefined8 uVar18;
  byte bVar24;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong *apuStack_108 [2];
  long lStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_90;
  
  func_0x00010775e4c8();
  uStack_90 = extraout_x8;
  func_0x000107269c1c(&lStack_e0);
  lStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  func_0x0001072ac134(&lStack_f8,(param_2[1] - *param_2) / 0x120);
  lVar10 = *param_2;
  lVar9 = param_2[1];
  do {
    uVar3 = lVar10 == lVar9;
    if ((bool)uVar3) {
      func_0x000107327958(&uStack_120,&lStack_f8);
      func_0x0001072684ec(&lStack_e0);
      lVar10 = lStack_e0;
      puVar12 = &DAT_10f34a4b7;
      lVar9 = lStack_e0;
      func_0x00010775e288();
      if (((ulong)puVar12 & 1) != 0) {
        lVar10 = *(long *)(lVar10 + 8) + lVar9 * 0x78;
        func_0x000100060964(lVar10,&DAT_10f34a4b7);
        uVar2 = uStack_118;
        uVar18 = uStack_120;
        uStack_120 = 0;
        uStack_118 = 0;
        *(undefined4 *)(lVar10 + 0x38) = 0;
        *(undefined8 *)(lVar10 + 0x48) = uVar2;
        *(undefined8 *)(lVar10 + 0x40) = uVar18;
        uStack_d0 = 0;
        uStack_c8 = 0;
        func_0x000104c33108(&uStack_d0);
      }
      func_0x000104c33108(&uStack_120);
      uVar18 = uStack_d8;
      lVar10 = lStack_e0;
      lStack_e0 = 0;
      uStack_d8 = 0;
      *param_1 = 1;
      *(undefined8 *)(param_1 + 4) = uVar18;
      *(long *)(param_1 + 2) = lVar10;
      uStack_148 = 0;
      uStack_140 = 0;
      func_0x000104c335c0(&uStack_148);
      func_0x000107269124(&lStack_f8);
      func_0x000104c335c0();
      func_0x00010775e3d8(uStack_90);
      if ((bool)uVar3) {
        return;
      }
      ___stack_chk_fail();
      func_0x000107269124(&lStack_f8);
      func_0x000104c335c0(&lStack_e0);
      func_0x00010775e534();
code_r0x00010775cd70:
      func_0x00010775e4f8();
      lVar10 = *unaff_x20;
      func_0x00010775e124();
      if ((unaff_x22 & 1) != 0) {
        func_0x00010775e4e4();
        *(undefined4 *)(lVar10 + 0x38) = 7;
      }
      func_0x00010775e518();
      return;
    }
    func_0x000107269c1c(apuStack_108);
    func_0x00010775e444();
    puVar7 = apuStack_108[0];
    Hint_Prefetch(*apuStack_108[0],0,2,0);
    puVar4 = apuStack_108[0];
    func_0x0001072cb490(*apuStack_108[0],apuStack_108[0],"text");
    lVar14 = 0;
    uVar15 = *puVar7;
    unaff_x22 = puVar7[2];
    uVar13 = uVar15 >> 0xc ^ (ulong)puVar4 >> 7;
    bVar1 = (byte)puVar4;
    uVar17 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar13 = uVar13 & unaff_x22;
      uVar18 = *(undefined8 *)(uVar15 + uVar13);
      cVar19 = (char)((ulong)uVar18 >> 8);
      cVar20 = (char)((ulong)uVar18 >> 0x10);
      cVar21 = (char)((ulong)uVar18 >> 0x18);
      cVar22 = (char)((ulong)uVar18 >> 0x20);
      cVar23 = (char)((ulong)uVar18 >> 0x28);
      bVar16 = (byte)((ulong)uVar18 >> 0x30);
      bVar24 = (byte)((ulong)uVar18 >> 0x38);
      for (unaff_x20 = (long *)(CONCAT17(-(bVar24 == (bVar1 & 0x7f)),
                                         CONCAT16(-(bVar16 == (bVar1 & 0x7f)),
                                                  CONCAT15(-(cVar23 == (char)(uVar17 >> 0x28)),
                                                           CONCAT14(-(cVar22 ==
                                                                     (char)(uVar17 >> 0x20)),
                                                                    CONCAT13(-(cVar21 ==
                                                                              (char)(uVar17 >> 0x18)
                                                                              ),CONCAT12(-(cVar20 ==
                                                                                          (char)(
                                                  uVar17 >> 0x10)),
                                                  CONCAT11(-(cVar19 == (char)(uVar17 >> 8)),
                                                           -((char)uVar18 == (char)uVar17)))))))) &
                               0x8080808080808080); unaff_x20 != (long *)0x0;
          unaff_x20 = (long *)((long)unaff_x20 - 1U & (ulong)unaff_x20)) {
        uVar11 = ((ulong)unaff_x20 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                 ((ulong)unaff_x20 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        puVar5 = (undefined8 *)
                 (puVar7[1] +
                 (uVar13 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & unaff_x22) *
                 0x78);
        uVar11 = 0;
        func_0x000107278484();
        if (((ulong)puVar5 & 1) != 0) goto LAB_10775c8d4;
      }
      bVar16 = NEON_umaxv(CONCAT17(-(bVar24 == 0x80),
                                   CONCAT16(-(bVar16 == 0x80),
                                            CONCAT15(-(cVar23 == -0x80),
                                                     CONCAT14(-(cVar22 == -0x80),
                                                              CONCAT13(-(cVar21 == -0x80),
                                                                       CONCAT12(-(cVar20 == -0x80),
                                                                                CONCAT11(-(cVar19 ==
                                                                                          -0x80),-((
                                                  char)uVar18 == -0x80)))))))),1);
      if ((bVar16 & 1) != 0) break;
      lVar14 = lVar14 + 8;
      uVar13 = lVar14 + uVar13;
    }
    puVar6 = puVar7;
    func_0x000104c32d08(puVar7,puVar4);
    lVar14 = puVar7[1] + (long)puVar6 * 0x78;
    func_0x000100060964(lVar14,"text");
    func_0x000104c2fe00(&uStack_d0,lVar10);
    uVar11 = 0;
    func_0x000104c33004(lVar14 + 0x38);
    puVar5 = &uStack_d0;
    func_0x000104c2f714();
LAB_10775c8d4:
    if (*(char *)(lVar10 + 0xa8) == '\x01') {
      func_0x00010775e444();
      func_0x00010775e53c();
      if ((uVar11 & 1) != 0) {
        func_0x00010775e50c();
        func_0x00010775e5a8();
        uVar18 = *(undefined8 *)(lVar10 + 0xa0);
        *(undefined4 *)(puVar5 + 7) = 3;
        puVar5[8] = uVar18;
      }
    }
    else {
      func_0x00010775e444();
      func_0x00010775e53c();
      if ((uVar11 & 1) != 0) {
        func_0x00010775e50c();
        func_0x00010775e5a8();
        *(undefined4 *)(puVar5 + 7) = 7;
      }
    }
    if (*(char *)(lVar10 + 0xc0) != '\x01') {
      func_0x00010775e648();
      goto code_r0x00010775cd70;
    }
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010786e848(&uStack_138,lVar10 + 0xb0);
    func_0x00010775e444();
    uVar13 = 0;
    puVar7 = apuStack_108[0];
    func_0x00010775e124(apuStack_108[0]);
    if ((uVar13 & 1) != 0) {
      func_0x00010775e50c();
      func_0x000100060964();
      uStack_c8 = uStack_130;
      uStack_d0 = uStack_138;
      lStack_c0 = lStack_128;
      uStack_130 = 0;
      lStack_128 = 0;
      uStack_138 = 0;
      func_0x000107268798(puVar7 + 7,&uStack_d0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_120);
    if (*(char *)(lVar10 + 0xd8) != '\x01') {
      func_0x00010775e648();
      goto code_r0x00010775cd70;
    }
    func_0x00010785e0a0(&uStack_d0,lVar10 + 200);
    func_0x00010775e444();
    uVar13 = 0;
    func_0x00010775e124(apuStack_108[0]);
    if ((uVar13 & 1) != 0) {
      func_0x00010775e50c();
      func_0x000100060964();
      func_0x00010775e4d8();
    }
    func_0x00010775e54c();
    if (*(char *)(lVar10 + 0x108) == '\x01') {
      func_0x00010785e0a0(&uStack_d0,lVar10 + 0xf8);
      func_0x00010775e444();
      uVar13 = 0;
      func_0x00010775e194(apuStack_108[0]);
      if ((uVar13 & 1) != 0) {
        func_0x00010775e50c();
        func_0x000100060964();
        func_0x00010775e4d8();
      }
      func_0x00010775e54c();
    }
    else {
      func_0x00010775e648();
      func_0x00010775cdbc();
    }
    if (*(char *)(lVar10 + 0x118) == '\x01') {
      func_0x00010775e444();
      uVar13 = 0;
      puVar7 = apuStack_108[0];
      func_0x00010775e194();
      if ((uVar13 & 1) != 0) {
        func_0x00010775e50c();
        func_0x000100060964();
        uVar13 = *(ulong *)(lVar10 + 0x110);
        *(undefined4 *)(puVar7 + 7) = 3;
        puVar7[8] = uVar13;
      }
    }
    else {
      func_0x00010775e648();
      func_0x00010775cdbc();
    }
    if (*(char *)(lVar10 + 0x98) == '\x01') {
      FUN_10775f12c(&uStack_d0,lVar10 + 0x38);
    }
    else {
      uStack_d0 = CONCAT44(uStack_d0._4_4_,7);
    }
    func_0x00010775e444();
    uVar13 = 0;
    func_0x00010775e0c0(apuStack_108[0]);
    if ((uVar13 & 1) != 0) {
      func_0x00010775e50c();
      func_0x000100060964();
      func_0x00010775e4d8();
    }
    func_0x00010775e54c();
    uVar13 = uStack_f0;
    if (uStack_f0 < uStack_e8) {
      func_0x00010775e23c(uStack_f0,apuStack_108);
      uVar13 = uVar13 + 0x40;
    }
    else {
      plVar8 = &lStack_f8;
      func_0x000107289660(plVar8,((long)(uStack_f0 - lStack_f8) >> 6) + 1);
      func_0x000107289720(&uStack_d0,plVar8,(long)(uStack_f0 - lStack_f8) >> 6,&uStack_e8);
      func_0x00010775e23c(lStack_c0,apuStack_108);
      lStack_c0 = lStack_c0 + 0x40;
      func_0x0001072896a0(&lStack_f8,&uStack_d0);
      uVar13 = uStack_f0;
      func_0x000107289820(&uStack_d0);
    }
    uStack_f0 = uVar13;
    func_0x000104c335c0(apuStack_108);
    lVar10 = lVar10 + 0x120;
  } while( true );
}



/* Entry: 10775df28; end: 10775e057;  */

undefined1 *
FUN_10775df28(undefined1 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,ushort *param_7,ushort *param_8,ushort *param_9
             ,ushort *param_10,undefined8 *param_11,undefined8 *param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined1 uStack_151;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [56];
  undefined8 uStack_68;
  
  func_0x00010775e4c8();
  uStack_68 = extraout_x8;
  func_0x000104c318bc(auStack_a0);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  func_0x000107278b0c(auStack_b8,param_4);
  uStack_c8 = param_5[1];
  uStack_d0 = *param_5;
  uStack_c0 = *(undefined4 *)(param_5 + 2);
  uStack_130 = (ulong)*param_7;
  uStack_128 = (ulong)*param_8;
  uStack_120 = (ulong)*param_9;
  uStack_118 = (ulong)*param_10;
  uStack_e8 = param_11[1];
  uStack_f0 = *param_11;
  uStack_e0 = *(undefined4 *)(param_11 + 2);
  uStack_108 = *param_12;
  uStack_100 = param_12[1];
  puStack_110 = &uStack_f0;
  func_0x000107545044(param_1,auStack_a0,uVar1,uVar2,auStack_b8,&uStack_d0,*param_6,param_6[1]);
  func_0x00010726b07c(auStack_b8);
  puVar3 = auStack_a0;
  func_0x000104c2f714();
  func_0x00010775e3d8(uStack_68);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010726b07c(auStack_b8);
  func_0x000104c2f714(auStack_a0);
  func_0x00010775e534();
  puStack_138 = &UNK_10775e058;
  puVar4 = &uStack_151;
  uStack_150 = uVar1;
  puStack_148 = puVar3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010775f590(puVar4);
  func_0x00010775e458();
  return puVar4;
}



/* Entry: 10775e2ec; end: 10775e66b;  */

bool FUN_10775e2ec(undefined8 *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010727a3f0(param_2,*param_1,param_2 + 0x38);
  _strlen();
  func_0x00010014c53c();
  func_0x00010014c2bc();
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  iVar1 = (int)&stack0xffffffffffffffe0;
  if (unaff_x21 == unaff_x19) {
    func_0x000100067218(&stack0xffffffffffffffe0,unaff_x20,unaff_x19);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10775ecfc; end: 10775ed0f;  */

void FUN_10775ecfc(void)

{
  func_0x00010775ed88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10775eec8; end: 10775eed7;  */

void FUN_10775eec8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d5038;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10775f12c; end: 10775f38b;  */

void FUN_10775f12c(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 *unaff_x19;
  long *plVar7;
  long lVar8;
  undefined1 uStack_3b1;
  undefined1 **ppuStack_3b0;
  undefined *puStack_3a8;
  undefined1 auStack_398 [56];
  undefined1 auStack_360 [56];
  long lStack_328;
  undefined1 auStack_320 [88];
  undefined1 auStack_2c8 [56];
  byte bStack_290;
  long lStack_288;
  undefined1 auStack_280 [8];
  undefined8 uStack_278;
  undefined1 *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [29];
  undefined1 uStack_1fb;
  undefined1 uStack_1fa;
  undefined1 uStack_1f9;
  long alStack_1f8 [4];
  undefined1 auStack_1d8 [24];
  long *plStack_1c0;
  undefined1 auStack_1b8 [56];
  undefined1 auStack_180 [56];
  undefined1 auStack_148 [56];
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [56];
  undefined4 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_58;
  
  puVar2 = &uStack_230;
  func_0x00010775f634();
  uStack_58 = extraout_x8;
  func_0x000100060964(auStack_180,&DAT_10f68f148);
  func_0x00010735d778(auStack_148,auStack_180,param_1);
  func_0x000100060964(auStack_1b8,&DAT_10f3682ba);
  func_0x000104c318bc(auStack_d0,auStack_1b8);
  uStack_90 = *(undefined1 *)(param_1 + 0x38);
  uStack_98 = 6;
  puVar4 = &uStack_1f9;
  func_0x000107268194(alStack_1f8,2,puVar4,&uStack_1fa,&uStack_1fb);
  for (lVar8 = 0; lVar8 != 0xf0; lVar8 = lVar8 + 0x78) {
    puVar4 = auStack_110 + lVar8;
    plStack_1c0 = alStack_1f8;
    func_0x000107268220(auStack_1d8,&plStack_1c0);
  }
  lVar8 = 0x78;
  do {
    func_0x000104c32ad0(auStack_148 + lVar8);
    lVar8 = lVar8 + -0x78;
  } while (lVar8 != -0x78);
  func_0x000104c2f714(auStack_1b8);
  func_0x00010775f604();
  uVar1 = *(char *)(param_1 + 0x58) == '\x01';
  if ((bool)uVar1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_218,param_1 + 0x40);
    func_0x000107268798(auStack_148,auStack_218);
    func_0x000100060964(auStack_180,&UNK_10f63898c);
    func_0x000107267f10(alStack_1f8,auStack_180);
    func_0x000104c3302c();
    func_0x00010775f604();
    func_0x000104c3323c(auStack_148);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_218);
  }
  plVar5 = alStack_1f8;
  func_0x000104c33260(&uStack_230);
  *unaff_x19 = 1;
  *(undefined8 *)(unaff_x19 + 4) = uStack_228;
  *(undefined8 *)(unaff_x19 + 2) = uStack_230;
  uStack_230 = 0;
  uStack_228 = 0;
  func_0x000104c335c0();
  func_0x00010775f60c();
  func_0x00010775f5b0(uStack_58);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010775f604();
  func_0x000104c3323c(auStack_148);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_218);
  func_0x00010775f60c();
  func_0x00010775f5dc();
  puStack_238 = &UNK_10775f38c;
  plVar6 = plVar5;
  puStack_240 = &stack0xfffffffffffffff0;
  func_0x00010775f634();
  plVar7 = plVar6 + 1;
  plVar3 = plVar7;
  uStack_278 = extraout_x8_00;
  (**(code **)(*plVar6 + 0x18))();
  if ((int)plVar3 == 0) {
    (**(code **)(*plVar5 + 0x68))(auStack_2c8,plVar7);
    uVar1 = bStack_290 == 1;
    if ((bool)uVar1) {
      func_0x000104c2fe00(auStack_398,auStack_2c8);
      func_0x00010775f62c(&lStack_328,auStack_398);
      func_0x00010775f614();
      func_0x00010726b164(&lStack_328);
      func_0x000104c2f714(auStack_398);
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (puVar4,&UNK_10f4260a7);
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 0x60) = 0;
    }
    func_0x00010775f5f4();
  }
  else {
    (**(code **)(*plVar5 + 0x28))(&lStack_288,plVar7,0);
    puVar4 = auStack_280;
    (**(code **)(lStack_288 + 0x20))();
    if (puVar4 == (undefined1 *)0x0) {
      func_0x00010775f5e4();
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 0x60) = 0;
    }
    else {
      (**(code **)(lStack_288 + 0x28))(&lStack_328,auStack_280,0);
      (**(code **)(lStack_328 + 0x68))(auStack_2c8,auStack_320);
      func_0x0001072f5f6c(&lStack_328);
      if ((bStack_290 & 1) == 0) {
        func_0x00010775f5e4();
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x60) = 0;
      }
      else {
        func_0x000104c2fe00(auStack_360,auStack_2c8);
        func_0x00010775f62c(&lStack_328,auStack_360);
        func_0x00010775f614();
        func_0x00010726b164(&lStack_328);
        func_0x000104c2f714(auStack_360);
      }
      func_0x00010775f5f4();
    }
    func_0x0001072f5f6c(&lStack_288);
  }
  func_0x00010775f5b0(uStack_278);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010775f5f4();
  func_0x0001072f5f6c(&lStack_288);
  func_0x00010775f5dc();
  puStack_3a8 = &UNK_10775f590;
  ppuStack_3b0 = &puStack_240;
  func_0x00010726364c(&uStack_3b1);
  return;
}



/* Entry: 10775f8a8; end: 10775faef;  */

long * FUN_10775f8a8(long *param_1,long *param_2,undefined8 *param_3,long param_4)

{
  undefined3 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  uint5 *puVar7;
  long lVar8;
  undefined8 extraout_x8;
  uint5 auStack_e8 [2];
  undefined1 auStack_d8 [8];
  undefined4 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte bStack_b0;
  long alStack_a8 [3];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  uint5 auStack_60 [2];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  plVar5 = param_2;
  func_0x000107760a20();
  plVar6 = plVar5 + 1;
  uStack_48 = extraout_x8;
  (**(code **)(*plVar5 + 0x20))();
  uVar4 = plVar6 == (long *)0x1;
  if (plVar6 < (long *)0x2) {
    func_0x00010002b838(alStack_a8,&UNK_10f4260d1);
    plVar5 = alStack_a8;
    func_0x00010756a668(param_3);
    plVar6 = alStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    (**(code **)(*param_2 + 0x28))(alStack_70,plVar5 + 1,1);
    uStack_d0 = 0xb;
    uStack_c8 = 1;
    uVar1 = SUB83((undefined8)auStack_60[0],5);
    uVar2 = (uint)(undefined8)auStack_60[0];
    auStack_60[0] = (uint5)(uVar2 & 0xffffff00);
    auStack_60[0]._0_8_ = CONCAT35(uVar1,auStack_60[0]);
    plVar5 = alStack_70;
    func_0x00010777067c(&uStack_c0,param_3,plVar5,1,param_4,auStack_d8,auStack_60);
    func_0x0001072c9854(auStack_d8);
    if ((bStack_b0 & 1) == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      uVar4 = *(char *)((long)param_3 + 0x51) == '\x01';
      if ((bool)uVar4) {
        func_0x000107547b68(auStack_60,1);
        puVar3 = puStack_50;
        uStack_78 = uStack_b8;
        uStack_80 = uStack_c0;
        puStack_50[2] = 0;
        *puStack_50 = &PTR_DAT_1109ba830;
        puStack_50[1] = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        func_0x00010775f830(puStack_50 + 3,&uStack_80);
        func_0x0001072c9b9c(&uStack_80);
        plVar5 = (long *)(param_4 + 0x40);
        func_0x0001002a8234(puVar3 + 8);
        func_0x0001072c9b9c(&uStack_90);
        puVar3 = puStack_50;
        puStack_50 = (undefined8 *)0x0;
        param_3 = puVar3 + 3;
        func_0x000107547c78(auStack_60);
        *param_1 = (long)param_3;
        param_1[1] = (long)puVar3;
        auStack_e8[0]._0_8_ = 0;
        auStack_e8[1]._0_8_ = 0;
        *(undefined1 *)(param_1 + 2) = 1;
        puVar7 = auStack_e8;
      }
      else {
        func_0x000107547ae0(auStack_60,&uStack_c0);
        param_1[1] = (undefined8)auStack_60[1];
        *param_1 = (undefined8)auStack_60[0];
        auStack_60[0]._0_8_ = 0;
        auStack_60[1]._0_8_ = 0;
        *(undefined1 *)(param_1 + 2) = 1;
        puVar7 = auStack_60;
      }
      func_0x000107547c88(puVar7);
    }
    func_0x0001072c95d0(&uStack_c0);
    plVar6 = alStack_70;
    func_0x0001072f5f6c();
  }
  func_0x0001077609c8(uStack_48);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x000107547c54(param_3 + 3);
    func_0x0001072c9b9c(&uStack_90);
    __ZNSt3__119__shared_weak_countD2Ev(param_3);
    func_0x000107547c78(auStack_60);
    func_0x0001072c95d0(&uStack_c0);
    plVar6 = alStack_70;
    func_0x0001072f5f6c();
    func_0x000107760a74();
    plVar5 = (long *)plVar5[3];
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x30))();
      return plVar5;
    }
    func_0x000104bfeb48(0,plVar6[9]);
    plVar6 = (long *)plVar5[3];
    if (plVar6 == plVar5) {
      lVar8 = 0x20;
    }
    else {
      if (plVar6 == (long *)0x0) {
        return plVar5;
      }
      lVar8 = 0x28;
    }
    (**(code **)(*plVar6 + lVar8))();
    return plVar5;
  }
  return plVar6;
}



/* Entry: 107760184; end: 1077601df;  */

void FUN_107760184(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 auStack_a0 [112];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107760a0c(param_1);
  auStack_a0[0] = 0;
  uStack_30 = 0;
  func_0x0001074d1ee8();
  func_0x000107296ad0(auStack_a0);
  func_0x0001077609c8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107296ad0(auStack_a0);
  func_0x000107760a74();
  return;
}



/* Entry: 1077602b0; end: 107760607;  */

void FUN_1077602b0(undefined1 *param_1,long *param_2)

{
  long lVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  undefined8 extraout_x8;
  long *plVar7;
  undefined1 auStack_2c8 [16];
  undefined4 uStack_2b8;
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [56];
  undefined1 uStack_268;
  undefined8 uStack_260;
  undefined **ppuStack_258;
  undefined1 *apuStack_250 [2];
  undefined ***pppuStack_240;
  int iStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [392];
  undefined8 uStack_48;
  
  puVar4 = param_1;
  plVar7 = param_2;
  func_0x000107760a20();
  lVar1 = *(long *)(puVar4 + 8);
  uVar2 = **(ushort **)(puVar4 + 0x10);
  uStack_48 = extraout_x8;
  if ((int)plVar7[1] == 1) {
    (**(code **)(*param_2 + 0x40))(auStack_1d8,param_2);
    puVar5 = auStack_1d8;
    func_0x000107278484(puVar5,&UNK_10f426105);
    puVar4 = puVar5;
    func_0x000107760b10();
    if ((int)puVar5 != 0) {
      uStack_2b8 = 0;
      uVar3 = *(char *)(lVar1 + 400) == '\x01';
      if (!(bool)uVar3) goto LAB_1077604d4;
      func_0x000107760b18();
      if (*(long *)(puVar4 + 0x100) == 0) goto LAB_1077604d4;
      func_0x000107760b18();
      func_0x000104c2fe00(auStack_1d8,0x1138369c0);
      ppuStack_258 = &PTR_DAT_1109d5200;
      pppuStack_240 = &ppuStack_258;
      apuStack_250[0] = auStack_1d8;
      (**(code **)(*param_2 + 0x10))(param_2,&ppuStack_258);
      func_0x00010745df78(&ppuStack_258);
      plVar7 = *(long **)(puVar4 + 0x100);
      puVar4 = auStack_1d8;
      func_0x00010724ef84(auStack_2a0,puVar4);
      func_0x000107760b18();
      (**(code **)(*plVar7 + 0x18))(&ppuStack_258,plVar7,auStack_2a0,puVar4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a0);
      pppuVar6 = &ppuStack_258;
      func_0x000107278484(pppuVar6,"");
      if ((int)pppuVar6 == 0) {
        pppuVar6 = &ppuStack_258;
        func_0x000107760764(pppuVar6,lVar1);
        if (((ulong)pppuVar6 & 1) != 0) goto LAB_107760414;
        func_0x000104c2fe00(auStack_2a0,&ppuStack_258);
        func_0x0001077509b8(auStack_2b0,auStack_2a0,1);
        func_0x000107473abc(auStack_2c8,auStack_2b0);
        func_0x0001073e0028(auStack_2b0);
        func_0x000104c2f714(auStack_2a0);
      }
      else {
LAB_107760414:
        func_0x000107473aec(auStack_2c8,auStack_2a0);
      }
      func_0x000104c2f714(&ppuStack_258);
      func_0x000107760b10();
      goto LAB_1077604d4;
    }
  }
  else {
    uVar3 = (int)plVar7[1] == 2;
    if ((bool)uVar3) {
      func_0x0001072786d8(auStack_1d0,param_2 + 10);
      func_0x00010776063c(auStack_2c8,auStack_1d8,lVar1);
      func_0x00010726af18(auStack_1d0);
      goto LAB_1077604d4;
    }
  }
  uVar3 = *(char *)(lVar1 + 400) == '\x01';
  if ((bool)uVar3) {
    func_0x000107760b18();
    func_0x000107751334(auStack_1d8,puVar4);
  }
  else {
    func_0x000107751284(auStack_1d8);
  }
  if (((uVar2 >> 8 & 1) == 0) || (((uVar2 ^ *(byte *)(param_2 + 4)) & 1) == 0)) {
    auStack_2a0[0] = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    func_0x000107753050(&ppuStack_258,param_2,auStack_1d8,auStack_2a0);
    func_0x00010724b3d8(auStack_2a0);
    uVar3 = iStack_1e0 == 1;
    if ((bool)uVar3) {
      pppuVar6 = &ppuStack_258;
      func_0x0001073405dc(pppuVar6);
      func_0x00010776063c(auStack_2c8,pppuVar6,lVar1);
    }
    else {
      uStack_2b8 = 0;
    }
    func_0x00010727f7f8(apuStack_250);
  }
  else {
    uStack_2b8 = 1;
  }
  func_0x000107267da8(auStack_1d8);
LAB_1077604d4:
  func_0x00010774a39c(auStack_2c8,*(undefined8 *)(param_1 + 0x18));
  func_0x0001073ebb78();
  func_0x0001077609c8(uStack_48);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_2a0);
  func_0x000104c2f714(&ppuStack_258);
  func_0x000107760b10();
  func_0x0001073ebb78(auStack_2c8);
  func_0x000107760a74();
  func_0x000107760b74();
  func_0x000107760b08();
  func_0x000107760af0();
  return;
}



/* Entry: 107760864; end: 1077608ef;  */

void FUN_107760864(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x20;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [96];
  int iStack_30;
  undefined8 uStack_28;
  
  func_0x000107760a0c();
  uVar1 = 0;
  if (*(int *)(param_2 + 8) == 2) {
    unaff_x20 = auStack_98;
    func_0x0001072786d8(auStack_90,param_2 + 0x50);
    uVar1 = iStack_30 == 3;
    if ((bool)uVar1) {
      puVar2 = auStack_98;
      func_0x000107573ddc(puVar2);
      func_0x000107262f3c(*(undefined8 *)(param_1 + 8),puVar2);
    }
    func_0x00010726af18();
  }
  func_0x0001077609c8(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x20 + 8);
  func_0x000107760a74();
  func_0x000107760b74();
  func_0x000107760b08();
  func_0x000107760af0();
  return;
}



/* Entry: 107760da4; end: 107760ddb;  */

undefined8 * FUN_107760da4(undefined8 *param_1)

{
  func_0x000107261dac(param_1 + 0xd);
  func_0x0001072c9b9c(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_FUN_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107761858; end: 10776186b;  */

void FUN_107761858(void)

{
  FUN_107760da4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107761940; end: 107761a4b;  */

void FUN_107761940(void)

{
  return;
}



/* Entry: 1077622e4; end: 1077622fb;  */

void FUN_1077622e4(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001077622f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1077638fc; end: 107763a7f;  */

undefined8 *
FUN_1077638fc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
             undefined8 *param_5)

{
  uint6 uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined4 uStack_70;
  ushort uStack_6c;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  func_0x0001072c9ff4(auStack_60);
  lVar2 = *param_4;
  uVar1 = *(uint6 *)(lVar2 + 0x20);
  if ((uVar1 >> 0x28 & 1) == 0) {
    func_0x0001077641e4();
    uStack_6c = 0x100;
    if ((int)lVar2 == 0) {
      uStack_6c = 0;
    }
  }
  else {
    uStack_6c = 0x100;
  }
  uVar4 = (ulong)uVar1 & 0xffffffffff;
  uStack_6c = uStack_6c | (ushort)(uVar4 >> 0x20);
  uStack_70 = (undefined4)uVar4;
  uStack_48 = 0x1010101;
  uStack_44 = 1;
  puVar5 = (undefined8 *)*param_5;
  while (puVar5 != param_5 + 1) {
    uStack_50 = *(undefined4 *)(puVar5[5] + 0x20);
    uStack_4c = *(undefined2 *)(puVar5[5] + 0x24);
    puVar3 = &uStack_48;
    func_0x0001075457c8(puVar3,&uStack_50);
    uStack_48 = SUB84(puVar3,0);
    uStack_44 = (undefined2)((ulong)puVar3 >> 0x20);
    func_0x00010002c7d4();
  }
  uStack_74 = uStack_44;
  uStack_78 = uStack_48;
  puVar3 = &uStack_70;
  func_0x0001075457c8(puVar3,&uStack_78);
  uStack_68 = SUB84(puVar3,0);
  uStack_64 = (undefined2)((ulong)puVar3 >> 0x20);
  func_0x0001072c9f9c(param_1,4,auStack_60,&uStack_68);
  func_0x0001072c9884(auStack_60);
  *param_1 = &PTR_DAT_1109d54d0;
  uVar7 = param_3[1];
  uVar6 = *param_3;
  uVar9 = param_3[3];
  uVar8 = param_3[2];
  uVar11 = param_3[5];
  uVar10 = param_3[4];
  param_1[0xf] = param_3[6];
  param_1[0xe] = uVar11;
  param_1[0xd] = uVar10;
  param_1[0xc] = uVar9;
  param_1[0xb] = uVar8;
  param_1[10] = uVar7;
  param_1[9] = uVar6;
  lVar2 = *param_4;
  param_1[0x11] = param_4[1];
  param_1[0x10] = lVar2;
  *param_4 = 0;
  param_4[1] = 0;
  func_0x000107545f9c(param_1 + 0x12,param_5);
  return param_1;
}



/* Entry: 1077641d4; end: 1077641e3;  */

long FUN_1077641d4(long param_1)

{
  func_0x000100060934(param_1,&DAT_10f41e1ae);
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 1077643f0; end: 107764403;  */

void FUN_1077643f0(void)

{
  func_0x000107763aec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107764984; end: 1077649b7;  */

double FUN_107764984(double param_1,double *param_2,double *param_3)

{
  float fVar1;
  
  fVar1 = (float)*param_2;
  func_0x000107874ea8(fVar1,(float)*param_3,(float)param_3[1],(float)param_1);
  return (double)fVar1;
}



/* Entry: 107764b08; end: 107764b1b;  */

void FUN_107764b08(void)

{
  func_0x000107764fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107765014; end: 10776506b;  */

void FUN_107765014(void)

{
  long extraout_x11;
  undefined8 *unaff_x19;
  
  func_0x000107765b00();
  if (extraout_x11 != 0) {
    func_0x000107765ef8();
  }
  func_0x000107765be0();
  func_0x000107765de8();
  func_0x000107765de0();
  *unaff_x19 = &PTR_DAT_1109d5690;
  return;
}



/* Entry: 107765630; end: 107765657;  */

long FUN_107765630(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107765824; end: 107765833;  */

void FUN_107765824(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107765f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1077659a0; end: 1077659eb;  */

undefined4 * FUN_1077659a0(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 2);
  if (puVar1 < *(undefined4 **)(param_1 + 4)) {
    uVar2 = *param_2;
    *puVar1 = 3;
    *(undefined8 *)(puVar1 + 2) = uVar2;
    puVar1 = puVar1 + 0x10;
  }
  else {
    puVar1 = param_1;
    func_0x0001077659ec();
  }
  *(undefined4 **)(param_1 + 2) = puVar1;
  return puVar1 + -0x10;
}



/* Entry: 107766790; end: 107766793;  */

undefined8 * FUN_107766790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d58b0;
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_FUN_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10776696c; end: 107766abf;  */

void FUN_10776696c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puStack_240;
  undefined1 *puStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined1 auStack_1e0 [280];
  undefined1 auStack_c8 [120];
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010776884c(param_1,param_1);
  uStack_200 = *(undefined8 *)(param_1 + 0x118);
  lStack_1f8 = *(long *)(param_1 + 0x120);
  uStack_38 = extraout_x8;
  if (lStack_1f8 != 0) {
    do {
      func_0x0001077688e4();
    } while (extraout_w10 != 0);
  }
  func_0x000107751334(auStack_1e0);
  func_0x0001075796ac(auStack_50,1);
  puVar1 = puStack_40;
  puStack_40[2] = 0;
  *puStack_40 = &PTR_DAT_1109d0c88;
  puStack_40[1] = 0;
  lStack_1e8 = lStack_1f8;
  uStack_1f0 = uStack_200;
  if (lStack_1f8 != 0) {
    do {
      func_0x0001077688e4();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001075797c0(puVar1 + 3,param_2,&uStack_1f0);
  func_0x000107267e68(&uStack_1f0);
  puStack_208 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  puStack_210 = puStack_208 + 3;
  func_0x000107579a38(auStack_50);
  FUN_10757945c(auStack_c8,&puStack_210);
  func_0x000107267e68(&puStack_210);
  puVar4 = auStack_1e0;
  func_0x0001073ebfe0(param_3);
  func_0x000107267da8(auStack_1e0);
  puVar1 = &uStack_200;
  func_0x000107267e68();
  func_0x000107768838(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107267da8(auStack_1e0);
  puVar2 = &uStack_200;
  func_0x000107267e68();
  func_0x00010776886c();
  puStack_218 = &DAT_107766ac0;
  puVar3 = puVar2 + 9;
  puVar5 = puVar4;
  uStack_230 = param_2;
  puStack_228 = puVar1;
  puStack_220 = &stack0xfffffffffffffff0;
  func_0x000107375ad0();
  puStack_240 = puVar3;
  puStack_238 = puVar5;
  while (puStack_240 != (undefined8 *)0x0) {
    func_0x00010745df58(puVar4,*(undefined8 *)(puStack_238 + 0x38));
    func_0x000107375b30(&puStack_240);
  }
  func_0x00010745df58(puVar4,puVar2[0xd]);
  return;
}



/* Entry: 107767450; end: 10776767f;  */

void FUN_107767450(long param_1,long param_2,undefined1 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  long *plVar4;
  ulong uVar5;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long lStack_250;
  undefined **ppuStack_248;
  long lStack_240;
  undefined1 *puStack_238;
  undefined ***pppuStack_230;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [104];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [112];
  int iStack_140;
  undefined1 auStack_138 [72];
  byte bStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [112];
  int iStack_70;
  undefined8 uStack_68;
  
  puVar3 = param_3;
  func_0x00010776884c();
  lVar2 = *(long *)(puVar3 + 0x118);
  lStack_250 = *(long *)(puVar3 + 0x120);
  lStack_258 = lVar2;
  uStack_68 = extraout_x8;
  if (lStack_250 != 0) {
    do {
      func_0x0001077688e4();
    } while (extraout_w10 != 0);
    lVar2 = *(long *)(param_3 + 0x118);
  }
  if (lVar2 == 0) {
    auStack_138[0] = 0;
    bStack_f0 = 0;
  }
  else {
    func_0x00010757e69c(auStack_138,lVar2,param_2 + 0x48);
    if ((bStack_f0 & 1) != 0) {
      func_0x0001077510ac(auStack_1b8,auStack_138,param_3,param_4);
      in_ZR = iStack_140 == 1;
      if ((bool)in_ZR) {
        uStack_270 = 0;
        uStack_268 = 0;
        uStack_260 = 0;
        plVar4 = (long *)(param_2 + 0x98);
        if ((*(ulong *)(param_2 + 0x90) & 1) != 0) {
          plVar4 = (long *)*plVar4;
        }
        uVar1 = *(ulong *)(param_2 + 0x90) & 0x1ffffffffffffffe;
        uVar5 = uVar1 << 3;
        while (uVar1 != 0) {
          func_0x000107753050(auStack_e8,*plVar4,param_3,param_4);
          if (iStack_70 != 0) {
            puVar3 = auStack_e8;
            func_0x0001073405dc(puVar3);
            func_0x00010758ee8c(&uStack_270,puVar3);
          }
          func_0x00010727f7f8(auStack_e0);
          plVar4 = plVar4 + 2;
          uVar5 = uVar5 - 0x10;
          uVar1 = uVar5;
        }
        func_0x0001073405dc(auStack_1b8);
        ppuStack_248 = &PTR_DAT_1109d5c48;
        pppuStack_230 = &ppuStack_248;
        lStack_240 = param_2;
        puStack_238 = param_3;
        func_0x00010773021c(auStack_e8);
        param_3 = auStack_e8;
        func_0x0001077301bc(auStack_228,auStack_e8);
        func_0x0001074b0ce4(param_1,auStack_228);
        func_0x00010726af18(auStack_220);
        func_0x0001077309b4(auStack_e0);
        func_0x000107730a04(&ppuStack_248);
        func_0x000107277d70(&uStack_270);
      }
      else {
        func_0x00010756c040(param_1 + 8,auStack_1b0);
      }
      func_0x000107768a2c();
      goto LAB_1077675ec;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 1;
LAB_1077675ec:
  func_0x00010757e8a0(auStack_138);
  func_0x000107267e68(&lStack_258);
  func_0x000107768838(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077309b4(param_3 + 8);
  func_0x000107730a04(&ppuStack_248);
  func_0x000107277d70(&uStack_270);
  func_0x000107768a2c();
  func_0x00010757e8a0(auStack_138);
  func_0x000107267e68(&lStack_258);
  func_0x00010776886c();
  return;
}



/* Entry: 107768078; end: 1077680b3;  */

long * FUN_107768078(long param_1,long param_2)

{
  long *plVar1;
  
  if (*(int *)(param_2 + 8) == 8) {
    plVar1 = *(long **)(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x000107768094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 0x68));
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 107768190; end: 107768217;  */

undefined8 * FUN_107768190(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d5988;
  func_0x0001072c9b9c(param_1 + 0xd);
  func_0x0001072c9500(param_1 + 9);
  *param_1 = &PTR_FUN_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077683b0; end: 10776842f;  */

ulong FUN_1077683b0(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  long lStack_28;
  long lStack_20;
  undefined4 uStack_18;
  undefined2 uStack_14;
  
  uStack_18 = 0x1010101;
  uStack_14 = 1;
  func_0x000107375ad0();
  lStack_28 = param_1;
  lStack_20 = param_2;
  while (lStack_28 != 0) {
    uStack_30 = *(undefined4 *)(*(long *)(lStack_20 + 0x38) + 0x20);
    uStack_2c = *(undefined2 *)(*(long *)(lStack_20 + 0x38) + 0x24);
    puVar1 = &uStack_18;
    func_0x0001075457c8(puVar1,&uStack_30);
    uStack_18 = SUB84(puVar1,0);
    uStack_14 = (undefined2)((ulong)puVar1 >> 0x20);
    func_0x000107375b30(&lStack_28);
  }
  return (ulong)CONCAT24(uStack_14,uStack_18);
}



/* Entry: 1077684fc; end: 10776852b;  */

void FUN_1077684fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077688f4();
  func_0x000107768978(&PTR_DAT_1109d5bc8);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 107768704; end: 10776872b;  */

void FUN_107768704(undefined8 param_1)

{
  func_0x000107768a70();
  func_0x000107768970(param_1,&PTR_DAT_1109d5ca8);
  func_0x000107768988();
  return;
}



/* Entry: 107768a7c; end: 107768e6b;  */

/* WARNING: Removing unreachable block (ram,0x000107769388) */

undefined ** FUN_107768a7c(undefined **param_1,undefined **param_2,undefined8 param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined4 *extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 unaff_x27;
  ulong unaff_x28;
  undefined *puVar14;
  undefined **ppuStack_4b8;
  undefined *apuStack_4b0 [7];
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined **ppuStack_468;
  undefined1 ***pppuStack_460;
  undefined *puStack_458;
  undefined1 uStack_441;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 auStack_428 [72];
  undefined *apuStack_3e0 [7];
  undefined *apuStack_3a8 [8];
  undefined1 auStack_368 [64];
  undefined8 uStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined1 **ppuStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [8];
  uint uStack_2d8;
  long lStack_2d0;
  char cStack_2c8;
  undefined1 auStack_2c0 [24];
  undefined *apuStack_2a8 [3];
  undefined1 auStack_290 [16];
  undefined *puStack_280;
  undefined8 uStack_278;
  char cStack_270;
  undefined7 uStack_26f;
  char cStack_268;
  undefined *apuStack_258 [13];
  uint uStack_1f0;
  byte bStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  undefined *puStack_188;
  undefined *puStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined1 auStack_160 [32];
  undefined *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  byte bStack_80;
  undefined8 uStack_70;
  
  ppuVar13 = param_1;
  ppuVar12 = param_2;
  func_0x0001077698dc();
  ppuVar8 = ppuVar12 + 1;
  ppuVar6 = ppuVar12;
  uStack_70 = extraout_x8;
  func_0x00010776991c(*(undefined8 *)(*ppuVar12 + 0x10));
  if ((int)ppuVar13 == 0) {
    func_0x00010776991c(*(undefined8 *)(*param_2 + 0x30));
    iVar4 = (int)ppuVar13;
    if (iVar4 == 0) {
      func_0x00010776991c(*(undefined8 *)(*param_2 + 0x18));
      if (iVar4 == 0) {
        (**(code **)(*param_2 + 0x70))(&puStack_140,ppuVar8);
        in_ZR = (int)puStack_140 == 7;
        if ((bool)in_ZR) {
          func_0x0001077698b4();
LAB_107768d24:
          ppuVar6 = &puStack_f0;
          func_0x00010731efb8(param_1);
          func_0x00010726af18(ppuVar12 + 2);
        }
        else {
          in_ZR = (int)puStack_140 == 6;
          if ((bool)in_ZR) {
            func_0x0001077698b4();
            goto LAB_107768d24;
          }
          if ((int)puStack_140 == 5) {
            puVar14 = (undefined *)NEON_ucvtf(puStack_138);
            in_ZR = true;
          }
          else {
            if ((int)puStack_140 != 4) {
              in_ZR = (int)puStack_140 == 1;
              if ((bool)in_ZR) {
                func_0x0001077698b4();
              }
              else {
                in_ZR = (int)puStack_140 == 2;
                if ((bool)in_ZR) {
                  func_0x0001077698b4();
                }
                else {
                  in_ZR = (int)puStack_140 == 3;
                  if ((bool)in_ZR) {
                    in_ZR = (double)puStack_138 == 1.79769313486232e+308;
                    puVar14 = (undefined *)0x7ff0000000000000;
                    if ((double)puStack_138 <= 1.79769313486232e+308) {
                      puVar14 = puStack_138;
                    }
                    goto LAB_107768d60;
                  }
                  func_0x0001077698b4();
                }
              }
              goto LAB_107768d24;
            }
            in_ZR = true;
            puVar14 = (undefined *)(double)(long)puStack_138;
          }
LAB_107768d60:
          param_1[1] = puVar14;
          func_0x00010776990c(2);
        }
        ppuVar13 = &puStack_140;
        func_0x000107267ed0();
      }
      else {
        puStack_178 = (undefined *)0x0;
        uStack_170 = 0;
        uStack_168 = 0;
        ppuVar12 = ppuVar8;
        (**(code **)(*param_2 + 0x20))();
        ppuVar13 = (undefined **)0x0;
        unaff_x27 = 0x70;
        do {
          in_ZR = ppuVar12 == ppuVar13;
          if ((bool)in_ZR) {
            ppuVar6 = &puStack_178;
            func_0x000107277aa4(&puStack_f0);
            param_1[2] = puStack_e8;
            param_1[1] = puStack_f0;
            puStack_f0 = (undefined *)0x0;
            puStack_e8 = (undefined *)0x0;
            func_0x00010776990c(8);
            func_0x00010726b188(&puStack_f0);
            break;
          }
          (**(code **)(*param_2 + 0x28))(&puStack_140,ppuVar8,ppuVar13);
          ppuVar6 = &puStack_140;
          FUN_107768a7c(&puStack_f0,ppuVar6,param_3);
          func_0x0001072f5f6c(&puStack_140);
          bVar2 = bStack_80;
          uVar1 = uStack_170;
          unaff_x28 = (ulong)bStack_80;
          in_ZR = bStack_80 == 1;
          if ((bool)in_ZR) {
            in_ZR = uStack_170 == uStack_168;
            if (uStack_170 < uStack_168) {
              ppuVar6 = &puStack_e8;
              func_0x0001072786d8(uStack_170 + 8);
              uStack_170 = uVar1 + 0x70;
            }
            else {
              ppuVar6 = &puStack_178;
              func_0x00010727776c(ppuVar6,(long)(uStack_170 - (long)puStack_178) / 0x70 + 1);
              func_0x000107277858(&puStack_140,ppuVar6,(long)(uStack_170 - (long)puStack_178) / 0x70
                                  ,&uStack_168);
              func_0x0001072786d8(lStack_130 + 8,&puStack_e8);
              lStack_130 = lStack_130 + 0x70;
              ppuVar6 = &puStack_140;
              func_0x0001072777cc(&puStack_178);
              uVar1 = uStack_170;
              func_0x000107277a38(&puStack_140);
              uStack_170 = uVar1;
            }
          }
          else {
            *(undefined1 *)param_1 = 0;
            *(undefined1 *)(param_1 + 0xe) = 0;
          }
          func_0x000107296ad0(&puStack_f0);
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while ((bVar2 & 1) != 0);
        ppuVar13 = &puStack_178;
        func_0x000107277d70();
      }
    }
    else {
      puStack_f0 = &UNK_10e52b660;
      puStack_e8 = (undefined *)0x0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      puStack_178 = (undefined *)((ulong)puStack_178 & 0xffffffffffffff00);
      puVar5 = (undefined8 *)0x20;
      __Znwm();
      *puVar5 = &PTR_DAT_1109d5da0;
      puVar5[1] = &puStack_178;
      puVar5[2] = param_3;
      puVar5[3] = &puStack_f0;
      ppuVar6 = &puStack_140;
      puStack_128 = puVar5;
      (**(code **)(*param_2 + 0x40))(auStack_160,ppuVar8);
      func_0x0001073249ac(auStack_160);
      func_0x0001073249cc(&puStack_140);
      in_ZR = (char)puStack_178 == '\x01';
      if ((bool)in_ZR) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      else {
        ppuVar6 = &puStack_f0;
        func_0x000107278fec(&puStack_140);
        param_1[2] = puStack_138;
        param_1[1] = puStack_140;
        puStack_140 = (undefined *)0x0;
        puStack_138 = (undefined *)0x0;
        func_0x00010776990c(9);
        func_0x00010726b264(&puStack_140);
      }
      ppuVar13 = &puStack_f0;
      func_0x00010726ae88();
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  func_0x0001077698c8(uStack_70);
  if ((bool)in_ZR) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  func_0x000107769940();
  func_0x000107267ed0();
  func_0x0001077698ec();
  puStack_188 = &DAT_107768e6c;
  ppuVar7 = ppuVar13;
  uStack_1c0 = unaff_x28;
  uStack_1b8 = unaff_x27;
  uStack_1b0 = param_3;
  ppuStack_1a8 = param_2;
  ppuStack_1a0 = ppuVar8;
  ppuStack_198 = param_1;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x0001077698dc();
  ppuVar12 = ppuVar7 + 1;
  ppuVar8 = ppuVar12;
  uStack_1c8 = extraout_x8_01;
  (**(code **)(*ppuVar7 + 0x30))();
  if ((int)ppuVar8 == 0) {
    ppuVar8 = ppuVar12;
    (**(code **)(*ppuVar13 + 0x18))();
    if ((int)ppuVar8 == 0) {
      FUN_107768a7c(apuStack_258,ppuVar13,ppuVar6);
      func_0x000107769934();
code_r0x000107769004:
      extraout_x8_00[1] = uStack_278;
      *extraout_x8_00 = puStack_280;
      puStack_280 = (undefined *)0x0;
      uStack_278 = 0;
      *(undefined1 *)(extraout_x8_00 + 2) = 1;
      func_0x0001075795dc(&puStack_280);
    }
    else {
      func_0x0001077698fc();
      in_ZR = ppuVar8 == (undefined **)0x2;
      if (!(bool)in_ZR) {
        func_0x0001077698fc();
        func_0x000107878fec(&puStack_280,(undefined1 *)((long)ppuVar8 + -1));
        func_0x0001004c3cd0(apuStack_258,&UNK_10f4266bc,&puStack_280);
        func_0x00010048a6c8(auStack_2c0,apuStack_258,&UNK_10f417b93);
        func_0x00010756a668(ppuVar6,auStack_2c0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2c0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_258);
        ppuVar8 = &puStack_280;
        goto code_r0x000107768ed0;
      }
      (**(code **)(*ppuVar13 + 0x28))(&puStack_280,ppuVar12,1);
      FUN_107768a7c(apuStack_258,&puStack_280,ppuVar6);
      func_0x0001072f5f6c(&puStack_280);
      if ((bStack_1e8 & 1) != 0) {
        func_0x000107769924(&puStack_280);
        in_ZR = cStack_270 == '\x01';
        if ((bool)in_ZR) {
          func_0x000107769924(auStack_2e0);
          ppuVar12 = (undefined **)(ulong)uStack_2d8;
          ppuVar13 = (undefined **)(ulong)uStack_1f0;
          func_0x0001072c9854(auStack_2e0);
          func_0x00010776992c();
          in_ZR = uStack_2d8 == 7 && uStack_1f0 == 8;
          if (uStack_2d8 == 7 && uStack_1f0 == 8) {
            func_0x000107775f1c(auStack_2e0,apuStack_258);
            puVar10 = auStack_2e0;
            func_0x00010756dcfc(puVar10);
            func_0x0001072ca108(&puStack_280,puVar10);
            func_0x0001077698f4();
            puVar10 = auStack_1e0;
            func_0x000107769924(puVar10);
            func_0x00010756dcfc();
            func_0x0001072ca108(auStack_2e0,puVar10);
            func_0x0001072c9854(auStack_1e0);
            in_ZR = cStack_268 == '\x01';
            if ((((bool)in_ZR) && (CONCAT71(uStack_26f,cStack_270) == 0)) &&
               ((in_ZR = cStack_2c8 == '\x01', !(bool)in_ZR || (lStack_2d0 == 0)))) {
              ppuVar6 = apuStack_258;
              func_0x0001075725f8(ppuVar6);
              func_0x0001075794c4(auStack_1e0,1);
              ppuVar12 = ppuStack_1d0;
              ppuStack_1d0[2] = (undefined *)0x0;
              *ppuStack_1d0 = (undefined *)&PTR_DAT_1109d0da0;
              ppuStack_1d0[1] = (undefined *)0x0;
              func_0x000107278c90(auStack_290,ppuVar6);
              func_0x000107769788(ppuVar12 + 3,auStack_2e0,auStack_290);
              func_0x00010726b188(auStack_290);
              ppuVar6 = ppuStack_1d0;
              ppuStack_1d0 = (undefined **)0x0;
              ppuVar12 = ppuVar6 + 3;
              func_0x000107579550(auStack_1e0);
              *extraout_x8_00 = ppuVar12;
              extraout_x8_00[1] = ppuVar6;
              uStack_2f0 = 0;
              uStack_2e8 = 0;
              *(undefined1 *)(extraout_x8_00 + 2) = 1;
              func_0x0001075795dc(&uStack_2f0);
              func_0x0001077698f4();
              func_0x0001072c9884(&puStack_280);
              goto code_r0x000107769020;
            }
            func_0x0001077698f4();
            func_0x0001072c9884(&puStack_280);
          }
        }
        else {
          func_0x00010776992c();
        }
        func_0x000107769934();
        goto code_r0x000107769004;
      }
      *(undefined1 *)extraout_x8_00 = 0;
      *(undefined1 *)(extraout_x8_00 + 2) = 0;
    }
code_r0x000107769020:
    ppuVar8 = apuStack_258;
    func_0x000107296ad0();
  }
  else {
    func_0x00010002b838(apuStack_2a8,&UNK_10f426686);
    func_0x00010756a668(ppuVar6,apuStack_2a8);
    ppuVar8 = apuStack_2a8;
code_r0x000107768ed0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)extraout_x8_00 = 0;
    *(undefined1 *)(extraout_x8_00 + 2) = 0;
  }
  func_0x0001077698c8(uStack_1c8);
  if ((bool)in_ZR) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  func_0x00010726b188(auStack_290);
  __ZNSt3__119__shared_weak_countD2Ev(ppuVar6);
  func_0x000107579550(auStack_1e0);
  func_0x0001077698f4();
  func_0x0001072c9884(&puStack_280);
  ppuVar7 = apuStack_258;
  func_0x000107296ad0();
  func_0x0001077698ec();
  puStack_2f8 = &DAT_107769230;
  ppuVar9 = ppuVar7;
  ppuStack_320 = ppuVar13;
  ppuStack_318 = ppuVar12;
  ppuStack_310 = ppuVar6;
  ppuStack_308 = ppuVar8;
  ppuStack_300 = &puStack_190;
  func_0x0001077698dc();
  uVar3 = (*(uint *)(ppuVar9 + 3) | 2) == 7;
  uStack_328 = extraout_x8_03;
  if ((bool)uVar3) {
    (**(code **)(*ppuVar7 + 0x40))(apuStack_3e0,ppuVar7);
    func_0x000104c33004(apuStack_3a8,apuStack_3e0);
    func_0x00010729d318(auStack_428,ppuVar7 + 9,&uStack_441);
    func_0x000104c32a18(auStack_368,auStack_428);
    func_0x000107268bc4(&uStack_440,apuStack_3a8,2);
    *extraout_x8_02 = 0;
    *(undefined8 *)(extraout_x8_02 + 4) = uStack_438;
    *(undefined8 *)(extraout_x8_02 + 2) = uStack_440;
    uStack_440 = 0;
    uStack_438 = 0;
    func_0x000104c33108(&uStack_440);
    lVar11 = 0x40;
    do {
      func_0x000104c3323c((long)apuStack_3a8 + lVar11);
      lVar11 = lVar11 + -0x40;
      uVar3 = lVar11 == -0x40;
    } while (!(bool)uVar3);
    func_0x000107267ed0(auStack_428);
    ppuVar13 = apuStack_3e0;
    func_0x000104c2f714();
  }
  else {
    func_0x00010729d318(apuStack_3a8,ppuVar7 + 9,auStack_428);
    func_0x000104c32a18(extraout_x8_02,apuStack_3a8);
    ppuVar13 = apuStack_3a8;
    func_0x000107267ed0();
  }
  func_0x0001077698c8(uStack_328);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    puVar10 = auStack_368;
    lVar11 = -0x80;
    do {
      func_0x000104c3323c(puVar10);
      puVar10 = puVar10 + -0x40;
      lVar11 = lVar11 + 0x40;
    } while (lVar11 != 0);
    func_0x000107267ed0(auStack_428);
    ppuVar6 = apuStack_3e0;
    func_0x000104c2f714();
    func_0x0001077698ec();
    uStack_470 = 1;
    puStack_458 = &DAT_10776939c;
    ppuVar12 = ppuVar6;
    ppuStack_468 = ppuVar13;
    pppuStack_460 = &ppuStack_300;
    func_0x0001077698dc();
    uStack_478 = extraout_x8_04;
    (**(code **)(*ppuVar12 + 0x40))(apuStack_4b0);
    ppuStack_4b8 = (undefined **)0x0;
    func_0x0001073f26dc(&ppuStack_4b8,apuStack_4b0);
    func_0x00010772db3c(&ppuStack_4b8,ppuVar6 + 9);
    ppuVar13 = ppuStack_4b8;
    func_0x000104c2f714();
    func_0x0001077698c8(uStack_478);
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      ppuVar13 = apuStack_4b0;
      func_0x000104c2f714();
      func_0x0001077698ec();
      *ppuVar13 = (undefined *)&PTR_DAT_1109d5d18;
      func_0x00010726af18(ppuVar13 + 10);
      *ppuVar13 = (undefined *)&PTR_FUN_1109d4888;
      func_0x0001001148fc(ppuVar13 + 5);
      func_0x0001072c9884(ppuVar13 + 2);
      return ppuVar13;
    }
    return ppuVar13;
  }
  return ppuVar13;
}



/* Entry: 1077694e4; end: 10776950b;  */

long FUN_1077694e4(long param_1)

{
  func_0x000100060934(param_1,&DAT_10f3dd68b);
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 1077698b4; end: 10776994b;  */

undefined **
FUN_1077698b4(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long *plVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 extraout_w8;
  undefined4 uVar18;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined4 *extraout_x8_03;
  long extraout_x8_04;
  undefined **unaff_x19;
  long lVar19;
  undefined ***pppuVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined1 auStack_6b1 [9];
  undefined *puStack_6a8;
  undefined *apuStack_698 [7];
  undefined1 auStack_660 [56];
  long lStack_628;
  undefined1 auStack_620 [88];
  undefined1 auStack_5c8 [56];
  byte bStack_590;
  undefined *puStack_588;
  undefined1 auStack_580 [8];
  undefined8 uStack_578;
  undefined8 ***pppuStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined1 auStack_518 [29];
  undefined1 uStack_4fb;
  undefined1 uStack_4fa;
  undefined1 uStack_4f9;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined8 ***pppuStack_4e0;
  code *apcStack_4d8 [2];
  undefined1 auStack_4c8 [8];
  undefined ***pppuStack_4c0;
  undefined1 auStack_4b8 [8];
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined *apuStack_498 [3];
  undefined1 auStack_480 [40];
  undefined4 uStack_458;
  undefined *puStack_450;
  undefined1 auStack_448 [48];
  undefined4 uStack_418;
  undefined *apuStack_410 [7];
  undefined4 uStack_3d8;
  undefined8 auStack_3d0 [7];
  undefined4 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_358;
  undefined1 ***pppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  long lStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  undefined **ppuStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [24];
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_238 [56];
  undefined *puStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined1 auStack_1c0 [40];
  undefined4 uStack_198;
  undefined8 uStack_180;
  undefined8 **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 auStack_108 [24];
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_48;
  
  ppuVar22 = (undefined **)&stack0x00000040;
  func_0x00010777d250(&stack0x00000090);
  iVar3 = *(int *)ppuVar22;
  uStack_48 = extraout_x8_01;
  if (iVar3 == 7) {
    *(undefined4 *)(unaff_x19 + 0xd) = 0;
    uVar6 = 1;
    goto LAB_107776634;
  }
  if (iVar3 == 5) {
    param_1 = (undefined *)NEON_ucvtf(ppuVar22[1]);
    goto LAB_107776628;
  }
  if (iVar3 == 6) {
    *(undefined1 *)(unaff_x19 + 1) = *(undefined1 *)(ppuVar22 + 1);
    uVar18 = 1;
LAB_107776630:
    uVar6 = 1;
    *(undefined4 *)(unaff_x19 + 0xd) = uVar18;
LAB_107776634:
    func_0x00010777d23c(uStack_48);
    ppuVar11 = ppuVar22;
    if ((bool)uVar6) {
      return ppuVar22;
    }
  }
  else {
    if (iVar3 == 3) {
      param_1 = ppuVar22[1];
LAB_107776628:
      unaff_x19[1] = param_1;
      uVar18 = 2;
      goto LAB_107776630;
    }
    if (iVar3 == 4) {
      param_1 = (undefined *)(double)(long)ppuVar22[1];
      goto LAB_107776628;
    }
    uVar6 = iVar3 == 1;
    if ((bool)uVar6) {
      puStack_e0 = &UNK_10e52b660;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uVar17 = *(undefined8 *)(ppuVar22[1] + 0x18);
      func_0x0001072962ac(&puStack_e0);
      ppuVar22 = ppuVar22 + 1;
      func_0x000104c2db28();
      ppuStack_f0 = ppuVar22;
      while (uStack_e8 = uVar17, ppuStack_f0 != (undefined **)0x0) {
        func_0x00010777db48(&puStack_c0);
        FUN_1077765a4();
        func_0x0001073f2584(auStack_108,&puStack_e0,uVar17,&puStack_c0);
        func_0x00010777d660();
        func_0x000104c2de10(&ppuStack_f0);
        uVar17 = uStack_e8;
      }
      func_0x000107278fec(&puStack_c0);
      param_1 = puStack_c0;
      unaff_x19[2] = puStack_b8;
      unaff_x19[1] = puStack_c0;
      puStack_c0 = (undefined *)0x0;
      puStack_b8 = (undefined *)0x0;
      *(undefined4 *)(unaff_x19 + 0xd) = 9;
      func_0x00010726b264(&puStack_c0);
      ppuVar22 = &puStack_e0;
      func_0x00010726ae88();
      goto LAB_107776634;
    }
    bVar5 = iVar3 == 2;
    if (!bVar5) {
      uStack_d8 = 0;
      uStack_d0 = 0;
      puStack_e0 = (undefined *)0x0;
      func_0x0001074b01dc(&puStack_e0,*(long *)((long)ppuVar22[1] + 8) - *(long *)ppuVar22[1] >> 6);
      lVar1 = *(long *)((long)ppuVar22[1] + 8);
      for (lVar19 = *(long *)ppuVar22[1]; uVar6 = lVar19 == lVar1, !(bool)uVar6;
          lVar19 = lVar19 + 0x40) {
        func_0x00010777dcd4(&puStack_c0);
        FUN_1077765a4();
        func_0x000107277668(&puStack_e0,&puStack_c0);
        func_0x00010777d660();
      }
      func_0x000107277aa4(&puStack_c0);
      param_1 = puStack_c0;
      unaff_x19[2] = puStack_b8;
      unaff_x19[1] = puStack_c0;
      puStack_c0 = (undefined *)0x0;
      puStack_b8 = (undefined *)0x0;
      *(undefined4 *)(unaff_x19 + 0xd) = 8;
      func_0x00010726b188(&puStack_c0);
      ppuVar22 = &puStack_e0;
      func_0x000107277d70();
      goto LAB_107776634;
    }
    ppuVar11 = ppuVar22;
    func_0x00010777d23c(extraout_x8_01);
    if (bVar5) {
      func_0x0001072ddd80(unaff_x19 + 1,ppuVar22 + 1);
      return unaff_x19;
    }
  }
  uVar6 = 0;
  ___stack_chk_fail();
  ppuVar22 = &puStack_e0;
  func_0x00010726ae88();
  func_0x00010777d638();
  ppuStack_118 = (undefined **)&UNK_107776804;
  ppuStack_120 = (undefined8 **)&stack0xfffffffffffffff0;
  func_0x00010777d250();
  iVar3 = *(int *)(ppuVar22 + 0xd);
  uStack_180 = extraout_x8_02;
  if (iVar3 == 0) {
code_r0x000107776900:
    *(int *)ppuVar11 = 7;
  }
  else {
    uVar6 = iVar3 + -1 == 3;
    switch(iVar3 + -1) {
    case 0:
      uVar4 = *(undefined1 *)(ppuVar22 + 1);
      *(int *)ppuVar11 = 6;
      *(undefined1 *)(ppuVar11 + 1) = uVar4;
      break;
    case 1:
      puVar21 = ppuVar22[1];
      *(int *)ppuVar11 = 3;
      ppuVar11[1] = puVar21;
      break;
    case 2:
      func_0x000104c2fe00(&puStack_200,ppuVar22 + 1);
      func_0x000104c33004(ppuVar11,&puStack_200);
      func_0x000104c2f714();
      break;
    case 3:
      func_0x00010777d23c(extraout_x8_02);
      pppuStack_310 = (undefined1 ***)ppuStack_120;
      if ((bool)uVar6) {
        ppuVar10 = ppuStack_118;
        func_0x00010777de70(ppuVar11,ppuVar22 + 1);
        uStack_358 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_308 = ppuVar10;
        func_0x00010785e024();
        func_0x00010002b838(auStack_4c8,&UNK_10f42b453);
        func_0x000107268798(apuStack_498,auStack_4c8);
        uStack_458 = 3;
        uStack_418 = 3;
        uStack_3d8 = 3;
        uStack_398 = 3;
        ppuVar22 = apuStack_498;
        puStack_450 = param_1;
        apuStack_410[0] = param_2;
        auStack_3d0[0] = param_3;
        uStack_390 = param_4;
        func_0x000107268bc4(&uStack_4b0,ppuVar22,5);
        *extraout_x8_03 = 0;
        *(undefined8 *)(extraout_x8_03 + 4) = uStack_4a8;
        *(undefined8 *)(extraout_x8_03 + 2) = uStack_4b0;
        uStack_4b0 = 0;
        uStack_4a8 = 0;
        func_0x000104c33108(&uStack_4b0);
        lVar19 = 0x100;
        do {
          ppuVar11 = (undefined **)((long)apuStack_498 + lVar19);
          func_0x000104c3323c();
          lVar19 = lVar19 + -0x40;
          uVar6 = lVar19 == -0x40;
        } while (!(bool)uVar6);
        func_0x00010785e438();
        func_0x00010785e450(uStack_358);
        if ((bool)uVar6) {
          return ppuVar11;
        }
        ___stack_chk_fail();
        lVar19 = 0x100;
        do {
          func_0x000104c3323c((long)apuStack_498 + lVar19);
          lVar19 = lVar19 + -0x40;
        } while (lVar19 != -0x40);
        func_0x00010785e438();
        __Unwind_Resume(ppuVar11);
        apcStack_4d8[0] = FUN_10785e3b0;
        ppuStack_4f8 = (undefined **)0x0;
        ppuStack_4f0 = apuStack_498;
        ppuStack_4e8 = ppuVar11;
        pppuStack_4e0 = &pppuStack_310;
        func_0x0001073ca0ec(&ppuStack_4f8,(long)ppuVar22 + 0xc);
        func_0x0001073ca0ec(&ppuStack_4f8,ppuVar22);
        func_0x0001073ca0ec(&ppuStack_4f8,(long)ppuVar22 + 4);
        func_0x0001073ca0ec(&ppuStack_4f8,ppuVar22 + 1);
        return ppuStack_4f8;
      }
      goto code_r0x000107776e28;
    default:
      uVar6 = iVar3 + -5 == 3;
      switch(iVar3 + -5) {
      case 0:
        goto code_r0x000107776900;
      case 1:
        lStack_290 = 0;
        lStack_288 = 0;
        uStack_280 = 0;
        plVar12 = &lStack_290;
        func_0x000107289660(plVar12,1);
        func_0x000107289720(&puStack_200,plVar12,lStack_288 - lStack_290 >> 6,&uStack_280);
        func_0x000107777c14(lStack_1f0);
        lStack_1f0 = lStack_1f0 + 0x40;
        func_0x0001072896a0(&lStack_290,&puStack_200);
        lVar19 = lStack_288;
        func_0x00010777db68();
        puVar2 = ppuVar22[2];
        lStack_288 = lVar19;
        for (puVar21 = ppuVar22[1]; uVar6 = puVar21 == puVar2, !(bool)uVar6;
            puVar21 = puVar21 + 0x120) {
          if (puVar21[0x98] == '\x01') {
            func_0x00010002b838(auStack_2a8,&UNK_10f4271a1);
            func_0x000107268798(&puStack_200,auStack_2a8);
            func_0x000104c2fe00(auStack_238,puVar21 + 0x38);
            func_0x000104c33004(auStack_1c0,auStack_238);
            func_0x000107268bc4(&puStack_278,&puStack_200,2);
            func_0x000107765870(&lStack_290,&puStack_278);
            func_0x000104c33108(&puStack_278);
            lVar19 = 0x40;
            do {
              func_0x000104c3323c((long)&puStack_200 + lVar19);
              lVar19 = lVar19 + -0x40;
            } while (lVar19 != -0x40);
            func_0x000104c2f714(auStack_238);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a8);
          }
          else {
            func_0x0001077560f4(&lStack_290,puVar21);
            ppuStack_2c8 = (undefined **)&UNK_10e52b660;
            uStack_2b8 = 0;
            uStack_2b0 = 0;
            uStack_2c0 = 0;
            if (puVar21[0xa8] == '\x01') {
              pppuVar13 = &ppuStack_2c8;
              puVar15 = &UNK_10f4271a7;
              func_0x000107777c54();
              if (((ulong)puVar15 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                ppuVar22 = *(undefined ***)(puVar21 + 0xa0);
                *(undefined4 *)(pppuVar13 + 7) = 3;
                pppuVar13[8] = ppuVar22;
              }
            }
            if (puVar21[0xc0] == '\x01') {
              puStack_278 = (undefined *)0x0;
              uStack_270 = 0;
              uStack_268 = 0;
              lVar1 = (*(long **)(puVar21 + 0xb0))[1];
              for (lVar19 = **(long **)(puVar21 + 0xb0); lVar19 != lVar1; lVar19 = lVar19 + 0x38) {
                func_0x0001077560f4(&puStack_278,lVar19);
              }
              lStack_2e0 = 0;
              uStack_2d8 = 0;
              uStack_2d0 = 0;
              func_0x00010002b838(&ppuStack_300,&DAT_10f3dd68b);
              if (uStack_2d8 < uStack_2d0) {
                func_0x000107777cd8(uStack_2d8,&ppuStack_300);
                uVar16 = uStack_2d8 + 0x40;
              }
              else {
                plVar12 = &lStack_2e0;
                func_0x000107289660(plVar12,((long)(uStack_2d8 - lStack_2e0) >> 6) + 1);
                func_0x000107289720(&puStack_200,plVar12,(long)(uStack_2d8 - lStack_2e0) >> 6,
                                    &uStack_2d0);
                func_0x000107777cd8(lStack_1f0,&ppuStack_300);
                lStack_1f0 = lStack_1f0 + 0x40;
                func_0x0001072896a0(&lStack_2e0,&puStack_200);
                uVar16 = uStack_2d8;
                func_0x00010777db68();
              }
              uStack_2d8 = uVar16;
              func_0x00010777dab8();
              func_0x00010777dd48();
              func_0x000107765870(&lStack_2e0,&puStack_200);
              func_0x000104c33108(&puStack_200);
              func_0x000107327958(&ppuStack_300,&lStack_2e0);
              pppuVar13 = &ppuStack_2c8;
              uVar16 = 0;
              func_0x00010775e124();
              if ((uVar16 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                ppuVar11 = ppuStack_2f8;
                ppuVar22 = ppuStack_300;
                ppuStack_300 = (undefined **)0x0;
                ppuStack_2f8 = (undefined **)0x0;
                *(undefined4 *)(pppuVar13 + 7) = 0;
                pppuVar13[9] = ppuVar11;
                pppuVar13[8] = ppuVar22;
                puStack_200 = (undefined *)0x0;
                puStack_1f8 = (undefined *)0x0;
                func_0x000104c33108(&puStack_200);
              }
              func_0x000104c33108(&ppuStack_300);
              func_0x000107269124(&lStack_2e0);
              func_0x000107269124(&puStack_278);
            }
            if (puVar21[0xd8] == '\x01') {
              lStack_1f0 = *(long *)(puVar21 + 0xd0);
              puStack_1f8 = *(undefined **)(puVar21 + 200);
              uStack_198 = 4;
              func_0x00010777daf4(&puStack_278,&puStack_200);
              puVar15 = &DAT_10f415bdb;
              func_0x000107777c54(&ppuStack_2c8);
              if (((ulong)puVar15 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                func_0x00010777ddb8();
              }
              func_0x00010777dd1c();
              func_0x00010777ddb0();
            }
            if (puVar21[0x108] == '\x01') {
              lStack_1f0 = *(long *)(puVar21 + 0x100);
              puStack_1f8 = *(undefined **)(puVar21 + 0xf8);
              uStack_198 = 4;
              func_0x00010777daf4(&puStack_278,&puStack_200);
              uVar16 = 0;
              func_0x000107777d1c(&ppuStack_2c8);
              if ((uVar16 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                func_0x00010777ddb8();
              }
              func_0x00010777dd1c();
              func_0x00010777ddb0();
            }
            if (puVar21[0x118] == '\x01') {
              pppuVar13 = &ppuStack_2c8;
              uVar16 = 0;
              func_0x000107777d1c();
              if ((uVar16 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                ppuVar22 = *(undefined ***)(puVar21 + 0x110);
                *(undefined4 *)(pppuVar13 + 7) = 3;
                pppuVar13[8] = ppuVar22;
              }
            }
            func_0x000104c33260(&puStack_200,&ppuStack_2c8);
            func_0x0001075726d4(&lStack_290,&puStack_200);
            func_0x000104c335c0(&puStack_200);
            func_0x000104c33548(&ppuStack_2c8);
          }
        }
        func_0x000107327958(&puStack_200,&lStack_290);
        func_0x00010777db2c();
        break;
      case 2:
        func_0x00010777d23c(extraout_x8_02);
        pppuStack_310 = (undefined1 ***)ppuStack_120;
        if ((bool)uVar6) {
          ppuVar22 = ppuVar22 + 1;
          ppuVar10 = ppuStack_118;
          func_0x00010777de70(ppuVar11);
          ppuVar7 = &puStack_530;
          ppuStack_308 = ppuVar10;
          func_0x00010775f634();
          uStack_358 = extraout_x8;
          func_0x000100060964(auStack_480,&DAT_10f68f148);
          func_0x00010735d778(auStack_448,auStack_480,ppuVar22);
          func_0x000100060964(auStack_4b8,&DAT_10f3682ba);
          func_0x000104c318bc(auStack_3d0,auStack_4b8);
          uStack_398 = 6;
          uStack_390 = CONCAT71(uStack_390._1_7_,*(undefined1 *)(ppuVar22 + 7));
          ppuVar10 = (undefined **)&uStack_4f9;
          func_0x000107268194(&ppuStack_4f8,2,ppuVar10,&uStack_4fa,&uStack_4fb);
          for (lVar19 = 0; lVar19 != 0xf0; lVar19 = lVar19 + 0x78) {
            ppuVar10 = (undefined **)((long)apuStack_410 + lVar19);
            pppuStack_4c0 = &ppuStack_4f8;
            func_0x000107268220(apcStack_4d8,&pppuStack_4c0);
          }
          lVar19 = 0x78;
          do {
            func_0x000104c32ad0(auStack_448 + lVar19);
            lVar19 = lVar19 + -0x78;
          } while (lVar19 != -0x78);
          func_0x000104c2f714(auStack_4b8);
          func_0x00010775f604();
          uVar6 = *(char *)(ppuVar22 + 0xb) == '\x01';
          if ((bool)uVar6) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_518,ppuVar22 + 8);
            func_0x000107268798(auStack_448,auStack_518);
            func_0x000100060964(auStack_480,&UNK_10f63898c);
            func_0x000107267f10(&ppuStack_4f8,auStack_480);
            func_0x000104c3302c();
            func_0x00010775f604();
            func_0x000104c3323c(auStack_448);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_518);
          }
          pppuVar13 = &ppuStack_4f8;
          func_0x000104c33260(&puStack_530);
          *(int *)ppuVar11 = 1;
          ppuVar11[2] = puStack_528;
          ppuVar11[1] = puStack_530;
          puStack_530 = (undefined *)0x0;
          puStack_528 = (undefined *)0x0;
          func_0x000104c335c0();
          func_0x00010775f60c();
          func_0x00010775f5b0(uStack_358);
          if ((bool)uVar6) {
            return ppuVar7;
          }
          ___stack_chk_fail();
          func_0x00010775f604();
          func_0x000104c3323c(auStack_448);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_518);
          func_0x00010775f60c();
          func_0x00010775f5dc();
          puStack_538 = &UNK_10775f38c;
          pppuVar14 = pppuVar13;
          pppuStack_540 = &pppuStack_310;
          func_0x00010775f634();
          pppuVar20 = pppuVar14 + 1;
          pppuVar8 = pppuVar20;
          uStack_578 = extraout_x8_00;
          (*(code *)(*pppuVar14)[3])();
          if ((int)pppuVar8 == 0) {
            (*(code *)(*pppuVar13)[0xd])(auStack_5c8,pppuVar20);
            uVar6 = bStack_590 == 1;
            if ((bool)uVar6) {
              func_0x000104c2fe00(apuStack_698,auStack_5c8);
              func_0x00010775f62c(&lStack_628,apuStack_698);
              func_0x00010775f614();
              func_0x00010726b164(&lStack_628);
              ppuVar10 = apuStack_698;
              func_0x000104c2f714(ppuVar10);
            }
            else {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                        (ppuVar10,&UNK_10f4260a7);
              *(undefined1 *)ppuVar7 = 0;
              *(undefined1 *)(ppuVar7 + 0xc) = 0;
            }
            func_0x00010775f5f4();
          }
          else {
            (*(code *)(*pppuVar13)[5])(&puStack_588,pppuVar20,0);
            puVar9 = auStack_580;
            (**(code **)(puStack_588 + 0x20))();
            if (puVar9 == (undefined1 *)0x0) {
              func_0x00010775f5e4();
              *(undefined1 *)ppuVar7 = 0;
              *(undefined1 *)(ppuVar7 + 0xc) = 0;
            }
            else {
              (**(code **)(puStack_588 + 0x28))(&lStack_628,auStack_580,0);
              (**(code **)(lStack_628 + 0x68))(auStack_5c8,auStack_620);
              func_0x0001072f5f6c(&lStack_628);
              if ((bStack_590 & 1) == 0) {
                func_0x00010775f5e4();
                *(undefined1 *)ppuVar7 = 0;
                *(undefined1 *)(ppuVar7 + 0xc) = 0;
              }
              else {
                func_0x000104c2fe00(auStack_660,auStack_5c8);
                func_0x00010775f62c(&lStack_628,auStack_660);
                func_0x00010775f614();
                func_0x00010726b164(&lStack_628);
                func_0x000104c2f714(auStack_660);
              }
              func_0x00010775f5f4();
            }
            ppuVar10 = &puStack_588;
            func_0x0001072f5f6c(ppuVar10);
          }
          func_0x00010775f5b0(uStack_578);
          if ((bool)uVar6) {
            return ppuVar10;
          }
          ___stack_chk_fail();
          func_0x00010775f5f4();
          func_0x0001072f5f6c(&puStack_588);
          func_0x00010775f5dc();
          puStack_6a8 = &UNK_10775f590;
          ppuVar22 = (undefined **)auStack_6b1;
          auStack_6b1._1_8_ = &pppuStack_540;
          func_0x00010726364c(ppuVar22);
          return ppuVar22;
        }
        goto code_r0x000107776e28;
      case 3:
        uStack_270 = 0;
        uStack_268 = 0;
        puStack_278 = (undefined *)0x0;
        func_0x00010777d398(ppuVar22[1]);
        func_0x0001072ac134(&puStack_278);
        lVar1 = *(long *)((long)ppuVar22[1] + 8);
        for (lVar19 = *(long *)ppuVar22[1]; uVar6 = lVar19 == lVar1, !(bool)uVar6;
            lVar19 = lVar19 + 0x70) {
          func_0x00010777daf4(&puStack_200,lVar19);
          func_0x0001072aad1c(&puStack_278,&puStack_200);
          func_0x00010777db60();
        }
        func_0x00010777dd48();
        func_0x00010777db2c();
        break;
      default:
        ppuVar22 = ppuVar22 + 1;
        puStack_278 = &UNK_10e52b660;
        uStack_270 = 0;
        uStack_268 = 0;
        uStack_260 = 0;
        uVar17 = *(undefined8 *)(*ppuVar22 + 0x18);
        func_0x000104c32780(&puStack_278);
        func_0x000107348ee8();
        ppuStack_2c8 = ppuVar22;
        while (uStack_2c0 = uVar17, ppuStack_2c8 != (undefined **)0x0) {
          func_0x00010777da30(&puStack_200);
          func_0x000104c32844(auStack_238,&puStack_278,uVar17,&puStack_200);
          func_0x00010777db60();
          func_0x0001072963cc(&ppuStack_2c8);
          uVar17 = uStack_2c0;
        }
        func_0x000104c33260(&puStack_200,&puStack_278);
        *(int *)ppuVar11 = 1;
        ppuVar11[2] = puStack_1f8;
        ppuVar11[1] = puStack_200;
        puStack_200 = (undefined *)0x0;
        puStack_1f8 = (undefined *)0x0;
        func_0x000104c335c0();
        func_0x000104c33548();
        goto code_r0x000107776908;
      }
      func_0x000107269124();
    }
  }
code_r0x000107776908:
  func_0x00010777d23c(uStack_180);
  if ((bool)uVar6) {
    func_0x00010777de70(ppuStack_118);
    return ppuStack_118;
  }
code_r0x000107776e28:
  ___stack_chk_fail();
  ppuVar22 = &puStack_278;
  func_0x000104c33548();
  func_0x00010777d638();
  ppuStack_308 = (undefined **)&SUB_107776f6c;
  pppuStack_310 = (undefined1 ***)&ppuStack_120;
  if (*(int *)(ppuVar22 + 0xd) == 3) {
    func_0x00010732393c();
    func_0x00010724ef84(&stack0xfffffffffffffcc8);
    func_0x00010777ddf0();
    func_0x00010777d650();
    uVar6 = 1;
  }
  else {
    func_0x00010777d748();
    uVar6 = extraout_w8;
  }
  *(undefined1 *)(extraout_x8_04 + 0x18) = uVar6;
  return ppuVar22;
}



/* Entry: 10776a59c; end: 10776a63f;  */

void FUN_10776a59c(void)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lStack_58;
  long lStack_50;
  
  func_0x00010776dea4();
  while (unaff_x22 = (long *)*unaff_x22, unaff_x22 != (long *)0x0) {
    func_0x00010776e048(unaff_x22[3]);
    func_0x00010776dd30();
    for (lVar1 = lStack_58; lVar1 != lStack_50; lVar1 = lVar1 + 0x78) {
      func_0x00010776dfa0();
    }
    func_0x00010776dbc8();
  }
  func_0x00010776e048(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x00010776dd30();
  for (; lStack_58 != lStack_50; lStack_58 = lStack_58 + 0x78) {
    func_0x00010776df94();
  }
  func_0x00010776dbc8();
  return;
}



/* Entry: 10776af0c; end: 10776afef;  */

/* WARNING: Possible PIC construction at 0x00010776af34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010776af38) */

long * FUN_10776af0c(void)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010776dc60();
  if (*(long *)(unaff_x20 + 0x68) == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + 0x48);
    unaff_x30 = 0x10776af38;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x29 = puVar1;
  }
  plVar2 = *(long **)(unaff_x19 + 0x18);
  if (plVar2 == (long *)0x0) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000104bfeb48(0,uVar4);
    *(long *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x18) = &SUB_10745df78;
    plVar3 = (long *)plVar2[3];
    if (plVar3 == plVar2) {
      lVar5 = 0x20;
    }
    else {
      if (plVar3 == (long *)0x0) {
        return plVar2;
      }
      lVar5 = 0x28;
    }
    (**(code **)(*plVar3 + lVar5))();
    return plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))();
  return plVar2;
}



/* Entry: 10776bacc; end: 10776caeb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10776bacc(undefined1 *param_1,undefined8 param_2,float param_3,uint5 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  undefined1 uVar6;
  int iVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  uint5 *puVar10;
  long extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  long extraout_x9_02;
  code *extraout_x9_03;
  code *extraout_x9_04;
  ulong uVar11;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong uVar12;
  uint5 *puVar13;
  long *plVar14;
  uint5 *puVar15;
  long lVar16;
  uint5 *puVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  uint5 *puVar21;
  long *unaff_x28;
  uint5 *puVar22;
  float fVar23;
  long lVar24;
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [4];
  undefined1 uStack_26c;
  byte bStack_260;
  undefined1 auStack_250 [8];
  undefined4 uStack_248;
  undefined1 uStack_240;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined1 auStack_1f0 [16];
  byte bStack_1e0;
  undefined1 auStack_1d8 [8];
  int iStack_1d0;
  undefined1 uStack_1c8;
  uint5 auStack_1c0 [3];
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  uint5 uStack_150;
  uint5 *puStack_148;
  long *plStack_140;
  long lStack_138;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long alStack_100 [2];
  byte bStack_f0;
  long *plStack_e0;
  long **pplStack_d8;
  long *plStack_d0;
  char cStack_c8;
  undefined7 uStack_c7;
  byte bStack_98;
  long *plStack_90;
  undefined4 uStack_88;
  byte bStack_80;
  undefined8 uStack_78;
  
  puVar21 = param_4;
  func_0x00010776d99c();
  puVar13 = puVar21 + 1;
  puVar17 = puVar13;
  uStack_78 = extraout_x8;
  (**(code **)(*(long *)puVar21 + 0x20))();
  uVar6 = puVar17 == (uint5 *)0x4;
  if (puVar17 < (uint5 *)0x5) {
    func_0x000107878fec(&uStack_150,(long)puVar17 + -1);
    func_0x0001004c3cd0(&plStack_e0,&UNK_10f4268d8,&uStack_150);
    func_0x00010048a6c8(auStack_1a8,&plStack_e0,&DAT_10f62a9de);
    func_0x00010756a668(param_5,auStack_1a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
    func_0x00010776dbd0();
    puVar21 = &uStack_150;
LAB_10776bb9c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar21);
    func_0x00010776dc7c();
  }
  else {
    if (((ulong)puVar17 & 1) == 0) {
      func_0x00010002b838(auStack_1c0,&UNK_10f42690f);
      func_0x00010756a668(param_5,auStack_1c0);
      puVar21 = auStack_1c0;
      goto LAB_10776bb9c;
    }
    auStack_1d8[0] = 0;
    uStack_1c8 = 0;
    auStack_1f0[0] = 0;
    bStack_1e0 = 0;
    func_0x00010776df38(&plStack_e0);
    if ((char)plStack_d0 == '\x01') {
      func_0x00010776df38(&uStack_150);
      uStack_88 = 6;
      puVar21 = &uStack_150;
      func_0x0001074d1ed0(puVar21,&plStack_90);
      func_0x0001072c9884(&plStack_90);
      func_0x0001072c9854(&uStack_150);
      func_0x0001072c9854(&plStack_e0);
      if ((int)puVar21 != 0) {
        func_0x00010776df38();
        func_0x00010756bb10(auStack_1f0,&plStack_e0);
        goto LAB_10776bc1c;
      }
    }
    else {
LAB_10776bc1c:
      func_0x0001072c9854();
    }
    plStack_208 = (long *)0x0;
    plStack_200 = (long *)0x0;
    plStack_1f8 = (long *)0x0;
    if (0xccccccccccccccc < (long)puVar17 - 3U) goto LAB_10776c804;
    func_0x00010776cc94();
    func_0x00010776de5c();
    plVar19 = (long *)(extraout_x8_00 + extraout_x9 * 0x28);
    _memcpy(plVar19);
    plVar8 = plStack_208;
    plStack_1f8 = (long *)CONCAT71(uStack_c7,cStack_c8);
    plStack_200 = plStack_d0;
    plStack_208 = plVar19;
    func_0x00010776dcd0(plVar8);
    uVar20 = 2;
    while( true ) {
      puVar21 = (uint5 *)(uVar20 | 1);
      uVar6 = puVar21 == puVar17;
      if (puVar17 <= puVar21) break;
      func_0x00010776dfd8();
      (*extraout_x9_00)(alStack_100,puVar13,uVar20);
      _uStack_150 = 0;
      puStack_148 = (uint5 *)0x0;
      plStack_140 = (long *)0x0;
      iVar7 = (int)alStack_100 + 8;
      (**(code **)(alStack_100[0] + 0x18))();
      if (iVar7 == 0) {
        func_0x00010776de04(&plStack_e0,alStack_100);
        bVar4 = bStack_98;
        if ((bStack_98 & 1) == 0) {
          func_0x00010776dbd8();
        }
        else {
          func_0x00010776df50();
        }
        func_0x00010776cc58(&plStack_e0);
        if ((bVar4 & 1) == 0) goto LAB_10776c0a8;
      }
      else {
        plVar8 = alStack_100 + 1;
        (**(code **)(alStack_100[0] + 0x20))();
        if (plVar8 == (long *)0x0) {
          func_0x00010002b838(auStack_220,&UNK_10f42693d);
          func_0x00010756a69c(param_5,auStack_220,uVar20);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_220);
          func_0x00010776dc7c();
LAB_10776c0a8:
          func_0x00010776df48();
          func_0x0001072f5f6c(alStack_100);
          goto LAB_10776c0b4;
        }
        if ((long *)(((long)plStack_140 - _uStack_150) / 0x48) < plVar8) {
          if ((long *)0x38e38e38e38e38e < plVar8) {
            func_0x00010776cd5c();
            goto LAB_10776c828;
          }
          func_0x00010776ce24(&plStack_e0,plVar8,((long)puStack_148 - _uStack_150) / 0x48,
                              &plStack_140);
          func_0x00010776cd68(&uStack_150,&plStack_e0);
          func_0x00010776ce80(&plStack_e0);
        }
        unaff_x28 = (long *)0x0;
        while (uVar6 = plVar8 == unaff_x28, !(bool)uVar6) {
          (**(code **)(alStack_100[0] + 0x28))(&plStack_90,alStack_100 + 1,unaff_x28);
          func_0x00010776de04(&plStack_e0,&plStack_90);
          func_0x0001072f5f6c(&plStack_90);
          bVar4 = bStack_98;
          if ((bStack_98 & 1) == 0) {
            func_0x00010776dbd8();
          }
          else {
            func_0x00010776df50();
          }
          func_0x00010776cc58(&plStack_e0);
          unaff_x28 = (long *)((long)unaff_x28 + 1);
          if ((bVar4 & 1) == 0) goto LAB_10776c0a8;
        }
      }
      func_0x00010776dfd8();
      (*extraout_x9_01)(&plStack_e0,puVar13,puVar21);
      func_0x00010756f360(auStack_238,auStack_1f0);
      auStack_270[0] = 0;
      uStack_26c = 0;
      func_0x00010777067c(&plStack_90,param_5,&plStack_e0,puVar21,param_6,auStack_238,auStack_270);
      func_0x0001072c9854(auStack_238);
      func_0x00010776ddc0();
      bVar4 = bStack_80;
      if ((bStack_80 & 1) == 0) {
        func_0x00010776dbd8();
      }
      else {
        if ((bStack_1e0 & 1) == 0) {
          func_0x00010756f300(auStack_1f0,plStack_90 + 2);
        }
        uVar6 = plStack_200 == plStack_1f8;
        if (plStack_200 < plStack_1f8) {
          *plStack_200 = 0;
          plStack_200[1] = 0;
          plStack_200[2] = 0;
          func_0x00010776db58();
          plStack_200 = unaff_x28;
        }
        else {
          lVar16 = ((long)plStack_200 - (long)plStack_208) / 0x28;
          uVar11 = lVar16 + 1;
          if (0x666666666666666 < uVar11) {
            FUN_10776cc88();
            goto LAB_10776c828;
          }
          uVar2 = ((long)plStack_1f8 - (long)plStack_208) / 0x28;
          uVar12 = uVar2 * 2;
          if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
            uVar12 = uVar11;
          }
          uVar6 = uVar2 == 0x333333333333333;
          if (0x333333333333332 < uVar2) {
            uVar12 = 0x666666666666666;
          }
          func_0x00010776cc94(&plStack_e0,uVar12,lVar16,&plStack_1f8);
          plStack_d0[1] = 0;
          plStack_d0[2] = 0;
          *plStack_d0 = 0;
          func_0x00010776db58();
          func_0x00010776de5c();
          plVar19 = (long *)(extraout_x8_01 + extraout_x9_02 * 0x28);
          _memcpy(plVar19);
          plVar8 = plStack_208;
          plStack_1f8 = (long *)CONCAT71(uStack_c7,cStack_c8);
          plStack_208 = plVar19;
          plStack_200 = unaff_x28;
          func_0x00010776dcd0(plVar8);
          plStack_200 = unaff_x28;
        }
      }
      func_0x0001072c95d0(&plStack_90);
      func_0x00010776df48();
      func_0x0001072f5f6c(alStack_100);
      if (bVar4 == 0) goto LAB_10776c0b4;
      uVar20 = uVar20 + 2;
    }
    func_0x00010776dfd8();
    (*extraout_x9_03)(&plStack_e0,puVar13,1);
    uStack_248 = 6;
    uStack_240 = 1;
    uVar20 = (ulong)_uStack_150 >> 0x28;
    uStack_150._0_4_ = (uint)_uStack_150 & 0xffffff00;
    uStack_150 = (uint5)(uint)uStack_150;
    _uStack_150 = CONCAT35((int3)uVar20,uStack_150);
    func_0x00010777067c(alStack_100,param_5,&plStack_e0,1,param_6,auStack_250,&uStack_150);
    func_0x0001072c9854(auStack_250);
    func_0x00010776ddc0();
    if ((bStack_f0 & 1) == 0) {
      func_0x00010776dc7c();
    }
    else {
      func_0x00010776dfd8();
      (*extraout_x9_04)(&plStack_e0,puVar13,(long)puVar17 + -1);
      func_0x00010756f360(auStack_288,auStack_1f0);
      uVar20 = (ulong)_uStack_150 >> 0x28;
      uStack_150._0_4_ = (uint)_uStack_150 & 0xffffff00;
      uStack_150 = (uint5)(uint)uStack_150;
      _uStack_150 = CONCAT35((int3)uVar20,uStack_150);
      func_0x00010777067c(auStack_270,param_5,&plStack_e0,(long)puVar17 + -1,param_6,auStack_288,
                          &uStack_150);
      func_0x0001072c9854(auStack_288);
      func_0x00010776ddc0();
      if ((bStack_260 & 1) == 0) {
        func_0x00010776dc7c();
      }
      else {
        pplStack_d8 = (long **)CONCAT44(pplStack_d8._4_4_,6);
        plVar8 = (long *)(alStack_100[0] + 0x10);
        func_0x0001074d1ed0(plVar8,&plStack_e0);
        func_0x0001072c9884(&plStack_e0);
        if ((int)plVar8 != 0) {
          func_0x00010756f724(&plStack_e0,auStack_1d8,alStack_100[0] + 0x10);
          uVar6 = cStack_c8 == '\x01';
          if ((bool)uVar6) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_2a0,&plStack_e0);
            func_0x00010756a69c(param_5,auStack_2a0,1);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a0);
            func_0x00010776dc7c();
            func_0x00010776df68();
            goto LAB_10776c700;
          }
          func_0x00010776df68();
        }
        if (iStack_1d0 == 0) {
          func_0x00010776dbd8();
        }
        else {
          if (iStack_1d0 == 1) {
            func_0x00010776debc();
            plVar19 = plStack_208;
            alStack_100[0] = 0;
            alStack_100[1] = 0;
            plStack_90 = plStack_208;
            func_0x00010776daac();
            func_0x00010776e054((long)plVar8 - (long)plVar19);
            func_0x000107546cd0(&uStack_150);
            lVar16 = 2;
            for (; uVar6 = plVar19 == plVar8, !(bool)uVar6; plVar19 = plVar19 + 5) {
              lStack_108 = plVar19[4];
              lStack_110 = plVar19[3];
              if (plVar19[4] != 0) {
                do {
                  func_0x00010776da3c();
                } while (extraout_w10 != 0);
              }
              lVar1 = plVar19[1];
              for (lVar18 = *plVar19; lVar3 = lStack_108, lVar24 = lStack_110, puVar21 = puStack_148
                  , lVar18 != lVar1; lVar18 = lVar18 + 0x48) {
                if (*(int *)(lVar18 + 0x40) != 0) {
                  func_0x00010563ab98();
                  goto LAB_10776c828;
                }
                puVar17 = *(uint5 **)(lVar18 + 8);
                if (puStack_148 != (uint5 *)0x0) {
                  uVar20 = 0;
                  if (puStack_148 != (uint5 *)0x0) {
                    uVar20 = (ulong)puVar17 / (ulong)puStack_148;
                  }
                  if (lStack_138 != 0) {
                    uVar11 = (long)puStack_148 - 1;
                    if (((ulong)puStack_148 & uVar11) == 0) {
                      puVar13 = (uint5 *)(uVar11 & (ulong)puVar17);
                    }
                    else {
                      puVar13 = puVar17;
                      if (puStack_148 <= puVar17) {
                        puVar13 = (uint5 *)((long)puVar17 - uVar20 * (long)puStack_148);
                      }
                    }
                    plVar14 = *(long **)(_uStack_150 + (long)puVar13 * 8);
                    if (plVar14 != (long *)0x0) {
                      do {
                        while( true ) {
                          plVar14 = (long *)*plVar14;
                          if (plVar14 == (long *)0x0) goto LAB_10776c22c;
                          puVar15 = (uint5 *)plVar14[1];
                          if (puVar15 != puVar17) break;
                          uVar6 = (uint5 *)plVar14[2] == puVar17;
                          if ((bool)uVar6) {
                            func_0x00010776dd38();
                            func_0x00010756a69c(param_5,&plStack_e0,lVar16);
                            func_0x00010776dbd0();
                            func_0x00010776dc7c();
                            func_0x00010776daa4();
                            goto LAB_10776c6cc;
                          }
                        }
                        if (((ulong)puStack_148 & uVar11) == 0) {
                          puVar15 = (uint5 *)((ulong)puVar15 & uVar11);
                        }
                        else if (puStack_148 <= puVar15) {
                          uVar12 = 0;
                          if (puStack_148 != (uint5 *)0x0) {
                            uVar12 = (ulong)puVar15 / (ulong)puStack_148;
                          }
                          puVar15 = (uint5 *)((long)puVar15 - uVar12 * (long)puStack_148);
                        }
                      } while (puVar15 == puVar13);
                    }
                  }
LAB_10776c22c:
                  uVar11 = (long)puStack_148 - 1;
                  if (((ulong)puStack_148 & uVar11) == 0) {
                    param_4 = (uint5 *)(uVar11 & (ulong)puVar17);
                  }
                  else {
                    param_4 = puVar17;
                    if (puStack_148 <= puVar17) {
                      param_4 = (uint5 *)((long)puVar17 - uVar20 * (long)puStack_148);
                    }
                  }
                  plVar14 = *(long **)(_uStack_150 + (long)param_4 * 8);
                  if (plVar14 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar14 = (long *)*plVar14;
                        if (plVar14 == (long *)0x0) goto LAB_10776c2b0;
                        puVar13 = (uint5 *)plVar14[1];
                        if (puVar13 != puVar17) break;
                        if ((uint5 *)plVar14[2] == puVar17) goto LAB_10776c3b0;
                      }
                      if (((ulong)puStack_148 & uVar11) == 0) {
                        puVar13 = (uint5 *)((ulong)puVar13 & uVar11);
                      }
                      else if (puStack_148 <= puVar13) {
                        uVar20 = 0;
                        if (puStack_148 != (uint5 *)0x0) {
                          uVar20 = (ulong)puVar13 / (ulong)puStack_148;
                        }
                        puVar13 = (uint5 *)((long)puVar13 - uVar20 * (long)puStack_148);
                      }
                    } while (puVar13 == param_4);
                  }
                }
LAB_10776c2b0:
                plVar14 = (long *)0x28;
                __Znwm();
                plStack_d0 = (long *)0x1;
                *plVar14 = 0;
                plVar14[1] = (long)puVar17;
                plVar14[2] = (long)puVar17;
                plVar14[4] = lVar3;
                plVar14[3] = lVar24;
                plStack_e0 = plVar14;
                pplStack_d8 = &plStack_140;
                if (lVar3 != 0) {
                  do {
                    func_0x00010776da3c();
                  } while (extraout_w10_00 != 0);
                }
                fVar23 = (float)lVar24;
                func_0x00010776dff8();
                if ((puVar21 == (uint5 *)0x0) || (param_3 * (float)puVar21 < fVar23)) {
                  func_0x00010776dfe4();
                  func_0x00010776de2c();
                  func_0x000107546cd0(&uStack_150);
                  puVar21 = puStack_148;
                  if (((ulong)puStack_148 & (long)puStack_148 - 1U) == 0) {
                    param_4 = (uint5 *)((long)puStack_148 - 1U & (ulong)puVar17);
                  }
                  else {
                    param_4 = puVar17;
                    if (puStack_148 <= puVar17) {
                      uVar20 = 0;
                      if (puStack_148 != (uint5 *)0x0) {
                        uVar20 = (ulong)puVar17 / (ulong)puStack_148;
                      }
                      param_4 = (uint5 *)((long)puVar17 - uVar20 * (long)puStack_148);
                    }
                  }
                }
                plVar14 = *(long **)(_uStack_150 + (long)param_4 * 8);
                if (plVar14 == (long *)0x0) {
                  *plStack_e0 = (long)plStack_140;
                  plStack_140 = plStack_e0;
                  *(long ***)(_uStack_150 + (long)param_4 * 8) = &plStack_140;
                  if (*plStack_e0 != 0) {
                    puVar17 = *(uint5 **)(*plStack_e0 + 8);
                    if (((ulong)puVar21 & (long)puVar21 - 1U) == 0) {
                      puVar17 = (uint5 *)((ulong)puVar17 & (long)puVar21 - 1U);
                    }
                    else if (puVar21 <= puVar17) {
                      uVar20 = 0;
                      if (puVar21 != (uint5 *)0x0) {
                        uVar20 = (ulong)puVar17 / (ulong)puVar21;
                      }
                      puVar17 = (uint5 *)((long)puVar17 - uVar20 * (long)puVar21);
                    }
                    *(long **)(_uStack_150 + (long)puVar17 * 8) = plStack_e0;
                  }
                }
                else {
                  *plStack_e0 = *plVar14;
                  *plVar14 = (long)plStack_e0;
                }
                func_0x00010776de14();
                func_0x000107546e6c();
LAB_10776c3b0:
              }
              func_0x00010776daa4();
              lVar16 = lVar16 + 2;
            }
            __Znwm(0x90);
            func_0x00010776dde8();
            func_0x000107546edc();
            uStack_118 = uStack_188;
            uStack_120 = uStack_190;
            uStack_190 = 0;
            uStack_188 = 0;
            func_0x00010776de44();
            func_0x000107546f28();
            uStack_158 = param_5;
            func_0x00010776dcb4();
            func_0x0001075470f4(&plStack_e0);
            func_0x00010776daa4();
            func_0x000107547048(param_1,&uStack_158);
            param_1[0x10] = 1;
            func_0x00010776dfcc();
            if (param_1 != (undefined1 *)0x0) {
              func_0x00010776da84();
            }
LAB_10776c6cc:
            func_0x0001075470f4(&uStack_150);
          }
          else {
            uVar6 = true;
            if ((iStack_1d0 == 2) || (uVar6 = iStack_1d0 == 3, !(bool)uVar6)) {
              *param_1 = 0;
              param_1[0x10] = 0;
              goto LAB_10776c700;
            }
            func_0x00010776debc();
            plVar19 = plStack_208;
            alStack_100[0] = 0;
            alStack_100[1] = 0;
            plStack_90 = plStack_208;
            func_0x00010776daac();
            func_0x00010776e054((long)plVar8 - (long)plVar19);
            puVar17 = &uStack_150;
            func_0x0001075473c0();
            lVar16 = 2;
            for (; uVar6 = plVar19 == plVar8, !(bool)uVar6; plVar19 = plVar19 + 5) {
              lStack_108 = plVar19[4];
              lStack_110 = plVar19[3];
              if (plVar19[4] != 0) {
                do {
                  func_0x00010776da3c();
                } while (extraout_w10_01 != 0);
              }
              lVar1 = plVar19[1];
              for (lVar18 = *plVar19; puVar13 = puStack_148, lVar18 != lVar1; lVar18 = lVar18 + 0x48
                  ) {
                if (*(int *)(lVar18 + 0x40) != 1) {
                  func_0x00010563ab98();
                  goto LAB_10776c828;
                }
                puVar15 = puVar17;
                if ((puStack_148 != (uint5 *)0x0) && (lStack_138 != 0)) {
                  func_0x00010776ddd8();
                  puVar21 = (uint5 *)((long)puVar13 + -1);
                  if (((ulong)puVar13 & (ulong)puVar21) == 0) {
                    puVar22 = (uint5 *)((ulong)puVar17 & (ulong)puVar21);
                  }
                  else {
                    puVar22 = puVar17;
                    if (puVar13 <= puVar17) {
                      uVar20 = 0;
                      if (puVar13 != (uint5 *)0x0) {
                        uVar20 = (ulong)puVar17 / (ulong)puVar13;
                      }
                      puVar22 = (uint5 *)((long)puVar17 - uVar20 * (long)puVar13);
                    }
                  }
                  plVar14 = *(long **)(_uStack_150 + (long)puVar22 * 8);
                  puVar15 = puVar17;
                  if (plVar14 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar14 = (long *)*plVar14;
                        if (plVar14 == (long *)0x0) goto LAB_10776c4f0;
                        puVar10 = (uint5 *)plVar14[1];
                        uVar6 = puVar10 == puVar17;
                        if (!(bool)uVar6) break;
                        func_0x00010776df5c();
                        if ((int)puVar15 != 0) {
                          func_0x00010776dd38();
                          func_0x00010756a69c(param_5,&plStack_e0,lVar16);
                          func_0x00010776dbd0();
                          func_0x00010776dc7c();
                          func_0x00010776daa4();
                          goto LAB_10776c738;
                        }
                      }
                      if (((ulong)puVar13 & (ulong)puVar21) == 0) {
                        puVar10 = (uint5 *)((ulong)puVar10 & (ulong)puVar21);
                      }
                      else if (puVar13 <= puVar10) {
                        uVar20 = 0;
                        if (puVar13 != (uint5 *)0x0) {
                          uVar20 = (ulong)puVar10 / (ulong)puVar13;
                        }
                        puVar10 = (uint5 *)((long)puVar10 - uVar20 * (long)puVar13);
                      }
                    } while (puVar10 == puVar22);
                  }
                }
LAB_10776c4f0:
                func_0x00010776ddd8();
                puVar13 = puStack_148;
                if (puStack_148 != (uint5 *)0x0) {
                  uVar20 = (long)puStack_148 - 1;
                  if (((ulong)puStack_148 & uVar20) == 0) {
                    puVar21 = (uint5 *)(uVar20 & (ulong)puVar15);
                  }
                  else {
                    puVar21 = puVar15;
                    if (puStack_148 <= puVar15) {
                      uVar11 = 0;
                      if (puStack_148 != (uint5 *)0x0) {
                        uVar11 = (ulong)puVar15 / (ulong)puStack_148;
                      }
                      puVar21 = (uint5 *)((long)puVar15 - uVar11 * (long)puStack_148);
                    }
                  }
                  plVar14 = *(long **)(_uStack_150 + (long)puVar21 * 8);
                  puVar17 = puVar15;
                  if (plVar14 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar14 = (long *)*plVar14;
                        if (plVar14 == (long *)0x0) goto LAB_10776c57c;
                        puVar22 = (uint5 *)plVar14[1];
                        if (puVar22 != puVar15) break;
                        func_0x00010776df5c();
                        if (((ulong)puVar17 & 1) != 0) goto LAB_10776c68c;
                      }
                      if (((ulong)puVar13 & uVar20) == 0) {
                        puVar22 = (uint5 *)((ulong)puVar22 & uVar20);
                      }
                      else if (puVar13 <= puVar22) {
                        uVar11 = 0;
                        if (puVar13 != (uint5 *)0x0) {
                          uVar11 = (ulong)puVar22 / (ulong)puVar13;
                        }
                        puVar22 = (uint5 *)((long)puVar22 - uVar11 * (long)puVar13);
                      }
                    } while (puVar22 == puVar21);
                  }
                }
LAB_10776c57c:
                plVar14 = (long *)0x58;
                __Znwm();
                plStack_d0 = (long *)0x1;
                puVar17 = (uint5 *)(plVar14 + 2);
                *plVar14 = 0;
                plVar14[1] = (long)puVar15;
                plStack_e0 = plVar14;
                pplStack_d8 = &plStack_140;
                func_0x000104c2fe00(puVar17,lVar18 + 8);
                plVar14[10] = lStack_108;
                plVar14[9] = lStack_110;
                lVar24 = lStack_110;
                if (lStack_108 != 0) {
                  do {
                    func_0x00010776da3c();
                  } while (extraout_w10_02 != 0);
                }
                fVar23 = (float)lVar24;
                func_0x00010776dff8();
                if ((puVar13 == (uint5 *)0x0) || (param_3 * (float)puVar13 < fVar23)) {
                  func_0x00010776dfe4();
                  func_0x00010776de2c();
                  puVar17 = &uStack_150;
                  func_0x0001075473c0();
                  puVar13 = puStack_148;
                  if (((ulong)puStack_148 & (long)puStack_148 - 1U) == 0) {
                    puVar21 = (uint5 *)((long)puStack_148 - 1U & (ulong)puVar15);
                  }
                  else {
                    puVar21 = puVar15;
                    if (puStack_148 <= puVar15) {
                      uVar20 = 0;
                      if (puStack_148 != (uint5 *)0x0) {
                        uVar20 = (ulong)puVar15 / (ulong)puStack_148;
                      }
                      puVar21 = (uint5 *)((long)puVar15 - uVar20 * (long)puStack_148);
                    }
                  }
                }
                plVar14 = *(long **)(_uStack_150 + (long)puVar21 * 8);
                if (plVar14 == (long *)0x0) {
                  *plStack_e0 = (long)plStack_140;
                  plStack_140 = plStack_e0;
                  *(long ***)(_uStack_150 + (long)puVar21 * 8) = &plStack_140;
                  if (*plStack_e0 != 0) {
                    puVar15 = *(uint5 **)(*plStack_e0 + 8);
                    if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
                      puVar15 = (uint5 *)((ulong)puVar15 & (long)puVar13 - 1U);
                    }
                    else if (puVar13 <= puVar15) {
                      uVar20 = 0;
                      if (puVar13 != (uint5 *)0x0) {
                        uVar20 = (ulong)puVar15 / (ulong)puVar13;
                      }
                      puVar15 = (uint5 *)((long)puVar15 - uVar20 * (long)puVar13);
                    }
                    *(long **)(_uStack_150 + (long)puVar15 * 8) = plStack_e0;
                  }
                }
                else {
                  *plStack_e0 = *plVar14;
                  *plVar14 = (long)plStack_e0;
                }
                func_0x00010776de14();
                func_0x00010754755c();
LAB_10776c68c:
              }
              func_0x00010776daa4();
              lVar16 = lVar16 + 2;
            }
            __Znwm(0x90);
            func_0x00010776dde8();
            func_0x0001075475cc();
            uStack_118 = uStack_188;
            uStack_120 = uStack_190;
            uStack_190 = 0;
            uStack_188 = 0;
            func_0x00010776de44();
            func_0x000107547618();
            uStack_158 = param_5;
            func_0x00010776dcb4();
            func_0x0001075477d8(&plStack_e0);
            func_0x00010776daa4();
            puVar9 = param_1;
            func_0x00010754772c(param_1,&uStack_158);
            param_1[0x10] = 1;
            func_0x00010776dfcc();
            if (puVar9 != (undefined1 *)0x0) {
              func_0x00010776da84();
            }
LAB_10776c738:
            func_0x0001075477d8(&uStack_150);
          }
          func_0x0001072c9b9c(&uStack_190);
          func_0x00010776d06c(&plStack_90);
          func_0x0001072c9b9c(auStack_180);
          func_0x0001072c9884(auStack_168);
        }
      }
LAB_10776c700:
      func_0x0001072c95d0(auStack_270);
    }
    func_0x0001072c95d0(alStack_100);
LAB_10776c0b4:
    func_0x00010776d06c(&plStack_208);
    func_0x0001072c9854(auStack_1f0);
    func_0x0001072c9854(auStack_1d8);
  }
  func_0x00010776d950(uStack_78);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_10776c804:
  FUN_10776cc88();
LAB_10776c828:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10776c82c);
  (*pcVar5)();
}



/* Entry: 10776cc88; end: 10776cc93;  */

long * FUN_10776cc88(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x20;
  long lVar1;
  
  func_0x00010776db90();
  func_0x00010776dc08();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    if (0x666666666666666 < unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x28;
        func_0x00010776cd34();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    func_0x00010776df18(unaff_x20 * 5);
  }
  func_0x00010776de74(0x28);
  return param_1;
}



/* Entry: 10776cfc0; end: 10776d017;  */

void FUN_10776cfc0(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010776dbe8();
  uVar1 = *(uint *)(unaff_x20 + 0x38);
  if (uVar1 != 0xffffffff) {
    func_0x00010776df04((&PTR_DAT_1109d5e30)[uVar1]);
    *(uint *)(unaff_x19 + 0x38) = uVar1;
  }
  return;
}



/* Entry: 10776d25c; end: 10776d32b;  */

void FUN_10776d25c(long param_1)

{
  long *plVar1;
  long *unaff_x19;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010776dc08();
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010776d32c(uVar3);
    lVar2 = uVar3 + 0x40;
    unaff_x19[1] = lVar2;
  }
  else {
    plVar1 = unaff_x19;
    func_0x000107289660();
    func_0x000107289720(auStack_58,plVar1,unaff_x19[1] - *unaff_x19 >> 6,(ulong *)(param_1 + 0x10));
    func_0x00010776d32c(lStack_48);
    lStack_48 = lStack_48 + 0x40;
    func_0x0001072896a0();
    lVar2 = unaff_x19[1];
    func_0x000107289820(auStack_58);
  }
  unaff_x19[1] = lVar2;
  return;
}



/* Entry: 10776d444; end: 10776d44b;  */

void FUN_10776d444(void)

{
  return;
}



/* Entry: 10776d540; end: 10776d54b;  */

undefined ** FUN_10776d540(void)

{
  return &PTR_DAT_1109d5fc0;
}



/* Entry: 10776d728; end: 10776d747;  */

void FUN_10776d728(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109d6060;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10776d8b4; end: 10776d94f;  */

void FUN_10776d8b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  param_1 = (undefined8 *)*param_1;
  if (*(int *)(param_1 + 7) == 0) {
    *param_2 = *param_3;
  }
  else {
    func_0x00010776cbf4(param_1);
    *param_1 = *param_3;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  return;
}



/* Entry: 10776e5d0; end: 10776f093;  */

void FUN_10776e5d0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint6 uVar2;
  undefined6 uVar3;
  uint6 uVar4;
  uint uVar5;
  bool bVar6;
  undefined3 uVar7;
  undefined1 uVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 extraout_x8;
  uint *puVar20;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x8_01;
  uint uVar21;
  uint uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  long *plVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_458 [64];
  undefined8 uStack_418;
  undefined8 *puStack_410;
  long *plStack_408;
  undefined1 *puStack_400;
  undefined *puStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_398;
  ulong uStack_390;
  uint uStack_384;
  long lStack_380;
  undefined8 uStack_378;
  long lStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [8];
  undefined4 uStack_318;
  undefined1 uStack_310;
  undefined1 auStack_308 [8];
  undefined4 uStack_300;
  uint uStack_2f0;
  uint uStack_2ec;
  undefined8 uStack_2e8;
  byte bStack_2e0;
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [8];
  undefined4 uStack_2b0;
  undefined1 uStack_2a8;
  uint uStack_2a0;
  uint uStack_29c;
  undefined8 uStack_298;
  byte bStack_290;
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [8];
  undefined4 uStack_260;
  undefined1 uStack_258;
  uint uStack_250;
  uint uStack_24c;
  undefined8 uStack_248;
  byte bStack_240;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [8];
  undefined4 uStack_218;
  undefined1 uStack_210;
  undefined1 auStack_208 [24];
  uint uStack_1f0;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  byte bStack_1e0;
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [8];
  int iStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [8];
  undefined4 uStack_190;
  undefined1 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  byte bStack_170;
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  char cStack_f0;
  undefined1 auStack_e8 [16];
  char cStack_d8;
  long alStack_d0 [2];
  undefined1 auStack_c0 [16];
  char cStack_b0;
  undefined1 auStack_88 [16];
  char cStack_78;
  undefined8 uStack_70;
  
  plVar10 = param_2;
  func_0x00010776f478();
  plVar30 = plVar10 + 1;
  plVar11 = plVar30;
  uStack_70 = extraout_x8;
  (**(code **)(*plVar10 + 0x20))();
  uVar8 = plVar11 == (long *)0x3;
  if (!(bool)uVar8) {
    func_0x000107878fec(&lStack_180);
    func_0x0001004c3cd0(auStack_c0,&UNK_10f4269dc,&lStack_180);
    func_0x00010048a6c8(auStack_168,auStack_c0,&UNK_10f417b93);
    func_0x00010776f488();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
    plVar10 = &lStack_180;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010776f498();
    goto LAB_10776ee54;
  }
  (**(code **)(*param_2 + 0x28))(auStack_c0,plVar30,1);
  uStack_190 = 1;
  uStack_188 = 1;
  uStack_1f0 = uStack_1f0 & 0xffffff00;
  uStack_1ec = uStack_1ec & 0xffffff00;
  func_0x00010776f420(&lStack_180);
  func_0x0001072c9854(auStack_198);
  func_0x0001072f5f6c(auStack_c0);
  if ((bStack_170 & 1) == 0) {
    func_0x00010002b838(auStack_1b0,&UNK_10f426a0f);
    func_0x00010776f488();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
    func_0x00010776f498();
  }
  else {
    func_0x0001072c9ff4(auStack_1c0,lStack_180 + 0x10);
    uVar8 = iStack_1b8 == 1;
    if ((bool)uVar8) {
      (**(code **)(*param_2 + 0x28))(alStack_d0,plVar30,2);
      uVar12 = 0;
      (**(code **)(alStack_d0[0] + 0x30))();
      if ((uVar12 & 1) == 0) {
        func_0x00010002b838(auStack_208,&UNK_10f426a68);
        func_0x00010776f488();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
        func_0x00010776f498();
      }
      else {
        func_0x00010776f514();
        func_0x00010776f4bc(auStack_c0);
        uStack_1f0 = uStack_1f0 & 0xffffff00;
        bStack_1e0 = 0;
        uVar8 = cStack_b0 == '\x01';
        if ((bool)uVar8) {
          uStack_218 = 3;
          uStack_210 = 1;
          uStack_250 = uStack_250 & 0xffffff00;
          uStack_24c = uStack_24c & 0xffffff00;
          func_0x00010776f420(auStack_88);
          func_0x0001075530c4(&uStack_1f0,auStack_88);
          func_0x0001072c95d0(auStack_88);
          func_0x0001072c9854(auStack_220);
          if ((bStack_1e0 & 1) != 0) goto LAB_10776e740;
          func_0x00010002b838(auStack_238,&UNK_10f426a9a);
          func_0x00010776f488();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_238);
          func_0x00010776f498();
        }
        else {
LAB_10776e740:
          func_0x00010776f514();
          func_0x00010776f4bc(auStack_88);
          uStack_250 = uStack_250 & 0xffffff00;
          bStack_240 = 0;
          uVar8 = cStack_78 == '\x01';
          if ((bool)uVar8) {
            uStack_260 = 3;
            uStack_258 = 1;
            uStack_2a0 = uStack_2a0 & 0xffffff00;
            uStack_29c = uStack_29c & 0xffffff00;
            func_0x00010776f420(auStack_e8);
            func_0x0001075530c4(&uStack_250,auStack_e8);
            func_0x0001072c95d0(auStack_e8);
            func_0x0001072c9854(auStack_268);
            if ((bStack_240 & 1) != 0) goto LAB_10776e7b8;
            func_0x00010002b838(auStack_280,&UNK_10f426abf);
            func_0x00010776f488();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_280);
            func_0x00010776f498();
          }
          else {
LAB_10776e7b8:
            func_0x00010776f514();
            func_0x00010776f4bc(auStack_e8);
            uStack_2a0 = uStack_2a0 & 0xffffff00;
            bStack_290 = 0;
            uVar8 = cStack_d8 == '\x01';
            if ((bool)uVar8) {
              uStack_2b0 = 1;
              uStack_2a8 = 1;
              uStack_2f0 = uStack_2f0 & 0xffffff00;
              uStack_2ec = uStack_2ec & 0xffffff00;
              func_0x00010776f420(auStack_100);
              func_0x0001075530c4(&uStack_2a0,auStack_100);
              func_0x0001072c95d0(auStack_100);
              func_0x0001072c9854(auStack_2b8);
              if ((bStack_290 & 1) != 0) goto LAB_10776e82c;
              func_0x00010002b838(auStack_2d0,&UNK_10f426ae6);
              func_0x00010776f488();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d0);
              func_0x00010776f498();
            }
            else {
LAB_10776e82c:
              func_0x00010776f514();
              func_0x00010776f4bc(auStack_100);
              uStack_2f0 = uStack_2f0 & 0xffffff00;
              bStack_2e0 = 0;
              uVar8 = cStack_f0 == '\x01';
              if ((bool)uVar8) {
                uStack_318 = 1;
                uStack_310 = 1;
                uVar7 = auStack_110._5_3_;
                auStack_110._0_4_ = auStack_110._0_4_ & 0xffffff00;
                auStack_110._0_5_ = CONCAT14(0,auStack_110._0_4_);
                auStack_110 = (undefined1  [8])CONCAT35(uVar7,auStack_110._0_5_);
                func_0x00010776f420(auStack_308);
                func_0x0001075530c4(&uStack_2f0,auStack_308);
                func_0x0001072c95d0(auStack_308);
                func_0x0001072c9854(auStack_320);
                if ((bStack_2e0 & 1) != 0) goto LAB_10776e8a0;
                func_0x00010002b838(auStack_338,&UNK_10f426b18);
                func_0x00010776f488();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_338);
                func_0x00010776f498();
              }
              else {
LAB_10776e8a0:
                if (bStack_1e0 == 1) {
                  lStack_350 = CONCAT44(uStack_1ec,uStack_1f0);
                  uStack_348 = uStack_1e8;
                  puVar20 = &uStack_1f0;
                }
                else {
                  puVar20 = (uint *)&lStack_350;
                }
                puVar20[0] = 0;
                puVar20[1] = 0;
                puVar20[2] = 0;
                puVar20[3] = 0;
                if (bStack_240 == 1) {
                  lStack_360 = CONCAT44(uStack_24c,uStack_250);
                  uStack_358 = uStack_248;
                  puVar20 = &uStack_250;
                }
                else {
                  puVar20 = (uint *)&lStack_360;
                }
                puVar20[0] = 0;
                puVar20[1] = 0;
                puVar20[2] = 0;
                puVar20[3] = 0;
                if (bStack_290 == 1) {
                  lStack_370 = CONCAT44(uStack_29c,uStack_2a0);
                  uStack_368 = uStack_298;
                  puVar20 = &uStack_2a0;
                }
                else {
                  puVar20 = (uint *)&lStack_370;
                }
                puVar20[0] = 0;
                puVar20[1] = 0;
                puVar20[2] = 0;
                puVar20[3] = 0;
                if (cStack_f0 == '\0') {
                  puVar20 = (uint *)&lStack_380;
                }
                else {
                  lStack_380 = CONCAT44(uStack_2ec,uStack_2f0);
                  uStack_378 = uStack_2e8;
                  puVar20 = &uStack_2f0;
                }
                puVar20[0] = 0;
                puVar20[1] = 0;
                puVar20[2] = 0;
                puVar20[3] = 0;
                param_3 = (undefined8 *)0x98;
                __Znwm();
                uStack_3a8 = uStack_178;
                lStack_3b0 = lStack_180;
                uStack_3b8 = uStack_348;
                lStack_3c0 = lStack_350;
                uStack_3c8 = uStack_358;
                lStack_3d0 = lStack_360;
                uStack_3d8 = uStack_368;
                lStack_3e0 = lStack_370;
                uStack_3e8 = uStack_378;
                lStack_3f0 = lStack_380;
                uStack_178 = 0;
                lStack_180 = 0;
                lStack_350 = 0;
                uStack_348 = 0;
                lStack_360 = 0;
                uStack_358 = 0;
                lStack_370 = 0;
                uStack_368 = 0;
                lStack_380 = 0;
                uStack_378 = 0;
                uStack_300 = 3;
                uVar4 = *(uint6 *)(lStack_3b0 + 0x20);
                if (lStack_3c0 == 0) {
                  uStack_384 = 0;
                  uVar21 = 1;
                  uStack_390 = 1;
                  uStack_398 = 1;
                  uVar22 = 1;
                  uVar23 = 1;
                }
                else {
                  uVar21 = *(uint *)(lStack_3c0 + 0x20);
                  uVar2 = *(uint6 *)(lStack_3c0 + 0x20);
                  uStack_384 = *(ushort *)(lStack_3c0 + 0x24) >> 8 & 1;
                  uStack_390 = (ulong)(uVar2 >> 8) & 1;
                  uStack_398 = (ulong)(uVar2 >> 0x10) & 1;
                  uVar22 = (uint)(uVar2 >> 0x18) & 1;
                  uVar23 = *(ushort *)(lStack_3c0 + 0x24) & 1;
                }
                if (lStack_3d0 == 0) {
                  uVar26 = 1;
                  uVar27 = 1;
                  uVar28 = 1;
                  uVar9 = 1;
                  uVar14 = 1;
                  uVar24 = 0;
                }
                else {
                  uVar26 = *(uint *)(lStack_3d0 + 0x20);
                  uVar3 = *(undefined6 *)(lStack_3d0 + 0x20);
                  uVar24 = *(ushort *)(lStack_3d0 + 0x24) >> 8 & 1;
                  uVar27 = (uint)((uint6)uVar3 >> 8) & 1;
                  uVar9 = (uint)((uint6)uVar3 >> 0x10);
                  uVar28 = uVar9 & 1;
                  uVar9 = uVar9 >> 8 & 1;
                  uVar14 = *(ushort *)(lStack_3d0 + 0x24) & 1;
                }
                if (lStack_3e0 == 0) {
                  uVar17 = 0;
                  uVar18 = 1;
                  uVar29 = 1;
                  uVar19 = 1;
                  uVar16 = 1;
                  uVar15 = 1;
                }
                else {
                  uVar18 = *(uint *)(lStack_3e0 + 0x20);
                  uVar3 = *(undefined6 *)(lStack_3e0 + 0x20);
                  uVar17 = *(ushort *)(lStack_3e0 + 0x24) >> 8 & 1;
                  uVar15 = *(ushort *)(lStack_3e0 + 0x24) & 1;
                  uVar19 = (uint)((uint6)uVar3 >> 0x10);
                  uVar16 = uVar19 >> 8 & 1;
                  uVar19 = uVar19 & 1;
                  uVar29 = (uint)((uint6)uVar3 >> 8) & 1;
                }
                if (lStack_3f0 == 0) {
                  uVar31 = 1;
                  uVar34 = 1;
                  uVar33 = 1;
                  uVar32 = 1;
                  uVar25 = 1;
                  uVar12 = 0;
                }
                else {
                  uVar25 = *(ushort *)(lStack_3f0 + 0x24);
                  uVar31 = *(uint *)(lStack_3f0 + 0x20);
                  uVar2 = *(uint6 *)(lStack_3f0 + 0x20);
                  uVar34 = (ulong)(uVar2 >> 8);
                  uVar33 = (ulong)(uVar2 >> 0x10);
                  uVar32 = (uint)(uint3)(uVar2 >> 0x18);
                  uVar12 = (ulong)(uVar25 >> 8);
                }
                uVar5 = (uint)(uVar4 >> 0x10);
                uVar1 = (uint)((uVar34 & 0xff) << 8);
                if (((uint)(uVar4 >> 8) & 1 & (uint)uStack_390 & uVar27 & uVar29) == 0) {
                  uVar1 = 0;
                }
                uVar27 = (uint)((uVar33 & 0xff) << 0x10);
                if ((uVar5 & 1 & (uint)uStack_398 & uVar28 & uVar19) == 0) {
                  uVar27 = 0;
                }
                uVar32 = uVar32 << 0x18;
                if ((uVar5 >> 8 & 1 & uVar22 & uVar9 & uVar16) == 0) {
                  uVar32 = 0;
                }
                uVar25 = uVar25 & 0xff;
                if (((ushort)(uVar4 >> 0x20) & 1 & uVar23 & uVar14 & uVar15) == 0) {
                  uVar25 = 0;
                }
                bVar6 = (uVar4 & 0x10000000000) == 0;
                uVar8 = bVar6 && ((uStack_384 == 0 && uVar24 == 0) && uVar17 == 0);
                uVar23 = 0x100;
                if (bVar6 && ((uStack_384 == 0 && uVar24 == 0) && uVar17 == 0)) {
                  uVar23 = (ushort)((uVar12 << 0x28) >> 0x20);
                }
                auStack_110._4_2_ = uVar25 | uVar23;
                auStack_110._0_4_ =
                     uVar1 | (uint)uVar4 & uVar21 & uVar26 & uVar18 & uVar31 & 1 | uVar27 | uVar32;
                func_0x0001072c9f9c(param_3,0x14,auStack_308,auStack_110);
                func_0x0001072c9884(auStack_308);
                *param_3 = &PTR_DAT_1109d6170;
                param_3[10] = uStack_3a8;
                param_3[9] = lStack_3b0;
                auStack_110 = (undefined1  [8])0x0;
                uStack_108 = 0;
                param_3[0xc] = uStack_3b8;
                param_3[0xb] = lStack_3c0;
                uStack_118 = 0;
                uStack_120 = 0;
                param_3[0xe] = uStack_3c8;
                param_3[0xd] = lStack_3d0;
                uStack_128 = 0;
                uStack_130 = 0;
                param_3[0x10] = uStack_3d8;
                param_3[0xf] = lStack_3e0;
                uStack_138 = 0;
                uStack_140 = 0;
                param_3[0x12] = uStack_3e8;
                param_3[0x11] = lStack_3f0;
                uStack_148 = 0;
                uStack_150 = 0;
                puStack_340 = param_3;
                func_0x0001072c9b9c(&uStack_150);
                func_0x0001072c9b9c(&uStack_140);
                func_0x0001072c9b9c(&uStack_130);
                func_0x0001072c9b9c(&uStack_120);
                func_0x0001072c9b9c(auStack_110);
                *param_1 = param_3;
                puVar13 = (undefined8 *)0x20;
                __Znwm();
                *puVar13 = &PTR_DAT_1109d61f8;
                puVar13[1] = 0;
                puVar13[2] = 0;
                puVar13[3] = param_3;
                param_1[1] = puVar13;
                puStack_340 = (undefined8 *)0x0;
                *(undefined1 *)(param_1 + 2) = 1;
                func_0x00010776f3f0(&puStack_340);
                func_0x0001072c9b9c(&lStack_380);
                func_0x0001072c9b9c(&lStack_370);
                func_0x0001072c9b9c(&lStack_360);
                func_0x0001072c9b9c(&lStack_350);
              }
              func_0x0001072c95d0(&uStack_2f0);
              func_0x0001072f5f4c(auStack_100);
            }
            func_0x0001072c95d0(&uStack_2a0);
            func_0x0001072f5f4c(auStack_e8);
          }
          func_0x0001072c95d0(&uStack_250);
          func_0x0001072f5f4c(auStack_88);
        }
        func_0x0001072c95d0(&uStack_1f0);
        func_0x0001072f5f4c(auStack_c0);
      }
      func_0x0001072f5f6c(alStack_d0);
    }
    else {
      func_0x00010756a788(auStack_c0,auStack_1c0);
      func_0x00010724ef84(auStack_88,auStack_c0);
      func_0x0001004c3cd0(&uStack_1f0,&UNK_10f426a2b,auStack_88);
      func_0x00010048a6c8(auStack_1d8,&uStack_1f0,&UNK_10f417b93);
      func_0x00010776f488();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
      func_0x000104c2f714(auStack_c0);
      func_0x00010776f498();
    }
    func_0x0001072c9884(auStack_1c0);
  }
  plVar10 = &lStack_180;
  func_0x0001072c95d0();
LAB_10776ee54:
  func_0x00010776f430(uStack_70);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_338);
  func_0x0001072c95d0(&uStack_2f0);
  func_0x0001072f5f4c(auStack_100);
  func_0x0001072c95d0(&uStack_2a0);
  func_0x0001072f5f4c(auStack_e8);
  func_0x0001072c95d0(&uStack_250);
  func_0x0001072f5f4c(auStack_88);
  func_0x0001072c95d0(&uStack_1f0);
  func_0x0001072f5f4c(auStack_c0);
  func_0x0001072f5f6c(alStack_d0);
  func_0x0001072c9884(auStack_1c0);
  plVar11 = &lStack_180;
  func_0x0001072c95d0();
  func_0x00010776f4d4();
  puStack_3f8 = &DAT_10776f094;
  puStack_410 = param_3;
  plStack_408 = plVar10;
  puStack_400 = &stack0xfffffffffffffff0;
  func_0x00010776f478();
  uStack_4a8 = 0;
  uStack_4a0 = 0;
  uStack_498 = 0;
  uStack_418 = extraout_x8_01;
  func_0x000100060964(auStack_458,&UNK_10f426b4a);
  func_0x0001074d2254(&uStack_4a8,auStack_458);
  func_0x000104c2f714(auStack_458);
  func_0x00010776f4f4(plVar11[9]);
  func_0x00010776f4ac();
  func_0x0001072aad1c(&uStack_4a8,auStack_458);
  func_0x00010776f490();
  puStack_4c8 = &UNK_10e52b660;
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  if (plVar11[0xb] != 0) {
    func_0x00010776f4f4();
    func_0x00010776f4ac();
    func_0x00010776f4c4();
    func_0x00010776f460();
    func_0x00010776f4cc();
    func_0x00010776f4a4();
    func_0x00010776f490();
  }
  if (plVar11[0xd] != 0) {
    func_0x00010776f4f4();
    func_0x00010776f4ac();
    func_0x00010776f4c4();
    func_0x00010776f460();
    func_0x00010776f4cc();
    func_0x00010776f4a4();
    func_0x00010776f490();
  }
  if (plVar11[0xf] != 0) {
    func_0x00010776f4f4();
    func_0x00010776f4ac();
    func_0x00010776f4c4();
    func_0x00010776f460();
    func_0x00010776f4cc();
    func_0x00010776f4a4();
    func_0x00010776f490();
  }
  if (plVar11[0x11] != 0) {
    func_0x00010776f4f4();
    func_0x00010776f4ac();
    func_0x00010776f4c4();
    func_0x00010776f460();
    func_0x00010776f4cc();
    func_0x00010776f4a4();
    func_0x00010776f490();
  }
  func_0x000104c33260(auStack_458,&puStack_4c8);
  func_0x0001075726d4(&uStack_4a8,auStack_458);
  func_0x000104c335c0(auStack_458);
  func_0x000107327958(&uStack_4e0,&uStack_4a8);
  *extraout_x8_00 = 0;
  *(undefined8 *)(extraout_x8_00 + 4) = uStack_4d8;
  *(undefined8 *)(extraout_x8_00 + 2) = uStack_4e0;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  func_0x000104c33108(&uStack_4e0);
  func_0x000104c33548(&puStack_4c8);
  func_0x000107269124(&uStack_4a8);
  func_0x00010776f430(uStack_418);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010776f4a4();
  func_0x00010776f490();
  func_0x000104c33548(&puStack_4c8);
  do {
    func_0x000107269124(&uStack_4a8);
    func_0x00010776f4d4();
    func_0x00010776f490();
  } while( true );
}



/* Entry: 10776f3d4; end: 10776f3d7;  */

void FUN_10776f3d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10776fd0c; end: 10776fd13;  */

void FUN_10776fd0c(void)

{
  return;
}



/* Entry: 10776feac; end: 10776fed3;  */

void FUN_10776feac(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001077700e0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109d6258;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10776fff8; end: 10777005f;  */

void FUN_10776fff8(long param_1,byte param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 8);
  if ((*pbVar1 & 1) == 0) {
    func_0x00010776fa08();
    pbVar1 = *(byte **)(param_1 + 8);
  }
  else {
    param_2 = 1;
  }
  *pbVar1 = param_2;
  return;
}



/* Entry: 107770e10; end: 107770fc7;  */

void FUN_107770e10(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int extraout_w10;
  undefined1 auStack_160 [16];
  undefined1 uStack_150;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [4];
  undefined1 uStack_d4;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [81];
  undefined1 uStack_57;
  
  func_0x000100456794(auStack_f0,param_2,&UNK_10f426c98);
  func_0x000107878fec(auStack_108,param_4);
  func_0x00010533a9c0(auStack_d8,auStack_f0,auStack_108);
  func_0x00010048a6c8(auStack_c0,auStack_d8,&UNK_10f426c9a);
  uStack_118 = *(undefined8 *)(param_2 + 0x48);
  uStack_120 = *(undefined8 *)(param_2 + 0x40);
  if (*(long *)(param_2 + 0x48) != 0) {
    do {
      func_0x000107771b38();
    } while (extraout_w10 != 0);
  }
  func_0x000107771650(auStack_138,param_6);
  func_0x00010777193c(auStack_148,param_7,param_2 + 0x30);
  func_0x000107771c28(auStack_a8,auStack_c0,&uStack_120,auStack_138,auStack_148);
  func_0x0001072c9830(auStack_148);
  func_0x0001072c9854(auStack_138);
  func_0x0001072c97fc(&uStack_120);
  func_0x000107771be0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  uStack_57 = 0;
  auStack_160[0] = 0;
  uStack_150 = 0;
  auStack_d8[0] = 0;
  uStack_d4 = 0;
  func_0x00010777067c(param_1,auStack_a8,param_3,0,param_5,auStack_160,auStack_d8);
  func_0x0001072c9854(auStack_160);
  func_0x000107771bbc();
  return;
}



/* Entry: 10777167c; end: 10777168f;  */

void FUN_10777167c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    func_0x0001072ca12c();
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
  return;
}



/* Entry: 10777189c; end: 10777192f;  */

void FUN_10777189c(long param_1,long param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x10);
  if (**(char **)(param_1 + 8) == '\x01') {
    if (*pcVar2 == '\0') {
      cVar1 = '\0';
    }
    else {
      func_0x000107770440();
      pcVar2 = *(char **)(param_1 + 0x10);
      cVar1 = (char)param_2;
    }
  }
  else {
    cVar1 = '\0';
    if (*(int *)(param_2 + 8) == 2) {
      cVar1 = *pcVar2;
    }
  }
  *pcVar2 = cVar1;
  return;
}



/* Entry: 107771a98; end: 107771aab;  */

void FUN_107771a98(void)

{
  func_0x000107771b04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107772090; end: 107772147;  */

void FUN_107772090(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = *(long **)(param_2 + 0x58);
  while (plVar2 != (long *)(param_2 + 0x60)) {
    (**(code **)(*(long *)plVar2[5] + 0x20))(&lStack_58);
    lVar1 = lStack_50;
    for (lVar3 = lStack_58; lVar3 != lVar1; lVar3 = lVar3 + 0x78) {
      func_0x00010756c12c(param_1,lVar3);
    }
    plVar2 = &lStack_58;
    func_0x00010756c400();
    func_0x000107772c20();
  }
  return;
}



/* Entry: 107772b44; end: 107772b53;  */

long FUN_107772b44(long param_1)

{
  func_0x000100060934(param_1,"step");
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 107773414; end: 107773b57;  */

void FUN_107773414(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  undefined8 extraout_x8;
  code *extraout_x9;
  code *extraout_x9_00;
  long *plVar8;
  long lVar9;
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [16];
  undefined1 uStack_2a8;
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [16];
  undefined1 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  byte bStack_230;
  undefined1 auStack_228 [24];
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1e7;
  byte bStack_1e6;
  byte bStack_1e5;
  byte bStack_1e4;
  byte bStack_1e3;
  byte bStack_1e2;
  undefined1 uStack_1e1;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [4];
  undefined1 uStack_1cc;
  long lStack_1c0;
  undefined8 uStack_1b8;
  byte bStack_1b0;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  long lStack_170;
  undefined1 auStack_168 [136];
  char cStack_e0;
  undefined1 auStack_d8 [56];
  byte bStack_a0;
  undefined1 auStack_98 [4];
  undefined1 uStack_94;
  byte bStack_60;
  undefined8 uStack_58;
  
  func_0x0001077740c4();
  plVar8 = param_2 + 1;
  plVar4 = plVar8;
  uStack_58 = extraout_x8;
  (**(code **)(*param_2 + 0x20))();
  uVar3 = plVar4 == (long *)0x5;
  if ((bool)uVar3) {
    func_0x000107774124();
    (*extraout_x9)(&lStack_170,plVar8,1);
    auStack_258[0] = 0;
    uStack_248 = 0;
    auStack_98[0] = 0;
    uStack_94 = 0;
    func_0x00010777067c(&lStack_240,param_3,&lStack_170,1,param_4,auStack_258,auStack_98);
    func_0x0001072c9854(auStack_258);
    func_0x000107774104();
    if ((bStack_230 & 1) == 0) {
      func_0x0001077741cc();
    }
    else {
      func_0x000107774124();
      func_0x000107774170(&lStack_170);
      (**(code **)(lStack_170 + 0x68))(auStack_98,auStack_168);
      func_0x000107774104();
      if ((bStack_60 & 1) == 0) {
        func_0x000107774124();
        func_0x000107774170(auStack_1a0);
        func_0x00010754c3ec(auStack_d8,auStack_1a0);
        func_0x0001004c3cd0(&lStack_170,&UNK_10f4257d9,auStack_d8);
        func_0x00010048a6c8(auStack_270,&lStack_170,&UNK_10f417b93);
        func_0x00010756a69c(param_3,auStack_270,2);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_270);
        func_0x0001077740e8();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
        func_0x000107774198();
        func_0x0001077741cc();
      }
      else {
        func_0x000107774124();
        func_0x000107774164(&lStack_170);
        (**(code **)(lStack_170 + 0x68))(auStack_d8,auStack_168);
        func_0x000107774104();
        if ((bStack_a0 & 1) == 0) {
          func_0x000107774124();
          func_0x000107774164(&lStack_1c0);
          func_0x00010754c3ec(auStack_1a0,&lStack_1c0);
          func_0x0001004c3cd0(&lStack_170,&UNK_10f4270d7,auStack_1a0);
          func_0x00010048a6c8(auStack_288,&lStack_170,&UNK_10f417b93);
          func_0x00010756a69c(param_3,auStack_288,3);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_288);
          func_0x0001077740e8();
          func_0x0001077741a0();
          func_0x0001072f5f6c(&lStack_1c0);
          func_0x0001077741cc();
        }
        else {
          func_0x00010724ef84(auStack_1a0,auStack_98);
          func_0x00010724ef84(auStack_188,auStack_d8);
          func_0x0001000e3098(auStack_2a0,auStack_1a0,2);
          func_0x000107754984(&lStack_170,param_4,auStack_2a0);
          func_0x0001000e30f4(auStack_2a0);
          lVar9 = 0x18;
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                      (auStack_1a0 + lVar9);
            lVar9 = lVar9 + -0x18;
          } while (lVar9 != -0x18);
          func_0x000107774124();
          (*extraout_x9_00)(auStack_1a0,plVar8,4);
          uVar3 = cStack_e0 == '\0';
          plVar4 = &lStack_170;
          if ((bool)uVar3) {
            plVar4 = param_4;
          }
          auStack_2b8[0] = 0;
          uStack_2a8 = 0;
          auStack_1d0[0] = 0;
          uStack_1cc = 0;
          func_0x00010777067c(&lStack_1c0,param_3,auStack_1a0,4,plVar4,auStack_2b8,auStack_1d0);
          func_0x0001072c9854(auStack_2b8);
          func_0x000107774198();
          if ((bStack_1b0 & 1) == 0) {
            func_0x00010002b838(auStack_2d0,&UNK_10f4258f4);
            func_0x00010756a69c(param_3,auStack_2d0,4);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d0);
            uVar7 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            if ((bStack_60 != 1) || ((bStack_a0 & 1) == 0)) goto LAB_107773980;
            puVar5 = (undefined8 *)0xf0;
            __Znwm();
            lVar9 = lStack_1c0;
            uStack_1f8 = uStack_238;
            lStack_200 = lStack_240;
            puVar5[1] = 0;
            puVar5[2] = 0;
            *puVar5 = &PTR_DAT_1109d6ad8;
            lStack_240 = 0;
            uStack_238 = 0;
            uStack_208 = uStack_1b8;
            lStack_210 = lStack_1c0;
            lStack_1c0 = 0;
            uStack_1b8 = 0;
            iVar1 = *(int *)(lStack_200 + 0x18);
            if (iVar1 == 7) {
              func_0x0001072c9ff4(auStack_1e0,lVar9 + 0x10);
              func_0x0001072f5dec(auStack_1a0,auStack_1e0);
              puVar6 = auStack_1d0;
              func_0x0001072f6ad4(puVar6,auStack_1a0);
            }
            else {
              puVar6 = auStack_1d0;
              func_0x0001072c9ff4(puVar6,lStack_200 + 0x10);
            }
            func_0x00010785f1f4();
            uStack_1e7 = 0;
            puVar6 = puVar6 + 0x2e0;
            func_0x00010724e2c8(puVar6,&uStack_1e7);
            if ((((ulong)puVar6 & 1) == 0) && (*(char *)(lStack_200 + 0x20) == '\x01')) {
              bStack_1e6 = *(byte *)(lStack_210 + 0x20);
            }
            else {
              bStack_1e6 = 0;
            }
            bStack_1e6 = bStack_1e6 & 1;
            if (*(char *)(lStack_200 + 0x21) == '\x01') {
              bStack_1e5 = *(byte *)(lStack_210 + 0x21);
            }
            else {
              bStack_1e5 = 0;
            }
            bStack_1e5 = bStack_1e5 & 1;
            if (*(char *)(lStack_200 + 0x22) == '\x01') {
              bStack_1e4 = *(byte *)(lStack_210 + 0x22);
            }
            else {
              bStack_1e4 = 0;
            }
            bStack_1e4 = bStack_1e4 & 1;
            if (*(char *)(lStack_200 + 0x23) == '\x01') {
              bStack_1e3 = *(byte *)(lStack_210 + 0x23);
            }
            else {
              bStack_1e3 = 0;
            }
            bStack_1e3 = bStack_1e3 & 1;
            if (*(char *)(lStack_200 + 0x24) == '\x01') {
              bStack_1e2 = *(byte *)(lStack_210 + 0x24);
            }
            else {
              bStack_1e2 = 0;
            }
            bStack_1e2 = bStack_1e2 & 1;
            uStack_1e1 = 0;
            func_0x0001072c9f9c(puVar5 + 3,0x1b,auStack_1d0,&bStack_1e6);
            func_0x0001072c9884(auStack_1d0);
            uVar3 = iVar1 == 7;
            if ((bool)uVar3) {
              func_0x0001072c9884(auStack_1a0);
              func_0x0001072c9884(auStack_1e0);
            }
            puVar5[3] = &PTR_DAT_1109d6950;
            puVar5[0xd] = uStack_1f8;
            puVar5[0xc] = lStack_200;
            lStack_200 = 0;
            uStack_1f8 = 0;
            func_0x000104c2fe00(puVar5 + 0xe,auStack_98);
            func_0x000104c2fe00(puVar5 + 0x15,auStack_d8);
            puVar5[0x1d] = uStack_208;
            puVar5[0x1c] = lStack_210;
            lStack_210 = 0;
            uStack_208 = 0;
            func_0x0001072c9b9c(&lStack_210);
            func_0x0001072c9b9c(&lStack_200);
            *param_1 = (long)(puVar5 + 3);
            param_1[1] = (long)puVar5;
            uVar7 = 1;
          }
          *(undefined1 *)(param_1 + 2) = uVar7;
          func_0x0001072c95d0(&lStack_1c0);
          func_0x00010752b5b8(&lStack_170);
        }
        func_0x00010724b3d8(auStack_d8);
      }
      func_0x00010724b3d8(auStack_98);
    }
    func_0x0001072c95d0(&lStack_240);
  }
  else {
    func_0x000107878fec(&lStack_170,(long)plVar4 + -1);
    func_0x0001004c3cd0(auStack_228,&UNK_10f42707b,&lStack_170);
    func_0x00010756a668(param_3,auStack_228);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_228);
    func_0x0001077740e8();
    func_0x0001077741cc();
  }
  func_0x0001077740b0(uStack_58);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_107773980:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107773988);
  (*pcVar2)();
}



/* Entry: 107773e0c; end: 107773e13;  */

void FUN_107773e0c(void)

{
  return;
}



/* Entry: 107774034; end: 10777406b;  */

long FUN_107774034(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109d6ab8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107774898; end: 10777496b;  */

void FUN_107774898(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar1 = *param_1;
  lVar7 = param_1[1];
  lVar8 = param_1[2];
  param_1[2] = param_2;
  func_0x00010006316c();
  lVar10 = param_1[1];
  for (lVar9 = 0; lVar8 != lVar9; lVar9 = lVar9 + 1) {
    if (-1 < *(char *)(lVar1 + lVar9)) {
      plVar3 = param_1;
      func_0x00010777496c(param_1,lVar7);
      plVar4 = param_1;
      func_0x000100061de0(param_1,plVar3);
      bVar2 = (byte)plVar3 & 0x7f;
      uVar5 = param_1[2];
      lVar6 = *param_1;
      *(byte *)(lVar6 + (long)plVar4) = bVar2;
      *(byte *)(lVar6 + ((long)plVar4 - 7U & uVar5) + (uVar5 & 7)) = bVar2;
      func_0x000107774978(lVar10 + (long)plVar4 * 0x20,lVar7);
    }
    lVar7 = lVar7 + 0x20;
  }
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 107774e00; end: 10777509b;  */

void FUN_107774e00(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  undefined1 in_ZR;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 extraout_w8;
  long extraout_x8;
  int extraout_w10;
  ulong unaff_x21;
  long lVar5;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int iStack_48;
  
  func_0x00010777d274();
  iVar2 = *(int *)(param_2 + 0x68);
  if (iVar2 == 0) {
    iStack_48 = 0;
    func_0x00010777d4e4();
    func_0x00010777d354();
    if ((unaff_x21 & 1) != 0) {
      func_0x00010777d364();
      goto LAB_10777500c;
    }
LAB_10777501c:
    func_0x00010777d748();
    uVar4 = extraout_w8;
  }
  else {
    in_ZR = iVar2 == 1;
    if ((bool)in_ZR) {
      uStack_a8 = CONCAT71(uStack_a8._1_7_,*(undefined1 *)(param_2 + 8));
      iStack_48 = 1;
      func_0x00010777d4e4();
      func_0x00010777d354();
      if ((param_2 & 1) == 0) goto LAB_10777501c;
      func_0x00010777d364();
    }
    else {
      in_ZR = iVar2 == 2;
      if ((bool)in_ZR) {
        uStack_a8 = *(undefined8 *)(param_2 + 8);
        iStack_48 = iVar2;
        func_0x00010777d4e4();
        func_0x00010777d354();
        if ((param_2 & 1) == 0) goto LAB_10777501c;
        func_0x00010777d364();
      }
      else {
        in_ZR = iVar2 == 3;
        if ((bool)in_ZR) {
          func_0x0001072ddd58(auStack_b0,param_2 + 8);
          func_0x00010777d4e4();
          func_0x00010777d354();
          if ((param_2 & 1) == 0) goto LAB_10777501c;
          func_0x00010777d364();
        }
        else {
          in_ZR = iVar2 == 4;
          if ((bool)in_ZR) {
            uStack_a0 = *(undefined8 *)(param_2 + 0x10);
            uStack_a8 = *(undefined8 *)(param_2 + 8);
            iStack_48 = iVar2;
            func_0x00010777d4e4();
            func_0x00010777d354();
            if ((param_2 & 1) == 0) goto LAB_10777501c;
            func_0x00010777d364();
          }
          else {
            in_ZR = iVar2 == 5;
            if ((bool)in_ZR) {
              func_0x00010777dc50();
              if (extraout_x8 != 0) {
                do {
                  func_0x00010777d468();
                } while (extraout_w10 != 0);
              }
              iStack_48 = 5;
              func_0x00010777d4e4();
              func_0x00010777d354();
              if ((param_2 & 1) == 0) goto LAB_10777501c;
              func_0x00010777d364();
            }
            else {
              in_ZR = iVar2 == 6;
              if ((bool)in_ZR) {
                func_0x00010777d6c8();
                func_0x00010777d4e4();
                func_0x00010777d354();
                if ((param_2 & 1) == 0) goto LAB_10777501c;
                func_0x00010777d364();
              }
              else {
                in_ZR = iVar2 == 7;
                if ((bool)in_ZR) {
                  func_0x00010777d6bc();
                  func_0x00010777d4e4();
                  func_0x00010777d354();
                  if ((param_2 & 1) == 0) goto LAB_10777501c;
                  func_0x00010777d364();
                }
                else {
                  in_ZR = iVar2 == 8;
                  if ((bool)in_ZR) {
                    uVar3 = param_2;
                    func_0x00010777dce0();
                    func_0x00010777d398(*(undefined8 *)(param_2 + 8));
                    func_0x0001073b5124();
                    lVar1 = (*(long **)(param_2 + 8))[1];
                    for (lVar5 = **(long **)(param_2 + 8); in_ZR = lVar5 == lVar1, !(bool)in_ZR;
                        lVar5 = lVar5 + 0x70) {
                      func_0x00010777dcd4();
                      func_0x000107775240();
                      if ((uVar3 & 1) == 0) {
                        func_0x00010777d724();
                        goto LAB_10777504c;
                      }
                      func_0x00010777d700();
                      func_0x000107535bf8();
                    }
                    func_0x00010777dac0();
                    func_0x000107535cac();
                    func_0x00010777d338();
                    func_0x00010733a8f0();
LAB_10777504c:
                    func_0x0001073bc7a8(auStack_b0);
                    goto LAB_107775024;
                  }
                  func_0x00010777d6d4();
                  func_0x00010777d4e4();
                  func_0x00010777d354();
                  if ((param_2 & 1) == 0) goto LAB_10777501c;
                  func_0x00010777d364();
                }
              }
            }
          }
        }
      }
    }
LAB_10777500c:
    func_0x00010777d2c0();
    func_0x00010733a8f0();
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x10) = uVar4;
LAB_107775024:
  func_0x00010777d1dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010777d614();
    func_0x00010777d638();
    func_0x00010777d428();
    func_0x0001077750b8();
    return;
  }
  return;
}



/* Entry: 107775280; end: 1077752bb;  */

void FUN_107775280(undefined8 param_1,undefined8 param_2)

{
  func_0x00010777d5d0();
  func_0x00010777d700();
  func_0x000107777824(param_1,param_2,3);
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 1077754c8; end: 1077754ff;  */

void FUN_1077754c8(void)

{
  func_0x00010777d428();
  func_0x0001077754e4();
  return;
}



/* Entry: 10777576c; end: 107775863;  */

void FUN_10777576c(void)

{
  func_0x00010777d428();
  func_0x000107775788();
  return;
}



/* Entry: 107775e70; end: 107775ea7;  */

void FUN_107775e70(void)

{
  func_0x00010777d738();
  func_0x000107775e8c();
  return;
}



/* Entry: 1077765a4; end: 107776803;  */

undefined **
FUN_1077765a4(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             undefined **param_5)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long *plVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 extraout_w8;
  undefined4 uVar18;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined4 *extraout_x8_03;
  long extraout_x8_04;
  undefined **unaff_x19;
  long lVar19;
  undefined ***pppuVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined1 auStack_6b1 [9];
  undefined *puStack_6a8;
  undefined *apuStack_698 [7];
  undefined1 auStack_660 [56];
  long lStack_628;
  undefined1 auStack_620 [88];
  undefined1 auStack_5c8 [56];
  byte bStack_590;
  undefined *puStack_588;
  undefined1 auStack_580 [8];
  undefined8 uStack_578;
  undefined8 ***pppuStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined1 auStack_518 [29];
  undefined1 uStack_4fb;
  undefined1 uStack_4fa;
  undefined1 uStack_4f9;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined8 ***pppuStack_4e0;
  code *apcStack_4d8 [2];
  undefined1 auStack_4c8 [8];
  undefined ***pppuStack_4c0;
  undefined1 auStack_4b8 [8];
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined *apuStack_498 [3];
  undefined1 auStack_480 [40];
  undefined4 uStack_458;
  undefined *puStack_450;
  undefined1 auStack_448 [48];
  undefined4 uStack_418;
  undefined *apuStack_410 [7];
  undefined4 uStack_3d8;
  undefined8 auStack_3d0 [7];
  undefined4 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_358;
  undefined1 ***pppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  long lStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  undefined **ppuStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [24];
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_238 [56];
  undefined *puStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined1 auStack_1c0 [40];
  undefined4 uStack_198;
  undefined8 uStack_180;
  undefined8 **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 auStack_108 [24];
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_48;
  
  func_0x00010777d250();
  iVar3 = *(int *)param_5;
  uStack_48 = extraout_x8_01;
  if (iVar3 == 7) {
    *(undefined4 *)(unaff_x19 + 0xd) = 0;
    uVar6 = 1;
    goto LAB_107776634;
  }
  if (iVar3 == 5) {
    param_1 = (undefined *)NEON_ucvtf(param_5[1]);
    goto LAB_107776628;
  }
  if (iVar3 == 6) {
    *(undefined1 *)(unaff_x19 + 1) = *(undefined1 *)(param_5 + 1);
    uVar18 = 1;
LAB_107776630:
    uVar6 = 1;
    *(undefined4 *)(unaff_x19 + 0xd) = uVar18;
LAB_107776634:
    func_0x00010777d23c(uStack_48);
    ppuVar22 = param_5;
    if ((bool)uVar6) {
      return param_5;
    }
  }
  else {
    if (iVar3 == 3) {
      param_1 = param_5[1];
LAB_107776628:
      unaff_x19[1] = param_1;
      uVar18 = 2;
      goto LAB_107776630;
    }
    if (iVar3 == 4) {
      param_1 = (undefined *)(double)(long)param_5[1];
      goto LAB_107776628;
    }
    uVar6 = iVar3 == 1;
    if ((bool)uVar6) {
      puStack_e0 = &UNK_10e52b660;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uVar17 = *(undefined8 *)(param_5[1] + 0x18);
      func_0x0001072962ac(&puStack_e0);
      param_5 = param_5 + 1;
      func_0x000104c2db28();
      ppuStack_f0 = param_5;
      while (uStack_e8 = uVar17, ppuStack_f0 != (undefined **)0x0) {
        func_0x00010777db48(&puStack_c0);
        FUN_1077765a4();
        func_0x0001073f2584(auStack_108,&puStack_e0,uVar17,&puStack_c0);
        func_0x00010777d660();
        func_0x000104c2de10(&ppuStack_f0);
        uVar17 = uStack_e8;
      }
      func_0x000107278fec(&puStack_c0);
      param_1 = puStack_c0;
      unaff_x19[2] = puStack_b8;
      unaff_x19[1] = puStack_c0;
      puStack_c0 = (undefined *)0x0;
      puStack_b8 = (undefined *)0x0;
      *(undefined4 *)(unaff_x19 + 0xd) = 9;
      func_0x00010726b264(&puStack_c0);
      param_5 = &puStack_e0;
      func_0x00010726ae88();
      goto LAB_107776634;
    }
    bVar5 = iVar3 == 2;
    if (!bVar5) {
      uStack_d8 = 0;
      uStack_d0 = 0;
      puStack_e0 = (undefined *)0x0;
      func_0x0001074b01dc(&puStack_e0,*(long *)((long)param_5[1] + 8) - *(long *)param_5[1] >> 6);
      lVar1 = *(long *)((long)param_5[1] + 8);
      for (lVar19 = *(long *)param_5[1]; uVar6 = lVar19 == lVar1, !(bool)uVar6;
          lVar19 = lVar19 + 0x40) {
        func_0x00010777dcd4(&puStack_c0);
        FUN_1077765a4();
        func_0x000107277668(&puStack_e0,&puStack_c0);
        func_0x00010777d660();
      }
      func_0x000107277aa4(&puStack_c0);
      param_1 = puStack_c0;
      unaff_x19[2] = puStack_b8;
      unaff_x19[1] = puStack_c0;
      puStack_c0 = (undefined *)0x0;
      puStack_b8 = (undefined *)0x0;
      *(undefined4 *)(unaff_x19 + 0xd) = 8;
      func_0x00010726b188(&puStack_c0);
      param_5 = &puStack_e0;
      func_0x000107277d70();
      goto LAB_107776634;
    }
    ppuVar22 = param_5;
    func_0x00010777d23c(extraout_x8_01);
    if (bVar5) {
      func_0x0001072ddd80(unaff_x19 + 1,param_5 + 1);
      return unaff_x19;
    }
  }
  uVar6 = 0;
  ___stack_chk_fail();
  ppuVar11 = &puStack_e0;
  func_0x00010726ae88();
  func_0x00010777d638();
  ppuStack_118 = (undefined **)&UNK_107776804;
  ppuStack_120 = (undefined8 **)&stack0xfffffffffffffff0;
  func_0x00010777d250();
  iVar3 = *(int *)(ppuVar11 + 0xd);
  uStack_180 = extraout_x8_02;
  if (iVar3 == 0) {
code_r0x000107776900:
    *(int *)ppuVar22 = 7;
  }
  else {
    uVar6 = iVar3 + -1 == 3;
    switch(iVar3 + -1) {
    case 0:
      uVar4 = *(undefined1 *)(ppuVar11 + 1);
      *(int *)ppuVar22 = 6;
      *(undefined1 *)(ppuVar22 + 1) = uVar4;
      break;
    case 1:
      puVar21 = ppuVar11[1];
      *(int *)ppuVar22 = 3;
      ppuVar22[1] = puVar21;
      break;
    case 2:
      func_0x000104c2fe00(&puStack_200,ppuVar11 + 1);
      func_0x000104c33004(ppuVar22,&puStack_200);
      func_0x000104c2f714();
      break;
    case 3:
      func_0x00010777d23c(extraout_x8_02);
      pppuStack_310 = (undefined1 ***)ppuStack_120;
      if ((bool)uVar6) {
        ppuVar10 = ppuStack_118;
        func_0x00010777de70(ppuVar22,ppuVar11 + 1);
        uStack_358 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_308 = ppuVar10;
        func_0x00010785e024();
        func_0x00010002b838(auStack_4c8,&UNK_10f42b453);
        func_0x000107268798(apuStack_498,auStack_4c8);
        uStack_458 = 3;
        uStack_418 = 3;
        uStack_3d8 = 3;
        uStack_398 = 3;
        ppuVar22 = apuStack_498;
        puStack_450 = param_1;
        apuStack_410[0] = param_2;
        auStack_3d0[0] = param_3;
        uStack_390 = param_4;
        func_0x000107268bc4(&uStack_4b0,ppuVar22,5);
        *extraout_x8_03 = 0;
        *(undefined8 *)(extraout_x8_03 + 4) = uStack_4a8;
        *(undefined8 *)(extraout_x8_03 + 2) = uStack_4b0;
        uStack_4b0 = 0;
        uStack_4a8 = 0;
        func_0x000104c33108(&uStack_4b0);
        lVar19 = 0x100;
        do {
          ppuVar11 = (undefined **)((long)apuStack_498 + lVar19);
          func_0x000104c3323c();
          lVar19 = lVar19 + -0x40;
          uVar6 = lVar19 == -0x40;
        } while (!(bool)uVar6);
        func_0x00010785e438();
        func_0x00010785e450(uStack_358);
        if ((bool)uVar6) {
          return ppuVar11;
        }
        ___stack_chk_fail();
        lVar19 = 0x100;
        do {
          func_0x000104c3323c((long)apuStack_498 + lVar19);
          lVar19 = lVar19 + -0x40;
        } while (lVar19 != -0x40);
        func_0x00010785e438();
        __Unwind_Resume(ppuVar11);
        apcStack_4d8[0] = FUN_10785e3b0;
        ppuStack_4f8 = (undefined **)0x0;
        ppuStack_4f0 = apuStack_498;
        ppuStack_4e8 = ppuVar11;
        pppuStack_4e0 = &pppuStack_310;
        func_0x0001073ca0ec(&ppuStack_4f8,(long)ppuVar22 + 0xc);
        func_0x0001073ca0ec(&ppuStack_4f8,ppuVar22);
        func_0x0001073ca0ec(&ppuStack_4f8,(long)ppuVar22 + 4);
        func_0x0001073ca0ec(&ppuStack_4f8,ppuVar22 + 1);
        return ppuStack_4f8;
      }
      goto code_r0x000107776e28;
    default:
      uVar6 = iVar3 + -5 == 3;
      switch(iVar3 + -5) {
      case 0:
        goto code_r0x000107776900;
      case 1:
        lStack_290 = 0;
        lStack_288 = 0;
        uStack_280 = 0;
        plVar12 = &lStack_290;
        func_0x000107289660(plVar12,1);
        func_0x000107289720(&puStack_200,plVar12,lStack_288 - lStack_290 >> 6,&uStack_280);
        func_0x000107777c14(lStack_1f0);
        lStack_1f0 = lStack_1f0 + 0x40;
        func_0x0001072896a0(&lStack_290,&puStack_200);
        lVar19 = lStack_288;
        func_0x00010777db68();
        puVar2 = ppuVar11[2];
        lStack_288 = lVar19;
        for (puVar21 = ppuVar11[1]; uVar6 = puVar21 == puVar2, !(bool)uVar6;
            puVar21 = puVar21 + 0x120) {
          if (puVar21[0x98] == '\x01') {
            func_0x00010002b838(auStack_2a8,&UNK_10f4271a1);
            func_0x000107268798(&puStack_200,auStack_2a8);
            func_0x000104c2fe00(auStack_238,puVar21 + 0x38);
            func_0x000104c33004(auStack_1c0,auStack_238);
            func_0x000107268bc4(&puStack_278,&puStack_200,2);
            func_0x000107765870(&lStack_290,&puStack_278);
            func_0x000104c33108(&puStack_278);
            lVar19 = 0x40;
            do {
              func_0x000104c3323c((long)&puStack_200 + lVar19);
              lVar19 = lVar19 + -0x40;
            } while (lVar19 != -0x40);
            func_0x000104c2f714(auStack_238);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a8);
          }
          else {
            func_0x0001077560f4(&lStack_290,puVar21);
            ppuStack_2c8 = (undefined **)&UNK_10e52b660;
            uStack_2b8 = 0;
            uStack_2b0 = 0;
            uStack_2c0 = 0;
            if (puVar21[0xa8] == '\x01') {
              pppuVar13 = &ppuStack_2c8;
              puVar15 = &UNK_10f4271a7;
              func_0x000107777c54();
              if (((ulong)puVar15 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                ppuVar22 = *(undefined ***)(puVar21 + 0xa0);
                *(undefined4 *)(pppuVar13 + 7) = 3;
                pppuVar13[8] = ppuVar22;
              }
            }
            if (puVar21[0xc0] == '\x01') {
              puStack_278 = (undefined *)0x0;
              uStack_270 = 0;
              uStack_268 = 0;
              lVar1 = (*(long **)(puVar21 + 0xb0))[1];
              for (lVar19 = **(long **)(puVar21 + 0xb0); lVar19 != lVar1; lVar19 = lVar19 + 0x38) {
                func_0x0001077560f4(&puStack_278,lVar19);
              }
              lStack_2e0 = 0;
              uStack_2d8 = 0;
              uStack_2d0 = 0;
              func_0x00010002b838(&ppuStack_300,&DAT_10f3dd68b);
              if (uStack_2d8 < uStack_2d0) {
                func_0x000107777cd8(uStack_2d8,&ppuStack_300);
                uVar16 = uStack_2d8 + 0x40;
              }
              else {
                plVar12 = &lStack_2e0;
                func_0x000107289660(plVar12,((long)(uStack_2d8 - lStack_2e0) >> 6) + 1);
                func_0x000107289720(&puStack_200,plVar12,(long)(uStack_2d8 - lStack_2e0) >> 6,
                                    &uStack_2d0);
                func_0x000107777cd8(lStack_1f0,&ppuStack_300);
                lStack_1f0 = lStack_1f0 + 0x40;
                func_0x0001072896a0(&lStack_2e0,&puStack_200);
                uVar16 = uStack_2d8;
                func_0x00010777db68();
              }
              uStack_2d8 = uVar16;
              func_0x00010777dab8();
              func_0x00010777dd48();
              func_0x000107765870(&lStack_2e0,&puStack_200);
              func_0x000104c33108(&puStack_200);
              func_0x000107327958(&ppuStack_300,&lStack_2e0);
              pppuVar13 = &ppuStack_2c8;
              uVar16 = 0;
              func_0x00010775e124();
              if ((uVar16 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                ppuVar11 = ppuStack_2f8;
                ppuVar22 = ppuStack_300;
                ppuStack_300 = (undefined **)0x0;
                ppuStack_2f8 = (undefined **)0x0;
                *(undefined4 *)(pppuVar13 + 7) = 0;
                pppuVar13[9] = ppuVar11;
                pppuVar13[8] = ppuVar22;
                puStack_200 = (undefined *)0x0;
                puStack_1f8 = (undefined *)0x0;
                func_0x000104c33108(&puStack_200);
              }
              func_0x000104c33108(&ppuStack_300);
              func_0x000107269124(&lStack_2e0);
              func_0x000107269124(&puStack_278);
            }
            if (puVar21[0xd8] == '\x01') {
              lStack_1f0 = *(long *)(puVar21 + 0xd0);
              puStack_1f8 = *(undefined **)(puVar21 + 200);
              uStack_198 = 4;
              func_0x00010777daf4(&puStack_278,&puStack_200);
              puVar15 = &DAT_10f415bdb;
              func_0x000107777c54(&ppuStack_2c8);
              if (((ulong)puVar15 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                func_0x00010777ddb8();
              }
              func_0x00010777dd1c();
              func_0x00010777ddb0();
            }
            if (puVar21[0x108] == '\x01') {
              lStack_1f0 = *(long *)(puVar21 + 0x100);
              puStack_1f8 = *(undefined **)(puVar21 + 0xf8);
              uStack_198 = 4;
              func_0x00010777daf4(&puStack_278,&puStack_200);
              uVar16 = 0;
              func_0x000107777d1c(&ppuStack_2c8);
              if ((uVar16 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                func_0x00010777ddb8();
              }
              func_0x00010777dd1c();
              func_0x00010777ddb0();
            }
            if (puVar21[0x118] == '\x01') {
              pppuVar13 = &ppuStack_2c8;
              uVar16 = 0;
              func_0x000107777d1c();
              if ((uVar16 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                ppuVar22 = *(undefined ***)(puVar21 + 0x110);
                *(undefined4 *)(pppuVar13 + 7) = 3;
                pppuVar13[8] = ppuVar22;
              }
            }
            func_0x000104c33260(&puStack_200,&ppuStack_2c8);
            func_0x0001075726d4(&lStack_290,&puStack_200);
            func_0x000104c335c0(&puStack_200);
            func_0x000104c33548(&ppuStack_2c8);
          }
        }
        func_0x000107327958(&puStack_200,&lStack_290);
        func_0x00010777db2c();
        break;
      case 2:
        func_0x00010777d23c(extraout_x8_02);
        pppuStack_310 = (undefined1 ***)ppuStack_120;
        if ((bool)uVar6) {
          ppuVar11 = ppuVar11 + 1;
          ppuVar10 = ppuStack_118;
          func_0x00010777de70(ppuVar22);
          ppuVar7 = &puStack_530;
          ppuStack_308 = ppuVar10;
          func_0x00010775f634();
          uStack_358 = extraout_x8;
          func_0x000100060964(auStack_480,&DAT_10f68f148);
          func_0x00010735d778(auStack_448,auStack_480,ppuVar11);
          func_0x000100060964(auStack_4b8,&DAT_10f3682ba);
          func_0x000104c318bc(auStack_3d0,auStack_4b8);
          uStack_398 = 6;
          uStack_390 = CONCAT71(uStack_390._1_7_,*(undefined1 *)(ppuVar11 + 7));
          ppuVar10 = (undefined **)&uStack_4f9;
          func_0x000107268194(&ppuStack_4f8,2,ppuVar10,&uStack_4fa,&uStack_4fb);
          for (lVar19 = 0; lVar19 != 0xf0; lVar19 = lVar19 + 0x78) {
            ppuVar10 = (undefined **)((long)apuStack_410 + lVar19);
            pppuStack_4c0 = &ppuStack_4f8;
            func_0x000107268220(apcStack_4d8,&pppuStack_4c0);
          }
          lVar19 = 0x78;
          do {
            func_0x000104c32ad0(auStack_448 + lVar19);
            lVar19 = lVar19 + -0x78;
          } while (lVar19 != -0x78);
          func_0x000104c2f714(auStack_4b8);
          func_0x00010775f604();
          uVar6 = *(char *)(ppuVar11 + 0xb) == '\x01';
          if ((bool)uVar6) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_518,ppuVar11 + 8);
            func_0x000107268798(auStack_448,auStack_518);
            func_0x000100060964(auStack_480,&UNK_10f63898c);
            func_0x000107267f10(&ppuStack_4f8,auStack_480);
            func_0x000104c3302c();
            func_0x00010775f604();
            func_0x000104c3323c(auStack_448);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_518);
          }
          pppuVar13 = &ppuStack_4f8;
          func_0x000104c33260(&puStack_530);
          *(int *)ppuVar22 = 1;
          ppuVar22[2] = puStack_528;
          ppuVar22[1] = puStack_530;
          puStack_530 = (undefined *)0x0;
          puStack_528 = (undefined *)0x0;
          func_0x000104c335c0();
          func_0x00010775f60c();
          func_0x00010775f5b0(uStack_358);
          if ((bool)uVar6) {
            return ppuVar7;
          }
          ___stack_chk_fail();
          func_0x00010775f604();
          func_0x000104c3323c(auStack_448);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_518);
          func_0x00010775f60c();
          func_0x00010775f5dc();
          puStack_538 = &UNK_10775f38c;
          pppuVar14 = pppuVar13;
          pppuStack_540 = &pppuStack_310;
          func_0x00010775f634();
          pppuVar20 = pppuVar14 + 1;
          pppuVar8 = pppuVar20;
          uStack_578 = extraout_x8_00;
          (*(code *)(*pppuVar14)[3])();
          if ((int)pppuVar8 == 0) {
            (*(code *)(*pppuVar13)[0xd])(auStack_5c8,pppuVar20);
            uVar6 = bStack_590 == 1;
            if ((bool)uVar6) {
              func_0x000104c2fe00(apuStack_698,auStack_5c8);
              func_0x00010775f62c(&lStack_628,apuStack_698);
              func_0x00010775f614();
              func_0x00010726b164(&lStack_628);
              ppuVar10 = apuStack_698;
              func_0x000104c2f714(ppuVar10);
            }
            else {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                        (ppuVar10,&UNK_10f4260a7);
              *(undefined1 *)ppuVar7 = 0;
              *(undefined1 *)(ppuVar7 + 0xc) = 0;
            }
            func_0x00010775f5f4();
          }
          else {
            (*(code *)(*pppuVar13)[5])(&puStack_588,pppuVar20,0);
            puVar9 = auStack_580;
            (**(code **)(puStack_588 + 0x20))();
            if (puVar9 == (undefined1 *)0x0) {
              func_0x00010775f5e4();
              *(undefined1 *)ppuVar7 = 0;
              *(undefined1 *)(ppuVar7 + 0xc) = 0;
            }
            else {
              (**(code **)(puStack_588 + 0x28))(&lStack_628,auStack_580,0);
              (**(code **)(lStack_628 + 0x68))(auStack_5c8,auStack_620);
              func_0x0001072f5f6c(&lStack_628);
              if ((bStack_590 & 1) == 0) {
                func_0x00010775f5e4();
                *(undefined1 *)ppuVar7 = 0;
                *(undefined1 *)(ppuVar7 + 0xc) = 0;
              }
              else {
                func_0x000104c2fe00(auStack_660,auStack_5c8);
                func_0x00010775f62c(&lStack_628,auStack_660);
                func_0x00010775f614();
                func_0x00010726b164(&lStack_628);
                func_0x000104c2f714(auStack_660);
              }
              func_0x00010775f5f4();
            }
            ppuVar10 = &puStack_588;
            func_0x0001072f5f6c(ppuVar10);
          }
          func_0x00010775f5b0(uStack_578);
          if ((bool)uVar6) {
            return ppuVar10;
          }
          ___stack_chk_fail();
          func_0x00010775f5f4();
          func_0x0001072f5f6c(&puStack_588);
          func_0x00010775f5dc();
          puStack_6a8 = &UNK_10775f590;
          ppuVar22 = (undefined **)auStack_6b1;
          auStack_6b1._1_8_ = &pppuStack_540;
          func_0x00010726364c(ppuVar22);
          return ppuVar22;
        }
        goto code_r0x000107776e28;
      case 3:
        uStack_270 = 0;
        uStack_268 = 0;
        puStack_278 = (undefined *)0x0;
        func_0x00010777d398(ppuVar11[1]);
        func_0x0001072ac134(&puStack_278);
        lVar1 = *(long *)((long)ppuVar11[1] + 8);
        for (lVar19 = *(long *)ppuVar11[1]; uVar6 = lVar19 == lVar1, !(bool)uVar6;
            lVar19 = lVar19 + 0x70) {
          func_0x00010777daf4(&puStack_200,lVar19);
          func_0x0001072aad1c(&puStack_278,&puStack_200);
          func_0x00010777db60();
        }
        func_0x00010777dd48();
        func_0x00010777db2c();
        break;
      default:
        ppuVar11 = ppuVar11 + 1;
        puStack_278 = &UNK_10e52b660;
        uStack_270 = 0;
        uStack_268 = 0;
        uStack_260 = 0;
        uVar17 = *(undefined8 *)(*ppuVar11 + 0x18);
        func_0x000104c32780(&puStack_278);
        func_0x000107348ee8();
        ppuStack_2c8 = ppuVar11;
        while (uStack_2c0 = uVar17, ppuStack_2c8 != (undefined **)0x0) {
          func_0x00010777da30(&puStack_200);
          func_0x000104c32844(auStack_238,&puStack_278,uVar17,&puStack_200);
          func_0x00010777db60();
          func_0x0001072963cc(&ppuStack_2c8);
          uVar17 = uStack_2c0;
        }
        func_0x000104c33260(&puStack_200,&puStack_278);
        *(int *)ppuVar22 = 1;
        ppuVar22[2] = puStack_1f8;
        ppuVar22[1] = puStack_200;
        puStack_200 = (undefined *)0x0;
        puStack_1f8 = (undefined *)0x0;
        func_0x000104c335c0();
        func_0x000104c33548();
        goto code_r0x000107776908;
      }
      func_0x000107269124();
    }
  }
code_r0x000107776908:
  func_0x00010777d23c(uStack_180);
  if ((bool)uVar6) {
    func_0x00010777de70(ppuStack_118);
    return ppuStack_118;
  }
code_r0x000107776e28:
  ___stack_chk_fail();
  ppuVar22 = &puStack_278;
  func_0x000104c33548();
  func_0x00010777d638();
  ppuStack_308 = (undefined **)&SUB_107776f6c;
  pppuStack_310 = (undefined1 ***)&ppuStack_120;
  if (*(int *)(ppuVar22 + 0xd) == 3) {
    func_0x00010732393c();
    func_0x00010724ef84(&stack0xfffffffffffffcc8);
    func_0x00010777ddf0();
    func_0x00010777d650();
    uVar6 = 1;
  }
  else {
    func_0x00010777d748();
    uVar6 = extraout_w8;
  }
  *(undefined1 *)(extraout_x8_04 + 0x18) = uVar6;
  return ppuVar22;
}



/* Entry: 1077774f4; end: 107777547;  */

void FUN_1077774f4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined1 extraout_w8;
  undefined1 uVar1;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  func_0x0001077752bc();
  uStack_28 = (undefined4)param_3;
  uStack_24 = (undefined1)(param_3 >> 0x20);
  uStack_30 = param_2;
  if ((param_3 >> 0x20 & 1) == 0) {
    func_0x00010777d748();
    uVar1 = extraout_w8;
  }
  else {
    func_0x0001074e8e04(auStack_48,&uStack_30);
    func_0x00010777ddf0();
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 1077778dc; end: 10777791f;  */

void FUN_1077778dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000107777904(param_2,&uStack_18);
  return;
}



/* Entry: 107777bdc; end: 107777c53;  */

undefined8 FUN_107777bdc(undefined8 param_1,ulong *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong extraout_x8;
  long extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  byte *pbVar5;
  undefined1 *puVar6;
  char *pcVar7;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar8;
  
  uVar8 = *param_2;
  uVar4 = uVar8;
  _strlen();
  func_0x00010734ac28(param_1,uVar8,uVar4,0);
  func_0x000107349544();
  func_0x00010734ac10();
  func_0x000107349658();
  func_0x00010734ab28(0);
  *(undefined8 *)(extraout_x9 + 0x18) = extraout_x11;
  *extraout_x10 = 0x22;
  for (uVar8 = extraout_x8; uVar8 < (uVar4 & 0xffffffff); uVar8 = uVar8 + 1) {
    bVar1 = *(byte *)(unaff_x20 + uVar8);
    cVar2 = (&UNK_10de4e441)[bVar1];
    pbVar5 = *(byte **)(*unaff_x19 + 0x18);
    *(byte **)(*unaff_x19 + 0x18) = pbVar5 + 1;
    if (cVar2 == '\0') {
      *pbVar5 = bVar1;
    }
    else {
      *pbVar5 = 0x5c;
      pcVar7 = *(char **)(*unaff_x19 + 0x18);
      *(char **)(*unaff_x19 + 0x18) = pcVar7 + 1;
      *pcVar7 = cVar2;
      if (cVar2 == 'u') {
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = 0x30;
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = 0x30;
        uVar3 = (&UNK_10de4e431)[bVar1 >> 4];
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = uVar3;
        uVar3 = (&UNK_10de4e431)[(ulong)bVar1 & 0xf];
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = uVar3;
      }
    }
  }
  func_0x00010734aa78();
  *extraout_x9_00 = 0x22;
  return 1;
}



/* Entry: 107777f14; end: 107777f37;  */

void FUN_107777f14(long *param_1,long *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int extraout_w8;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int extraout_w10;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  long lVar10;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long lVar11;
  byte abStack_450 [944];
  long alStack_a0 [16];
  
  uVar3 = (int)param_1[0xd] == 1;
  if ((bool)uVar3) {
    plVar4 = param_2 + 1;
    param_1 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224();
    unaff_x20 = alStack_a0;
    func_0x00010777dc20((char)*param_1);
    param_2 = (long *)*plVar4;
    func_0x00010777d68c();
    func_0x00010777d648();
    if ((abStack_450[0x398] & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar4;
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
      param_1 = plVar4;
    }
    func_0x00010777d8a4();
    func_0x00010777d20c();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    unaff_x30 = &LAB_10777832c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_450 + 0x380);
  }
  uVar3 = (int)param_1[0xd] == 2;
  if ((bool)uVar3) {
    plVar4 = param_2 + 1;
    param_1 = param_1 + 1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    unaff_x20 = (long *)((long)register0x00000008 + -0xa0);
    *(long *)((long)register0x00000008 + -0x98) = *param_1;
    *(undefined4 *)((long)register0x00000008 + -0x38) = 2;
    param_2 = (long *)*plVar4;
    func_0x00010777d68c();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xb8) & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar4;
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
      param_1 = plVar4;
    }
    func_0x00010777d8a4();
    func_0x00010777d20c();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    unaff_x30 = &UNK_1077783d8;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
  }
  uVar3 = (int)param_1[0xd] == 3;
  if ((bool)uVar3) {
    plVar4 = param_2 + 1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(plVar4,param_1 + 1);
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
    param_1 = (long *)((long)register0x00000008 + -0xb0);
    func_0x0001072ddd58();
    param_2 = (long *)*plVar4;
    func_0x00010777d68c();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -200) & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
    }
    func_0x00010777d8a4();
    func_0x00010777d1dc();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    unaff_x30 = &UNK_107778484;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    unaff_x20 = plVar4;
  }
  uVar3 = (int)param_1[0xd] == 4;
  if ((bool)uVar3) {
    plVar4 = param_2 + 1;
    param_1 = param_1 + 1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    unaff_x20 = (long *)((long)register0x00000008 + -0xa0);
    lVar7 = *param_1;
    *(long *)((long)register0x00000008 + -0x90) = param_1[1];
    *(long *)((long)register0x00000008 + -0x98) = lVar7;
    *(undefined4 *)((long)register0x00000008 + -0x38) = 4;
    param_2 = (long *)*plVar4;
    func_0x00010777d68c();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xb8) & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar4;
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
      param_1 = plVar4;
    }
    func_0x00010777d8a4();
    func_0x00010777d20c();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    unaff_x30 = &UNK_107778530;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  plVar4 = param_2;
  func_0x00010777d250();
  *(undefined8 *)((long)register0x00000008 + -0x70) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar3) {
    lVar7 = param_1[2];
    lVar11 = param_1[1];
    *(long *)((long)register0x00000008 + -0xd0) = param_1[2];
    *(long *)((long)register0x00000008 + -0xd8) = lVar11;
    if (lVar7 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc30();
    func_0x00010777d7a0();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0x100) & 1) == 0) goto code_r0x0001077787a0;
    func_0x00010777d818();
    func_0x00010777d550();
code_r0x000107778790:
    func_0x00010777d2ec();
    func_0x0001072dbd40((undefined1 *)((long)register0x00000008 + -0xf8));
code_r0x0001077787a4:
    func_0x0001072dbe34((undefined1 *)((long)register0x00000008 + -0x110));
  }
  else {
    uVar3 = extraout_w8 == 6;
    if ((bool)uVar3) {
      func_0x000107348eb0((undefined1 *)((long)register0x00000008 + -0xd8),param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0x100) & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
code_r0x0001077787a0:
      func_0x00010777d724();
      goto code_r0x0001077787a4;
    }
    uVar3 = extraout_w8 == 7;
    if ((bool)uVar3) {
      func_0x000107348ecc((undefined1 *)((long)register0x00000008 + -0xd8),param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0x100) & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
      goto code_r0x0001077787a0;
    }
    uVar3 = extraout_w8 == 8;
    if (!(bool)uVar3) {
      func_0x0001074fd134((undefined1 *)((long)register0x00000008 + -0xd8),param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0x100) & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
      goto code_r0x0001077787a0;
    }
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    lVar7 = *(long *)param_1[1];
    lVar11 = ((long *)param_1[1])[1];
    if (lVar11 - lVar7 != 0) {
      uVar5 = (lVar11 - lVar7) / 0x70;
      if (uVar5 >> 0x3c != 0) {
        func_0x000107778164();
        goto code_r0x00010777880c;
      }
      *(undefined1 **)((long)register0x00000008 + -0xc0) =
           (undefined1 *)((long)register0x00000008 + -0x100);
      func_0x000107778178();
      *(ulong *)((long)register0x00000008 + -0xe0) = uVar5;
      *(ulong *)((long)register0x00000008 + -0xd8) = uVar5;
      *(ulong *)((long)register0x00000008 + -0xd0) = uVar5;
      *(ulong *)((long)register0x00000008 + -200) = uVar5 + (long)plVar4 * 0x10;
      func_0x00010777dd9c();
      func_0x00010777dd68();
      lVar7 = *(long *)param_1[1];
      lVar11 = ((long *)param_1[1])[1];
    }
    do {
      uVar3 = lVar7 == lVar11;
      if ((bool)uVar3) {
        func_0x000107778054((undefined1 *)((long)register0x00000008 + -0xe0),
                            (undefined1 *)((long)register0x00000008 + -0x110));
        func_0x00010777d58c();
        func_0x00010777d960();
        func_0x00010773b158((undefined1 *)((long)register0x00000008 + -0xe0));
        goto code_r0x0001077787f0;
      }
      lVar6 = *param_2;
      FUN_1077754c8((undefined1 *)((long)register0x00000008 + -0xf8),lVar7);
      bVar1 = *(byte *)((long)register0x00000008 + -0xe8);
      if ((bVar1 & 1) != 0) {
        uVar5 = *(ulong *)((long)register0x00000008 + -0x108);
        uVar8 = *(ulong *)((long)register0x00000008 + -0x100);
        uVar3 = uVar5 == uVar8;
        if (uVar5 < uVar8) {
          func_0x0001072f64f4(uVar5,(undefined1 *)((long)register0x00000008 + -0xf8));
          lVar6 = uVar5 + 0x10;
        }
        else {
          lVar10 = uVar5 - *(long *)((long)register0x00000008 + -0x110);
          uVar5 = (lVar10 >> 4) + 1;
          if (uVar5 >> 0x3c != 0) goto code_r0x000107778800;
          uVar8 = uVar8 - *(long *)((long)register0x00000008 + -0x110);
          uVar9 = (long)uVar8 >> 3;
          if ((ulong)((long)uVar8 >> 3) <= uVar5) {
            uVar9 = uVar5;
          }
          uVar3 = uVar8 == 0x7ffffffffffffff0;
          if (0x7fffffffffffffef < uVar8) {
            uVar9 = 0xfffffffffffffff;
          }
          *(undefined1 **)((long)register0x00000008 + -0xc0) =
               (undefined1 *)((long)register0x00000008 + -0x100);
          if (uVar9 == 0) {
            uVar9 = 0;
            lVar6 = 0;
          }
          else {
            func_0x000107778178();
          }
          lVar10 = uVar9 + lVar10;
          *(ulong *)((long)register0x00000008 + -0xe0) = uVar9;
          *(long *)((long)register0x00000008 + -0xd8) = lVar10;
          *(long *)((long)register0x00000008 + -0xd0) = lVar10;
          *(ulong *)((long)register0x00000008 + -200) = uVar9 + lVar6 * 0x10;
          func_0x0001072f64f4(lVar10,(undefined1 *)((long)register0x00000008 + -0xf8));
          *(long *)((long)register0x00000008 + -0xd0) = lVar10 + 0x10;
          func_0x00010777dd9c();
          lVar6 = *(long *)((long)register0x00000008 + -0x108);
          func_0x00010777dd68();
        }
        *(long *)((long)register0x00000008 + -0x108) = lVar6;
      }
      func_0x0001072dbe34((undefined1 *)((long)register0x00000008 + -0xf8));
      lVar7 = lVar7 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777db54();
code_r0x0001077787f0:
    func_0x000107778278((undefined1 *)((long)register0x00000008 + -0x110));
  }
  func_0x00010777d23c(*(undefined8 *)((long)register0x00000008 + -0x70));
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
code_r0x000107778800:
  func_0x000107778164();
code_r0x00010777880c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107778810);
  (*pcVar2)();
}



/* Entry: 10777821c; end: 107778277;  */

void FUN_10777821c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x10;
      func_0x0001072dbd40();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1077784a8; end: 10777852f;  */

void FUN_1077784a8(long *param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int extraout_w8;
  undefined8 extraout_x8;
  ulong uVar7;
  ulong uVar8;
  int extraout_w10;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined1 auStack_1c8 [16];
  byte bStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  ulong *puStack_190;
  undefined8 uStack_140;
  byte bStack_b8;
  
  func_0x00010777d224();
  plVar4 = (long *)*param_1;
  func_0x00010777d68c();
  func_0x00010777d648();
  if ((bStack_b8 & 1) == 0) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777d698();
    func_0x00010777d440();
    func_0x00010777d2ec();
    func_0x00010777d89c();
  }
  func_0x00010777d8a4();
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d6ec();
  func_0x00010777d8a4();
  func_0x00010777d638();
  plVar5 = plVar4;
  func_0x00010777d250();
  uStack_140 = extraout_x8;
  func_0x00010777da78();
  if ((bool)in_ZR) {
    uStack_1a0 = param_1[2];
    uStack_1a8 = param_1[1];
    if (param_1[2] != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc30();
    func_0x00010777d7a0();
    func_0x00010777d640();
    if ((uStack_1d0 & 1) != 0) {
      func_0x00010777d818();
      func_0x00010777d550();
      goto code_r0x000107778790;
    }
code_r0x0001077787a0:
    func_0x00010777d724();
code_r0x0001077787a4:
    func_0x0001072dbe34(&lStack_1e0);
  }
  else {
    in_ZR = extraout_w8 == 6;
    if ((bool)in_ZR) {
      func_0x000107348eb0(&uStack_1a8,param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((uStack_1d0 & 1) == 0) goto code_r0x0001077787a0;
      func_0x00010777d818();
      func_0x00010777d550();
code_r0x000107778790:
      func_0x00010777d2ec();
      func_0x0001072dbd40(auStack_1c8);
      goto code_r0x0001077787a4;
    }
    in_ZR = extraout_w8 == 7;
    if ((bool)in_ZR) {
      func_0x000107348ecc(&uStack_1a8,param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((uStack_1d0 & 1) == 0) goto code_r0x0001077787a0;
      func_0x00010777d818();
      func_0x00010777d550();
      goto code_r0x000107778790;
    }
    in_ZR = extraout_w8 == 8;
    if (!(bool)in_ZR) {
      func_0x0001074fd134(&uStack_1a8,param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((uStack_1d0 & 1) == 0) goto code_r0x0001077787a0;
      func_0x00010777d818();
      func_0x00010777d550();
      goto code_r0x000107778790;
    }
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    lStack_1e0 = 0;
    lVar9 = *(long *)param_1[1];
    lVar11 = ((long *)param_1[1])[1];
    if (lVar11 - lVar9 != 0) {
      uVar3 = (lVar11 - lVar9) / 0x70;
      if (uVar3 >> 0x3c != 0) {
        func_0x000107778164();
        goto code_r0x00010777880c;
      }
      puStack_190 = &uStack_1d0;
      func_0x000107778178();
      lStack_198 = uVar3 + (long)plVar5 * 0x10;
      uStack_1b0 = uVar3;
      uStack_1a8 = uVar3;
      uStack_1a0 = uVar3;
      func_0x00010777dd9c();
      func_0x00010777dd68();
      lVar9 = *(long *)param_1[1];
      lVar11 = ((long *)param_1[1])[1];
    }
    do {
      in_ZR = lVar9 == lVar11;
      if ((bool)in_ZR) {
        func_0x000107778054(&uStack_1b0,&lStack_1e0);
        func_0x00010777d58c();
        func_0x00010777d960();
        func_0x00010773b158(&uStack_1b0);
        goto code_r0x0001077787f0;
      }
      lVar6 = *plVar4;
      FUN_1077754c8(auStack_1c8,lVar9);
      bVar1 = bStack_1b8;
      uVar3 = uStack_1d8;
      if ((bStack_1b8 & 1) != 0) {
        in_ZR = uStack_1d8 == uStack_1d0;
        if (uStack_1d8 < uStack_1d0) {
          func_0x0001072f64f4(uStack_1d8,auStack_1c8);
          uStack_1d8 = uVar3 + 0x10;
        }
        else {
          lVar10 = uStack_1d8 - lStack_1e0;
          uVar3 = (lVar10 >> 4) + 1;
          if (uVar3 >> 0x3c != 0) goto code_r0x000107778800;
          uVar7 = uStack_1d0 - lStack_1e0;
          uVar8 = (long)uVar7 >> 3;
          if ((ulong)((long)uVar7 >> 3) <= uVar3) {
            uVar8 = uVar3;
          }
          in_ZR = uVar7 == 0x7ffffffffffffff0;
          if (0x7fffffffffffffef < uVar7) {
            uVar8 = 0xfffffffffffffff;
          }
          if (uVar8 == 0) {
            uVar8 = 0;
            lVar6 = 0;
            puStack_190 = &uStack_1d0;
          }
          else {
            puStack_190 = &uStack_1d0;
            func_0x000107778178();
          }
          uVar3 = uVar8 + lVar10;
          lStack_198 = uVar8 + lVar6 * 0x10;
          uStack_1b0 = uVar8;
          uStack_1a8 = uVar3;
          uStack_1a0 = uVar3;
          func_0x0001072f64f4(uVar3,auStack_1c8);
          uStack_1a0 = uVar3 + 0x10;
          func_0x00010777dd9c();
          uVar3 = uStack_1d8;
          func_0x00010777dd68();
          uStack_1d8 = uVar3;
        }
      }
      func_0x0001072dbe34(auStack_1c8);
      lVar9 = lVar9 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777db54();
code_r0x0001077787f0:
    func_0x000107778278(&lStack_1e0);
  }
  func_0x00010777d23c(uStack_140);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
code_r0x000107778800:
  func_0x000107778164();
code_r0x00010777880c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107778810);
  (*pcVar2)();
}



/* Entry: 107778d14; end: 107778d73;  */

void FUN_107778d14(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  int extraout_w8;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar3 = (int)((ulong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  if ((((*(int *)(param_2 + 0x68) == 0) || (*(int *)(param_2 + 0x68) == 1)) ||
      (*(int *)(param_2 + 0x68) == 2)) ||
     ((*(int *)(param_2 + 0x68) == 3 || (bVar1 = *(int *)(param_2 + 0x68) == 4, bVar1)))) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    return;
  }
  puVar5 = &uStack_40;
  func_0x00010777da78();
  if ((((bVar1) || ((extraout_w8 == 6 || (extraout_w8 == 7)))) || (extraout_w8 != 8)) ||
     (func_0x00010777dbe0(), extraout_x8 != 0x1c0)) {
    func_0x00010777d724();
  }
  else {
    for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x70) {
      func_0x00010777ddc4();
      if (iVar3 == 0) {
        *(undefined1 *)param_1 = 0;
        uVar4 = 0;
        goto code_r0x000107778e04;
      }
      *(undefined4 *)puVar5 = uVar2;
      puVar5 = (undefined8 *)((long)puVar5 + 4);
    }
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    uVar4 = 1;
code_r0x000107778e04:
    *(undefined1 *)(param_1 + 2) = uVar4;
  }
  return;
}



/* Entry: 107779038; end: 10777905b;  */

void FUN_107779038(long *param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 uVar19;
  undefined1 extraout_w8;
  undefined1 uVar20;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  long lVar21;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *unaff_x19;
  undefined4 uVar22;
  ulong unaff_x20;
  long *unaff_x21;
  undefined1 *puVar23;
  undefined1 *unaff_x22;
  undefined1 *puVar24;
  undefined8 unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar25;
  code *pcVar26;
  long lVar27;
  undefined8 uVar28;
  byte abStack_1410 [4956];
  undefined4 uStack_b4;
  long alStack_b0 [16];
  
  uVar9 = (int)param_1[0xd] == 2;
  uVar22 = (undefined4)unaff_x20;
  if ((bool)uVar9) {
    plVar14 = param_2 + 1;
    param_2 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4();
    unaff_x21 = alStack_b0;
    func_0x00010777dacc();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      uStack_b4 = uVar22;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)unaff_x19 = 0;
    }
    *(bool *)(unaff_x19 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = &LAB_1077790d0;
    param_1 = plVar14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_1410 + 0x1350);
    unaff_x19 = plVar14;
  }
  uVar9 = (int)param_1[0xd] == 3;
  if ((bool)uVar9) {
    plVar14 = param_2 + 1;
    param_2 = param_1 + 1;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    func_0x00010777dd10();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      *(undefined4 *)((long)register0x00000008 + -0xb4) = uVar22;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)unaff_x19 = 0;
    }
    *(bool *)(unaff_x19 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = &UNK_107779164;
    param_1 = plVar14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar14;
  }
  uVar9 = (int)param_1[0xd] == 4;
  if ((bool)uVar9) {
    plVar14 = param_2 + 1;
    param_2 = param_1 + 1;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      *(undefined4 *)((long)register0x00000008 + -0xb4) = uVar22;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)unaff_x19 = 0;
    }
    *(bool *)(unaff_x19 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = &UNK_1077791fc;
    param_1 = plVar14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar14;
  }
  puVar8 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar23 = (undefined1 *)((long)register0x00000008 + -0x10);
  plVar14 = param_1;
  func_0x00010777d1f4();
  func_0x00010777da78();
  uVar22 = SUB84(param_1,0);
  if ((bool)uVar9) {
    lVar21 = param_1[2];
    lVar27 = param_1[1];
    *(long *)((long)register0x00000008 + -0xa0) = param_1[2];
    *(long *)((long)register0x00000008 + -0xa8) = lVar27;
    if (lVar21 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d958();
    func_0x00010777d478();
    if ((ulong)param_1 >> 0x20 != 0) {
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
code_r0x000107779334:
    uVar19 = (undefined1)((ulong)param_1 >> 0x20);
    *(undefined1 *)unaff_x19 = 0;
code_r0x000107779368:
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
  }
  else {
    uVar9 = extraout_w8_05 == 6;
    if ((bool)uVar9) {
      unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
code_r0x00010777935c:
      func_0x00010777d2c0();
      func_0x0001072dbd40();
      uVar19 = 1;
      goto code_r0x000107779368;
    }
    uVar9 = extraout_w8_05 == 7;
    if ((bool)uVar9) {
      unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    uVar9 = extraout_w8_05 == 8;
    if (!(bool)uVar9) {
      unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    func_0x00010777dce0();
    func_0x00010777d398(param_1[1]);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x0001073b504c();
    unaff_x21 = (long *)((undefined8 *)param_1[1])[1];
    for (param_1 = *(long **)param_1[1]; uVar9 = param_1 == unaff_x21, !(bool)uVar9;
        param_1 = param_1 + 0xe) {
      func_0x00010777ddc4();
      *(int *)((long)register0x00000008 + -0xc0) = (int)puVar3;
      *(char *)((long)register0x00000008 + -0xbc) = (char)((ulong)puVar3 >> 0x20);
      if ((ulong)puVar3 >> 0x20 == 0) {
        func_0x00010777d724();
        goto code_r0x000107779380;
      }
      func_0x00010777d700();
      func_0x0001073b50ac();
    }
    func_0x00010777dac0();
    func_0x000107535bd0();
    func_0x00010777d338();
    func_0x0001072dbd40();
code_r0x000107779380:
    plVar14 = (long *)((long)register0x00000008 + -0xb0);
    func_0x0001056d1ce4();
  }
  func_0x00010777d1dc();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  puVar25 = &UNK_1077793bc;
  func_0x00010777d638();
  if ((int)plVar14[0xd] == 0) {
    plVar15 = param_2 + 1;
    puVar8 = (undefined1 *)((long)register0x00000008 + -0x1b0);
    *(long **)((long)register0x00000008 + -0xe0) = param_1;
    *(long **)((long)register0x00000008 + -0xd8) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0xd0) = puVar23;
    *(undefined **)((long)register0x00000008 + -200) = &UNK_1077793bc;
    puVar23 = (undefined1 *)((long)register0x00000008 + -0xd0);
    func_0x00010777d224(plVar15,plVar14 + 1);
    *(undefined4 *)((long)register0x00000008 + -0x130) = 0;
    param_2 = (long *)*plVar15;
    param_1 = (long *)((long)register0x00000008 + -0x198);
    func_0x00010777d824();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xf0) & 1) == 0) {
      func_0x00010777d724();
      plVar14 = plVar15;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar14 = plVar15;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_107779450;
    func_0x00010777d638();
  }
  uVar9 = (int)plVar14[0xd] == 1;
  if ((bool)uVar9) {
    plVar15 = param_2 + 1;
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(plVar15,plVar14 + 1);
    func_0x00010777d8d4();
    param_2 = (long *)*plVar15;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar8[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar14 = plVar15;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar14 = plVar15;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_1077794e4;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xf0;
  }
  uVar9 = (int)plVar14[0xd] == 2;
  if ((bool)uVar9) {
    plVar15 = param_2 + 1;
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(plVar15,plVar14 + 1);
    func_0x00010777d904();
    param_2 = (long *)*plVar15;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar8[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar14 = plVar15;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar14 = plVar15;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_107779578;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xf0;
  }
  uVar9 = (int)plVar14[0xd] == 3;
  if ((bool)uVar9) {
    plVar15 = param_2 + 1;
    param_2 = plVar14 + 1;
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(plVar15);
    unaff_x19 = (long *)(puVar8 + -0x60);
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    plVar14 = unaff_x19;
    func_0x00010777dbd0();
    puVar25 = &UNK_1077795e4;
    func_0x00010777d638();
    puVar8 = puVar8 + -0x70;
  }
  uVar9 = (int)plVar14[0xd] == 4;
  if ((bool)uVar9) {
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(param_2 + 1,plVar14 + 1);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar8[-0x30] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_107779678;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xf0;
  }
  puVar3 = puVar8 + -0x120;
  *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
  *(ulong *)(puVar8 + -0x48) = unaff_x25;
  *(long **)(puVar8 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar8 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
  *(long **)(puVar8 + -0x28) = unaff_x21;
  *(long **)(puVar8 + -0x20) = param_1;
  *(long **)(puVar8 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar8 + -0x10) = puVar23;
  *(undefined **)(puVar8 + -8) = puVar25;
  puVar23 = puVar8 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar8 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar9) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    puVar17 = (undefined1 *)param_1[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((puVar8[-0x60] & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar11 = (undefined8 *)(puVar8 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar9 = extraout_w8_06 == 6;
    if ((bool)uVar9) {
      unaff_x22 = puVar8 + -0x110;
      func_0x00010777d6c8();
      puVar17 = (undefined1 *)param_1[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar8[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar9 = extraout_w8_06 == 7;
    if ((bool)uVar9) {
      unaff_x22 = puVar8 + -0x110;
      func_0x00010777d6bc();
      puVar17 = (undefined1 *)param_1[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar8[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar9 = extraout_w8_06 == 8;
    if (!(bool)uVar9) {
      unaff_x22 = puVar8 + -0x110;
      func_0x00010777d6d4();
      puVar17 = (undefined1 *)param_1[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar8[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    *(undefined8 *)(puVar8 + -0x90) = 0;
    *(undefined8 *)(puVar8 + -0x88) = 0;
    *(undefined8 *)(puVar8 + -0x98) = 0;
    func_0x00010777d398(unaff_x21[1]);
    func_0x0001072dd514(puVar8 + -0x98);
    func_0x00010777de3c();
    do {
      uVar9 = unaff_x21 == unaff_x24;
      if ((bool)uVar9) {
        puVar17 = puVar8 + -0x98;
        func_0x0001073fb2d4(puVar8 + -0x110);
        lVar21 = *(long *)(puVar8 + -0x110);
        unaff_x19[1] = *(long *)(puVar8 + -0x108);
        *unaff_x19 = lVar21;
        *(undefined8 *)(puVar8 + -0x110) = 0;
        *(undefined8 *)(puVar8 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c(puVar8 + -0x110);
        goto code_r0x000107779838;
      }
      puVar17 = (undefined1 *)*param_1;
      func_0x000107323900(puVar8 + -0x110,unaff_x21);
      bVar2 = puVar8[-0xd8];
      unaff_x25 = (ulong)bVar2;
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar17 = puVar8 + -0x110;
        func_0x0001072d17f4(puVar8 + -0x98);
      }
      func_0x00010724b3d8(puVar8 + -0x110);
      unaff_x21 = unaff_x21 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    puVar11 = (undefined8 *)(puVar8 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar8 + -0x58));
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar12 = (undefined8 *)(puVar8 + -0x98);
  func_0x00010724b3d8();
  pcVar26 = (code *)&UNK_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar12 + 0xd) == 0) {
    puVar13 = (undefined8 *)(puVar17 + 8);
    puVar3 = puVar8 + -0x250;
    *(undefined8 *)(puVar8 + -0x150) = unaff_x28;
    *(undefined8 *)(puVar8 + -0x148) = unaff_x27;
    *(undefined8 **)(puVar8 + -0x140) = puVar11;
    *(long **)(puVar8 + -0x138) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x130) = puVar23;
    *(undefined **)(puVar8 + -0x128) = &UNK_1077798bc;
    puVar23 = puVar8 + -0x130;
    func_0x00010777d1f4(puVar13,puVar12 + 1);
    *(undefined4 *)(puVar8 + -0x1e8) = 0;
    puVar17 = (undefined1 *)*puVar13;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar8[-0x160] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar13;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar13;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&UNK_107779964;
    func_0x00010777d638();
    puVar11 = (undefined8 *)(puVar8 + -0x250);
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 1;
  if ((bool)uVar9) {
    puVar13 = (undefined8 *)(puVar17 + 8);
    puVar12 = puVar12 + 1;
    puVar4 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    puVar3[-0x128] = *(undefined1 *)puVar12;
    *(undefined4 *)(puVar3 + -200) = 1;
    puVar17 = (undefined1 *)*puVar13;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar13;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar13;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&UNK_107779a1c;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = puVar4;
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 2;
  if ((bool)uVar9) {
    puVar13 = (undefined8 *)(puVar17 + 8);
    puVar12 = puVar12 + 1;
    puVar5 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar3 + -0x128) = *puVar12;
    *(undefined4 *)(puVar3 + -200) = 2;
    puVar17 = (undefined1 *)*puVar13;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar13;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar13;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = FUN_107779ad4;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = puVar5;
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 3;
  if ((bool)uVar9) {
    puVar13 = puVar12 + 1;
    puVar12 = (undefined8 *)(puVar3 + -0x130);
    plVar6 = (long *)(puVar3 + -0x130);
    *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
    *(long **)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4(puVar17 + 8,puVar13);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&LAB_107779b94;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = (undefined8 *)(puVar17 + 8);
    unaff_x21 = plVar6;
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 4;
  if ((bool)uVar9) {
    puVar12 = puVar12 + 1;
    puVar7 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    uVar28 = *puVar12;
    *(undefined8 *)(puVar3 + -0x120) = puVar12[1];
    *(undefined8 *)(puVar3 + -0x128) = uVar28;
    *(undefined4 *)(puVar3 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&UNK_107779c4c;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = puVar7;
  }
  puVar8 = puVar3 + -0x150;
  puVar24 = puVar3 + -0x150;
  puVar17 = puVar3 + -0x150;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(ulong *)(puVar3 + -0x48) = unaff_x25;
  *(long **)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar3 + -0x20) = puVar11;
  *(long **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar23;
  *(code **)(puVar3 + -8) = pcVar26;
  puVar23 = puVar3 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar3 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar9) {
    lVar21 = unaff_x21[2];
    lVar27 = unaff_x21[1];
    *(long *)(puVar3 + -0x140) = unaff_x21[2];
    *(long *)(puVar3 + -0x148) = lVar27;
    if (lVar21 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    *(undefined4 *)(puVar3 + -0xe8) = 5;
    puVar18 = (undefined1 *)puVar11[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = (long *)(puVar3 + -0x150);
    puVar17 = unaff_x22;
    if ((puVar3[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = (long *)(puVar3 + -0x150);
      puVar24 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    plVar14 = (long *)(puVar3 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar17;
  }
  else {
    uVar9 = extraout_w8_07 == 6;
    if ((bool)uVar9) {
      func_0x00010777d6c8();
      puVar18 = (undefined1 *)puVar11[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar17 = puVar3 + -0x150;
      if ((puVar3[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar24 = puVar3 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar17 = puVar24;
      goto code_r0x000107779dfc;
    }
    uVar9 = extraout_w8_07 == 7;
    if ((bool)uVar9) {
      func_0x00010777d6bc();
      puVar18 = (undefined1 *)puVar11[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar17 = puVar3 + -0x150;
      if ((puVar3[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar24 = puVar3 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar9 = extraout_w8_07 == 8;
    if (!(bool)uVar9) {
      func_0x00010777d6d4();
      puVar18 = (undefined1 *)puVar11[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((puVar3[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(puVar3 + -0xd8) = 0;
    *(undefined8 *)(puVar3 + -0xd0) = 0;
    *(undefined8 *)(puVar3 + -0xe0) = 0;
    func_0x00010777d398(unaff_x21[1]);
    func_0x0001072ac134(puVar3 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar9 = unaff_x21 == unaff_x24;
      if ((bool)uVar9) {
        puVar18 = puVar3 + -0xe0;
        func_0x000107327958(puVar3 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(puVar3 + -0xa0,unaff_x21,*puVar11);
      puVar18 = puVar3 + -0xa0;
      func_0x00010729d394(puVar3 + -0x150);
      func_0x000104c3323c(puVar3 + -0xa0);
      bVar2 = puVar3[-0x110];
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar18 = puVar3 + -0x150;
        func_0x0001072d7f34(puVar3 + -0xe0);
      }
      func_0x000107267ed0(puVar3 + -0x150);
      unaff_x21 = unaff_x21 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    plVar14 = (long *)(puVar3 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar3 + -0x58));
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  plVar15 = (long *)(puVar3 + -0xa0);
  func_0x000107267ed0();
  puVar25 = &SUB_107779ed8;
  func_0x00010777d9d0();
  uVar10 = (uint)plVar14;
  uVar19 = SUB81(plVar14,0);
  if ((int)plVar15[0xd] == 0) {
    plVar16 = (long *)(puVar18 + 8);
    puVar8 = puVar3 + -0x210;
    *(undefined1 **)(puVar3 + -0x180) = unaff_x22;
    *(long **)(puVar3 + -0x178) = unaff_x21;
    *(long **)(puVar3 + -0x170) = plVar14;
    *(long **)(puVar3 + -0x168) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x160) = puVar23;
    *(undefined **)(puVar3 + -0x158) = &SUB_107779ed8;
    puVar23 = puVar3 + -0x160;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    *(undefined4 *)(puVar3 + -0x198) = 0;
    puVar18 = (undefined1 *)*plVar16;
    unaff_x21 = (long *)(puVar3 + -0x200);
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8;
    }
    else {
      puVar3[-0x201] = uVar19;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_107779f6c;
    plVar15 = plVar16;
    func_0x00010777d638();
    unaff_x19 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 1;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    unaff_x21 = (long *)(puVar8 + -0xb0);
    func_0x00010777dae0();
    puVar18 = (undefined1 *)*plVar16;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8_00;
    }
    else {
      puVar8[-0xb1] = uVar19;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a170;
    plVar15 = plVar16;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 2;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    unaff_x21 = (long *)(puVar8 + -0xb0);
    func_0x00010777dacc();
    puVar18 = (undefined1 *)*plVar16;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar19 = extraout_w8_01;
    }
    else {
      puVar8[-0xb1] = uVar19;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar19 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a208;
    plVar15 = plVar16;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 3;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    plVar14 = plVar16;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    func_0x00010777dd10();
    puVar18 = (undefined1 *)*plVar16;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar16 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar19 = extraout_w8_02;
    }
    else {
      puVar8[-0xb1] = (char)plVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar19 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a2a0;
    plVar15 = plVar14;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar14;
    plVar14 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 4;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    unaff_x21 = (long *)(puVar8 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar14 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar19 = extraout_w8_03;
    }
    else {
      puVar8[-0xb1] = (char)plVar14;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar19 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a338;
    plVar15 = plVar16;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar16;
  }
  uVar10 = (uint)plVar15;
  *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
  *(long **)(puVar8 + -0x28) = unaff_x21;
  *(long **)(puVar8 + -0x20) = plVar14;
  *(long **)(puVar8 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar8 + -0x10) = puVar23;
  *(undefined **)(puVar8 + -8) = puVar25;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar9) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar14 >> 8 & 1) != 0) {
      puVar8[-0xc0] = (char)plVar14;
      func_0x00010777d400();
      FUN_107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar19 = extraout_w8_04;
  }
  else {
    uVar9 = extraout_w8_08 == 6;
    if ((bool)uVar9) {
      unaff_x22 = puVar8 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar8[-0xc0] = (char)uVar10;
      func_0x00010777d400();
      FUN_107779f90();
    }
    else {
      uVar9 = extraout_w8_08 == 7;
      if ((bool)uVar9) {
        unaff_x22 = puVar8 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar8[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        FUN_107779f90();
      }
      else {
        uVar9 = extraout_w8_08 == 8;
        if ((bool)uVar9) {
          func_0x00010777dce0();
          func_0x00010777d398(unaff_x21[1]);
          func_0x0001075356bc(puVar8 + -0xb0);
          unaff_x22 = (undefined1 *)((undefined8 *)unaff_x21[1])[1];
          for (puVar23 = *(undefined1 **)unaff_x21[1]; uVar9 = puVar23 == unaff_x22, !(bool)uVar9;
              puVar23 = puVar23 + 0x70) {
            puVar3 = puVar23;
            func_0x000107775a54(puVar23,*plVar14);
            *(short *)(puVar8 + -0xc0) = (short)puVar3;
            if (((uint)puVar3 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar8 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar8 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar8[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        FUN_107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar19 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar19;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar8 + -0xd0) = puVar8 + -0x10;
  *(undefined **)(puVar8 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 1077793dc; end: 10777944f;  */

void FUN_1077793dc(undefined8 *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 in_ZR;
  undefined1 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 extraout_w8;
  undefined1 uVar15;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar16;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar17;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x19;
  undefined1 *unaff_x21;
  undefined1 *puVar18;
  undefined1 *unaff_x22;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar21;
  undefined *puVar22;
  code *pcVar23;
  undefined8 uVar24;
  byte abStack_1110 [4096];
  undefined1 **ppuStack_110;
  undefined8 ******ppppppuStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [24];
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_70;
  byte bStack_30;
  byte *pbVar3;
  
  pbVar3 = auStack_f0;
  pppppppuVar21 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d224();
  uStack_70 = 0;
  puVar12 = (undefined8 *)*param_1;
  func_0x00010777d824();
  func_0x00010777d648();
  if ((bStack_30 & 1) == 0) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777d80c();
    func_0x00010777d564();
    func_0x00010777d304();
    func_0x00010777d9c8();
  }
  func_0x00010777d9c0();
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d854();
  func_0x00010777d9c0();
  puVar22 = &UNK_107779450;
  func_0x00010777d638();
  uVar8 = *(int *)(param_1 + 0xd) == 1;
  if ((bool)uVar8) {
    puVar11 = puVar12 + 1;
    pbVar3 = abStack_1110 + 0xf30;
    puStack_f8 = &UNK_107779450;
    ppuStack_110 = &puStack_d8;
    ppppppuStack_100 = pppppppuVar21;
    func_0x00010777d224(puVar11,param_1 + 1);
    func_0x00010777d8d4();
    puVar12 = (undefined8 *)*puVar11;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((abStack_1110[0xff0] & 1) == 0) {
      func_0x00010777d724();
      param_1 = puVar11;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      param_1 = puVar11;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar22 = &UNK_1077794e4;
    func_0x00010777d638();
    pppppppuVar21 = &ppppppuStack_100;
  }
  uVar8 = *(int *)(param_1 + 0xd) == 2;
  if ((bool)uVar8) {
    puVar11 = puVar12 + 1;
    *(undefined1 ***)(pbVar3 + -0x20) = &puStack_d8;
    *(undefined8 **)(pbVar3 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar21;
    *(undefined **)(pbVar3 + -8) = puVar22;
    pppppppuVar21 = (undefined8 *******)(pbVar3 + -0x10);
    func_0x00010777d224(puVar11,param_1 + 1);
    func_0x00010777d904();
    puVar12 = (undefined8 *)*puVar11;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((pbVar3[-0x30] & 1) == 0) {
      func_0x00010777d724();
      param_1 = puVar11;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      param_1 = puVar11;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar22 = &UNK_107779578;
    func_0x00010777d638();
    pbVar3 = pbVar3 + -0xf0;
  }
  uVar8 = *(int *)(param_1 + 0xd) == 3;
  if ((bool)uVar8) {
    puVar11 = puVar12 + 1;
    puVar12 = param_1 + 1;
    *(undefined1 ***)(pbVar3 + -0x20) = &puStack_d8;
    *(undefined8 **)(pbVar3 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar21;
    *(undefined **)(pbVar3 + -8) = puVar22;
    pppppppuVar21 = (undefined8 *******)(pbVar3 + -0x10);
    func_0x00010777d224(puVar11);
    unaff_x19 = (undefined8 *)(pbVar3 + -0x60);
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    param_1 = unaff_x19;
    func_0x00010777dbd0();
    puVar22 = &UNK_1077795e4;
    func_0x00010777d638();
    pbVar3 = pbVar3 + -0x70;
  }
  uVar8 = *(int *)(param_1 + 0xd) == 4;
  if ((bool)uVar8) {
    *(undefined1 ***)(pbVar3 + -0x20) = &puStack_d8;
    *(undefined8 **)(pbVar3 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar21;
    *(undefined **)(pbVar3 + -8) = puVar22;
    pppppppuVar21 = (undefined8 *******)(pbVar3 + -0x10);
    func_0x00010777d224(puVar12 + 1,param_1 + 1);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((pbVar3[-0x30] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar22 = &UNK_107779678;
    func_0x00010777d638();
    pbVar3 = pbVar3 + -0xf0;
  }
  puVar2 = pbVar3 + -0x120;
  *(undefined8 *)(pbVar3 + -0x50) = unaff_x26;
  *(ulong *)(pbVar3 + -0x48) = unaff_x25;
  *(undefined1 **)(pbVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(pbVar3 + -0x38) = unaff_x23;
  *(undefined1 **)(pbVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(pbVar3 + -0x28) = unaff_x21;
  *(undefined1 ***)(pbVar3 + -0x20) = &puStack_d8;
  *(undefined8 **)(pbVar3 + -0x18) = unaff_x19;
  *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar21;
  *(undefined **)(pbVar3 + -8) = puVar22;
  puVar18 = pbVar3 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(pbVar3 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar8) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d7e4();
    func_0x00010777d640();
    puVar13 = puStack_d0;
    if ((pbVar3[-0x60] & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      puVar13 = puStack_d0;
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar12 = (undefined8 *)(pbVar3 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar8 = extraout_w8_05 == 6;
    if ((bool)uVar8) {
      unaff_x22 = pbVar3 + -0x110;
      func_0x00010777d6c8();
      func_0x00010777d7e4();
      func_0x00010777d660();
      puVar13 = puStack_d0;
      if ((pbVar3[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      puVar13 = puStack_d0;
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar8 = extraout_w8_05 == 7;
    if ((bool)uVar8) {
      unaff_x22 = pbVar3 + -0x110;
      func_0x00010777d6bc();
      func_0x00010777d7e4();
      func_0x00010777d660();
      puVar13 = puStack_d0;
      if ((pbVar3[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      puVar13 = puStack_d0;
      goto code_r0x0001077797d4;
    }
    uVar8 = extraout_w8_05 == 8;
    if (!(bool)uVar8) {
      unaff_x22 = pbVar3 + -0x110;
      func_0x00010777d6d4();
      func_0x00010777d7e4();
      func_0x00010777d660();
      puVar13 = puStack_d0;
      if ((pbVar3[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      puVar13 = puStack_d0;
      goto code_r0x0001077797d4;
    }
    *(undefined8 *)(pbVar3 + -0x90) = 0;
    *(undefined8 *)(pbVar3 + -0x88) = 0;
    *(undefined8 *)(pbVar3 + -0x98) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072dd514(pbVar3 + -0x98);
    func_0x00010777de3c();
    do {
      uVar8 = unaff_x21 == unaff_x24;
      if ((bool)uVar8) {
        puVar13 = pbVar3 + -0x98;
        func_0x0001073fb2d4(pbVar3 + -0x110);
        uVar24 = *(undefined8 *)(pbVar3 + -0x110);
        unaff_x19[1] = *(undefined8 *)(pbVar3 + -0x108);
        *unaff_x19 = uVar24;
        *(undefined8 *)(pbVar3 + -0x110) = 0;
        *(undefined8 *)(pbVar3 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c(pbVar3 + -0x110);
        goto code_r0x000107779838;
      }
      puVar13 = puStack_d8;
      func_0x000107323900(pbVar3 + -0x110,unaff_x21);
      bVar1 = pbVar3[-0xd8];
      unaff_x25 = (ulong)bVar1;
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar13 = pbVar3 + -0x110;
        func_0x0001072d17f4(pbVar3 + -0x98);
      }
      func_0x00010724b3d8(pbVar3 + -0x110);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    puVar12 = (undefined8 *)(pbVar3 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)(pbVar3 + -0x58));
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar11 = (undefined8 *)(pbVar3 + -0x98);
  func_0x00010724b3d8();
  pcVar23 = (code *)&UNK_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar11 + 0xd) == 0) {
    puVar10 = (undefined8 *)(puVar13 + 8);
    puVar2 = pbVar3 + -0x250;
    *(undefined8 *)(pbVar3 + -0x150) = unaff_x28;
    *(undefined8 *)(pbVar3 + -0x148) = unaff_x27;
    *(undefined8 **)(pbVar3 + -0x140) = puVar12;
    *(undefined8 **)(pbVar3 + -0x138) = unaff_x19;
    *(undefined1 **)(pbVar3 + -0x130) = puVar18;
    *(undefined **)(pbVar3 + -0x128) = &UNK_1077798bc;
    puVar18 = pbVar3 + -0x130;
    func_0x00010777d1f4(puVar10,puVar11 + 1);
    *(undefined4 *)(pbVar3 + -0x1e8) = 0;
    puVar13 = (undefined1 *)*puVar10;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((pbVar3[-0x160] & 1) == 0) {
      func_0x00010777d724();
      puVar11 = puVar10;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar10;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar23 = (code *)&UNK_107779964;
    func_0x00010777d638();
    puVar12 = (undefined8 *)(pbVar3 + -0x250);
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 1;
  if ((bool)uVar8) {
    puVar10 = (undefined8 *)(puVar13 + 8);
    puVar11 = puVar11 + 1;
    puVar4 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar12;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar18;
    *(code **)(puVar2 + -8) = pcVar23;
    puVar18 = puVar2 + -0x10;
    func_0x00010777d1f4();
    puVar2[-0x128] = *(undefined1 *)puVar11;
    *(undefined4 *)(puVar2 + -200) = 1;
    puVar13 = (undefined1 *)*puVar10;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar11 = puVar10;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar10;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar23 = (code *)&UNK_107779a1c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar12 = puVar4;
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 2;
  if ((bool)uVar8) {
    puVar10 = (undefined8 *)(puVar13 + 8);
    puVar11 = puVar11 + 1;
    puVar5 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar12;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar18;
    *(code **)(puVar2 + -8) = pcVar23;
    puVar18 = puVar2 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar2 + -0x128) = *puVar11;
    *(undefined4 *)(puVar2 + -200) = 2;
    puVar13 = (undefined1 *)*puVar10;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar11 = puVar10;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar10;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar23 = FUN_107779ad4;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar12 = puVar5;
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 3;
  if ((bool)uVar8) {
    puVar10 = puVar11 + 1;
    puVar11 = (undefined8 *)(puVar2 + -0x130);
    puVar6 = puVar2 + -0x130;
    *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x20) = puVar12;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar18;
    *(code **)(puVar2 + -8) = pcVar23;
    puVar18 = puVar2 + -0x10;
    func_0x00010777d1f4(puVar13 + 8,puVar10);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar23 = (code *)&LAB_107779b94;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar12 = (undefined8 *)(puVar13 + 8);
    unaff_x21 = puVar6;
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 4;
  if ((bool)uVar8) {
    puVar11 = puVar11 + 1;
    puVar7 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar12;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar18;
    *(code **)(puVar2 + -8) = pcVar23;
    puVar18 = puVar2 + -0x10;
    func_0x00010777d1f4();
    uVar24 = *puVar11;
    *(undefined8 *)(puVar2 + -0x120) = puVar11[1];
    *(undefined8 *)(puVar2 + -0x128) = uVar24;
    *(undefined4 *)(puVar2 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar23 = (code *)&UNK_107779c4c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar12 = puVar7;
  }
  puVar13 = puVar2 + -0x150;
  puVar19 = puVar2 + -0x150;
  puVar20 = puVar2 + -0x150;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(ulong *)(puVar2 + -0x48) = unaff_x25;
  *(undefined1 **)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar2 + -0x20) = puVar12;
  *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar18;
  *(code **)(puVar2 + -8) = pcVar23;
  puVar18 = puVar2 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar2 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar8) {
    lVar17 = *(long *)(unaff_x21 + 0x10);
    uVar24 = *(undefined8 *)(unaff_x21 + 8);
    *(undefined8 *)(puVar2 + -0x140) = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)(puVar2 + -0x148) = uVar24;
    if (lVar17 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    *(undefined4 *)(puVar2 + -0xe8) = 5;
    puVar14 = (undefined1 *)puVar12[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = puVar2 + -0x150;
    puVar20 = unaff_x22;
    if ((puVar2[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = puVar2 + -0x150;
      puVar19 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    puVar12 = (undefined8 *)(puVar2 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar20;
  }
  else {
    uVar8 = extraout_w8_06 == 6;
    if ((bool)uVar8) {
      func_0x00010777d6c8();
      puVar14 = (undefined1 *)puVar12[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar20 = puVar2 + -0x150;
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar19 = puVar2 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar20 = puVar19;
      goto code_r0x000107779dfc;
    }
    uVar8 = extraout_w8_06 == 7;
    if ((bool)uVar8) {
      func_0x00010777d6bc();
      puVar14 = (undefined1 *)puVar12[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar20 = puVar2 + -0x150;
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar19 = puVar2 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar8 = extraout_w8_06 == 8;
    if (!(bool)uVar8) {
      func_0x00010777d6d4();
      puVar14 = (undefined1 *)puVar12[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(puVar2 + -0xd8) = 0;
    *(undefined8 *)(puVar2 + -0xd0) = 0;
    *(undefined8 *)(puVar2 + -0xe0) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072ac134(puVar2 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar8 = unaff_x21 == unaff_x24;
      if ((bool)uVar8) {
        puVar14 = puVar2 + -0xe0;
        func_0x000107327958(puVar2 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(puVar2 + -0xa0,unaff_x21,*puVar12);
      puVar14 = puVar2 + -0xa0;
      func_0x00010729d394(puVar2 + -0x150);
      func_0x000104c3323c(puVar2 + -0xa0);
      bVar1 = puVar2[-0x110];
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar14 = puVar2 + -0x150;
        func_0x0001072d7f34(puVar2 + -0xe0);
      }
      func_0x000107267ed0(puVar2 + -0x150);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar12 = (undefined8 *)(puVar2 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar2 + -0x58));
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar11 = (undefined8 *)(puVar2 + -0xa0);
  func_0x000107267ed0();
  puVar22 = &SUB_107779ed8;
  func_0x00010777d9d0();
  uVar9 = (uint)puVar12;
  uVar16 = SUB81(puVar12,0);
  if (*(int *)(puVar11 + 0xd) == 0) {
    puVar10 = (undefined8 *)(puVar14 + 8);
    puVar13 = puVar2 + -0x210;
    *(undefined1 **)(puVar2 + -0x180) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x178) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x170) = puVar12;
    *(undefined8 **)(puVar2 + -0x168) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x160) = puVar18;
    *(undefined **)(puVar2 + -0x158) = &SUB_107779ed8;
    puVar18 = puVar2 + -0x160;
    func_0x00010777d1f4(puVar10,puVar11 + 1);
    *(undefined4 *)(puVar2 + -0x198) = 0;
    puVar14 = (undefined1 *)*puVar10;
    unaff_x21 = puVar2 + -0x200;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8;
    }
    else {
      puVar2[-0x201] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar22 = &UNK_107779f6c;
    puVar11 = puVar10;
    func_0x00010777d638();
    unaff_x19 = puVar10;
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 1;
  if ((bool)uVar8) {
    puVar10 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar13 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar13 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar13 + -0x20) = puVar12;
    *(undefined8 **)(puVar13 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar13 + -0x10) = puVar18;
    *(undefined **)(puVar13 + -8) = puVar22;
    puVar18 = puVar13 + -0x10;
    func_0x00010777d1f4(puVar10,puVar11 + 1);
    unaff_x21 = puVar13 + -0xb0;
    func_0x00010777dae0();
    puVar14 = (undefined1 *)*puVar10;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_00;
    }
    else {
      puVar13[-0xb1] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar22 = &UNK_10777a170;
    puVar11 = puVar10;
    func_0x00010777d638();
    puVar13 = puVar13 + -0xc0;
    unaff_x19 = puVar10;
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 2;
  if ((bool)uVar8) {
    puVar10 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar13 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar13 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar13 + -0x20) = puVar12;
    *(undefined8 **)(puVar13 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar13 + -0x10) = puVar18;
    *(undefined **)(puVar13 + -8) = puVar22;
    puVar18 = puVar13 + -0x10;
    func_0x00010777d1f4(puVar10,puVar11 + 1);
    unaff_x21 = puVar13 + -0xb0;
    func_0x00010777dacc();
    puVar14 = (undefined1 *)*puVar10;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_01;
    }
    else {
      puVar13[-0xb1] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar22 = &UNK_10777a208;
    puVar11 = puVar10;
    func_0x00010777d638();
    puVar13 = puVar13 + -0xc0;
    unaff_x19 = puVar10;
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 3;
  if ((bool)uVar8) {
    puVar10 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar13 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar13 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar13 + -0x20) = puVar12;
    *(undefined8 **)(puVar13 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar13 + -0x10) = puVar18;
    *(undefined **)(puVar13 + -8) = puVar22;
    puVar18 = puVar13 + -0x10;
    puVar12 = puVar10;
    func_0x00010777d1f4(puVar10,puVar11 + 1);
    func_0x00010777dd10();
    puVar14 = (undefined1 *)*puVar10;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_02;
    }
    else {
      puVar13[-0xb1] = (char)puVar10;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar22 = &UNK_10777a2a0;
    puVar11 = puVar12;
    func_0x00010777d638();
    puVar13 = puVar13 + -0xc0;
    unaff_x19 = puVar12;
    puVar12 = puVar10;
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 4;
  if ((bool)uVar8) {
    puVar10 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar13 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar13 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar13 + -0x20) = puVar12;
    *(undefined8 **)(puVar13 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar13 + -0x10) = puVar18;
    *(undefined **)(puVar13 + -8) = puVar22;
    puVar18 = puVar13 + -0x10;
    func_0x00010777d1f4(puVar10,puVar11 + 1);
    unaff_x21 = puVar13 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar12 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_03;
    }
    else {
      puVar13[-0xb1] = (char)puVar12;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar22 = &UNK_10777a338;
    puVar11 = puVar10;
    func_0x00010777d638();
    puVar13 = puVar13 + -0xc0;
    unaff_x19 = puVar10;
  }
  uVar9 = (uint)puVar11;
  *(undefined1 **)(puVar13 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar13 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar13 + -0x20) = puVar12;
  *(undefined8 **)(puVar13 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar13 + -0x10) = puVar18;
  *(undefined **)(puVar13 + -8) = puVar22;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar8) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar12 >> 8 & 1) != 0) {
      puVar13[-0xc0] = (char)puVar12;
      func_0x00010777d400();
      FUN_107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar16 = extraout_w8_04;
  }
  else {
    uVar8 = extraout_w8_07 == 6;
    if ((bool)uVar8) {
      unaff_x22 = puVar13 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar9 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar13[-0xc0] = (char)uVar9;
      func_0x00010777d400();
      FUN_107779f90();
    }
    else {
      uVar8 = extraout_w8_07 == 7;
      if ((bool)uVar8) {
        unaff_x22 = puVar13 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar9 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar13[-0xc0] = (char)uVar9;
        func_0x00010777d400();
        FUN_107779f90();
      }
      else {
        uVar8 = extraout_w8_07 == 8;
        if ((bool)uVar8) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar13 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar18 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8);
              uVar8 = puVar18 == unaff_x22, !(bool)uVar8; puVar18 = puVar18 + 0x70) {
            puVar2 = puVar18;
            func_0x000107775a54(puVar18,*puVar12);
            *(short *)(puVar13 + -0xc0) = (short)puVar2;
            if (((uint)puVar2 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar13 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar13 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar9 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar13[-0xc0] = (char)uVar9;
        func_0x00010777d400();
        FUN_107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar16 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar16;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar13 + -0xd0) = puVar13 + -0x10;
  *(undefined **)(puVar13 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779608; end: 107779677;  */

void FUN_107779608(void)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined1 in_ZR;
  undefined1 uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 extraout_w8;
  undefined1 uVar15;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar16;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar17;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar18;
  undefined1 *puVar19;
  code *pcVar20;
  undefined *puVar21;
  undefined8 uVar22;
  byte abStack_dd0 [2960];
  undefined8 ******ppppppuStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [16];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  byte bStack_1c8;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  byte bStack_150;
  undefined8 uStack_148;
  undefined8 *****pppppuStack_100;
  undefined *puStack_f8;
  byte bStack_30;
  
  func_0x00010777d224();
  func_0x00010777d8ec();
  func_0x00010777d824();
  func_0x00010777d648();
  if ((bStack_30 & 1) == 0) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777d80c();
    func_0x00010777d564();
    func_0x00010777d304();
    func_0x00010777d9c8();
  }
  func_0x00010777d9c0();
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d854();
  func_0x00010777d9c0();
  func_0x00010777d638();
  pbVar6 = auStack_210;
  puStack_f8 = &UNK_107779678;
  pppppppuVar18 = (undefined8 *******)&pppppuStack_100;
  pppppuStack_100 = (undefined8 *****)&stack0xfffffffffffffff0;
  func_0x00010777db88();
  func_0x00010777d250();
  uStack_148 = extraout_x8;
  func_0x00010777da78();
  if ((bool)in_ZR) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    puVar13 = (undefined8 *)unaff_x20[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((bStack_150 & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    pbVar10 = (byte *)&uStack_188;
    func_0x00010724b3d8();
  }
  else {
    in_ZR = extraout_w8_05 == 6;
    if ((bool)in_ZR) {
      unaff_x22 = &uStack_200;
      func_0x00010777d6c8();
      puVar13 = (undefined8 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((bStack_150 & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    in_ZR = extraout_w8_05 == 7;
    if ((bool)in_ZR) {
      unaff_x22 = &uStack_200;
      func_0x00010777d6bc();
      puVar13 = (undefined8 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((bStack_150 & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    in_ZR = extraout_w8_05 == 8;
    if (!(bool)in_ZR) {
      unaff_x22 = &uStack_200;
      func_0x00010777d6d4();
      puVar13 = (undefined8 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((bStack_150 & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_188 = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072dd514(&uStack_188);
    func_0x00010777de3c();
    do {
      in_ZR = unaff_x21 == unaff_x24;
      if ((bool)in_ZR) {
        puVar13 = &uStack_188;
        func_0x0001073fb2d4(&uStack_200);
        unaff_x19[1] = uStack_1f8;
        *unaff_x19 = uStack_200;
        uStack_200 = 0;
        uStack_1f8 = 0;
        func_0x00010777d960();
        func_0x00010726b09c(&uStack_200);
        goto code_r0x000107779838;
      }
      puVar13 = (undefined8 *)*unaff_x20;
      func_0x000107323900(&uStack_200,unaff_x21);
      bVar1 = bStack_1c8;
      unaff_x25 = (ulong)bStack_1c8;
      if ((bStack_1c8 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar13 = &uStack_200;
        func_0x0001072d17f4(&uStack_188);
      }
      func_0x00010724b3d8(&uStack_200);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    pbVar10 = (byte *)&uStack_188;
    func_0x00010726e078();
  }
  func_0x00010777d23c(uStack_148);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar12 = &uStack_188;
  func_0x00010724b3d8();
  pcVar20 = (code *)&UNK_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar12 + 0xd) == 0) {
    puVar11 = puVar13 + 1;
    pbVar6 = abStack_dd0 + 0xa90;
    pbVar10 = abStack_dd0 + 0xa90;
    puStack_218 = &UNK_1077798bc;
    ppppppuStack_220 = pppppppuVar18;
    func_0x00010777d1f4(puVar11,puVar12 + 1);
    abStack_dd0[0xaf8] = 0;
    abStack_dd0[0xaf9] = 0;
    abStack_dd0[0xafa] = 0;
    abStack_dd0[0xafb] = 0;
    puVar13 = (undefined8 *)*puVar11;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((abStack_dd0[0xb80] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar11;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar11;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar20 = (code *)&UNK_107779964;
    func_0x00010777d638();
    pppppppuVar18 = &ppppppuStack_220;
  }
  uVar8 = *(int *)(puVar12 + 0xd) == 1;
  if ((bool)uVar8) {
    puVar11 = puVar13 + 1;
    puVar12 = puVar12 + 1;
    puVar2 = (undefined8 *)(pbVar6 + -0x130);
    *(undefined8 *)(pbVar6 + -0x30) = unaff_x28;
    *(undefined8 *)(pbVar6 + -0x28) = unaff_x27;
    *(byte **)(pbVar6 + -0x20) = pbVar10;
    *(undefined8 **)(pbVar6 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar6 + -0x10) = pppppppuVar18;
    *(code **)(pbVar6 + -8) = pcVar20;
    pppppppuVar18 = (undefined8 *******)(pbVar6 + -0x10);
    func_0x00010777d1f4();
    pbVar6[-0x128] = *(undefined1 *)puVar12;
    *(undefined4 *)(pbVar6 + -200) = 1;
    puVar13 = (undefined8 *)*puVar11;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((pbVar6[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar11;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar11;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar20 = (code *)&UNK_107779a1c;
    func_0x00010777d638();
    pbVar6 = pbVar6 + -0x130;
    pbVar10 = (byte *)puVar2;
  }
  uVar8 = *(int *)(puVar12 + 0xd) == 2;
  if ((bool)uVar8) {
    puVar11 = puVar13 + 1;
    puVar12 = puVar12 + 1;
    puVar3 = (undefined8 *)(pbVar6 + -0x130);
    *(undefined8 *)(pbVar6 + -0x30) = unaff_x28;
    *(undefined8 *)(pbVar6 + -0x28) = unaff_x27;
    *(byte **)(pbVar6 + -0x20) = pbVar10;
    *(undefined8 **)(pbVar6 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar6 + -0x10) = pppppppuVar18;
    *(code **)(pbVar6 + -8) = pcVar20;
    pppppppuVar18 = (undefined8 *******)(pbVar6 + -0x10);
    func_0x00010777d1f4();
    *(undefined8 *)(pbVar6 + -0x128) = *puVar12;
    *(undefined4 *)(pbVar6 + -200) = 2;
    puVar13 = (undefined8 *)*puVar11;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((pbVar6[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar11;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar11;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar20 = FUN_107779ad4;
    func_0x00010777d638();
    pbVar6 = pbVar6 + -0x130;
    pbVar10 = (byte *)puVar3;
  }
  uVar8 = *(int *)(puVar12 + 0xd) == 3;
  if ((bool)uVar8) {
    puVar11 = puVar12 + 1;
    puVar12 = (undefined8 *)(pbVar6 + -0x130);
    puVar4 = pbVar6 + -0x130;
    *(undefined8 **)(pbVar6 + -0x30) = unaff_x22;
    *(undefined1 **)(pbVar6 + -0x28) = unaff_x21;
    *(byte **)(pbVar6 + -0x20) = pbVar10;
    *(undefined8 **)(pbVar6 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar6 + -0x10) = pppppppuVar18;
    *(code **)(pbVar6 + -8) = pcVar20;
    pppppppuVar18 = (undefined8 *******)(pbVar6 + -0x10);
    func_0x00010777d1f4(puVar13 + 1,puVar11);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((pbVar6[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar20 = (code *)&LAB_107779b94;
    func_0x00010777d638();
    pbVar6 = pbVar6 + -0x130;
    pbVar10 = (byte *)(puVar13 + 1);
    unaff_x21 = puVar4;
  }
  uVar8 = *(int *)(puVar12 + 0xd) == 4;
  if ((bool)uVar8) {
    puVar12 = puVar12 + 1;
    puVar5 = (undefined8 *)(pbVar6 + -0x130);
    *(undefined8 *)(pbVar6 + -0x30) = unaff_x28;
    *(undefined8 *)(pbVar6 + -0x28) = unaff_x27;
    *(byte **)(pbVar6 + -0x20) = pbVar10;
    *(undefined8 **)(pbVar6 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar6 + -0x10) = pppppppuVar18;
    *(code **)(pbVar6 + -8) = pcVar20;
    pppppppuVar18 = (undefined8 *******)(pbVar6 + -0x10);
    func_0x00010777d1f4();
    uVar22 = *puVar12;
    *(undefined8 *)(pbVar6 + -0x120) = puVar12[1];
    *(undefined8 *)(pbVar6 + -0x128) = uVar22;
    *(undefined4 *)(pbVar6 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((pbVar6[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar20 = (code *)&UNK_107779c4c;
    func_0x00010777d638();
    pbVar6 = pbVar6 + -0x130;
    pbVar10 = (byte *)puVar5;
  }
  puVar7 = pbVar6 + -0x150;
  puVar12 = (undefined8 *)(pbVar6 + -0x150);
  puVar13 = (undefined8 *)(pbVar6 + -0x150);
  *(undefined8 *)(pbVar6 + -0x50) = unaff_x26;
  *(ulong *)(pbVar6 + -0x48) = unaff_x25;
  *(undefined1 **)(pbVar6 + -0x40) = unaff_x24;
  *(undefined8 *)(pbVar6 + -0x38) = unaff_x23;
  *(undefined8 **)(pbVar6 + -0x30) = unaff_x22;
  *(undefined1 **)(pbVar6 + -0x28) = unaff_x21;
  *(byte **)(pbVar6 + -0x20) = pbVar10;
  *(undefined8 **)(pbVar6 + -0x18) = unaff_x19;
  *(undefined8 ********)(pbVar6 + -0x10) = pppppppuVar18;
  *(code **)(pbVar6 + -8) = pcVar20;
  puVar19 = pbVar6 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(pbVar6 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar8) {
    lVar17 = *(long *)(unaff_x21 + 0x10);
    uVar22 = *(undefined8 *)(unaff_x21 + 8);
    *(undefined8 *)(pbVar6 + -0x140) = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)(pbVar6 + -0x148) = uVar22;
    if (lVar17 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    *(undefined4 *)(pbVar6 + -0xe8) = 5;
    puVar14 = *(undefined1 **)((long)pbVar10 + 8);
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = pbVar6 + -0x150;
    puVar13 = unaff_x22;
    if ((pbVar6[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = pbVar6 + -0x150;
      puVar12 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    puVar12 = (undefined8 *)(pbVar6 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar13;
  }
  else {
    uVar8 = extraout_w8_06 == 6;
    if ((bool)uVar8) {
      func_0x00010777d6c8();
      puVar14 = *(undefined1 **)((long)pbVar10 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar13 = (undefined8 *)(pbVar6 + -0x150);
      if ((pbVar6[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar12 = (undefined8 *)(pbVar6 + -0x150);
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar13 = puVar12;
      goto code_r0x000107779dfc;
    }
    uVar8 = extraout_w8_06 == 7;
    if ((bool)uVar8) {
      func_0x00010777d6bc();
      puVar14 = *(undefined1 **)((long)pbVar10 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar13 = (undefined8 *)(pbVar6 + -0x150);
      if ((pbVar6[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar12 = (undefined8 *)(pbVar6 + -0x150);
      goto code_r0x000107779dec;
    }
    uVar8 = extraout_w8_06 == 8;
    if (!(bool)uVar8) {
      func_0x00010777d6d4();
      puVar14 = *(undefined1 **)((long)pbVar10 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((pbVar6[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(pbVar6 + -0xd8) = 0;
    *(undefined8 *)(pbVar6 + -0xd0) = 0;
    *(undefined8 *)(pbVar6 + -0xe0) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072ac134(pbVar6 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar8 = unaff_x21 == unaff_x24;
      if ((bool)uVar8) {
        puVar14 = pbVar6 + -0xe0;
        func_0x000107327958(pbVar6 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(pbVar6 + -0xa0,unaff_x21,*(undefined8 *)pbVar10);
      puVar14 = pbVar6 + -0xa0;
      func_0x00010729d394(pbVar6 + -0x150);
      func_0x000104c3323c(pbVar6 + -0xa0);
      bVar1 = pbVar6[-0x110];
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar14 = pbVar6 + -0x150;
        func_0x0001072d7f34(pbVar6 + -0xe0);
      }
      func_0x000107267ed0(pbVar6 + -0x150);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar12 = (undefined8 *)(pbVar6 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(pbVar6 + -0x58));
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar13 = (undefined8 *)(pbVar6 + -0xa0);
  func_0x000107267ed0();
  puVar21 = &SUB_107779ed8;
  func_0x00010777d9d0();
  uVar9 = (uint)puVar12;
  uVar16 = SUB81(puVar12,0);
  if (*(int *)(puVar13 + 0xd) == 0) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    puVar7 = pbVar6 + -0x210;
    *(undefined8 **)(pbVar6 + -0x180) = unaff_x22;
    *(undefined1 **)(pbVar6 + -0x178) = unaff_x21;
    *(undefined8 **)(pbVar6 + -0x170) = puVar12;
    *(undefined8 **)(pbVar6 + -0x168) = unaff_x19;
    *(undefined1 **)(pbVar6 + -0x160) = puVar19;
    *(undefined **)(pbVar6 + -0x158) = &SUB_107779ed8;
    puVar19 = pbVar6 + -0x160;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    *(undefined4 *)(pbVar6 + -0x198) = 0;
    puVar14 = (undefined1 *)*puVar11;
    unaff_x21 = pbVar6 + -0x200;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8;
    }
    else {
      pbVar6[-0x201] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar21 = &UNK_107779f6c;
    puVar13 = puVar11;
    func_0x00010777d638();
    unaff_x19 = puVar11;
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 1;
  if ((bool)uVar8) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined8 **)(puVar7 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = puVar12;
    *(undefined8 **)(puVar7 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x10) = puVar19;
    *(undefined **)(puVar7 + -8) = puVar21;
    puVar19 = puVar7 + -0x10;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    unaff_x21 = puVar7 + -0xb0;
    func_0x00010777dae0();
    puVar14 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_00;
    }
    else {
      puVar7[-0xb1] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar21 = &UNK_10777a170;
    puVar13 = puVar11;
    func_0x00010777d638();
    puVar7 = puVar7 + -0xc0;
    unaff_x19 = puVar11;
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 2;
  if ((bool)uVar8) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined8 **)(puVar7 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = puVar12;
    *(undefined8 **)(puVar7 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x10) = puVar19;
    *(undefined **)(puVar7 + -8) = puVar21;
    puVar19 = puVar7 + -0x10;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    unaff_x21 = puVar7 + -0xb0;
    func_0x00010777dacc();
    puVar14 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_01;
    }
    else {
      puVar7[-0xb1] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar21 = &UNK_10777a208;
    puVar13 = puVar11;
    func_0x00010777d638();
    puVar7 = puVar7 + -0xc0;
    unaff_x19 = puVar11;
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 3;
  if ((bool)uVar8) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined8 **)(puVar7 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = puVar12;
    *(undefined8 **)(puVar7 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x10) = puVar19;
    *(undefined **)(puVar7 + -8) = puVar21;
    puVar19 = puVar7 + -0x10;
    puVar12 = puVar11;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    func_0x00010777dd10();
    puVar14 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_02;
    }
    else {
      puVar7[-0xb1] = (char)puVar11;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar21 = &UNK_10777a2a0;
    puVar13 = puVar12;
    func_0x00010777d638();
    puVar7 = puVar7 + -0xc0;
    unaff_x19 = puVar12;
    puVar12 = puVar11;
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 4;
  if ((bool)uVar8) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined8 **)(puVar7 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = puVar12;
    *(undefined8 **)(puVar7 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x10) = puVar19;
    *(undefined **)(puVar7 + -8) = puVar21;
    puVar19 = puVar7 + -0x10;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    unaff_x21 = puVar7 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar12 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_03;
    }
    else {
      puVar7[-0xb1] = (char)puVar12;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar21 = &UNK_10777a338;
    puVar13 = puVar11;
    func_0x00010777d638();
    puVar7 = puVar7 + -0xc0;
    unaff_x19 = puVar11;
  }
  uVar9 = (uint)puVar13;
  *(undefined8 **)(puVar7 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar7 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar7 + -0x20) = puVar12;
  *(undefined8 **)(puVar7 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar7 + -0x10) = puVar19;
  *(undefined **)(puVar7 + -8) = puVar21;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar8) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar12 >> 8 & 1) != 0) {
      puVar7[-0xc0] = (char)puVar12;
      func_0x00010777d400();
      FUN_107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar16 = extraout_w8_04;
  }
  else {
    uVar8 = extraout_w8_07 == 6;
    if ((bool)uVar8) {
      unaff_x22 = (undefined8 *)(puVar7 + -0xb0);
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar9 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar7[-0xc0] = (char)uVar9;
      func_0x00010777d400();
      FUN_107779f90();
    }
    else {
      uVar8 = extraout_w8_07 == 7;
      if ((bool)uVar8) {
        unaff_x22 = (undefined8 *)(puVar7 + -0xb0);
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar9 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar7[-0xc0] = (char)uVar9;
        func_0x00010777d400();
        FUN_107779f90();
      }
      else {
        uVar8 = extraout_w8_07 == 8;
        if ((bool)uVar8) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar7 + -0xb0);
          unaff_x22 = (undefined8 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar13 = (undefined8 *)**(undefined8 **)(unaff_x21 + 8);
              uVar8 = puVar13 == unaff_x22, !(bool)uVar8; puVar13 = puVar13 + 0xe) {
            puVar11 = puVar13;
            func_0x000107775a54(puVar13,*puVar12);
            *(short *)(puVar7 + -0xc0) = (short)puVar11;
            if (((uint)puVar11 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar7 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = (undefined8 *)(puVar7 + -0xb0);
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar9 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar7[-0xc0] = (char)uVar9;
        func_0x00010777d400();
        FUN_107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar16 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar16;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 1);
  func_0x00010777d638();
  *(undefined1 **)(puVar7 + -0xd0) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779ad4; end: 107779af7;  */

void FUN_107779ad4(byte *param_1,long param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 extraout_w8;
  undefined1 uVar11;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar12;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  undefined8 extraout_x8;
  long lVar13;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  byte *unaff_x21;
  undefined1 *puVar14;
  undefined1 *unaff_x22;
  undefined1 *puVar15;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar16;
  undefined8 uVar17;
  byte abStack_830 [2048];
  
  uVar4 = *(int *)(param_1 + 0x68) == 3;
  if ((bool)uVar4) {
    unaff_x20 = (undefined8 *)(param_2 + 8);
    puVar14 = param_1 + 8;
    param_1 = abStack_830 + 0x700;
    unaff_x21 = abStack_830 + 0x700;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4(unaff_x20,puVar14);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((abStack_830[0x7f0] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    unaff_x30 = &LAB_107779b94;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_830 + 0x700);
  }
  uVar4 = *(int *)(param_1 + 0x68) == 4;
  if ((bool)uVar4) {
    puVar6 = (undefined8 *)(param_1 + 8);
    puVar2 = (undefined8 *)((long)register0x00000008 + -0x130);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x27;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    uVar17 = *puVar6;
    *(undefined8 *)((long)register0x00000008 + -0x120) = puVar6[1];
    *(undefined8 *)((long)register0x00000008 + -0x128) = uVar17;
    *(undefined4 *)((long)register0x00000008 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x40) & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    unaff_x30 = &UNK_107779c4c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x130);
    unaff_x20 = puVar2;
  }
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x150);
  puVar15 = (undefined1 *)((long)register0x00000008 + -0x150);
  puVar9 = (undefined1 *)((long)register0x00000008 + -0x150);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(byte **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar14 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar4) {
    lVar13 = *(long *)(unaff_x21 + 0x10);
    uVar17 = *(undefined8 *)(unaff_x21 + 8);
    *(undefined8 *)((long)register0x00000008 + -0x140) = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0x148) = uVar17;
    if (lVar13 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    *(undefined4 *)((long)register0x00000008 + -0xe8) = 5;
    puVar10 = (undefined1 *)unaff_x20[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x150);
    puVar9 = unaff_x22;
    if ((*(byte *)((long)register0x00000008 + -0x60) & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x150);
      puVar15 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    puVar6 = (undefined8 *)((long)register0x00000008 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar9;
  }
  else {
    uVar4 = extraout_w8_05 == 6;
    if ((bool)uVar4) {
      func_0x00010777d6c8();
      puVar10 = (undefined1 *)unaff_x20[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar9 = (undefined1 *)((long)register0x00000008 + -0x150);
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar15 = (undefined1 *)((long)register0x00000008 + -0x150);
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar9 = puVar15;
      goto code_r0x000107779dfc;
    }
    uVar4 = extraout_w8_05 == 7;
    if ((bool)uVar4) {
      func_0x00010777d6bc();
      puVar10 = (undefined1 *)unaff_x20[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar9 = (undefined1 *)((long)register0x00000008 + -0x150);
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar15 = (undefined1 *)((long)register0x00000008 + -0x150);
      goto code_r0x000107779dec;
    }
    uVar4 = extraout_w8_05 == 8;
    if (!(bool)uVar4) {
      func_0x00010777d6d4();
      puVar10 = (undefined1 *)unaff_x20[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072ac134((undefined1 *)((long)register0x00000008 + -0xe0));
    func_0x00010777de3c();
    do {
      uVar4 = unaff_x21 == unaff_x24;
      if ((bool)uVar4) {
        puVar10 = (undefined1 *)((long)register0x00000008 + -0xe0);
        func_0x000107327958((undefined1 *)((long)register0x00000008 + -0x150));
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804((undefined1 *)((long)register0x00000008 + -0xa0),unaff_x21,*unaff_x20);
      puVar10 = (undefined1 *)((long)register0x00000008 + -0xa0);
      func_0x00010729d394((undefined1 *)((long)register0x00000008 + -0x150));
      func_0x000104c3323c((undefined1 *)((long)register0x00000008 + -0xa0));
      bVar1 = *(byte *)((long)register0x00000008 + -0x110);
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar10 = (undefined1 *)((long)register0x00000008 + -0x150);
        func_0x0001072d7f34((undefined1 *)((long)register0x00000008 + -0xe0));
      }
      func_0x000107267ed0((undefined1 *)((long)register0x00000008 + -0x150));
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar6 = (undefined8 *)((long)register0x00000008 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)((long)register0x00000008 + -0x58));
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar7 = (undefined8 *)((long)register0x00000008 + -0xa0);
  func_0x000107267ed0();
  puVar16 = &SUB_107779ed8;
  func_0x00010777d9d0();
  uVar5 = (uint)puVar6;
  uVar12 = SUB81(puVar6,0);
  if (*(int *)(puVar7 + 0xd) == 0) {
    puVar8 = (undefined8 *)(puVar10 + 8);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x210);
    *(undefined1 **)((long)register0x00000008 + -0x180) = unaff_x22;
    *(byte **)((long)register0x00000008 + -0x178) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x170) = puVar6;
    *(undefined8 **)((long)register0x00000008 + -0x168) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x160) = puVar14;
    *(undefined **)((long)register0x00000008 + -0x158) = &SUB_107779ed8;
    puVar14 = (undefined1 *)((long)register0x00000008 + -0x160);
    func_0x00010777d1f4(puVar8,puVar7 + 1);
    *(undefined4 *)((long)register0x00000008 + -0x198) = 0;
    puVar10 = (undefined1 *)*puVar8;
    unaff_x21 = (byte *)((long)register0x00000008 + -0x200);
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar5 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar11 = extraout_w8;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0x201) = uVar12;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar11 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar11;
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    puVar16 = &UNK_107779f6c;
    puVar7 = puVar8;
    func_0x00010777d638();
    unaff_x19 = puVar8;
  }
  uVar4 = *(int *)(puVar7 + 0xd) == 1;
  if ((bool)uVar4) {
    puVar8 = (undefined8 *)(puVar10 + 8);
    *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
    *(byte **)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar3 + -0x20) = puVar6;
    *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(undefined **)(puVar3 + -8) = puVar16;
    puVar14 = puVar3 + -0x10;
    func_0x00010777d1f4(puVar8,puVar7 + 1);
    unaff_x21 = puVar3 + -0xb0;
    func_0x00010777dae0();
    puVar10 = (undefined1 *)*puVar8;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar5 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar11 = extraout_w8_00;
    }
    else {
      puVar3[-0xb1] = uVar12;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar11 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar11;
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    puVar16 = &UNK_10777a170;
    puVar7 = puVar8;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x19 = puVar8;
  }
  uVar4 = *(int *)(puVar7 + 0xd) == 2;
  if ((bool)uVar4) {
    puVar8 = (undefined8 *)(puVar10 + 8);
    *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
    *(byte **)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar3 + -0x20) = puVar6;
    *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(undefined **)(puVar3 + -8) = puVar16;
    puVar14 = puVar3 + -0x10;
    func_0x00010777d1f4(puVar8,puVar7 + 1);
    unaff_x21 = puVar3 + -0xb0;
    func_0x00010777dacc();
    puVar10 = (undefined1 *)*puVar8;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar5 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar12 = extraout_w8_01;
    }
    else {
      puVar3[-0xb1] = uVar12;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar12 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar12;
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    puVar16 = &UNK_10777a208;
    puVar7 = puVar8;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x19 = puVar8;
  }
  uVar4 = *(int *)(puVar7 + 0xd) == 3;
  if ((bool)uVar4) {
    puVar8 = (undefined8 *)(puVar10 + 8);
    *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
    *(byte **)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar3 + -0x20) = puVar6;
    *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(undefined **)(puVar3 + -8) = puVar16;
    puVar14 = puVar3 + -0x10;
    puVar6 = puVar8;
    func_0x00010777d1f4(puVar8,puVar7 + 1);
    func_0x00010777dd10();
    puVar10 = (undefined1 *)*puVar8;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar12 = extraout_w8_02;
    }
    else {
      puVar3[-0xb1] = (char)puVar8;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar12 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar12;
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    puVar16 = &UNK_10777a2a0;
    puVar7 = puVar6;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x19 = puVar6;
    puVar6 = puVar8;
  }
  uVar4 = *(int *)(puVar7 + 0xd) == 4;
  if ((bool)uVar4) {
    puVar8 = (undefined8 *)(puVar10 + 8);
    *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
    *(byte **)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar3 + -0x20) = puVar6;
    *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(undefined **)(puVar3 + -8) = puVar16;
    puVar14 = puVar3 + -0x10;
    func_0x00010777d1f4(puVar8,puVar7 + 1);
    unaff_x21 = puVar3 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar6 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar12 = extraout_w8_03;
    }
    else {
      puVar3[-0xb1] = (char)puVar6;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar12 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar12;
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    puVar16 = &UNK_10777a338;
    puVar7 = puVar8;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x19 = puVar8;
  }
  uVar5 = (uint)puVar7;
  *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
  *(byte **)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar3 + -0x20) = puVar6;
  *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar14;
  *(undefined **)(puVar3 + -8) = puVar16;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar4) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar6 >> 8 & 1) != 0) {
      puVar3[-0xc0] = (char)puVar6;
      func_0x00010777d400();
      FUN_107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar12 = extraout_w8_04;
  }
  else {
    uVar4 = extraout_w8_06 == 6;
    if ((bool)uVar4) {
      unaff_x22 = puVar3 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar5 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar3[-0xc0] = (char)uVar5;
      func_0x00010777d400();
      FUN_107779f90();
    }
    else {
      uVar4 = extraout_w8_06 == 7;
      if ((bool)uVar4) {
        unaff_x22 = puVar3 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar5 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar3[-0xc0] = (char)uVar5;
        func_0x00010777d400();
        FUN_107779f90();
      }
      else {
        uVar4 = extraout_w8_06 == 8;
        if ((bool)uVar4) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar3 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar14 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8);
              uVar4 = puVar14 == unaff_x22, !(bool)uVar4; puVar14 = puVar14 + 0x70) {
            puVar9 = puVar14;
            func_0x000107775a54(puVar14,*puVar6);
            *(short *)(puVar3 + -0xc0) = (short)puVar9;
            if (((uint)puVar9 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar3 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar3 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar5 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar3[-0xc0] = (char)uVar5;
        func_0x00010777d400();
        FUN_107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar12 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar12;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779f90; end: 107779fcf;  */

void FUN_107779f90(void)

{
  undefined1 auStack_38 [24];
  
  func_0x00010777d91c();
  func_0x000107779fd0();
  func_0x00010777d878();
  func_0x0001075358b8();
  func_0x0001074048e8(auStack_38);
  return;
}



/* Entry: 10777a194; end: 10777a207;  */

void FUN_10777a194(long *param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar8;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  int extraout_w8_03;
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long *unaff_x20;
  undefined1 *puVar9;
  undefined1 *unaff_x22;
  undefined8 *******pppppppuVar10;
  undefined *puVar11;
  undefined1 auStack_300 [528];
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [15];
  undefined1 uStack_b1;
  undefined1 auStack_b0 [128];
  
  puVar1 = auStack_c0;
  pppppppuVar10 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  puVar9 = auStack_b0;
  func_0x00010777dacc();
  lVar7 = *param_1;
  func_0x00010777d948();
  func_0x00010777d5ec();
  if (((uint)unaff_x20 >> 8 & 1) == 0) {
    func_0x00010777d748();
    uVar2 = extraout_w8;
  }
  else {
    uStack_b1 = SUB81(unaff_x20,0);
    func_0x00010777d530();
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar2 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = uVar2;
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = &UNK_10777a208;
  plVar4 = param_1;
  func_0x00010777d638();
  uVar2 = (int)plVar4[0xd] == 3;
  if ((bool)uVar2) {
    unaff_x20 = (long *)(lVar7 + 8);
    puVar1 = auStack_300 + 0x180;
    puStack_c8 = &UNK_10777a208;
    plVar5 = unaff_x20;
    ppppppuStack_d0 = pppppppuVar10;
    func_0x00010777d1f4(unaff_x20,plVar4 + 1);
    func_0x00010777dd10();
    lVar7 = *unaff_x20;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar8 = extraout_w8_00;
    }
    else {
      auStack_300[399] = SUB81(unaff_x20,0);
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar8 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    puVar11 = &UNK_10777a2a0;
    plVar4 = plVar5;
    func_0x00010777d638();
    param_1 = plVar5;
    pppppppuVar10 = &ppppppuStack_d0;
  }
  uVar2 = (int)plVar4[0xd] == 4;
  if ((bool)uVar2) {
    plVar5 = (long *)(lVar7 + 8);
    *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = puVar9;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = param_1;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar10;
    *(undefined **)(puVar1 + -8) = puVar11;
    pppppppuVar10 = (undefined8 *******)(puVar1 + -0x10);
    func_0x00010777d1f4(plVar5,plVar4 + 1);
    puVar9 = puVar1 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar8 = extraout_w8_01;
    }
    else {
      puVar1[-0xb1] = (char)unaff_x20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar8 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    puVar11 = &UNK_10777a338;
    plVar4 = plVar5;
    func_0x00010777d638();
    puVar1 = puVar1 + -0xc0;
    param_1 = plVar5;
  }
  uVar3 = (uint)plVar4;
  *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar1 + -0x28) = puVar9;
  *(long **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar10;
  *(undefined **)(puVar1 + -8) = puVar11;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar2) {
    func_0x00010777dc50();
    if (extraout_x8 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) != 0) {
      puVar1[-0xc0] = (char)unaff_x20;
      func_0x00010777d400();
      FUN_107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar8 = extraout_w8_02;
  }
  else {
    uVar2 = extraout_w8_03 == 6;
    if ((bool)uVar2) {
      unaff_x22 = puVar1 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar3 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar1[-0xc0] = (char)uVar3;
      func_0x00010777d400();
      FUN_107779f90();
    }
    else {
      uVar2 = extraout_w8_03 == 7;
      if ((bool)uVar2) {
        unaff_x22 = puVar1 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar3 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar1[-0xc0] = (char)uVar3;
        func_0x00010777d400();
        FUN_107779f90();
      }
      else {
        uVar2 = extraout_w8_03 == 8;
        if ((bool)uVar2) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(puVar9 + 8));
          func_0x0001075356bc(puVar1 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(puVar9 + 8))[1];
          for (puVar9 = (undefined1 *)**(undefined8 **)(puVar9 + 8); uVar2 = puVar9 == unaff_x22,
              !(bool)uVar2; puVar9 = puVar9 + 0x70) {
            puVar6 = puVar9;
            func_0x000107775a54(puVar9,*unaff_x20);
            *(short *)(puVar1 + -0xc0) = (short)puVar6;
            if (((uint)puVar6 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar1 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar1 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar3 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar1[-0xc0] = (char)uVar3;
        func_0x00010777d400();
        FUN_107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar8 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar8;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 10777a5dc; end: 10777a613;  */

void FUN_10777a5dc(long param_1)

{
  undefined8 extraout_x8;
  int extraout_w9;
  
  func_0x00010777de24();
  if (extraout_w9 == 2) {
    func_0x00010777a614(extraout_x8,param_1 + 8);
  }
  else {
    func_0x00010777a674();
  }
  return;
}



/* Entry: 10777aa94; end: 10777aacf;  */

long * FUN_10777aa94(undefined1 *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  undefined1 extraout_w8_05;
  undefined1 extraout_w8_06;
  undefined1 extraout_w8_07;
  undefined1 extraout_w8_08;
  undefined1 extraout_w8_09;
  undefined1 extraout_w8_10;
  undefined1 extraout_w8_11;
  undefined1 uVar8;
  long lVar9;
  undefined1 *extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 *unaff_x19;
  undefined8 *puVar10;
  long *unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar12;
  code *unaff_x30;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  char acStack_9cc [2476];
  
  if ((int)param_2[0xd] == 0) {
    *param_1 = 0;
    param_1[0x14] = 0;
    return param_2;
  }
  uVar5 = (int)param_2[0xd] == 1;
  if ((bool)uVar5) {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224(param_3,param_2 + 1);
    func_0x00010777d8d4();
    plVar6 = (long *)*param_3;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((acStack_9cc[0x930] & 1U) == 0) {
      func_0x00010777d748();
      param_2 = param_3;
      param_3 = plVar6;
      uVar8 = extraout_w8_00;
    }
    else {
      func_0x00010777d410();
      param_2 = param_3;
      param_3 = plVar6;
      uVar8 = extraout_w8;
    }
    unaff_x19[0x14] = uVar8;
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    unaff_x30 = (code *)&LAB_10777ab28;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(acStack_9cc + 0x91c);
  }
  uVar5 = (int)param_2[0xd] == 2;
  if ((bool)uVar5) {
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224(param_3,param_2 + 1);
    func_0x00010777d904();
    plVar6 = (long *)*param_3;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x9c) & 1) == 0) {
      func_0x00010777d748();
      param_2 = param_3;
      param_3 = plVar6;
      uVar8 = extraout_w8_02;
    }
    else {
      func_0x00010777d410();
      param_2 = param_3;
      param_3 = plVar6;
      uVar8 = extraout_w8_01;
    }
    unaff_x19[0x14] = uVar8;
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    unaff_x30 = (code *)&UNK_10777aba4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  uVar5 = (int)param_2[0xd] == 3;
  plVar6 = param_3;
  if ((bool)uVar5) {
    plVar6 = param_2 + 1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_2 = param_3;
    func_0x00010777d1f4(param_3,plVar6);
    func_0x00010777dd3c();
    plVar6 = (long *)*param_3;
    func_0x00010777d484();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0xac) & 1) == 0) {
      func_0x00010777d748();
      uVar8 = extraout_w8_04;
    }
    else {
      func_0x00010777d410();
      uVar8 = extraout_w8_03;
    }
    unaff_x19[0x14] = uVar8;
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010777d38c();
    unaff_x30 = (code *)&UNK_10777ac28;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x20 = param_3;
  }
  uVar5 = (int)param_2[0xd] == 4;
  if ((bool)uVar5) {
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224(plVar6,param_2 + 1);
    func_0x00010777d8ec();
    plVar7 = (long *)*plVar6;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x9c) & 1) == 0) {
      func_0x00010777d748();
      param_2 = plVar6;
      plVar6 = plVar7;
      uVar8 = extraout_w8_06;
    }
    else {
      func_0x00010777d410();
      param_2 = plVar6;
      plVar6 = plVar7;
      uVar8 = extraout_w8_05;
    }
    unaff_x19[0x14] = uVar8;
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    unaff_x30 = FUN_10777aca4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  uVar5 = (int)param_2[0xd] == 5;
  if ((bool)uVar5) {
    param_2 = param_2 + 1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    lVar9 = param_2[1];
    lVar14 = *param_2;
    *(long *)((long)register0x00000008 + -0x88) = param_2[1];
    *(long *)((long)register0x00000008 + -0x90) = lVar14;
    param_2 = plVar6;
    if (lVar9 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d484();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x9c) & 1) == 0) {
      func_0x00010777d748();
      uVar8 = extraout_w8_08;
    }
    else {
      func_0x00010777d410();
      uVar8 = extraout_w8_07;
    }
    unaff_x19[0x14] = uVar8;
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    unaff_x30 = (code *)&LAB_10777ad3c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  puVar3 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar12 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_2[0xd];
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    plVar6 = (long *)*unaff_x20;
    func_0x00010777d484();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      plVar6 = (long *)*unaff_x20;
      func_0x00010777d484();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        plVar6 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        plVar6 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
    }
  }
  func_0x00010777d640();
  if ((*(byte *)((long)register0x00000008 + -0xac) & 1) == 0) {
    func_0x00010777d748();
    uVar8 = extraout_w8_10;
  }
  else {
    func_0x00010777d410();
    uVar8 = extraout_w8_09;
  }
  unaff_x19[0x14] = uVar8;
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  puVar13 = &UNK_10777ae10;
  func_0x00010777d638();
  if ((int)param_2[0xd] == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
    return param_2;
  }
  uVar5 = (int)param_2[0xd] == 1;
  if ((bool)uVar5) {
    plVar7 = param_2 + 1;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x170);
    *(long **)((long)register0x00000008 + -0xe0) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0xd8) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0xd0) = puVar12;
    *(undefined **)((long)register0x00000008 + -200) = &UNK_10777ae10;
    puVar12 = (undefined1 *)((long)register0x00000008 + -0xd0);
    func_0x00010777d224();
    func_0x00010777d8d4();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x160) & 1) == 0) {
      func_0x00010777db94();
      param_2 = plVar6;
      plVar6 = plVar7;
    }
    else {
      func_0x00010777d4d8();
      param_2 = plVar6;
      plVar6 = plVar7;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777aeac;
    func_0x00010777d638();
  }
  uVar5 = (int)param_2[0xd] == 2;
  if ((bool)uVar5) {
    plVar7 = param_2 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d904();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      param_2 = plVar6;
      plVar6 = plVar7;
    }
    else {
      func_0x00010777d4d8();
      param_2 = plVar6;
      plVar6 = plVar7;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777af30;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar5 = (int)param_2[0xd] == 3;
  plVar7 = plVar6;
  if ((bool)uVar5) {
    plVar7 = param_2 + 1;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar3 + -0x28) = (undefined1 *)((long)register0x00000008 + -0xa8);
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    param_2 = plVar6;
    func_0x00010777d1f4();
    func_0x00010777dd3c();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar3[-0xb0] & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777afbc;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x20 = plVar6;
  }
  uVar5 = (int)param_2[0xd] == 4;
  if ((bool)uVar5) {
    plVar6 = param_2 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      param_2 = plVar7;
      plVar7 = plVar6;
    }
    else {
      func_0x00010777d4d8();
      param_2 = plVar7;
      plVar7 = plVar6;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777b040;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar5 = (int)param_2[0xd] == 5;
  if ((bool)uVar5) {
    plVar6 = param_2 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    func_0x00010777d224();
    lVar9 = plVar6[1];
    lVar14 = *plVar6;
    *(long *)(puVar3 + -0x88) = plVar6[1];
    *(long *)(puVar3 + -0x90) = lVar14;
    param_2 = plVar7;
    plVar7 = plVar6;
    if (lVar9 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777b0e0;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  puVar4 = puVar3 + -0xc0;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar3 + -0x28) = (undefined1 *)((long)register0x00000008 + -0xa8);
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar12;
  *(undefined **)(puVar3 + -8) = puVar13;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_2[0xd];
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((puVar3[-0xb0] & 1) == 0) {
code_r0x00010777b1ac:
          func_0x00010777db94();
        }
        else {
          func_0x00010777d4d8();
        }
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(long **)(puVar3 + -0xe0) = unaff_x20;
  *(undefined1 **)(puVar3 + -0xd8) = unaff_x19;
  *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -200) = &UNK_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9;
  if ((int)param_2[0xd] == 0) {
    *(undefined4 *)(puVar3 + -0xf0) = 0;
    unaff_x19 = puVar3 + -0x158;
    func_0x00010777dd30();
    plVar6 = (long *)(puVar3 + -0x150);
    func_0x00010726af18(plVar6);
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return plVar6;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(long **)(puVar3 + -0x180) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x178) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x170) = puVar3 + -0xd0;
    *(undefined **)(puVar3 + -0x168) = &UNK_10777b260;
    func_0x000107776fc4();
    bVar1 = (ulong)plVar7 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8_00 = (int)plVar7;
      extraout_x8_00[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8_00 = 0;
    }
    *(bool *)(extraout_x8_00 + 5) = bVar1;
    return plVar7;
  }
  func_0x00010777d490();
  if (!(bool)uVar5) goto code_r0x00010777b254;
  uVar11 = *(undefined8 *)(puVar3 + -0xe0);
  puVar10 = *(undefined8 **)(puVar3 + -0xd8);
  *(undefined8 *)(puVar3 + -0xe0) = uVar11;
  *(undefined8 **)(puVar3 + -0xd8) = puVar10;
  *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xd0);
  *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -200);
  puVar12 = puVar3 + -0xd0;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9_00;
  uVar5 = (int)param_2[0xd] == 1;
  if ((bool)uVar5) {
    puVar10 = (undefined8 *)(puVar3 + -0x158);
    puVar3[-0x150] = (char)param_2[1];
    *(undefined4 *)(puVar3 + -0xf0) = 1;
    func_0x00010777dd30();
    param_2 = (long *)(puVar3 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_2;
    }
LAB_10777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar13 = &LAB_10777b31c;
    func_0x00010777d638();
    puVar4 = puVar3 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar5) goto LAB_10777b310;
    puVar12 = *(undefined1 **)(puVar3 + -0xd0);
    puVar13 = *(undefined **)(puVar3 + -200);
    uVar11 = *(undefined8 *)(puVar3 + -0xe0);
    puVar10 = *(undefined8 **)(puVar3 + -0xd8);
  }
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar4 + -0x28) = puVar3 + -0xa8;
  *(undefined8 *)(puVar4 + -0x20) = uVar11;
  *(undefined8 **)(puVar4 + -0x18) = puVar10;
  *(undefined1 **)(puVar4 + -0x10) = puVar12;
  *(undefined **)(puVar4 + -8) = puVar13;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_2[0xd];
  uVar5 = iVar2 == 2;
  if ((bool)uVar5) {
    *(undefined8 *)(puVar4 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar4 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar5 = iVar2 == 3;
    if ((bool)uVar5) {
      param_2 = (long *)(puVar4 + -0xa8);
      func_0x0001072ddd58(param_2,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar5 = iVar2 == 4;
      if ((bool)uVar5) {
        uVar15 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar4 + -0xa0) = uVar15;
        *(undefined4 *)(puVar4 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar9 = *(long *)(extraout_x9_01 + 0x10);
        uVar15 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar4 + -0xa0) = uVar15;
        uVar5 = 1;
        if (lVar9 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_01 != 0);
        }
        *(undefined4 *)(puVar4 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar5 = iVar2 == 6;
        if ((bool)uVar5) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar5 = iVar2 == 7;
          if ((bool)uVar5) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar5 = iVar2 == 8;
            if ((bool)uVar5) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar5 = puVar4[-0xac] == '\x01';
              if ((bool)uVar5) {
                uVar15 = *(undefined8 *)(puVar4 + -0xbc);
                puVar10[1] = *(undefined8 *)(puVar4 + -0xb4);
                *puVar10 = uVar15;
                *(undefined4 *)(puVar10 + 2) = 1;
                uVar8 = 1;
              }
              else {
                func_0x00010777d748();
                uVar8 = extraout_w8_11;
              }
              *(undefined1 *)((long)puVar10 + 0x14) = uVar8;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if (((((int)param_2[0xd] != 0) && ((int)param_2[0xd] != 1)) && ((int)param_2[0xd] != 2)) &&
     ((int)param_2[0xd] == 3)) {
    puVar13 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar4 + -0xe0) = uVar11;
    *(undefined8 **)(puVar4 + -0xd8) = puVar10;
    *(undefined1 **)(puVar4 + -0xd0) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -200) = puVar13;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (long *)(ulong)((uint)puVar10 & 0xffff);
  }
  return (long *)0x0;
}



/* Entry: 10777aca4; end: 10777acc7;  */

long * FUN_10777aca4(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 uVar8;
  undefined1 *extraout_x8;
  long lVar9;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 *unaff_x19;
  undefined8 *puVar10;
  long *unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar12;
  undefined *unaff_x30;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  char acStack_6fc [1440];
  byte abStack_15c [192];
  byte bStack_9c;
  long lStack_90;
  long lStack_88;
  
  uVar5 = (int)param_1[0xd] == 5;
  if ((bool)uVar5) {
    plVar7 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224();
    lStack_88 = plVar7[1];
    lStack_90 = *plVar7;
    param_1 = param_2;
    if (plVar7[1] != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d484();
    func_0x00010777d648();
    if ((bStack_9c & 1) == 0) {
      func_0x00010777d748();
      uVar8 = extraout_w8_00;
    }
    else {
      func_0x00010777d410();
      uVar8 = extraout_w8;
    }
    unaff_x19[0x14] = uVar8;
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    unaff_x30 = &LAB_10777ad3c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_15c + 0xac);
  }
  puVar3 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar12 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    plVar7 = (long *)*unaff_x20;
    func_0x00010777d484();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      plVar7 = (long *)*unaff_x20;
      func_0x00010777d484();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        plVar7 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        plVar7 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
    }
  }
  func_0x00010777d640();
  if ((*(byte *)((long)register0x00000008 + -0xac) & 1) == 0) {
    func_0x00010777d748();
    uVar8 = extraout_w8_02;
  }
  else {
    func_0x00010777d410();
    uVar8 = extraout_w8_01;
  }
  unaff_x19[0x14] = uVar8;
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  puVar13 = &UNK_10777ae10;
  func_0x00010777d638();
  if ((int)param_1[0xd] == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
    return param_1;
  }
  uVar5 = (int)param_1[0xd] == 1;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x170);
    *(long **)((long)register0x00000008 + -0xe0) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0xd8) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0xd0) = puVar12;
    *(undefined **)((long)register0x00000008 + -200) = &UNK_10777ae10;
    puVar12 = (undefined1 *)((long)register0x00000008 + -0xd0);
    func_0x00010777d224();
    func_0x00010777d8d4();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x160) & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777aeac;
    func_0x00010777d638();
  }
  uVar5 = (int)param_1[0xd] == 2;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d904();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777af30;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar5 = (int)param_1[0xd] == 3;
  plVar6 = plVar7;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar3 + -0x28) = (undefined1 *)((long)register0x00000008 + -0xa8);
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    param_1 = plVar7;
    func_0x00010777d1f4();
    func_0x00010777dd3c();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar3[-0xb0] & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777afbc;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x20 = plVar7;
  }
  uVar5 = (int)param_1[0xd] == 4;
  if ((bool)uVar5) {
    plVar7 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar6;
      plVar6 = plVar7;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar6;
      plVar6 = plVar7;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777b040;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar5 = (int)param_1[0xd] == 5;
  if ((bool)uVar5) {
    plVar7 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    func_0x00010777d224();
    lVar9 = plVar7[1];
    lVar14 = *plVar7;
    *(long *)(puVar3 + -0x88) = plVar7[1];
    *(long *)(puVar3 + -0x90) = lVar14;
    param_1 = plVar6;
    plVar6 = plVar7;
    if (lVar9 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777b0e0;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  puVar4 = puVar3 + -0xc0;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar3 + -0x28) = (undefined1 *)((long)register0x00000008 + -0xa8);
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar12;
  *(undefined **)(puVar3 + -8) = puVar13;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((puVar3[-0xb0] & 1) == 0) {
code_r0x00010777b1ac:
          func_0x00010777db94();
        }
        else {
          func_0x00010777d4d8();
        }
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(long **)(puVar3 + -0xe0) = unaff_x20;
  *(undefined1 **)(puVar3 + -0xd8) = unaff_x19;
  *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -200) = &UNK_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9;
  if ((int)param_1[0xd] == 0) {
    *(undefined4 *)(puVar3 + -0xf0) = 0;
    unaff_x19 = puVar3 + -0x158;
    func_0x00010777dd30();
    plVar7 = (long *)(puVar3 + -0x150);
    func_0x00010726af18(plVar7);
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return plVar7;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(long **)(puVar3 + -0x180) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x178) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x170) = puVar3 + -0xd0;
    *(undefined **)(puVar3 + -0x168) = &UNK_10777b260;
    func_0x000107776fc4();
    bVar1 = (ulong)plVar6 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8_00 = (int)plVar6;
      extraout_x8_00[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8_00 = 0;
    }
    *(bool *)(extraout_x8_00 + 5) = bVar1;
    return plVar6;
  }
  func_0x00010777d490();
  if (!(bool)uVar5) goto code_r0x00010777b254;
  uVar11 = *(undefined8 *)(puVar3 + -0xe0);
  puVar10 = *(undefined8 **)(puVar3 + -0xd8);
  *(undefined8 *)(puVar3 + -0xe0) = uVar11;
  *(undefined8 **)(puVar3 + -0xd8) = puVar10;
  *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xd0);
  *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -200);
  puVar12 = puVar3 + -0xd0;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9_00;
  uVar5 = (int)param_1[0xd] == 1;
  if ((bool)uVar5) {
    puVar10 = (undefined8 *)(puVar3 + -0x158);
    puVar3[-0x150] = (char)param_1[1];
    *(undefined4 *)(puVar3 + -0xf0) = 1;
    func_0x00010777dd30();
    param_1 = (long *)(puVar3 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
LAB_10777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar13 = &LAB_10777b31c;
    func_0x00010777d638();
    puVar4 = puVar3 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar5) goto LAB_10777b310;
    puVar12 = *(undefined1 **)(puVar3 + -0xd0);
    puVar13 = *(undefined **)(puVar3 + -200);
    uVar11 = *(undefined8 *)(puVar3 + -0xe0);
    puVar10 = *(undefined8 **)(puVar3 + -0xd8);
  }
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar4 + -0x28) = puVar3 + -0xa8;
  *(undefined8 *)(puVar4 + -0x20) = uVar11;
  *(undefined8 **)(puVar4 + -0x18) = puVar10;
  *(undefined1 **)(puVar4 + -0x10) = puVar12;
  *(undefined **)(puVar4 + -8) = puVar13;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar5 = iVar2 == 2;
  if ((bool)uVar5) {
    *(undefined8 *)(puVar4 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar4 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar5 = iVar2 == 3;
    if ((bool)uVar5) {
      param_1 = (long *)(puVar4 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar5 = iVar2 == 4;
      if ((bool)uVar5) {
        uVar15 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar4 + -0xa0) = uVar15;
        *(undefined4 *)(puVar4 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar9 = *(long *)(extraout_x9_01 + 0x10);
        uVar15 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar4 + -0xa0) = uVar15;
        uVar5 = 1;
        if (lVar9 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_01 != 0);
        }
        *(undefined4 *)(puVar4 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar5 = iVar2 == 6;
        if ((bool)uVar5) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar5 = iVar2 == 7;
          if ((bool)uVar5) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar5 = iVar2 == 8;
            if ((bool)uVar5) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar5 = puVar4[-0xac] == '\x01';
              if ((bool)uVar5) {
                uVar15 = *(undefined8 *)(puVar4 + -0xbc);
                puVar10[1] = *(undefined8 *)(puVar4 + -0xb4);
                *puVar10 = uVar15;
                *(undefined4 *)(puVar10 + 2) = 1;
                uVar8 = 1;
              }
              else {
                func_0x00010777d748();
                uVar8 = extraout_w8_03;
              }
              *(undefined1 *)((long)puVar10 + 0x14) = uVar8;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if (((((int)param_1[0xd] != 0) && ((int)param_1[0xd] != 1)) && ((int)param_1[0xd] != 2)) &&
     ((int)param_1[0xd] == 3)) {
    puVar13 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar4 + -0xe0) = uVar11;
    *(undefined8 **)(puVar4 + -0xd8) = puVar10;
    *(undefined1 **)(puVar4 + -0xd0) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -200) = puVar13;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (long *)(ulong)((uint)puVar10 & 0xffff);
  }
  return (long *)0x0;
}



/* Entry: 10777af54; end: 10777afbb;  */

undefined8 * FUN_10777af54(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 extraout_w8;
  undefined1 uVar8;
  long lVar9;
  undefined4 *extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char acStack_42c [844];
  undefined8 *puStack_e0;
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [16];
  byte bStack_b0;
  char *pcVar4;
  
  pcVar4 = auStack_c0;
  pppppppuVar10 = (undefined8 *******)&stack0xfffffffffffffff0;
  puVar6 = param_1;
  func_0x00010777d1f4();
  func_0x00010777dd3c();
  func_0x00010777d4c0();
  func_0x00010777d640();
  if ((bStack_b0 & 1) == 0) {
    func_0x00010777db94();
  }
  else {
    func_0x00010777d4d8();
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  puVar12 = &UNK_10777afbc;
  func_0x00010777d638();
  uVar5 = *(int *)(puVar6 + 0xd) == 4;
  if ((bool)uVar5) {
    puVar7 = puVar6 + 1;
    pcVar4 = acStack_42c + 700;
    puStack_c8 = &UNK_10777afbc;
    puStack_e0 = param_1;
    ppppppuStack_d0 = pppppppuVar10;
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((acStack_42c[0x2cc] & 1U) == 0) {
      func_0x00010777db94();
      puVar6 = param_2;
      param_2 = puVar7;
    }
    else {
      func_0x00010777d4d8();
      puVar6 = param_2;
      param_2 = puVar7;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return puVar6;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar12 = &UNK_10777b040;
    func_0x00010777d638();
    pppppppuVar10 = &ppppppuStack_d0;
  }
  uVar5 = *(int *)(puVar6 + 0xd) == 5;
  if ((bool)uVar5) {
    puVar7 = puVar6 + 1;
    *(undefined8 **)(pcVar4 + -0x20) = param_1;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar10;
    *(undefined **)(pcVar4 + -8) = puVar12;
    pppppppuVar10 = (undefined8 *******)(pcVar4 + -0x10);
    func_0x00010777d224();
    lVar9 = puVar7[1];
    uVar13 = *puVar7;
    *(undefined8 *)(pcVar4 + -0x88) = puVar7[1];
    *(undefined8 *)(pcVar4 + -0x90) = uVar13;
    puVar6 = param_2;
    param_2 = puVar7;
    if (lVar9 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((pcVar4[-0xa0] & 1U) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return puVar6;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar12 = &UNK_10777b0e0;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  puVar3 = pcVar4 + -0xc0;
  *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(pcVar4 + -0x28) = unaff_x21;
  *(undefined8 **)(pcVar4 + -0x20) = param_1;
  *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
  *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar10;
  *(undefined **)(pcVar4 + -8) = puVar12;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(puVar6 + 0xd);
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((pcVar4[-0xb0] & 1U) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((pcVar4[-0xb0] & 1U) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((pcVar4[-0xb0] & 1U) == 0) {
code_r0x00010777b1ac:
          func_0x00010777db94();
        }
        else {
          func_0x00010777d4d8();
        }
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((pcVar4[-0xb0] & 1U) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(undefined8 **)(pcVar4 + -0xe0) = param_1;
  *(undefined1 **)(pcVar4 + -0xd8) = unaff_x19;
  *(char **)(pcVar4 + -0xd0) = pcVar4 + -0x10;
  *(undefined **)(pcVar4 + -200) = &UNK_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)(pcVar4 + -0xe8) = extraout_x9;
  if (*(int *)(puVar6 + 0xd) == 0) {
    *(undefined4 *)(pcVar4 + -0xf0) = 0;
    unaff_x19 = pcVar4 + -0x158;
    func_0x00010777dd30();
    puVar6 = (undefined8 *)(pcVar4 + -0x150);
    func_0x00010726af18(puVar6);
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return puVar6;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(undefined8 **)(pcVar4 + -0x180) = param_1;
    *(undefined1 **)(pcVar4 + -0x178) = unaff_x19;
    *(char **)(pcVar4 + -0x170) = pcVar4 + -0xd0;
    *(undefined **)(pcVar4 + -0x168) = &UNK_10777b260;
    func_0x000107776fc4();
    bVar1 = (ulong)param_2 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8 = (int)param_2;
      extraout_x8[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8 = 0;
    }
    *(bool *)(extraout_x8 + 5) = bVar1;
    return param_2;
  }
  func_0x00010777d490();
  if (!(bool)uVar5) goto code_r0x00010777b254;
  uVar13 = *(undefined8 *)(pcVar4 + -0xe0);
  puVar7 = *(undefined8 **)(pcVar4 + -0xd8);
  *(undefined8 *)(pcVar4 + -0xe0) = uVar13;
  *(undefined8 **)(pcVar4 + -0xd8) = puVar7;
  *(undefined8 *)(pcVar4 + -0xd0) = *(undefined8 *)(pcVar4 + -0xd0);
  *(undefined8 *)(pcVar4 + -200) = *(undefined8 *)(pcVar4 + -200);
  puVar11 = pcVar4 + -0xd0;
  func_0x00010777d31c();
  *(undefined8 *)(pcVar4 + -0xe8) = extraout_x9_00;
  uVar5 = *(int *)(puVar6 + 0xd) == 1;
  if ((bool)uVar5) {
    puVar7 = (undefined8 *)(pcVar4 + -0x158);
    pcVar4[-0x150] = *(undefined1 *)(puVar6 + 1);
    *(undefined4 *)(pcVar4 + -0xf0) = 1;
    func_0x00010777dd30();
    puVar6 = (undefined8 *)(pcVar4 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return puVar6;
    }
LAB_10777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar12 = &LAB_10777b31c;
    func_0x00010777d638();
    puVar3 = pcVar4 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar5) goto LAB_10777b310;
    puVar11 = *(undefined1 **)(pcVar4 + -0xd0);
    puVar12 = *(undefined **)(pcVar4 + -200);
    uVar13 = *(undefined8 *)(pcVar4 + -0xe0);
    puVar7 = *(undefined8 **)(pcVar4 + -0xd8);
  }
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(char **)(puVar3 + -0x28) = pcVar4 + -0xa8;
  *(undefined8 *)(puVar3 + -0x20) = uVar13;
  *(undefined8 **)(puVar3 + -0x18) = puVar7;
  *(undefined1 **)(puVar3 + -0x10) = puVar11;
  *(undefined **)(puVar3 + -8) = puVar12;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(puVar6 + 0xd);
  uVar5 = iVar2 == 2;
  if ((bool)uVar5) {
    *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar3 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar5 = iVar2 == 3;
    if ((bool)uVar5) {
      puVar6 = (undefined8 *)(puVar3 + -0xa8);
      func_0x0001072ddd58(puVar6,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar5 = iVar2 == 4;
      if ((bool)uVar5) {
        uVar14 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar14;
        *(undefined4 *)(puVar3 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar9 = *(long *)(extraout_x9_01 + 0x10);
        uVar14 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar14;
        uVar5 = 1;
        if (lVar9 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_00 != 0);
        }
        *(undefined4 *)(puVar3 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar5 = iVar2 == 6;
        if ((bool)uVar5) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar5 = iVar2 == 7;
          if ((bool)uVar5) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar5 = iVar2 == 8;
            if ((bool)uVar5) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar5 = puVar3[-0xac] == '\x01';
              if ((bool)uVar5) {
                uVar14 = *(undefined8 *)(puVar3 + -0xbc);
                puVar7[1] = *(undefined8 *)(puVar3 + -0xb4);
                *puVar7 = uVar14;
                *(undefined4 *)(puVar7 + 2) = 1;
                uVar8 = 1;
              }
              else {
                func_0x00010777d748();
                uVar8 = extraout_w8;
              }
              *(undefined1 *)((long)puVar7 + 0x14) = uVar8;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if ((((*(int *)(puVar6 + 0xd) != 0) && (*(int *)(puVar6 + 0xd) != 1)) &&
      (*(int *)(puVar6 + 0xd) != 2)) && (*(int *)(puVar6 + 0xd) == 3)) {
    puVar12 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar3 + -0xe0) = uVar13;
    *(undefined8 **)(puVar3 + -0xd8) = puVar7;
    *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -200) = puVar12;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (undefined8 *)(ulong)((uint)puVar7 & 0xffff);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10777b2a4; end: 10777b31b;  */

undefined1 * FUN_10777b2a4(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined1 extraout_w8;
  undefined1 uVar5;
  long lVar6;
  long extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar7;
  char acStack_14c [172];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  undefined4 uStack_30;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010777d31c();
  uVar3 = *(int *)(param_1 + 0x68) == 1;
  if ((bool)uVar3) {
    unaff_x19 = &uStack_98;
    auStack_90[0] = param_1[8];
    uStack_30 = 1;
    func_0x00010777dd30();
    param_1 = auStack_90;
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar3) {
      return param_1;
    }
LAB_10777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    unaff_x30 = &LAB_10777b31c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)auStack_a0;
    unaff_x29 = puVar1;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar3) goto LAB_10777b310;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0x68);
  uVar3 = iVar2 == 2;
  if ((bool)uVar3) {
    *(undefined8 *)((long)register0x00000008 + -0xa0) = *(undefined8 *)(extraout_x9 + 8);
    *(undefined4 *)((long)register0x00000008 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar3 = iVar2 == 3;
    if ((bool)uVar3) {
      param_1 = (undefined1 *)((long)register0x00000008 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar3 = iVar2 == 4;
      if ((bool)uVar3) {
        uVar7 = *(undefined8 *)(extraout_x9 + 8);
        *(undefined8 *)((long)register0x00000008 + -0x98) = *(undefined8 *)(extraout_x9 + 0x10);
        *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar7;
        *(undefined4 *)((long)register0x00000008 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar6 = *(long *)(extraout_x9 + 0x10);
        uVar7 = *(undefined8 *)(extraout_x9 + 8);
        *(undefined8 *)((long)register0x00000008 + -0x98) = *(undefined8 *)(extraout_x9 + 0x10);
        *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar7;
        uVar3 = 1;
        if (lVar6 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10 != 0);
        }
        *(undefined4 *)((long)register0x00000008 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar3 = iVar2 == 6;
        if ((bool)uVar3) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar3 = iVar2 == 7;
          if ((bool)uVar3) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar3 = iVar2 == 8;
            if ((bool)uVar3) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar3 = *(char *)((long)register0x00000008 + -0xac) == '\x01';
              if ((bool)uVar3) {
                uVar7 = *(undefined8 *)((long)register0x00000008 + -0xbc);
                unaff_x19[1] = *(undefined8 *)((long)register0x00000008 + -0xb4);
                *unaff_x19 = uVar7;
                *(undefined4 *)(unaff_x19 + 2) = 1;
                uVar5 = 1;
              }
              else {
                func_0x00010777d748();
                uVar5 = extraout_w8;
              }
              *(undefined1 *)((long)unaff_x19 + 0x14) = uVar5;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    puVar4 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0xd8) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0xd0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -200) = puVar4;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (undefined1 *)(ulong)((uint)unaff_x19 & 0xffff);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10777b634; end: 10777b68b;  */

undefined2 FUN_10777b634(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f25d8();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777b854; end: 10777b8ab;  */

undefined2 FUN_10777b854(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f278c();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777ba74; end: 10777bacb;  */

undefined2 FUN_10777ba74(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2a00();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777bc94; end: 10777bceb;  */

undefined2 FUN_10777bc94(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    FUN_1077f2b98();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777beb4; end: 10777bed3;  */

undefined1 * FUN_10777beb4(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 extraout_w8;
  undefined1 uVar5;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  undefined1 uVar6;
  int extraout_w8_05;
  long lVar7;
  int extraout_w10;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar10;
  undefined1 auStack_480 [976];
  undefined1 auStack_b0 [104];
  undefined4 uStack_48;
  
  uVar9 = (uint)unaff_x21;
  uVar6 = SUB81(unaff_x21,0);
  if (*(int *)(param_1 + 0x68) == 0) {
    puVar2 = param_2 + 8;
    param_2 = param_1 + 8;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4();
    uStack_48 = 0;
    unaff_x20 = auStack_b0;
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8;
    }
    else {
      auStack_480[0x3cf] = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    unaff_x19[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return puVar2;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&LAB_10777bf48;
    param_1 = puVar2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(auStack_480 + 0x3c0);
    unaff_x19 = puVar2;
  }
  if (*(int *)(param_1 + 0x68) == 1) {
    puVar2 = param_2 + 8;
    param_2 = param_1 + 8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x00010777dae0();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_00;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0xb1) = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    unaff_x19[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return puVar2;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&UNK_10777c0b4;
    param_1 = puVar2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = puVar2;
  }
  if (*(int *)(param_1 + 0x68) == 2) {
    puVar2 = param_2 + 8;
    param_2 = param_1 + 8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x00010777dacc();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_01;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0xb1) = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    unaff_x19[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return puVar2;
    }
    ___stack_chk_fail();
    unaff_x30 = FUN_10777c14c;
    param_1 = puVar2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = puVar2;
  }
  if (*(int *)(param_1 + 0x68) == 3) {
    puVar2 = param_2 + 8;
    param_2 = param_1 + 8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(puVar2);
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0xb0);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x0001072ddd58();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_02;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0xb1) = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    unaff_x19[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return puVar2;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&LAB_10777c1e8;
    param_1 = puVar2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = puVar2;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x68) == 4) {
    param_2 = param_2 + 8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(param_2,param_1 + 8);
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_03;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0xb1) = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    unaff_x19[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return param_2;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&UNK_10777c280;
    param_1 = param_2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = param_2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar2 = param_1;
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar1) {
    lVar7 = *(long *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar10;
    if (lVar7 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    puVar8 = (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined4 *)((long)register0x00000008 + -0x48) = 5;
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) goto code_r0x00010777c3d0;
    *(undefined1 *)((long)register0x00000008 + -0xc0) = uVar6;
    func_0x00010777d400();
    func_0x00010777bfb4();
code_r0x00010777c3f8:
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar6 = 1;
  }
  else {
    if (extraout_w8_05 == 6) {
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d950();
      uVar9 = (uint)puVar2 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar1 = uVar9 == 0xff;
      if (0xff < uVar9) {
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else if (extraout_w8_05 == 7) {
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d950();
      uVar9 = (uint)puVar2 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar1 = uVar9 == 0xff;
      if (0xff < uVar9) {
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else {
      if (extraout_w8_05 == 8) {
        func_0x00010777dce0();
        func_0x00010777d398(*(undefined8 *)(param_1 + 8));
        func_0x000107535980((undefined1 *)((long)register0x00000008 + -0xb0));
        unaff_x21 = (undefined1 *)(*(undefined8 **)(param_1 + 8))[1];
        for (puVar8 = (undefined1 *)**(undefined8 **)(param_1 + 8); uVar1 = puVar8 == unaff_x21,
            !(bool)uVar1; puVar8 = puVar8 + 0x70) {
          puVar2 = puVar8;
          func_0x00010777bf6c();
          uVar9 = (uint)puVar2 & 0xffff;
          *(short *)((long)register0x00000008 + -0xc0) = (short)puVar2;
          uVar1 = uVar9 == 0x100;
          if (uVar9 < 0x100) {
            func_0x00010777d724();
            goto code_r0x00010777c41c;
          }
          func_0x00010777d700();
          func_0x000107535a48();
        }
        func_0x00010777dac0();
        func_0x000107535ae0();
        func_0x00010777d338();
        func_0x000107404cc4();
code_r0x00010777c41c:
        puVar2 = (undefined1 *)((long)register0x00000008 + -0xb0);
        func_0x0001073e7720();
        goto code_r0x00010777c408;
      }
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d950();
      uVar9 = (uint)puVar2 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar1 = uVar9 == 0xff;
      if (0xff < uVar9) {
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
code_r0x00010777c3d0:
    func_0x00010777d748();
    uVar6 = extraout_w8_04;
  }
  unaff_x19[0x10] = uVar6;
code_r0x00010777c408:
  func_0x00010777d1dc();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = unaff_x21 + 8;
  func_0x00010726af18();
  func_0x00010777d638();
  if ((((*(int *)(puVar3 + 0x68) != 0) && (*(int *)(puVar3 + 0x68) != 1)) &&
      (*(int *)(puVar3 + 0x68) != 2)) && (*(int *)(puVar3 + 0x68) == 3)) {
    puVar4 = &UNK_10777c468;
    func_0x00010777de8c();
    *(undefined1 **)((long)register0x00000008 + -0xe0) = puVar8;
    *(undefined1 **)((long)register0x00000008 + -0xd8) = puVar2;
    *(undefined1 **)((long)register0x00000008 + -0xd0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -200) = puVar4;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2dd0();
    func_0x00010777d374();
    return (undefined1 *)(ulong)((uint)puVar2 & 0xffff);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10777c14c; end: 10777c16f;  */

undefined1 * FUN_10777c14c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 extraout_w8;
  undefined1 uVar5;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar6;
  int extraout_w8_02;
  long lVar7;
  int extraout_w10;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar10;
  undefined1 auStack_240 [400];
  undefined1 auStack_b0 [128];
  
  uVar9 = (uint)unaff_x21;
  uVar6 = SUB81(unaff_x21,0);
  if (*(int *)(param_1 + 0x68) == 3) {
    puVar2 = param_2 + 8;
    param_2 = param_1 + 8;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4(puVar2);
    unaff_x20 = auStack_b0;
    puVar2 = auStack_b0;
    func_0x0001072ddd58();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8;
    }
    else {
      auStack_240[399] = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    unaff_x19[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return puVar2;
    }
    ___stack_chk_fail();
    unaff_x30 = &LAB_10777c1e8;
    param_1 = puVar2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(auStack_240 + 0x180);
    unaff_x19 = puVar2;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x68) == 4) {
    param_2 = param_2 + 8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(param_2,param_1 + 8);
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_00;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0xb1) = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    unaff_x19[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return param_2;
    }
    ___stack_chk_fail();
    unaff_x30 = &UNK_10777c280;
    param_1 = param_2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = param_2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar2 = param_1;
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar1) {
    lVar7 = *(long *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar10;
    if (lVar7 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    puVar8 = (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined4 *)((long)register0x00000008 + -0x48) = 5;
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) goto code_r0x00010777c3d0;
    *(undefined1 *)((long)register0x00000008 + -0xc0) = uVar6;
    func_0x00010777d400();
    func_0x00010777bfb4();
code_r0x00010777c3f8:
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar6 = 1;
  }
  else {
    if (extraout_w8_02 == 6) {
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d950();
      uVar9 = (uint)puVar2 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar1 = uVar9 == 0xff;
      if (0xff < uVar9) {
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else if (extraout_w8_02 == 7) {
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d950();
      uVar9 = (uint)puVar2 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar1 = uVar9 == 0xff;
      if (0xff < uVar9) {
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else {
      if (extraout_w8_02 == 8) {
        func_0x00010777dce0();
        func_0x00010777d398(*(undefined8 *)(param_1 + 8));
        func_0x000107535980((undefined1 *)((long)register0x00000008 + -0xb0));
        unaff_x21 = (undefined1 *)(*(undefined8 **)(param_1 + 8))[1];
        for (puVar8 = (undefined1 *)**(undefined8 **)(param_1 + 8); uVar1 = puVar8 == unaff_x21,
            !(bool)uVar1; puVar8 = puVar8 + 0x70) {
          puVar2 = puVar8;
          func_0x00010777bf6c();
          uVar9 = (uint)puVar2 & 0xffff;
          *(short *)((long)register0x00000008 + -0xc0) = (short)puVar2;
          uVar1 = uVar9 == 0x100;
          if (uVar9 < 0x100) {
            func_0x00010777d724();
            goto code_r0x00010777c41c;
          }
          func_0x00010777d700();
          func_0x000107535a48();
        }
        func_0x00010777dac0();
        func_0x000107535ae0();
        func_0x00010777d338();
        func_0x000107404cc4();
code_r0x00010777c41c:
        puVar2 = (undefined1 *)((long)register0x00000008 + -0xb0);
        func_0x0001073e7720();
        goto code_r0x00010777c408;
      }
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d950();
      uVar9 = (uint)puVar2 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar1 = uVar9 == 0xff;
      if (0xff < uVar9) {
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
code_r0x00010777c3d0:
    func_0x00010777d748();
    uVar6 = extraout_w8_01;
  }
  unaff_x19[0x10] = uVar6;
code_r0x00010777c408:
  func_0x00010777d1dc();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = unaff_x21 + 8;
  func_0x00010726af18();
  func_0x00010777d638();
  if ((((*(int *)(puVar3 + 0x68) != 0) && (*(int *)(puVar3 + 0x68) != 1)) &&
      (*(int *)(puVar3 + 0x68) != 2)) && (*(int *)(puVar3 + 0x68) == 3)) {
    puVar4 = &UNK_10777c468;
    func_0x00010777de8c();
    *(undefined1 **)((long)register0x00000008 + -0xe0) = puVar8;
    *(undefined1 **)((long)register0x00000008 + -0xd8) = puVar2;
    *(undefined1 **)((long)register0x00000008 + -0xd0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -200) = puVar4;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2dd0();
    func_0x00010777d374();
    return (undefined1 *)(ulong)((uint)puVar2 & 0xffff);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10777c5a8; end: 10777c5db;  */

undefined8 FUN_10777c5a8(undefined8 param_1)

{
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2e24();
  func_0x00010777d650();
  return param_1;
}



/* Entry: 10777c894; end: 10777c8c3;  */

undefined2 FUN_10777c894(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f31f4();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777cab4; end: 10777cae3;  */

undefined2 FUN_10777cab4(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f333c();
  func_0x00010777d374();
  return unaff_w19;
}


