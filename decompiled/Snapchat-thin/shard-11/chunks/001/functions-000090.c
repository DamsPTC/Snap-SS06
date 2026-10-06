/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10816712c; end: 10816714b;  */

void FUN_10816712c(long param_1,float *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  if (*(float *)(param_1 + 0x58) != *param_2) {
    *(float *)(param_1 + 0x58) = *param_2;
    uStack_21 = 1;
    func_0x00010818add8(auStack_38);
    if ((bStack_2c & 1) == 0) {
      uVar2 = *(ushort *)(param_1 + 0x28);
      uVar4 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar4 = uVar2 | 8;
          *(short *)(param_1 + 0x28) = (short)uVar4;
          uStack_21 = 0;
        }
        *(ushort *)(param_1 + 0x28) = (ushort)uVar4 | 4;
        puStack_40 = &uStack_21;
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        if ((uVar4 >> 4 & 1) == 0) {
          if (puVar3 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar3[1];
          for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar3);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 10816714c; end: 10816715f;  */

void FUN_10816714c(void)

{
  undefined *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined4 uVar6;
  undefined6 uVar7;
  undefined7 uVar8;
  
  puVar1 = &UNK_10f47d34d;
  func_0x000104c03f28(&UNK_10f47d34d);
  uVar9 = (ulong)puVar1 & 0xffffffff;
  bVar2 = (byte)(uVar9 >> 8);
  uVar3 = (undefined1)(uVar9 >> 0x10);
  uVar4 = (undefined1)(uVar9 >> 0x18);
  uVar8 = CONCAT16(uVar4,(uint6)CONCAT14(uVar3,(uint)bVar2 << 0x10));
  uVar5 = CONCAT11((char)uVar9,(char)uVar9);
  uVar6 = CONCAT13(bVar2,(int3)CONCAT52((int5)((uint7)uVar8 >> 0x10),uVar5));
  uVar7 = CONCAT15(uVar3,(int5)CONCAT34((int3)((uint7)uVar8 >> 0x20),uVar6));
  uVar9 = CONCAT26((short)(CONCAT17(uVar4,CONCAT16(uVar4,uVar7)) >> 0x30),
                   CONCAT24((short)((uint6)uVar7 >> 0x20),
                            CONCAT22((short)((uint)uVar6 >> 0x10),uVar5))) & 0xff00ff00ff00ff;
  auVar10._2_2_ = 0;
  auVar10._0_2_ = (ushort)uVar9;
  auVar10._4_2_ = (short)(uVar9 >> 0x10);
  auVar10._6_2_ = 0;
  auVar10._8_2_ = (short)(uVar9 >> 0x20);
  auVar10._10_2_ = 0;
  auVar10._12_2_ = (short)(uVar9 >> 0x30);
  auVar10._14_2_ = 0;
  NEON_ucvtf(auVar10,4);
  return;
}



/* Entry: 108167160; end: 1081672c3;  */

void FUN_108167160(undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined4 uVar5;
  undefined6 uVar6;
  undefined7 uVar7;
  
  bVar1 = (byte)((uint)param_1 >> 8);
  uVar2 = (undefined1)((uint)param_1 >> 0x10);
  uVar3 = (undefined1)((uint)param_1 >> 0x18);
  uVar7 = CONCAT16(uVar3,(uint6)CONCAT14(uVar2,(uint)bVar1 << 0x10));
  uVar4 = CONCAT11((char)param_1,(char)param_1);
  uVar5 = CONCAT13(bVar1,(int3)CONCAT52((int5)((uint7)uVar7 >> 0x10),uVar4));
  uVar6 = CONCAT15(uVar2,(int5)CONCAT34((int3)((uint7)uVar7 >> 0x20),uVar5));
  uVar8 = CONCAT26((short)(CONCAT17(uVar3,CONCAT16(uVar3,uVar6)) >> 0x30),
                   CONCAT24((short)((uint6)uVar6 >> 0x20),
                            CONCAT22((short)((uint)uVar5 >> 0x10),uVar4))) & 0xff00ff00ff00ff;
  auVar9._2_2_ = 0;
  auVar9._0_2_ = (ushort)uVar8;
  auVar9._4_2_ = (short)(uVar8 >> 0x10);
  auVar9._6_2_ = 0;
  auVar9._8_2_ = (short)(uVar8 >> 0x20);
  auVar9._10_2_ = 0;
  auVar9._12_2_ = (short)(uVar8 >> 0x30);
  auVar9._14_2_ = 0;
  NEON_ucvtf(auVar9,4);
  return;
}



/* Entry: 1081672c4; end: 1081674e3;  */

void FUN_1081672c4(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar6 = *param_2;
  lStack_70 = 0;
  plVar5 = (long *)0x60;
  __Znwm();
  *(undefined4 *)(plVar5 + 1) = 1;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[2] = 0;
  *(undefined2 *)(plVar5 + 5) = 0;
  *plVar5 = (long)&PTR_FUN_110a290c0;
  FUN_10815f414(plVar5 + 6,0x113254e20);
  plVar5[7] = param_2[2];
  plStack_58 = param_3;
  lStack_50 = lVar6;
  plStack_48 = plVar5;
  FUN_1081662b4(&plStack_58,0,plVar5 + 8);
  FUN_1081662b4();
  FUN_1081662b4();
  FUN_1081662b4();
  lVar4 = lStack_70;
  lStack_70 = plVar5[6];
  if (lStack_70 != 0) {
    piVar1 = (int *)(lStack_70 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_60 = plVar5;
  FUN_1081674e4(lVar4);
  plStack_60 = (long *)0x0;
  if ((plVar5[2] == plVar5[3]) && ((*(byte *)((long)plVar5 + 0x29) & 1) == 0)) {
    plStack_68 = plVar5;
    (**(code **)(*plVar5 + 0x18))(0,plVar5);
  }
  else {
    plStack_68 = (long *)0x0;
    plStack_58 = plVar5;
    FUN_108155570(*(undefined8 *)(lVar6 + 0x70),&plStack_58);
    FUN_108155920(&plStack_58);
  }
  FUN_108167510(&plStack_68);
  FUN_108167510(&plStack_60);
  lStack_80 = lStack_70;
  uStack_78 = *param_4;
  *param_4 = 0;
  lStack_70 = 0;
  FUN_108158594(&plStack_58,&uStack_78,&lStack_80);
  plVar5 = plStack_58;
  plStack_58 = (long *)0x0;
  *param_1 = plVar5;
  FUN_1081596a8(&plStack_58);
  FUN_108155404(&lStack_80);
  FUN_108154cb4(&uStack_78);
  FUN_108160198(&lStack_70);
  return;
}



/* Entry: 1081674e4; end: 10816750f;  */

void FUN_1081674e4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108167508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108167510; end: 10816755f;  */

long * FUN_108167510(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108167560; end: 108167587;  */

undefined8 * FUN_108167560(undefined8 *param_1)

{
  FUN_108160198(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108167588; end: 10816759b;  */

void FUN_108167588(void)

{
  FUN_108167560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816759c; end: 1081676ab;  */

/* WARNING: Possible PIC construction at 0x000108167628: Changing call to branch */

void FUN_10816759c(long param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puStack_e0;
  undefined1 auStack_d8 [12];
  byte bStack_cc;
  undefined1 uStack_c1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  puVar2 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined4 *)(param_1 + 0x38);
  uStack_34 = *(undefined4 *)(param_1 + 0x3c);
  uStack_68 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = *(undefined8 *)(param_1 + 0x58);
  uStack_70 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = 0;
  uStack_3c = 0;
  uStack_30 = 0;
  uStack_98 = 0;
  uStack_a0 = 0x3f800000;
  uStack_88 = 0;
  uStack_90 = 0x3f800000;
  uStack_80 = 0x103f800000;
  puVar4 = &uStack_48;
  uStack_38 = uStack_40;
  uStack_2c = uStack_34;
  FUN_108365458(&uStack_a0,puVar4,&uStack_70,4);
  if ((int)puVar2 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    puVar4 = &uStack_a0;
  }
  puVar3 = (undefined1 *)((long)puVar2 + 0x2c);
  func_0x000108363bec();
  if (((ulong)puVar3 & 1) == 0) {
    uVar7 = puVar4[1];
    uVar6 = *puVar4;
    uVar9 = puVar4[3];
    uVar8 = puVar4[2];
    *(undefined8 *)((long)puVar2 + 0x4c) = puVar4[4];
    *(undefined8 *)((long)puVar2 + 0x44) = uVar9;
    *(undefined8 *)((long)puVar2 + 0x3c) = uVar8;
    *(undefined8 *)((long)puVar2 + 0x34) = uVar7;
    *(undefined8 *)((long)puVar2 + 0x2c) = uVar6;
    uStack_c1 = 1;
    func_0x00010818add8(auStack_d8);
    if ((bStack_cc & 1) == 0) {
      uVar1 = *(ushort *)((long)puVar2 + 0x28);
      uVar5 = (uint)uVar1;
      if (((uVar1 >> 2 & 1) == 0) || ((uVar1 >> 3 & 1) == 0)) {
        if ((uVar1 & 1) == 0) {
          uVar5 = uVar1 | 8;
          *(short *)((long)puVar2 + 0x28) = (short)uVar5;
          uStack_c1 = 0;
        }
        *(ushort *)((long)puVar2 + 0x28) = (ushort)uVar5 | 4;
        puStack_e0 = &uStack_c1;
        puVar4 = *(undefined8 **)((long)puVar2 + 0x10);
        if ((uVar5 >> 4 & 1) == 0) {
          if (puVar4 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_e0);
          }
        }
        else {
          puVar2 = (undefined8 *)puVar4[1];
          for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar2; puVar4 = puVar4 + 1) {
            func_0x00010818ad34(&puStack_e0,*puVar4);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_d8);
    return;
  }
  return;
}



/* Entry: 1081676ac; end: 1081678ab;  */

void FUN_1081676ac(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar2 = *param_2;
  uStack_80 = 0;
  plVar1 = (long *)0x40;
  __Znwm();
  FUN_10816798c(&plStack_58);
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 1) = 1;
  plVar1[3] = 0;
  plVar1[4] = 0;
  *(undefined2 *)(plVar1 + 5) = 0;
  *plVar1 = (long)&PTR_DAT_110a29178;
  plVar1[6] = (long)plStack_58;
  plStack_58 = (long *)0x0;
  FUN_1081678ac(&plStack_58);
  *plVar1 = (long)&PTR_FUN_110a29110;
  *(undefined4 *)((long)plVar1 + 0x3c) = 0;
  *(undefined4 *)(plVar1 + 7) = 0;
  plStack_70 = param_3;
  lStack_68 = lVar2;
  plStack_60 = plVar1;
  FUN_108164708(&plStack_70,0);
  FUN_108164708();
  plStack_78 = plVar1;
  FUN_10816040c(plVar1 + 2);
  FUN_1081678f8(&uStack_80,plVar1 + 6);
  plStack_78 = (long *)0x0;
  if ((plVar1[2] == plVar1[3]) && ((*(byte *)((long)plVar1 + 0x29) & 1) == 0)) {
    plStack_58 = plVar1;
    (**(code **)(*plVar1 + 0x18))(0,plVar1);
  }
  else {
    plStack_58 = (long *)0x0;
    plStack_70 = plVar1;
    FUN_108155570(*(undefined8 *)(lVar2 + 0x70),&plStack_70);
    FUN_108155920(&plStack_70);
  }
  FUN_108167940(&plStack_58);
  FUN_108167940(&plStack_78);
  uStack_90 = uStack_80;
  uStack_88 = *param_4;
  *param_4 = 0;
  uStack_80 = 0;
  FUN_10818bb98(param_1,&uStack_88,&uStack_90);
  FUN_108159600(&uStack_90);
  FUN_108154cb4(&uStack_88);
  FUN_1081678ac(&uStack_80);
  return;
}



/* Entry: 1081678ac; end: 1081678d3;  */

undefined8 * FUN_1081678ac(undefined8 *param_1)

{
  FUN_1081678d4(*param_1);
  return param_1;
}



/* Entry: 1081678d4; end: 1081678f7;  */

void FUN_1081678d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108167c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1081678f8; end: 10816793f;  */

long * FUN_1081678f8(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 != param_2) {
    if (*param_2 != 0) {
      piVar1 = (int *)(*param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000108167c4c(param_1);
  }
  return param_1;
}



/* Entry: 108167940; end: 10816798b;  */

long * FUN_108167940(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816798c; end: 1081679cb;  */

void FUN_10816798c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm();
  FUN_10818bfa8();
  *param_1 = uVar1;
  return;
}



/* Entry: 1081679cc; end: 1081679fb;  */

undefined8 * FUN_1081679cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29178;
  FUN_1081678ac(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 1081679fc; end: 1081679ff;  */

undefined8 * FUN_1081679fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29178;
  FUN_1081678ac(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108167a00; end: 108167a13;  */

void FUN_108167a00(void)

{
  FUN_1081679cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108167a14; end: 108167b53;  */

void FUN_108167a14(long param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_f4 [16];
  undefined1 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [8];
  
  fVar1 = *(float *)(param_1 + 0x38) + -90.0;
  FUN_10815f69c(auStack_70,fVar1);
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_78 = 1;
  fVar2 = *(float *)(param_1 + 0x3c);
  FUN_10815f69c(auStack_c0,-fVar1);
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_c8 = 1;
  uStack_e0 = 0;
  FUN_1083b3fc4(auStack_98,auStack_c0,&uStack_d8,&uStack_e0);
  auStack_f4[0] = 0;
  uStack_e4 = 0;
  FUN_108167b54(auStack_90,fVar2 * 0.3,0,auStack_98,auStack_f4);
  FUN_1083b3fc4(auStack_48,auStack_70,&uStack_88,auStack_90);
  FUN_10811e834(auStack_90);
  FUN_10811e834(auStack_98);
  FUN_10811e834(&uStack_e0);
  FUN_108167ba8(*(undefined8 *)(param_1 + 0x30),auStack_48);
  FUN_10811e834(auStack_48);
  return;
}



/* Entry: 108167b54; end: 108167ba7;  */

void FUN_108167b54(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_1;
  *param_1 = 0;
  FUN_1083afdf4(3,&uStack_28,param_2);
  FUN_10811e834(&uStack_28);
  return;
}



/* Entry: 108167ba8; end: 108167beb;  */

void FUN_108167ba8(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x50) == *param_2) {
    return;
  }
  FUN_108167c10();
  uStack_21 = 1;
  func_0x00010818add8(auStack_38);
  if ((bStack_2c & 1) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x28);
    uVar4 = (uint)uVar2;
    if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
      if ((uVar2 & 1) == 0) {
        uVar4 = uVar2 | 8;
        *(short *)(param_1 + 0x28) = (short)uVar4;
        uStack_21 = 0;
      }
      *(ushort *)(param_1 + 0x28) = (ushort)uVar4 | 4;
      puStack_40 = &uStack_21;
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      if ((uVar4 >> 4 & 1) == 0) {
        if (puVar3 != (undefined8 *)0x0) {
          func_0x00010818ad34(&puStack_40);
        }
      }
      else {
        puVar1 = (undefined8 *)puVar3[1];
        for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 1) {
          func_0x00010818ad34(&puStack_40,*puVar3);
        }
      }
    }
  }
  func_0x00010818a9f8(auStack_38);
  return;
}



/* Entry: 108167bec; end: 108167c0f;  */

void FUN_108167bec(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108167c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108167c10; end: 108167c3b;  */

undefined8 FUN_108167c10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  FUN_108167c3c(param_1,uVar1);
  return param_1;
}



/* Entry: 108167c3c; end: 108167c77;  */

void FUN_108167c3c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108167c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108167c78; end: 1081680b3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_108167c78(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar7;
  int extraout_w11;
  long lVar8;
  long *plVar9;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long alStack_88 [2];
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_3;
  FUN_108169570(param_3,0);
  FUN_108154e4c();
  if (plVar9 == (long *)0x0) {
    lStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    FUN_108154b58();
    plStack_78 = (long *)CONCAT44(plStack_78._4_4_,0xffffffff);
    func_0x000108155f24();
    FUN_108169618(&lStack_98,param_2,plVar9);
  }
  plVar9 = (long *)*param_4;
  if (plVar9 != (long *)0x0) {
    do {
      func_0x000108168b34();
    } while (extraout_w10 != 0);
  }
  lVar8 = lStack_98;
  plStack_a8 = plVar9;
  if (lStack_98 == 0) {
    lStack_b0 = 0;
  }
  else {
    do {
      func_0x000108168b34();
    } while (extraout_w10_00 != 0);
    lStack_b0 = lVar8;
    if (plVar9 != (long *)0x0) {
      puVar5 = (undefined8 *)0x88;
      __Znwm();
      lStack_b0 = 0;
      plStack_a8 = (long *)0x0;
      alStack_88[0] = lVar8;
      alStack_88[1] = 0;
      plStack_60 = plVar9;
      FUN_1081659f0(&plStack_78,&plStack_60,1);
      FUN_10818d360(puVar5,&plStack_78);
      FUN_10815640c(&plStack_78);
      FUN_108154cb4(&plStack_60);
      lVar8 = alStack_88[0];
      *puVar5 = &PTR_FUN_110a291b0;
      puVar5[9] = alStack_88[0];
      alStack_88[0] = 0;
      lVar7 = param_2[2];
      puVar5[0xc] = 0;
      puVar5[10] = uStack_90;
      puVar5[0xb] = lVar7;
      puVar5[0xd] = 0;
      *(undefined4 *)(puVar5 + 0xe) = 3;
      *(undefined8 *)((long)puVar5 + 0x74) = 0;
      *(undefined8 *)((long)puVar5 + 0x79) = 0;
      plVar9 = (long *)0x0;
      if (lVar8 != 0) {
        do {
          func_0x000108168b14();
          plVar9 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      plStack_78 = plVar9;
      FUN_10818a5b8(puVar5,&plStack_78);
      FUN_1081687b4(&plStack_78);
      puStack_a0 = puVar5;
      FUN_108154cb4(alStack_88);
      FUN_108154cb4(alStack_88 + 1);
      goto LAB_108167e00;
    }
  }
  puVar5 = (undefined8 *)0x0;
  puStack_a0 = (undefined8 *)0x0;
LAB_108167e00:
  FUN_108154cb4(&lStack_b0);
  FUN_108154cb4(&plStack_a8);
  if (puVar5 == (undefined8 *)0x0) {
    lVar8 = *param_4;
    *param_4 = 0;
    *param_1 = lVar8;
  }
  else {
    lVar7 = *param_2;
    lStack_b8 = 0;
    plVar9 = (long *)0x58;
    __Znwm();
    puStack_a0 = (undefined8 *)0x0;
    alStack_88[1] = 0;
    plVar9[2] = 0;
    *(undefined4 *)(plVar9 + 1) = 1;
    plVar9[3] = 0;
    plVar9[4] = 0;
    *(undefined2 *)(plVar9 + 5) = 0;
    plStack_60 = (long *)0x0;
    plVar9[6] = (long)puVar5;
    FUN_1081680b4(&plStack_60);
    *plVar9 = (long)&PTR_FUN_110a29208;
    plVar9[9] = 0;
    *(undefined4 *)(plVar9 + 10) = 0;
    plVar9[8] = 0;
    plVar9[7] = 0;
    plStack_78 = param_3;
    lStack_70 = lVar7;
    plStack_68 = plVar9;
    FUN_108164708(&plStack_78,1);
    FUN_108164708();
    FUN_108164708();
    FUN_108164708();
    FUN_108164708();
    FUN_108164708();
    FUN_108164708();
    FUN_1081680b4(alStack_88 + 1);
    FUN_10816040c(plVar9 + 2);
    lVar8 = plVar9[6];
    if (lVar8 != 0) {
      do {
        func_0x000108168b34();
      } while (extraout_w10_01 != 0);
    }
    alStack_88[0] = 0;
    lStack_b8 = lVar8;
    if ((plVar9[2] == plVar9[3]) && ((*(byte *)((long)plVar9 + 0x29) & 1) == 0)) {
      plStack_60 = plVar9;
      (**(code **)(*plVar9 + 0x18))(0,plVar9);
    }
    else {
      plStack_60 = (long *)0x0;
      plStack_78 = plVar9;
      FUN_108155570(*(undefined8 *)(lVar7 + 0x70),&plStack_78);
      FUN_108155920(&plStack_78);
    }
    FUN_108168954(&plStack_60);
    FUN_108168954(alStack_88);
    lStack_b8 = 0;
    *param_1 = lVar8;
    FUN_1081680b4(&lStack_b8);
  }
  FUN_1081680b4(&puStack_a0);
  plVar9 = &lStack_98;
  FUN_108154cb4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_108168954(&plStack_60);
    FUN_108168954(alStack_88);
    FUN_1081680b4(&lStack_b8);
    FUN_1081680b4(&puStack_a0);
    plVar9 = &lStack_98;
    FUN_108154cb4();
    func_0x000108168b24();
    plVar6 = (long *)*plVar9;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    return plVar9;
  }
  return plVar9;
}



/* Entry: 1081680b4; end: 1081680ff;  */

long * FUN_1081680b4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108168100; end: 10816816f;  */

void FUN_108168100(long param_1)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    do {
      FUN_108168b14();
      uStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10818a6d4(param_1,&uStack_28);
  FUN_1081687b4(&uStack_28);
  func_0x000106f47224(param_1 + 0x60);
  FUN_108154cb4((long *)(param_1 + 0x48));
  FUN_10818d420(param_1);
  return;
}



/* Entry: 108168170; end: 108168183;  */

void FUN_108168170(void)

{
  FUN_108168100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108168184; end: 10816866f;  */

ulong FUN_108168184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined *puVar9;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 *unaff_x23;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [40];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  
  if (((*(int *)(param_1 + 0x78) - 8U < 3) && (*(int *)(param_1 + 0x7c) - 8U < 3)) ||
     ((ABS(*(float *)(param_1 + 0x68)) <= 0.00024414062 &&
      (ABS(*(float *)(param_1 + 0x6c)) <= 0.00024414062)))) {
    uVar24 = 0;
  }
  else {
    func_0x000108168b70(&lStack_90,*(undefined8 *)(param_1 + 0x30));
    func_0x000108168b70(&lStack_98,param_1 + 0x48);
    if ((lStack_90 == 0) || (lStack_98 == 0)) {
      uStack_148 = 0;
    }
    else {
      uStack_a8 = 0;
      uStack_a0 = *(undefined8 *)(param_1 + 0x58);
      FUN_1083bd100(&uStack_b0,lStack_90,*(undefined4 *)(param_1 + 0x70),
                    *(undefined4 *)(param_1 + 0x70),1,0,&uStack_a8);
      fStack_b8 = *(float *)(param_1 + 0x50);
      fStack_b4 = *(float *)(param_1 + 0x54);
      uStack_c0 = 0;
      iVar6 = *(int *)(param_1 + 0x74);
      bVar5 = iVar6 == 2;
      if (bVar5) {
        uStack_e8 = uRam0000000113254e28;
        uStack_f0 = uRam0000000113254e20;
        uStack_d8 = uRam0000000113254e38;
        uStack_e0 = uRam0000000113254e30;
        uStack_d0 = uRam0000000113254e40;
      }
      else if (iVar6 == 1) {
        func_0x00010815f6c0(&uStack_f0,*(float *)(param_1 + 0x58) / fStack_b8,
                            *(float *)(param_1 + 0x5c) / fStack_b4);
      }
      else {
        if (iVar6 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1081685bc);
          (*pcVar4)();
        }
        FUN_10814bdfc(&uStack_f0,(*(float *)(param_1 + 0x58) - fStack_b8) * 0.5,
                      (*(float *)(param_1 + 0x5c) - fStack_b4) * 0.5);
      }
      FUN_1083bd100(&uStack_f8,lStack_98,bVar5,bVar5,1,&uStack_f0,&uStack_c0);
      if ((bRam0000000113729d58 & 1) == 0) {
        iVar6 = 0x13729d58;
        ___cxa_guard_acquire();
        if (iVar6 != 0) {
          FUN_1083a3348(&uStack_88,&UNK_10df0439c);
          FUN_1081688d4(&puStack_80);
          puVar7 = puStack_80;
          puStack_80 = (undefined8 *)0x0;
          FUN_108154bd8(&puStack_80);
          FUN_1083a3ca0(uStack_88);
          puRam0000000113729d50 = puVar7;
          ___cxa_guard_release(0x113729d58);
        }
      }
      uStack_128 = 0;
      if (puRam0000000113729d50 != (undefined8 *)0x0) {
        do {
          func_0x000108168b14();
          uStack_128 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      FUN_108165d58(auStack_120,&uStack_128);
      puVar7 = &uStack_128;
      FUN_108154c00();
      uStack_88 = uStack_b0;
      uStack_b0 = 0;
      puVar9 = &UNK_10f47d354;
      func_0x000108168b64();
      puStack_80 = puVar7;
      puStack_78 = puVar9;
      FUN_108165cec(&puStack_80,&uStack_88);
      puVar7 = &uStack_88;
      func_0x000106f47224();
      uStack_130 = uStack_f8;
      uStack_f8 = 0;
      puVar9 = &UNK_10f47d35a;
      func_0x000108168b64();
      puStack_80 = puVar7;
      puStack_78 = puVar9;
      FUN_108165cec(&puStack_80,&uStack_130);
      puVar7 = &uStack_130;
      func_0x000106f47224();
      lVar2 = (ulong)*(uint *)(param_1 + 0x78) * 0x1c;
      uVar20 = *(undefined4 *)(&UNK_10df044a4 + lVar2);
      lVar3 = (ulong)*(uint *)(param_1 + 0x7c) * 0x1c;
      uVar22 = *(undefined4 *)(&UNK_10df044a0 + lVar3);
      uVar21 = *(undefined4 *)(&UNK_10df044a4 + lVar3);
      uVar24 = *(undefined8 *)(param_1 + 0x68);
      fVar16 = *(float *)(&UNK_10df0448c + lVar2);
      fVar10 = *(float *)(&UNK_10df04490 + lVar2);
      fVar18 = *(float *)(&UNK_10df0448c + lVar3);
      fVar13 = *(float *)(&UNK_10df04490 + lVar3);
      fVar17 = *(float *)(&UNK_10df04494 + lVar2);
      fVar11 = *(float *)(&UNK_10df04498 + lVar2);
      fVar19 = *(float *)(&UNK_10df04494 + lVar3);
      fVar14 = *(float *)(&UNK_10df04498 + lVar3);
      fVar12 = *(float *)(&UNK_10df0449c + lVar2);
      uVar26 = *(undefined4 *)(&UNK_10df044a0 + lVar2);
      fVar15 = *(float *)(&UNK_10df0449c + lVar3);
      puVar9 = &UNK_10f47d360;
      func_0x000108168b58();
      fVar23 = (float)uVar24;
      fVar25 = (float)((ulong)uVar24 >> 0x20);
      fVar23 = fVar23 + fVar23;
      fVar25 = fVar25 + fVar25;
      if ((puVar9 != (undefined *)0x0) && (func_0x000108168b44(), puVar7 == (undefined8 *)0x40)) {
        puVar7 = unaff_x23;
        FUN_108165fe0();
        puVar1 = (undefined8 *)((long)puVar7 + *(long *)(puVar9 + 0x10));
        *puVar1 = CONCAT44(fVar18 * fVar25,fVar16 * fVar23);
        puVar1[1] = 0;
        puVar1[2] = CONCAT44(fVar13 * fVar25,fVar10 * fVar23);
        puVar1[3] = 0;
        puVar1[4] = CONCAT44(fVar19 * fVar25,fVar17 * fVar23);
        puVar1[5] = 0;
        puVar1[6] = CONCAT44(fVar14 * fVar25,fVar11 * fVar23);
        *(undefined4 *)(puVar1 + 7) = uVar26;
        *(undefined4 *)((long)puVar1 + 0x3c) = uVar22;
      }
      puVar9 = &UNK_10f47d370;
      func_0x000108168b58();
      if ((puVar9 != (undefined *)0x0) && (func_0x000108168b44(), puVar7 == (undefined8 *)0x10)) {
        FUN_108165fe0();
        puVar7 = (undefined8 *)((long)unaff_x23 + *(long *)(puVar9 + 0x10));
        *puVar7 = CONCAT44((fVar15 + -0.5) * fVar25,(fVar12 + -0.5) * fVar23);
        *(undefined4 *)(puVar7 + 1) = uVar20;
        *(undefined4 *)((long)puVar7 + 0xc) = uVar21;
      }
      FUN_108394a04(&uStack_148,auStack_120,0);
      FUN_108166068(auStack_120);
      func_0x000106f47224(&uStack_f8);
      func_0x000106f47224(&uStack_b0);
    }
    func_0x00010811496c(&lStack_98);
    func_0x00010811496c(&lStack_90);
    uVar24 = uStack_148;
  }
  uStack_148 = 0;
  func_0x000108114f18(param_1 + 0x60,uVar24);
  func_0x000106f47224(&uStack_148);
  puVar8 = (ulong *)**(long **)(param_1 + 0x30);
  FUN_10818a8b4(puVar8,param_2,param_3);
  uStack_138 = puVar8[1];
  uStack_140 = *puVar8;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    func_0x00010816882c(ABS(*(float *)(param_1 + 0x68)),ABS(*(float *)(param_1 + 0x6c)),&uStack_140)
    ;
  }
  return uStack_140 & 0xffffffff;
}



/* Entry: 108168670; end: 1081687ab;  */

void FUN_108168670(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  undefined8 uStack_180;
  undefined1 auStack_178 [40];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined1 auStack_c0 [144];
  
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10818ccbc(&uStack_150,param_2);
    func_0x00010833b800(auStack_178,param_2);
    FUN_10818d01c(&uStack_150,param_1 + 0x18,auStack_178,1);
    FUN_1081660c4(auStack_c0,&uStack_150);
    FUN_10818cd40(&uStack_150);
    uStack_11c = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_114 = 0x3f800000;
    uStack_10c = 0x40800000;
    uVar2 = 0;
    if (*(long *)(param_1 + 0x60) != 0) {
      do {
        FUN_108168b14();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_180 = 0;
    uStack_148 = uVar2;
    FUN_108168800(0);
    func_0x000106f47224(&uStack_180);
    FUN_10833ea80(param_2,param_1 + 0x18,&uStack_150);
    FUN_108375e94(&uStack_150);
    FUN_10818cd40(auStack_c0);
    return;
  }
  plVar1 = (long *)**(long **)(param_1 + 0x30);
  if ((((*(ushort *)(plVar1 + 5) >> 6 & 1) == 0) &&
      (*(float *)(plVar1 + 3) < *(float *)(plVar1 + 4))) &&
     (*(float *)((long)plVar1 + 0x1c) < *(float *)((long)plVar1 + 0x24))) {
                    /* WARNING: Could not recover jumptable at 0x00010818c944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    return;
  }
  return;
}



/* Entry: 1081687ac; end: 1081687b3;  */

undefined8 FUN_1081687ac(void)

{
  return 0;
}



/* Entry: 1081687b4; end: 1081687ff;  */

long * FUN_1081687b4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108168800; end: 108168837;  */

void FUN_108168800(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108168824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108168838; end: 1081688d3;  */

void FUN_108168838(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_60 [48];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_60;
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 == (undefined8 *)0x0) {
    *param_1 = 0;
  }
  else {
    FUN_10818a8b4(puVar1,param_3,param_4);
    uStack_28 = puVar1[1];
    uStack_30 = *puVar1;
    FUN_108383398(auStack_60);
    lVar3 = *param_2;
    FUN_1083835c4(auStack_60,&uStack_30,0);
    FUN_10818c910(lVar3,puVar2,0);
    FUN_10838362c(param_1,auStack_60);
    FUN_108383490(auStack_60);
  }
  return;
}



/* Entry: 1081688d4; end: 108168933;  */

void FUN_1081688d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_1083a33c4(&uStack_28,param_2);
  FUN_108394278(param_1);
  FUN_1083a3ca0(uStack_28);
  return;
}



/* Entry: 108168934; end: 108168953;  */

void FUN_108168934(float param_1,float param_2,undefined8 *param_3)

{
  param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) - param_2,(float)param_3[1] - param_1);
  *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) + param_2,(float)*param_3 + param_1);
  return;
}



/* Entry: 108168954; end: 10816899f;  */

long * FUN_108168954(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1081689a0; end: 1081689cf;  */

undefined8 * FUN_1081689a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29270;
  FUN_1081680b4(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 1081689d0; end: 1081689d3;  */

undefined8 * FUN_1081689d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29270;
  FUN_1081680b4(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 1081689d4; end: 1081689e7;  */

void FUN_1081689d4(void)

{
  FUN_1081689a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081689e8; end: 108168b13;  */

void FUN_1081689e8(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    fVar8 = *(float *)(param_1 + 0x44);
    if ((*(float *)(lVar4 + 0x68) != *(float *)(param_1 + 0x40)) ||
       (*(float *)(lVar4 + 0x6c) != fVar8)) {
      *(float *)(lVar4 + 0x68) = *(float *)(param_1 + 0x40);
      *(float *)(lVar4 + 0x6c) = fVar8;
      func_0x000108168b2c();
      lVar4 = *(long *)(param_1 + 0x30);
    }
    iVar6 = 3;
    if (*(float *)(param_1 + 0x4c) != 0.0) {
      iVar6 = 1;
    }
    if (*(int *)(lVar4 + 0x70) != iVar6) {
      *(int *)(lVar4 + 0x70) = iVar6;
      func_0x000108168b2c();
      lVar4 = *(long *)(param_1 + 0x30);
    }
    uVar7 = (int)*(float *)(param_1 + 0x48) - 1;
    if (1 < uVar7) {
      uVar7 = 2;
    }
    if (*(uint *)(lVar4 + 0x74) != uVar7) {
      *(uint *)(lVar4 + 0x74) = uVar7;
      func_0x000108168b2c();
      lVar4 = *(long *)(param_1 + 0x30);
    }
    uVar7 = (int)*(float *)(param_1 + 0x38) - 1;
    if (9 < uVar7) {
      uVar7 = 10;
    }
    if (*(uint *)(lVar4 + 0x78) != uVar7) {
      *(uint *)(lVar4 + 0x78) = uVar7;
      func_0x000108168b2c();
      lVar4 = *(long *)(param_1 + 0x30);
    }
    uVar7 = (int)*(float *)(param_1 + 0x3c) - 1;
    if (9 < uVar7) {
      uVar7 = 10;
    }
    if (*(uint *)(lVar4 + 0x7c) != uVar7) {
      *(uint *)(lVar4 + 0x7c) = uVar7;
      func_0x000108168b2c();
      lVar4 = *(long *)(param_1 + 0x30);
    }
    bVar3 = *(float *)(param_1 + 0x50) != 0.0;
    if ((bool)*(char *)(lVar4 + 0x80) != bVar3) {
      *(bool *)(lVar4 + 0x80) = bVar3;
      uStack_21 = 1;
      func_0x00010818add8(auStack_38);
      if ((bStack_2c & 1) == 0) {
        uVar2 = *(ushort *)(lVar4 + 0x28);
        uVar7 = (uint)uVar2;
        if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
          if ((uVar2 & 1) == 0) {
            uVar7 = uVar2 | 8;
            *(short *)(lVar4 + 0x28) = (short)uVar7;
            uStack_21 = 0;
          }
          *(ushort *)(lVar4 + 0x28) = (ushort)uVar7 | 4;
          puStack_40 = &uStack_21;
          puVar5 = *(undefined8 **)(lVar4 + 0x10);
          if ((uVar7 >> 4 & 1) == 0) {
            if (puVar5 != (undefined8 *)0x0) {
              func_0x00010818ad34(&puStack_40);
            }
          }
          else {
            puVar1 = (undefined8 *)puVar5[1];
            for (puVar5 = (undefined8 *)*puVar5; puVar5 != puVar1; puVar5 = puVar5 + 1) {
              func_0x00010818ad34(&puStack_40,*puVar5);
            }
          }
        }
      }
      func_0x00010818a9f8(auStack_38);
      return;
    }
  }
  return;
}



/* Entry: 108168b14; end: 108168b7b;  */

void FUN_108168b14(void)

{
  bool bVar1;
  int *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108168b7c; end: 108168e23;  */

long ** FUN_108168b7c(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  long *plVar7;
  long lVar8;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *param_2;
  *param_1 = 0;
  plVar7 = (long *)*param_4;
  *param_4 = 0;
  plVar4 = (long *)0x70;
  plStack_98 = plVar7;
  __Znwm();
  plStack_98 = (long *)0x0;
  *(undefined4 *)(plVar4 + 1) = 1;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[2] = 0;
  *(undefined2 *)(plVar4 + 5) = 0;
  *plVar4 = (long)&PTR_FUN_110a292a8;
  plStack_88 = plVar7;
  FUN_10818c00c(plVar4 + 6);
  pplVar6 = (long **)(plVar4 + 7);
  plStack_88 = (long *)0x0;
  lStack_80 = plVar4[6];
  if (lStack_80 != 0) {
    piVar1 = (int *)(lStack_80 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_78 = plVar7;
  FUN_10818bb98(pplVar6,&plStack_78,&lStack_80);
  FUN_108159600(&lStack_80);
  FUN_108154cb4(&plStack_78);
  lStack_68 = 0x3f80000000000000;
  plStack_70 = (long *)0x0;
  func_0x0001072f8f08(plVar4 + 8,&plStack_70,4);
  *(undefined4 *)(plVar4 + 0xb) = 0x437f0000;
  *(undefined8 *)((long)plVar4 + 0x5c) = 0;
  *(undefined8 *)((long)plVar4 + 100) = 0;
  plStack_90 = plVar4;
  FUN_108154cb4(&plStack_88);
  plStack_70 = param_3;
  lStack_68 = lVar8;
  plStack_60 = plVar4;
  FUN_108166d68(&plStack_70,0,plVar4 + 8);
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108154cb4(&plStack_98);
  FUN_108168e24(param_1);
  plStack_90 = (long *)0x0;
  if ((plVar4[2] == plVar4[3]) && ((*(byte *)((long)plVar4 + 0x29) & 1) == 0)) {
    plStack_78 = plVar4;
    (**(code **)(*plVar4 + 0x18))(0,plVar4);
  }
  else {
    plStack_78 = (long *)0x0;
    pplVar6 = &plStack_70;
    plStack_70 = plVar4;
    FUN_108155570(*(undefined8 *)(lVar8 + 0x70));
    FUN_108155920(&plStack_70);
  }
  pplVar5 = &plStack_78;
  FUN_108168e6c();
  func_0x000108169090();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pplVar5;
  }
  ___stack_chk_fail();
  FUN_108168e6c(&plStack_78);
  func_0x000108169090();
  FUN_108154cb4(param_1);
  __Unwind_Resume();
  if (pplVar5 != pplVar6) {
    if (*pplVar6 != (long *)0x0) {
      plVar4 = *pplVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *(int *)plVar4 = (int)*plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_108154d4c(pplVar5);
  }
  return pplVar5;
}



/* Entry: 108168e24; end: 108168e6b;  */

long * FUN_108168e24(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 != param_2) {
    if (*param_2 != 0) {
      piVar1 = (int *)(*param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_108154d4c(param_1);
  }
  return param_1;
}



/* Entry: 108168e6c; end: 108168eb7;  */

long * FUN_108168e6c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108168eb8; end: 108168eef;  */

undefined8 * FUN_108168eb8(undefined8 *param_1)

{
  func_0x0001056d1ce4(param_1 + 8);
  FUN_108154cb4(param_1 + 7);
  FUN_108169038(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108168ef0; end: 108168f03;  */

void FUN_108168ef0(void)

{
  FUN_108168eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108168f04; end: 108169037;  */

void FUN_108168f04(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong unaff_d9;
  undefined1 *puStack_40;
  undefined1 auStack_38 [8];
  
  uVar6 = (int)param_1 + 0x40;
  FUN_108163830();
  lVar7 = *(long *)(param_1 + 0x30);
  fVar8 = (float)NEON_fminnm((float)(double)(long)(*(float *)(param_1 + 0x58) + 0.5),0x4effffff);
  if (fVar8 <= -2.1474835e+09) {
    fVar8 = -2.1474835e+09;
  }
  uVar1 = (int)fVar8 & ((int)fVar8 >> 0x1f ^ 0xffffffffU);
  if (0xfe < (int)uVar1) {
    uVar1 = 0xff;
  }
  uVar6 = uVar6 & 0xffffff | uVar1 << 0x18;
  if (*(uint *)(lVar7 + 0x5c) != uVar6) {
    *(uint *)(lVar7 + 0x5c) = uVar6;
    FUN_108169084();
    lVar7 = *(long *)(param_1 + 0x30);
  }
  fVar10 = *(float *)(param_1 + 0x60);
  fVar9 = 0.017453292;
  fVar8 = (90.0 - *(float *)(param_1 + 0x5c)) * 0.017453292;
  ___sincosf_stret();
  fVar9 = fVar10 * fVar9;
  fVar8 = -(fVar10 * fVar8);
  bVar4 = false;
  if ((*(float *)(lVar7 + 0x4c) == fVar9) &&
     (bVar4 = false, !NAN(*(float *)(lVar7 + 0x50)) && !NAN(fVar8))) {
    bVar4 = *(float *)(lVar7 + 0x50) == fVar8;
  }
  if (!bVar4) {
    *(float *)(lVar7 + 0x4c) = fVar9;
    *(float *)(lVar7 + 0x50) = fVar8;
    FUN_108169084();
    lVar7 = *(long *)(param_1 + 0x30);
  }
  fVar8 = *(float *)(param_1 + 100) * 0.3;
  bVar4 = false;
  if ((*(float *)(lVar7 + 0x54) == fVar8) &&
     (bVar4 = false, !NAN(*(float *)(lVar7 + 0x58)) && !NAN(fVar8))) {
    bVar4 = *(float *)(lVar7 + 0x58) == fVar8;
  }
  if (!bVar4) {
    *(float *)(lVar7 + 0x54) = fVar8;
    *(float *)(lVar7 + 0x58) = fVar8;
    FUN_108169084();
    lVar7 = *(long *)(param_1 + 0x30);
  }
  uVar6 = (uint)(*(float *)(param_1 + 0x68) != 0.0);
  if (*(uint *)(lVar7 + 0x60) != uVar6) {
    *(uint *)(lVar7 + 0x60) = uVar6;
    func_0x00010818add8(auStack_38);
    if ((unaff_d9 & 0x100000000) == 0) {
      uVar3 = *(ushort *)(lVar7 + 0x28);
      uVar6 = (uint)uVar3;
      if (((uVar3 >> 2 & 1) == 0) || ((uVar3 >> 3 & 1) == 0)) {
        if ((uVar3 & 1) == 0) {
          uVar6 = uVar3 | 8;
          *(short *)(lVar7 + 0x28) = (short)uVar6;
        }
        *(ushort *)(lVar7 + 0x28) = (ushort)uVar6 | 4;
        puStack_40 = &stack0xffffffffffffffdf;
        puVar5 = *(undefined8 **)(lVar7 + 0x10);
        if ((uVar6 >> 4 & 1) == 0) {
          if (puVar5 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar2 = (undefined8 *)puVar5[1];
          for (puVar5 = (undefined8 *)*puVar5; puVar5 != puVar2; puVar5 = puVar5 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar5);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 108169038; end: 108169083;  */

long * FUN_108169038(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108169084; end: 10816909f;  */

void FUN_108169084(void)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long unaff_x20;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  uStack_21 = 1;
  func_0x00010818add8(auStack_38);
  if ((bStack_2c & 1) == 0) {
    uVar2 = *(ushort *)(unaff_x20 + 0x28);
    uVar4 = (uint)uVar2;
    if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
      if ((uVar2 & 1) == 0) {
        uVar4 = uVar2 | 8;
        *(short *)(unaff_x20 + 0x28) = (short)uVar4;
        uStack_21 = 0;
      }
      *(ushort *)(unaff_x20 + 0x28) = (ushort)uVar4 | 4;
      puStack_40 = &uStack_21;
      puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
      if ((uVar4 >> 4 & 1) == 0) {
        if (puVar3 != (undefined8 *)0x0) {
          func_0x00010818ad34(&puStack_40);
        }
      }
      else {
        puVar1 = (undefined8 *)puVar3[1];
        for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 1) {
          func_0x00010818ad34(&puStack_40,*puVar3);
        }
      }
    }
  }
  func_0x00010818a9f8(auStack_38);
  return;
}



/* Entry: 1081690a0; end: 108169283;  */

undefined1  [16] FUN_1081690a0(undefined8 *param_1,ulong *param_2)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  ulong *puVar3;
  undefined *puVar4;
  code *pcVar5;
  byte *pbVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  puVar3 = param_2;
  FUN_108154b58(param_2,&UNK_10f47d549);
  FUN_108158a5c();
  if (puVar3 != (ulong *)0x0) {
    if ((*puVar3 & 7) == 0) {
      pbVar6 = (byte *)((long)puVar3 + 1);
    }
    else {
      pbVar6 = (byte *)((*puVar3 & 0xfffffffffffffff8) + 8);
    }
    uVar8 = 0x1d;
    ppuVar7 = &PTR_DAT_110a292e8;
    do {
      uVar9 = uVar8 >> 1;
      puVar4 = ppuVar7[uVar9 * 3];
      _strcmp(puVar4,pbVar6);
      ppuVar1 = ppuVar7 + uVar9 * 3 + 3;
      uVar8 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
      if (-1 < (int)puVar4) {
        ppuVar1 = ppuVar7;
        uVar8 = uVar9;
      }
      ppuVar7 = ppuVar1;
    } while (uVar8 != 0);
    if (ppuVar1 != (undefined **)&UNK_110a295a0) {
      puVar4 = *ppuVar1;
      _strcmp(puVar4,pbVar6);
      if ((int)puVar4 == 0) {
        pcVar5 = (code *)ppuVar1[1];
        puVar4 = ppuVar1[2];
        goto LAB_108169264;
      }
    }
  }
  puVar3 = param_2;
  FUN_108154b58(param_2,&UNK_10f47d54c);
  uVar2 = SUB84(puVar3,0);
  func_0x000108155f24();
  puVar4 = (undefined *)0x0;
  pcVar5 = FUN_108172ed8;
  switch(uVar2) {
  case 0x14:
    break;
  case 0x15:
    puVar4 = (undefined *)0x0;
    pcVar5 = FUN_108169814;
    break;
  default:
    FUN_108159fb8(*param_1,0,param_2,&UNK_10f47d54f);
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
    break;
  case 0x17:
    puVar4 = (undefined *)0x0;
    pcVar5 = FUN_1081738c4;
    break;
  case 0x19:
    puVar4 = (undefined *)0x0;
    pcVar5 = FUN_108168b7c;
    break;
  case 0x1a:
    puVar4 = (undefined *)0x0;
    pcVar5 = FUN_10816ebd0;
    break;
  case 0x1d:
    puVar4 = (undefined *)0x0;
    pcVar5 = FUN_10816aad4;
  }
LAB_108169264:
  auVar10._8_8_ = puVar4;
  auVar10._0_8_ = pcVar5;
  return auVar10;
}



/* Entry: 108169284; end: 10816940f;  */

void FUN_108169284(undefined8 *param_1,code *param_2,ulong *param_3,long *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  if (*param_4 == 0) {
    *param_1 = 0;
  }
  else {
    plVar5 = (long *)(*param_3 & 0xfffffffffffffff8);
    for (lVar7 = *plVar5 << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
      plVar5 = plVar5 + 1;
      plVar2 = plVar5;
      FUN_108154e4c();
      if (plVar2 != (long *)0x0) {
        pcVar6 = param_2;
        plVar4 = plVar2;
        FUN_1081690a0();
        plVar3 = plVar2;
        FUN_108154b58(plVar2,&UNK_10f47d56c);
        FUN_108155f00();
        if ((((ulong)plVar4 & 1) != 0 || pcVar6 != (code *)0x0) && (plVar3 != (long *)0x0)) {
          FUN_1081589bc(auStack_78,*(undefined8 *)param_2,plVar2,2);
          if (((ulong)plVar4 & 1) != 0) {
            pcVar6 = *(code **)(*(long *)(param_2 + ((long)plVar4 >> 1)) +
                               ((ulong)pcVar6 & 0xffffffff));
          }
          func_0x000108169808();
          (*pcVar6)(&uStack_80);
          uVar1 = uStack_80;
          uStack_80 = 0;
          FUN_108154d4c(param_4,uVar1);
          FUN_108154cb4(&uStack_80);
          func_0x0001081697e8();
          if (*param_4 == 0) {
            FUN_108159fb8(*(undefined8 *)param_2,1,plVar2,&UNK_10f47d56f);
            *param_1 = 0;
            func_0x0001081697f8();
            return;
          }
          func_0x0001081697f8();
        }
      }
    }
    func_0x000108169808();
    *param_1 = extraout_x8;
  }
  return;
}



/* Entry: 108169410; end: 10816956f;  */

/* WARNING: Removing unreachable block (ram,0x0001081694cc) */

void FUN_108169410(undefined8 *param_1,undefined8 *param_2,ulong *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  long lVar4;
  code *extraout_x9;
  long *plVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  uVar3 = 0;
  if (*param_4 != 0) {
    plVar5 = (long *)(*param_3 & 0xfffffffffffffff8);
    for (lVar6 = *plVar5 << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
      plVar5 = plVar5 + 1;
      plVar1 = plVar5;
      FUN_108154e4c();
      if (plVar1 != (long *)0x0) {
        plVar2 = plVar1;
        FUN_108154b58();
        uStack_68 = 0xffffffffffffffff;
        FUN_108154b1c();
        if (plVar2 < (long *)0x5) {
          lVar4 = *(long *)(&UNK_110a295a0 + (long)plVar2 * 0x10);
        }
        else {
          lVar4 = 0;
        }
        if (lVar4 == 0) {
          FUN_108159fb8(*param_2,0,plVar1,&UNK_10f47d585);
        }
        else {
          func_0x000108169808();
          (*extraout_x9)(&uStack_68);
          uVar3 = uStack_68;
          uStack_68 = 0;
          FUN_108154d4c(param_4,uVar3);
          func_0x0001081697e8();
          FUN_108154cb4(auStack_70);
        }
      }
    }
    func_0x000108169808();
    uVar3 = extraout_x8;
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 108169570; end: 108169617;  */

ulong * FUN_108169570(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  int iVar2;
  ulong *puVar3;
  
  if ((bRam0000000113824e50 & 1) == 0) {
    iVar2 = 0x13824e50;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uRam0000000113824e48 = 1;
      ___cxa_guard_release(0x113824e50);
    }
  }
  if (param_2 < *(ulong *)(*param_1 & 0xfffffffffffffff8)) {
    puVar3 = (ulong *)(*param_1 & 0xfffffffffffffff8) + param_2 + 1;
    FUN_108154e4c();
    if (puVar3 != (ulong *)0x0) {
      if ((bRam0000000113254308 & 1) == 0) {
        iVar2 = 0x13254308;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          uRam0000000113254300 = 1;
          ___cxa_guard_release(0x113254308,&UNK_10f47d59e);
        }
      }
      func_0x00010818584c();
      puVar1 = (ulong *)0x113254300;
      if (puVar3 != (ulong *)0x0) {
        puVar1 = puVar3 + 1;
      }
      return puVar1;
    }
  }
  return (ulong *)0x113824e48;
}



/* Entry: 108169618; end: 108169683;  */

void FUN_108169618(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = *(long **)(param_2 + 8);
  func_0x000108155f94();
  if (plVar4 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar5 = plVar4;
    FUN_108157660();
    lVar6 = *plVar5;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar7 = plVar4[3];
    *param_1 = lVar6;
    param_1[1] = lVar7;
  }
  return;
}



/* Entry: 108169684; end: 108169717;  */

undefined8 * FUN_108169684(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_110a29600;
  uStack_28 = *param_2;
  *param_2 = 0;
  uStack_30 = 0;
  FUN_10818b6e0(param_1 + 6,&uStack_28,&uStack_30);
  func_0x0001081697f0();
  func_0x0001081697e8();
  param_1[7] = *param_3;
  return param_1;
}



/* Entry: 108169718; end: 108169793;  */

void FUN_108169718(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_30;
  undefined1 uStack_28;
  
  (**(code **)(*param_1 + 0x28))(&lStack_30);
  FUN_10818c8b4(param_1[6],uStack_28);
  lVar2 = param_1[6];
  plVar1 = (long *)(lVar2 + 0x38);
  if (*plVar1 != lStack_30) {
    FUN_10816979c(plVar1,&lStack_30);
    FUN_10818a7f4(lVar2,1);
  }
  func_0x0001081697f0();
  return;
}



/* Entry: 108169794; end: 10816979b;  */

void FUN_108169794(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108169798);
  (*pcVar1)();
}



/* Entry: 10816979c; end: 1081697e7;  */

long * FUN_10816979c(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 != param_2) {
    if (*param_2 != 0) {
      piVar1 = (int *)(*param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000108114f18(param_1);
  }
  return param_1;
}



/* Entry: 1081697e8; end: 108169813;  */

void FUN_1081697e8(void)

{
  func_0x000108154d64(&stack0x00000008);
  FUN_108154cd8();
  return;
}



/* Entry: 108169814; end: 108169a83;  */

void FUN_108169814(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar5 = *param_2;
  plVar7 = (long *)*param_4;
  *param_4 = 0;
  lStack_88 = 0;
  plVar4 = (long *)0x60;
  plStack_80 = plVar7;
  __Znwm();
  plStack_80 = (long *)0x0;
  *(undefined4 *)(plVar4 + 1) = 1;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[2] = 0;
  *(undefined2 *)(plVar4 + 5) = 0;
  *plVar4 = (long)&PTR_FUN_110a29658;
  plStack_70 = plVar7;
  FUN_10818b15c(plVar4 + 6,0xff000000);
  plStack_70 = (long *)0x0;
  lStack_50 = plVar4[6];
  if (lStack_50 != 0) {
    piVar1 = (int *)(lStack_50 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_48 = plVar7;
  FUN_1081876d4(plVar4 + 7,&plStack_48,&lStack_50,5);
  FUN_108158f04(&lStack_50);
  FUN_108154cb4(&plStack_48);
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  *(undefined4 *)(plVar4 + 0xb) = 0x3f800000;
  plStack_68 = param_3;
  lStack_60 = lVar5;
  plStack_58 = plVar4;
  FUN_108166d68(&plStack_68,2,plVar4 + 8);
  FUN_108164708();
  FUN_10815a330(lVar5,plVar4 + 6);
  plStack_78 = plVar4;
  FUN_108154cb4(&plStack_70);
  FUN_108154cb4(&plStack_80);
  lVar6 = plVar4[7];
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_88 = lVar6;
  FUN_108169ab0(0);
  plStack_78 = (long *)0x0;
  if ((plVar4[2] == plVar4[3]) && ((*(byte *)((long)plVar4 + 0x29) & 1) == 0)) {
    plStack_48 = plVar4;
    (**(code **)(*plVar4 + 0x18))(0,plVar4);
  }
  else {
    plStack_48 = (long *)0x0;
    plStack_68 = plVar4;
    FUN_108155570(*(undefined8 *)(lVar5 + 0x70),&plStack_68);
    FUN_108155920(&plStack_68);
  }
  FUN_108169adc(&plStack_48);
  FUN_108169adc(&plStack_78);
  lStack_88 = 0;
  *param_1 = lVar6;
  FUN_108169a84(&lStack_88);
  return;
}



/* Entry: 108169a84; end: 108169aaf;  */

undefined8 * FUN_108169a84(undefined8 *param_1)

{
  FUN_108169ab0(*param_1);
  return param_1;
}



/* Entry: 108169ab0; end: 108169adb;  */

void FUN_108169ab0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108169ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108169adc; end: 108169b2b;  */

long * FUN_108169adc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108169b2c; end: 108169b63;  */

undefined8 * FUN_108169b2c(undefined8 *param_1)

{
  func_0x0001056d1ce4(param_1 + 8);
  FUN_108169a84(param_1 + 7);
  FUN_108158f04(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108169b64; end: 108169b77;  */

void FUN_108169b64(void)

{
  FUN_108169b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108169b78; end: 108169bf7;  */

void FUN_108169b78(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  
  FUN_10816385c(param_4 + 0x40);
  fVar2 = *(float *)(param_4 + 0x58);
  fStack_24 = 1.0;
  if (0.0 >= fVar2 && fVar2 <= 1.0) {
    fStack_24 = 0.0;
  }
  if (0.0 < fVar2 && fVar2 <= 1.0) {
    fStack_24 = fVar2;
  }
  uVar1 = *(undefined8 *)(param_4 + 0x30);
  uStack_34 = SUB84(&uStack_30,0);
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  func_0x000108343560();
  FUN_10816704c(uVar1,&uStack_34);
  return;
}



/* Entry: 108169bf8; end: 10816a007;  */

undefined8 ** FUN_108169bf8(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)0xc0;
  __Znwm();
  plStack_70 = (long *)*param_4;
  *param_4 = 0;
  uStack_90 = 0;
  FUN_1081659f0(&plStack_88,&plStack_70,1);
  FUN_10818d360(puVar6,&plStack_88);
  FUN_10815640c(&plStack_88);
  FUN_108154cb4(&plStack_70);
  *puVar6 = &PTR_FUN_110a296a8;
  puVar6[9] = 0;
  FUN_10810c9b4(puVar6 + 10);
  FUN_10810c9b4(puVar6 + 0xf);
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  *(undefined4 *)(puVar6 + 0x16) = 0;
  uVar11 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)puVar6 + 0xb4) = uVar11;
  puStack_a0 = puVar6;
  FUN_108154cb4(&uStack_90);
  lVar10 = *param_2;
  lStack_a8 = 0;
  plVar7 = (long *)0x98;
  __Znwm();
  puStack_a0 = (undefined8 *)0x0;
  uStack_90 = 0;
  plVar7[2] = 0;
  *(undefined4 *)(plVar7 + 1) = 1;
  plVar7[3] = 0;
  plVar7[4] = 0;
  *(undefined2 *)(plVar7 + 5) = 0;
  plStack_70 = (long *)0x0;
  plVar7[6] = (long)puVar6;
  FUN_10816a008(&plStack_70);
  plVar7[8] = 0;
  plVar7[7] = 0;
  plVar7[0xc] = 0x3f80000042c80000;
  plVar7[0xb] = 0x42c8000042c80000;
  plVar7[10] = 0;
  plVar7[9] = 0;
  plVar7[0xd] = 0x4248000042c80000;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  *plVar7 = (long)&PTR_FUN_110a29738;
  *(undefined4 *)(plVar7 + 0x10) = 0;
  *(undefined8 *)((long)plVar7 + 0x8c) = 0x42c80000;
  *(undefined8 *)((long)plVar7 + 0x84) = 0x42c80000;
  plStack_88 = param_3;
  lStack_80 = lVar10;
  plStack_78 = plVar7;
  FUN_108164708(&plStack_88,0);
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_1081662b4();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_1081662b4();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_10816a008(&uStack_90);
  FUN_10816040c(plVar7 + 2);
  lVar9 = plVar7[6];
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_98 = 0;
  lStack_a8 = lVar9;
  if ((plVar7[2] == plVar7[3]) && ((*(byte *)((long)plVar7 + 0x29) & 1) == 0)) {
    plStack_70 = plVar7;
    (**(code **)(*plVar7 + 0x18))(0,plVar7);
  }
  else {
    plStack_70 = (long *)0x0;
    plStack_88 = plVar7;
    FUN_108155570(*(undefined8 *)(lVar10 + 0x70),&plStack_88);
    FUN_108155920(&plStack_88);
  }
  FUN_10816a594(&plStack_70);
  FUN_10816a594(&uStack_98);
  lStack_a8 = 0;
  *param_1 = lVar9;
  FUN_10816a008(&lStack_a8);
  ppuVar8 = &puStack_a0;
  FUN_10816a008();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  FUN_10816a594(&plStack_70);
  FUN_10816a594(&uStack_98);
  FUN_10816a008(&lStack_a8);
  ppuVar8 = &puStack_a0;
  FUN_10816a008();
  func_0x00010816aacc();
  plVar7 = *ppuVar8;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  return ppuVar8;
}



/* Entry: 10816a008; end: 10816a053;  */

long * FUN_10816a008(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816a054; end: 10816a07b;  */

void FUN_10816a054(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_38;
  
  func_0x000106f47224(param_1 + 9);
  *param_1 = &PTR_DAT_110a2c208;
  plVar3 = (long *)param_1[7];
  for (plVar2 = (long *)param_1[6]; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    uVar1 = 0;
    if (*plVar2 != 0) {
      do {
        func_0x00010818d5e8();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_38 = uVar1;
    FUN_10818a6d4(param_1,&uStack_38);
    func_0x00010818d620();
  }
  FUN_10815640c(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 10816a07c; end: 10816a08f;  */

void FUN_10816a07c(void)

{
  FUN_10816a054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816a090; end: 10816a363;  */

undefined4 FUN_10816a090(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 ***pppuVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  code *pcVar8;
  undefined4 *puVar9;
  undefined8 ****ppppuVar10;
  undefined8 *****pppppuVar11;
  undefined *puVar12;
  undefined8 ***pppuVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined8 uStack_d0;
  undefined8 **appuStack_c8 [5];
  undefined8 ****ppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  puVar9 = (undefined4 *)**(undefined8 **)(param_1 + 0x30);
  FUN_10818a8b4();
  if ((*(uint *)(param_1 + 0xa0) < 3) && (*(uint *)(param_1 + 0xa4) < 4)) {
    uVar23 = *puVar9;
    puVar12 = &UNK_10df04aa4;
    for (lVar14 = 0; lVar14 != 0x240; lVar14 = lVar14 + 0x60) {
      if (*(float *)(puVar12 + -4) < *(float *)(param_1 + 0xb4)) {
        lVar3 = (ulong)*(uint *)(param_1 + 0xa0) * 0x20 + (ulong)*(uint *)(param_1 + 0xa4) * 8 +
                0x113729d60;
        pppuVar13 = *(undefined8 ****)(lVar3 + lVar14);
        if (pppuVar13 == (undefined8 ***)0x0) {
          FUN_1083a3c34(&ppuStack_78,&UNK_10df04ad0);
          uStack_80 = 0;
          puStack_98 = (undefined *)0x0;
          ppppuStack_a0 = (undefined8 ****)0x0;
          uStack_88 = 0;
          uStack_90 = 0;
          FUN_108394278(&ppuStack_70,&ppuStack_78,&ppppuStack_a0);
          FUN_1083a3ca0(ppuStack_78);
          ppuVar7 = ppuStack_70;
          ppuStack_70 = (undefined8 **)0x0;
          FUN_108154bd8(&ppuStack_70);
          ppppuStack_a0 = (undefined8 ****)0x0;
          *(undefined8 ***)(lVar3 + lVar14) = ppuVar7;
          FUN_108154c00(&ppppuStack_a0);
          pppuVar13 = *(undefined8 ****)(lVar3 + lVar14);
          if (pppuVar13 == (undefined8 ***)0x0) goto LAB_10816a1c4;
        }
        pppuVar2 = pppuVar13 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar5) {
            *(int *)pppuVar2 = *(int *)pppuVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_10816a1c4:
        ppuStack_78 = pppuVar13;
        FUN_108165d58(appuStack_c8,&ppuStack_78);
        ppppuVar10 = (undefined8 ****)&ppuStack_78;
        FUN_108154c00();
        puVar12 = &UNK_10f47d5a0;
        func_0x00010816aac0();
        pppppuVar11 = &ppppuStack_a0;
        ppppuStack_a0 = ppppuVar10;
        puStack_98 = puVar12;
        FUN_10816a4f0(pppppuVar11,param_1 + 0xa8);
        puVar12 = &UNK_10f47d5af;
        func_0x00010816aac0();
        ppppuStack_a0 = pppppuVar11;
        puStack_98 = puVar12;
        func_0x000108165c7c(&ppppuStack_a0,param_1 + 0xb0);
        puVar12 = &UNK_10f47d5be;
        ppppuVar10 = (undefined8 ****)appuStack_c8;
        func_0x000108165c0c(ppppuVar10,&UNK_10f47d5be,9);
        ppppuStack_a0 = ppppuVar10;
        puStack_98 = puVar12;
        func_0x000108165c7c(&ppppuStack_a0,(float *)(param_1 + 0xb4));
        puVar12 = &UNK_10f47d5c8;
        ppppuVar10 = (undefined8 ****)appuStack_c8;
        func_0x000108165c0c(ppppuVar10,&UNK_10f47d5c8,0xd);
        ppppuStack_a0 = ppppuVar10;
        puStack_98 = puVar12;
        func_0x000108165c7c(&ppppuStack_a0,param_1 + 0xb8);
        auVar15 = *(undefined1 (*) [16])(param_1 + 0x78);
        pauVar1 = (undefined1 (*) [16])(param_1 + 0x88);
        auVar18 = NEON_ext(*pauVar1,auVar15,4,1);
        auVar22._4_12_ = auVar18._4_12_;
        auVar22._0_4_ = auVar18._4_4_;
        auVar20._0_8_ = auVar22._0_8_;
        auVar20._8_4_ = auVar18._12_4_;
        auVar20._12_4_ = auVar18._12_4_;
        auVar19._8_8_ = auVar20._8_8_;
        auVar19._4_4_ = auVar15._4_4_;
        auVar19._0_4_ = auVar18._4_4_;
        auVar21._0_12_ = auVar19._0_12_;
        auVar21._12_4_ = auVar15._12_4_;
        auVar22 = NEON_ext(auVar21,auVar21,8,1);
        auVar15 = NEON_ext(auVar15,*pauVar1,4,1);
        auVar18._4_12_ = auVar15._4_12_;
        auVar18._0_4_ = auVar15._4_4_;
        auVar17._0_8_ = auVar18._0_8_;
        auVar17._8_4_ = auVar15._12_4_;
        auVar17._12_4_ = auVar15._12_4_;
        auVar16._8_8_ = auVar17._8_8_;
        auVar16._4_4_ = (int)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        auVar16._0_4_ = auVar15._4_4_;
        auVar15._0_12_ = auVar16._0_12_;
        auVar15._12_4_ = (int)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
        auVar15 = NEON_ext(auVar15,auVar15,8,1);
        puStack_98 = auVar22._8_8_;
        ppppuStack_a0 = auVar22._0_8_;
        uStack_88 = auVar15._8_8_;
        uStack_90 = auVar15._0_8_;
        uStack_80 = CONCAT44(uStack_80._4_4_,*(undefined4 *)(param_1 + 0x98));
        puVar12 = &UNK_10f47d5d6;
        pppuVar13 = appuStack_c8;
        func_0x000108165c0c(pppuVar13,&UNK_10f47d5d6,0xb);
        ppuStack_70 = pppuVar13;
        puStack_68 = puVar12;
        func_0x00010816a53c(&ppuStack_70,&ppppuStack_a0);
        FUN_108394a04(&uStack_d0,appuStack_c8,param_1 + 0x50);
        FUN_108166068(appuStack_c8);
        uVar6 = uStack_d0;
        uStack_d0 = 0;
        func_0x000108114f18(param_1 + 0x48,uVar6);
        func_0x000106f47224(&uStack_d0);
        return uVar23;
      }
      puVar12 = puVar12 + 8;
    }
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10816a310);
  (*pcVar8)();
}



/* Entry: 10816a364; end: 10816a4bb;  */

void FUN_10816a364(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_180;
  undefined1 auStack_178 [40];
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [136];
  
  FUN_10818ccbc(&uStack_150);
  func_0x00010833b800(auStack_178,param_2);
  FUN_10818d01c(&uStack_150,param_1 + 0x18,auStack_178,1);
  FUN_1081660c4(auStack_c0,&uStack_150);
  FUN_10818cd40(&uStack_150);
  FUN_10833c3b4(param_2,param_1 + 0x18,0);
  FUN_10818c910(**(undefined8 **)(param_1 + 0x30),param_2,auStack_b8);
  uStack_11c = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_150 = 0;
  uStack_114 = 0x3f800000;
  uStack_10c = 0x40800000;
  lStack_148 = *(long *)(param_1 + 0x48);
  if (lStack_148 != 0) {
    piVar1 = (int *)(lStack_148 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_180 = 0;
  func_0x00010816a4c4(0);
  func_0x000106f47224(&uStack_180);
  FUN_1083762f4(&uStack_150,5);
  (**(code **)(*param_2 + 0xa8))(param_2,&uStack_150);
  FUN_108375e94(&uStack_150);
  FUN_10818cd40(auStack_c0);
  return;
}



/* Entry: 10816a4bc; end: 10816a4ef;  */

undefined8 FUN_10816a4bc(void)

{
  return 0;
}



/* Entry: 10816a4f0; end: 10816a593;  */

long * FUN_10816a4f0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if ((lVar1 != 0) && (FUN_1083931fc(), lVar1 == 8)) {
    lVar1 = *param_1;
    FUN_108165fe0();
    *(undefined8 *)(lVar1 + *(long *)(param_1[1] + 0x10)) = *param_2;
  }
  return param_1;
}



/* Entry: 10816a594; end: 10816a5df;  */

long * FUN_10816a594(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816a5e0; end: 10816a60f;  */

undefined8 * FUN_10816a5e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a297a0;
  FUN_10816a008(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816a610; end: 10816a613;  */

undefined8 * FUN_10816a610(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a297a0;
  FUN_10816a008(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816a614; end: 10816a627;  */

void FUN_10816a614(void)

{
  FUN_10816a5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816a628; end: 10816aa83;  */

void FUN_10816a628(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [40];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [40];
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  
  fVar11 = 1.0;
  if (1.0 <= *(float *)(param_1 + 0x7c)) {
    fVar11 = *(float *)(param_1 + 0x7c);
  }
  fVar11 = fVar11 * 3.1415927 + fVar11 * 3.1415927;
  if (*(float *)(param_1 + 0x78) == 0.0) {
    fVar9 = 3.4028235e+38;
  }
  else {
    fVar9 = (float)(double)(long)(fVar11 * 0.25 + 0.5);
  }
  fVar11 = fVar9 / fVar11;
  if (*(float *)(param_1 + 0x78) == 0.0) {
    fVar11 = 0.25;
  }
  uVar3 = (int)*(float *)(param_1 + 0x80) * 0x19660d + 0x3c6ef35f;
  uVar1 = 0x3c6ef35f;
  if (uVar3 != 0) {
    uVar1 = uVar3;
  }
  uVar4 = uVar1 * 0x19660d + 0x3c6ef35f;
  uVar3 = 0x3c6ef35f;
  if (uVar4 != 0) {
    uVar3 = uVar4;
  }
  uVar1 = (uVar1 & 0xffff) * 0x7689 + (uVar1 >> 0x10);
  fVar12 = (float)(((uVar1 >> 0x10 | uVar1 * 0x10000) + (uVar3 >> 0x10) + (uVar3 & 0xffff) * 18000)
                  % 0x65);
  fVar11 = *(float *)(param_1 + 0x74) * 0.017453292 * fVar11;
  fVar13 = (float)(int)fVar11;
  lVar7 = *(long *)(param_1 + 0x30);
  fVar10 = *(float *)(param_1 + 100);
  fVar8 = 20.0;
  if (fVar10 <= 1.0 && fVar10 <= 20.0) {
    fVar8 = 1.0;
  }
  if (1.0 < fVar10 && fVar10 <= 20.0) {
    fVar8 = fVar10;
  }
  if (*(float *)(lVar7 + 0xb4) != fVar8) {
    *(float *)(lVar7 + 0xb4) = fVar8;
    FUN_10818a7f4(lVar7,1);
    lVar7 = *(long *)(param_1 + 0x30);
  }
  fVar10 = ((fVar13 + 0.0) - (float)(int)((fVar13 + 0.0) / fVar9) * fVar9) + fVar12;
  fVar12 = ((fVar13 + 1.0) - (float)(int)((fVar13 + 1.0) / fVar9) * fVar9) + fVar12;
  fVar8 = *(float *)(param_1 + 0x68) * 0.01;
  fVar9 = 100.0;
  if (fVar8 <= 100.0) {
    fVar9 = fVar8;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (*(float *)(lVar7 + 0xb8) != fVar9) {
    *(float *)(lVar7 + 0xb8) = fVar9;
    FUN_10818a7f4(lVar7,1);
    lVar7 = *(long *)(param_1 + 0x30);
  }
  fVar11 = fVar11 - fVar13;
  if ((*(float *)(lVar7 + 0xa8) != fVar10) || (*(float *)(lVar7 + 0xac) != fVar12)) {
    *(ulong *)(lVar7 + 0xa8) = CONCAT44(fVar12,fVar10);
    func_0x00010816aaac();
    lVar7 = *(long *)(param_1 + 0x30);
  }
  if (*(float *)(lVar7 + 0xb0) != fVar11) {
    *(float *)(lVar7 + 0xb0) = fVar11;
    func_0x00010816aaac();
    lVar7 = *(long *)(param_1 + 0x30);
  }
  func_0x00010816aa84((double)*(float *)(param_1 + 0x4c) + 0.5);
  iVar6 = 1;
  if (extraout_w8 != 2) {
    iVar6 = 2;
  }
  iVar2 = 0;
  if (extraout_w8 != 1) {
    iVar2 = iVar6;
  }
  if (*(int *)(lVar7 + 0xa0) != iVar2) {
    *(int *)(lVar7 + 0xa0) = iVar2;
    func_0x00010816aaac();
    lVar7 = *(long *)(param_1 + 0x30);
  }
  func_0x00010816aa84((double)*(float *)(param_1 + 0x48) + 0.5);
  if (extraout_w8_00 - 1U < 4) {
    iVar6 = *(int *)(&UNK_10df04730 + (ulong)(extraout_w8_00 - 1U) * 4);
  }
  else {
    iVar6 = 3;
  }
  if (*(int *)(lVar7 + 0xa4) != iVar6) {
    *(int *)(lVar7 + 0xa4) = iVar6;
    func_0x00010816aaac();
    lVar7 = *(long *)(param_1 + 0x30);
  }
  func_0x00010816aa84((double)*(float *)(param_1 + 0x54) + 0.5);
  if (extraout_w8_01 == 1) {
    fVar9 = *(float *)(param_1 + 0x58);
    fVar11 = fVar9;
  }
  else {
    fVar11 = *(float *)(param_1 + 0x5c);
    fVar9 = *(float *)(param_1 + 0x60);
  }
  FUN_10814bdfc(auStack_c8,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  fVar8 = 10000.0;
  fVar10 = fVar8;
  if (fVar11 <= 10000.0) {
    fVar10 = fVar11;
  }
  if (fVar10 <= 1.0) {
    fVar10 = 1.0;
  }
  fVar11 = fVar8;
  if (fVar9 <= 10000.0) {
    fVar11 = fVar9;
  }
  func_0x00010815f6c0(auStack_f0,fVar10 * 0.01,fVar11 * 0.01);
  FUN_1081600e0(auStack_a0,auStack_c8,auStack_f0);
  func_0x00010815f69c(&uStack_118,*(undefined4 *)(param_1 + 0x50));
  FUN_1081600e0(auStack_78,auStack_a0,&uStack_118);
  func_0x00010815f6c0(auStack_140,0x42800000,0x42800000);
  FUN_1081600e0(&uStack_168,auStack_78,auStack_140);
  uVar5 = lVar7 + 0x50;
  func_0x000108363bec(uVar5,&uStack_168);
  if ((uVar5 & 1) == 0) {
    *(undefined8 *)(lVar7 + 0x58) = uStack_160;
    *(undefined8 *)(lVar7 + 0x50) = uStack_168;
    *(undefined8 *)(lVar7 + 0x68) = uStack_150;
    *(undefined8 *)(lVar7 + 0x60) = uStack_158;
    *(undefined8 *)(lVar7 + 0x70) = uStack_148;
    func_0x00010816aaac();
  }
  lVar7 = *(long *)(param_1 + 0x30);
  fVar11 = *(float *)(param_1 + 0x6c);
  if (fVar11 <= 10.0 && fVar11 <= 10000.0) {
    fVar8 = 10.0;
  }
  if (10.0 < fVar11 && fVar11 <= 10000.0) {
    fVar8 = fVar11;
  }
  FUN_10814bdfc(auStack_a0,*(float *)(param_1 + 0x40) * -0.01,*(float *)(param_1 + 0x44) * -0.01);
  func_0x00010815f69c(auStack_c8,-*(float *)(param_1 + 0x70));
  FUN_1081600e0(auStack_78,auStack_a0,auStack_c8);
  func_0x00010815f6c0(auStack_f0,100.0 / fVar8,100.0 / fVar8);
  FUN_1081600e0(&uStack_118,auStack_78,auStack_f0);
  uVar5 = lVar7 + 0x78;
  func_0x000108363bec(uVar5,&uStack_118);
  if ((uVar5 & 1) == 0) {
    *(undefined8 *)(lVar7 + 0x80) = uStack_110;
    *(undefined8 *)(lVar7 + 0x78) = uStack_118;
    *(undefined8 *)(lVar7 + 0x90) = uStack_100;
    *(undefined8 *)(lVar7 + 0x88) = uStack_108;
    *(undefined8 *)(lVar7 + 0x98) = uStack_f8;
    func_0x00010816aaac();
  }
  return;
}



/* Entry: 10816aa84; end: 10816aad3;  */

float FUN_10816aa84(double param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm((float)(double)(long)param_1,0x4effffff);
  if (fVar1 <= -2.1474835e+09) {
    fVar1 = -2.1474835e+09;
  }
  return fVar1;
}



/* Entry: 10816aad4; end: 10816ad03;  */

void FUN_10816aad4(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar6 = *param_2;
  *param_1 = 0;
  plVar5 = (long *)*param_4;
  *param_4 = 0;
  plVar4 = (long *)0x50;
  plStack_80 = plVar5;
  __Znwm();
  plStack_80 = (long *)0x0;
  *(undefined4 *)(plVar4 + 1) = 1;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[2] = 0;
  *(undefined2 *)(plVar4 + 5) = 0;
  *plVar4 = (long)&PTR_FUN_110a297d8;
  plStack_70 = plVar5;
  FUN_10818c15c(plVar4 + 6);
  plStack_70 = (long *)0x0;
  lStack_50 = plVar4[6];
  if (lStack_50 != 0) {
    piVar1 = (int *)(lStack_50 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_48 = plVar5;
  FUN_10818bb98(plVar4 + 7,&plStack_48,&lStack_50);
  FUN_108159600(&lStack_50);
  FUN_108154cb4(&plStack_48);
  plVar4[8] = 0x3f80000000000000;
  *(undefined4 *)(plVar4 + 9) = 0;
  plStack_68 = param_3;
  lStack_60 = lVar6;
  plStack_58 = plVar4;
  FUN_108164708(&plStack_68,0);
  FUN_108164708();
  FUN_108164708();
  plStack_78 = plVar4;
  FUN_108154cb4(&plStack_70);
  FUN_108154cb4(&plStack_80);
  FUN_108168e24(param_1,plVar4 + 7);
  plStack_78 = (long *)0x0;
  if ((plVar4[2] == plVar4[3]) && ((*(byte *)((long)plVar4 + 0x29) & 1) == 0)) {
    plStack_48 = plVar4;
    (**(code **)(*plVar4 + 0x18))(0,plVar4);
  }
  else {
    plStack_48 = (long *)0x0;
    plStack_68 = plVar4;
    FUN_108155570(*(undefined8 *)(lVar6 + 0x70),&plStack_68);
    FUN_108155920(&plStack_68);
  }
  FUN_10816ad04(&plStack_48);
  FUN_10816ad04(&plStack_78);
  return;
}



/* Entry: 10816ad04; end: 10816ad53;  */

long * FUN_10816ad04(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816ad54; end: 10816ad83;  */

undefined8 * FUN_10816ad54(undefined8 *param_1)

{
  FUN_108154cb4(param_1 + 7);
  FUN_108158f6c(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816ad84; end: 10816ad97;  */

void FUN_10816ad84(void)

{
  FUN_10816ad54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816ad98; end: 10816ae4b;  */

void FUN_10816ad98(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  float fVar5;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  uVar3 = (ulong)*(float *)(param_1 + 0x44);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  if (2 < uVar3) {
    uVar3 = 3;
  }
  fVar5 = *(float *)(param_1 + 0x40) * 0.3;
  uStack_38 = CONCAT44((float)((ulong)*(undefined8 *)(&UNK_10df04e50 + uVar3 * 8) >> 0x20) * fVar5,
                       (float)*(undefined8 *)(&UNK_10df04e50 + uVar3 * 8) * fVar5);
  func_0x000108158fec(*(undefined8 *)(param_1 + 0x30),&uStack_38);
  bVar1 = *(float *)(param_1 + 0x48) != 0.0;
  uStack_3c = 0;
  if (!bVar1) {
    uStack_3c = 3;
  }
  func_0x000108158e10(*(undefined8 *)(param_1 + 0x30),&uStack_3c);
  lVar2 = *(long *)(param_1 + 0x38);
  uVar4 = (uint)bVar1;
  if (*(uint *)(lVar2 + 0x40) != uVar4) {
    *(uint *)(lVar2 + 0x40) = uVar4;
    FUN_10818a7f4(lVar2,1);
  }
  return;
}



/* Entry: 10816ae4c; end: 10816ae8b;  */

void FUN_10816ae4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined1 auStack_28 [8];
  
  func_0x00010816b878();
  FUN_10816ae8c(extraout_x8,param_2,extraout_x9,auStack_28,0);
  func_0x00010816b818();
  return;
}



/* Entry: 10816ae8c; end: 10816b10b;  */

void FUN_10816ae8c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  uStack_70 = 0;
  plVar1 = (long *)0x68;
  __Znwm();
  *(undefined4 *)(plVar1 + 1) = 1;
  plVar1[2] = 0;
  plVar1[3] = 0;
  plVar1[4] = 0;
  *(undefined2 *)(plVar1 + 5) = 0;
  *plVar1 = (long)&PTR_DAT_110a29890;
  plVar2 = plVar1;
  FUN_10816798c(plVar1 + 6);
  *plVar1 = (long)&PTR_SUB_110a29828;
  *(undefined4 *)(plVar1 + 7) = param_5;
  plVar1[8] = 0;
  plVar1[9] = 0;
  plVar1[10] = 0;
  plVar1[0xc] = 0x3f80000000000000;
  plVar1[0xb] = 0x42c80000;
  func_0x00010816b840();
  FUN_108154e4c();
  plVar3 = plVar1;
  FUN_108163f1c(plVar1,param_3,plVar2,plVar1 + 8);
  func_0x00010816b840();
  FUN_108154e4c();
  FUN_108161330(plVar1,param_3,plVar3,plVar1 + 0xb);
  func_0x00010816b840();
  FUN_108154e4c();
  func_0x00010816b820();
  func_0x00010816b840();
  FUN_108154e4c();
  func_0x00010816b820();
  func_0x00010816b840();
  FUN_108154e4c();
  func_0x00010816b820();
  plStack_60 = plVar1;
  FUN_10816040c(plVar1 + 2);
  FUN_1081678f8(&uStack_70,plVar1 + 6);
  plStack_60 = (long *)0x0;
  if ((plVar1[2] == plVar1[3]) && ((*(byte *)((long)plVar1 + 0x29) & 1) == 0)) {
    plStack_68 = plVar1;
    (**(code **)(*plVar1 + 0x18))(0,plVar1);
  }
  else {
    plStack_68 = (long *)0x0;
    plStack_58 = plVar1;
    FUN_108155570(*(undefined8 *)(param_3 + 0x70),&plStack_58);
    FUN_108155920(&plStack_58);
  }
  FUN_10816b14c(&plStack_68);
  FUN_10816b14c(&plStack_60);
  uStack_80 = uStack_70;
  uStack_78 = *param_4;
  *param_4 = 0;
  uStack_70 = 0;
  FUN_10818bb98(param_1,&uStack_78,&uStack_80);
  FUN_108159600(&uStack_80);
  func_0x00010816b818();
  FUN_1081678ac(&uStack_70);
  return;
}



/* Entry: 10816b10c; end: 10816b14b;  */

void FUN_10816b10c(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined1 auStack_28 [8];
  
  func_0x00010816b878();
  FUN_10816ae8c(extraout_x8,param_2,extraout_x9,auStack_28,1);
  func_0x00010816b818();
  return;
}



/* Entry: 10816b14c; end: 10816b19b;  */

long * FUN_10816b14c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816b19c; end: 10816b1f3;  */

undefined8 * FUN_10816b19c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29890;
  FUN_1081678ac(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816b1f4; end: 10816b207;  */

void FUN_10816b1f4(void)

{
  func_0x00010816b1cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816b208; end: 10816b6b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10816b208(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  ulong uStack_1e0;
  ulong auStack_1d8 [2];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  ulong auStack_1b0 [2];
  undefined1 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined4 uStack_180;
  undefined8 uStack_17c;
  undefined8 uStack_174;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined8 uStack_144;
  undefined4 uStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined1 auStack_120 [8];
  ulong uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float fStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double dStack_c8;
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
  
  fVar10 = *(float *)(param_1 + 0x5c) * 0.3;
  fVar7 = *(float *)(param_1 + 0x58) / 100.0;
  uVar9 = 0x3f800000;
  fVar6 = 1.0;
  if (fVar7 <= 1.0) {
    fVar6 = fVar7;
  }
  fVar7 = 0.0;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar8 = *(float *)(param_1 + 0x60);
  fVar3 = fVar8 / 100.0;
  fVar5 = 1.0;
  if (fVar3 <= 1.0) {
    fVar5 = fVar3;
  }
  FUN_10816385c(param_1 + 0x40);
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_78 = 0x3f800000;
  if (*(int *)(param_1 + 0x38) == 1) {
    fVar4 = (float)NEON_fminnm((float)(double)(long)(*(float *)(param_1 + 100) + 0.5),0x4effffff);
    if (fVar4 <= -2.1474835e+09) {
      fVar4 = -2.1474835e+09;
    }
    if ((int)fVar4 == 1) {
      uStack_fc = 0x3f80000000000000;
      uStack_e4 = 0;
      uStack_e0 = 0x3f800000;
      uStack_104 = 0;
      fStack_100 = 0.0;
      uStack_10c = 0;
      uStack_108 = 0;
      fStack_ec = 0.0;
      uStack_e8 = 0;
      uStack_f4 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      uStack_110 = 0x3f800000;
      uStack_cc = 0;
      dStack_c8 = (double)NEON_fmov(0xbf800000,4);
      dStack_c8 = -dStack_c8;
      FUN_10816b6b4(&uStack_c0,&uStack_110);
    }
  }
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_f4 = 0;
  uStack_fc = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_d4 = 0;
  dStack_c8 = (double)(ulong)(uint)(fVar7 * fVar6);
  fStack_100 = fVar3;
  fStack_ec = fVar8;
  uStack_d8 = uVar9;
  if (fVar5 <= 0.0 || fVar10 <= 0.0) {
    func_0x00010816b6c0(&uStack_c0,&uStack_110);
  }
  func_0x00010816b850(auStack_120,&uStack_c0);
  uStack_128 = 0;
  func_0x00010816b86c();
  FUN_1083b07f0(&uStack_118,auStack_120,&uStack_128,&uStack_180);
  FUN_10811e834(&uStack_128);
  FUN_108115b2c(auStack_120);
  if (0.0 < fVar10) {
    func_0x00010816b860();
    func_0x00010816b86c();
    FUN_108167b54(auStack_1b0,fVar10,fVar10,auStack_130,&uStack_180);
    uVar1 = uStack_118;
    uStack_118 = auStack_1b0[0];
    auStack_1b0[0] = 0;
    func_0x00010816b7c4(uVar1);
    func_0x00010816b858();
    FUN_10811e834(auStack_130);
  }
  if (0.0 < fVar5 && 0.0 < fVar10) {
    _powf(fVar5,0x3e4ccccd);
    fVar6 = 1.0 / (1.0 - fVar5);
    uStack_180 = 0x3f800000;
    uStack_174 = 0;
    uStack_17c = 0;
    uStack_16c = 0x3f80000000000000;
    uStack_15c = 0;
    uStack_164 = 0;
    uStack_154 = 0x3f80000000000000;
    uStack_144 = 0;
    uStack_14c = 0;
    uStack_13c = 0;
    fStack_138 = 1e+06;
    if (fVar6 <= 1e+06) {
      fStack_138 = fVar6;
    }
    uStack_134 = 0;
    func_0x00010816b850(auStack_190,&uStack_180);
    func_0x00010816b860();
    auStack_1b0[0] = auStack_1b0[0] & 0xffffffffffffff00;
    uStack_1a0 = 0;
    FUN_1083b07f0(auStack_188,auStack_190,auStack_198,auStack_1b0);
    func_0x00010816b82c();
    func_0x00010816b7c4();
    func_0x00010816b7fc();
    FUN_10811e834(auStack_198);
    FUN_108115b2c(auStack_190);
    func_0x00010816b850(auStack_1b8,&uStack_110);
    func_0x00010816b860();
    auStack_1b0[0] = auStack_1b0[0] & 0xffffffffffffff00;
    uStack_1a0 = 0;
    FUN_1083b07f0(auStack_188,auStack_1b8,auStack_1c0,auStack_1b0);
    func_0x00010816b82c();
    func_0x00010816b7c4();
    func_0x00010816b7fc();
    FUN_10811e834(auStack_1c0);
    FUN_108115b2c(auStack_1b8);
  }
  auStack_1b0[0] = 0;
  uStack_1e0 = 0;
  if (*(int *)(param_1 + 0x38) == 1) {
    func_0x00010816b860();
    auStack_1d8[1] = 0;
    func_0x00010816b86c();
    FUN_1083aebac(auStack_188,6,auStack_1c8,auStack_1d8 + 1,&uStack_180);
    func_0x00010816b82c();
    func_0x00010816b7c4();
    func_0x00010816b7fc();
    FUN_10811e834(auStack_1d8 + 1);
    FUN_10811e834(auStack_1c8);
    FUN_10816b6c8(auStack_1b0,&uStack_118);
    uStack_1e0 = auStack_1b0[0];
  }
  auStack_1d8[0] = uStack_118;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_118 = 0;
  auStack_1b0[0] = 0;
  func_0x00010816b86c();
  FUN_10816b714(auStack_188,auStack_1d8,&uStack_1e0,&uStack_180);
  FUN_108167ba8(uVar2,auStack_188);
  func_0x00010816b7fc();
  FUN_10811e834(&uStack_1e0);
  func_0x00010816b848();
  func_0x00010816b858();
  FUN_10811e834(&uStack_118);
  return;
}



/* Entry: 10816b6b4; end: 10816b6c7;  */

/* WARNING: Removing unreachable block (ram,0x0001083ac2b8) */

void FUN_10816b6b4(float param_1,float *param_2,long param_3)

{
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  float *unaff_x19;
  float fVar8;
  float fVar9;
  float fVar10;
  float afStack_68 [20];
  long lStack_18;
  
  uVar6 = 0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  for (uVar2 = 0; uVar2 < 0x14; uVar2 = uVar2 + 5) {
    pfVar1 = param_2 + uVar2;
    lVar3 = (ulong)uVar6 << 0x20;
    pfVar5 = (float *)(param_3 + 0x28);
    pfVar7 = afStack_68 + (int)uVar6;
    for (lVar4 = -1; lVar4 != -5; lVar4 = lVar4 + -1) {
      *pfVar7 = pfVar1[1] * pfVar5[-5] + pfVar5[-10] * *pfVar1 + *pfVar5 * pfVar1[2] +
                pfVar5[5] * pfVar1[3];
      lVar3 = lVar3 + 0x100000000;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar7 + 1;
    }
    param_1 = pfVar1[1] * *(float *)(param_3 + 0x24) + *(float *)(param_3 + 0x10) * *pfVar1 +
              *(float *)(param_3 + 0x38) * pfVar1[2] + *(float *)(param_3 + 0x4c) * pfVar1[3] +
              pfVar1[4];
    uVar6 = uVar6 + 5;
    *(float *)((long)afStack_68 + (lVar3 >> 0x1e)) = param_1;
  }
  if (afStack_68 != param_2) {
    _memmove(param_2,afStack_68,0x50);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    func_0x0001083ac444();
    fVar8 = 1.0 - param_1;
    fVar9 = fVar8 * 0.213;
    fVar10 = fVar8 * 0.715;
    fVar8 = fVar8 * 0.072;
    *unaff_x19 = param_1 + fVar9;
    unaff_x19[1] = fVar10;
    unaff_x19[2] = fVar8;
    unaff_x19[5] = fVar9;
    unaff_x19[6] = param_1 + fVar10;
    unaff_x19[7] = fVar8;
    unaff_x19[10] = fVar9;
    unaff_x19[0xb] = fVar10;
    unaff_x19[0xc] = param_1 + fVar8;
    unaff_x19[0x12] = 1.0;
    return;
  }
  return;
}



/* Entry: 10816b6c8; end: 10816b713;  */

void FUN_10816b6c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_108167c10();
  FUN_108167c3c(param_2,uVar1);
  func_0x00010816b848();
  return;
}



/* Entry: 10816b714; end: 10816b7c3;  */

void FUN_10816b714(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long alStack_48 [3];
  
  alStack_48[2] = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_48[0] = *param_1;
  *param_1 = 0;
  alStack_48[1] = *param_2;
  *param_2 = 0;
  FUN_1083b4534(alStack_48,2);
  lVar6 = 8;
  do {
    FUN_10811e834((long)alStack_48 + lVar6);
    lVar6 = lVar6 + -8;
  } while (lVar6 != -8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_48[2]) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = 8;
  do {
    plVar5 = (long *)((long)alStack_48 + lVar6);
    FUN_10811e834();
    lVar6 = lVar6 + -8;
  } while (lVar6 != -8);
  func_0x00010816b804();
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010816b7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10816b7c4; end: 10816b88b;  */

void FUN_10816b7c4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010816b7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10816b88c; end: 10816bb03;  */

void FUN_10816b88c(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  lVar6 = *param_2;
  *param_1 = 0;
  plVar5 = (long *)*param_4;
  *param_4 = 0;
  plVar4 = (long *)0x98;
  plStack_80 = plVar5;
  __Znwm();
  plStack_80 = (long *)0x0;
  *(undefined4 *)(plVar4 + 1) = 1;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[2] = 0;
  *(undefined2 *)(plVar4 + 5) = 0;
  *plVar4 = (long)&PTR_FUN_110a298c8;
  uStack_70 = 0;
  uStack_50 = 0;
  plStack_48 = plVar5;
  FUN_10818b814(plVar4 + 6,&plStack_48,&uStack_50);
  FUN_10816be5c(&uStack_50);
  FUN_108154cb4(&plStack_48);
  plVar4[7] = 0;
  *(undefined4 *)(plVar4 + 8) = 0;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plVar4[0xc] = 0;
  plVar4[0xb] = 0;
  plVar4[0xe] = 0;
  plVar4[0xd] = 0;
  *(undefined8 *)((long)plVar4 + 0x8c) = 0;
  *(undefined8 *)((long)plVar4 + 0x84) = 0;
  plVar4[0x10] = 0;
  plVar4[0xf] = 0;
  plStack_68 = param_3;
  lStack_60 = lVar6;
  plStack_58 = plVar4;
  FUN_1081662b4(&plStack_68,0);
  FUN_108166d68();
  FUN_1081662b4();
  FUN_108166d68();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  plStack_78 = plVar4;
  FUN_108154cb4(&uStack_70);
  FUN_108154cb4(&plStack_80);
  if (plVar4[6] != 0) {
    piVar1 = (int *)(plVar4[6] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_68 = (long *)0x0;
  FUN_108154d4c(param_1);
  FUN_108154cb4(&plStack_68);
  plStack_78 = (long *)0x0;
  if ((plVar4[2] == plVar4[3]) && ((*(byte *)((long)plVar4 + 0x29) & 1) == 0)) {
    plStack_48 = plVar4;
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  else {
    plStack_48 = (long *)0x0;
    plStack_68 = plVar4;
    FUN_108155570(*(undefined8 *)(lVar6 + 0x70),&plStack_68);
    FUN_108155920(&plStack_68);
  }
  FUN_10816bb04(&plStack_48);
  FUN_10816bb04(&plStack_78);
  return;
}



/* Entry: 10816bb04; end: 10816bb43;  */

void FUN_10816bb04(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x00010816c40c();
  if (param_1 != 0) {
    do {
      func_0x00010816c454();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010816c430();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 10816bb44; end: 10816bb83;  */

undefined8 * FUN_10816bb44(undefined8 *param_1)

{
  func_0x0001056d1ce4(param_1 + 0xc);
  func_0x0001056d1ce4(param_1 + 9);
  FUN_10816be9c(param_1 + 7);
  FUN_10816bef0(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}


