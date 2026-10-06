/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a9d76ec; end: 10a9d76fb;  */

void FUN_10a9d76ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9d76f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9d76fc; end: 10a9d78bb;  */

void FUN_10a9d76fc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  plVar5 = (long *)0x68;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c366c8;
  plVar5[3] = (long)&PTR_FUN_110c35fb8;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0xc] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  func_0x000107c2b054(plVar5 + 6,"en_US");
  func_0x000107c2b054(plVar5 + 9,&DAT_10f6889b6);
  plVar5[0xc] = 0x42c8000000000001;
  ppuStack_68 = &PTR_DAT_110c36000;
  plStack_60 = plVar5 + 3;
  plStack_58 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_60,&ppuStack_68,0,0);
  plVar5 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a9d78bc; end: 10a9d79f3;  */

void FUN_10a9d78bc(undefined8 param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  float fStack_18;
  float fStack_14;
  
  uStack_50 = 0x3f800000;
  uStack_44 = 0;
  uStack_4c = 0;
  uStack_3c = 0x3f800000;
  uStack_38 = 0;
  uStack_30 = 0;
  fVar2 = *(float *)(param_2 + 1) * 0.0;
  fVar1 = (float)*param_2;
  fVar4 = fVar1 * 0.0;
  fVar3 = (float)((ulong)*param_2 >> 0x20);
  fVar5 = fVar3 * 0.0;
  uVar6 = NEON_rev64(CONCAT44(fVar5,fVar4),4);
  fVar4 = fVar4 + fVar5;
  uStack_20 = CONCAT44(fVar3 + (float)((ulong)uVar6 >> 0x20) + fVar2 + 0.0,
                       fVar1 + (float)uVar6 + fVar2 + 0.0);
  fStack_18 = *(float *)(param_2 + 1) + fVar4 + 0.0;
  fStack_14 = fVar4 + fVar2 + 1.0;
  uStack_28 = 0x3f800000;
  fVar2 = *param_3;
  fVar1 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fStack_90 = (fVar1 * fVar1 + fVar3 * fVar3) * -2.0 + 1.0;
  fStack_8c = fVar2 * fVar1 + fVar3 * fVar4;
  fStack_8c = fStack_8c + fStack_8c;
  fStack_88 = fVar2 * fVar3 - fVar1 * fVar4;
  fStack_88 = fStack_88 + fStack_88;
  fStack_80 = fVar2 * fVar1 - fVar3 * fVar4;
  fStack_80 = fStack_80 + fStack_80;
  fStack_7c = (fVar2 * fVar2 + fVar3 * fVar3) * -2.0 + 1.0;
  fStack_78 = fVar1 * fVar3 + fVar2 * fVar4;
  fStack_78 = fStack_78 + fStack_78;
  fStack_70 = fVar2 * fVar3 + fVar1 * fVar4;
  fStack_70 = fStack_70 + fStack_70;
  fStack_6c = fVar1 * fVar3 - fVar2 * fVar4;
  fStack_6c = fStack_6c + fStack_6c;
  uStack_84 = 0;
  uStack_74 = 0;
  fStack_68 = (fVar2 * fVar2 + fVar1 * fVar1) * -2.0 + 1.0;
  uStack_5c = 0;
  uStack_64 = 0;
  uStack_54 = 0x3f800000;
  func_0x000109519fd0(param_1,&uStack_50,&fStack_90);
  return;
}



/* Entry: 10a9d79f4; end: 10a9d7f8f;  */

void FUN_10a9d79f4(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  plVar9 = param_1 + 1;
  *plVar9 = 0;
  param_1[2] = 0;
  *param_1 = (long)plVar9;
  lVar5 = param_3 + 0xd48;
  FUN_10a5aeb74(lVar5,&PTR_DAT_110bd9f10);
  param_3 = param_3 + 0xd48;
  FUN_10a5aeb74(param_3,&PTR_DAT_110be74a8);
  lVar13 = *(long *)(param_3 + 8);
  do {
    if (lVar13 == param_3) {
      return;
    }
    lVar14 = *(long *)(lVar13 + 0x28);
    if ((*(ushort *)(lVar14 + 0x180) & 0x17) == 0) {
      lVar17 = *(long *)(lVar14 + 0x168);
      plStack_c0 = (long *)0x0;
      plStack_b8 = (long *)0x0;
      uStack_b0 = 0;
      plStack_a0 = (long *)0x0;
      lStack_a8 = 0;
      plStack_90 = (long *)0x0;
      plStack_98 = (long *)0x0;
      uStack_88 = 0;
      func_0x00010a0d77bc(&plStack_f0,lVar17);
      plStack_b8 = plStack_e8;
      plStack_c0 = plStack_f0;
      lVar10 = *(long *)(lVar14 + 0x1f0);
      plVar6 = *(long **)(lVar14 + 0x1f8);
      uStack_b0 = 0;
      if (plVar6 != (long *)0x0) {
        plVar12 = plVar6 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_d0 = lVar10;
      plStack_c8 = plVar6;
      lStack_a8 = lVar14;
      if (lVar10 != 0) {
        plStack_f0 = (long *)0x0;
        plStack_e8 = (long *)0x0;
        uStack_e0 = 0;
        for (lVar15 = *(long *)(lVar5 + 8); lVar15 != lVar5; lVar15 = *(long *)(lVar15 + 8)) {
          lStack_80 = *(long *)(lVar15 + 0x28);
          if (lStack_80 != 0) {
            puStack_78 = &UNK_10f63946e;
            uStack_70 = 0x4f;
            if (*(long **)(lStack_80 + 0x230) == *(long **)(lStack_80 + 0x238)) {
              FUN_10a0edfc4(&puStack_78);
              goto LAB_10a9d7f30;
            }
            if (*(long *)(**(long **)(lStack_80 + 0x230) + 0x28) == lVar10) {
              FUN_10a3ae750(&plStack_f0,&lStack_80);
            }
          }
        }
        if (plStack_98 != (long *)0x0) {
          __ZdlPv();
        }
        plStack_90 = plStack_e8;
        plStack_98 = plStack_f0;
        uStack_88 = uStack_e0;
      }
      if (plVar6 != (long *)0x0) {
        plVar12 = plVar6 + 1;
        do {
          lVar10 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      for (lVar10 = *(long *)(lVar17 + 0x158); plVar6 = plStack_a0, lVar10 != lVar17 + 0x150;
          lVar10 = *(long *)(lVar10 + 8)) {
        if (*(long *)(lVar10 + 0x10) != 0) {
          plVar6 = (long *)(*(long *)(lVar10 + 0x10) + 0xb0);
          (**(code **)(*plVar6 + 0x18))(plVar6,0xaac56ac80c46e22b);
          if (plVar6 != (long *)0x0) {
            if ((plStack_98 == plStack_90) && (plVar6 = plStack_a0, (bRam000000011330a9e8 & 1) != 0)
               ) {
              plVar6 = (long *)(lVar17 + 0x168);
              if (*(char *)(lVar17 + 0x17f) < '\0') {
                plVar6 = (long *)*plVar6;
              }
              func_0x00010ae06f08(0,1,&UNK_10f688cba,&UNK_10f688d0d,0x42,&UNK_10f688dae,in_x6,in_x7,
                                  plVar6);
              plVar6 = plStack_a0;
            }
            break;
          }
        }
      }
      plStack_a0 = plVar6;
      lVar10 = *(long *)(lVar14 + 0x40);
      lVar14 = *(long *)(lVar14 + 0x48);
      plVar6 = (long *)*plVar9;
      plVar12 = plVar9;
      plVar16 = plVar9;
      if ((long *)*plVar9 != (long *)0x0) {
        do {
          while (plVar12 = plVar6, lVar17 = plVar12[4], lVar10 != lVar17) {
            if (lVar17 <= lVar10) {
              if (lVar17 < lVar10) goto LAB_10a9d7ca4;
              goto LAB_10a9d7d14;
            }
LAB_10a9d7c88:
            plVar6 = (long *)*plVar12;
            plVar16 = plVar12;
            if ((long *)*plVar12 == (long *)0x0) goto LAB_10a9d7cb0;
          }
          lVar17 = plVar12[5];
          if (lVar14 < lVar17) goto LAB_10a9d7c88;
          if (lVar17 == lVar14 || lVar14 <= lVar17) goto LAB_10a9d7d14;
LAB_10a9d7ca4:
          plVar6 = (long *)plVar12[1];
        } while ((long *)plVar12[1] != (long *)0x0);
        plVar16 = plVar12 + 1;
      }
LAB_10a9d7cb0:
      plVar7 = (long *)0x70;
      __Znwm();
      plVar7[4] = lVar10;
      plVar7[5] = lVar14;
      plVar7[7] = 0;
      plVar7[6] = 0;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plVar7[0xb] = 0;
      plVar7[10] = 0;
      plVar7[0xd] = 0;
      plVar7[0xc] = 0;
      *plVar7 = 0;
      plVar7[1] = 0;
      plVar7[2] = (long)plVar12;
      *plVar16 = (long)plVar7;
      plVar6 = plVar7;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        plVar6 = (long *)*plVar16;
      }
      func_0x000107c2b058(param_1[1],plVar6);
      param_1[2] = param_1[2] + 1;
      plVar12 = plVar7;
LAB_10a9d7d14:
      if (plStack_b8 != (long *)0x0) {
        plVar6 = plStack_b8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar6 = (long *)plVar12[7];
      plVar12[7] = (long)plStack_b8;
      plVar12[6] = (long)plStack_c0;
      if (plVar6 != (long *)0x0) {
        plVar16 = plVar6 + 1;
        do {
          lVar14 = *plVar16;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar16 = plStack_90;
      plVar6 = plStack_98;
      plVar12[9] = lStack_a8;
      plVar12[8] = CONCAT44(uStack_ac,uStack_b0);
      plVar12[10] = (long)plStack_a0;
      if ((long **)(plVar12 + 6) != &plStack_c0) {
        plVar7 = plVar12 + 0xb;
        lVar14 = *plVar7;
        uVar18 = (long)plStack_90 - (long)plStack_98;
        uVar8 = plVar12[0xd];
        if (uVar8 - lVar14 < uVar18) {
          if (lVar14 != 0) {
            plVar12[0xc] = lVar14;
            __ZdlPv(lVar14);
            uVar8 = 0;
            *plVar7 = 0;
            plVar12[0xc] = 0;
            plVar12[0xd] = 0;
          }
          uVar11 = (long)uVar18 >> 3;
          if (uVar11 >> 0x3d != 0) {
            FUN_10a3ae814();
LAB_10a9d7f30:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9d7f34);
            (*pcVar4)();
          }
          uVar1 = (long)uVar8 >> 2;
          if ((ulong)((long)uVar8 >> 2) <= uVar11) {
            uVar1 = uVar11;
          }
          if (0x7ffffffffffffff7 < uVar8) {
            uVar1 = 0x1fffffffffffffff;
          }
          FUN_10a439044(plVar7,uVar1);
          lVar14 = plVar12[0xc];
          if (plVar16 != plVar6) {
            _memmove(lVar14,plVar6,uVar18);
          }
          plVar12[0xc] = lVar14 + uVar18;
          plVar6 = plStack_98;
        }
        else {
          lVar10 = plVar12[0xc];
          uVar8 = lVar10 - lVar14;
          if (uVar8 < uVar18) {
            if (lVar10 != lVar14) {
              _memmove(lVar14,plStack_98,uVar8);
              lVar10 = plVar12[0xc];
            }
            lVar14 = (long)plVar16 - ((long)plVar6 + uVar8);
            if (lVar14 != 0) {
              _memmove(lVar10,(long)plVar6 + uVar8,lVar14);
            }
            plVar12[0xc] = lVar10 + lVar14;
          }
          else {
            if (plStack_90 != plStack_98) {
              _memmove(lVar14,plStack_98,uVar18);
            }
            plVar12[0xc] = lVar14 + uVar18;
          }
        }
      }
      if (plVar6 != (long *)0x0) {
        plStack_90 = plVar6;
        __ZdlPv(plVar6);
      }
      plVar6 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar12 = plStack_b8 + 1;
        do {
          lVar14 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    lVar13 = *(long *)(lVar13 + 8);
  } while( true );
}



/* Entry: 10a9d7f90; end: 10a9d7fbf;  */

long FUN_10a9d7f90(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a9d7fc0; end: 10a9d8533;  */

void FUN_10a9d7fc0(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,long *param_7,ulong *param_8,ulong *param_9,
                  ulong *param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  float fStack_220;
  float fStack_21c;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  uint uStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 uStack_1d0;
  undefined1 uStack_1cf;
  undefined2 uStack_1ce;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  long lStack_1a0;
  long lStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  uint uStack_174;
  uint uStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long lStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  undefined1 uStack_110;
  uint uStack_104;
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
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  if ((int)param_7[2] != 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      plVar11 = (long *)(*param_7 + 0x168);
      if (*(char *)(*param_7 + 0x17f) < '\0') {
        plVar11 = (long *)*plVar11;
      }
      FUN_10a0ffca4(&uStack_1c0);
      puVar1 = uStack_1c0;
      if (-1 < uStack_1ac) {
        puVar1 = &uStack_1c0;
      }
      func_0x00010ae06f08(0,1,&UNK_10f688cba,&UNK_10f688e06,0xcf,&UNK_10f688f0a,param_12,param_13,
                          plVar11,puVar1);
      if (uStack_1ac._3_1_ < '\0') {
        __ZdlPv(uStack_1c0);
      }
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x17) = 0;
    return;
  }
  lVar7 = *param_7;
  if (((long *)param_7[5] == (long *)param_7[6]) || (lVar9 = *(long *)param_7[5], lVar9 == 0)) {
    uVar13 = *(undefined8 *)(lVar7 + 0x140);
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x168);
    uVar13 = *(undefined8 *)(lVar7 + 0x140);
    if (lVar9 != 0 && lVar9 != lVar7) {
      do {
        lVar7 = *(long *)(lVar7 + 0x188);
      } while (lVar7 != lVar9 && lVar7 != 0);
      if (lVar7 != 0) {
        uVar14 = *(undefined8 *)(lVar9 + 0x140);
        FUN_10a2cd058(uVar14);
        uStack_c0 = CONCAT44(param_3,param_2);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,param_4);
        func_0x00010a2cd08c(uVar14);
        uStack_240 = CONCAT44(param_3,param_2);
        uStack_238 = CONCAT44(param_5,param_4);
        FUN_10a9d78bc(&uStack_1c0,&uStack_c0,&uStack_240);
        FUN_10a2cd058(uVar13);
        uStack_7c = param_2;
        uStack_78 = param_3;
        uStack_74 = param_4;
        func_0x00010a2cd08c(uVar13);
        uStack_c0 = CONCAT44(param_3,param_2);
        uStack_b8 = CONCAT44(param_5,param_4);
        FUN_10a9d78bc(&uStack_240,&uStack_7c,&uStack_c0);
        uStack_104 = 1;
        func_0x0001094f5708(&uStack_c0,&uStack_1c0);
        func_0x000109519fd0(&uStack_100,&uStack_c0,&uStack_240);
        goto LAB_10a9d8194;
      }
    }
  }
  uStack_104 = 0;
  FUN_10a2cd058(uVar13);
  uStack_240 = CONCAT44(param_3,param_2);
  uStack_238 = CONCAT44(uStack_238._4_4_,param_4);
  func_0x00010a2cd08c(uVar13);
  uStack_1c0 = (undefined8 *)CONCAT44(param_3,param_2);
  uStack_1b8 = param_4;
  uStack_1b4 = param_5;
  FUN_10a9d78bc(&uStack_100,&uStack_240,&uStack_1c0);
LAB_10a9d8194:
  lVar7 = *param_7;
  uStack_b8 = *(undefined8 *)(lVar7 + 0x138);
  uStack_c0 = *(ulong *)(lVar7 + 0x130);
  uVar8 = *(ulong *)(lVar7 + 0x130);
  uStack_1c0 = (undefined8 *)*param_10;
  uVar10 = *param_10;
  uStack_1b8 = (undefined4)param_10[1];
  uStack_1b4 = (undefined4)(param_10[1] >> 0x20);
  uVar4 = (ulong)&uStack_1c0 | 8;
  FUN_10a3c8d60(uVar4,(ulong)&uStack_c0 | 8);
  uStack_1c0 = (undefined8 *)*param_9;
  uStack_1b8 = (undefined4)param_9[1];
  uStack_1b4 = (undefined4)(param_9[1] >> 0x20);
  uVar12 = uStack_c0 & *param_9;
  uVar5 = (ulong)&uStack_1c0 | 8;
  FUN_10a3c8d60(uVar5,(ulong)&uStack_c0 | 8);
  uStack_230 = uStack_f8;
  uStack_238 = uStack_100;
  fStack_220 = (float)uStack_e8;
  fStack_21c = (float)((ulong)uStack_e8 >> 0x20);
  uStack_228 = (undefined1)uStack_f0;
  uStack_227 = (undefined7)((ulong)uStack_f0 >> 8);
  uStack_210 = uStack_d8;
  uStack_218 = (undefined1)uStack_e0;
  uStack_217 = (undefined7)((ulong)uStack_e0 >> 8);
  uStack_1cf = uVar12 != 0 || uVar5 != 0;
  uStack_1c0 = (undefined8 *)0x0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1b8 = 0x3f800000;
  uStack_1a4 = 0x3f800000;
  lStack_1a0 = 0;
  lStack_198 = 0;
  uStack_190 = 0x3f800000;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_17c = 0x3f800000;
  uStack_178 = 0;
  uStack_174 = uStack_174 & 0xffffff00;
  uStack_170 = 0;
  uStack_148 = 0;
  uStack_140 = uStack_140 & 0xffffffffffffff00;
  uStack_110 = 0;
  uStack_168 = 0;
  lStack_160 = 0;
  uStack_150 = (ulong)uStack_150._2_2_ << 0x10;
  lStack_158 = 0;
  uStack_240 = (ulong)uStack_104 << 0x20;
  uStack_200 = uStack_c8;
  uStack_208 = uStack_d0;
  lVar7 = param_7[3];
  uStack_1f8 = *(undefined4 *)(lVar7 + 0x200);
  uStack_1f4 = CONCAT31(uStack_1f4._1_3_,*(undefined1 *)(lVar7 + 0x204));
  uStack_1f0 = *(uint *)(lVar7 + 0x208);
  uVar5 = (ulong)uStack_1f0;
  if (*(char *)(lVar7 + 0x227) < '\0') {
    func_0x000107c3192c(&uStack_1e8,*(undefined8 *)(lVar7 + 0x210),*(undefined8 *)(lVar7 + 0x218));
  }
  else {
    lStack_1e0 = *(long *)(lVar7 + 0x218);
    uVar5 = *(ulong *)(lVar7 + 0x210);
    lStack_1d8 = *(long *)(lVar7 + 0x220);
    uStack_1e8 = uVar5;
  }
  uVar15 = (undefined4)uStack_d0;
  uVar3 = (undefined4)uVar5;
  uStack_1d0 = (uVar10 & uVar8) != 0 || uVar4 != 0;
  FUN_10a2f1bb8(*(undefined8 *)(*param_7 + 0x140));
  FUN_10a2f1bb8(*(undefined8 *)(*param_7 + 0x140));
  lStack_198 = CONCAT71(uStack_217,uStack_218);
  lStack_1a0 = CONCAT44(fStack_21c,fStack_220);
  uStack_188 = (undefined4)uStack_208;
  uStack_184 = (undefined4)((ulong)uStack_208 >> 0x20);
  uStack_190 = (undefined4)uStack_210;
  uStack_18c = (undefined4)((ulong)uStack_210 >> 0x20);
  uStack_178 = uStack_1f8;
  uStack_174 = uStack_1f4;
  uStack_180 = (undefined4)uStack_200;
  uStack_17c = (undefined4)((ulong)uStack_200 >> 0x20);
  uStack_170 = uStack_1f0;
  uStack_1b8 = (undefined4)uStack_238;
  uStack_1b4 = (undefined4)(uStack_238 >> 0x20);
  uStack_1c0 = (undefined8 *)uStack_240;
  uStack_1a8 = (undefined4)CONCAT71(uStack_227,uStack_228);
  uStack_1a4 = (undefined4)((uint7)uStack_227 >> 0x18);
  uStack_1b0 = (undefined4)uStack_230;
  uStack_1ac = (int)((ulong)uStack_230 >> 0x20);
  lStack_160 = lStack_1e0;
  uStack_168 = uStack_1e8;
  uStack_150 = CONCAT44(uVar3,CONCAT22(uStack_1ce,CONCAT11(uStack_1cf,uStack_1d0)));
  lStack_158 = lStack_1d8;
  uStack_148 = uVar15;
  if ((param_7[4] == 0) || (param_7[5] == param_7[6])) {
    bVar2 = false;
  }
  else {
    lVar7 = param_7[3];
    uVar4 = *param_8;
    uVar5 = param_8[1];
    *param_8 = 0;
    param_8[1] = 0;
    plVar11 = *(long **)(*(long *)(lVar7 + 0x1f0) + 0x268);
    uStack_240 = uVar4;
    uStack_238 = uVar5;
    uStack_1cc = uVar3;
    uStack_1c8 = uVar15;
    if (plVar11 == (long *)0x0) {
      uVar3 = 0;
      plVar11 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar11 + 0xb0))();
      uVar3 = SUB84(plVar11,0);
      plVar11 = *(long **)(*(long *)(lVar7 + 0x1f0) + 0x268);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0xb8))();
      }
    }
    uStack_230 = CONCAT44((int)plVar11,uVar3);
    lVar9 = param_7[4];
    if ((*(float *)(lVar9 + 0x230) - *(float *)(lVar9 + 0x228) <= 0.0) ||
       (*(float *)(lVar9 + 0x234) - *(float *)(lVar9 + 0x22c) <= 0.0)) {
      plVar11 = *(long **)(*(long *)(lVar7 + 0x1f0) + 0x268);
      if (plVar11 == (long *)0x0) {
        fVar16 = 0.0;
        plVar6 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar11 + 0xb0))();
        plVar6 = *(long **)(*(long *)(lVar7 + 0x1f0) + 0x268);
        fVar16 = (float)((ulong)plVar11 & 0xffffffff);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0xb8))();
        }
      }
      fStack_21c = (float)((ulong)plVar6 & 0xffffffff);
      uStack_228 = 0;
      uStack_227 = 0;
      fStack_220 = fVar16;
    }
    else {
      fStack_220 = (float)*(undefined8 *)(lVar9 + 0x230);
      fStack_21c = (float)((ulong)*(undefined8 *)(lVar9 + 0x230) >> 0x20);
      uStack_228 = (undefined1)*(undefined8 *)(lVar9 + 0x228);
      uStack_227 = (undefined7)((ulong)*(undefined8 *)(lVar9 + 0x228) >> 8);
    }
    uStack_128 = uStack_228;
    lStack_130 = uStack_230;
    uStack_11f = CONCAT17((*(ushort *)(*(long *)param_7[5] + 0x180) & 0x17) == 0,
                          CONCAT43(fStack_21c,fStack_220._1_3_));
    uStack_127 = uStack_227;
    uStack_120 = fStack_220._0_1_;
    bVar2 = true;
    uStack_140 = uVar4;
    uStack_138 = uVar5;
  }
  param_1[5] = lStack_198;
  param_1[4] = lStack_1a0;
  param_1[7] = CONCAT44(uStack_184,uStack_188);
  param_1[6] = CONCAT44(uStack_18c,uStack_190);
  param_1[9] = CONCAT44(uStack_174,uStack_178);
  param_1[8] = CONCAT44(uStack_17c,uStack_180);
  *(uint *)(param_1 + 10) = uStack_170;
  param_1[1] = CONCAT44(uStack_1b4,uStack_1b8);
  *param_1 = (long)uStack_1c0;
  param_1[3] = CONCAT44(uStack_1a4,uStack_1a8);
  param_1[2] = CONCAT44(uStack_1ac,uStack_1b0);
  param_1[0xc] = lStack_160;
  param_1[0xb] = uStack_168;
  *(undefined4 *)(param_1 + 0xf) = uStack_148;
  param_1[0xd] = lStack_158;
  param_1[0xe] = uStack_150;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  if (bVar2) {
    param_1[0x11] = uStack_138;
    param_1[0x10] = uStack_140;
    param_1[0x13] = CONCAT71(uStack_127,uStack_128);
    param_1[0x12] = lStack_130;
    *(undefined8 *)((long)param_1 + 0xa1) = uStack_11f;
    *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_120,uStack_127);
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  *(undefined1 *)(param_1 + 0x17) = 1;
  return;
}



/* Entry: 10a9d8534; end: 10a9d8577;  */

long FUN_10a9d8534(long param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    func_0x00010a09db64(param_1 + 0x80);
  }
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  return param_1;
}



/* Entry: 10a9d8578; end: 10a9d860f;  */

undefined1  [16] FUN_10a9d8578(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10f654f06;
  return auVar1;
}



/* Entry: 10a9d8610; end: 10a9d8cb3;  */

void FUN_10a9d8610(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f654f06;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a004eb4(param_1,&puStack_88);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a9d8840;
    FUN_10a054dac(param_1,&UNK_10f688f46,FUN_10a9fcaec,3,*(long *)(param_1 + 0x18) + -8);
  }
  uVar2 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a9d8840;
    FUN_10a054dac(param_1,&UNK_10f688f52,FUN_10a9fd2b0,3,*(long *)(param_1 + 0x18) + -8);
  }
  uVar2 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a9d8840;
    FUN_10a054dac(param_1,&UNK_10f688f5f,FUN_10a9fdbcc,3,*(long *)(param_1 + 0x18) + -8);
  }
  uVar2 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a9d8840;
    FUN_10a054dac(param_1,&UNK_10f688f6f,FUN_10a9fe348,3,*(long *)(param_1 + 0x18) + -8);
  }
  uVar2 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a9d8840;
    FUN_10a054dac(param_1,&UNK_10f688f7d,FUN_10a9feb40,3,*(long *)(param_1 + 0x18) + -8);
  }
  uVar2 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
LAB_10a9d8840:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9d8844);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,&UNK_10f688f8c,FUN_10a9ff2d4,3,*(long *)(param_1 + 0x18) + -8);
  }
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9d8cb4; end: 10a9d8d3f;  */

undefined1  [16] FUN_10a9d8cb4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f689e92;
  return auVar1;
}



/* Entry: 10a9d8d40; end: 10a9d9103;  */

void FUN_10a9d8d40(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f689e92,0x11);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c38380;
  pppuVar2 = (undefined8 ***)&UNK_10f6891b4;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c38380;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9d90e4;
    FUN_10a054dac(param_1,&UNK_10f688f9e,FUN_10a9ffff8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9d90e4;
    FUN_10a054dac(param_1,&UNK_10f688fcb,FUN_10aa00118,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9d90e4;
    FUN_10a054dac(param_1,&UNK_10f688ff7,FUN_10aa001d0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9d90e4;
    FUN_10a054dac(param_1,&UNK_10f689012,FUN_10aa00288,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9d90e4;
    FUN_10a054dac(param_1,&UNK_10f689028,FUN_10aa00340,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9d90e4;
    FUN_10a054dac(param_1,&UNK_10f689055,FUN_10aa00420,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9d90e4;
    FUN_10a054dac(param_1,&UNK_10f68907b,FUN_10aa004d8,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f689e92,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a9d90e4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9d90e8);
  (*pcVar6)();
}



/* Entry: 10a9d9104; end: 10a9d9197;  */

void FUN_10a9d9104(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_2;
  plStack_28 = param_3;
  func_0x00010a3501ec(param_1 + 0x110,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a9d9198; end: 10a9d91fb;  */

undefined8 * FUN_10a9d9198(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a9d91fc; end: 10a9da397;  */

void FUN_10a9d91fc(long *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  long *plStack_178;
  undefined8 *puStack_160;
  long *plStack_158;
  char cStack_149;
  long lStack_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  uint uStack_110;
  undefined4 uStack_10c;
  long *plStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  undefined6 uStack_d0;
  undefined2 uStack_ca;
  long *plStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  
  lVar12 = *param_1 + 0xd48;
  FUN_10a5aeb74(lVar12,&PTR_DAT_110bc8358);
  lVar20 = *(long *)(lVar12 + 8);
  if (lVar20 != lVar12) {
    lStack_130 = 0;
    lStack_128 = 0;
    uStack_120 = 0;
    do {
      lVar23 = *(long *)(lVar20 + 0x28);
      lVar18 = *(long *)(lVar23 + 0xf0);
      plVar13 = *(long **)(lVar23 + 0xf8);
      if (plVar13 != (long *)0x0) {
        plVar2 = plVar13 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_140 = lVar18;
      plStack_138 = plVar13;
      if (lVar18 != 0) {
        lVar1 = *(long *)(lVar18 + 0x40);
        plVar2 = *(long **)(lVar18 + 0x48);
        for (lVar21 = *(long *)(lVar18 + 0xe0); lVar21 != *(long *)(lVar18 + 0xe8);
            lVar21 = lVar21 + 0x28) {
          if (*(char *)(*(long *)(lVar21 + 0x18) + 0x90) == '\x01') {
            FUN_10aa00590(param_1 + 8,lVar1,plVar2);
            FUN_10aa00590(param_1 + 0xb,lVar1,plVar2);
            break;
          }
        }
        if (*(char *)(lVar23 + 0x124) == '\x01') {
          plVar11 = param_1 + 0xb;
          FUN_10aa005d0(plVar11,lVar1,plVar2);
          if (param_1 + 0xc != plVar11) {
            plVar10 = (long *)plVar11[9];
            if ((plVar10 == (long *)0x0) ||
               (__ZNSt3__119__shared_weak_count4lockEv(), plStack_e8 = plVar10,
               plVar10 == (long *)0x0)) {
              FUN_10aa00650(param_1 + 0xb,plVar11);
            }
            else {
              lVar21 = plVar11[8];
              uStack_f0 = lVar21;
              if (lVar21 == 0) {
                FUN_10aa00650(param_1 + 0xb,plVar11);
                plVar11 = plVar10 + 1;
                do {
                  lVar17 = *plVar11;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar4) {
                    *plVar11 = lVar17 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar17 != 0) goto LAB_10a9d9414;
              }
              else {
                FUN_10a9f8710((int)plVar11[6],*(undefined4 *)((long)plVar11 + 0x34),(int)plVar11[7],
                              lVar23 + 0x128);
                FUN_10a9d9104(lVar23,lVar21,plVar10);
                plVar11 = plVar10 + 1;
                do {
                  lVar17 = *plVar11;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar4) {
                    *plVar11 = lVar17 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar17 != 0) goto LAB_10a9d9e84;
              }
              (**(code **)(*plVar10 + 0x10))(plVar10);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
              if (lVar21 != 0) goto LAB_10a9d9e84;
            }
          }
LAB_10a9d9414:
          func_0x000107c2b054(&uStack_f0,&DAT_10f31a211);
          lVar21 = *(long *)(lVar18 + 0xe0);
          lVar17 = *(long *)(lVar18 + 0xe8);
          FUN_10a9f8774(lVar21,lVar17,&uStack_f0);
          if (lVar17 == lVar21) {
            puStack_160 = (undefined8 *)0x0;
            plStack_158 = (long *)0x0;
          }
          else {
            plStack_158 = *(long **)(lVar21 + 0x20);
            puStack_160 = *(undefined8 **)(lVar21 + 0x18);
            if (*(long *)(lVar21 + 0x20) != 0) {
              plVar11 = (long *)(*(long *)(lVar21 + 0x20) + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar4) {
                  *plVar11 = *plVar11 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
          }
          puVar5 = puStack_160;
          if (uStack_e0 < 0) {
            __ZdlPv(uStack_f0);
          }
          func_0x000107c2b054(&uStack_f0,&DAT_10f31a201);
          lVar21 = *(long *)(lVar18 + 0xe0);
          lVar17 = *(long *)(lVar18 + 0xe8);
          FUN_10a9f8774(lVar21,lVar17,&uStack_f0);
          if (lVar17 == lVar21) {
            uStack_b0 = (undefined8 *)0x0;
            plStack_a8 = (long *)0x0;
          }
          else {
            plStack_a8 = *(long **)(lVar21 + 0x20);
            uStack_b0 = *(undefined8 **)(lVar21 + 0x18);
            if (*(long *)(lVar21 + 0x20) != 0) {
              plVar11 = (long *)(*(long *)(lVar21 + 0x20) + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar4) {
                  *plVar11 = *plVar11 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
          }
          puVar8 = uStack_b0;
          if (uStack_e0 < 0) {
            __ZdlPv(uStack_f0);
          }
          func_0x000107c2b054(&uStack_f0,"B");
          lVar21 = *(long *)(lVar18 + 0xe0);
          lVar17 = *(long *)(lVar18 + 0xe8);
          FUN_10a9f8774(lVar21,lVar17,&uStack_f0);
          if (lVar17 == lVar21) {
            puStack_c0 = (undefined8 *)0x0;
            plStack_b8 = (long *)0x0;
          }
          else {
            plStack_b8 = *(long **)(lVar21 + 0x20);
            puStack_c0 = *(undefined8 **)(lVar21 + 0x18);
            if (*(long *)(lVar21 + 0x20) != 0) {
              plVar11 = (long *)(*(long *)(lVar21 + 0x20) + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar4) {
                  *plVar11 = *plVar11 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
          }
          puVar7 = puStack_c0;
          if (uStack_e0 < 0) {
            __ZdlPv(uStack_f0);
          }
          func_0x000107c2b054(&uStack_f0,&DAT_10f31a1f9);
          lVar21 = *(long *)(lVar18 + 0xe0);
          lVar17 = *(long *)(lVar18 + 0xe8);
          FUN_10a9f8774(lVar21,lVar17,&uStack_f0);
          if (lVar17 == lVar21) {
            plStack_178 = (long *)0x0;
            puStack_100 = (undefined8 *)0x0;
            uStack_f8 = 0;
          }
          else {
            plStack_178 = *(long **)(lVar21 + 0x20);
            uStack_f8 = *(undefined8 *)(lVar21 + 0x20);
            puStack_100 = *(undefined8 **)(lVar21 + 0x18);
            if (plStack_178 == (long *)0x0) {
              plStack_178 = (long *)0x0;
            }
            else {
              plVar11 = plStack_178 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar4) {
                  *plVar11 = *plVar11 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
          }
          puVar6 = puStack_100;
          if (uStack_e0 < 0) {
            __ZdlPv(uStack_f0);
          }
          if ((((puVar5 != (undefined8 *)0x0) && (puVar8 != (undefined8 *)0x0)) &&
              (puVar7 != (undefined8 *)0x0)) &&
             ((puVar6 != (undefined8 *)0x0 &&
              (iVar14 = (int)((ulong)(puVar5[0x14] - puVar5[0x13]) >> 4), 0 < iVar14)))) {
            func_0x00010ac9a200(&uStack_f0,puVar5,0);
            plVar11 = plStack_e8;
            fVar25 = *(float *)(uStack_f0 + 0x18);
            if (plStack_e8 != (long *)0x0) {
              plVar10 = plStack_e8 + 1;
              do {
                lVar21 = *plVar10;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar4) {
                  *plVar10 = lVar21 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
            }
            func_0x00010ac9a200(&uStack_f0,puVar5,iVar14 + -1);
            plVar11 = plStack_e8;
            fVar26 = *(float *)(uStack_f0 + 0x18);
            if (plStack_e8 != (long *)0x0) {
              plVar10 = plStack_e8 + 1;
              do {
                lVar21 = *plVar10;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar4) {
                  *plVar10 = lVar21 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
            }
            uVar16 = (long)*(int *)((long)param_1 + 0x3c) * 4;
            uVar19 = lStack_128 - lStack_130 >> 1;
            if (uVar16 < uVar19 || uVar16 - uVar19 == 0) {
              uVar16 = uVar19;
            }
            func_0x000108262984(&lStack_130,uVar16);
            uVar15 = *(uint *)((long)param_1 + 0x3c);
            uVar16 = (ulong)uVar15;
            if (0 < (int)uVar15) {
              uVar22 = 0;
              uVar19 = 0;
              do {
                fVar27 = fVar25 + ((fVar26 - fVar25) * (float)(uVar19 & 0xffffffff)) /
                                  (float)((int)uVar16 + -1);
                fVar24 = fVar27;
                (**(code **)*puVar5)(puVar5);
                if ((ulong)(lStack_128 - lStack_130 >> 1) <= uVar22) {
LAB_10a9da214:
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a9da218);
                  (*pcVar9)();
                }
                *(float2 *)(lStack_130 + uVar22 * 2) = (float2)fVar24;
                fVar24 = fVar27;
                (**(code **)*puVar8)(puVar8);
                if ((ulong)(lStack_128 - lStack_130 >> 1) <= uVar22 + 1) goto LAB_10a9da214;
                *(float2 *)(lStack_130 + uVar22 * 2 + 2) = (float2)fVar24;
                fVar24 = fVar27;
                (**(code **)*puVar7)(puVar7);
                if ((ulong)(lStack_128 - lStack_130 >> 1) <= uVar22 + 2) goto LAB_10a9da214;
                *(float2 *)(lStack_130 + uVar22 * 2 + 4) = (float2)fVar24;
                (**(code **)*puVar6)(puVar6);
                if ((ulong)(lStack_128 - lStack_130 >> 1) <= uVar22 + 3) goto LAB_10a9da214;
                *(float2 *)(lStack_130 + uVar22 * 2 + 6) = (float2)fVar27;
                uVar19 = uVar19 + 1;
                uVar15 = *(uint *)((long)param_1 + 0x3c);
                uVar16 = (ulong)(int)uVar15;
                uVar22 = uVar22 + 4;
              } while ((long)uVar19 < (long)uVar16);
            }
            plVar11 = (long *)param_1[3];
            if (plVar11 == (long *)0x0) {
              uStack_10c = (undefined4)param_1[7];
              uStack_110 = uVar15;
              FUN_10a797458(&uStack_f0,&uStack_110,0x22,0,1,1,0,0,1,0,0);
              FUN_10a9d9198(param_1 + 3,&uStack_f0);
              plVar11 = plStack_e8;
              if (plStack_e8 != (long *)0x0) {
                plVar10 = plStack_e8 + 1;
                do {
                  lVar21 = *plVar10;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar4) {
                    *plVar10 = lVar21 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                }
              }
              plVar11 = (long *)param_1[3];
              uVar15 = *(uint *)((long)param_1 + 0x3c);
            }
            lVar21 = param_1[7];
            uStack_f0 = CONCAT44(1,uVar15);
            uStack_118 = 0;
            (**(code **)(*plVar11 + 0x18))
                      (&uStack_110,plVar11,&uStack_f0,lStack_130,0,0,&uStack_118);
            FUN_10a9d9104(lVar23,CONCAT44(uStack_10c,uStack_110),plStack_108);
            fVar24 = (float)(int)lVar21;
            lVar21 = *(long *)(lVar23 + 0x110);
            plVar11 = *(long **)(lVar23 + 0x118);
            if (plVar11 == (long *)0x0) {
              fVar24 = 0.5 / fVar24 + (float)*(int *)(*(long *)(lVar21 + 0x18) + 4) / fVar24;
            }
            else {
              plVar10 = plVar11 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar4) {
                  *plVar10 = *plVar10 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              fVar24 = 0.5 / fVar24 + (float)*(int *)(*(long *)(lVar21 + 0x18) + 4) / fVar24;
              do {
                lVar21 = *plVar10;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar4) {
                  *plVar10 = lVar21 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
            }
            FUN_10a9f8710(fVar24,fVar25,fVar26,lVar23 + 0x128);
            plVar11 = plStack_108;
            if (plStack_108 != (long *)0x0) {
              plVar10 = plStack_108 + 2;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar4) {
                  *plVar10 = *plVar10 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar4) {
                  *plVar10 = *plVar10 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            uStack_e0 = CONCAT44(fVar25,fVar24);
            plStack_c8 = plStack_108;
            uStack_d0 = (undefined6)CONCAT44(uStack_10c,uStack_110);
            uStack_ca = (undefined2)((uint)uStack_10c >> 0x10);
            uStack_f0 = lVar1;
            plStack_e8 = plVar2;
            fStack_d8 = fVar26;
            FUN_10aa0072c(param_1 + 0xb,lVar1,plVar2,&uStack_f0);
            if (plStack_c8 != (long *)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            if (plVar11 != (long *)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
            plVar2 = plStack_108;
            lVar23 = *(long *)(lVar18 + 0xe8);
            for (lVar18 = *(long *)(lVar18 + 0xe0); lVar18 != lVar23; lVar18 = lVar18 + 0x28) {
              *(undefined1 *)(*(long *)(lVar18 + 0x18) + 0x90) = 0;
            }
            if (plStack_108 != (long *)0x0) {
              plVar11 = plStack_108 + 1;
              do {
                lVar18 = *plVar11;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar4) {
                  *plVar11 = lVar18 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*plStack_108 + 0x10))(plStack_108);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
              }
            }
          }
          if (plStack_178 != (long *)0x0) {
            plVar2 = plStack_178 + 1;
            do {
              lVar18 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar18 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plStack_178 + 0x10))(plStack_178);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_178);
            }
          }
          plVar2 = plStack_b8;
          if (plStack_b8 != (long *)0x0) {
            plVar11 = plStack_b8 + 1;
            do {
              lVar18 = *plVar11;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = lVar18 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
          plVar2 = plStack_a8;
          if (plStack_a8 != (long *)0x0) {
            plVar11 = plStack_a8 + 1;
            do {
              lVar18 = *plVar11;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = lVar18 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
          if (plStack_158 != (long *)0x0) {
            plVar2 = plStack_158 + 1;
            do {
              lVar18 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar18 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_10a9d9e68:
            plVar2 = plStack_158;
            if (lVar18 == 0) {
              (**(code **)(*plStack_158 + 0x10))(plStack_158);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
        }
        else {
          lVar21 = *(long *)(lVar18 + 0xe0);
          if (*(long *)(lVar18 + 0xe8) - lVar21 == 0x28) {
            *(undefined4 *)(lVar23 + 0x120) = 1;
            plVar11 = param_1 + 8;
            FUN_10aa005d0(plVar11,lVar1,plVar2);
            if (param_1 + 9 != plVar11) {
              plVar10 = (long *)plVar11[9];
              if ((plVar10 == (long *)0x0) ||
                 (__ZNSt3__119__shared_weak_count4lockEv(), plStack_e8 = plVar10,
                 plVar10 == (long *)0x0)) {
                FUN_10aa00650(param_1 + 8,plVar11);
              }
              else {
                lVar21 = plVar11[8];
                uStack_f0 = lVar21;
                if (lVar21 == 0) {
                  FUN_10aa00650(param_1 + 8,plVar11);
                  plVar11 = plVar10 + 1;
                  do {
                    lVar17 = *plVar11;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar4) {
                      *plVar11 = lVar17 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar17 != 0) goto LAB_10a9d97ec;
                }
                else {
                  FUN_10a9f8710((int)plVar11[6],*(undefined4 *)((long)plVar11 + 0x34),
                                (int)plVar11[7],lVar23 + 0x128);
                  FUN_10a9d9104(lVar23,lVar21,plVar10);
                  plVar11 = plVar10 + 1;
                  do {
                    lVar17 = *plVar11;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar4) {
                      *plVar11 = lVar17 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar17 != 0) goto LAB_10a9d9e84;
                }
                (**(code **)(*plVar10 + 0x10))(plVar10);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
                if (lVar21 != 0) goto LAB_10a9d9e84;
              }
LAB_10a9d97ec:
              lVar21 = *(long *)(lVar18 + 0xe0);
            }
            puStack_160 = *(undefined8 **)(lVar21 + 0x18);
            plStack_158 = *(long **)(lVar21 + 0x20);
            if (plStack_158 != (long *)0x0) {
              plVar11 = plStack_158 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar4) {
                  *plVar11 = *plVar11 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            iVar14 = (int)((ulong)(puStack_160[0x14] - puStack_160[0x13]) >> 4);
            if (0 < iVar14) {
              func_0x00010ac9a200(&uStack_f0,puStack_160,0);
              plVar11 = plStack_e8;
              fVar25 = *(float *)(uStack_f0 + 0x18);
              if (plStack_e8 != (long *)0x0) {
                plVar10 = plStack_e8 + 1;
                do {
                  lVar21 = *plVar10;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar4) {
                    *plVar10 = lVar21 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                }
              }
              func_0x00010ac9a200(&uStack_f0,puStack_160,iVar14 + -1);
              plVar11 = plStack_e8;
              fVar26 = *(float *)(uStack_f0 + 0x18);
              if (plStack_e8 != (long *)0x0) {
                plVar10 = plStack_e8 + 1;
                do {
                  lVar21 = *plVar10;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar4) {
                    *plVar10 = lVar21 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                }
              }
              uVar16 = lStack_128 - lStack_130 >> 1;
              if (uVar16 <= (ulong)(long)*(int *)((long)param_1 + 0x3c)) {
                uVar16 = (long)*(int *)((long)param_1 + 0x3c);
              }
              func_0x000108262984(&lStack_130,uVar16);
              puVar5 = puStack_160;
              uVar15 = *(uint *)((long)param_1 + 0x3c);
              uVar16 = (ulong)uVar15;
              if (0 < (int)uVar15) {
                uVar19 = 0;
                do {
                  fVar24 = ((fVar26 - fVar25) * (float)(uVar19 & 0xffffffff)) /
                           (float)((int)uVar16 + -1);
                  (**(code **)*puVar5)(puVar5);
                  if ((ulong)(lStack_128 - lStack_130 >> 1) <= uVar19) goto LAB_10a9da214;
                  *(float2 *)(lStack_130 + uVar19 * 2) = (float2)fVar24;
                  uVar19 = uVar19 + 1;
                  uVar15 = *(uint *)((long)param_1 + 0x3c);
                  uVar16 = (ulong)(int)uVar15;
                } while ((long)uVar19 < (long)uVar16);
              }
              plVar11 = (long *)param_1[1];
              if (plVar11 == (long *)0x0) {
                uStack_b0 = (undefined8 *)CONCAT44((int)param_1[7],uVar15);
                FUN_10a797458(&uStack_f0,&uStack_b0,0x20,0,1,1,0,0,1,0,0);
                FUN_10a9d9198(param_1 + 1,&uStack_f0);
                plVar11 = plStack_e8;
                if (plStack_e8 != (long *)0x0) {
                  plVar10 = plStack_e8 + 1;
                  do {
                    lVar21 = *plVar10;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                    if (bVar4) {
                      *plVar10 = lVar21 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar21 == 0) {
                    (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                  }
                }
                plVar11 = (long *)param_1[1];
                uVar15 = *(uint *)((long)param_1 + 0x3c);
              }
              lVar21 = param_1[7];
              uStack_f0 = CONCAT44(1,uVar15);
              puStack_c0 = (undefined8 *)0x0;
              (**(code **)(*plVar11 + 0x18))
                        (&uStack_b0,plVar11,&uStack_f0,lStack_130,0,0,&puStack_c0);
              FUN_10a9d9104(lVar23,uStack_b0,plStack_a8);
              fVar24 = (float)(int)lVar21;
              lVar21 = *(long *)(lVar23 + 0x110);
              plVar11 = *(long **)(lVar23 + 0x118);
              if (plVar11 == (long *)0x0) {
                fVar24 = 0.5 / fVar24 + (float)*(int *)(*(long *)(lVar21 + 0x18) + 4) / fVar24;
              }
              else {
                plVar10 = plVar11 + 1;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar4) {
                    *plVar10 = *plVar10 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                fVar24 = 0.5 / fVar24 + (float)*(int *)(*(long *)(lVar21 + 0x18) + 4) / fVar24;
                do {
                  lVar21 = *plVar10;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar4) {
                    *plVar10 = lVar21 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                }
              }
              FUN_10a9f8710(fVar24,fVar25,fVar26,lVar23 + 0x128);
              plVar11 = plStack_a8;
              if (plStack_a8 != (long *)0x0) {
                plVar10 = plStack_a8 + 2;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar4) {
                    *plVar10 = *plVar10 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar4) {
                    *plVar10 = *plVar10 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              uStack_e0 = CONCAT44(fVar25,fVar24);
              plStack_c8 = plStack_a8;
              uStack_d0 = SUB86(uStack_b0,0);
              uStack_ca = (undefined2)((ulong)uStack_b0 >> 0x30);
              uStack_f0 = lVar1;
              plStack_e8 = plVar2;
              fStack_d8 = fVar26;
              FUN_10aa0072c(param_1 + 8,lVar1,plVar2,&uStack_f0);
              if (plStack_c8 != (long *)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              if (plVar11 != (long *)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
              plVar2 = plStack_a8;
              lVar23 = *(long *)(lVar18 + 0xe8);
              for (lVar18 = *(long *)(lVar18 + 0xe0); lVar18 != lVar23; lVar18 = lVar18 + 0x28) {
                *(undefined1 *)(*(long *)(lVar18 + 0x18) + 0x90) = 0;
              }
              if (plStack_a8 != (long *)0x0) {
                plVar11 = plStack_a8 + 1;
                do {
                  lVar18 = *plVar11;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar4) {
                    *plVar11 = lVar18 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar18 == 0) {
                  (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
                }
              }
            }
            if (plStack_158 != (long *)0x0) {
              plVar2 = plStack_158 + 1;
              do {
                lVar18 = *plVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *plVar2 = lVar18 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              goto LAB_10a9d9e68;
            }
          }
        }
      }
LAB_10a9d9e84:
      if (plVar13 != (long *)0x0) {
        plVar2 = plVar13 + 1;
        do {
          lVar18 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      lVar20 = *(long *)(lVar20 + 8);
    } while (lVar20 != lVar12);
    if (param_1[1] != 0) {
      func_0x000107c2b07c(&puStack_160,&UNK_10f689194);
      if (param_1[5] == 0) {
        FUN_10a6d7e70(&uStack_b0,&uStack_f0,param_1,param_1[1] + 0x28);
        FUN_10a1cb720(&puStack_c0,*param_1,&uStack_b0);
        lVar12 = 0x1c8;
        __Znwm();
        FUN_10a34effc();
        plVar13 = (long *)param_1[5];
        param_1[5] = lVar12;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
          lVar12 = param_1[5];
        }
        FUN_10a32f140(lVar12,&puStack_c0);
        uStack_f0._0_4_ = (uint)uStack_f0 & 0xffffff00;
        uStack_f0 = CONCAT44(1,(uint)uStack_f0);
        uStack_e0 = 0;
        fStack_d8 = 0.0;
        uStack_d4 = 0;
        plStack_e8 = (long *)0x0;
        uStack_d2 = 0;
        uStack_d0 = 0;
        uStack_ca = 1000;
        FUN_10a351a84(param_1[5] + 0x198,&uStack_f0);
        plVar13 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar2 = plStack_b8 + 1;
          do {
            lVar12 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        plVar13 = plStack_a8;
        if (plStack_a8 != (long *)0x0) {
          plVar2 = plStack_a8 + 1;
          do {
            lVar12 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
      }
      if (cStack_149 < '\0') {
        __ZdlPv(puStack_160);
      }
    }
    if (param_1[3] != 0) {
      func_0x000107c2b07c(&puStack_160,&UNK_10f6891a2);
      if (param_1[6] == 0) {
        FUN_10a6d7e70(&uStack_b0,&uStack_f0,param_1,param_1[3] + 0x28);
        FUN_10a1cb720(&puStack_c0,*param_1,&uStack_b0);
        lVar12 = 0x1c8;
        __Znwm();
        FUN_10a34effc();
        plVar13 = (long *)param_1[6];
        param_1[6] = lVar12;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
          lVar12 = param_1[6];
        }
        FUN_10a32f140(lVar12,&puStack_c0);
        uStack_f0._0_4_ = (uint)uStack_f0 & 0xffffff00;
        uStack_f0 = CONCAT44(1,(uint)uStack_f0);
        uStack_e0 = 0;
        fStack_d8 = 0.0;
        uStack_d4 = 0;
        plStack_e8 = (long *)0x0;
        uStack_d2 = 0;
        uStack_d0 = 0;
        uStack_ca = 1000;
        FUN_10a351a84(param_1[6] + 0x198,&uStack_f0);
        plVar13 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar2 = plStack_b8 + 1;
          do {
            lVar12 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        plVar13 = plStack_a8;
        if (plStack_a8 != (long *)0x0) {
          plVar2 = plStack_a8 + 1;
          do {
            lVar12 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
      }
      if (cStack_149 < '\0') {
        __ZdlPv(puStack_160);
      }
    }
    if (lStack_130 != 0) {
      lStack_128 = lStack_130;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a9da398; end: 10a9da4a3;  */

undefined1  [16] FUN_10a9da398(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x12;
  auVar1._0_8_ = &UNK_10f689ea4;
  return auVar1;
}



/* Entry: 10a9da4a4; end: 10a9da5c3;  */

void FUN_10a9da4a4(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f6891b4;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f6891b4;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a9da5c4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6891b5;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x4000000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aa0092c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6891b9;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x4000000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010aa00aa4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6891bc;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f6891b4;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aa00bb4(param_1,&puStack_98);
  FUN_10aa00cc4(param_1);
  return;
}



/* Entry: 10a9da5c4; end: 10a9da69b;  */

/* WARNING: Removing unreachable block (ram,0x00010a9da65c) */

undefined1  [16] FUN_10a9da5c4(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f689ea4,0x12);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  func_0x00010aa00830(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9da69c; end: 10a9dafbb;  */

void FUN_10a9da69c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f689354,0x10);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c382c0;
  pppuVar2 = (undefined8 ***)&UNK_10f6891b4;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c382c0;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f6891c4,FUN_10aa00d80,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f6891d6,FUN_10aa00eec,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f6891ed,FUN_10aa01004,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f6891f3,FUN_10aa010b8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f6891ff,FUN_10aa01248,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f689210,FUN_10aa012f8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f68921f,FUN_10aa013b8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f68923d,FUN_10aa0159c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f68924c,FUN_10aa01794,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f689259,FUN_10aa01844,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&DAT_10f689263,FUN_10aa018f4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f689270,FUN_10aa019a4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f689279,FUN_10aa01a58,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f689282,FUN_10aa01b08,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f68928e,FUN_10aa01bb8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f6892a5,FUN_10aa01cc8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f6892b9,FUN_10aa02458,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f6892cc,FUN_10aa02574,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f6892de,FUN_10aa0267c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9daf9c;
    FUN_10a054dac(param_1,&UNK_10f6892f7,FUN_10aa02854,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f689307,FUN_10aa029f8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f689313,FUN_10aa02ab4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x80,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c37a28,FUN_10aa02be8);
    FUN_10a0605c4(param_1,&UNK_10f689326,FUN_10aa039f0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x80,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c37a40,FUN_10aa03b24);
    FUN_10a0605c4(param_1,&UNK_10f68933e,FUN_10aa0492c,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    puStack_78 = *(undefined **)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f689354,0x10);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f689354;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f6891b4;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f6891b4;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a9daf9c;
      FUN_10a054dac(param_1,&UNK_10f689365,FUN_10aa04a60,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a9daf9c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9dafa0);
  (*pcVar6)();
}



/* Entry: 10a9dafbc; end: 10a9db273;  */

void FUN_10a9dafbc(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f5fe7cd;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6891b4;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f6891b4;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f40ab60;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6891b4;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9db1d0(param_1,&puStack_98,1);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f689377;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6891b4;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9db1d0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f68937d;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6891b4;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9db1d0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f4648df;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9db1d0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f689385;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9db1d0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68938b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6891b4;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9db1d0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a9db274; end: 10a9dba47;  */

/* WARNING: Possible PIC construction at 0x00010a9db2cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a9db2d0) */
/* WARNING: Removing unreachable block (ram,0x00010a9db448) */
/* WARNING: Removing unreachable block (ram,0x00010a9db44c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db454) */
/* WARNING: Removing unreachable block (ram,0x00010a9db45c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db460) */
/* WARNING: Removing unreachable block (ram,0x00010a9db478) */
/* WARNING: Removing unreachable block (ram,0x00010a9db49c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db4a0) */
/* WARNING: Removing unreachable block (ram,0x00010a9db4a8) */
/* WARNING: Removing unreachable block (ram,0x00010a9db4b0) */
/* WARNING: Removing unreachable block (ram,0x00010a9db4bc) */
/* WARNING: Removing unreachable block (ram,0x00010a9db4c0) */
/* WARNING: Removing unreachable block (ram,0x00010a9db504) */
/* WARNING: Removing unreachable block (ram,0x00010a9db514) */
/* WARNING: Removing unreachable block (ram,0x00010a9db568) */
/* WARNING: Removing unreachable block (ram,0x00010a9db56c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db57c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db5d8) */
/* WARNING: Removing unreachable block (ram,0x00010a9db5dc) */
/* WARNING: Removing unreachable block (ram,0x00010a9db5ec) */
/* WARNING: Removing unreachable block (ram,0x00010a9db648) */
/* WARNING: Removing unreachable block (ram,0x00010a9db64c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db65c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db6b8) */
/* WARNING: Removing unreachable block (ram,0x00010a9db6bc) */
/* WARNING: Removing unreachable block (ram,0x00010a9db6cc) */
/* WARNING: Removing unreachable block (ram,0x00010a9db72c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db730) */
/* WARNING: Removing unreachable block (ram,0x00010a9db740) */
/* WARNING: Removing unreachable block (ram,0x00010a9db768) */
/* WARNING: Removing unreachable block (ram,0x00010a9db76c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db77c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db7a4) */
/* WARNING: Removing unreachable block (ram,0x00010a9db7a8) */
/* WARNING: Removing unreachable block (ram,0x00010a9db7b8) */
/* WARNING: Removing unreachable block (ram,0x00010a9db7e0) */
/* WARNING: Removing unreachable block (ram,0x00010a9db7e4) */
/* WARNING: Removing unreachable block (ram,0x00010a9db7f4) */
/* WARNING: Removing unreachable block (ram,0x00010a9db81c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db820) */
/* WARNING: Removing unreachable block (ram,0x00010a9db830) */
/* WARNING: Removing unreachable block (ram,0x00010a9db858) */
/* WARNING: Removing unreachable block (ram,0x00010a9db85c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db86c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db87c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db888) */
/* WARNING: Removing unreachable block (ram,0x00010a9db840) */
/* WARNING: Removing unreachable block (ram,0x00010a9db84c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db804) */
/* WARNING: Removing unreachable block (ram,0x00010a9db810) */
/* WARNING: Removing unreachable block (ram,0x00010a9db7c8) */
/* WARNING: Removing unreachable block (ram,0x00010a9db7d4) */
/* WARNING: Removing unreachable block (ram,0x00010a9db78c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db798) */
/* WARNING: Removing unreachable block (ram,0x00010a9db7d8) */
/* WARNING: Removing unreachable block (ram,0x00010a9db750) */
/* WARNING: Removing unreachable block (ram,0x00010a9db75c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db6dc) */
/* WARNING: Removing unreachable block (ram,0x00010a9db6e8) */
/* WARNING: Removing unreachable block (ram,0x00010a9db66c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db678) */
/* WARNING: Removing unreachable block (ram,0x00010a9db6ec) */
/* WARNING: Removing unreachable block (ram,0x00010a9db5fc) */
/* WARNING: Removing unreachable block (ram,0x00010a9db608) */
/* WARNING: Removing unreachable block (ram,0x00010a9db67c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db58c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db598) */
/* WARNING: Removing unreachable block (ram,0x00010a9db60c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db524) */
/* WARNING: Removing unreachable block (ram,0x00010a9db530) */
/* WARNING: Removing unreachable block (ram,0x00010a9db59c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db4d4) */
/* WARNING: Removing unreachable block (ram,0x00010a9db4e4) */
/* WARNING: Removing unreachable block (ram,0x00010a9db534) */
/* WARNING: Removing unreachable block (ram,0x00010a9db538) */
/* WARNING: Removing unreachable block (ram,0x00010a9db548) */
/* WARNING: Removing unreachable block (ram,0x00010a9db5a4) */
/* WARNING: Removing unreachable block (ram,0x00010a9db5a8) */
/* WARNING: Removing unreachable block (ram,0x00010a9db5b8) */
/* WARNING: Removing unreachable block (ram,0x00010a9db614) */
/* WARNING: Removing unreachable block (ram,0x00010a9db618) */
/* WARNING: Removing unreachable block (ram,0x00010a9db628) */
/* WARNING: Removing unreachable block (ram,0x00010a9db684) */
/* WARNING: Removing unreachable block (ram,0x00010a9db688) */
/* WARNING: Removing unreachable block (ram,0x00010a9db698) */
/* WARNING: Removing unreachable block (ram,0x00010a9db6f4) */
/* WARNING: Removing unreachable block (ram,0x00010a9db6f8) */
/* WARNING: Removing unreachable block (ram,0x00010a9db708) */
/* WARNING: Removing unreachable block (ram,0x00010a9db974) */
/* WARNING: Removing unreachable block (ram,0x00010a9db718) */
/* WARNING: Removing unreachable block (ram,0x00010a9db724) */
/* WARNING: Removing unreachable block (ram,0x00010a9db6a8) */
/* WARNING: Removing unreachable block (ram,0x00010a9db6b4) */
/* WARNING: Removing unreachable block (ram,0x00010a9db88c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db638) */
/* WARNING: Removing unreachable block (ram,0x00010a9db644) */
/* WARNING: Removing unreachable block (ram,0x00010a9db850) */
/* WARNING: Removing unreachable block (ram,0x00010a9db5c8) */
/* WARNING: Removing unreachable block (ram,0x00010a9db5d4) */
/* WARNING: Removing unreachable block (ram,0x00010a9db814) */
/* WARNING: Removing unreachable block (ram,0x00010a9db558) */
/* WARNING: Removing unreachable block (ram,0x00010a9db564) */
/* WARNING: Removing unreachable block (ram,0x00010a9db79c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db4f4) */
/* WARNING: Removing unreachable block (ram,0x00010a9db500) */
/* WARNING: Removing unreachable block (ram,0x00010a9db760) */
/* WARNING: Removing unreachable block (ram,0x00010a9db890) */
/* WARNING: Removing unreachable block (ram,0x00010a9db97c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db9a4) */
/* WARNING: Removing unreachable block (ram,0x00010a9db9b0) */
/* WARNING: Removing unreachable block (ram,0x00010a9db9b4) */
/* WARNING: Removing unreachable block (ram,0x00010a9dba14) */
/* WARNING: Removing unreachable block (ram,0x00010a9dba1c) */
/* WARNING: Removing unreachable block (ram,0x00010a9dba24) */
/* WARNING: Removing unreachable block (ram,0x00010a9dba2c) */
/* WARNING: Removing unreachable block (ram,0x00010a9db950) */

long * FUN_10a9db274(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110c36cb8;
  param_1[2] = 0;
  param_1[3] = param_2;
  plVar3 = (long *)&UNK_10f6891b4;
  plVar1 = param_1 + 4;
  func_0x000107c613d0();
  if ((long *)0x7ffffffffffffff7 < plVar3) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      plVar3 = (long *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)plVar3 != 0) {
        puVar5 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar5;
        puVar5[1] = 0x434948504152475f;
        *puVar5 = 0x45524f43534e454c;
        puVar5[3] = 0x525f595a414c5f54;
        puVar5[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar5 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar5 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar5 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        plVar3 = (long *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return plVar3;
      }
    }
    return plVar3;
  }
  if (plVar3 < (long *)0x17) {
    *(char *)((long)param_1 + 0x37) = (char)plVar3;
    plVar4 = plVar1;
    if (plVar3 == (long *)0x0) goto code_r0x0001000537e0;
  }
  else {
    plVar2 = (long *)0x19;
    if (((ulong)plVar3 | 7) != 0x17) {
      plVar2 = (long *)(((ulong)plVar3 | 7) + 1);
    }
    plVar4 = plVar2;
    func_0x000107c60e20();
    param_1[5] = plVar3;
    param_1[6] = (ulong)plVar2 | 0x8000000000000000;
    *plVar1 = (long)plVar4;
  }
  func_0x000107c610b8(plVar4,&UNK_10f6891b4,plVar3);
code_r0x0001000537e0:
  *(undefined1 *)((long)plVar4 + (long)plVar3) = 0;
  return plVar1;
}



/* Entry: 10a9dba48; end: 10a9dba57;  */

ulong * FUN_10a9dba48(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (ulong *)&DAT_10f32054f;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar2 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar2;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,&DAT_10f32054f,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10a9dba58; end: 10a9dbadb;  */

void FUN_10a9dba58(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar1 = *(long *)(param_2 + 0x18);
  func_0x000107c2b054(auStack_38,&UNK_10f689393);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  func_0x000107c2b054(param_1,&UNK_10f6891b4);
  return;
}



/* Entry: 10a9dbadc; end: 10a9dbc33;  */

/* WARNING: Possible PIC construction at 0x00010a9dbb9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a9dbba0) */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a9dbadc(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *puVar5;
  undefined8 unaff_x30;
  undefined8 uVar6;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*(char *)(param_2 + 0x37) < '\0') {
    uVar4 = *(ulong *)(param_2 + 0x28);
    if (uVar4 != 0) {
      lVar3 = *(long *)(param_2 + 0x20);
      goto code_r0x000100033dac;
    }
  }
  else if (*(char *)(param_2 + 0x37) != '\0') goto LAB_10a9dbb74;
  if (*(int *)(*(long *)(*(long *)(param_2 + 0x18) + 0xa20) + 0x18) < 0x6d) {
    FUN_10ad59ae8(&uStack_38);
  }
  else {
    FUN_10ad59bb0(&uStack_38);
  }
  if (*(char *)(param_2 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x20));
  }
  *(undefined8 *)(param_2 + 0x28) = uStack_30;
  *(undefined8 *)(param_2 + 0x20) = uStack_38;
  *(undefined8 *)(param_2 + 0x30) = uStack_28;
  if (*(char *)(param_2 + 0x37) < '\0') {
    lVar3 = *(long *)(param_2 + 0x20);
    uVar4 = *(ulong *)(param_2 + 0x28);
    unaff_x30 = 0x10a9dbba0;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x29 = puVar1;
code_r0x000100033dac:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (0x16 < uVar4) {
      if (uVar4 < 0x7ffffffffffffff7) {
        lVar2 = 0x19;
        if ((uVar4 | 7) != 0x17) {
          lVar2 = (uVar4 | 7) + 1;
        }
        puVar5 = &UNK_100033e00;
      }
      else {
        puVar5 = &UNK_100033e30;
        lVar2 = lVar3;
        func_0x000104bd47d4();
      }
      *(ulong *)((long)register0x00000008 + -0x50) = uVar4;
      *(long *)((long)register0x00000008 + -0x48) = lVar3;
      *(undefined1 **)((long)register0x00000008 + -0x40) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x38) = puVar5;
      func_0x000107c60e20(lVar2);
      return;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(param_1,lVar3,uVar4 + 1);
    return;
  }
LAB_10a9dbb74:
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar6;
  param_1[2] = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 10a9dbc34; end: 10a9dbcc3;  */

void FUN_10a9dbc34(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_a0 [120];
  long *plStack_28;
  
  FUN_10a25eec8(auStack_a0,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x8c0));
  FUN_10aa05fb8(param_1,auStack_a0);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10a9dbcc4; end: 10a9dbda3;  */

long * FUN_10a9dbcc4(long *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_a0 [120];
  long *plStack_28;
  
  uVar12 = (undefined4)((ulong)param_4 >> 0x20);
  uVar11 = (uint)param_4;
  iVar9 = (int)param_3;
  if (iVar9 < 2) {
    if (iVar9 != 0) {
      if (iVar9 == 1) {
        FUN_10a00946c(&UNK_10f689eb7);
      }
LAB_10a9dbd84:
      puVar5 = &UNK_10f689f09;
      FUN_10a00946c();
      func_0x00010a042d30(unaff_x20 + 0x70);
      __Unwind_Resume();
      ppuVar8 = &puStack_f0;
      plVar14 = (long *)(ulong)((uVar11 & 7) != 0);
      lVar13 = *(long *)(*(long *)(*(long *)(puVar5 + 0x18) + 0x100) + 0x260);
      puStack_f0 = &UNK_10f653c20;
      uStack_e8 = 0x21;
      if (lVar13 == 0) {
        FUN_10a0edfc4();
        __ZNSt3__115recursive_mutex4lockEv(param_3 + 2);
        plVar6 = (long *)0x48;
        __Znwm();
        plVar6[2] = (long)&PTR_FUN_110c37678;
        plVar6[3] = CONCAT44(uVar12,uVar11);
        puVar7 = (undefined8 *)param_3[0xb];
        lVar13 = param_3[0xc];
        *plVar6 = (long)(param_3 + 10);
        plVar6[1] = (long)puVar7;
        *puVar7 = plVar6;
        param_3[0xb] = plVar6;
        param_3[0xc] = lVar13 + 1;
        plVar14 = param_3 + 2;
        __ZNSt3__115recursive_mutex6unlockEv(plVar14);
        uVar15 = param_3[1];
        uVar10 = *param_3;
        if (param_3[1] != 0) {
          plVar1 = (long *)(param_3[1] + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *ppuVar8 = (undefined *)plVar6;
        ppuVar8[2] = (undefined *)uVar15;
        ppuVar8[1] = (undefined *)uVar10;
        return plVar14;
      }
      plVar6 = *(long **)(lVar13 + 0x228);
      (**(code **)(*plVar6 + 0x50))();
      if ((uVar11 & 1) != 0) {
        puVar7 = param_3;
        FUN_10a173a60(param_3,plVar6);
        uVar4 = 0;
        if ((uVar11 & 7) != 0) {
          uVar4 = (uint)puVar7;
        }
        plVar14 = (long *)(ulong)uVar4;
      }
      if ((uVar11 >> 1 & 1) != 0) {
        puVar7 = param_3;
        FUN_10a173ba4(param_3,plVar6);
        plVar14 = (long *)(ulong)((uint)plVar14 & (uint)puVar7);
      }
      if ((uVar11 >> 2 & 1) != 0) {
        FUN_10a173bf0(param_3,plVar6);
        plVar14 = (long *)(ulong)((uint)plVar14 & (uint)param_3);
      }
      return plVar14;
    }
    uVar10 = 0x7fffffff;
  }
  else if (iVar9 == 2) {
    uVar10 = 1;
  }
  else {
    if (iVar9 != 3) goto LAB_10a9dbd84;
    uVar10 = 0;
  }
  FUN_10a25ee8c(auStack_a0,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x8c0),uVar10);
  FUN_10aa05fb8(param_1,auStack_a0);
  if (plStack_28 != (long *)0x0) {
    plVar14 = plStack_28 + 1;
    do {
      lVar13 = *plVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      param_1 = plStack_28;
    }
  }
  return param_1;
}



/* Entry: 10a9dbda4; end: 10a9dbe6f;  */

undefined8 * FUN_10a9dbda4(long param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar9 = (undefined4)(param_3 >> 0x20);
  uVar8 = (uint)param_3;
  ppuVar7 = &puStack_50;
  puVar11 = (undefined8 *)(ulong)((param_3 & 7) != 0);
  lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x100) + 0x260);
  puStack_50 = &UNK_10f653c20;
  uStack_48 = 0x21;
  if (lVar10 == 0) {
    FUN_10a0edfc4();
    __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
    plVar5 = (long *)0x48;
    __Znwm();
    plVar5[2] = (long)&PTR_FUN_110c37678;
    plVar5[3] = CONCAT44(uVar9,uVar8);
    puVar11 = (undefined8 *)param_2[0xb];
    lVar10 = param_2[0xc];
    *plVar5 = (long)(param_2 + 10);
    plVar5[1] = (long)puVar11;
    *puVar11 = plVar5;
    param_2[0xb] = plVar5;
    param_2[0xc] = lVar10 + 1;
    puVar11 = param_2 + 2;
    __ZNSt3__115recursive_mutex6unlockEv(puVar11);
    uVar13 = param_2[1];
    uVar12 = *param_2;
    if (param_2[1] != 0) {
      plVar1 = (long *)(param_2[1] + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *ppuVar7 = (undefined *)plVar5;
    ppuVar7[2] = (undefined *)uVar13;
    ppuVar7[1] = (undefined *)uVar12;
    return puVar11;
  }
  plVar5 = *(long **)(lVar10 + 0x228);
  (**(code **)(*plVar5 + 0x50))();
  if ((param_3 & 1) != 0) {
    puVar11 = param_2;
    FUN_10a173a60(param_2,plVar5);
    uVar4 = 0;
    if ((param_3 & 7) != 0) {
      uVar4 = (uint)puVar11;
    }
    puVar11 = (undefined8 *)(ulong)uVar4;
  }
  if ((uVar8 >> 1 & 1) != 0) {
    puVar6 = param_2;
    FUN_10a173ba4(param_2,plVar5);
    puVar11 = (undefined8 *)(ulong)((uint)puVar11 & (uint)puVar6);
  }
  if ((uVar8 >> 2 & 1) != 0) {
    FUN_10a173bf0(param_2,plVar5);
    puVar11 = (undefined8 *)(ulong)((uint)puVar11 & (uint)param_2);
  }
  return puVar11;
}



/* Entry: 10a9dbe70; end: 10a9dbf17;  */

void FUN_10a9dbe70(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  plVar6[2] = (long)&PTR_FUN_110c37678;
  plVar6[3] = param_3;
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10a9dbf18; end: 10a9dbf97;  */

undefined8 * FUN_10a9dbf18(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a9dbf98; end: 10a9dc13f;  */

undefined8 * FUN_10a9dbf98(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_110c07c70;
  *(undefined2 *)(param_1 + 1) = 0x100;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[9] = puVar1 + 3;
  param_1[10] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110c37e30;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[3] = &PTR_FUN_110c37e80;
  puVar1[0x12] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10aa074ec;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0xb] = puVar1 + 3;
  param_1[0xc] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110c37e30;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110c37e80;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10aa074ec;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0xd] = puVar1 + 3;
  param_1[0xe] = puVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = param_2;
  return param_1;
}



/* Entry: 10a9dc140; end: 10a9dc2af;  */

void FUN_10a9dc140(long *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  code **ppcVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  long *plStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  long *plStack_70;
  byte bStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a3c7c48(param_1[0xf]);
  plVar4 = param_1;
  FUN_10a9dc58c();
  plVar5 = (long *)plVar4[1];
  __ZNSt3__119__shared_weak_count4lockEv();
  lVar8 = *plVar4;
  plVar4 = plVar5 + 1;
  do {
    lVar7 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  pcStack_80 = FUN_10aa074fc;
  ppuStack_78 = &PTR_DAT_110c37ec8;
  bStack_40 = 1;
  plStack_70 = param_1;
  FUN_10a626530(auStack_90,*(undefined8 *)(lVar8 + 0x228),&pcStack_80);
  FUN_10a76c5c8(param_1 + 0x10,auStack_90);
  if (plStack_88 != (long *)0x0) {
    plVar4 = plStack_88 + 1;
    do {
      lVar8 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if ((ulong)bStack_40 < 4) {
    ppcVar6 = &pcStack_80;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_40])(ppcVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if ((ulong)bStack_40 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_40])(&pcStack_80);
      __Unwind_Resume(ppcVar6);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9dc2b0);
  (*pcVar3)();
}



/* Entry: 10a9dc2b0; end: 10a9dc453;  */

void FUN_10a9dc2b0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)param_1[5];
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar6 = param_1[4];
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    if (lVar6 != 0) {
      FUN_10a3c762c(lVar6);
      lVar6 = param_1[5];
      param_1[4] = 0;
      param_1[5] = 0;
      if (lVar6 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      goto LAB_10a9dc3b8;
    }
  }
  plVar4 = (long *)param_1[3];
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar6 = param_1[2];
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    if (param_1[0x10] != 0 && lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x228);
      FUN_10a626f08(lVar6 + 0x18);
      if (*(char *)(*(long *)(lVar6 + 0x48) + 8) == '\x01') {
        (**(code **)(lVar6 + 0x40))(lVar6);
      }
    }
  }
LAB_10a9dc3b8:
  plVar4 = (long *)param_1[0x11];
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  lVar6 = (long)*(char *)((long)param_1 + 0x47);
  if (lVar6 < 0) {
    lVar6 = param_1[7];
  }
  if (lVar6 != 0) {
    plVar4 = param_1;
    (**(code **)(*param_1 + 8))();
    FUN_10a24c4ec(*(undefined8 *)(plVar4[0x24] + 0xa60),param_1 + 6);
    if (*(char *)((long)param_1 + 0x47) < '\0') {
      *(undefined1 *)param_1[6] = 0;
      param_1[7] = 0;
    }
    else {
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)((long)param_1 + 0x47) = 0;
    }
  }
  return;
}



/* Entry: 10a9dc454; end: 10a9dc58b;  */

void FUN_10a9dc454(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  code **ppcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  long *plStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  long *plStack_70;
  
  plVar7 = (long *)param_2[1];
  if (plVar7 == (long *)0x0) {
    lVar11 = 0;
    plVar7 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 == (long *)0x0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *param_2;
    }
  }
  plVar8 = (long *)param_1[3];
  if ((plVar8 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 == (long *)0x0))
  {
    bVar5 = lVar11 == 0;
  }
  else {
    bVar5 = lVar11 == param_1[2];
    plVar1 = plVar8 + 1;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      lVar11 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (!bVar5) {
    FUN_10a9dc2b0(param_1);
    lVar9 = param_2[1];
    lVar10 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    lVar11 = param_1[3];
    param_1[3] = lVar9;
    param_1[2] = lVar10;
    if (lVar11 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((char)param_1[1] == '\x01') {
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      FUN_10a3c7c48(param_1[0xf]);
      plVar7 = param_1;
      FUN_10a9dc58c();
      plVar8 = (long *)plVar7[1];
      __ZNSt3__119__shared_weak_count4lockEv();
      lVar10 = *plVar7;
      plVar7 = plVar8 + 1;
      do {
        lVar9 = *plVar7;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
      pcStack_80 = FUN_10aa074fc;
      ppuStack_78 = &PTR_DAT_110c37ec8;
      plStack_70 = param_1;
      FUN_10a626530(auStack_90,*(undefined8 *)(lVar10 + 0x228),&pcStack_80);
      FUN_10a76c5c8(param_1 + 0x10,auStack_90);
      if (plStack_88 != (long *)0x0) {
        plVar7 = plStack_88 + 1;
        do {
          lVar10 = *plVar7;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
        }
      }
      ppcVar6 = &pcStack_80;
      FUN_10a004960(ppcVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        return;
      }
      ___stack_chk_fail();
      (*(code *)0x10a004964)(&pcStack_80);
      __Unwind_Resume(ppcVar6);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9dc2b0);
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10a9dc58c; end: 10a9dc6ff;  */

long * FUN_10a9dc58c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_40;
  long *plStack_38;
  
  plVar4 = (long *)param_1[3];
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar7 = param_1[2];
    plVar5 = plVar4 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    if (lVar7 != 0) {
      return param_1 + 2;
    }
  }
  plVar4 = param_1 + 4;
  plVar5 = (long *)param_1[5];
  if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0))
  {
    lVar7 = *plVar4;
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    if (lVar7 != 0) {
      return plVar4;
    }
  }
  (**(code **)(*param_1 + 8))(param_1);
  FUN_10a3e51f0(&lStack_40);
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar7 = param_1[5];
  param_1[4] = lStack_40;
  param_1[5] = (long)plStack_38;
  if (lVar7 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined1 *)(lStack_40 + 8) = 1;
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return plVar4;
}



/* Entry: 10a9dc700; end: 10a9dc92f;  */

void FUN_10a9dc700(float param_1,float param_2,long *param_3,long *param_4,undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  long lStack_60;
  long *plStack_58;
  
  if ((char)param_3[1] == '\x01') {
    plVar4 = (long *)param_3[3];
    if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)
       ) {
      lVar6 = param_3[2];
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
      if (lVar6 != 0) {
        return;
      }
    }
    plVar4 = param_3;
    (**(code **)(*param_3 + 8))();
    lVar6 = plVar4[0x49];
    if (lVar6 == 0) {
      uVar12 = *(undefined8 *)(*param_4 + 0x24);
      uVar11 = *(undefined8 *)(*param_4 + 0x2c);
      FUN_10a9dc58c();
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar4 = (long *)param_3[1];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar4, plVar4 != (long *)0x0)) {
        lStack_60 = *param_3;
      }
      plVar4 = plStack_58;
      fVar7 = (float)uVar11;
      fVar8 = (float)((ulong)uVar11 >> 0x20);
      fVar9 = ((float)uVar12 + fVar7) * 0.5;
      fVar10 = ((float)((ulong)uVar12 >> 0x20) + fVar8) * 0.5;
      uStack_78 = CONCAT44(fVar10,fVar9);
      uStack_70 = 0;
      uStack_6c = CONCAT44(fVar8 - fVar10,fVar7 - fVar9);
      uStack_64 = 0;
      FUN_10a602f60();
      if (plVar4 == (long *)0x0) {
        return;
      }
      plVar1 = plVar4 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      FUN_10a9dc58c();
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar4 = (long *)param_3[1];
      if ((plVar4 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar4, plVar4 == (long *)0x0)) {
        lVar5 = 0;
      }
      else {
        lVar5 = *param_3;
        lStack_60 = lVar5;
      }
      plVar4 = plStack_58;
      FUN_10a394a64(lVar6);
      func_0x00010acae698(lVar6 + 0x268);
      uVar11 = NEON_fmov(0x3f800000,4);
      fVar8 = (float)((ulong)uVar11 >> 0x20);
      fVar9 = ((float)*(undefined8 *)(lVar6 + 0x2a0) + (float)uVar11) * 0.5;
      fVar10 = ((float)((ulong)*(undefined8 *)(lVar6 + 0x2a0) >> 0x20) + fVar8) * 0.5;
      fVar7 = param_1 * ((float)uVar11 - fVar9);
      fVar8 = param_2 * (fVar8 - fVar10);
      fVar9 = (fVar7 - param_1 * fVar9) * 0.5;
      fVar10 = (fVar8 - param_2 * fVar10) * 0.5;
      uStack_78 = CONCAT44(fVar10,fVar9);
      uStack_70 = 0;
      uStack_6c = CONCAT44(fVar8 - fVar10,fVar7 - fVar9);
      uStack_64 = 0;
      FUN_10a602f60(lVar5,&uStack_78,param_5);
      if (plVar4 == (long *)0x0) {
        return;
      }
      plVar1 = plVar4 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a9dc930; end: 10a9dca27;  */

undefined8 * FUN_10a9dc930(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_40;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  puStack_38 = (undefined1 *)&uStack_40;
  *param_1 = &PTR_FUN_110c36d10;
  param_1[1] = &PTR_FUN_110c36d50;
  param_1[3] = 0;
  puVar2 = param_1 + 2;
  *puVar2 = param_1 + 3;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  uStack_40 = 1;
  puVar1 = puVar2;
  FUN_10aa07590(puVar2,&uStack_40,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
  func_0x000107c2c4d8(puVar1 + 5,&UNK_10f689575,0x17);
  uStack_40 = 2;
  puStack_38 = (undefined1 *)&uStack_40;
  FUN_10aa07590(puVar2,&uStack_40,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
  func_0x000107c2c4d8(puVar2 + 5,&UNK_10f68958d,0x20);
  return param_1;
}



/* Entry: 10a9dca28; end: 10a9dca63;  */

undefined8 * FUN_10a9dca28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36d10;
  param_1[1] = &PTR_FUN_110c36d50;
  FUN_10aa07540(param_1 + 2,param_1[3]);
  return param_1;
}



/* Entry: 10a9dca64; end: 10a9dca7f;  */

void FUN_10a9dca64(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[-1] = &PTR_FUN_110c36d10;
  *param_1 = &PTR_FUN_110c36d50;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10aa07540(param_1 + 1,*puVar1);
    FUN_10aa07540(param_1 + 1,puVar1[1]);
    if (*(char *)((long)puVar1 + 0x3f) < '\0') {
      __ZdlPv(puVar1[5]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a9dca80; end: 10a9dcafb;  */

void FUN_10a9dca80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36d10;
  param_1[1] = &PTR_FUN_110c36d50;
  FUN_10aa07540(param_1 + 2,param_1[3]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a9dcafc; end: 10a9dccb3;  */

void FUN_10a9dcafc(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  
  uVar5 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_3,uVar5 + 4,0);
  plVar10 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar10 = param_3;
  }
  *(undefined4 *)plVar10 = *(undefined4 *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x28);
  plVar6 = *(long **)(param_1 + 0x18);
  plVar10 = (long *)(param_1 + 0x18);
  while (plVar11 = plVar10, plVar6 != (long *)0x0) {
    while (plVar4 = plVar6, plVar10 = plVar4, (int)plVar4[4] <= iVar1) {
      if (iVar1 <= (int)plVar4[4]) goto LAB_10a9dcbe0;
      plVar6 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar11 = plVar4 + 1;
        goto LAB_10a9dcbac;
      }
    }
    plVar6 = (long *)*plVar4;
  }
LAB_10a9dcbac:
  plVar4 = (long *)0x40;
  __Znwm();
  *(int *)(plVar4 + 4) = iVar1;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[5] = 0;
  FUN_10aa07654(param_1 + 0x10,plVar10,plVar11,plVar4);
LAB_10a9dcbe0:
  uVar5 = (ulong)*(char *)((long)plVar4 + 0x3f);
  if ((long)uVar5 < 0) {
    uVar5 = plVar4[6];
  }
  uVar7 = 0;
  while( true ) {
    uVar8 = (ulong)*(char *)((long)param_2 + 0x17);
    if ((long)uVar8 < 0) {
      uVar8 = param_2[1];
    }
    if (uVar8 <= uVar7) {
      return;
    }
    plVar10 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar10 = param_2;
    }
    uVar8 = (ulong)*(char *)((long)plVar4 + 0x3f);
    if ((long)uVar8 < 0) {
      uVar8 = plVar4[6];
    }
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar7 / uVar5;
    }
    uVar9 = uVar7 - uVar9 * uVar5;
    if (uVar8 < uVar9) break;
    plVar6 = plVar4 + 5;
    if (*(char *)((long)plVar4 + 0x3f) < '\0') {
      plVar6 = (long *)plVar4[5];
    }
    bVar2 = *(byte *)((long)param_3 + 0x17);
    uVar8 = param_3[1];
    if (-1 < (char)bVar2) {
      uVar8 = (ulong)bVar2;
    }
    if (uVar8 < uVar7 + 4) break;
    plVar11 = (long *)*param_3;
    if (-1 < (char)bVar2) {
      plVar11 = param_3;
    }
    *(byte *)((long)plVar11 + uVar7 + 4) =
         *(byte *)((long)plVar6 + uVar9) ^ *(byte *)((long)plVar10 + uVar7);
    uVar7 = uVar7 + 1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9dccb4);
  (*pcVar3)();
}



/* Entry: 10a9dccb4; end: 10a9dceb3;  */

long * FUN_10a9dccb4(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long **pplVar3;
  byte bVar4;
  code *pcVar5;
  long *plVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  
  uVar8 = (uint)*(byte *)((long)param_2 + 0x17);
  if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
    if ((ulong)param_2[1] < 4) goto LAB_10a9dce8c;
    plVar10 = (long *)*param_2;
  }
  else {
    plVar10 = param_2;
    if (uVar8 < 4) goto LAB_10a9dce8c;
  }
  plVar6 = (long *)(param_1 + 0x18);
  plVar13 = (long *)*plVar6;
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar6;
    do {
      lVar1 = 8;
      if ((int)*plVar10 <= (int)plVar13[4]) {
        lVar1 = 0;
        plVar11 = plVar13;
      }
      plVar13 = *(long **)((long)plVar13 + lVar1);
    } while (plVar13 != (long *)0x0);
    if ((plVar11 != plVar6) && ((int)plVar11[4] <= (int)*plVar10)) {
      if (*(char *)((long)plVar11 + 0x3f) < '\0') {
        func_0x000107c3192c(&plStack_40,plVar11[5],plVar11[6]);
        uVar8 = (uint)*(byte *)((long)param_2 + 0x17);
      }
      else {
        uStack_38 = plVar11[6];
        plStack_40 = (long *)plVar11[5];
        uStack_30 = plVar11[7];
      }
      uVar12 = param_2[1];
      if (-1 < (char)uVar8) {
        uVar12 = (ulong)uVar8;
      }
      plVar10 = param_3;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (param_3,uVar12 - 4,0);
      uVar9 = 0;
      uVar12 = 0;
      uVar2 = uStack_38;
      if (-1 < uStack_30) {
        uVar2 = (ulong)uStack_30._7_1_;
      }
      while( true ) {
        uVar14 = (ulong)*(char *)((long)param_2 + 0x17);
        if ((long)uVar14 < 0) {
          uVar14 = param_2[1];
        }
        if (uVar14 - 4 <= uVar12) {
          if (uStack_30 < 0) {
            __ZdlPv(plStack_40);
            plVar10 = plStack_40;
          }
          return plVar10;
        }
        if (uVar14 < uVar12 + 4) break;
        uVar14 = uStack_38;
        if (-1 < uStack_30) {
          uVar14 = (ulong)uStack_30._7_1_;
        }
        if (uVar14 < uVar9) break;
        bVar4 = *(byte *)((long)param_3 + 0x17);
        uVar14 = param_3[1];
        if (-1 < (char)bVar4) {
          uVar14 = (ulong)bVar4;
        }
        if (uVar14 < uVar12) break;
        plVar6 = (long *)*param_2;
        if (-1 < *(char *)((long)param_2 + 0x17)) {
          plVar6 = param_2;
        }
        pplVar3 = (long **)plStack_40;
        if (-1 < uStack_30) {
          pplVar3 = &plStack_40;
        }
        plVar13 = (long *)*param_3;
        if (-1 < (char)bVar4) {
          plVar13 = param_3;
        }
        *(byte *)((long)plVar13 + uVar12) =
             *(byte *)((long)pplVar3 + uVar9) ^ *(byte *)((long)plVar6 + uVar12 + 4);
        uVar14 = 0;
        if (uVar9 + 1 != uVar2) {
          uVar14 = uVar9 + 1;
        }
        uVar12 = uVar12 + 1;
        uVar9 = uVar14;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9dce80);
      (*pcVar5)();
    }
  }
  FUN_10a00946c(&UNK_10f6895c3);
LAB_10a9dce8c:
  uVar8 = (uint)param_2;
  plVar10 = (long *)&UNK_10f6895ae;
  FUN_10a00946c();
  if ((char)uStack_30._7_1_ < '\0') {
    __ZdlPv(plStack_40);
  }
  __Unwind_Resume();
  if ((-1 < (int)uVar8) && ((ulong)uVar8 <= (ulong)plVar10[4])) {
    *(uint *)(plVar10 + 5) = uVar8;
    return plVar10;
  }
  puVar7 = &UNK_10f6895e0;
  FUN_10a00946c();
  return (long *)(ulong)*(uint *)(puVar7 + 0x28);
}



/* Entry: 10a9dceb4; end: 10a9dcedf;  */

ulong FUN_10a9dceb4(ulong param_1,uint param_2)

{
  undefined *puVar1;
  
  if ((-1 < (int)param_2) && ((ulong)param_2 <= *(ulong *)(param_1 + 0x20))) {
    *(uint *)(param_1 + 0x28) = param_2;
    return param_1;
  }
  puVar1 = &UNK_10f6895e0;
  FUN_10a00946c();
  return (ulong)*(uint *)(puVar1 + 0x28);
}



/* Entry: 10a9dcee0; end: 10a9dcf67;  */

undefined4 FUN_10a9dcee0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 10a9dcf68; end: 10a9dd033;  */

void FUN_10a9dcf68(undefined8 param_1)

{
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuStack_80 = (undefined **)0xffffffff00000002;
  puStack_88 = (undefined *)0x0;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  puStack_70 = &UNK_10f6891b4;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x16e;
  FUN_10a9dd034(param_1,&puStack_88);
  puStack_98 = &UNK_10f68960f;
  puStack_90 = &UNK_10f68961e;
  ppuStack_80 = &puStack_98;
  puStack_88 = &UNK_10f6895f8;
  uStack_78 = 2;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10aa077a4();
  FUN_10aa07a38(param_1);
  return;
}



/* Entry: 10a9dd034; end: 10a9dd10b;  */

/* WARNING: Removing unreachable block (ram,0x00010a9dd0cc) */

undefined1  [16] FUN_10a9dd034(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f689f1a,0x10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aa076a8(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9dd10c; end: 10a9dd233;  */

void FUN_10a9dd10c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 auStack_68 [2];
  char cStack_51;
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  FUN_10aa07cf0(auStack_40,auStack_68,param_2);
  FUN_10a9dd234(param_1,*param_2,auStack_40);
  FUN_10a9f8d4c(auStack_68,param_3,param_1);
  FUN_10aa0843c(param_2 + 1,auStack_68,auStack_68);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a9dd234; end: 10a9dd38b;  */

undefined8 ** FUN_10a9dd234(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_88 = param_2;
  if (param_2 == 0) {
    uStack_a0 = 0;
    FUN_10aa08164(&uStack_80,&uStack_a0,param_3);
    param_1[1] = ppuStack_78;
    *param_1 = uStack_80;
    if (ppuStack_78 != (undefined8 **)0x0) {
      ppuVar4 = ppuStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
        if (bVar3) {
          *ppuVar4 = (undefined8 *)((long)*ppuVar4 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a044790(auStack_70);
    ppuVar4 = apuStack_68;
    (*(code *)*apuStack_68[0])();
    if (ppuStack_78 == (undefined8 **)0x0) goto LAB_10a9dd344;
    ppuVar1 = ppuStack_78 + 1;
    do {
      puVar6 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = (undefined8 *)((long)puVar6 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppuVar5 = ppuStack_78;
    } while (cVar2 != '\0');
  }
  else {
    puStack_98 = *(undefined8 **)(param_2 + 0x858);
    ppuStack_90 = *(undefined8 ***)(param_2 + 0x860);
    if (ppuStack_90 != (undefined8 **)0x0) {
      ppuVar4 = ppuStack_90 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
        if (bVar3) {
          *ppuVar4 = (undefined8 *)((long)*ppuVar4 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuVar4 = &puStack_98;
    FUN_10aa07eec(param_1,ppuVar4,&lStack_88);
    if (ppuStack_90 == (undefined8 **)0x0) goto LAB_10a9dd344;
    ppuVar1 = ppuStack_90 + 1;
    do {
      puVar6 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = (undefined8 *)((long)puVar6 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppuVar5 = ppuStack_90;
    } while (cVar2 != '\0');
  }
  if (puVar6 == (undefined8 *)0x0) {
    (*(code *)(*ppuVar5)[2])(ppuVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppuVar4 = ppuVar5;
  }
LAB_10a9dd344:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    __Unwind_Resume();
    func_0x00010a05248c(ppuVar4 + 3);
    if (*(char *)((long)ppuVar4 + 0x17) < '\0') {
      __ZdlPv(*ppuVar4);
    }
    return ppuVar4;
  }
  return ppuVar4;
}



/* Entry: 10a9dd38c; end: 10a9dd3c3;  */

undefined8 * FUN_10a9dd38c(undefined8 *param_1)

{
  func_0x00010a05248c(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a9dd3c4; end: 10a9dd42b;  */

void FUN_10a9dd3c4(undefined8 param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_10a9dd42c(auStack_38);
  FUN_10a0f19e0(param_1,auStack_38,0);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a9dd42c; end: 10a9dd65f;  */

/* WARNING: Removing unreachable block (ram,0x00010a9dd4d8) */
/* WARNING: Removing unreachable block (ram,0x00010a9dd5dc) */

void FUN_10a9dd42c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  short ****ppppsVar1;
  short ****ppppsVar2;
  long lVar3;
  short ****ppppsVar4;
  undefined8 *puVar5;
  ulong uVar6;
  short ***pppsStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  short sStack_a8;
  short ***pppsStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 auStack_58 [3];
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_70,*param_3,param_3[1]);
  }
  else {
    uStack_68 = param_3[1];
    uStack_70 = *param_3;
    lStack_60 = param_3[2];
  }
  FUN_10a0f2224(auStack_58,&uStack_70);
  if (lStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  lVar3 = param_2 + 8;
  func_0x000104c5e210(lVar3,auStack_58);
  if (lVar3 == 0) {
    puVar5 = auStack_58;
  }
  else {
    puVar5 = (undefined8 *)(lVar3 + 0x28);
    if (*(char *)(lVar3 + 0x3f) < '\0') {
      func_0x000107c3192c(&pppsStack_90,*puVar5,*(undefined8 *)(lVar3 + 0x30));
      goto LAB_10a9dd4ec;
    }
  }
  uStack_88 = puVar5[1];
  pppsStack_90 = (short ***)*puVar5;
  uStack_80 = puVar5[2];
LAB_10a9dd4ec:
  sStack_a8 = 0x2f7e;
  uVar6 = uStack_88;
  ppppsVar2 = (short ****)pppsStack_90;
  if (-1 < (long)uStack_80) {
    uVar6 = uStack_80 >> 0x38;
    ppppsVar2 = &pppsStack_90;
  }
  if (1 < (long)uVar6) {
    ppppsVar1 = (short ****)((long)ppppsVar2 + uVar6);
    ppppsVar4 = ppppsVar2;
    while (_memchr(ppppsVar4,0x7e,uVar6 - 1), ppppsVar4 != (short ****)0x0) {
      if (*(short *)ppppsVar4 == sStack_a8) {
        if ((ppppsVar4 != ppppsVar1) && ((long)ppppsVar4 - (long)ppppsVar2 != -1)) {
          uVar6 = *(ulong *)(param_2 + 0x38);
          lVar3 = *(long *)(param_2 + 0x30);
          if (-1 < (char)*(byte *)(param_2 + 0x47)) {
            uVar6 = (ulong)*(byte *)(param_2 + 0x47);
            lVar3 = param_2 + 0x30;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmPKcm
                    (&pppsStack_90,(long)ppppsVar4 - (long)ppppsVar2,2,lVar3,uVar6);
        }
        break;
      }
      ppppsVar4 = (short ****)((long)ppppsVar4 + 1);
      uVar6 = (long)ppppsVar1 - (long)ppppsVar4;
      if ((long)uVar6 < 2) break;
    }
  }
  uStack_b8 = uStack_88;
  pppsStack_c0 = pppsStack_90;
  uStack_b0 = uStack_80;
  pppsStack_90 = (short ***)0x0;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10a0f2224(param_1,&pppsStack_c0);
  if ((long)uStack_b0 < 0) {
    __ZdlPv(pppsStack_c0);
  }
  if ((long)uStack_80 < 0) {
    __ZdlPv(pppsStack_90);
  }
  return;
}



/* Entry: 10a9dd660; end: 10a9dd6c7;  */

void FUN_10a9dd660(undefined8 param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_10a9dd42c(auStack_38);
  FUN_10a0f1b8c(param_1,auStack_38,0);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a9dd6c8; end: 10a9dd7c3;  */

bool FUN_10a9dd6c8(long param_1,undefined8 *param_2)

{
  undefined8 *****pppppuVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 ****ppppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_50,*param_2,param_2[1]);
  }
  else {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  FUN_10a0f2224(&ppppuStack_38,&uStack_50);
  plVar3 = (long *)(param_1 + 0x30);
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
  }
  if ((long)*(char *)(param_1 + 0x47) < 0) {
    if (uStack_30 < *(ulong *)(param_1 + 0x38)) goto LAB_10a9dd74c;
    plVar3 = (long *)*plVar3;
  }
  else if (uStack_30 < (ulong)(long)*(char *)(param_1 + 0x47)) {
LAB_10a9dd74c:
    bVar2 = false;
    goto joined_r0x00010a9dd778;
  }
  pppppuVar1 = (undefined8 *****)ppppuStack_38;
  if (-1 < (char)bStack_21) {
    pppppuVar1 = &ppppuStack_38;
  }
  _memcmp(plVar3,pppppuVar1);
  bVar2 = (int)plVar3 == 0;
joined_r0x00010a9dd778:
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppppuStack_38);
  }
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return bVar2;
}



/* Entry: 10a9dd7c4; end: 10a9dd91f;  */

void FUN_10a9dd7c4(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 uStack_31;
  
  uVar2 = param_2;
  FUN_10a9dd6c8();
  if ((uVar2 & 1) != 0) {
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_80,*param_3,param_3[1]);
    }
    else {
      uStack_78 = param_3[1];
      uStack_80 = *param_3;
      lStack_70 = param_3[2];
    }
    FUN_10a0f2224(auStack_68,&uStack_80);
    lVar3 = (long)*(char *)(param_2 + 0x47);
    if (lVar3 < 0) {
      lVar3 = *(long *)(param_2 + 0x38);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (auStack_50,auStack_68,lVar3,0xffffffffffffffff,&uStack_31);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    if (lStack_70 < 0) {
      __ZdlPv(uStack_80);
    }
    FUN_10a57796c(param_1,auStack_50);
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
    return;
  }
  FUN_10a0ee900(auStack_50,&UNK_10f689655,0x40);
  FUN_10a0029c0(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9dd8d4);
  (*pcVar1)();
}



/* Entry: 10a9dd920; end: 10a9dda0b;  */

undefined1  [16] FUN_10a9dd920(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 6;
  auVar1._0_8_ = &DAT_10f302afc;
  return auVar1;
}



/* Entry: 10a9dda0c; end: 10a9ddd3f;  */

void FUN_10a9dda0c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&DAT_10f302afc,6);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c37440;
  pppuVar2 = (undefined8 ***)&UNK_10f6891b4;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c37440;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9ddd20;
    FUN_10a054dac(param_1,&UNK_10f689696,FUN_10aa08ba0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9ddd20;
    FUN_10a054dac(param_1,&UNK_10f6896a0,FUN_10aa08ce8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9ddd20;
    FUN_10a054dac(param_1,&UNK_10f6896ac,FUN_10aa08dc8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9ddd20;
    FUN_10a054dac(param_1,&UNK_10f6896bb,FUN_10aa08ea8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9ddd20;
    FUN_10a054dac(param_1,&UNK_10f6896ce,FUN_10aa08f88,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f302afc,6);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a9ddd20:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9ddd24);
  (*pcVar6)();
}



/* Entry: 10a9ddd40; end: 10a9de0b7;  */

void FUN_10a9ddd40(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f689f2b,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c382f0;
  pppuVar2 = (undefined8 ***)&UNK_10f6891b4;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x10200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0x16e);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x102,0x16e,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c382f0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9de098;
    FUN_10a054dac(param_1,&UNK_10f57b07d,FUN_10aa09044,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9de098;
    FUN_10a054dac(param_1,&UNK_10f6896d9,FUN_10aa09144,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9de098;
    FUN_10a054dac(param_1,&UNK_10f6896ed,FUN_10aa092c4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9de098;
    FUN_10a054dac(param_1,&UNK_10f689702,FUN_10aa0946c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9de098;
    FUN_10a054dac(param_1,&UNK_10f689718,FUN_10aa0962c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9de098;
    FUN_10a054dac(param_1,&UNK_10f689730,FUN_10aa096e4,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f689f2b,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a9de098:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9de09c);
  (*pcVar6)();
}



/* Entry: 10a9de0b8; end: 10a9de1cb;  */

undefined8 * FUN_10a9de0b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c36e20;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_2;
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0;
  __ZNSt3__115recursive_mutexC1Ev(puVar1 + 2);
  puVar1[10] = puVar1 + 10;
  puVar1[0xb] = puVar1 + 10;
  puVar1[0xc] = 0;
  FUN_10a27fba8(param_1 + 0x11,puVar1);
  return param_1;
}



/* Entry: 10a9de1cc; end: 10a9de247;  */

void FUN_10a9de1cc(long param_1)

{
  long lVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x000107c2b054(auStack_38,&UNK_10f689744);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  FUN_10a9de248(param_1);
  return;
}



/* Entry: 10a9de248; end: 10a9de5d3;  */

void FUN_10a9de248(long param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined ***pppuVar8;
  undefined8 in_x7;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  long alStack_168 [7];
  undefined8 uStack_130;
  code *pcStack_128;
  undefined **ppuStack_120;
  long lStack_118;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_128 = FUN_10aa09a2c;
  ppuStack_120 = &PTR_FUN_110c37f50;
  lStack_118 = param_1;
  FUN_10a3bf120(&puStack_178);
  lVar11 = *(long *)(*(long *)(param_1 + 0x80) + 0x100);
  FUN_10a00ce20(&uStack_1a0,*(undefined8 *)(param_1 + 0x88),&pcStack_128);
  plVar5 = (long *)0x138;
  __Znwm();
  puStack_a8 = puStack_178;
  plVar10 = plVar5 + 1;
  *plVar10 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110b9f3b0;
  plVar1 = plVar5 + 3;
  puStack_178 = (undefined8 *)0x0;
  plStack_a0 = (long *)uStack_170;
  (**(code **)(alStack_168[0] + 0x10))(auStack_98,alStack_168);
  uStack_60 = uStack_130;
  uVar2 = *(ulong *)(lVar11 + 0x210);
  lVar9 = *(long *)(lVar11 + 0x208);
  if (-1 < (char)*(byte *)(lVar11 + 0x21f)) {
    uVar2 = (ulong)*(byte *)(lVar11 + 0x21f);
    lVar9 = lVar11 + 0x208;
  }
  uStack_e8 = 0x10a05c39c;
  ppuStack_e0 = &PTR_FUN_110b9f370;
  uStack_d8 = uStack_1a0;
  uStack_c8 = uStack_190;
  uStack_d0 = uStack_198;
  uStack_198 = 0;
  uStack_190 = 0;
  FUN_10a23708c(plVar1,&UNK_10f689f38,0x12,&DAT_10f2d965b,3,&puStack_a8,1,in_x7,lVar9,uVar2,
                &uStack_e8);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  FUN_10a042634(&puStack_a8);
  plStack_188 = plVar1;
  plStack_180 = plVar5;
  func_0x00010a05c07c(&uStack_1a0);
  plVar6 = *(long **)(*(long *)(*(long *)(param_1 + 0x80) + 0x100) + 0x1c8);
  (**(code **)(*plVar6 + 0x60))();
  puStack_a8 = (undefined8 *)0x0;
  plStack_a0 = (long *)0x0;
  plVar7 = (long *)plVar6[1];
  if (((plVar7 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_a0 = plVar7, plVar7 == (long *)0x0)) ||
     (puStack_a8 = (undefined8 *)*plVar6, puStack_a8 == (undefined8 *)0x0)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f68975d,&UNK_10f689799,0x56,&UNK_10f6897d8);
    }
  }
  else {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_1b0 = plVar1;
    plStack_1a8 = plVar5;
    (**(code **)*puStack_a8)(puStack_a8,&plStack_1b0);
    plVar1 = plStack_1a8;
    if (plStack_1a8 != (long *)0x0) {
      plVar5 = plStack_1a8 + 1;
      do {
        lVar9 = *plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  plVar1 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar5 = plStack_a0 + 1;
    do {
      lVar9 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_180;
  if (plStack_180 != (long *)0x0) {
    plVar5 = plStack_180 + 1;
    do {
      lVar9 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_10a042634(&puStack_178);
  pppuVar8 = &ppuStack_120;
  (*(code *)*ppuStack_120)(pppuVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&plStack_1b0);
  func_0x00010a05a8c4(&puStack_a8);
  FUN_10a05bd88(&plStack_188);
  FUN_10a042634(&puStack_178);
  do {
    (*(code *)*ppuStack_120)(&ppuStack_120);
    __Unwind_Resume(pppuVar8);
  } while( true );
}



/* Entry: 10a9de5d4; end: 10a9de60b;  */

undefined8 * FUN_10a9de5d4(undefined8 *param_1)

{
  func_0x00010aa099d4(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a9de60c; end: 10a9de6d7;  */

void FUN_10a9de60c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x8;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 auStack_98 [2];
  char cStack_81;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar8 = *(long *)(param_2 + 0x80);
  puVar7 = (undefined8 *)&UNK_10f689863;
  func_0x000107c2b054(auStack_48,&UNK_10f689863);
  if (lVar8 != 0) {
    puVar7 = auStack_48;
    FUN_10a76c080(*(undefined8 *)(lVar8 + 0x8d8),puVar7);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  if ((ulong)(long)(int)param_3 <
      (ulong)(*(long *)(param_2 + 0x70) - *(long *)(param_2 + 0x68) >> 4)) {
    puVar7 = (undefined8 *)(*(long *)(param_2 + 0x68) + (long)(int)param_3 * 0x10);
    lVar8 = puVar7[1];
    uVar10 = *puVar7;
    param_1[1] = puVar7[1];
    *param_1 = uVar10;
    if (lVar8 != 0) {
      plVar1 = (long *)(lVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  puVar5 = &UNK_10f689886;
  FUN_10a00946c();
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_58 = FUN_10a9de6d8;
  lVar9 = *(long *)(puVar6 + 0x80);
  lStack_80 = lVar8;
  uStack_78 = param_3;
  lStack_70 = param_2;
  puStack_68 = puVar5;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000107c2b054(auStack_98,&UNK_10f6898a2);
  if (lVar9 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar9 + 0x8d8),auStack_98);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  puVar6 = puVar6 + 0x40;
  FUN_10aa0a8ac(puVar6,puVar7);
  if (puVar6 != (undefined *)0x0) {
    lVar8 = *(long *)(puVar6 + 0x30);
    uVar10 = *(undefined8 *)(puVar6 + 0x28);
    extraout_x8[1] = *(undefined8 *)(puVar6 + 0x30);
    *extraout_x8 = uVar10;
    if (lVar8 != 0) {
      plVar1 = (long *)(lVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_98,&UNK_10f6898c8,puVar7);
  FUN_10a0029c0(auStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9de794);
  (*pcVar4)();
}



/* Entry: 10a9de6d8; end: 10a9de7b3;  */

void FUN_10a9de6d8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar5 = *(long *)(param_2 + 0x80);
  func_0x000107c2b054(auStack_48,&UNK_10f6898a2);
  if (lVar5 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  param_2 = param_2 + 0x40;
  FUN_10aa0a8ac(param_2,param_3);
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x30);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_48,&UNK_10f6898c8,param_3);
  FUN_10a0029c0(auStack_48);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9de794);
  (*pcVar4)();
}



/* Entry: 10a9de7b4; end: 10a9de88f;  */

void FUN_10a9de7b4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar5 = *(long *)(param_2 + 0x80);
  func_0x000107c2b054(auStack_48,&UNK_10f6898e9);
  if (lVar5 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  param_2 = param_2 + 0x18;
  FUN_10aa0a8ac(param_2,param_3);
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x30);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_48,&UNK_10f68990d,param_3);
  FUN_10a0029c0(auStack_48);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9de870);
  (*pcVar4)();
}



/* Entry: 10a9de890; end: 10a9de933;  */

long FUN_10a9de890(long param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar2 = (ulong)((int)param_2 - 1);
  if ((0 < (int)param_2) &&
     (uVar2 < (ulong)(*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 4))) {
    return *(long *)(*(long *)(param_1 + 0x68) + uVar2 * 0x10) + 0x60;
  }
  __ZNSt3__19to_stringEi(auStack_50,param_2);
  FUN_109feb280(auStack_38,&UNK_10f68992c,auStack_50);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9de900);
  (*pcVar1)();
}



/* Entry: 10a9de934; end: 10a9dea3b;  */

void FUN_10a9de934(ulong *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong **ppuVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong *puStack_48;
  undefined1 uStack_40;
  char cStack_31;
  
  lVar8 = *(long *)(param_2 + 0x80);
  ppuVar7 = (ulong **)&UNK_10f689953;
  func_0x000107c2b054(&puStack_48);
  if (lVar8 != 0) {
    ppuVar7 = &puStack_48;
    FUN_10a76c080(*(undefined8 *)(lVar8 + 0x8d8));
  }
  if (cStack_31 < '\0') {
    __ZdlPv(puStack_48);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar9 = *(undefined8 **)(param_2 + 0x68);
  puVar2 = *(undefined8 **)(param_2 + 0x70);
  uStack_40 = 0;
  lVar8 = (long)puVar2 - (long)puVar9;
  if (lVar8 != 0) {
    puVar6 = (undefined8 *)(lVar8 >> 4);
    puStack_48 = param_1;
    if ((ulong)puVar6 >> 0x3c != 0) {
      FUN_10a9f8e30();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9dea10);
      (*pcVar5)();
    }
    FUN_10a9f8e44();
    *param_1 = (ulong)puVar6;
    param_1[1] = (ulong)puVar6;
    param_1[2] = (ulong)(puVar6 + (long)ppuVar7 * 2);
    do {
      lVar8 = puVar9[1];
      uVar10 = *puVar9;
      puVar6[1] = puVar9[1];
      *puVar6 = uVar10;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar9 = puVar9 + 2;
      puVar6 = puVar6 + 2;
    } while (puVar9 != puVar2);
    param_1[1] = (ulong)puVar6;
  }
  return;
}



/* Entry: 10a9dea3c; end: 10a9dec2b;  */

void FUN_10a9dea3c(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 *puStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  byte bStack_79;
  undefined8 **appuStack_78 [2];
  char cStack_61;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  
  uVar7 = *(ulong *)(param_2 + 0x18);
  if (-1 < (char)*(byte *)(param_2 + 0x27)) {
    uVar7 = (ulong)*(byte *)(param_2 + 0x27);
  }
  FUN_10a003c90(appuStack_78,uVar7 + 2,&puStack_90);
  pppuVar5 = (undefined8 ***)appuStack_78[0];
  if (-1 < cStack_61) {
    pppuVar5 = appuStack_78;
  }
  if (uVar7 != 0) {
    puVar8 = *(undefined8 **)(param_2 + 0x10);
    if (-1 < *(char *)(param_2 + 0x27)) {
      puVar8 = (undefined8 *)(param_2 + 0x10);
    }
    _memmove(pppuVar5,puVar8,uVar7);
  }
  *(undefined2 *)((long)pppuVar5 + uVar7) = 0x5f67;
  *(undefined1 *)((undefined2 *)((long)pppuVar5 + uVar7) + 1) = 0;
  bStack_79 = 0x10;
  puStack_90 = (undefined1 *)0x3030303030303030;
  uStack_88 = 0x3030303030303030;
  uVar7 = 0xf;
  uStack_80 = 0;
  while( true ) {
    uVar1 = uStack_88;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
    }
    if (uVar1 < uVar7) break;
    ppuVar2 = (undefined1 **)puStack_90;
    if (-1 < (char)bStack_79) {
      ppuVar2 = &puStack_90;
    }
    *(undefined *)((long)ppuVar2 + uVar7) = (&UNK_10f689f4b)[param_3 & 0xf];
    param_3 = param_3 >> 4;
    uVar3 = (int)uVar7 - 1;
    uVar7 = (ulong)uVar3;
    if (uVar3 == 0xffffffff) {
      uVar7 = uStack_88;
      ppuVar2 = (undefined1 **)puStack_90;
      if (-1 < (char)bStack_79) {
        uVar7 = (ulong)bStack_79;
        ppuVar2 = &puStack_90;
      }
      pppuVar5 = appuStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar5,ppuVar2,uVar7);
      puStack_58 = pppuVar5[1];
      puStack_60 = *pppuVar5;
      puStack_50 = pppuVar5[2];
      pppuVar5[1] = (undefined8 **)0x0;
      pppuVar5[2] = (undefined8 **)0x0;
      *pppuVar5 = (undefined8 **)0x0;
      ppuVar6 = &puStack_60;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar6,&UNK_10f689975,5);
      puVar8 = *ppuVar6;
      param_1[1] = ppuVar6[1];
      *param_1 = puVar8;
      param_1[2] = ppuVar6[2];
      ppuVar6[1] = (undefined8 *)0x0;
      ppuVar6[2] = (undefined8 *)0x0;
      *ppuVar6 = (undefined8 *)0x0;
      if ((long)puStack_50 < 0) {
        __ZdlPv(puStack_60);
      }
      if ((char)bStack_79 < '\0') {
        __ZdlPv(puStack_90);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(appuStack_78[0]);
      }
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9debe8);
  (*pcVar4)();
}



/* Entry: 10a9dec2c; end: 10a9dec6b;  */

undefined8 * FUN_10a9dec2c(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a9dec6c; end: 10a9decef;  */

undefined1  [16] FUN_10a9dec6c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f689f5c;
  return auVar1;
}



/* Entry: 10a9decf0; end: 10a9dedd3;  */

void FUN_10a9decf0(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = &UNK_10f689f68;
  uStack_80 = 0xffffffff00000002;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10aa0a990(param_1,&puStack_88,0x19);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f68997b;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10aa0aa80();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f689985;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10aa0ac20(param_1,&puStack_88,0);
  FUN_10aa0ad40(param_1);
  return;
}



/* Entry: 10a9dedd4; end: 10a9df08b;  */

void FUN_10a9dedd4(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c38000;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 0x12;
    puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 0x12;
    puVar6 = (undefined8 *)(param_1 + 0x1b8);
  }
  *(undefined2 *)(puVar6 + 2) = 0x736e;
  puVar6[1] = 0x6f697469736f5064;
  *puVar6 = 0x6e41736870796c47;
  *(undefined1 *)((long)puVar6 + 0x12) = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &UNK_10f689f76;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a052690(param_1 + 0x168,&puStack_a0);
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c38000;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&UNK_10f689f76,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9df088;
    FUN_10a054dac(param_1,&UNK_10f689990,FUN_10aa0b418,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9df088;
    FUN_10a054dac(param_1,&UNK_10f68999a,FUN_10aa0b7b8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9df088;
    FUN_10a054dac(param_1,&UNK_10f6899a7,FUN_10aa0babc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9df088;
    FUN_10a054dac(param_1,&UNK_10f6899b8,FUN_10aa0bd20,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    puStack_a0 = *(undefined **)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uVar7 = *(ulong *)(lVar1 + -0x48);
    uVar8 = *(ulong *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar2 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar3 = uStack_80._4_4_;
    uVar5 = param_1;
    uStack_88 = uVar8;
    uStack_80 = uVar7;
    FUN_10a0051e8(param_1,uVar8 & 0xffffffff,uVar2,uStack_50 & 0xffffffff,uVar7 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&puStack_a0,(undefined8 *)(param_1 + 0x1b8),&UNK_10f689f76,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a9df088:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9df08c);
  (*pcVar4)();
}



/* Entry: 10a9df08c; end: 10a9df147;  */

void FUN_10a9df08c(undefined8 param_1)

{
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  ppuStack_80 = (undefined **)0xffffffff00000002;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  FUN_10a9df148(param_1,&puStack_88);
  puStack_98 = &UNK_10f6899e3;
  puStack_90 = &UNK_10f6899e8;
  ppuStack_80 = &puStack_98;
  puStack_88 = &UNK_10f6899cd;
  uStack_78 = 2;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10aa0c000();
  func_0x00010aa0c77c(param_1);
  return;
}



/* Entry: 10a9df148; end: 10a9df21f;  */

/* WARNING: Removing unreachable block (ram,0x00010a9df1e0) */

undefined1  [16] FUN_10a9df148(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f689f5c,0xb);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aa0bf04(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9df220; end: 10a9df2cf;  */

undefined8 * FUN_10a9df220(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c371e8;
  param_1[3] = 0;
  uVar1 = 600;
  __Znwm(600);
  FUN_10aa0cba0();
  FUN_10aa0c838(param_1 + 3,uVar1);
  return param_1;
}



/* Entry: 10a9df2d0; end: 10a9df35f;  */

undefined8 * FUN_10a9df2d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c371e8;
  FUN_10aa0c838(param_1 + 3,0);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9df360; end: 10a9df3df;  */

void FUN_10a9df360(undefined8 param_1,long param_2,uint param_3,long param_4,int param_5,int param_6
                  )

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  undefined1 uStack_11;
  
  uVar1 = *(uint *)(param_4 + (long)param_5 * 0x14 + 8);
  if (param_3 != 0) {
    uVar5 = (ulong)param_3;
    uVar3 = 0xffffffffffffffff;
    puVar6 = (uint *)(param_4 + 8);
    do {
      uVar2 = *puVar6;
      uVar4 = uVar3;
      if (uVar2 <= uVar3) {
        uVar4 = (ulong)uVar2;
      }
      if (uVar2 <= uVar1) {
        uVar4 = uVar3;
      }
      uVar5 = uVar5 - 1;
      uVar3 = uVar4;
      puVar6 = puVar6 + 5;
    } while (uVar5 != 0);
    if (uVar4 != 0xffffffffffffffff) goto LAB_10a9df3c4;
  }
  uVar4 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar4 = (ulong)*(byte *)(param_2 + 0x17);
  }
  uVar4 = uVar4 + (long)param_6;
LAB_10a9df3c4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (param_1,param_2,uVar1 - param_6,uVar4 - uVar1,&uStack_11);
  return;
}



/* Entry: 10a9df3e0; end: 10a9df993;  */

void FUN_10a9df3e0(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long **pplVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  char cStack_b9;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puVar13 = *(undefined8 **)(param_2 + 0x18);
  FUN_10a9e1910(&puStack_a8,param_4);
  FUN_10a9df994(puVar13,&puStack_a8,*(undefined4 *)(param_4 + 0x110),0,0);
  puVar6 = puVar13;
  if (lStack_98 < 0) {
    puVar6 = puStack_a8;
    __ZdlPv();
  }
  if ((puVar13 == (undefined8 *)0x0) || (lVar15 = puVar13[10], lVar15 == 0)) {
    param_1[1] = uStack_78;
    *param_1 = uStack_80;
    param_1[2] = uStack_70;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(param_2 + 0x18);
    lStack_88 = lVar15;
    func_0x0001096f6e38();
    func_0x0001096f7104();
    lVar10 = lVar15;
    func_0x0001096fc5f0(lVar15,0);
    if ((*(int *)(lVar10 + 4) != 0) && (*(undefined **)(lVar10 + 0xa0) == &UNK_1096fc390)) {
      **(undefined4 **)(lVar10 + 0x98) = 0;
    }
    FUN_10a9eea84(uVar16,puVar6);
    func_0x00010970fc5c(lVar10,puVar6,0,0,0);
    func_0x0001096fba38(lVar10);
    uVar2 = *(uint *)(puVar6 + 0xc);
    if (uVar2 != 0) {
      uVar17 = 0;
      lVar10 = puVar6[0xe];
      do {
        lVar7 = *(long *)(param_2 + 0x18);
        FUN_10aa0d000(lVar7,lVar15,&lStack_88);
        puVar14 = (undefined4 *)(lVar10 + uVar17 * 0x14);
        puStack_a8 = (undefined8 *)CONCAT44(puStack_a8._4_4_,*puVar14);
        lStack_98 = 0;
        uStack_90 = 0;
        lStack_a0 = 0;
        FUN_10a0ca588(&lStack_a0,puVar13[0x15],puVar13[0x16],
                      (long)(puVar13[0x16] - puVar13[0x15]) >> 2);
        lVar12 = lVar7 + 0x18;
        FUN_10aa0d46c(lVar12,&puStack_a8);
        if (lVar12 == 0) {
LAB_10a9df664:
          lVar12 = lVar15;
          func_0x000109752c30(lVar15,*puVar14,0);
          if ((int)lVar12 == 0) {
            FUN_10a9df360(&plStack_d0,param_3,*(undefined4 *)(puVar6 + 0xc),puVar6[0xe],uVar17,0);
            uVar3 = *puVar14;
            uVar16 = *(undefined8 *)(lVar15 + 0x98);
            plVar9 = (long *)0xd8;
            __Znwm();
            plVar9[1] = 0;
            plVar9[2] = 0;
            plVar8 = plVar9 + 3;
            *plVar9 = (long)&PTR_FUN_110c38050;
            FUN_10a32e3f0(plVar8,&plStack_d0,uVar3,uVar16);
            plStack_b8 = plVar8;
            plStack_b0 = plVar9;
            FUN_10aa0d5c0(plVar9,plVar9 + 0x14,plVar8);
            FUN_10a9e1ad4(auStack_e0,param_4);
            func_0x00010a1ea71c(plVar9 + 0xb,auStack_e0);
            plVar8 = plStack_d8;
            if (plStack_d8 != (long *)0x0) {
              plVar9 = plStack_d8 + 1;
              do {
                lVar12 = *plVar9;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = lVar12 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            plVar9 = plStack_b0;
            plVar8 = plStack_b8;
            FUN_10a9e19b8(&uStack_80,plStack_b8,plStack_b0);
            lVar7 = lVar7 + 0x18;
            FUN_10aa0d668(lVar7,&puStack_a8,&puStack_a8);
            if (plVar9 != (long *)0x0) {
              plVar1 = plVar9 + 2;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = *plVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            lVar12 = *(long *)(lVar7 + 0x38);
            *(long **)(lVar7 + 0x30) = plVar8;
            *(long **)(lVar7 + 0x38) = plVar9;
            if (lVar12 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv(lVar12);
            }
            if (plVar9 != (long *)0x0) {
              plVar8 = plVar9 + 1;
              do {
                lVar12 = *plVar8;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar5) {
                  *plVar8 = lVar12 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
              }
            }
            if (cStack_b9 < '\0') {
              __ZdlPv(plStack_d0);
            }
            bVar5 = false;
          }
          else {
            *param_1 = 0;
            param_1[1] = 0;
            bVar5 = true;
            param_1[2] = 0;
          }
        }
        else {
          plStack_b8 = (long *)0x0;
          plStack_b0 = (long *)0x0;
          plVar8 = *(long **)(lVar12 + 0x38);
          if ((((plVar8 == (long *)0x0) ||
               (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b0 = plVar8, plVar8 == (long *)0x0
               )) || (plVar9 = *(long **)(lVar12 + 0x30), plStack_b8 = plVar9, plVar9 == (long *)0x0
                     )) ||
             (___dynamic_cast(plVar9,&PTR_DAT_110c48fb0,&PTR_DAT_110bc8520,0), plVar9 == (long *)0x0
             )) {
            pplVar11 = &plStack_d0;
          }
          else {
            pplVar11 = &plStack_b8;
            plStack_d0 = plVar9;
            plStack_c8 = plVar8;
          }
          *pplVar11 = (long *)0x0;
          pplVar11[1] = (long *)0x0;
          plVar8 = plStack_b0;
          if (plStack_b0 != (long *)0x0) {
            plVar9 = plStack_b0 + 1;
            do {
              lVar12 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          plVar9 = plStack_c8;
          plVar8 = plStack_d0;
          if (plStack_d0 != (long *)0x0) {
            FUN_10a9e19b8(&uStack_80,plStack_d0,plStack_c8);
          }
          if (plVar9 != (long *)0x0) {
            plVar1 = plVar9 + 1;
            do {
              lVar12 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
          bVar5 = false;
          if (plVar8 == (long *)0x0) goto LAB_10a9df664;
        }
        if (lStack_a0 != 0) {
          lStack_98 = lStack_a0;
          __ZdlPv();
        }
        if (bVar5) goto LAB_10a9df83c;
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar2);
    }
    param_1[1] = uStack_78;
    *param_1 = uStack_80;
    param_1[2] = uStack_70;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
LAB_10a9df83c:
    if (puVar6 != (undefined8 *)0x0) {
      func_0x0001096f6e98();
    }
  }
  puStack_a8 = &uStack_80;
  FUN_10a9f9204(&puStack_a8);
  return;
}



/* Entry: 10a9df994; end: 10a9e190f;  */

/* WARNING: Removing unreachable block (ram,0x00010a9e1164) */
/* WARNING: Removing unreachable block (ram,0x00010a9e08e8) */
/* WARNING: Removing unreachable block (ram,0x00010a9e01c0) */
/* WARNING: Removing unreachable block (ram,0x00010a9dfda0) */
/* WARNING: Removing unreachable block (ram,0x00010a9e02fc) */
/* WARNING: Removing unreachable block (ram,0x00010a9e0900) */
/* WARNING: Removing unreachable block (ram,0x00010a9e152c) */
/* WARNING: Removing unreachable block (ram,0x00010a9e14a8) */
/* WARNING: Removing unreachable block (ram,0x00010a9e14b8) */

long *******
FUN_10a9df994(long *******param_1,long *******param_2,undefined8 param_3,long param_4,long param_5)

{
  long ***ppplVar1;
  long *plVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  long *****ppppplVar6;
  code *pcVar7;
  bool bVar8;
  long *******ppppppplVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  long ******pppppplVar14;
  long *******ppppppplVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  long *******ppppppplVar20;
  long ******pppppplVar21;
  long ******pppppplVar22;
  long *******ppppppplVar23;
  long *****ppppplVar24;
  ulong uVar25;
  long lVar26;
  int iVar27;
  long *******ppppppplVar28;
  long *******ppppppplVar29;
  long ******pppppplVar30;
  short sVar31;
  undefined4 uVar32;
  char *pcVar33;
  ulong uVar34;
  long lVar35;
  long ****pppplVar36;
  ulong uVar37;
  char cVar38;
  long *******ppppppplVar39;
  uint uVar40;
  long *******unaff_x27;
  uint *puVar41;
  long ******pppppplStack_2f0;
  undefined7 uStack_2e8;
  char cStack_2e1;
  undefined1 uStack_2e0;
  undefined6 uStack_2df;
  char cStack_2d9;
  long ******pppppplStack_2d8;
  long ******pppppplStack_2d0;
  undefined4 uStack_2c8;
  int iStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  uint *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long ******pppppplStack_1c0;
  long ******pppppplStack_1b8;
  long ******pppppplStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  long *****ppppplStack_188;
  long *****ppppplStack_180;
  long *****ppppplStack_178;
  long ******pppppplStack_170;
  long ******pppppplStack_168;
  long ******pppppplStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long ******pppppplStack_140;
  undefined1 uStack_138;
  long ******pppppplStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [32];
  long ******pppppplStack_d8;
  uint *puStack_d0;
  uint *puStack_c8;
  undefined8 uStack_c0;
  long ******pppppplStack_b8;
  long ******pppppplStack_b0;
  long ******pppppplStack_a8;
  long ******pppppplStack_a0;
  undefined7 uStack_90;
  char cStack_89;
  undefined7 uStack_88;
  char cStack_81;
  ulong uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a9eebbc(auStack_f8,param_2,param_3);
  ppppppplVar15 = param_1 + 8;
  FUN_10aa11050(ppppppplVar15,auStack_f8);
  if (ppppppplVar15 == (long *******)0x0) {
    pcStack_1a8 = (code *)0x0;
    pppppplStack_1b0 = (long ******)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    pppppplStack_1b8 = (long ******)0x0;
    pppppplStack_1c0 = (long ******)0x0;
    uStack_190 = 0xffffffff00000000;
    ppppplStack_180 = (long *****)0x0;
    ppppplStack_188 = (long *****)0x0;
    pppppplStack_170 = (long ******)0x0;
    ppppplStack_178 = (long *****)0x0;
    pppppplStack_160 = (long ******)0x0;
    pppppplStack_168 = (long ******)0x0;
    uStack_150 = 0;
    uStack_158 = 0;
    pppppplStack_140 = (long ******)0x0;
    uStack_148 = 0;
    uStack_138 = 0;
    pcStack_128 = (code *)0x0;
    pppppplStack_130 = (long ******)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    if (param_5 == 0) {
      ppppppplVar9 = param_1 + 0x12;
      func_0x000107c2b05c(ppppppplVar9,param_2);
      ppppppplVar28 = (long *******)param_1[0x13];
      if (ppppppplVar28 != (long *******)0x0) {
        pcVar33 = (char *)((long)ppppppplVar28 + -1);
        if (((ulong)ppppppplVar28 & (ulong)pcVar33) == 0) {
          ppppppplVar39 = (long *******)((ulong)pcVar33 & (ulong)ppppppplVar9);
        }
        else {
          ppppppplVar39 = ppppppplVar9;
          if (ppppppplVar28 <= ppppppplVar9) {
            uVar25 = 0;
            if (ppppppplVar28 != (long *******)0x0) {
              uVar25 = (ulong)ppppppplVar9 / (ulong)ppppppplVar28;
            }
            ppppppplVar39 = (long *******)((long)ppppppplVar9 - uVar25 * (long)ppppppplVar28);
          }
        }
        ppppppplVar15 = ppppppplVar9;
        if ((param_1[0x12][(long)ppppppplVar39] != (long *****)0x0) &&
           (pppplVar36 = *param_1[0x12][(long)ppppppplVar39], pppplVar36 != (long ****)0x0)) {
LAB_10a9dfb18:
          ppppppplVar20 = (long *******)pppplVar36[1];
          if (ppppppplVar20 == ppppppplVar9) {
            ppppppplVar20 = param_1 + 0x12;
            func_0x000107c2b068(ppppppplVar20,pppplVar36 + 2,param_2);
            if (((ulong)ppppppplVar20 & 1) == 0) goto LAB_10a9dfb64;
            ppppppplVar9 = (long *******)pppplVar36[6];
            pppppplStack_1c0 = (long ******)pppplVar36[5];
            if (pppplVar36[6] != (long ***)0x0) {
              ppplVar1 = pppplVar36[6] + 1;
              do {
                cVar38 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
                if (bVar8) {
                  *ppplVar1 = (long **)((long)*ppplVar1 + 1);
                  cVar38 = ExclusiveMonitorsStatus();
                }
              } while (cVar38 != '\0');
            }
            ppppppplVar15 = (long *******)pppppplStack_1b8;
            if ((long *******)pppppplStack_1b8 != (long *******)0x0) {
              pppppplStack_1b8 = pppppplStack_1b8 + 1;
              do {
                pppppplVar22 = (long ******)*pppppplStack_1b8;
                cVar38 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(pppppplStack_1b8,0x10);
                if (bVar8) {
                  *pppppplStack_1b8 = (long *****)((long)pppppplVar22 + -1);
                  cVar38 = ExclusiveMonitorsStatus();
                }
              } while (cVar38 != '\0');
              goto LAB_10a9dfaa0;
            }
            goto LAB_10a9e01c8;
          }
          if (((ulong)ppppppplVar28 & (ulong)pcVar33) == 0) {
            ppppppplVar20 = (long *******)((ulong)ppppppplVar20 & (ulong)pcVar33);
          }
          else if (ppppppplVar28 <= ppppppplVar20) {
            uVar25 = 0;
            if (ppppppplVar28 != (long *******)0x0) {
              uVar25 = (ulong)ppppppplVar20 / (ulong)ppppppplVar28;
            }
            ppppppplVar20 = (long *******)((long)ppppppplVar20 - uVar25 * (long)ppppppplVar28);
          }
          if (ppppppplVar20 == ppppppplVar39) goto LAB_10a9dfb64;
        }
      }
LAB_10a9dfb6c:
      pppppplVar22 = param_2[1];
      ppppppplVar9 = (long *******)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        pppppplVar22 = (long ******)(ulong)*(byte *)((long)param_2 + 0x17);
        ppppppplVar9 = param_2;
      }
      func_0x00010a1512bc(ppppppplVar9,pppppplVar22);
      if ((int)ppppppplVar9 == 0) {
        pppppplVar22 = param_2[1];
        pppppplStack_2f0 = *param_2;
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          pppppplVar22 = (long ******)(ulong)*(byte *)((long)param_2 + 0x17);
          pppppplStack_2f0 = (long ******)param_2;
        }
        uStack_2e8 = SUB87(pppppplVar22,0);
        cStack_2e1 = (char)((ulong)pppppplVar22 >> 0x38);
        ppppppplVar28 = &pppppplStack_2f0;
        FUN_10a04236c(ppppppplVar28,&UNK_10f689b04,9);
        ppppppplVar9 = (long *******)pppppplStack_1b8;
        if ((((ulong)ppppppplVar28 & 1) == 0) &&
           (ppppppplVar28 = param_2, FUN_10ad01a04(), ppppppplVar9 = (long *******)pppppplStack_1b8,
           (int)ppppppplVar28 != 0)) {
          FUN_10a0f19e0(&pppppplStack_2f0,param_2,0);
          FUN_10a0f1f4c(&uStack_c0,&pppppplStack_2f0);
          puVar16 = (undefined8 *)0x30;
          __Znwm();
          puVar16[2] = 0;
          *puVar16 = &PTR_DAT_11087c6f8;
          puVar16[1] = 0;
          puVar19 = puVar16 + 3;
          puVar16[4] = pppppplStack_b8;
          *puVar19 = uStack_c0;
          puVar16[5] = pppppplStack_b0;
          uStack_c0 = (long *******)0x0;
          pppppplStack_b8 = (long ******)0x0;
          pppppplStack_b0 = (long ******)0x0;
          uStack_90 = SUB87(puVar19,0);
          cStack_89 = (char)((ulong)puVar19 >> 0x38);
          uStack_88 = SUB87(puVar16,0);
          cStack_81 = (char)((ulong)puVar16 >> 0x38);
          FUN_10a7f49a0(&pppppplStack_1c0,&uStack_90);
          FUN_10a12cb8c(&uStack_90);
          if (uStack_c0 != (long *******)0x0) {
            pppppplStack_b8 = (long ******)uStack_c0;
            __ZdlPv();
          }
          FUN_10a0f1ea0(&pppppplStack_2f0);
          ppppppplVar9 = (long *******)pppppplStack_1b8;
        }
      }
      else {
        pppppplVar22 = param_2[1];
        ppppppplVar15 = (long *******)*param_2;
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          pppppplVar22 = (long ******)(ulong)*(byte *)((long)param_2 + 0x17);
          ppppppplVar15 = param_2;
        }
        FUN_10a1513b8(&pppppplStack_2f0,ppppppplVar15,pppppplVar22);
        pppppplStack_b8 = (long ******)CONCAT17(cStack_2e1,uStack_2e8);
        uStack_c0 = (long *******)pppppplStack_2f0;
        pppppplStack_b0 = (long ******)CONCAT17(cStack_2d9,CONCAT61(uStack_2df,uStack_2e0));
        uStack_2e8 = 0;
        cStack_2e1 = '\0';
        uStack_2e0 = 0;
        uStack_2df = 0;
        cStack_2d9 = '\0';
        pppppplStack_2f0 = (long ******)0x0;
        if ((iStack_2c4 < 0) && (__ZdlPv(pppppplStack_2d8), cStack_2d9 < '\0')) {
          __ZdlPv(pppppplStack_2f0);
        }
        ppppppplVar15 = param_1 + 0xd;
        ppppppplVar9 = ppppppplVar15;
        func_0x000107c2b05c(ppppppplVar15,&uStack_c0);
        ppppppplVar28 = (long *******)param_1[0xe];
        if (ppppppplVar28 != (long *******)0x0) {
          pcVar33 = (char *)((long)ppppppplVar28 + -1);
          if (((ulong)ppppppplVar28 & (ulong)pcVar33) == 0) {
            unaff_x27 = (long *******)((ulong)pcVar33 & (ulong)ppppppplVar9);
          }
          else {
            unaff_x27 = ppppppplVar9;
            if (ppppppplVar28 <= ppppppplVar9) {
              uVar25 = 0;
              if (ppppppplVar28 != (long *******)0x0) {
                uVar25 = (ulong)ppppppplVar9 / (ulong)ppppppplVar28;
              }
              unaff_x27 = (long *******)((long)ppppppplVar9 - uVar25 * (long)ppppppplVar28);
            }
          }
          if ((*ppppppplVar15)[(long)unaff_x27] != (long *****)0x0) {
            for (ppppppplVar39 = (long *******)*(*ppppppplVar15)[(long)unaff_x27];
                ppppppplVar39 != (long *******)0x0; ppppppplVar39 = (long *******)*ppppppplVar39) {
              ppppppplVar20 = (long *******)ppppppplVar39[1];
              if (ppppppplVar20 == ppppppplVar9) {
                ppppppplVar20 = ppppppplVar15;
                func_0x000107c2b068(ppppppplVar15,ppppppplVar39 + 2,&uStack_c0);
                if (((ulong)ppppppplVar20 & 1) != 0) goto LAB_10a9e0114;
              }
              else {
                if (((ulong)ppppppplVar28 & (ulong)pcVar33) == 0) {
                  ppppppplVar20 = (long *******)((ulong)ppppppplVar20 & (ulong)pcVar33);
                }
                else if (ppppppplVar28 <= ppppppplVar20) {
                  uVar25 = 0;
                  if (ppppppplVar28 != (long *******)0x0) {
                    uVar25 = (ulong)ppppppplVar20 / (ulong)ppppppplVar28;
                  }
                  ppppppplVar20 = (long *******)((long)ppppppplVar20 - uVar25 * (long)ppppppplVar28)
                  ;
                }
                if (ppppppplVar20 != unaff_x27) break;
              }
            }
          }
        }
        ppppppplVar39 = (long *******)0x38;
        __Znwm();
        uStack_2e8 = SUB87(ppppppplVar15,0);
        cStack_2e1 = (char)((ulong)ppppppplVar15 >> 0x38);
        uStack_2df = 0;
        cStack_2d9 = '\0';
        *ppppppplVar39 = (long ******)0x0;
        ppppppplVar39[1] = (long ******)ppppppplVar9;
        ppppppplVar39[3] = pppppplStack_b8;
        ppppppplVar39[2] = (long ******)uStack_c0;
        ppppppplVar39[4] = pppppplStack_b0;
        ppppppplVar39[5] = (long ******)0x0;
        ppppppplVar39[6] = (long ******)0x0;
        uStack_2e0 = 1;
        pppppplStack_2f0 = (long ******)ppppppplVar39;
        if ((ppppppplVar28 == (long *******)0x0) ||
           (*(float *)(param_1 + 0x11) * (float)ppppppplVar28 < (float)((long)param_1[0x10] + 1))) {
          uVar25 = 1;
          if ((long *******)0x2 < ppppppplVar28) {
            uVar25 = (ulong)(((ulong)ppppppplVar28 & (ulong)((long)ppppppplVar28 + -1)) != 0);
          }
          ppppppplVar20 = (long *******)(uVar25 | (long)ppppppplVar28 << 1);
          ppppppplVar28 =
               (long *******)(long)((float)((long)param_1[0x10] + 1) / *(float *)(param_1 + 0x11));
          if (ppppppplVar20 <= ppppppplVar28) {
            ppppppplVar20 = ppppppplVar28;
          }
          if ((char *)((long)ppppppplVar20 + -1) == (char *)0x0) {
            ppppppplVar20 = (long *******)0x2;
          }
          else if (((ulong)ppppppplVar20 & (ulong)((long)ppppppplVar20 + -1)) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          ppppppplVar28 = (long *******)param_1[0xe];
          if (ppppppplVar28 < ppppppplVar20) {
LAB_10a9dfe48:
            if ((ulong)ppppppplVar20 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a9e1628;
            }
            pppppplVar22 = (long ******)((long)ppppppplVar20 << 3);
            __Znwm();
            pppppplVar14 = *ppppppplVar15;
            *ppppppplVar15 = pppppplVar22;
            if (pppppplVar14 != (long ******)0x0) {
              __ZdlPv();
            }
            ppppppplVar28 = (long *******)0x0;
            param_1[0xe] = (long ******)ppppppplVar20;
            do {
              (*ppppppplVar15)[(long)ppppppplVar28] = (long *****)0x0;
              ppppppplVar28 = (long *******)((long)ppppppplVar28 + 1);
            } while (ppppppplVar20 != ppppppplVar28);
            pppppplVar22 = param_1[0xf];
            ppppppplVar28 = ppppppplVar20;
            if (pppppplVar22 != (long ******)0x0) {
              ppppppplVar23 = (long *******)pppppplVar22[1];
              pcVar33 = (char *)((long)ppppppplVar20 + -1);
              if (((ulong)ppppppplVar20 & (ulong)pcVar33) == 0) {
                ppppppplVar23 = (long *******)((ulong)ppppppplVar23 & (ulong)pcVar33);
              }
              else if (ppppppplVar20 <= ppppppplVar23) {
                uVar25 = 0;
                if (ppppppplVar20 != (long *******)0x0) {
                  uVar25 = (ulong)ppppppplVar23 / (ulong)ppppppplVar20;
                }
                ppppppplVar23 = (long *******)((long)ppppppplVar23 - uVar25 * (long)ppppppplVar20);
              }
              (*ppppppplVar15)[(long)ppppppplVar23] = (long *****)(param_1 + 0xf);
              pppppplVar14 = (long ******)*pppppplVar22;
              while (pppppplVar14 != (long ******)0x0) {
                ppppppplVar29 = (long *******)pppppplVar14[1];
                if (((ulong)ppppppplVar20 & (ulong)pcVar33) == 0) {
                  ppppppplVar29 = (long *******)((ulong)ppppppplVar29 & (ulong)pcVar33);
                }
                else if (ppppppplVar20 <= ppppppplVar29) {
                  uVar25 = 0;
                  if (ppppppplVar20 != (long *******)0x0) {
                    uVar25 = (ulong)ppppppplVar29 / (ulong)ppppppplVar20;
                  }
                  ppppppplVar29 = (long *******)((long)ppppppplVar29 - uVar25 * (long)ppppppplVar20)
                  ;
                }
                pppppplVar21 = pppppplVar14;
                if (ppppppplVar29 != ppppppplVar23) {
                  pppppplVar30 = *ppppppplVar15;
                  if (pppppplVar30[(long)ppppppplVar29] == (long *****)0x0) {
                    pppppplVar30[(long)ppppppplVar29] = (long *****)pppppplVar22;
                    ppppppplVar23 = ppppppplVar29;
                  }
                  else {
                    *pppppplVar22 = *pppppplVar14;
                    *pppppplVar14 = (long *****)*pppppplVar30[(long)ppppppplVar29];
                    *pppppplVar30[(long)ppppppplVar29] = (long ****)pppppplVar14;
                    pppppplVar21 = pppppplVar22;
                  }
                }
                pppppplVar22 = pppppplVar21;
                pppppplVar14 = (long ******)*pppppplVar21;
              }
            }
          }
          else if (ppppppplVar20 < ppppppplVar28) {
            ppppppplVar23 = (long *******)(long)((float)param_1[0x10] / *(float *)(param_1 + 0x11));
            if ((ppppppplVar28 < (long *******)0x3) ||
               (((ulong)ppppppplVar28 & (ulong)((long)ppppppplVar28 + -1)) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long *******)0x1 < ppppppplVar23) {
              ppppppplVar23 =
                   (long *******)(1L << (-LZCOUNT((char *)((long)ppppppplVar23 + -1)) & 0x3fU));
            }
            if (ppppppplVar20 <= ppppppplVar23) {
              ppppppplVar20 = ppppppplVar23;
            }
            if (ppppppplVar20 < ppppppplVar28) {
              if (ppppppplVar20 != (long *******)0x0) goto LAB_10a9dfe48;
              pppppplVar22 = *ppppppplVar15;
              *ppppppplVar15 = (long ******)0x0;
              if (pppppplVar22 != (long ******)0x0) {
                __ZdlPv();
              }
              param_1[0xe] = (long ******)0x0;
              ppppppplVar28 = (long *******)0x0;
            }
            else {
              ppppppplVar28 = (long *******)param_1[0xe];
            }
          }
          if (((ulong)ppppppplVar28 & (ulong)((long)ppppppplVar28 + -1)) == 0) {
            unaff_x27 = (long *******)((ulong)((long)ppppppplVar28 + -1) & (ulong)ppppppplVar9);
          }
          else {
            unaff_x27 = ppppppplVar9;
            if (ppppppplVar28 <= ppppppplVar9) {
              uVar25 = 0;
              if (ppppppplVar28 != (long *******)0x0) {
                uVar25 = (ulong)ppppppplVar9 / (ulong)ppppppplVar28;
              }
              unaff_x27 = (long *******)((long)ppppppplVar9 - uVar25 * (long)ppppppplVar28);
            }
          }
        }
        pppppplVar22 = *ppppppplVar15;
        ppppplVar24 = pppppplVar22[(long)unaff_x27];
        if (ppppplVar24 == (long *****)0x0) {
          ppppppplVar9 = param_1 + 0xf;
          *ppppppplVar39 = *ppppppplVar9;
          *ppppppplVar9 = (long ******)ppppppplVar39;
          pppppplVar22[(long)unaff_x27] = (long *****)ppppppplVar9;
          if (*ppppppplVar39 != (long ******)0x0) {
            ppppppplVar9 = (long *******)(*ppppppplVar39)[1];
            if (((ulong)ppppppplVar28 & (ulong)((long)ppppppplVar28 + -1)) == 0) {
              ppppppplVar9 = (long *******)((ulong)ppppppplVar9 & (ulong)((long)ppppppplVar28 + -1))
              ;
            }
            else if (ppppppplVar28 <= ppppppplVar9) {
              uVar25 = 0;
              if (ppppppplVar28 != (long *******)0x0) {
                uVar25 = (ulong)ppppppplVar9 / (ulong)ppppppplVar28;
              }
              ppppppplVar9 = (long *******)((long)ppppppplVar9 - uVar25 * (long)ppppppplVar28);
            }
            (*ppppppplVar15)[(long)ppppppplVar9] = (long *****)ppppppplVar39;
          }
        }
        else {
          *ppppppplVar39 = (long ******)*ppppplVar24;
          *ppppplVar24 = (long ****)ppppppplVar39;
        }
        param_1[0x10] = (long ******)((long)param_1[0x10] + 1);
        ppppppplVar15 = (long *******)pppppplStack_b8;
        ppppppplVar9 = uStack_c0;
        if (-1 < (long)pppppplStack_b0) {
          ppppppplVar15 = (long *******)((ulong)pppppplStack_b0 >> 0x38);
          ppppppplVar9 = (long *******)&uStack_c0;
        }
        FUN_10a151324(auStack_1e8,ppppppplVar9,ppppppplVar15);
        FUN_10ad0279c(&pppppplStack_2f0,auStack_1e8);
        FUN_10a152118(ppppppplVar39 + 5,&pppppplStack_2f0);
        ppppppplVar15 = (long *******)CONCAT17(cStack_2e1,uStack_2e8);
        if (ppppppplVar15 != (long *******)0x0) {
          ppppppplVar9 = ppppppplVar15 + 1;
          do {
            pppppplVar22 = *ppppppplVar9;
            cVar38 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
            if (bVar8) {
              *ppppppplVar9 = (long ******)((long)pppppplVar22 + -1);
              cVar38 = ExclusiveMonitorsStatus();
            }
          } while (cVar38 != '\0');
          if (pppppplVar22 == (long ******)0x0) {
            (*(code *)(*ppppppplVar15)[2])(ppppppplVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar15);
          }
        }
        if (cStack_1d1 < '\0') {
          __ZdlPv(auStack_1e8[0]);
        }
LAB_10a9e0114:
        ppppppplVar9 = (long *******)pppppplStack_1b8;
        if (ppppppplVar39[5] != (long ******)0x0) {
          FUN_10a0f1b8c(&pppppplStack_2f0,param_2,0);
          ppppppplVar9 = (long *******)pppppplStack_1b8;
          if (fStack_2c0._0_1_ == '\x01') {
            FUN_10a0f1f4c(&uStack_90,&pppppplStack_2f0);
            puVar16 = (undefined8 *)0x30;
            __Znwm();
            puVar16[2] = 0;
            *puVar16 = &PTR_DAT_11087c6f8;
            puVar16[1] = 0;
            puStack_1f8 = (uint *)(puVar16 + 3);
            puVar16[4] = CONCAT17(cStack_81,uStack_88);
            *(ulong *)puStack_1f8 = CONCAT17(cStack_89,uStack_90);
            puVar16[5] = uStack_80;
            uStack_90 = 0;
            cStack_89 = '\0';
            uStack_88 = 0;
            cStack_81 = '\0';
            uStack_80 = 0;
            puStack_1f0 = puVar16;
            FUN_10a7f49a0(&pppppplStack_1c0,&puStack_1f8);
            FUN_10a12cb8c(&puStack_1f8);
            if (CONCAT17(cStack_89,uStack_90) != 0) {
              uStack_88 = uStack_90;
              cStack_81 = cStack_89;
              __ZdlPv();
            }
            ppppppplVar9 = (long *******)pppppplStack_1b8;
            if (((uint)fStack_2c0 & 1) != 0) {
              FUN_10a0f1ea0(&pppppplStack_2f0);
              ppppppplVar9 = (long *******)pppppplStack_1b8;
            }
          }
        }
      }
    }
    else {
      ppppppplVar9 = (long *******)0x30;
      __Znwm();
      ppppppplVar9[2] = (long ******)0x0;
      *ppppppplVar9 = (long ******)&PTR_DAT_11087c6f8;
      ppppppplVar9[1] = (long ******)0x0;
      ppppppplVar28 = ppppppplVar9 + 3;
      *ppppppplVar28 = (long ******)0x0;
      ppppppplVar9[4] = (long ******)0x0;
      ppppppplVar9[5] = (long ******)0x0;
      FUN_10a1319a4(ppppppplVar28,param_4,param_4 + param_5,param_5);
      ppppppplVar15 = (long *******)pppppplStack_1b8;
      pppppplStack_1c0 = (long ******)ppppppplVar28;
      if ((long *******)pppppplStack_1b8 != (long *******)0x0) {
        pppppplStack_1b8 = pppppplStack_1b8 + 1;
        do {
          pppppplVar22 = (long ******)*pppppplStack_1b8;
          cVar38 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppppplStack_1b8,0x10);
          if (bVar8) {
            *pppppplStack_1b8 = (long *****)((long)pppppplVar22 + -1);
            cVar38 = ExclusiveMonitorsStatus();
          }
        } while (cVar38 != '\0');
LAB_10a9dfaa0:
        pppppplStack_1b8 = (long ******)ppppppplVar9;
        ppppppplVar9 = (long *******)pppppplStack_1b8;
        if (pppppplVar22 == (long ******)0x0) {
          (*(code *)(*ppppppplVar15)[2])(ppppppplVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar15);
          ppppppplVar9 = (long *******)pppppplStack_1b8;
        }
      }
    }
LAB_10a9e01c8:
    pppppplStack_1b8 = (long ******)ppppppplVar9;
    if ((long *******)pppppplStack_1c0 == (long *******)0x0) {
      pppppplVar22 = param_2[1];
      ppppppplVar15 = (long *******)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        pppppplVar22 = (long ******)(ulong)*(byte *)((long)param_2 + 0x17);
        ppppppplVar15 = param_2;
      }
      if (pppppplVar22 == (long ******)0x0) {
        pppppplVar14 = (long ******)0x0;
      }
      else {
        do {
          pppppplVar14 = pppppplVar22;
          if (pppppplVar14 == (long ******)0x0) break;
          pppppplVar22 = (long ******)((long)pppppplVar14 + -1);
        } while (*(char *)((long)ppppppplVar15 + (long)pppppplVar14 + -1) != '/');
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&uStack_c0,param_2,pppppplVar14,0xffffffffffffffff,&pppppplStack_2f0);
      ppppppplVar15 = (long *******)pppppplStack_b8;
      ppppppplVar9 = uStack_c0;
      if (-1 < (long)pppppplStack_b0) {
        ppppppplVar15 = (long *******)((ulong)pppppplStack_b0 >> 0x38);
        ppppppplVar9 = (long *******)&uStack_c0;
      }
      if (ppppppplVar15 == (long *******)0x0) {
LAB_10a9e02a4:
        ppppppplVar15 = (long *******)0xffffffffffffffff;
      }
      else {
        do {
          if (ppppppplVar15 == (long *******)0x0) goto LAB_10a9e02a4;
          pcVar33 = (char *)((long)ppppppplVar9 + -1) + (long)ppppppplVar15;
          ppppppplVar15 = (long *******)((long)ppppppplVar15 + -1);
        } while (*pcVar33 != '.');
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&uStack_90,&uStack_c0,0,ppppppplVar15,&pppppplStack_2f0);
      if (CONCAT17(cStack_89,uStack_90) == 0x6c6f43656c707041 &&
          CONCAT17(cStack_81,uStack_88) == 0x696a6f6d45726f) {
        FUN_10a9edb0c(&pppppplStack_2f0,&uStack_90);
        if ((long *******)pppppplStack_140 != (long *******)0x0) {
          _CFRelease();
        }
        pppppplStack_140 = pppppplStack_2f0;
        pppppplStack_2f0 = (long ******)0x0;
        FUN_10aa10ef8(&pppppplStack_2f0);
        FUN_10a9fac2c(&pppppplStack_2f0,auStack_f8,&uStack_1d0);
        ppppppplVar15 = param_1 + 8;
        FUN_10aa11228(ppppppplVar15,&pppppplStack_2f0,&pppppplStack_2f0);
        FUN_10a9fad70(&pppppplStack_2d0);
        if (cStack_2d9 < '\0') {
          __ZdlPv(pppppplStack_2f0);
        }
        bVar8 = true;
      }
      else {
        puVar10 = *(uint **)PTR__kCFAllocatorDefault_11034ab78;
        _CFStringCreateWithCString(puVar10,&uStack_90,0x8000100);
        puStack_1f8 = puVar10;
        _CGFontCreateWithFontName();
        puStack_c8 = puVar10;
        if (puVar10 == (uint *)0x0) {
          pppppplStack_2f0 = (long ******)0x0;
          uStack_2e8 = 0;
          cStack_2e1 = '\0';
          uStack_2e0 = 0;
          uStack_2df = 0;
          cStack_2d9 = '\0';
        }
        else {
          puVar11 = puVar10;
          _CGFontCopyTableTags();
          puStack_d0 = puVar11;
          _CFArrayGetCount();
          if (puVar11 == (uint *)0x0) {
            unaff_x27 = (long *******)0x0;
            lVar26 = 0;
            uVar32 = 0x100;
            uVar25 = 0xc;
          }
          else {
            if ((ulong)puVar11 >> 0x3d != 0) {
              FUN_10a9faf98();
              goto LAB_10a9e1628;
            }
            lVar35 = (long)puVar11 * 8;
            lVar26 = lVar35;
            __Znwm();
            _bzero();
            bVar8 = false;
            puVar41 = (uint *)0x0;
            unaff_x27 = (long *******)(lVar26 + lVar35);
            uVar25 = (long)puVar11 * 0x10 | 0xc;
            do {
              puVar12 = puStack_d0;
              _CFArrayGetValueAtIndex(puStack_d0,puVar41);
              puVar13 = puVar10;
              _CGFontCopyTableForTag();
              if ((uint *)(lVar35 >> 3) == puVar41) goto LAB_10a9e1628;
              *(uint **)(lVar26 + (long)puVar41 * 8) = puVar13;
              if (puVar13 != (uint *)0x0) {
                _CFDataGetLength();
                uVar25 = ((long)puVar13 + 3U & 0xfffffffffffffffc) + uVar25;
              }
              bVar8 = (bool)((int)puVar12 == 0x43464620 | bVar8);
              puVar41 = (uint *)((long)puVar41 + 1);
            } while (puVar11 != puVar41);
            uVar32 = 0x4f54544f;
            if (!bVar8) {
              uVar32 = 0x100;
            }
          }
          FUN_10a0dc020(&pppppplStack_2f0,uVar25);
          pppppplVar22 = pppppplStack_2f0;
          if ((long)puVar11 >> 1 < 2) {
            uVar17 = 0;
            uVar40 = 1;
          }
          else {
            uVar17 = 0;
            uVar25 = 1;
            do {
              uVar17 = uVar17 + 1;
              uVar40 = (int)uVar25 << 1;
              uVar37 = uVar25 & 0x7fff;
              uVar25 = (ulong)uVar40;
            } while (uVar37 << 1 < (ulong)((long)puVar11 >> 1));
          }
          uVar5 = ((uint)puVar11 - uVar40) * 0x10;
          *(undefined4 *)pppppplStack_2f0 = uVar32;
          *(ushort *)((long)pppppplStack_2f0 + 4) =
               (ushort)((ulong)puVar11 >> 8) & 0xff | (ushort)(((uint)puVar11 & 0xff00ff) << 8);
          *(ushort *)((long)pppppplStack_2f0 + 6) =
               (ushort)((uVar40 << 4) >> 8) & 0xff | (ushort)((uVar40 << 4 & 0xff00ff) << 8);
          *(ushort *)(pppppplStack_2f0 + 1) =
               (ushort)(uVar17 >> 8) & 0xff | (ushort)((uVar17 & 0xff00ff) << 8);
          *(ushort *)((long)pppppplStack_2f0 + 10) =
               (ushort)(uVar5 >> 8) & 0xff | (ushort)((uVar5 & 0xff00ff) << 8);
          if (puVar11 == (uint *)0x0) {
            if (lVar26 != 0) goto LAB_10a9e0830;
          }
          else {
            puVar41 = (uint *)0x0;
            puVar10 = (uint *)((long)pppppplStack_2f0 + 0xc);
            puVar12 = puVar10 + (long)puVar11 * 4;
            lVar35 = (long)unaff_x27 - lVar26;
            do {
              if (puVar41 == (uint *)(lVar35 >> 3)) goto LAB_10a9e1628;
              ppppppplVar15 = *(long ********)(lVar26 + (long)puVar41 * 8);
              if (ppppppplVar15 != (long *******)0x0) {
                pppppplStack_d8 = (long ******)ppppppplVar15;
                _CFDataGetLength();
                ppppppplVar9 = (long *******)pppppplStack_d8;
                _CFDataGetBytePtr(pppppplStack_d8);
                _memcpy(puVar12,ppppppplVar9,ppppppplVar15);
                puVar13 = puStack_d0;
                _CFArrayGetValueAtIndex(puStack_d0,puVar41);
                uVar17 = ((uint)puVar13 & 0xff00ff00) >> 8 | ((uint)puVar13 & 0xff00ff) << 8;
                *puVar10 = uVar17 >> 0x10 | uVar17 << 0x10;
                uVar17 = 0;
                uVar40 = (uint)ppppppplVar15;
                if (uVar40 != 0) {
                  uVar25 = ((ulong)ppppppplVar15 & 0xffffffff) + 3 >> 2;
                  puVar13 = puVar12;
                  do {
                    uVar5 = (*puVar13 & 0xff00ff00) >> 8 | (*puVar13 & 0xff00ff) << 8;
                    uVar17 = (uVar5 >> 0x10 | uVar5 << 0x10) + uVar17;
                    uVar5 = (int)uVar25 - 1;
                    uVar25 = (ulong)uVar5;
                    puVar13 = puVar13 + 1;
                  } while (uVar5 != 0);
                }
                uVar17 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
                uVar5 = (int)puVar12 - (int)pppppplVar22;
                uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                puVar10[1] = uVar17 >> 0x10 | uVar17 << 0x10;
                puVar10[2] = uVar5 >> 0x10 | uVar5 << 0x10;
                uVar17 = (uVar40 & 0xff00ff00) >> 8 | (uVar40 & 0xff00ff) << 8;
                puVar10[3] = uVar17 >> 0x10 | uVar17 << 0x10;
                puVar12 = (uint *)((long)puVar12 +
                                  ((ulong)((long)ppppppplVar15 + 3U) & 0xfffffffffffffffc));
                puVar10 = puVar10 + 4;
                FUN_10aa12154(&pppppplStack_d8);
                unaff_x27 = ppppppplVar15;
              }
              puVar41 = (uint *)((long)puVar41 + 1);
            } while (puVar41 != puVar11);
LAB_10a9e0830:
            __ZdlPv(lVar26);
          }
          FUN_10a103380(&puStack_d0);
        }
        FUN_10aa12124(&puStack_c8);
        FUN_10aa10ec8(&puStack_1f8);
        ppppppplVar9 = (long *******)0x30;
        __Znwm();
        ppppppplVar15 = (long *******)pppppplStack_1b8;
        ppppppplVar9[2] = (long ******)0x0;
        *ppppppplVar9 = (long ******)&PTR_DAT_11087c6f8;
        ppppppplVar9[1] = (long ******)0x0;
        pppppplStack_1c0 = (long ******)(ppppppplVar9 + 3);
        ppppppplVar9[4] = (long ******)CONCAT17(cStack_2e1,uStack_2e8);
        *pppppplStack_1c0 = (long *****)pppppplStack_2f0;
        ppppppplVar9[5] = (long ******)CONCAT17(cStack_2d9,CONCAT61(uStack_2df,uStack_2e0));
        pppppplStack_2f0 = (long ******)0x0;
        uStack_2e8 = 0;
        cStack_2e1 = '\0';
        uStack_2e0 = 0;
        uStack_2df = 0;
        cStack_2d9 = '\0';
        if ((long *******)pppppplStack_1b8 != (long *******)0x0) {
          ppppppplVar28 = (long *******)(pppppplStack_1b8 + 1);
          do {
            pppppplVar22 = *ppppppplVar28;
            cVar38 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar28,0x10);
            if (bVar8) {
              *ppppppplVar28 = (long ******)((long)pppppplVar22 + -1);
              cVar38 = ExclusiveMonitorsStatus();
            }
          } while (cVar38 != '\0');
          if (pppppplVar22 == (long ******)0x0) {
            pppppplVar22 = (long ******)*pppppplStack_1b8;
            pppppplStack_1b8 = (long ******)ppppppplVar9;
            (*(code *)pppppplVar22[2])(ppppppplVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar15);
            ppppppplVar9 = (long *******)pppppplStack_1b8;
          }
        }
        pppppplStack_1b8 = (long ******)ppppppplVar9;
        if ((long *******)pppppplStack_2f0 != (long *******)0x0) {
          uStack_2e8 = SUB87(pppppplStack_2f0,0);
          cStack_2e1 = (char)((ulong)pppppplStack_2f0 >> 0x38);
          __ZdlPv();
        }
        bVar8 = false;
      }
      if (!bVar8) {
        if ((long *******)pppppplStack_1c0 != (long *******)0x0) goto LAB_10a9e01d0;
        goto LAB_10a9e0c1c;
      }
    }
    else {
LAB_10a9e01d0:
      if (param_5 == 0) {
        ppppppplVar9 = param_1 + 0x12;
        ppppppplVar28 = ppppppplVar9;
        func_0x000107c2b05c(ppppppplVar9,param_2);
        unaff_x27 = (long *******)param_1[0x13];
        ppppppplVar39 = param_1;
        if (unaff_x27 != (long *******)0x0) {
          pcVar33 = (char *)((long)unaff_x27 + -1);
          if (((ulong)unaff_x27 & (ulong)pcVar33) == 0) {
            ppppppplVar39 = (long *******)((ulong)pcVar33 & (ulong)ppppppplVar28);
          }
          else {
            ppppppplVar39 = ppppppplVar28;
            if (unaff_x27 <= ppppppplVar28) {
              uVar25 = 0;
              if (unaff_x27 != (long *******)0x0) {
                uVar25 = (ulong)ppppppplVar28 / (ulong)unaff_x27;
              }
              ppppppplVar39 = (long *******)((long)ppppppplVar28 - uVar25 * (long)unaff_x27);
            }
          }
          if ((*ppppppplVar9)[(long)ppppppplVar39] != (long *****)0x0) {
            for (pppplVar36 = *(*ppppppplVar9)[(long)ppppppplVar39]; pppplVar36 != (long ****)0x0;
                pppplVar36 = (long ****)*pppplVar36) {
              ppppppplVar20 = (long *******)pppplVar36[1];
              if (ppppppplVar20 == ppppppplVar28) {
                ppppppplVar20 = ppppppplVar9;
                func_0x000107c2b068(ppppppplVar9,pppplVar36 + 2,param_2);
                if (((ulong)ppppppplVar20 & 1) != 0) goto LAB_10a9e0a50;
              }
              else {
                if (((ulong)unaff_x27 & (ulong)pcVar33) == 0) {
                  ppppppplVar20 = (long *******)((ulong)ppppppplVar20 & (ulong)pcVar33);
                }
                else if (unaff_x27 <= ppppppplVar20) {
                  uVar25 = 0;
                  if (unaff_x27 != (long *******)0x0) {
                    uVar25 = (ulong)ppppppplVar20 / (ulong)unaff_x27;
                  }
                  ppppppplVar20 = (long *******)((long)ppppppplVar20 - uVar25 * (long)unaff_x27);
                }
                if (ppppppplVar20 != ppppppplVar39) break;
              }
            }
          }
        }
        ppppppplVar20 = (long *******)0x38;
        __Znwm();
        uStack_2e8 = SUB87(ppppppplVar9,0);
        cStack_2e1 = (char)((ulong)ppppppplVar9 >> 0x38);
        uStack_2e0 = 0;
        uStack_2df = 0;
        cStack_2d9 = '\0';
        *ppppppplVar20 = (long ******)0x0;
        ppppppplVar20[1] = (long ******)ppppppplVar28;
        pppppplStack_2f0 = (long ******)ppppppplVar20;
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          func_0x000107c3192c(ppppppplVar20 + 2,*param_2,param_2[1]);
        }
        else {
          pppppplVar22 = *param_2;
          ppppppplVar20[3] = param_2[1];
          ppppppplVar20[2] = pppppplVar22;
          ppppppplVar20[4] = param_2[2];
        }
        ppppppplVar20[6] = pppppplStack_1b8;
        ppppppplVar20[5] = pppppplStack_1c0;
        if ((long *******)pppppplStack_1b8 != (long *******)0x0) {
          ppppppplVar23 = (long *******)(pppppplStack_1b8 + 1);
          do {
            cVar38 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar23,0x10);
            if (bVar8) {
              *ppppppplVar23 = (long ******)((long)*ppppppplVar23 + 1);
              cVar38 = ExclusiveMonitorsStatus();
            }
          } while (cVar38 != '\0');
        }
        uStack_2e0 = 1;
        if ((unaff_x27 == (long *******)0x0) ||
           (*(float *)(param_1 + 0x16) * (float)unaff_x27 < (float)((long)param_1[0x15] + 1))) {
          uVar25 = 1;
          if ((long *******)0x2 < unaff_x27) {
            uVar25 = (ulong)(((ulong)unaff_x27 & (ulong)((long)unaff_x27 + -1)) != 0);
          }
          ppppppplVar39 = (long *******)(uVar25 | (long)unaff_x27 << 1);
          ppppppplVar23 =
               (long *******)(long)((float)((long)param_1[0x15] + 1) / *(float *)(param_1 + 0x16));
          if (ppppppplVar39 <= ppppppplVar23) {
            ppppppplVar39 = ppppppplVar23;
          }
          if ((char *)((long)ppppppplVar39 + -1) == (char *)0x0) {
            ppppppplVar39 = (long *******)0x2;
          }
          else if (((ulong)ppppppplVar39 & (ulong)((long)ppppppplVar39 + -1)) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          unaff_x27 = (long *******)param_1[0x13];
          if (unaff_x27 < ppppppplVar39) {
LAB_10a9e0600:
            if ((ulong)ppppppplVar39 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a9e1628;
            }
            pppppplVar22 = (long ******)((long)ppppppplVar39 << 3);
            __Znwm();
            pppppplVar14 = *ppppppplVar9;
            *ppppppplVar9 = pppppplVar22;
            if (pppppplVar14 != (long ******)0x0) {
              __ZdlPv();
            }
            ppppppplVar23 = (long *******)0x0;
            param_1[0x13] = (long ******)ppppppplVar39;
            do {
              (*ppppppplVar9)[(long)ppppppplVar23] = (long *****)0x0;
              ppppppplVar23 = (long *******)((long)ppppppplVar23 + 1);
            } while (ppppppplVar39 != ppppppplVar23);
            pppppplVar22 = param_1[0x14];
            unaff_x27 = ppppppplVar39;
            if (pppppplVar22 != (long ******)0x0) {
              ppppppplVar23 = (long *******)pppppplVar22[1];
              pcVar33 = (char *)((long)ppppppplVar39 + -1);
              if (((ulong)ppppppplVar39 & (ulong)pcVar33) == 0) {
                ppppppplVar23 = (long *******)((ulong)ppppppplVar23 & (ulong)pcVar33);
              }
              else if (ppppppplVar39 <= ppppppplVar23) {
                uVar25 = 0;
                if (ppppppplVar39 != (long *******)0x0) {
                  uVar25 = (ulong)ppppppplVar23 / (ulong)ppppppplVar39;
                }
                ppppppplVar23 = (long *******)((long)ppppppplVar23 - uVar25 * (long)ppppppplVar39);
              }
              (*ppppppplVar9)[(long)ppppppplVar23] = (long *****)(param_1 + 0x14);
              pppppplVar14 = (long ******)*pppppplVar22;
              while (pppppplVar14 != (long ******)0x0) {
                ppppppplVar29 = (long *******)pppppplVar14[1];
                if (((ulong)ppppppplVar39 & (ulong)pcVar33) == 0) {
                  ppppppplVar29 = (long *******)((ulong)ppppppplVar29 & (ulong)pcVar33);
                }
                else if (ppppppplVar39 <= ppppppplVar29) {
                  uVar25 = 0;
                  if (ppppppplVar39 != (long *******)0x0) {
                    uVar25 = (ulong)ppppppplVar29 / (ulong)ppppppplVar39;
                  }
                  ppppppplVar29 = (long *******)((long)ppppppplVar29 - uVar25 * (long)ppppppplVar39)
                  ;
                }
                pppppplVar21 = pppppplVar14;
                if (ppppppplVar29 != ppppppplVar23) {
                  pppppplVar30 = *ppppppplVar9;
                  if (pppppplVar30[(long)ppppppplVar29] == (long *****)0x0) {
                    pppppplVar30[(long)ppppppplVar29] = (long *****)pppppplVar22;
                    ppppppplVar23 = ppppppplVar29;
                  }
                  else {
                    *pppppplVar22 = *pppppplVar14;
                    *pppppplVar14 = (long *****)*pppppplVar30[(long)ppppppplVar29];
                    *pppppplVar30[(long)ppppppplVar29] = (long ****)pppppplVar14;
                    pppppplVar21 = pppppplVar22;
                  }
                }
                pppppplVar22 = pppppplVar21;
                pppppplVar14 = (long ******)*pppppplVar21;
              }
            }
          }
          else if (ppppppplVar39 < unaff_x27) {
            ppppppplVar23 = (long *******)(long)((float)param_1[0x15] / *(float *)(param_1 + 0x16));
            if ((unaff_x27 < (long *******)0x3) ||
               (((ulong)unaff_x27 & (ulong)((long)unaff_x27 + -1)) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long *******)0x1 < ppppppplVar23) {
              ppppppplVar23 =
                   (long *******)(1L << (-LZCOUNT((char *)((long)ppppppplVar23 + -1)) & 0x3fU));
            }
            if (ppppppplVar39 <= ppppppplVar23) {
              ppppppplVar39 = ppppppplVar23;
            }
            if (ppppppplVar39 < unaff_x27) {
              if (ppppppplVar39 != (long *******)0x0) goto LAB_10a9e0600;
              pppppplVar22 = *ppppppplVar9;
              *ppppppplVar9 = (long ******)0x0;
              if (pppppplVar22 != (long ******)0x0) {
                __ZdlPv();
              }
              param_1[0x13] = (long ******)0x0;
              unaff_x27 = (long *******)0x0;
            }
            else {
              unaff_x27 = (long *******)param_1[0x13];
            }
          }
          if (((ulong)unaff_x27 & (ulong)((long)unaff_x27 + -1)) == 0) {
            ppppppplVar39 = (long *******)((ulong)((long)unaff_x27 + -1) & (ulong)ppppppplVar28);
          }
          else {
            ppppppplVar39 = ppppppplVar28;
            if (unaff_x27 <= ppppppplVar28) {
              uVar25 = 0;
              if (unaff_x27 != (long *******)0x0) {
                uVar25 = (ulong)ppppppplVar28 / (ulong)unaff_x27;
              }
              ppppppplVar39 = (long *******)((long)ppppppplVar28 - uVar25 * (long)unaff_x27);
            }
          }
        }
        pppppplVar22 = *ppppppplVar9;
        ppppplVar24 = pppppplVar22[(long)ppppppplVar39];
        if (ppppplVar24 == (long *****)0x0) {
          ppppppplVar28 = param_1 + 0x14;
          *ppppppplVar20 = *ppppppplVar28;
          *ppppppplVar28 = (long ******)ppppppplVar20;
          pppppplVar22[(long)ppppppplVar39] = (long *****)ppppppplVar28;
          if (*ppppppplVar20 != (long ******)0x0) {
            ppppppplVar28 = (long *******)(*ppppppplVar20)[1];
            if (((ulong)unaff_x27 & (ulong)((long)unaff_x27 + -1)) == 0) {
              ppppppplVar28 = (long *******)((ulong)ppppppplVar28 & (ulong)((long)unaff_x27 + -1));
            }
            else if (unaff_x27 <= ppppppplVar28) {
              uVar25 = 0;
              if (unaff_x27 != (long *******)0x0) {
                uVar25 = (ulong)ppppppplVar28 / (ulong)unaff_x27;
              }
              ppppppplVar28 = (long *******)((long)ppppppplVar28 - uVar25 * (long)unaff_x27);
            }
            (*ppppppplVar9)[(long)ppppppplVar28] = (long *****)ppppppplVar20;
          }
        }
        else {
          *ppppppplVar20 = (long ******)*ppppplVar24;
          *ppppplVar24 = (long ****)ppppppplVar20;
        }
        param_1[0x15] = (long ******)((long)param_1[0x15] + 1);
LAB_10a9e0a50:
        if ((long *******)pppppplStack_1c0 == (long *******)0x0) goto LAB_10a9e0c1c;
      }
      pppppplVar21 = pppppplStack_1c0;
      pppppplVar22 = (long ******)*pppppplStack_1c0;
      pppppplVar14 = (long ******)pppppplStack_1c0[1];
      if (pppppplVar22 != pppppplVar14) {
        uVar37 = (long)pppppplVar14 - (long)pppppplVar22;
        uVar25 = uVar37 >> 3;
        if (((ulong)pppppplVar22 & 7) == 0) {
          if (uVar37 < 8) goto LAB_10a9e0ab8;
          uVar34 = 0;
          pppppplVar30 = pppppplVar22;
          do {
            uVar34 = uVar34 * 0x40 + 0x9e3779b9 + (uVar34 >> 2) + (long)*pppppplVar30 ^ uVar34;
            uVar25 = uVar25 - 1;
            pppppplVar30 = pppppplVar30 + 1;
          } while (uVar25 != 0);
        }
        else if (uVar37 < 8) {
LAB_10a9e0ab8:
          uVar34 = 0;
        }
        else {
          uVar34 = 0;
          pppppplVar30 = pppppplVar22;
          do {
            uVar34 = uVar34 * 0x40 + 0x9e3779b9 + (uVar34 >> 2) + (long)*pppppplVar30 ^ uVar34;
            uVar25 = uVar25 - 1;
            pppppplVar30 = pppppplVar30 + 1;
          } while (uVar25 != 0);
        }
        pppppplStack_2f0 = (long ******)0x0;
        if ((uVar37 & 7) != 0) {
          _memcpy(&pppppplStack_2f0,(long)pppppplVar22 + (uVar37 - (uVar37 & 7)));
        }
        uVar34 = (ulong)(uVar34 * 0x40 + 0x9e3779b9 + (uVar34 >> 2) + (long)pppppplStack_2f0) ^
                 uVar34;
        uStack_198 = uVar37 + 0x9e3779b9 + uVar34 * 0x40 + (uVar34 >> 2) ^ uVar34;
        pppppplVar21 = (long ******)*pppppplVar21;
        if (pppppplVar21 == (long ******)0x0) {
          ppppppplVar9 = (long *******)0x0;
          pcVar7 = (code *)0x0;
        }
        else {
          pppppplVar22 = param_1[0x45];
          lVar26 = (long)pppppplVar14 - (long)pppppplVar21;
          pppppplStack_2f0 = (long ******)CONCAT44(pppppplStack_2f0._4_4_,1);
          uStack_2e8 = SUB87(pppppplVar21,0);
          cStack_2e1 = (char)((ulong)pppppplVar21 >> 0x38);
          uStack_2e0 = (undefined1)lVar26;
          uStack_2df = (undefined6)((ulong)lVar26 >> 8);
          cStack_2d9 = (char)((ulong)lVar26 >> 0x38);
          pppppplStack_2d0 = (long ******)0x0;
          func_0x000109754840(pppppplVar22,&pppppplStack_2f0,(long)(int)param_3,&uStack_c0);
          bVar8 = (int)pppppplVar22 != 0;
          ppppppplVar9 = uStack_c0;
          if (bVar8) {
            ppppppplVar9 = (long *******)0x0;
          }
          pcVar7 = (code *)&UNK_109754ce4;
          if (bVar8) {
            pcVar7 = (code *)0x0;
          }
        }
        pppppplVar22 = pppppplStack_1b0;
        bVar8 = (long *******)pppppplStack_1b0 != (long *******)0x0;
        pppppplStack_1b0 = (long ******)ppppppplVar9;
        if (bVar8) {
          (*pcStack_1a8)(pppppplVar22);
        }
        pcStack_1a8 = pcVar7;
        if ((long *******)pppppplStack_1b0 != (long *******)0x0) {
          ppppppplVar15 = (long *******)pppppplStack_1b0;
          func_0x0001096fc5f0(pppppplStack_1b0,0);
          pppppplVar22 = pppppplStack_130;
          if ((*(int *)((long)ppppppplVar15 + 4) != 0) &&
             (ppppppplVar15[0x14] == (long ******)&UNK_1096fc390)) {
            *(undefined4 *)ppppppplVar15[0x13] = 0;
          }
          bVar8 = (long *******)pppppplStack_130 != (long *******)0x0;
          pppppplStack_130 = (long ******)ppppppplVar15;
          if (bVar8) {
            (*pcStack_128)(pppppplVar22);
          }
          ppppplVar24 = ppppplStack_188;
          pppppplVar22 = pppppplStack_1b0;
          pcStack_128 = (code *)&SUB_1096fba38;
          pppppplVar21 = param_1[0x45];
          pppppplVar14 = (long ******)ppppplStack_180;
          while (pppppplVar30 = pppppplStack_170, pppppplVar14 != (long ******)ppppplVar24) {
            pppppplVar14 = pppppplVar14 + -8;
            func_0x00010a9faba8(pppppplVar14);
          }
          ppppplStack_180 = ppppplVar24;
          ppppppplVar15 = (long *******)pppppplStack_168;
          while (ppppppplVar15 != (long *******)pppppplVar30) {
            ppppppplVar15 = ppppppplVar15 + -6;
            func_0x00010a9fab24(ppppppplVar15);
          }
          pppppplStack_168 = pppppplVar30;
          uStack_150 = uStack_158;
          if (((long *******)pppppplVar22 != (long *******)0x0) &&
             ((*(byte *)((long)pppppplVar22 + 0x11) & 1) != 0)) {
            puStack_1f8 = (uint *)0x0;
            ppppppplVar15 = (long *******)pppppplVar22;
            func_0x000109759bd4(pppppplVar22,&puStack_1f8);
            ppppplVar6 = ppppplStack_180;
            ppppplVar24 = ppppplStack_188;
            puVar10 = puStack_1f8;
            if (((int)ppppppplVar15 == 0) && (puStack_1f8 != (uint *)0x0)) {
              ppppppplVar15 = (long *******)(ulong)*puStack_1f8;
              if ((long *******)((long)ppppplStack_178 - (long)ppppplStack_188 >> 6) < ppppppplVar15
                 ) {
                ppppppplVar9 = ppppppplVar15;
                pppppplStack_2d0 = &ppppplStack_188;
                FUN_10aa117d0();
                pcVar33 = (char *)((long)ppppppplVar15 + ((long)ppppplVar6 - (long)ppppplVar24));
                uStack_2e8 = SUB87(pcVar33,0);
                cStack_2e1 = (char)((ulong)pcVar33 >> 0x38);
                pppppplStack_2d8 = (long ******)(ppppppplVar15 + (long)ppppppplVar9 * 8);
                uStack_2e0 = SUB81(pcVar33,0);
                uStack_2df = (undefined6)((ulong)pcVar33 >> 8);
                pppppplStack_2f0 = (long ******)ppppppplVar15;
                cStack_2d9 = cStack_2e1;
                FUN_10aa116e4(&ppppplStack_188,&pppppplStack_2f0);
                func_0x00010aa11804(&pppppplStack_2f0);
                ppppppplVar15 = (long *******)(ulong)*puStack_1f8;
              }
              func_0x0001073b504c(&uStack_158);
              if (*puStack_1f8 != 0) {
                lVar26 = 0;
                uVar25 = 0;
                do {
                  lVar35 = *(long *)(puStack_1f8 + 4);
                  plVar2 = (long *)(lVar35 + lVar26);
                  fStack_2bc = 0.0;
                  fStack_2b8 = 0.0;
                  fStack_2c0 = 0.0;
                  pppppplStack_2d8 = (long ******)0x0;
                  uStack_2e0 = 0;
                  uStack_2df = 0;
                  uStack_2c8 = 0;
                  iStack_2c4 = 0;
                  pppppplStack_2d0 = (long ******)0x0;
                  uStack_2e8 = 0;
                  cStack_2e1 = '\0';
                  uVar17 = *(uint *)(plVar2 + 4);
                  uVar17 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
                  unaff_x27 = (long *******)
                              ((ulong)unaff_x27 & 0xffffff0000000000 |
                              (ulong)(uVar17 >> 0x10 | uVar17 << 0x10));
                  cStack_2d9 = '\x04';
                  pppppplStack_2f0 = (long ******)unaff_x27;
                  if (*plVar2 == 0) {
                    pppppplStack_b8 = (long ******)0x0;
                    pppppplStack_b0 = (long ******)0x400000000000000;
                    uStack_c0 = unaff_x27;
                  }
                  else {
                    func_0x000107c2b054(&uStack_c0);
                    if (iStack_2c4 < 0) {
                      __ZdlPv(pppppplStack_2d8);
                    }
                  }
                  pppppplStack_2d0 = pppppplStack_b8;
                  pppppplStack_2d8 = (long ******)uStack_c0;
                  uStack_2c8 = SUB84(pppppplStack_b0,0);
                  iStack_2c4 = (int)((ulong)pppppplStack_b0 >> 0x20);
                  lVar35 = lVar35 + lVar26;
                  fStack_2c0 = (float)*(long *)(lVar35 + 8) / 65536.0;
                  fStack_2bc = (float)*(long *)(lVar35 + 0x10) / 65536.0;
                  fStack_2b8 = (float)*(long *)(lVar35 + 0x18) / 65536.0;
                  ppppppplVar15 = (long *******)&fStack_2bc;
                  FUN_10a0ca014(&uStack_158);
                  if (ppppplStack_180 < ppppplStack_178) {
                    ppppplStack_180[2] =
                         (long ****)CONCAT17(cStack_2d9,CONCAT61(uStack_2df,uStack_2e0));
                    ppppplStack_180[1] = (long ****)CONCAT17(cStack_2e1,uStack_2e8);
                    *ppppplStack_180 = (long ****)pppppplStack_2f0;
                    uStack_2e8 = 0;
                    cStack_2e1 = '\0';
                    uStack_2e0 = 0;
                    uStack_2df = 0;
                    cStack_2d9 = '\0';
                    pppppplStack_2f0 = (long ******)0x0;
                    ppppplStack_180[4] = (long ****)pppppplStack_2d0;
                    ppppplStack_180[3] = (long ****)pppppplStack_2d8;
                    ppppplStack_180[5] = (long ****)CONCAT44(iStack_2c4,uStack_2c8);
                    pppppplStack_2d0 = (long ******)0x0;
                    uStack_2c8 = 0;
                    iStack_2c4 = 0;
                    pppppplStack_2d8 = (long ******)0x0;
                    *(float *)(ppppplStack_180 + 7) = fStack_2b8;
                    ppppplStack_180[6] = (long ****)CONCAT44(fStack_2bc,fStack_2c0);
                    ppppplStack_180 = ppppplStack_180 + 8;
                  }
                  else {
                    lVar35 = (long)ppppplStack_180 - (long)ppppplStack_188;
                    ppppppplVar9 = (long *******)((lVar35 >> 6) + 1);
                    if ((ulong)ppppppplVar9 >> 0x3a != 0) goto LAB_10a9e1604;
                    ppppppplVar28 =
                         (long *******)((long)ppppplStack_178 - (long)ppppplStack_188 >> 5);
                    if (ppppppplVar28 <= ppppppplVar9) {
                      ppppppplVar28 = ppppppplVar9;
                    }
                    if (0x7fffffffffffffbf < (ulong)((long)ppppplStack_178 - (long)ppppplStack_188))
                    {
                      ppppppplVar28 = (long *******)0x3ffffffffffffff;
                    }
                    pppppplStack_a0 = &ppppplStack_188;
                    if (ppppppplVar28 == (long *******)0x0) {
                      ppppppplVar15 = (long *******)0x0;
                    }
                    else {
                      FUN_10aa117d0();
                    }
                    pppppplStack_b8 = (long ******)((long)ppppppplVar28 + lVar35);
                    pppppplStack_a8 = (long ******)(ppppppplVar28 + (long)ppppppplVar15 * 8);
                    pppppplStack_b8[1] = (long *****)CONCAT17(cStack_2e1,uStack_2e8);
                    *pppppplStack_b8 = (long *****)pppppplStack_2f0;
                    pppppplStack_b8[2] =
                         (long *****)CONCAT17(cStack_2d9,CONCAT61(uStack_2df,uStack_2e0));
                    uStack_2e8 = 0;
                    cStack_2e1 = '\0';
                    uStack_2e0 = 0;
                    uStack_2df = 0;
                    cStack_2d9 = '\0';
                    pppppplStack_2f0 = (long ******)0x0;
                    pppppplStack_b8[4] = (long *****)pppppplStack_2d0;
                    pppppplStack_b8[3] = (long *****)pppppplStack_2d8;
                    pppppplStack_b8[5] = (long *****)CONCAT44(iStack_2c4,uStack_2c8);
                    pppppplStack_2d0 = (long ******)0x0;
                    uStack_2c8 = 0;
                    iStack_2c4 = 0;
                    pppppplStack_2d8 = (long ******)0x0;
                    pppppplStack_b8[6] = (long *****)CONCAT44(fStack_2bc,fStack_2c0);
                    *(float *)(pppppplStack_b8 + 7) = fStack_2b8;
                    pppppplStack_b0 = pppppplStack_b8 + 8;
                    ppppppplVar15 = (long *******)&uStack_c0;
                    uStack_c0 = ppppppplVar28;
                    FUN_10aa116e4(&ppppplStack_188);
                    ppppplVar24 = ppppplStack_180;
                    func_0x00010aa11804(&uStack_c0);
                    ppppplStack_180 = ppppplVar24;
                    if (iStack_2c4 < 0) {
                      __ZdlPv(pppppplStack_2d8);
                    }
                  }
                  if (cStack_2d9 < '\0') {
                    __ZdlPv(pppppplStack_2f0);
                  }
                  uVar25 = uVar25 + 1;
                  lVar26 = lVar26 + 0x30;
                } while (uVar25 < *puStack_1f8);
              }
              pppppplVar30 = pppppplStack_168;
              pppppplVar14 = pppppplStack_170;
              uVar17 = puStack_1f8[2];
              uVar25 = (ulong)uVar17;
              if ((ulong)(((long)pppppplStack_160 - (long)pppppplStack_170 >> 4) *
                         -0x5555555555555555) < uVar25) {
                pppppplStack_2d0 = (long ******)&pppppplStack_170;
                FUN_10aa11864();
                ppppppplVar9 = (long *******)((long)pppppplVar30 + (uVar25 - (long)pppppplVar14));
                ppppppplVar28 =
                     (long *******)
                     ((long)ppppppplVar9 + ((long)pppppplStack_170 - (long)pppppplStack_168));
                func_0x00010aa118a8(pppppplStack_170,pppppplStack_168,ppppppplVar28);
                uStack_2e0 = SUB81(pppppplStack_170,0);
                uStack_2df = (undefined6)((ulong)pppppplStack_170 >> 8);
                cStack_2d9 = (char)((ulong)pppppplStack_170 >> 0x38);
                pppppplStack_2d8 = pppppplStack_160;
                pppppplStack_2f0 = pppppplStack_170;
                uStack_2e8 = SUB87(pppppplStack_170,0);
                cStack_2e1 = cStack_2d9;
                pppppplStack_170 = (long ******)ppppppplVar28;
                pppppplStack_168 = (long ******)ppppppplVar9;
                pppppplStack_160 = (long ******)(uVar25 + (long)ppppppplVar15 * 0x30);
                func_0x00010aa11930(&pppppplStack_2f0);
                uVar17 = puStack_1f8[2];
              }
              if (uVar17 != 0) {
                uVar25 = 0;
                do {
                  plVar2 = (long *)(*(long *)(puStack_1f8 + 6) + uVar25 * 0x10);
                  pppppplStack_2d8 = (long ******)0x0;
                  uStack_2e0 = 0;
                  uStack_2df = 0;
                  cStack_2d9 = '\0';
                  uStack_2c8 = 0;
                  iStack_2c4 = 0;
                  pppppplStack_2d0 = (long ******)0x0;
                  uStack_2e8 = 0;
                  cStack_2e1 = 0;
                  pppppplStack_2f0 = (long ******)0x0;
                  if (((*(byte *)(pppppplVar22 + 2) >> 3 & 1) == 0) ||
                     (uVar4 = *(ushort *)(pppppplVar22 + 0x46), uVar4 == 0)) {
LAB_10a9e10b0:
                    uStack_90 = 0;
                    cStack_89 = '\0';
                    uStack_88 = 0;
                    cStack_81 = '\0';
                    uStack_80 = 0;
                  }
                  else {
                    sVar31 = 0;
                    ppppppplVar15 = (long *******)0x0;
                    uVar37 = 0;
                    uVar17 = 0;
                    uVar40 = *(uint *)(plVar2 + 1);
                    iVar18 = -1;
                    do {
                      uStack_c0 = (long *******)0x0;
                      pppppplStack_b8 = (long ******)0x0;
                      pppppplStack_b0 = (long ******)0x0;
                      ppppppplVar9 = (long *******)pppppplVar22;
                      func_0x000109757654(pppppplVar22,uVar17,&uStack_c0);
                      if (((int)ppppppplVar9 == 0) && (uVar40 == uStack_c0._6_2_)) {
                        iVar27 = 2;
                        if (uStack_c0._4_2_ == 0x409) {
                          iVar27 = 3;
                        }
                        iVar3 = 1;
                        if ((short)uStack_c0 != 1) {
                          iVar3 = -1;
                        }
                        if (uStack_c0._2_2_ != 1 || (short)uStack_c0 != 3) {
                          iVar27 = iVar3;
                        }
                        if (iVar18 < iVar27) {
                          uVar37 = (ulong)pppppplStack_b0 & 0xffffffff;
                          ppppppplVar15 = (long *******)pppppplStack_b8;
                          iVar18 = iVar27;
                          sVar31 = (short)uStack_c0;
                        }
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar4 != uVar17);
                    if (iVar18 < 0) goto LAB_10a9e10b0;
                    uStack_90 = 0;
                    cStack_89 = '\0';
                    uStack_88 = 0;
                    cStack_81 = '\0';
                    uStack_80 = 0;
                    if (sVar31 == 1) {
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                                (&uStack_90,uVar37);
                      for (; uVar37 != 0; uVar37 = uVar37 - 1) {
                        iVar18 = (int)*(char *)ppppppplVar15;
                        if (0x7fffffff < (uint)(int)*(char *)ppppppplVar15) {
                          iVar18 = 0x3f;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                  (&uStack_90,iVar18);
                        ppppppplVar15 = (long *******)((long)ppppppplVar15 + 1);
                      }
                    }
                    else {
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                                (&uStack_90,uVar37 >> 1);
                      if (1 < uVar37) {
                        lVar26 = 0;
                        do {
                          cVar38 = ((char *)((long)ppppppplVar15 + lVar26))[1];
                          if (0x7fffffff < (uint)(int)cVar38 ||
                              *(char *)((long)ppppppplVar15 + lVar26) != '\0') {
                            cVar38 = '?';
                          }
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                    (&uStack_90,(int)cVar38);
                          uVar34 = lVar26 + 3;
                          lVar26 = lVar26 + 2;
                        } while (uVar34 < (uVar37 & 0xfffffffe));
                      }
                    }
                  }
                  if (cStack_2d9 < '\0') {
                    __ZdlPv(pppppplStack_2f0);
                  }
                  uStack_2e0 = (undefined1)uStack_80;
                  uStack_2df = (undefined6)(uStack_80 >> 8);
                  cStack_2d9 = (char)(uStack_80 >> 0x38);
                  pppppplStack_2f0 = (long ******)CONCAT17(cStack_89,uStack_90);
                  uStack_2e8 = uStack_88;
                  cStack_2e1 = cStack_81;
                  uVar37 = CONCAT17(cStack_81,uStack_88);
                  if (-1 < (long)uStack_80) {
                    uVar37 = uStack_80 >> 0x38;
                  }
                  if (uVar37 == 0) {
                    __ZNSt3__19to_stringEj(&uStack_c0,(int)uVar25 + 1);
                    puVar16 = &uStack_c0;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                              (puVar16,0,&UNK_10f68a497,9);
                    ppppppplVar15 = (long *******)*puVar16;
                    uStack_90 = (undefined7)puVar16[1];
                    cStack_89 = (char)*(undefined8 *)((long)puVar16 + 0xf);
                    uStack_88 = (undefined7)((ulong)*(undefined8 *)((long)puVar16 + 0xf) >> 8);
                    cVar38 = *(char *)((long)puVar16 + 0x17);
                    puVar16[1] = 0;
                    puVar16[2] = 0;
                    *puVar16 = 0;
                    if (cStack_2d9 < '\0') {
                      __ZdlPv(pppppplStack_2f0);
                    }
                    uStack_2e8 = uStack_90;
                    cStack_2e1 = cStack_89;
                    uStack_2e0 = (undefined1)uStack_88;
                    uStack_2df = (undefined6)((uint7)uStack_88 >> 8);
                    pppppplStack_2f0 = (long ******)ppppppplVar15;
                    cStack_2d9 = cVar38;
                  }
                  puVar16 = (undefined8 *)(ulong)*puStack_1f8;
                  func_0x0001073b504c(&pppppplStack_2d8);
                  if (*puStack_1f8 != 0) {
                    uVar37 = 0;
                    do {
                      uStack_c0 = (long *******)
                                  CONCAT44(uStack_c0._4_4_,
                                           (float)*(long *)(*plVar2 + uVar37 * 8) / 65536.0);
                      puVar16 = &uStack_c0;
                      FUN_10a001c34(&pppppplStack_2d8);
                      uVar37 = uVar37 + 1;
                    } while (uVar37 < *puStack_1f8);
                  }
                  if (pppppplStack_168 < pppppplStack_160) {
                    pppppplStack_168[2] =
                         (long *****)CONCAT17(cStack_2d9,CONCAT61(uStack_2df,uStack_2e0));
                    pppppplStack_168[3] = (long *****)0x0;
                    pppppplStack_168[1] = (long *****)CONCAT17(cStack_2e1,uStack_2e8);
                    *pppppplStack_168 = (long *****)pppppplStack_2f0;
                    uStack_2e8 = 0;
                    cStack_2e1 = '\0';
                    uStack_2e0 = 0;
                    uStack_2df = 0;
                    cStack_2d9 = '\0';
                    pppppplStack_2f0 = (long ******)0x0;
                    pppppplStack_168[4] = (long *****)0x0;
                    pppppplStack_168[5] = (long *****)0x0;
                    pppppplStack_168[4] = (long *****)pppppplStack_2d0;
                    pppppplStack_168[3] = (long *****)pppppplStack_2d8;
                    pppppplStack_168[5] = (long *****)CONCAT44(iStack_2c4,uStack_2c8);
                    pppppplStack_2d8 = (long ******)0x0;
                    pppppplStack_2d0 = (long ******)0x0;
                    uStack_2c8 = 0;
                    iStack_2c4 = 0;
                    pppppplStack_168 = pppppplStack_168 + 6;
                  }
                  else {
                    lVar26 = (long)pppppplStack_168 - (long)pppppplStack_170;
                    uVar37 = (lVar26 >> 4) * -0x5555555555555555 + 1;
                    if (0x555555555555555 < uVar37) {
                      FUN_10aa11850();
                      goto LAB_10a9e1628;
                    }
                    lVar35 = (long)pppppplStack_160 - (long)pppppplStack_170 >> 4;
                    uVar34 = lVar35 * 0x5555555555555556;
                    if (uVar34 < uVar37 || uVar34 - uVar37 == 0) {
                      uVar34 = uVar37;
                    }
                    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar35 * -0x5555555555555555)) {
                      uVar34 = 0x555555555555555;
                    }
                    pppppplStack_a0 = (long ******)&pppppplStack_170;
                    FUN_10aa11864();
                    puVar19 = (undefined8 *)(uVar34 + lVar26);
                    puVar19[2] = CONCAT17(cStack_2d9,CONCAT61(uStack_2df,uStack_2e0));
                    puVar19[1] = CONCAT17(cStack_2e1,uStack_2e8);
                    *puVar19 = pppppplStack_2f0;
                    uStack_2e8 = 0;
                    cStack_2e1 = '\0';
                    uStack_2e0 = 0;
                    uStack_2df = 0;
                    cStack_2d9 = '\0';
                    pppppplStack_2f0 = (long ******)0x0;
                    puVar19[3] = 0;
                    puVar19[4] = 0;
                    puVar19[5] = 0;
                    puVar19[4] = pppppplStack_2d0;
                    puVar19[3] = pppppplStack_2d8;
                    puVar19[5] = CONCAT44(iStack_2c4,uStack_2c8);
                    pppppplStack_2d8 = (long ******)0x0;
                    pppppplStack_2d0 = (long ******)0x0;
                    uStack_2c8 = 0;
                    iStack_2c4 = 0;
                    ppppppplVar15 = (long *******)(puVar19 + 6);
                    ppppppplVar9 = (long *******)
                                   ((long)puVar19 +
                                   ((long)pppppplStack_170 - (long)pppppplStack_168));
                    func_0x00010aa118a8(pppppplStack_170,pppppplStack_168,ppppppplVar9);
                    pppppplStack_b0 = pppppplStack_170;
                    pppppplStack_a8 = pppppplStack_160;
                    uStack_c0 = (long *******)pppppplStack_170;
                    pppppplStack_b8 = pppppplStack_170;
                    pppppplStack_170 = (long ******)ppppppplVar9;
                    pppppplStack_168 = (long ******)ppppppplVar15;
                    pppppplStack_160 = (long ******)(uVar34 + (long)puVar16 * 0x30);
                    func_0x00010aa11930(&uStack_c0);
                    pppppplStack_168 = (long ******)ppppppplVar15;
                    if ((long *******)pppppplStack_2d8 != (long *******)0x0) {
                      pppppplStack_2d0 = pppppplStack_2d8;
                      __ZdlPv();
                    }
                  }
                  if (cStack_2d9 < '\0') {
                    __ZdlPv(pppppplStack_2f0);
                  }
                  uVar25 = uVar25 + 1;
                } while (uVar25 < puStack_1f8[2]);
              }
              if (pppppplVar21 != (long ******)0x0) {
                ppppplVar24 = *pppppplVar21;
                (*(code *)ppppplVar24[2])(ppppplVar24,puVar10);
              }
            }
          }
          FUN_10a9fac2c(&pppppplStack_2f0,auStack_f8,&uStack_1d0);
          ppppppplVar15 = param_1 + 8;
          FUN_10aa11228(ppppppplVar15,&pppppplStack_2f0,&pppppplStack_2f0);
          FUN_10a9fad70(&pppppplStack_2d0);
          if (cStack_2d9 < '\0') {
            __ZdlPv(pppppplStack_2f0);
          }
          goto LAB_10a9e151c;
        }
      }
LAB_10a9e0c1c:
      if ((long *******)pppppplStack_1b0 == (long *******)0x0) {
        pppppplVar22 = param_2[1];
        ppppppplVar9 = (long *******)*param_2;
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          pppppplVar22 = (long ******)(ulong)*(byte *)((long)param_2 + 0x17);
          ppppppplVar9 = param_2;
        }
        if (pppppplVar22 == (long ******)0x0) {
          pppppplVar14 = (long ******)0x0;
        }
        else {
          do {
            pppppplVar14 = pppppplVar22;
            if (pppppplVar14 == (long ******)0x0) break;
            pppppplVar22 = (long ******)((long)pppppplVar14 + -1);
          } while (*(char *)((long)ppppppplVar9 + (long)pppppplVar14 + -1) != '/');
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (&uStack_c0,param_2,pppppplVar14,0xffffffffffffffff,&pppppplStack_2f0);
        ppppppplVar9 = (long *******)pppppplStack_b8;
        ppppppplVar28 = uStack_c0;
        if (-1 < (long)pppppplStack_b0) {
          ppppppplVar9 = (long *******)((ulong)pppppplStack_b0 >> 0x38);
          ppppppplVar28 = (long *******)&uStack_c0;
        }
        if (ppppppplVar9 == (long *******)0x0) {
LAB_10a9e140c:
          ppppppplVar9 = (long *******)0xffffffffffffffff;
        }
        else {
          do {
            if (ppppppplVar9 == (long *******)0x0) goto LAB_10a9e140c;
            pcVar33 = (char *)((long)ppppppplVar28 + -1) + (long)ppppppplVar9;
            ppppppplVar9 = (long *******)((long)ppppppplVar9 + -1);
          } while (*pcVar33 != '.');
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (&uStack_90,&uStack_c0,0,ppppppplVar9,&pppppplStack_2f0);
        FUN_10a9edb0c(&pppppplStack_2f0,&uStack_90);
        if ((long *******)pppppplStack_140 != (long *******)0x0) {
          _CFRelease();
        }
        pppppplStack_140 = pppppplStack_2f0;
        pppppplStack_2f0 = (long ******)0x0;
        FUN_10aa10ef8(&pppppplStack_2f0);
        pppppplVar22 = pppppplStack_140;
        if ((long *******)pppppplStack_140 != (long *******)0x0) {
          uStack_138 = 1;
          FUN_10a9fac2c(&pppppplStack_2f0,auStack_f8,&uStack_1d0);
          ppppppplVar15 = param_1 + 8;
          FUN_10aa11228(ppppppplVar15,&pppppplStack_2f0,&pppppplStack_2f0);
          FUN_10a9fad70(&pppppplStack_2d0);
          if (cStack_2d9 < '\0') {
            __ZdlPv(pppppplStack_2f0);
          }
        }
        if ((long *******)pppppplVar22 != (long *******)0x0) goto LAB_10a9e151c;
      }
      ppppppplVar15 = (long *******)0x0;
    }
LAB_10a9e151c:
    FUN_10a9fad70(&uStack_1d0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return ppppppplVar15;
  }
  ___stack_chk_fail();
LAB_10a9e1604:
  FUN_10aa116d0();
LAB_10a9e1628:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a9e162c);
  (*pcVar7)();
LAB_10a9dfb64:
  pppplVar36 = (long ****)*pppplVar36;
  if (pppplVar36 == (long ****)0x0) goto LAB_10a9dfb6c;
  goto LAB_10a9dfb18;
}



/* Entry: 10a9e1910; end: 10a9e19b7;  */

/* WARNING: Possible PIC construction at 0x0001000537dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

undefined1  [16] FUN_10a9e1910(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 *in_stack_ffffffffffffffc8;
  long in_stack_ffffffffffffffd8;
  
  puVar2 = param_1;
  if (*(char *)(param_2 + 0x10f) < '\0') {
    uVar9 = *(ulong *)(param_2 + 0x100);
    if (uVar9 != 0) {
      puVar7 = *(undefined **)(param_2 + 0xf8);
      if (0x16 < uVar9) {
        if (uVar9 < 0x7ffffffffffffff7) {
          puVar7 = (undefined *)0x19;
          if ((uVar9 | 7) != 0x17) {
            puVar7 = (undefined *)((uVar9 | 7) + 1);
          }
        }
        else {
          func_0x000104bd47d4();
        }
        puVar1 = puVar7;
        func_0x000107c60e20(puVar7);
        auVar12._8_8_ = puVar7;
        auVar12._0_8_ = puVar1;
        return auVar12;
      }
      *(char *)((long)param_1 + 0x17) = (char)uVar9;
      puVar1 = (undefined *)(uVar9 + 1);
      goto code_r0x000107c610b8;
    }
  }
  else if (*(char *)(param_2 + 0x10f) != '\0') {
    uVar6 = *(undefined8 *)(param_2 + 0xf8);
    param_1[1] = *(undefined8 *)(param_2 + 0x100);
    *param_1 = uVar6;
    param_1[2] = *(undefined8 *)(param_2 + 0x108);
    auVar16._8_8_ = param_3;
    auVar16._0_8_ = param_2;
    return auVar16;
  }
  lVar4 = *(long *)(param_2 + 0xe0);
  if (lVar4 != 0) {
    plVar8 = (long *)0x1;
    FUN_10a37d18c();
    if (plVar8 == (long *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar8;
    }
    if ((int)lVar4 == 2) {
      FUN_10a099f6c(&stack0xffffffffffffffc8);
      uVar9 = *(ulong *)(lVar10 + 0x30);
      puVar2 = *(undefined8 **)(lVar10 + 0x28);
      if (-1 < (char)*(byte *)(lVar10 + 0x3f)) {
        uVar9 = (ulong)*(byte *)(lVar10 + 0x3f);
        puVar2 = (undefined8 *)(lVar10 + 0x28);
      }
      puVar3 = (undefined8 *)&stack0xffffffffffffffc8;
      uVar6 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar3,0,puVar2,uVar9);
      uVar11 = *puVar3;
      param_1[1] = puVar3[1];
      *param_1 = uVar11;
      param_1[2] = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      if (in_stack_ffffffffffffffd8 < 0) {
        __ZdlPv(in_stack_ffffffffffffffc8);
        puVar3 = in_stack_ffffffffffffffc8;
      }
      auVar15._8_8_ = uVar6;
      auVar15._0_8_ = puVar3;
      return auVar15;
    }
  }
  puVar7 = &UNK_10f6891b4;
  puVar1 = puVar7;
  puVar5 = puVar7;
  func_0x000107c613d0();
  if ((undefined *)0x7ffffffffffffff7 < puVar1) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar1 = (undefined *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar1 != 0) {
        puVar2 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uVar6 = 0x1132ffc28;
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar2;
        puVar2[1] = 0x434948504152475f;
        *puVar2 = 0x45524f43534e454c;
        puVar2[3] = 0x525f595a414c5f54;
        puVar2[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar2 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar2 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar2 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        uVar11 = 0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        auVar17._8_8_ = uVar6;
        auVar17._0_8_ = uVar11;
        return auVar17;
      }
    }
    auVar14._8_8_ = puVar5;
    auVar14._0_8_ = puVar1;
    return auVar14;
  }
  if (puVar1 < (undefined *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar1;
    if (puVar1 == (undefined *)0x0) {
      *(undefined1 *)param_1 = 0;
      auVar13._8_8_ = puVar5;
      auVar13._0_8_ = param_1;
      return auVar13;
    }
  }
  else {
    puVar3 = (undefined8 *)0x19;
    if (((ulong)puVar1 | 7) != 0x17) {
      puVar3 = (undefined8 *)(((ulong)puVar1 | 7) + 1);
    }
    puVar2 = puVar3;
    func_0x000107c60e20();
    param_1[1] = puVar1;
    param_1[2] = (ulong)puVar3 | 0x8000000000000000;
    *param_1 = puVar2;
  }
code_r0x000107c610b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(puVar2,puVar7,puVar1);
  auVar18._8_8_ = puVar7;
  auVar18._0_8_ = puVar2;
  return auVar18;
}



/* Entry: 10a9e19b8; end: 10a9e1ad3;  */

void FUN_10a9e19b8(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *extraout_x8;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    *puVar11 = param_2;
    puVar11[1] = param_3;
    if (param_3 != 0) {
      plVar6 = (long *)(param_3 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar11 = puVar11 + 2;
LAB_10a9e1ab0:
    param_1[1] = (long)puVar11;
    return;
  }
  lVar9 = *param_1;
  lVar10 = (long)puVar11 - lVar9;
  lVar12 = lVar10 >> 4;
  uVar1 = lVar12 + 1;
  plVar6 = param_1;
  if (uVar1 >> 0x3c == 0) {
    uVar7 = param_1[2] - lVar9;
    uVar8 = (long)uVar7 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 >> 0x3c == 0) {
      lVar5 = uVar8 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar5 + lVar10);
      *puVar2 = param_2;
      puVar2[1] = param_3;
      if (param_3 != 0) {
        plVar6 = (long *)(param_3 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar9 = *param_1;
        lVar10 = param_1[1] - lVar9;
        lVar12 = lVar10 >> 4;
      }
      puVar11 = puVar2 + 2;
      _memcpy(puVar2 + lVar12 * -2,lVar9,lVar10);
      *param_1 = (long)(puVar2 + lVar12 * -2);
      param_1[1] = (long)puVar11;
      param_1[2] = lVar5 + uVar8 * 0x10;
      if (lVar9 != 0) {
        __ZdlPv(lVar9);
      }
      goto LAB_10a9e1ab0;
    }
  }
  else {
    FUN_10a9f91f0();
  }
  func_0x000109ffded8();
  pcStack_58 = FUN_10a9e1ad4;
  lStack_70 = lVar9;
  plStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar6 + 0x50))(&uStack_80);
  extraout_x8[1] = plStack_78;
  *extraout_x8 = uStack_80;
  if (plStack_78 != (long *)0x0) {
    plVar6 = plStack_78 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (plStack_78 != (long *)0x0) {
      plVar6 = plStack_78 + 1;
      do {
        lVar9 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
  }
  return;
}



/* Entry: 10a9e1ad4; end: 10a9e1b63;  */

void FUN_10a9e1ad4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10a9e1b64; end: 10a9e237f;  */

void FUN_10a9e1b64(ulong param_1,long *param_2,long param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,ulong param_7,undefined1 *param_8)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long *plVar13;
  long **pplVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 extraout_x8;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3b8;
  ulong uStack_3b0;
  undefined1 auStack_378 [40];
  long lStack_350;
  undefined8 uStack_348;
  long *plStack_340;
  long lStack_2a0;
  long lStack_298;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined4 uStack_264;
  long *plStack_260;
  long *plStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  long lStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined2 uStack_158;
  long lStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined1 auStack_100 [8];
  long lStack_f8;
  byte bStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined8 uStack_c7;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined1 uStack_b0;
  long lStack_a8;
  byte bStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  lVar25 = *(long *)(*param_4 + 0x50);
  uVar2 = 0x100000;
  if ((*(ulong *)(lVar25 + 0x10) & 1) != 0) {
    uVar2 = 0x100008;
  }
  uVar17 = (ulong)uVar2;
  lVar27 = lVar25;
  uVar22 = param_5;
  uVar18 = param_6;
  uVar26 = param_7;
  func_0x000109752c30(lVar25,param_5,uVar17);
  if ((int)lVar27 != 0) {
    __ZNSt3__19to_stringEi(&plStack_190);
    FUN_109feb280(&lStack_150,&UNK_10f6899f7,&plStack_190);
    FUN_10a0029c0(&lStack_150);
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a9e2228);
    (*pcVar8)();
  }
  uVar16 = (ulong)*(uint *)(*(long *)(lVar25 + 0x98) + 0x18);
  uVar9 = *(undefined8 *)(*(long *)(*param_4 + 0xd0) + 0x20);
  func_0x000109700ab4(uVar9,uVar16);
  if ((int)uVar9 != 0) {
LAB_10a9e1c14:
    uStack_110._0_4_ = (uint)uStack_110 & 0xffffff00;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    plStack_148 = (long *)0x0;
    lStack_150 = 0;
    lStack_138 = 0;
    lStack_140 = 0;
    uStack_110 = CONCAT44(0x3f800000,(uint)uStack_110);
    uStack_108 = 0;
    auStack_100[0] = 0;
    bStack_f0 = 0;
    plStack_e0 = (long *)0x0;
    uStack_e8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c7 = 0;
    uStack_cf = 0;
    uStack_c8 = 0;
    uStack_bc = 0x3f800000;
    uStack_b8 = 0;
    uStack_b0 = 0;
    bStack_a0 = 0;
    uStack_98 = 0;
    plStack_190 = (long *)CONCAT44((int)param_7,(int)param_5);
    plStack_180 = (long *)0x0;
    uStack_178 = 0;
    lVar27 = *(long *)(*param_4 + 0xa8);
    lVar23 = *(long *)(*param_4 + 0xb0);
    plStack_188 = (long *)0x0;
    FUN_10a0ca588(&plStack_188,lVar27,lVar23,lVar23 - lVar27 >> 2);
    uStack_170 = 1;
    uStack_160 = 0;
    uStack_158 = 0;
    lVar27 = param_3;
    lStack_168 = lVar25;
    FUN_10a9e4bb0(param_3,&plStack_190);
    if (lVar27 != 0) {
      FUN_10a350d34(&lStack_138,lVar27 + 0x50);
      uStack_120 = *(undefined8 *)(lVar27 + 0x68);
      uStack_128 = *(undefined8 *)(lVar27 + 0x60);
      uStack_110 = *(undefined8 *)(lVar27 + 0x78);
      uStack_118 = *(undefined8 *)(lVar27 + 0x70);
      uStack_108 = *(undefined1 *)(lVar27 + 0x80);
      func_0x00010a9f95d4(auStack_100,lVar27 + 0x88);
    }
    if (lStack_138 == 0) {
      lVar27 = param_3;
      FUN_10a9e4db0(param_3,&lStack_150,param_4,&plStack_190,1,0);
      *param_8 = (char)lVar27;
    }
    uVar22 = *(undefined8 *)(param_3 + 0x220);
    uVar4 = *(undefined2 *)(*(long *)(lVar25 + 0xa0) + 0x1a);
    puVar10 = (undefined8 *)0xd0;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar11 = puVar10 + 3;
    *puVar10 = &PTR_FUN_110c38118;
    FUN_10aaea58c(puVar11,uVar22,param_6,param_5,&lStack_138,&uStack_128,uVar4);
    *param_2 = (long)puVar11;
    param_2[1] = (long)puVar10;
    if (plStack_188 != (long *)0x0) {
      plStack_180 = plStack_188;
      __ZdlPv();
    }
    if (((bStack_a0 & 1) != 0) && (lStack_a8 != 0)) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar19 = plStack_e0;
    if (plStack_e0 != (long *)0x0) {
      plVar13 = plStack_e0 + 1;
      do {
        lVar25 = *plVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      }
    }
    if (((bStack_f0 & 1) != 0) && (lStack_f8 != 0)) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar19 = plStack_130;
    if (plStack_130 != (long *)0x0) {
      plVar13 = plStack_130 + 1;
      do {
        lVar25 = *plVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plStack_130 + 0x10))(plStack_130);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      }
    }
    if (lStack_140 < 0) {
      __ZdlPv(lStack_150);
    }
    return;
  }
  lVar27 = *(long *)(lVar25 + 0x98);
  iVar3 = *(int *)(lVar27 + 0x90);
  if (iVar3 != 0x6f75746c) {
    if (iVar3 != 0x62697473) {
      puVar12 = &UNK_10f689a2c;
      FUN_10a00946c();
      __ZNSt3__119__shared_weak_countD2Ev(param_5);
      __ZdlPv();
      func_0x00010a35da9c(&puStack_1a0);
      __Unwind_Resume(puVar12);
      plStack_260 = (long *)0x0;
      FUN_10a9e283c(&lStack_3d0,puVar12,uVar16,uVar17,uVar22,uVar18,uVar26 & 0xffff);
      if (lStack_3c8 == lStack_3d0) {
LAB_10a9e25dc:
        plStack_258 = (long *)0x0;
        plStack_260 = (long *)0x0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_240 = 0x3f800000;
        plVar19 = plStack_340;
        if (plStack_340 != (long *)0x0) {
          do {
            fVar29 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar19 + 0x34));
            uStack_264 = (undefined4)(long)(*(float *)(plVar19 + 6) * fVar29);
            pplVar14 = &plStack_260;
            FUN_10aa0edc4(pplVar14,(long)(*(float *)(plVar19 + 6) * fVar29),&uStack_264);
            fVar29 = *(float *)(plVar19 + 7);
            if (*(float *)(plVar19 + 7) <= *(float *)((long)pplVar14 + 0x14)) {
              fVar29 = *(float *)((long)pplVar14 + 0x14);
            }
            *(float *)((long)pplVar14 + 0x14) = fVar29;
            fVar29 = *(float *)((long)plVar19 + 0x3c);
            if (*(float *)((long)plVar19 + 0x3c) <= *(float *)(pplVar14 + 3)) {
              fVar29 = *(float *)(pplVar14 + 3);
            }
            *(float *)(pplVar14 + 3) = fVar29;
            plVar19 = (long *)*plVar19;
            plVar13 = plStack_340;
          } while (plVar19 != (long *)0x0);
          for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
            fVar29 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar13 + 0x34));
            uStack_264 = (undefined4)(long)(*(float *)(plVar13 + 6) * fVar29);
            pplVar14 = &plStack_260;
            FUN_10aa0edc4(pplVar14,(long)(*(float *)(plVar13 + 6) * fVar29),&uStack_264);
            plVar13[7] = *(undefined8 *)((long)pplVar14 + 0x14);
          }
        }
        FUN_10aa0f17c(&plStack_260);
        puVar11 = puStack_280;
        lVar25 = lStack_350;
        for (puVar10 = puStack_288; puVar10 != puVar11; puVar10 = puVar10 + 8) {
          lStack_350 = lVar25;
          if (*(char *)((long)puVar10 + 0x3c) == '\x01') {
            fVar30 = *(float *)((long)puVar10 + 0x34);
            fVar29 = *(float *)(puVar10 + 7);
          }
          else {
            fVar29 = 0.0;
            if (*(char *)(puVar10 + 5) == '\x01') {
              FUN_10aa0f39c(lVar25,uStack_348,puVar10[4]);
              fVar30 = 0.0;
              if (lVar25 != 0) {
                fVar30 = *(float *)(lVar25 + 0x38);
                fVar29 = *(float *)(lVar25 + 0x3c);
              }
            }
            else {
              fVar30 = 0.0;
            }
          }
          puVar15 = auStack_378;
          FUN_10aa0f430(puVar15,*puVar10,puVar10);
          FUN_10aa0f850(puVar15 + 0x18,*(undefined8 *)(puVar15 + 0x20),puVar10[1],puVar10[2],
                        (long)(puVar10[2] - puVar10[1]) >> 2);
          plStack_260._0_4_ = fVar30 * *(float *)(puVar10 + 6);
          FUN_10aa0f1c4(puVar15 + 0x30,*(undefined8 *)(puVar15 + 0x38),
                        (long)(puVar10[2] - puVar10[1]) >> 2,&plStack_260);
          plStack_260 = (long *)CONCAT44(plStack_260._4_4_,fVar29 * *(float *)(puVar10 + 6));
          FUN_10aa0f1c4(puVar15 + 0x48,*(undefined8 *)(puVar15 + 0x50),
                        (long)(puVar10[2] - puVar10[1]) >> 2,&plStack_260);
          lVar25 = lStack_350;
        }
        func_0x00010a283ccc(extraout_x8,&lStack_3d0);
        puVar10 = puStack_288;
        if (puStack_288 != (undefined8 *)0x0) {
          for (; puStack_280 != puVar10; puStack_280 = puStack_280 + -8) {
            if (puStack_280[-7] != 0) {
              puStack_280[-6] = puStack_280[-7];
              __ZdlPv();
            }
          }
          puStack_280 = puVar10;
          __ZdlPv(puStack_288);
        }
        if (lStack_2a0 != 0) {
          lStack_298 = lStack_2a0;
          __ZdlPv();
        }
        FUN_10a283e44(&lStack_3d0);
        return;
      }
      uVar26 = 0;
LAB_10a9e2408:
      uVar21 = lStack_3d0 + uVar26 * 0x28;
      uVar16 = uVar21;
      FUN_10a2063e0();
      uVar17 = uStack_3b0;
      if (uStack_3b0 != 0) {
        uVar28 = uStack_3b0 - 1;
        if ((uStack_3b0 & uVar28) == 0) {
          uVar24 = uVar28 & uVar16;
        }
        else {
          uVar24 = uVar16;
          if (uStack_3b0 <= uVar16) {
            uVar24 = 0;
            if (uStack_3b0 != 0) {
              uVar24 = uVar16 / uStack_3b0;
            }
            uVar24 = uVar16 - uVar24 * uStack_3b0;
          }
        }
        plVar19 = *(long **)(lStack_3b8 + uVar24 * 8);
        if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
          do {
            uVar20 = plVar19[1];
            if (uVar20 == uVar16) {
              if (plVar19[6] == *(long *)(uVar21 + 0x20)) {
                plVar13 = plVar19 + 2;
                FUN_10a2064c0(plVar13,uVar21);
                if (((ulong)plVar13 & 1) != 0) goto LAB_10a9e24c0;
              }
            }
            else {
              if ((uVar17 & uVar28) == 0) {
                uVar20 = uVar20 & uVar28;
              }
              else if (uVar17 <= uVar20) {
                uVar7 = 0;
                if (uVar17 != 0) {
                  uVar7 = uVar20 / uVar17;
                }
                uVar20 = uVar20 - uVar7 * uVar17;
              }
              if (uVar20 != uVar24) break;
            }
            plVar19 = (long *)*plVar19;
            if (plVar19 == (long *)0x0) break;
          } while( true );
        }
      }
      FUN_109ffdddc(&UNK_10f639994);
      goto LAB_10a9e27f0;
    }
    goto LAB_10a9e1c14;
  }
  puVar11 = (undefined8 *)0xd8;
  __Znwm();
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &PTR_FUN_110c38050;
  puVar10 = puVar11 + 3;
  FUN_10a32e3f0(puVar10,param_6,param_5,lVar27);
  puStack_1a0 = puVar10;
  puStack_198 = puVar11;
  FUN_10aa0d5c0(puVar11,puVar11 + 0x14,puVar10);
  lVar25 = *param_4;
  lStack_1c0 = *(long *)(lVar25 + 0x30);
  if (lStack_1c0 != 0) goto LAB_10a9e2174;
  lVar27 = *(long *)(param_3 + 0x220);
  if (lVar27 == 0) {
    plVar19 = (long *)0x150;
    __Znwm();
    plVar19[1] = 0;
    plVar19[2] = 0;
    *plVar19 = (long)&PTR_DAT_110bc85c8;
    if (*(char *)(lVar25 + 0x27) < '\0') {
      func_0x000107c3192c(&lStack_150,*(undefined8 *)(lVar25 + 0x10),*(undefined8 *)(lVar25 + 0x18))
      ;
    }
    else {
      plStack_148 = *(long **)(lVar25 + 0x18);
      lStack_150 = *(long *)(lVar25 + 0x10);
      lStack_140 = *(long *)(lVar25 + 0x20);
    }
    plVar13 = plVar19 + 3;
    FUN_10a7a1910(plVar13,0,&lStack_150,*(undefined4 *)(lVar25 + 0x28));
    if (lStack_140 < 0) {
      __ZdlPv(lStack_150);
    }
    plStack_190 = plVar13;
    plStack_188 = plVar19;
    FUN_10a3782dc(&plStack_190,plVar19 + 8,plVar13);
    FUN_10a37803c(&plStack_1b0,&plStack_190);
    if (plStack_188 != (long *)0x0) {
      plVar19 = plStack_188 + 1;
      do {
        lVar25 = *plVar19;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar6) {
          *plVar19 = lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        plVar13 = plStack_188;
      } while (cVar5 != '\0');
      goto LAB_10a9e2104;
    }
  }
  else {
    lVar23 = *(long *)(lVar27 + 0x858);
    plVar19 = *(long **)(lVar27 + 0x860);
    if (plVar19 != (long *)0x0) {
      plVar13 = plVar19 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar22 = 0x138;
    lStack_90 = lVar23;
    plStack_88 = plVar19;
    __Znwm(0x138);
    if (*(char *)(lVar25 + 0x27) < '\0') {
      func_0x000107c3192c(&lStack_150,*(undefined8 *)(lVar25 + 0x10),*(undefined8 *)(lVar25 + 0x18))
      ;
    }
    else {
      plStack_148 = *(long **)(lVar25 + 0x18);
      lStack_150 = *(long *)(lVar25 + 0x10);
      lStack_140 = *(long *)(lVar25 + 0x20);
    }
    FUN_10a7a1910(uVar22,lVar27,&lStack_150,*(undefined4 *)(lVar25 + 0x28));
    if (lStack_140 < 0) {
      __ZdlPv(lStack_150);
    }
    lStack_80 = lVar23;
    plStack_78 = plVar19;
    if (plVar19 != (long *)0x0) {
      plVar13 = plVar19 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar13 = plVar19 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
    lStack_150 = lVar23;
    plStack_148 = plVar19;
    FUN_10a37823c(&plStack_190,uVar22,&lStack_150);
    FUN_10a37803c(&plStack_1b0,&plStack_190);
    plVar19 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      plVar13 = plStack_188 + 1;
      do {
        lVar25 = *plVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      }
    }
    if (plStack_148 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar19 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar13 = plStack_78 + 1;
      do {
        lVar25 = *plVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      }
    }
    if ((lStack_90 != 0) && (plStack_1b0 != (long *)0x0)) {
      plStack_190 = plStack_1b0;
      plStack_188 = plStack_1a8;
      if (plStack_1a8 != (long *)0x0) {
        plVar19 = plStack_1a8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = *plVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10aa88c30(lStack_90,&plStack_190);
      plVar19 = plStack_188;
      if (plStack_188 != (long *)0x0) {
        plVar13 = plStack_188 + 1;
        do {
          lVar25 = *plVar13;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar25 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plStack_188 + 0x10))(plStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
    }
    if (plStack_88 != (long *)0x0) {
      plVar19 = plStack_88 + 1;
      do {
        lVar25 = *plVar19;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar6) {
          *plVar19 = lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        plVar13 = plStack_88;
      } while (cVar5 != '\0');
LAB_10a9e2104:
      if (lVar25 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
  }
  FUN_10a1e8610(*param_4 + 0x30,&plStack_1b0);
  if (plStack_1a8 != (long *)0x0) {
    plVar19 = plStack_1a8 + 1;
    do {
      lVar25 = *plVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = lVar25 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a8);
    }
  }
  lVar25 = *param_4;
  lStack_1c0 = *(long *)(lVar25 + 0x30);
  puVar10 = puStack_1a0;
LAB_10a9e2174:
  plStack_1b8 = *(long **)(lVar25 + 0x38);
  if (plStack_1b8 != (long *)0x0) {
    plVar19 = plStack_1b8 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = *plVar19 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  func_0x00010a1ea71c(puVar10 + 8,&lStack_1c0);
  plVar19 = plStack_1b8;
  if (plStack_1b8 != (long *)0x0) {
    plVar13 = plStack_1b8 + 1;
    do {
      lVar25 = *plVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar25 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  param_2[1] = (long)puStack_198;
  *param_2 = (long)puStack_1a0;
  return;
LAB_10a9e24c0:
  plVar13 = (long *)plVar19[7];
  if (plVar13 != (long *)0x0) {
    ___dynamic_cast(plVar13,&PTR_DAT_110c48fb0,&PTR_DAT_110c46458,0);
    fVar29 = (float)param_1;
    if (plVar13 != (long *)0x0) {
      plVar19 = (long *)plVar19[8];
      if (plVar19 != (long *)0x0) {
        plVar1 = plVar19 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (*(int *)((long)plVar13 + 0x84) != 0) {
        fVar29 = 100.0 / (float)*(int *)((long)plVar13 + 0x84);
        *(float *)(plVar13 + 0x11) = fVar29;
      }
      plStack_260 = plVar13;
      plStack_258 = plVar19;
      (**(code **)(*plVar13 + 0x50))(plVar13);
      if ((ulong)(lStack_298 - lStack_2a0 >> 3) <= uVar26) {
LAB_10a9e27f0:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10a9e27f4);
        (*pcVar8)();
      }
      lVar25 = plVar13[4];
      lVar27 = plVar13[6];
      plVar13 = &lStack_350;
      FUN_10aa0fd50(plVar13,*(undefined8 *)(lStack_2a0 + uVar26 * 8));
      fVar30 = (float)lVar25;
      fVar31 = fVar30 * fVar29;
      fVar29 = ((float)(lVar27 - lVar25) - fVar30) * fVar29;
      param_1 = CONCAT44(fVar29,fVar31);
      uVar17 = plVar13[7];
      param_1 = param_1 ^ (param_1 ^ uVar17) &
                          ~CONCAT44(-(uint)((float)(uVar17 >> 0x20) < fVar29),
                                    -(uint)((float)uVar17 < fVar31));
      plVar13[7] = param_1;
      if (plVar19 != (long *)0x0) {
        plVar13 = plVar19 + 1;
        do {
          lVar25 = *plVar13;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar25 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
    }
  }
  uVar26 = uVar26 + 1;
  if ((ulong)((lStack_3c8 - lStack_3d0 >> 3) * -0x3333333333333333) <= uVar26) goto LAB_10a9e25dc;
  goto LAB_10a9e2408;
}



/* Entry: 10a9e2380; end: 10a9e283b;  */

void FUN_10a9e2380(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined2 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulong uVar8;
  long *plVar9;
  long **pplVar10;
  undefined1 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  long lStack_210;
  long lStack_208;
  long lStack_1f8;
  ulong uStack_1f0;
  undefined1 auStack_1b8 [40];
  long lStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long lStack_e0;
  long lStack_d8;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined4 uStack_a4;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  plStack_a0 = (long *)0x0;
  FUN_10a9e283c(&lStack_210,param_3,param_4,param_5,param_6,param_7,param_8,param_10,param_9,
                param_10,&plStack_a0,1);
  if (lStack_208 == lStack_210) {
LAB_10a9e25dc:
    plStack_98 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0x3f800000;
    plVar12 = plStack_180;
    if (plStack_180 != (long *)0x0) {
      do {
        fVar20 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar12 + 0x34));
        uStack_a4 = (undefined4)(long)(*(float *)(plVar12 + 6) * fVar20);
        pplVar10 = &plStack_a0;
        FUN_10aa0edc4(pplVar10,(long)(*(float *)(plVar12 + 6) * fVar20),&uStack_a4);
        fVar20 = *(float *)(plVar12 + 7);
        if (*(float *)(plVar12 + 7) <= *(float *)((long)pplVar10 + 0x14)) {
          fVar20 = *(float *)((long)pplVar10 + 0x14);
        }
        *(float *)((long)pplVar10 + 0x14) = fVar20;
        fVar20 = *(float *)((long)plVar12 + 0x3c);
        if (*(float *)((long)plVar12 + 0x3c) <= *(float *)(pplVar10 + 3)) {
          fVar20 = *(float *)(pplVar10 + 3);
        }
        *(float *)(pplVar10 + 3) = fVar20;
        plVar12 = (long *)*plVar12;
        plVar9 = plStack_180;
      } while (plVar12 != (long *)0x0);
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        fVar20 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar9 + 0x34));
        uStack_a4 = (undefined4)(long)(*(float *)(plVar9 + 6) * fVar20);
        pplVar10 = &plStack_a0;
        FUN_10aa0edc4(pplVar10,(long)(*(float *)(plVar9 + 6) * fVar20),&uStack_a4);
        plVar9[7] = *(undefined8 *)((long)pplVar10 + 0x14);
      }
    }
    FUN_10aa0f17c(&plStack_a0);
    puVar6 = puStack_c0;
    lVar14 = lStack_190;
    for (puVar2 = puStack_c8; puVar2 != puVar6; puVar2 = puVar2 + 8) {
      lStack_190 = lVar14;
      if (*(char *)((long)puVar2 + 0x3c) == '\x01') {
        fVar21 = *(float *)((long)puVar2 + 0x34);
        fVar20 = *(float *)(puVar2 + 7);
      }
      else {
        fVar20 = 0.0;
        if (*(char *)(puVar2 + 5) == '\x01') {
          FUN_10aa0f39c(lVar14,uStack_188,puVar2[4]);
          fVar21 = 0.0;
          if (lVar14 != 0) {
            fVar21 = *(float *)(lVar14 + 0x38);
            fVar20 = *(float *)(lVar14 + 0x3c);
          }
        }
        else {
          fVar21 = 0.0;
        }
      }
      puVar11 = auStack_1b8;
      FUN_10aa0f430(puVar11,*puVar2,puVar2);
      FUN_10aa0f850(puVar11 + 0x18,*(undefined8 *)(puVar11 + 0x20),puVar2[1],puVar2[2],
                    (long)(puVar2[2] - puVar2[1]) >> 2);
      plStack_a0._0_4_ = fVar21 * *(float *)(puVar2 + 6);
      FUN_10aa0f1c4(puVar11 + 0x30,*(undefined8 *)(puVar11 + 0x38),
                    (long)(puVar2[2] - puVar2[1]) >> 2,&plStack_a0);
      plStack_a0 = (long *)CONCAT44(plStack_a0._4_4_,fVar20 * *(float *)(puVar2 + 6));
      FUN_10aa0f1c4(puVar11 + 0x48,*(undefined8 *)(puVar11 + 0x50),
                    (long)(puVar2[2] - puVar2[1]) >> 2,&plStack_a0);
      lVar14 = lStack_190;
    }
    func_0x00010a283ccc(param_1,&lStack_210);
    puVar2 = puStack_c8;
    if (puStack_c8 != (undefined8 *)0x0) {
      for (; puStack_c0 != puVar2; puStack_c0 = puStack_c0 + -8) {
        if (puStack_c0[-7] != 0) {
          puStack_c0[-6] = puStack_c0[-7];
          __ZdlPv();
        }
      }
      puStack_c0 = puVar2;
      __ZdlPv(puStack_c8);
    }
    if (lStack_e0 != 0) {
      lStack_d8 = lStack_e0;
      __ZdlPv();
    }
    FUN_10a283e44(&lStack_210);
    return;
  }
  uVar18 = 0;
LAB_10a9e2408:
  uVar16 = lStack_210 + uVar18 * 0x28;
  uVar8 = uVar16;
  FUN_10a2063e0();
  uVar23 = uStack_1f0;
  if (uStack_1f0 != 0) {
    uVar19 = uStack_1f0 - 1;
    if ((uStack_1f0 & uVar19) == 0) {
      uVar17 = uVar19 & uVar8;
    }
    else {
      uVar17 = uVar8;
      if (uStack_1f0 <= uVar8) {
        uVar17 = 0;
        if (uStack_1f0 != 0) {
          uVar17 = uVar8 / uStack_1f0;
        }
        uVar17 = uVar8 - uVar17 * uStack_1f0;
      }
    }
    plVar12 = *(long **)(lStack_1f8 + uVar17 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      do {
        uVar13 = plVar12[1];
        if (uVar13 == uVar8) {
          if (plVar12[6] == *(long *)(uVar16 + 0x20)) {
            plVar9 = plVar12 + 2;
            FUN_10a2064c0(plVar9,uVar16);
            if (((ulong)plVar9 & 1) != 0) goto LAB_10a9e24c0;
          }
        }
        else {
          if ((uVar23 & uVar19) == 0) {
            uVar13 = uVar13 & uVar19;
          }
          else if (uVar23 <= uVar13) {
            uVar5 = 0;
            if (uVar23 != 0) {
              uVar5 = uVar13 / uVar23;
            }
            uVar13 = uVar13 - uVar5 * uVar23;
          }
          if (uVar13 != uVar17) break;
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) break;
      } while( true );
    }
  }
  FUN_109ffdddc(&UNK_10f639994);
  goto LAB_10a9e27f0;
LAB_10a9e24c0:
  plVar9 = (long *)plVar12[7];
  if (plVar9 != (long *)0x0) {
    ___dynamic_cast(plVar9,&PTR_DAT_110c48fb0,&PTR_DAT_110c46458,0);
    fVar20 = (float)param_2;
    if (plVar9 != (long *)0x0) {
      plVar12 = (long *)plVar12[8];
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(int *)((long)plVar9 + 0x84) != 0) {
        fVar20 = 100.0 / (float)*(int *)((long)plVar9 + 0x84);
        *(float *)(plVar9 + 0x11) = fVar20;
      }
      plStack_a0 = plVar9;
      plStack_98 = plVar12;
      (**(code **)(*plVar9 + 0x50))(plVar9);
      if ((ulong)(lStack_d8 - lStack_e0 >> 3) <= uVar18) {
LAB_10a9e27f0:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a9e27f4);
        (*pcVar7)();
      }
      lVar14 = plVar9[4];
      lVar15 = plVar9[6];
      plVar9 = &lStack_190;
      FUN_10aa0fd50(plVar9,*(undefined8 *)(lStack_e0 + uVar18 * 8));
      fVar21 = (float)lVar14;
      fVar22 = fVar21 * fVar20;
      fVar20 = ((float)(lVar15 - lVar14) - fVar21) * fVar20;
      param_2 = CONCAT44(fVar20,fVar22);
      uVar23 = plVar9[7];
      param_2 = param_2 ^ (param_2 ^ uVar23) &
                          ~CONCAT44(-(uint)((float)(uVar23 >> 0x20) < fVar20),
                                    -(uint)((float)uVar23 < fVar22));
      plVar9[7] = param_2;
      if (plVar12 != (long *)0x0) {
        plVar9 = plVar12 + 1;
        do {
          lVar14 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
    }
  }
  uVar18 = uVar18 + 1;
  if ((ulong)((lStack_208 - lStack_210 >> 3) * -0x3333333333333333) <= uVar18) goto LAB_10a9e25dc;
  goto LAB_10a9e2408;
}



/* Entry: 10a9e283c; end: 10a9e4b37;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10a9e283c(undefined8 param_1,long *******param_2,double param_3,double param_4,
                    long param_5,long *******param_6,long *param_7,long *param_8,undefined8 param_9,
                    undefined8 param_10,undefined8 param_11,undefined8 param_12,long *param_13,
                    undefined8 param_14,undefined8 param_15,byte param_16)

{
  long *******ppppppplVar1;
  char *pcVar2;
  long ******pppppplVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined1 uVar9;
  long *****ppppplVar10;
  long *******ppppppplVar11;
  long *plVar12;
  long *******ppppppplVar13;
  undefined8 *puVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  long ******pppppplVar17;
  long *plVar18;
  undefined4 uVar19;
  int iVar20;
  uint *puVar21;
  int *piVar22;
  long *******ppppppplVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  bool bVar31;
  undefined1 uVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 *puVar35;
  long *******ppppppplVar36;
  long *plVar37;
  long lVar38;
  ulong uVar39;
  undefined4 *puVar40;
  double dVar41;
  float fVar42;
  double dVar43;
  long *******ppppppplVar44;
  double dVar45;
  double dVar46;
  long *plStack_6c8;
  long *******ppppppplStack_6c0;
  long *******ppppppplStack_6b8;
  undefined1 *puStack_6b0;
  code *pcStack_6a8;
  long *plStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  ulong uStack_688;
  long lStack_678;
  double dStack_670;
  long *****ppppplStack_668;
  long *plStack_660;
  undefined8 uStack_658;
  uint uStack_64c;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  long *plStack_630;
  long *plStack_628;
  int iStack_61c;
  ulong uStack_618;
  int iStack_60c;
  int iStack_608;
  uint uStack_604;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 uStack_5e8;
  long *plStack_5e0;
  long *******ppppppplStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  long *******ppppppplStack_5b8;
  long *******ppppppplStack_5b0;
  long *******ppppppplStack_5a8;
  uint uStack_59c;
  long *******ppppppplStack_598;
  long *******ppppppplStack_590;
  undefined8 *puStack_588;
  ulong uStack_580;
  long *plStack_578;
  long *plStack_570;
  long *******ppppppplStack_560;
  byte bStack_558;
  long lStack_550;
  long lStack_548;
  undefined8 uStack_540;
  long *******ppppppplStack_538;
  long *******ppppppplStack_530;
  undefined8 uStack_528;
  undefined1 uStack_520;
  long lStack_510;
  long lStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined4 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined4 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long *******ppppppplStack_450;
  long *******ppppppplStack_448;
  long *******ppppppplStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined8 uStack_3e0;
  long *******ppppppplStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long *******ppppppplStack_3c0;
  float fStack_3b0;
  float fStack_3ac;
  long *******ppppppplStack_3a8;
  long *******ppppppplStack_3a0;
  undefined8 uStack_398;
  double dStack_390;
  uint uStack_388;
  undefined4 uStack_384;
  long lStack_380;
  char cStack_371;
  long *******ppppppplStack_370;
  long *******ppppppplStack_368;
  long *******ppppppplStack_358;
  long *******appppppplStack_350 [2];
  double dStack_340;
  double dStack_338;
  ushort uStack_32a;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  long *******ppppppplStack_310;
  long *******ppppppplStack_308;
  long *******ppppppplStack_2f0;
  ulong uStack_2e8;
  undefined4 uStack_2e0;
  undefined2 uStack_2dc;
  undefined2 uStack_2da;
  long *******ppppppplStack_2d8;
  long *******ppppppplStack_2d0;
  float fStack_2c8;
  int iStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  ulong uStack_2a8;
  long lStack_2a0;
  long *******ppppppplStack_298;
  long *******ppppppplStack_290;
  long *******ppppppplStack_288;
  uint uStack_27c;
  long *******ppppppplStack_278;
  long *******ppppppplStack_270;
  long *******ppppppplStack_268;
  long *******ppppppplStack_260;
  undefined8 uStack_258;
  long *******ppppppplStack_250;
  long *******ppppppplStack_248;
  float fStack_240;
  undefined4 uStack_23c;
  float fStack_238;
  float fStack_234;
  undefined8 uStack_230;
  float fStack_228;
  float fStack_224;
  undefined8 *puStack_220;
  long *plStack_218;
  long *******ppppppplStack_210;
  long *******ppppppplStack_208;
  long *******ppppppplStack_200;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
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
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_4e0 = 0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  lStack_508 = 0;
  lStack_510 = 0;
  uStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4d8 = 0x3f800000;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  uStack_480 = 0;
  uStack_498 = 0x3f800000;
  uStack_470 = 0x3f800000;
  puStack_588 = &uStack_468;
  uStack_400 = 0;
  uStack_408 = 0;
  uStack_3f0 = 0;
  uStack_3f8 = 0;
  uStack_460 = 0;
  uStack_468 = 0;
  ppppppplStack_450 = (long *******)0x0;
  uStack_458 = 0;
  ppppppplStack_440 = (long *******)0x0;
  ppppppplStack_448 = (long *******)0x0;
  uStack_430 = 0;
  uStack_438 = 0;
  uStack_420 = 0;
  uStack_428 = 0;
  uStack_410 = 0;
  uStack_418 = 0;
  uStack_3e8 = 0x3f800000;
  uStack_520 = 0;
  ppppppplStack_538 = (long *******)0x0;
  uStack_540 = 0;
  uStack_528 = 0;
  ppppppplStack_530 = (long *******)0x0;
  lStack_548 = 0;
  lStack_550 = 0;
  ppppppplVar36 = (long *******)param_7[1];
  ppppppplVar44 = param_6;
  lStack_678 = param_5;
  uStack_648 = param_9;
  uStack_640 = param_10;
  uStack_638 = param_11;
  plStack_630 = param_8;
  plStack_628 = param_7;
  for (ppppppplVar23 = (long *******)*param_7; ppppppplVar23 != ppppppplVar36;
      ppppppplVar23 = ppppppplVar23 + 6) {
    ppppppplVar16 = ppppppplVar23;
    FUN_10a9ec3d0(ppppppplVar23);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_420,ppppppplVar16,ppppppplVar44);
    ppppppplVar44 = ppppppplVar16;
  }
  ppppplVar10 = param_6[0x44][0x120];
  FUN_10a597fb4();
  ppppplStack_668 = ppppplVar10;
  FUN_10a9fa5b8(param_6 + 0x34);
  FUN_10a9fa5b8(param_6 + 0x3c);
  bStack_558 = 0;
  lVar33 = *plStack_628;
  ppppppplStack_560 = param_6;
  if (plStack_628[1] != lVar33) {
    ppppppplVar36 = (long *******)0x0;
    uVar39 = 0;
    ppppppplStack_5d8 = (long *******)&ppppppplStack_208;
    ppppppplStack_598 = *(long ********)PTR__kCFAllocatorDefault_11034ab78;
    uStack_5f8 = *(undefined8 *)PTR__kCTFontAttributeName_11034a070;
    uStack_600 = *(undefined8 *)PTR__kCTTypesetterOptionForcedEmbeddingLevel_11034a150;
    ppppppplStack_5b8 = (long *******)&ppppppplStack_450;
    uStack_64c = (uint)param_16;
    uStack_604 = uStack_64c ^ 1;
    puStack_5f0 = &uStack_168;
    dStack_670 = 0.2138671875;
    uStack_5c8 = 0x10ffff;
    uStack_5d0 = 0xffffffffffffffff;
    uStack_658 = param_14;
    plStack_660 = param_13;
    uStack_5e8 = param_15;
    ppppppplStack_590 = param_6;
    do {
      if ((ulong)(plStack_630[1] - *plStack_630 >> 2) <= uVar39) {
LAB_10a9e4760:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10a9e4764);
        (*pcVar8)();
      }
      lVar33 = lVar33 + uVar39 * 0x30;
      ppppppplVar23 = (long *******)(ulong)*(uint *)(*plStack_630 + uVar39 * 4);
      uStack_690 = CONCAT44((int)ppppppplVar36,100);
      plStack_6a0 = plStack_660;
      uStack_698 = uStack_658;
      FUN_10a9e9ad8(&plStack_578,ppppppplStack_590,lVar33,uStack_648,ppppplStack_668,uStack_640,
                    uStack_638);
      uStack_618 = uVar39;
      iStack_60c = (int)ppppppplVar36;
      FUN_10a9ec3d0();
      iVar20 = (int)lVar33;
      FUN_10aa0dadc();
      plStack_5e0 = plStack_570;
      iStack_61c = iVar20;
      if (plStack_578 != plStack_570) {
        plVar18 = plStack_578;
        if ((char)plStack_578[0x16] == '\x01') {
          if ((0x151 < *(int *)(ppppppplStack_590[0x44][0x144] + 3)) &&
             ((long ******)plStack_578[0xf] != (long ******)plStack_578[0x10])) {
            ppppppplStack_1e8 = (long *******)((ulong)ppppppplStack_1e8 & 0xffffffffffffff00);
            ppppppplStack_5d8[1] = (long ******)0x0;
            ppppppplStack_5d8[2] = (long ******)0x0;
            *ppppppplStack_5d8 = (long ******)0x0;
            *(undefined1 *)(ppppppplStack_5d8 + 3) = 0;
            fStack_1e0 = 1.0;
            fStack_1dc = 0.0;
            fStack_1d8 = 0.0;
            fStack_1d4 = (float)((uint)fStack_1d4 & 0xffffff00);
            ppppppplStack_210 = (long *******)((lStack_508 - lStack_510 >> 3) * -0x3333333333333333)
            ;
            if (ppppppplStack_5d8 != (long *******)(plStack_578 + 0xf)) {
              FUN_10a0ea4a0();
              if ((char)ppppppplStack_1e8 == '\x01') {
                ppppppplStack_1e8 = (long *******)((ulong)ppppppplStack_1e8 & 0xffffffffffffff00);
              }
            }
            if (plStack_570 == plStack_578) goto LAB_10a9e4760;
            fStack_1e0 = *(float *)(plStack_578 + 0x15);
            if (((*plStack_578 != 0) && (lVar33 = *(long *)(*plStack_578 + 0x50), lVar33 != 0)) &&
               (lVar25 = *(long *)(lVar33 + 0xa0), lVar25 != 0)) {
              fVar42 = fStack_1e0;
              FUN_10a9e9a54(*(undefined8 *)(lVar33 + 0x28),*(undefined8 *)(lVar25 + 0x30),
                            *(undefined8 *)(lVar25 + 0x38));
              fStack_1dc = fVar42;
              fStack_1d8 = SUB84(param_2,0);
              fStack_1d4 = (float)CONCAT31(fStack_1d4._1_3_,1);
            }
            FUN_10aa0db84(&ppppppplStack_538,&ppppppplStack_210);
            if (ppppppplStack_208 != (long *******)0x0) {
              ppppppplStack_200 = ppppppplStack_208;
              __ZdlPv();
            }
          }
        }
        else {
          do {
            ppppppplVar44 = ppppppplStack_598;
            fVar42 = SUB84(param_2,0);
            lVar33 = *plVar18;
            lVar25 = *(long *)(lVar33 + 0x50);
            if (lVar25 == 0) {
              if (*(long *)(lVar33 + 0xc0) != 0) {
LAB_10a9e2c4c:
                plVar37 = plVar18 + 4;
                plVar12 = (long *)*plVar37;
                if (-1 < *(char *)((long)plVar18 + 0x37)) {
                  plVar12 = plVar37;
                }
                ppppppplVar16 = ppppppplStack_598;
                _CFStringCreateWithCString(ppppppplStack_598,plVar12,0x8000100);
                ppppppplVar36 = ppppppplVar44;
                ppppppplStack_260 = ppppppplVar16;
                _CFDictionaryCreateMutable
                          (ppppppplVar44,1,PTR__kCFTypeDictionaryKeyCallBacks_11034ac18,
                           PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
                ppppppplStack_268 = ppppppplVar36;
                _CFDictionarySetValue();
                ppppppplVar36 = ppppppplVar44;
                _CFAttributedStringCreate(ppppppplVar44,ppppppplVar16,ppppppplStack_268);
                ppppppplVar16 = ppppppplVar44;
                ppppppplStack_270 = ppppppplVar36;
                _CFDictionaryCreateMutable
                          (ppppppplVar44,1,PTR__kCFTypeDictionaryKeyCallBacks_11034ac18,
                           PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
                uStack_27c = (uint)((int)plVar18[0x12] == 1);
                ppppppplVar11 = ppppppplVar44;
                ppppppplStack_278 = ppppppplVar16;
                _CFNumberCreate(ppppppplVar44,9,&uStack_27c);
                ppppppplStack_288 = ppppppplVar11;
                _CFDictionarySetValue(ppppppplStack_278,uStack_600,ppppppplVar11);
                ppppppplVar16 = ppppppplVar36;
                _CTTypesetterCreateWithAttributedStringAndOptions(ppppppplVar36,ppppppplStack_278);
                ppppppplStack_290 = ppppppplVar16;
                _CTTypesetterCreateLine();
                ppppppplStack_298 = ppppppplVar16;
                _CTLineGetGlyphRuns();
                FUN_10a9ef104(&lStack_2a0,ppppppplVar16);
                lVar33 = lStack_2a0;
                _CFArrayGetCount();
                if ((lVar33 != 1) && ((bRam000000011330a9e8 & 1) != 0)) {
                  plStack_6a0 = (long *)plVar18[4];
                  if (-1 < *(char *)((long)plVar18 + 0x37)) {
                    plStack_6a0 = plVar37;
                  }
                  func_0x00010ae06f08(0,1,&UNK_10f689b0e,&UNK_10f68a269,0xdd0,&UNK_10f68a366);
                }
                lVar33 = lStack_2a0;
                _CFArrayGetCount();
                if (lVar33 == 0) {
                  uVar28 = 1;
                }
                else {
                  lVar33 = lStack_2a0;
                  _CFArrayGetValueAtIndex(lStack_2a0,0);
                  FUN_10a9ef144(&uStack_2a8,lVar33);
                  uVar39 = uStack_2a8;
                  _CTRunGetGlyphCount();
                  _CTFontGetAscent(*(undefined8 *)(*plVar18 + 0xc0));
                  ppppppplVar16 = ppppppplVar23;
                  _CTFontGetSize(*(undefined8 *)(*plVar18 + 0xc0));
                  iVar20 = (int)(double)ppppppplVar16;
                  if (*(int *)((long)plVar18 + 0xac) != 0) {
                    iVar20 = *(int *)((long)plVar18 + 0xac);
                  }
                  ppppppplStack_2d8 = (long *******)0x0;
                  ppppppplStack_2d0 = (long *******)0x0;
                  fStack_2c8 = 1.0;
                  iStack_2c4 = 0;
                  fStack_2c0 = 0.0;
                  fStack_2b4 = 0.0;
                  fStack_2b0 = 0.0;
                  fStack_2bc = 0.0;
                  fStack_2b8 = 0.0;
                  fStack_2ac = 0.0;
                  uStack_2e0 = (undefined4)plVar18[0x12];
                  uStack_2dc = 1;
                  FUN_10a2086b4(&ppppppplStack_2d8,plVar18 + 0x13);
                  fStack_2c8 = *(float *)(plVar18 + 0x15);
                  dVar41 = (double)(ulong)(uint)fStack_2c8;
                  ppppppplStack_5b0 = (long *******)CONCAT44(ppppppplStack_5b0._4_4_,iVar20);
                  uVar24 = *(ulong *)(*plVar18 + 0xc0);
                  iStack_2c4 = iVar20;
                  if (*(char *)(*plVar18 + 200) == '\x01') {
                    _CTFontGetAscent(uVar24);
                    fStack_2c0 = (float)dVar41;
                    dVar41 = (double)(ulong)(uint)fStack_2c0;
                    _CTFontGetDescent(uVar24);
                    fStack_2bc = (float)dVar41;
                    dVar41 = (double)(ulong)(uint)fStack_2bc;
                  }
                  _CTFontGetUnderlinePosition(uVar24);
                  fStack_2b8 = (float)dVar41;
                  dVar41 = (double)(ulong)(uint)fStack_2b8;
                  _CTFontGetUnderlineThickness(uVar24);
                  fVar42 = (float)dVar41;
                  if (fVar42 <= 1.0) {
                    fVar42 = 1.0;
                  }
                  fStack_2b4 = (float)(int)fVar42;
                  uVar30 = uVar24;
                  _CTFontCopyTable(uVar24,0x4f532f32,0);
                  uStack_2e8 = uVar30;
                  if (uVar30 != 0) {
                    _CFDataGetBytePtr();
                    uVar29 = uStack_2e8;
                    _CFDataGetLength();
                    if ((uVar30 != 0) && (0x1d < (long)uVar29)) {
                      uVar4 = *(ushort *)(uVar30 + 0x1a);
                      uVar5 = *(ushort *)(uVar30 + 0x1c);
                      _CTFontGetUnitsPerEm();
                      if ((uVar24 & 0xffff) != 0) {
                        dVar41 = (double)ppppppplVar16 / (double)((uint)uVar24 & 0xffff);
                        fStack_2b0 = (float)(dVar41 * (double)(int)(short)(uVar5 >> 8 | uVar5 << 8))
                        ;
                        param_3 = (double)(int)(short)(uVar4 >> 8 | uVar4 << 8);
                        fStack_2ac = (float)(dVar41 * param_3);
                      }
                    }
                  }
                  if ((fStack_2b0 <= 0.0) || (fStack_2ac <= 0.0)) {
                    fStack_2b0 = (float)((double)(fStack_2b4 * 0.5) +
                                        dStack_670 * (double)ppppppplVar16);
                    fStack_2ac = fStack_2b4;
                    param_3 = dStack_670;
                  }
                  ppppppplStack_2f0 =
                       (long *******)((lStack_508 - lStack_510 >> 3) * -0x3333333333333333);
                  *(undefined4 *)ppppppplStack_5d8 = uStack_2e0;
                  *(undefined2 *)((long)ppppppplStack_5d8 + 4) = uStack_2dc;
                  ppppppplStack_1f8 = ppppppplStack_2d0;
                  ppppppplStack_200 = ppppppplStack_2d8;
                  if (ppppppplStack_2d0 != (long *******)0x0) {
                    ppppppplVar36 = ppppppplStack_2d0 + 1;
                    do {
                      cVar6 = '\x01';
                      bVar31 = (bool)ExclusiveMonitorPass(ppppppplVar36,0x10);
                      if (bVar31) {
                        *ppppppplVar36 = (long ******)((long)*ppppppplVar36 + 1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                  }
                  ppppppplStack_1e8 = (long *******)CONCAT44(fStack_2bc,fStack_2c0);
                  ppppppplVar11 = (long *******)CONCAT44(iStack_2c4,fStack_2c8);
                  param_2 = (long *******)CONCAT44(fStack_2b4,fStack_2b8);
                  fStack_1d8 = fStack_2b0;
                  fStack_1d4 = fStack_2ac;
                  fStack_1e0 = fStack_2b8;
                  fStack_1dc = fStack_2b4;
                  ppppppplStack_210 = ppppppplStack_2f0;
                  ppppppplStack_1f0 = ppppppplVar11;
                  FUN_10aa0e078(&uStack_490,ppppppplStack_2f0,&ppppppplStack_210);
                  ppppppplVar36 = ppppppplStack_1f8;
                  if (ppppppplStack_1f8 != (long *******)0x0) {
                    ppppppplVar1 = ppppppplStack_1f8 + 1;
                    do {
                      pppppplVar17 = *ppppppplVar1;
                      cVar6 = '\x01';
                      bVar31 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
                      if (bVar31) {
                        *ppppppplVar1 = (long ******)((long)pppppplVar17 + -1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (pppppplVar17 == (long ******)0x0) {
                      (*(code *)(*ppppppplStack_1f8)[2])(ppppppplStack_1f8);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar36);
                    }
                  }
                  if ((0x151 < *(int *)(ppppppplStack_590[0x44][0x144] + 3)) &&
                     ((long ******)plVar18[0xf] != (long ******)plVar18[0x10])) {
                    ppppppplStack_1e8 =
                         (long *******)((ulong)ppppppplStack_1e8 & 0xffffffffffffff00);
                    ppppppplStack_5d8[1] = (long ******)0x0;
                    ppppppplStack_5d8[2] = (long ******)0x0;
                    *ppppppplStack_5d8 = (long ******)0x0;
                    *(undefined1 *)(ppppppplStack_5d8 + 3) = 0;
                    fStack_1e0 = 1.0;
                    fStack_1dc = 0.0;
                    fStack_1d8 = 0.0;
                    fStack_1d4 = (float)((uint)fStack_1d4 & 0xffffff00);
                    ppppppplStack_210 = ppppppplStack_2f0;
                    if (ppppppplStack_5d8 != (long *******)(plVar18 + 0xf)) {
                      FUN_10a0ea4a0();
                    }
                    ppppppplStack_1f0 = ppppppplStack_2f0;
                    ppppppplStack_1e8 = (long *******)CONCAT71(ppppppplStack_1e8._1_7_,1);
                    ppppppplVar11 = (long *******)(ulong)(uint)fStack_2c8;
                    fStack_1e0 = fStack_2c8;
                    FUN_10aa0db84(&ppppppplStack_538,&ppppppplStack_210);
                    if (ppppppplStack_208 != (long *******)0x0) {
                      ppppppplStack_200 = ppppppplStack_208;
                      __ZdlPv();
                    }
                  }
                  FUN_10a9fae88(&ppppppplStack_310,uVar39);
                  uVar24 = uStack_2a8;
                  ppppppplVar1 = ppppppplStack_308;
                  ppppppplVar36 = ppppppplStack_310;
                  uVar30 = (long)ppppppplStack_308 - (long)ppppppplStack_310 >> 3;
                  uStack_580 = uVar39;
                  if (0 < (long)uVar39) {
                    uVar39 = 0;
                    ppppppplVar15 = ppppppplStack_310;
                    do {
                      if (uVar30 == uVar39) goto LAB_10a9e4760;
                      _CTRunGetStringIndices(uVar24,uVar39,1,ppppppplVar15);
                      uVar39 = uVar39 + 1;
                      ppppppplVar15 = ppppppplVar15 + 1;
                    } while (uStack_580 != uVar39);
                  }
                  puStack_320 = (undefined8 *)0x0;
                  puStack_328 = (undefined8 *)0x0;
                  uStack_318 = 0;
                  FUN_10aa0e4b4(&puStack_328,ppppppplVar36,ppppppplVar1,uVar30);
                  __ZNSt3__16__sortIRNS_6__lessIllEEPlEEvT0_S5_T_
                            (puStack_328,puStack_320,&ppppppplStack_210);
                  if (0 < (long)uStack_580) {
                    uVar28 = 0;
                    uVar39 = 0;
                    iStack_608 = (int)(double)ppppppplVar16;
                    dVar41 = 0.0;
                    uVar24 = uStack_580;
                    do {
                      uVar30 = uStack_2a8;
                      if ((ulong)((long)ppppppplStack_308 - (long)ppppppplStack_310 >> 3) <= uVar39)
                      goto LAB_10a9e4760;
                      ppppppplVar36 = (long *******)ppppppplStack_310[uVar39];
                      uStack_59c = uVar28;
                      _CTRunGetGlyphs(uStack_2a8,uVar39,1,&uStack_32a);
                      _CTRunGetPositions(uVar30,uVar39,1,&dStack_340);
                      _CTRunGetAdvances(uVar30,uVar39,1,appppppplStack_350);
                      ppppppplVar1 = ppppppplStack_260;
                      ppppppplVar15 = ppppppplStack_260;
                      _CFStringGetLength();
                      puVar35 = puStack_328;
                      if (puStack_328 == puStack_320) {
LAB_10a9e3214:
                        if ((puVar35 != puStack_320) && (puStack_320 != puVar35 + 1)) {
                          ppppppplVar15 = (long *******)puVar35[1];
                        }
                      }
                      else {
                        do {
                          if ((long *******)*puVar35 == ppppppplVar36) goto LAB_10a9e3214;
                          puVar35 = puVar35 + 1;
                        } while (puVar35 != puStack_320);
                      }
                      lVar25 = (long)ppppppplVar15 - (long)ppppppplVar36;
                      _CFStringCreateWithSubstring(ppppppplVar44,ppppppplVar1,ppppppplVar36,lVar25);
                      lVar33 = lVar25;
                      ppppppplStack_358 = ppppppplVar44;
                      _CFStringGetMaximumSizeForEncoding(lVar25,0x8000100);
                      FUN_10a1032d4(&ppppppplStack_370,lVar33 + 1);
                      _CFStringGetCString(ppppppplVar44,ppppppplStack_370,lVar33 + 1,0x8000100);
                      func_0x000107c2b054(&uStack_388,ppppppplStack_370);
                      _CTFontGetBoundingRectsForGlyphs
                                (*(undefined8 *)(*plVar18 + 0xc0),1,&uStack_32a,0,1);
                      ppppppplVar1 = appppppplStack_350[0];
                      fStack_3b0 = (float)((double)ppppppplVar11 + (dStack_340 - dVar41));
                      lVar33 = *plVar18;
                      dVar45 = param_4 + (double)param_2 + dStack_338;
                      dVar46 = (double)ppppppplVar23 - dStack_338;
                      dVar43 = dVar45;
                      if (*(char *)(lVar33 + 200) == '\0') {
                        dVar43 = (double)param_2 + dVar46;
                      }
                      fStack_3ac = (float)dVar43;
                      ppppppplVar44 = (long *******)(ulong)(uint)fStack_3ac;
                      uStack_3e0 = (long *******)CONCAT44(ppppppplStack_5b0._0_4_,(uint)uStack_32a);
                      uStack_3d0 = (long *******)0x0;
                      uStack_3c8 = 0;
                      ppppppplStack_3d8 = (long *******)0x0;
                      ppppppplStack_3a8 = ppppppplVar11;
                      ppppppplStack_3a0 = param_2;
                      uStack_398 = param_3;
                      dStack_390 = param_4;
                      FUN_10a0ca588(&ppppppplStack_3d8,*(long *)(lVar33 + 0xa8),
                                    *(long *)(lVar33 + 0xb0),
                                    *(long *)(lVar33 + 0xb0) - *(long *)(lVar33 + 0xa8) >> 2);
                      ppppppplStack_3c0 = *(long ********)(*plVar18 + 0xc0);
                      puVar35 = &uStack_4f8;
                      FUN_10a283ff0(puVar35,&uStack_3e0);
                      uVar4 = uStack_32a;
                      if (puVar35 == (undefined8 *)0x0) {
                        if (*(char *)(*plVar18 + 200) == '\x01') {
                          uVar34 = *(undefined8 *)(*plVar18 + 0xc0);
                          pppppplVar17 = (long ******)0xb8;
                          __Znwm();
                          pppppplVar17[1] = (long *****)0x0;
                          pppppplVar17[2] = (long *****)0x0;
                          ppppppplVar11 = (long *******)(pppppplVar17 + 3);
                          *pppppplVar17 = (long *****)&PTR_FUN_110c38168;
                          FUN_10aaf23b4(ppppppplVar11,&uStack_388,uVar4,uVar34,uVar4);
                          ppppppplStack_210 = uStack_3e0;
                          ppppppplStack_5d8[1] = (long ******)0x0;
                          ppppppplStack_5d8[2] = (long ******)0x0;
                          *ppppppplStack_5d8 = (long ******)0x0;
                          uStack_258 = ppppppplVar11;
                          ppppppplStack_250 = (long *******)pppppplVar17;
                          FUN_10a0ca588();
                          ppppppplStack_1f0 = ppppppplStack_3c0;
                          fStack_1e0 = SUB84(pppppplVar17,0);
                          fStack_1dc = (float)((ulong)pppppplVar17 >> 0x20);
                          ppppppplStack_250 = (long *******)0x0;
                          uStack_258 = (long *******)0x0;
                          ppppppplStack_1e8 = ppppppplVar11;
                          FUN_10aa0faf4(&uStack_4f8,&ppppppplStack_210,&ppppppplStack_210);
                          plVar12 = (long *)CONCAT44(fStack_1dc,fStack_1e0);
                          if (plVar12 != (long *)0x0) {
                            plVar37 = plVar12 + 1;
                            do {
                              lVar33 = *plVar37;
                              cVar6 = '\x01';
                              bVar31 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                              if (bVar31) {
                                *plVar37 = lVar33 + -1;
                                cVar6 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar6 != '\0');
                            if (lVar33 == 0) {
                              (**(code **)(*plVar12 + 0x10))(plVar12);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                            }
                          }
                          if (ppppppplStack_208 != (long *******)0x0) {
                            ppppppplStack_200 = ppppppplStack_208;
                            __ZdlPv();
                          }
                          ppppppplVar11 = ppppppplStack_250;
                          if (ppppppplStack_250 != (long *******)0x0) {
                            ppppppplVar15 = ppppppplStack_250 + 1;
                            do {
                              pppppplVar17 = *ppppppplVar15;
                              cVar6 = '\x01';
                              bVar31 = (bool)ExclusiveMonitorPass(ppppppplVar15,0x10);
                              if (bVar31) {
                                *ppppppplVar15 = (long ******)((long)pppppplVar17 + -1);
                                cVar6 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar6 != '\0');
                            if (pppppplVar17 == (long ******)0x0) {
                              (*(code *)(*ppppppplStack_250)[2])(ppppppplStack_250);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar11);
                            }
                          }
                          goto LAB_10a9e334c;
                        }
                        fStack_1e0 = 0.0;
                        fStack_1dc = 0.0;
                        ppppppplStack_1f8 = (long *******)0x0;
                        ppppppplStack_200 = (long *******)0x0;
                        ppppppplStack_1e8 = (long *******)0x0;
                        ppppppplStack_1f0 = (long *******)0x0;
                        ppppppplStack_208 = (long *******)0x0;
                        ppppppplStack_210 = (long *******)0x0;
                        uStack_1c8 = 0;
                        uStack_1d0 = 0;
                        uStack_1b8 = 0;
                        uStack_1c0 = 0;
                        uStack_1a8 = 0;
                        uStack_1b0 = 0;
                        uStack_1a0 = 0;
                        fStack_1d8 = 1.0;
                        uStack_198 = CONCAT44(uStack_198._4_4_,0x3f800000);
                        uStack_188 = 0;
                        uStack_190 = 0;
                        uStack_178 = 0;
                        uStack_180 = 0;
                        puStack_5f0[1] = 0;
                        *puStack_5f0 = 0;
                        puStack_5f0[3] = 0;
                        puStack_5f0[2] = 0;
                        puStack_5f0[5] = 0;
                        puStack_5f0[4] = 0;
                        puStack_5f0[7] = 0;
                        puStack_5f0[6] = 0;
                        puStack_5f0[9] = 0;
                        puStack_5f0[8] = 0;
                        puStack_5f0[0xb] = 0;
                        puStack_5f0[10] = 0;
                        puStack_5f0[0xd] = 0;
                        puStack_5f0[0xc] = 0;
                        puStack_5f0[0xf] = 0;
                        puStack_5f0[0xe] = 0;
                        uStack_170 = CONCAT44(uStack_170._4_4_,0x3f800000);
                        uStack_e8 = 0x3f800000;
                        plStack_d8 = (long *)0x0;
                        uStack_e0 = 0;
                        plStack_c8 = (long *)0x0;
                        uStack_d0 = 0;
                        uStack_688 = 0;
                        uStack_690 = CONCAT71(uStack_690._1_7_,1);
                        uStack_698 = uStack_5e8;
                        plStack_6a0 = (long *)CONCAT71(plStack_6a0._1_7_,1);
                        ppppppplVar15 = ppppppplStack_590;
                        ppppppplVar11 = ppppppplVar16;
                        FUN_10a9edb8c(ppppppplStack_590,&ppppppplStack_210,plVar18,&uStack_3e0,
                                      &uStack_388,uStack_32a,&ppppppplStack_3a8,&fStack_3b0);
                        if (((ulong)ppppppplVar15 & 1) != 0) {
                          ppppppplVar13 = (long *******)&ppppppplStack_1f8;
                          uStack_258 = (long *******)&uStack_3e0;
                          FUN_10a206104(ppppppplVar13,&uStack_3e0,&UNK_10dd5b8f9,&uStack_258,
                                        &puStack_220);
                          pppppplVar17 = ppppppplStack_590[0x44];
                          puVar14 = (undefined8 *)0xd0;
                          __Znwm();
                          puVar14[1] = 0;
                          puVar14[2] = 0;
                          puVar35 = puVar14 + 3;
                          *puVar14 = &PTR_FUN_110c38118;
                          FUN_10aaea58c(puVar35,pppppplVar17,&uStack_388,uVar4,ppppppplVar13 + 10,
                                        ppppppplVar13 + 0xc,iStack_608);
                          uStack_258 = uStack_3e0;
                          ppppppplStack_248 = (long *******)0x0;
                          fStack_240 = 0.0;
                          uStack_23c = 0;
                          ppppppplStack_250 = (long *******)0x0;
                          puStack_220 = puVar35;
                          plStack_218 = puVar14;
                          FUN_10a0ca588(&ppppppplStack_250,ppppppplStack_3d8,uStack_3d0,
                                        (long)uStack_3d0 - (long)ppppppplStack_3d8 >> 2);
                          fStack_238 = SUB84(ppppppplStack_3c0,0);
                          fStack_234 = (float)((ulong)ppppppplStack_3c0 >> 0x20);
                          fStack_228 = SUB84(puVar14,0);
                          fStack_224 = (float)((ulong)puVar14 >> 0x20);
                          plStack_218 = (long *)0x0;
                          puStack_220 = (undefined8 *)0x0;
                          uStack_230 = puVar35;
                          FUN_10aa0faf4(&uStack_4f8,&uStack_258,&uStack_258);
                          uVar24 = uStack_580;
                          plVar12 = (long *)CONCAT44(fStack_224,fStack_228);
                          if (plVar12 != (long *)0x0) {
                            plVar37 = plVar12 + 1;
                            do {
                              lVar33 = *plVar37;
                              cVar6 = '\x01';
                              bVar31 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                              if (bVar31) {
                                *plVar37 = lVar33 + -1;
                                cVar6 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar6 != '\0');
                            if (lVar33 == 0) {
                              (**(code **)(*plVar12 + 0x10))(plVar12);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                            }
                          }
                          if (ppppppplStack_250 != (long *******)0x0) {
                            ppppppplStack_248 = ppppppplStack_250;
                            __ZdlPv();
                          }
                          plVar12 = plStack_218;
                          if (plStack_218 != (long *)0x0) {
                            plVar37 = plStack_218 + 1;
                            do {
                              lVar33 = *plVar37;
                              cVar6 = '\x01';
                              bVar31 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                              if (bVar31) {
                                *plVar37 = lVar33 + -1;
                                cVar6 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar6 != '\0');
                            if (lVar33 == 0) {
                              (**(code **)(*plStack_218 + 0x10))(plStack_218);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                            }
                          }
                        }
                        plVar12 = plStack_c8;
                        if (plStack_c8 != (long *)0x0) {
                          plVar37 = plStack_c8 + 1;
                          do {
                            lVar33 = *plVar37;
                            cVar6 = '\x01';
                            bVar31 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                            if (bVar31) {
                              *plVar37 = lVar33 + -1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                          if (lVar33 == 0) {
                            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                          }
                        }
                        plVar12 = plStack_d8;
                        if (plStack_d8 != (long *)0x0) {
                          plVar37 = plStack_d8 + 1;
                          do {
                            lVar33 = *plVar37;
                            cVar6 = '\x01';
                            bVar31 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                            if (bVar31) {
                              *plVar37 = lVar33 + -1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                          if (lVar33 == 0) {
                            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                          }
                        }
                        func_0x00010a1f4af8(&ppppppplStack_210);
                        if (((ulong)ppppppplVar15 & 1) != 0) goto LAB_10a9e334c;
                        bVar31 = false;
                      }
                      else {
LAB_10a9e334c:
                        FUN_10aa0dd8c(&lStack_510,&uStack_3e0);
                        FUN_10a17478c(&lStack_550,&ppppppplStack_2f0);
                        uStack_258 = (long *******)0x0;
                        ppppppplVar11 = appppppplStack_350[0];
                        if (cStack_371 < '\0') {
                          if (lStack_380 == 1) {
                            puVar21 = (uint *)CONCAT44(uStack_384,uStack_388);
                            goto LAB_10a9e34c0;
                          }
                        }
                        else if (cStack_371 == '\x01') {
                          puVar21 = &uStack_388;
LAB_10a9e34c0:
                          ppppppplVar44 = (long *******)((double)appppppplStack_350[0] * 0.25);
                          ppppppplVar11 = ppppppplVar44;
                          if ((char)*puVar21 != ' ') {
                            ppppppplVar11 = appppppplStack_350[0];
                          }
                        }
                        ppppppplStack_250 =
                             (long *******)
                             CONCAT44(ppppppplStack_250._4_4_,(int)(double)ppppppplVar11);
                        FUN_10aa0df84(&uStack_4d0,&uStack_258);
                        ppppppplStack_210 =
                             (long *******)CONCAT44(ppppppplStack_210._4_4_,(int)plVar18[3]);
                        plVar12 = plVar18 + 7;
                        func_0x000109de3048(plVar12,&ppppppplStack_210);
                        if (plVar12 == (long *)0x0) {
                          FUN_109ffdddc(&UNK_10f639994);
                          goto LAB_10a9e4760;
                        }
                        ppppppplStack_210._0_4_ =
                             *(int *)((long)plVar12 + 0x14) + (int)ppppppplVar36;
                        FUN_109febd04(puStack_588,&ppppppplStack_210);
                        ppppppplStack_210 =
                             (long *******)CONCAT44(ppppppplStack_210._4_4_,(int)lVar25);
                        FUN_109febd04(&uStack_438,&ppppppplStack_210);
                        if (ppppppplStack_448 < ppppppplStack_440) {
                          ppppppplVar36 = ppppppplStack_448 + 3;
                          *ppppppplStack_448 = (long ******)0x0;
                          ppppppplStack_448[1] = (long ******)0x0;
                          ppppppplStack_448[2] = (long ******)0x0;
                        }
                        else {
                          lVar33 = (long)ppppppplStack_448 - (long)ppppppplStack_450;
                          uVar30 = (lVar33 >> 3) * -0x5555555555555555 + 1;
                          if (0xaaaaaaaaaaaaaaa < uVar30) {
                            FUN_10a3aa8f4();
                            goto LAB_10a9e4760;
                          }
                          lVar25 = (long)ppppppplStack_440 - (long)ppppppplStack_450 >> 3;
                          uVar29 = lVar25 * 0x5555555555555556;
                          if (uVar29 < uVar30 || uVar29 - uVar30 == 0) {
                            uVar29 = uVar30;
                          }
                          if (0x555555555555554 < (ulong)(lVar25 * -0x5555555555555555)) {
                            uVar29 = 0xaaaaaaaaaaaaaaa;
                          }
                          ppppppplStack_1f0 = ppppppplStack_5b8;
                          if (uVar29 == 0) {
                            ppppppplVar15 = (long *******)0x0;
                          }
                          else {
                            ppppppplVar15 = ppppppplStack_5b8;
                            FUN_10a3aa908();
                          }
                          pcVar2 = (char *)((long)ppppppplVar15 + lVar33);
                          ppppppplVar36 = (long *******)(pcVar2 + 0x18);
                          pcVar2[0] = '\0';
                          pcVar2[1] = '\0';
                          pcVar2[2] = '\0';
                          pcVar2[3] = '\0';
                          pcVar2[4] = '\0';
                          pcVar2[5] = '\0';
                          pcVar2[6] = '\0';
                          pcVar2[7] = '\0';
                          pcVar2[8] = '\0';
                          pcVar2[9] = '\0';
                          pcVar2[10] = '\0';
                          pcVar2[0xb] = '\0';
                          pcVar2[0xc] = '\0';
                          pcVar2[0xd] = '\0';
                          pcVar2[0xe] = '\0';
                          pcVar2[0xf] = '\0';
                          pcVar2[0x10] = '\0';
                          pcVar2[0x11] = '\0';
                          pcVar2[0x12] = '\0';
                          pcVar2[0x13] = '\0';
                          pcVar2[0x14] = '\0';
                          pcVar2[0x15] = '\0';
                          pcVar2[0x16] = '\0';
                          pcVar2[0x17] = '\0';
                          lVar33 = (long)ppppppplStack_448 - (long)ppppppplStack_450;
                          _memcpy(pcVar2 + -lVar33);
                          ppppppplStack_200 = ppppppplStack_450;
                          ppppppplStack_1f8 = ppppppplStack_440;
                          ppppppplStack_208 = ppppppplStack_450;
                          ppppppplStack_210 = ppppppplStack_450;
                          ppppppplStack_450 = (long *******)(pcVar2 + -lVar33);
                          ppppppplStack_448 = ppppppplVar36;
                          ppppppplStack_440 = ppppppplVar15 + uVar29 * 3;
                          func_0x00010937ce88(&ppppppplStack_210);
                        }
                        bVar31 = true;
                        ppppppplStack_448 = ppppppplVar36;
                      }
                      param_2 = ppppppplVar44;
                      param_3 = dVar45;
                      param_4 = dVar46;
                      if (ppppppplStack_3d8 != (long *******)0x0) {
                        uStack_3d0 = ppppppplStack_3d8;
                        __ZdlPv();
                        param_2 = ppppppplVar44;
                        param_3 = dVar45;
                        param_4 = dVar46;
                      }
                      ppppppplVar44 = ppppppplStack_598;
                      if (cStack_371 < '\0') {
                        __ZdlPv(CONCAT44(uStack_384,uStack_388));
                      }
                      if (ppppppplStack_370 != (long *******)0x0) {
                        ppppppplStack_368 = ppppppplStack_370;
                        __ZdlPv();
                      }
                      FUN_10aa10ec8(&ppppppplStack_358);
                      if (!bVar31) goto LAB_10a9e39a0;
                      dVar41 = dVar41 + (double)ppppppplVar1;
                      uVar39 = uVar39 + 1;
                      uVar28 = (uint)((long)uVar24 <= (long)uVar39);
                    } while (uVar39 != uVar24);
                  }
                  pppppplVar17 = (long ******)plVar18[0xc];
                  pppppplVar3 = (long ******)plVar18[0xd];
                  if (pppppplVar17 != pppppplVar3) {
                    ppppppplStack_1e8 =
                         (long *******)((ulong)ppppppplStack_1e8 & 0xffffffffffffff00);
                    ppppppplStack_5d8[1] = (long ******)0x0;
                    ppppppplStack_5d8[2] = (long ******)0x0;
                    *ppppppplStack_5d8 = (long ******)0x0;
                    *(undefined1 *)(ppppppplStack_5d8 + 3) = 0;
                    fStack_1e0 = 1.0;
                    fStack_1dc = 0.0;
                    fStack_1d8 = 0.0;
                    fStack_1d4 = (float)((uint)fStack_1d4 & 0xffffff00);
                    ppppppplStack_210 =
                         (long *******)((lStack_508 - lStack_510 >> 3) * -0x3333333333333333);
                    if (ppppppplStack_5d8 != (long *******)(plVar18 + 0xc)) {
                      FUN_10a0ea4a0(ppppppplStack_5d8,pppppplVar17,pppppplVar3,
                                    (long)pppppplVar3 - (long)pppppplVar17 >> 2);
                    }
                    ppppppplStack_1f0 = ppppppplStack_2f0;
                    ppppppplStack_1e8 = (long *******)CONCAT71(ppppppplStack_1e8._1_7_,1);
                    ppppppplVar11 = (long *******)(ulong)(uint)fStack_2c8;
                    fStack_1e0 = fStack_2c8;
                    FUN_10aa0db84(&ppppppplStack_538,&ppppppplStack_210);
                    if (ppppppplStack_208 != (long *******)0x0) {
                      ppppppplStack_200 = ppppppplStack_208;
                      __ZdlPv();
                    }
                  }
                  uStack_59c = 1;
LAB_10a9e39a0:
                  ppppppplVar23 = ppppppplVar11;
                  if (puStack_328 != (undefined8 *)0x0) {
                    __ZdlPv();
                    ppppppplVar23 = ppppppplVar11;
                  }
                  if (ppppppplStack_310 != (long *******)0x0) {
                    __ZdlPv();
                  }
                  FUN_10aa12154(&uStack_2e8);
                  ppppppplVar44 = ppppppplStack_2d0;
                  if (ppppppplStack_2d0 != (long *******)0x0) {
                    ppppppplVar16 = ppppppplStack_2d0 + 1;
                    do {
                      pppppplVar17 = *ppppppplVar16;
                      cVar6 = '\x01';
                      bVar31 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
                      if (bVar31) {
                        *ppppppplVar16 = (long ******)((long)pppppplVar17 + -1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (pppppplVar17 == (long ******)0x0) {
                      (*(code *)(*ppppppplStack_2d0)[2])(ppppppplStack_2d0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar44);
                    }
                  }
                  FUN_10aa120f4(&uStack_2a8);
                  uVar28 = uStack_59c;
                }
                FUN_10a103380(&lStack_2a0);
                FUN_10aa120c4(&ppppppplStack_298);
                FUN_10aa0e5a0(&ppppppplStack_290);
                FUN_10aa0e5d0(&ppppppplStack_288);
                FUN_10aa12064(&ppppppplStack_278);
                FUN_10aa12094(&ppppppplStack_270);
                FUN_10aa12064(&ppppppplStack_268);
                FUN_10aa10ec8(&ppppppplStack_260);
                if (((uVar28 | uStack_604) & 1) == 0) goto LAB_10a9e4600;
              }
            }
            else {
              if (*(long *)(lVar33 + 0xc0) != 0) goto LAB_10a9e2c4c;
              uStack_59c = *(uint *)((long)plVar18 + 0xac);
              uVar28 = *(uint *)(lVar33 + 0x74);
              uStack_580 = CONCAT44(uStack_580._4_4_,uStack_59c);
              if (-1 < (int)uVar28) {
                uStack_59c = *(uint *)(*(long *)(lVar25 + 0x40) + (ulong)uVar28 * 0x20 + 8);
              }
              uStack_258 = (long *******)CONCAT26(uStack_258._6_2_,0x1ffffffff);
              ppppppplStack_250 = (long *******)0x0;
              ppppppplStack_248 = (long *******)0x0;
              fStack_240 = 1.0;
              uStack_23c = 0;
              fStack_238 = 0.0;
              uStack_230._4_4_ = 0.0;
              fStack_228 = 0.0;
              fStack_234 = 0.0;
              uStack_230._0_4_ = 0.0;
              fStack_224 = 0.0;
              if ((int)uVar28 < 0) {
                FUN_10a9e9a54(*(undefined8 *)(lVar25 + 0x28),
                              *(undefined8 *)(*(long *)(lVar25 + 0xa0) + 0x30),
                              *(undefined8 *)(*(long *)(lVar25 + 0xa0) + 0x38));
                if (0.0 < fVar42) {
                  fStack_234 = fVar42;
                }
                if (0.0 < SUB84(ppppppplVar23,0)) {
                  fStack_238 = SUB84(ppppppplVar23,0);
                }
              }
              if ((int)plVar18[0x12] == 0) {
                uVar19 = 4;
LAB_10a9e3a60:
                if (*(int *)(plVar18[1] + 4) != 0) {
                  *(undefined4 *)(plVar18[1] + 0x38) = uVar19;
                }
              }
              else if ((int)plVar18[0x12] == 1) {
                uVar19 = 5;
                goto LAB_10a9e3a60;
              }
              lVar33 = *plVar18;
              if (plVar18[0x17] != plVar18[0x18]) {
                FUN_10a9e964c(lVar33 + 0x30);
                lVar33 = *plVar18;
              }
              uVar34 = *(undefined8 *)(lVar33 + 0xd0);
              lVar33 = plVar18[1];
              FUN_10a9eea84(ppppppplStack_590,lVar33);
              func_0x00010970fc5c(uVar34,lVar33,0,0,0);
              uVar32 = (undefined1)*(undefined4 *)(plVar18[1] + 0x3c);
              uStack_258 = (long *******)CONCAT44(uStack_258._4_4_,(int)plVar18[0x12]);
              uVar9 = uVar32;
              FUN_10aa0e600();
              uStack_258._0_5_ = CONCAT14(uVar9,(undefined4)uStack_258);
              func_0x00010aa0e730();
              uStack_258._0_6_ = CONCAT15(uVar32,(undefined5)uStack_258);
              FUN_10a2086b4(&ppppppplStack_250,plVar18 + 0x13);
              fStack_240 = *(float *)(plVar18 + 0x15);
              uStack_23c = (undefined4)uStack_580;
              lVar38 = *(long *)(*(long *)(lVar25 + 0xa0) + 0x28);
              lVar33 = lVar38 * *(short *)(lVar25 + 0x94);
              uStack_230._0_4_ = (float)(lVar33 + (lVar33 >> 0x3f) + 0x8000 >> 0x10) / 64.0;
              lVar38 = lVar38 * *(short *)(lVar25 + 0x96);
              fVar42 = (float)(lVar38 + (lVar38 >> 0x3f) + 0x8000 >> 0x10) / 64.0;
              if (fVar42 <= 1.0) {
                fVar42 = 1.0;
              }
              uStack_230._4_4_ = (float)(int)fVar42;
              fStack_228 = 0.0;
              fStack_224 = 0.0;
              lVar33 = lVar25;
              func_0x000109755e44(lVar25,2);
              if (lVar33 != 0) {
                lVar26 = *(long *)(*(long *)(lVar25 + 0xa0) + 0x28);
                lVar38 = lVar26 * *(short *)(lVar33 + 0x1c);
                fStack_228 = (float)(lVar38 + (lVar38 >> 0x3f) + 0x8000 >> 0x10) / 64.0;
                lVar26 = lVar26 * *(short *)(lVar33 + 0x1a);
                fVar42 = (float)(lVar26 + (lVar26 >> 0x3f) + 0x8000 >> 0x10) / 64.0;
                if (fVar42 <= 1.0) {
                  fVar42 = 1.0;
                }
                fStack_224 = (float)(int)fVar42;
              }
              if (fStack_228 <= 0.0) {
                fVar42 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(lVar25 + 0xa0) + 0x1a));
                param_3 = (double)(ulong)(uint)(uStack_230._4_4_ * 0.5);
                param_4 = 5.16867352465494e-315;
                fStack_228 = uStack_230._4_4_ * 0.5 + fVar42 * 0.21386719;
                fStack_224 = uStack_230._4_4_;
              }
              ppppppplStack_370 =
                   (long *******)((lStack_508 - lStack_510 >> 3) * -0x3333333333333333);
              *(undefined4 *)ppppppplStack_5d8 = (undefined4)uStack_258;
              *(undefined2 *)((long)ppppppplStack_5d8 + 4) = uStack_258._4_2_;
              ppppppplStack_1f8 = ppppppplStack_248;
              ppppppplStack_200 = ppppppplStack_250;
              if (ppppppplStack_248 != (long *******)0x0) {
                ppppppplVar23 = ppppppplStack_248 + 1;
                do {
                  cVar6 = '\x01';
                  bVar31 = (bool)ExclusiveMonitorPass(ppppppplVar23,0x10);
                  if (bVar31) {
                    *ppppppplVar23 = (long ******)((long)*ppppppplVar23 + 1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              ppppppplStack_1e8 = (long *******)CONCAT44(fStack_234,fStack_238);
              ppppppplVar23 = (long *******)CONCAT44(uStack_23c,fStack_240);
              param_2 = (long *******)CONCAT44(uStack_230._4_4_,(float)uStack_230);
              fStack_1d8 = fStack_228;
              fStack_1d4 = fStack_224;
              fStack_1e0 = (float)uStack_230;
              fStack_1dc = uStack_230._4_4_;
              ppppppplStack_210 = ppppppplStack_370;
              ppppppplStack_1f0 = ppppppplVar23;
              FUN_10aa0e078(&uStack_490,ppppppplStack_370,&ppppppplStack_210);
              ppppppplVar36 = ppppppplStack_1f8;
              if (ppppppplStack_1f8 != (long *******)0x0) {
                ppppppplVar44 = ppppppplStack_1f8 + 1;
                do {
                  pppppplVar17 = *ppppppplVar44;
                  cVar6 = '\x01';
                  bVar31 = (bool)ExclusiveMonitorPass(ppppppplVar44,0x10);
                  if (bVar31) {
                    *ppppppplVar44 = (long ******)((long)pppppplVar17 + -1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (pppppplVar17 == (long ******)0x0) {
                  (*(code *)(*ppppppplStack_1f8)[2])(ppppppplStack_1f8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar36);
                }
              }
              if ((0x151 < *(int *)(ppppppplStack_590[0x44][0x144] + 3)) &&
                 ((long ******)plVar18[0xf] != (long ******)plVar18[0x10])) {
                ppppppplStack_1e8 = (long *******)((ulong)ppppppplStack_1e8 & 0xffffffffffffff00);
                ppppppplStack_5d8[1] = (long ******)0x0;
                ppppppplStack_5d8[2] = (long ******)0x0;
                *ppppppplStack_5d8 = (long ******)0x0;
                *(undefined1 *)(ppppppplStack_5d8 + 3) = 0;
                fStack_1e0 = 1.0;
                fStack_1dc = 0.0;
                fStack_1d8 = 0.0;
                fStack_1d4 = (float)((uint)fStack_1d4 & 0xffffff00);
                ppppppplStack_210 = ppppppplStack_370;
                if (ppppppplStack_5d8 != (long *******)(plVar18 + 0xf)) {
                  FUN_10a0ea4a0();
                }
                ppppppplStack_1f0 = ppppppplStack_370;
                ppppppplStack_1e8 = (long *******)CONCAT71(ppppppplStack_1e8._1_7_,1);
                ppppppplVar23 = (long *******)(ulong)(uint)fStack_240;
                fStack_1e0 = fStack_240;
                FUN_10aa0db84(&ppppppplStack_538,&ppppppplStack_210);
                if (ppppppplStack_208 != (long *******)0x0) {
                  ppppppplStack_200 = ppppppplStack_208;
                  __ZdlPv();
                }
              }
              lVar33 = plVar18[1];
              uStack_388 = *(uint *)(lVar33 + 0x60);
              lVar38 = *(long *)(lVar33 + 0x70);
              func_0x0001096f6f94(lVar33,&uStack_388);
              if (uStack_388 != 0) {
                uVar39 = 0;
                do {
                  puVar40 = (undefined4 *)(lVar38 + uVar39 * 0x14);
                  uStack_2e0 = *puVar40;
                  uStack_2dc = (undefined2)uStack_580;
                  uStack_2da = (undefined2)(uStack_580 >> 0x10);
                  ppppppplStack_2d0 = (long *******)0x0;
                  fStack_2c8 = 0.0;
                  iStack_2c4 = 0;
                  ppppppplStack_2d8 = (long *******)0x0;
                  lVar26 = *(long *)(*plVar18 + 0xa8);
                  lVar27 = *(long *)(*plVar18 + 0xb0);
                  FUN_10a0ca588(&ppppppplStack_2d8,lVar26,lVar27,lVar27 - lVar26 >> 2);
                  fStack_2c0 = (float)lVar25;
                  fStack_2bc = (float)((ulong)lVar25 >> 0x20);
                  FUN_10a9df360(&ppppppplStack_3a8,plVar18 + 4,*(undefined4 *)(plVar18[1] + 0x60),
                                *(undefined8 *)(plVar18[1] + 0x70),uVar39,(int)plVar18[3]);
                  puVar35 = &uStack_4f8;
                  FUN_10a283ff0(puVar35,&uStack_2e0);
                  if (puVar35 == (undefined8 *)0x0) {
                    ppppppplStack_308 = (long *******)0x0;
                    ppppppplStack_310 = (long *******)0x0;
                    lVar26 = *plVar18;
                    puVar35 = *(undefined8 **)(lVar26 + 0x50);
                    uStack_3e0 = (long *******)CONCAT44(uStack_3e0._4_4_,*puVar40);
                    uStack_3d0 = (long *******)0x0;
                    uStack_3c8 = 0;
                    ppppppplStack_3d8 = (long *******)0x0;
                    puStack_328 = puVar35;
                    FUN_10a0ca588(&ppppppplStack_3d8,*(long *)(lVar26 + 0xa8),
                                  *(long *)(lVar26 + 0xb0),
                                  *(long *)(lVar26 + 0xb0) - *(long *)(lVar26 + 0xa8) >> 2);
                    ppppppplVar44 = ppppppplStack_590;
                    FUN_10aa0d000(ppppppplStack_590,puVar35,&puStack_328);
                    ppppppplVar36 = ppppppplVar44 + 3;
                    FUN_10aa0d46c(ppppppplVar36,&uStack_3e0);
                    if (ppppppplVar36 == (long *******)0x0) {
                      ppppppplVar16 = (long *******)0x0;
LAB_10a9e3e84:
                      puStack_220 = (undefined8 *)CONCAT71(puStack_220._1_7_,1);
                      FUN_10a9e1b64(&ppppppplStack_210,ppppppplStack_590,plVar18,*puVar40,
                                    &ppppppplStack_3a8,uStack_59c,&puStack_220);
                      ppppppplStack_308 = ppppppplStack_208;
                      ppppppplVar23 = ppppppplStack_210;
                      ppppppplStack_208 = (long *******)0x0;
                      ppppppplStack_210 = (long *******)0x0;
                      ppppppplStack_310 = ppppppplVar23;
                      if (ppppppplVar16 != (long *******)0x0) {
                        ppppppplVar36 = ppppppplVar16 + 1;
                        do {
                          pppppplVar17 = *ppppppplVar36;
                          cVar6 = '\x01';
                          bVar31 = (bool)ExclusiveMonitorPass(ppppppplVar36,0x10);
                          if (bVar31) {
                            *ppppppplVar36 = (long ******)((long)pppppplVar17 + -1);
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (pppppplVar17 == (long ******)0x0) {
                          (*(code *)(*ppppppplVar16)[2])(ppppppplVar16);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar16);
                        }
                      }
                      ppppppplVar36 = ppppppplStack_208;
                      if (ppppppplStack_208 != (long *******)0x0) {
                        ppppppplVar16 = ppppppplStack_208 + 1;
                        do {
                          pppppplVar17 = *ppppppplVar16;
                          cVar6 = '\x01';
                          bVar31 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
                          if (bVar31) {
                            *ppppppplVar16 = (long ******)((long)pppppplVar17 + -1);
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (pppppplVar17 == (long ******)0x0) {
                          (*(code *)(*ppppppplStack_208)[2])(ppppppplStack_208);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar36);
                        }
                      }
                      if (((ulong)puStack_220 & 1) != 0) {
                        ppppppplVar44 = ppppppplVar44 + 3;
                        FUN_10aa0d668(ppppppplVar44,&uStack_3e0,&uStack_3e0);
                        ppppppplVar16 = ppppppplStack_308;
                        ppppppplVar36 = ppppppplStack_310;
                        if (ppppppplStack_308 != (long *******)0x0) {
                          ppppppplVar23 = ppppppplStack_308 + 2;
                          do {
                            cVar6 = '\x01';
                            bVar31 = (bool)ExclusiveMonitorPass(ppppppplVar23,0x10);
                            if (bVar31) {
                              *ppppppplVar23 = (long ******)((long)*ppppppplVar23 + 1);
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                        }
                        pppppplVar17 = ppppppplVar44[7];
                        ppppppplVar44[7] = (long ******)ppppppplVar16;
                        ppppppplVar44[6] = (long ******)ppppppplVar36;
                        ppppppplVar23 = ppppppplVar36;
                        if (pppppplVar17 != (long ******)0x0) {
                          ppppppplStack_5a8 = ppppppplVar16;
                          ppppppplStack_5b0 = ppppppplVar36;
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar17);
                          ppppppplVar36 = ppppppplStack_5b0;
                          ppppppplVar23 = ppppppplStack_5b0;
                        }
                        goto LAB_10a9e3f88;
                      }
                      bVar31 = false;
                    }
                    else {
                      ppppppplVar16 = (long *******)ppppppplVar36[7];
                      if ((ppppppplVar16 == (long *******)0x0) ||
                         (__ZNSt3__119__shared_weak_count4lockEv(),
                         ppppppplVar16 == (long *******)0x0)) {
                        ppppppplVar16 = (long *******)0x0;
                        ppppppplStack_308 = (long *******)0x0;
                        ppppppplStack_310 = (long *******)0x0;
                        goto LAB_10a9e3e84;
                      }
                      ppppppplVar36 = (long *******)ppppppplVar36[6];
                      ppppppplStack_310 = ppppppplVar36;
                      ppppppplStack_308 = ppppppplVar16;
                      if (ppppppplVar36 == (long *******)0x0) goto LAB_10a9e3e84;
LAB_10a9e3f88:
                      ppppppplStack_210 =
                           (long *******)CONCAT26(uStack_2da,CONCAT24(uStack_2dc,uStack_2e0));
                      ppppppplStack_5d8[1] = (long ******)0x0;
                      ppppppplStack_5d8[2] = (long ******)0x0;
                      *ppppppplStack_5d8 = (long ******)0x0;
                      FUN_10a0ca588();
                      ppppppplStack_1f0 = (long *******)CONCAT44(fStack_2bc,fStack_2c0);
                      fStack_1e0 = SUB84(ppppppplVar16,0);
                      fStack_1dc = (float)((ulong)ppppppplVar16 >> 0x20);
                      ppppppplStack_308 = (long *******)0x0;
                      ppppppplStack_310 = (long *******)0x0;
                      ppppppplStack_1e8 = ppppppplVar36;
                      FUN_10aa0faf4(&uStack_4f8,&ppppppplStack_210,&ppppppplStack_210);
                      plVar12 = (long *)CONCAT44(fStack_1dc,fStack_1e0);
                      if (plVar12 != (long *)0x0) {
                        plVar37 = plVar12 + 1;
                        do {
                          lVar26 = *plVar37;
                          cVar6 = '\x01';
                          bVar31 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                          if (bVar31) {
                            *plVar37 = lVar26 + -1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (lVar26 == 0) {
                          (**(code **)(*plVar12 + 0x10))(plVar12);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                        }
                      }
                      if (ppppppplStack_208 != (long *******)0x0) {
                        ppppppplStack_200 = ppppppplStack_208;
                        __ZdlPv();
                      }
                      bVar31 = true;
                    }
                    if (ppppppplStack_3d8 != (long *******)0x0) {
                      uStack_3d0 = ppppppplStack_3d8;
                      __ZdlPv();
                    }
                    ppppppplVar36 = ppppppplStack_308;
                    if (ppppppplStack_308 != (long *******)0x0) {
                      ppppppplVar44 = ppppppplStack_308 + 1;
                      do {
                        pppppplVar17 = *ppppppplVar44;
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(ppppppplVar44,0x10);
                        if (bVar7) {
                          *ppppppplVar44 = (long ******)((long)pppppplVar17 + -1);
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (pppppplVar17 == (long ******)0x0) {
                        (*(code *)(*ppppppplVar36)[2])(ppppppplVar36);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar36);
                      }
                    }
                    if (!bVar31) {
                      if ((long)uStack_398 < 0) {
                        __ZdlPv(ppppppplStack_3a8);
                      }
                      if (ppppppplStack_2d8 != (long *******)0x0) {
                        ppppppplStack_2d0 = ppppppplStack_2d8;
                        __ZdlPv();
                      }
                      ppppppplVar36 = (long *******)0x1;
                      goto LAB_10a9e4518;
                    }
                  }
                  FUN_10aa0dd8c(&lStack_510,&uStack_2e0);
                  FUN_10a17478c(&lStack_550,&ppppppplStack_370);
                  piVar22 = (int *)(lVar33 + uVar39 * 0x14);
                  uVar34 = NEON_scvtf(*(undefined8 *)(piVar22 + 2),4);
                  ppppppplStack_310 =
                       (long *******)
                       CONCAT44((float)((ulong)uVar34 >> 0x20) * 0.015625,(float)uVar34 * 0.015625);
                  param_2 = (long *******)0x3c800000;
                  iVar20 = (int)((float)*piVar22 * 0.015625);
                  ppppppplStack_308 = (long *******)CONCAT44(ppppppplStack_308._4_4_,iVar20);
                  if ((long)uStack_398 < 0) {
                    ppppppplVar23 = ppppppplStack_3a8;
                    if (ppppppplStack_3a0 == (long *******)0x1) goto LAB_10a9e40f0;
                  }
                  else if (uStack_398._7_1_ == '\x01') {
                    ppppppplVar23 = (long *******)&ppppppplStack_3a8;
LAB_10a9e40f0:
                    if ((*(char *)ppppppplVar23 == ' ') &&
                       ((*(byte *)(lVar25 + 0x11) >> 6 & 1) != 0)) {
                      ppppppplStack_308 =
                           (long *******)
                           CONCAT44(ppppppplStack_308._4_4_,(int)((float)iVar20 / 5.0));
                    }
                  }
                  FUN_10aa0df84(&uStack_4d0,&ppppppplStack_310);
                  plVar12 = plVar18 + 7;
                  func_0x000109de3048(plVar12,puVar40 + 2);
                  if (plVar12 == (long *)0x0) {
                    FUN_109ffdddc(&UNK_10f639994);
                    goto LAB_10a9e4760;
                  }
                  ppppppplStack_210 =
                       (long *******)
                       CONCAT44(ppppppplStack_210._4_4_,*(undefined4 *)((long)plVar12 + 0x14));
                  FUN_109febd04(puStack_588,&ppppppplStack_210);
                  puVar35 = (undefined8 *)0x20;
                  __Znwm();
                  puVar35[2] = uStack_5c8;
                  puVar35[1] = uStack_5d0;
                  *(undefined4 *)(puVar35 + 3) = 0;
                  *puVar35 = &PTR_DAT_110c380a0;
                  ppppppplStack_208 = (long *******)0x0;
                  ppppppplStack_210 = (long *******)0x0;
                  ppppppplStack_1f8 = (long *******)0x0;
                  ppppppplStack_200 = (long *******)0x0;
                  ppppppplStack_1e8 = (long *******)0x0;
                  ppppppplStack_1f0 = (long *******)0x0;
                  fStack_1e0 = SUB84(puVar35,0);
                  fStack_1dc = (float)((ulong)puVar35 >> 0x20);
                  uStack_1d0 = 0;
                  fStack_1d8 = 0.0;
                  fStack_1d4 = 0.0;
                  uStack_1c0 = 0;
                  uStack_1c8 = 0;
                  uStack_1b0 = 0;
                  uStack_1b8 = 0;
                  uStack_1a0 = 0;
                  uStack_1a8 = 0;
                  uStack_190 = 0;
                  uStack_198 = 0;
                  uStack_180 = 0;
                  uStack_188 = 0;
                  uStack_170 = 0;
                  uStack_178 = 0;
                  uStack_160 = 0;
                  uStack_168 = 0;
                  ppppppplVar23 = ppppppplStack_3a0;
                  ppppppplVar36 = ppppppplStack_3a8;
                  if (-1 < (long)uStack_398) {
                    ppppppplVar23 = (long *******)((ulong)uStack_398 >> 0x38);
                    ppppppplVar36 = (long *******)&ppppppplStack_3a8;
                  }
                  uStack_158 = 0;
                  FUN_10aa0e8ac(&uStack_3e0,&ppppppplStack_210,ppppppplVar36,
                                (char *)((long)ppppppplVar36 + (long)ppppppplVar23));
                  ppppppplVar23 = ppppppplStack_3d8;
                  ppppppplVar36 = (long *******)(long)uStack_3d0._7_1_;
                  if ((long)uStack_3d0._7_1_ < 0) {
                    __ZdlPv(uStack_3e0);
                    ppppppplVar36 = ppppppplVar23;
                  }
                  func_0x00010aa0ed70(&ppppppplStack_210);
                  ppppppplStack_210 =
                       (long *******)CONCAT44(ppppppplStack_210._4_4_,(int)ppppppplVar36);
                  FUN_109febd04(&uStack_438,&ppppppplStack_210);
                  puStack_328 = (undefined8 *)CONCAT44(puStack_328._4_4_,10);
                  FUN_109ffe1f4(&uStack_3e0,10);
                  func_0x000109700bc0(*(undefined8 *)(*plVar18 + 0xd0),
                                      *(undefined4 *)(plVar18[1] + 0x38),*puVar40,0,&puStack_328,
                                      uStack_3e0);
                  func_0x000108a5942c(&uStack_3e0,(ulong)puStack_328 & 0xffffffff);
                  for (ppppppplVar23 = uStack_3e0; ppppppplVar23 != ppppppplStack_3d8;
                      ppppppplVar23 = (long *******)((long)ppppppplVar23 + 4)) {
                    param_2 = (long *******)0x3c800000;
                    *(int *)ppppppplVar23 = (int)((float)*(int *)ppppppplVar23 * 0.015625);
                  }
                  if (ppppppplStack_448 < ppppppplStack_440) {
                    *ppppppplStack_448 = (long ******)0x0;
                    ppppppplStack_448[1] = (long ******)0x0;
                    ppppppplStack_448[2] = (long ******)0x0;
                    ppppppplVar23 = uStack_3e0;
                    ppppppplStack_448[1] = (long ******)ppppppplStack_3d8;
                    *ppppppplStack_448 = (long ******)ppppppplVar23;
                    ppppppplStack_448[2] = (long ******)uStack_3d0;
                    ppppppplStack_448 = ppppppplStack_448 + 3;
                  }
                  else {
                    lVar26 = (long)ppppppplStack_448 - (long)ppppppplStack_450;
                    uVar24 = (lVar26 >> 3) * -0x5555555555555555 + 1;
                    if (0xaaaaaaaaaaaaaaa < uVar24) {
                      FUN_10a3aa8f4();
                      goto LAB_10a9e4760;
                    }
                    lVar27 = (long)ppppppplStack_440 - (long)ppppppplStack_450 >> 3;
                    uVar30 = lVar27 * 0x5555555555555556;
                    if (uVar30 < uVar24 || uVar30 - uVar24 == 0) {
                      uVar30 = uVar24;
                    }
                    if (0x555555555555554 < (ulong)(lVar27 * -0x5555555555555555)) {
                      uVar30 = 0xaaaaaaaaaaaaaaa;
                    }
                    ppppppplStack_1f0 = ppppppplStack_5b8;
                    ppppppplVar44 = ppppppplStack_5b8;
                    FUN_10a3aa908();
                    ppppppplVar23 = uStack_3e0;
                    pcVar2 = (char *)((long)ppppppplVar44 + lVar26);
                    pcVar2[0] = '\0';
                    pcVar2[1] = '\0';
                    pcVar2[2] = '\0';
                    pcVar2[3] = '\0';
                    pcVar2[4] = '\0';
                    pcVar2[5] = '\0';
                    pcVar2[6] = '\0';
                    pcVar2[7] = '\0';
                    pcVar2[8] = '\0';
                    pcVar2[9] = '\0';
                    pcVar2[10] = '\0';
                    pcVar2[0xb] = '\0';
                    pcVar2[0xc] = '\0';
                    pcVar2[0xd] = '\0';
                    pcVar2[0xe] = '\0';
                    pcVar2[0xf] = '\0';
                    pcVar2[0x10] = '\0';
                    pcVar2[0x11] = '\0';
                    pcVar2[0x12] = '\0';
                    pcVar2[0x13] = '\0';
                    pcVar2[0x14] = '\0';
                    pcVar2[0x15] = '\0';
                    pcVar2[0x16] = '\0';
                    pcVar2[0x17] = '\0';
                    *(long ********)(pcVar2 + 8) = ppppppplStack_3d8;
                    *(long ********)pcVar2 = uStack_3e0;
                    *(long ********)(pcVar2 + 0x10) = uStack_3d0;
                    ppppppplStack_3d8 = (long *******)0x0;
                    uStack_3e0 = (long *******)0x0;
                    uStack_3d0 = (long *******)0x0;
                    ppppppplVar36 = (long *******)(pcVar2 + 0x18);
                    lVar26 = (long)ppppppplStack_448 - (long)ppppppplStack_450;
                    _memcpy(pcVar2 + -lVar26);
                    ppppppplStack_200 = ppppppplStack_450;
                    ppppppplStack_1f8 = ppppppplStack_440;
                    ppppppplStack_208 = ppppppplStack_450;
                    ppppppplStack_210 = ppppppplStack_450;
                    ppppppplStack_450 = (long *******)(pcVar2 + -lVar26);
                    ppppppplStack_448 = ppppppplVar36;
                    ppppppplStack_440 = ppppppplVar44 + uVar30 * 3;
                    func_0x00010937ce88(&ppppppplStack_210);
                    ppppppplStack_448 = ppppppplVar36;
                    if (uStack_3e0 != (long *******)0x0) {
                      ppppppplStack_3d8 = uStack_3e0;
                      __ZdlPv();
                    }
                  }
                  if ((long)uStack_398 < 0) {
                    __ZdlPv(ppppppplStack_3a8);
                  }
                  if (ppppppplStack_2d8 != (long *******)0x0) {
                    ppppppplStack_2d0 = ppppppplStack_2d8;
                    __ZdlPv();
                  }
                  uVar39 = uVar39 + 1;
                } while (uVar39 < uStack_388);
              }
              pppppplVar17 = (long ******)plVar18[0xc];
              pppppplVar3 = (long ******)plVar18[0xd];
              if (pppppplVar17 == pppppplVar3) {
                ppppppplVar36 = (long *******)0x0;
              }
              else {
                ppppppplStack_1e8 = (long *******)((ulong)ppppppplStack_1e8 & 0xffffffffffffff00);
                ppppppplStack_5d8[1] = (long ******)0x0;
                ppppppplStack_5d8[2] = (long ******)0x0;
                *ppppppplStack_5d8 = (long ******)0x0;
                *(undefined1 *)(ppppppplStack_5d8 + 3) = 0;
                fStack_1e0 = 1.0;
                fStack_1dc = 0.0;
                fStack_1d8 = 0.0;
                fStack_1d4 = (float)((uint)fStack_1d4 & 0xffffff00);
                ppppppplStack_210 =
                     (long *******)((lStack_508 - lStack_510 >> 3) * -0x3333333333333333);
                if (ppppppplStack_5d8 != (long *******)(plVar18 + 0xc)) {
                  FUN_10a0ea4a0(ppppppplStack_5d8,pppppplVar17,pppppplVar3,
                                (long)pppppplVar3 - (long)pppppplVar17 >> 2);
                }
                ppppppplStack_1f0 = ppppppplStack_370;
                ppppppplStack_1e8 = (long *******)CONCAT71(ppppppplStack_1e8._1_7_,1);
                ppppppplVar23 = (long *******)(ulong)(uint)fStack_240;
                fStack_1e0 = fStack_240;
                FUN_10aa0db84(&ppppppplStack_538,&ppppppplStack_210);
                if (ppppppplStack_208 != (long *******)0x0) {
                  ppppppplStack_200 = ppppppplStack_208;
                  __ZdlPv();
                }
                ppppppplVar36 = (long *******)0x0;
              }
LAB_10a9e4518:
              ppppppplVar44 = ppppppplStack_248;
              if (ppppppplStack_248 != (long *******)0x0) {
                ppppppplVar16 = ppppppplStack_248 + 1;
                do {
                  pppppplVar17 = *ppppppplVar16;
                  cVar6 = '\x01';
                  bVar31 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
                  if (bVar31) {
                    *ppppppplVar16 = (long ******)((long)pppppplVar17 + -1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (pppppplVar17 == (long ******)0x0) {
                  (*(code *)(*ppppppplStack_248)[2])(ppppppplStack_248);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar44);
                }
              }
              if ((uStack_64c & (uint)ppppppplVar36) == 1) {
LAB_10a9e4600:
                ppppppplVar23 = ppppppplStack_590;
                *(char *)((long)ppppppplStack_590 + 0x1a4) = '\0';
                pppppplVar17 = ppppppplStack_590[0x37];
                ppppppplStack_590[0x37] = (long ******)0x0;
                if (pppppplVar17 != (long ******)0x0) {
                  FUN_10a9fa638();
                }
                *(char *)((long)ppppppplVar23 + 0x1e4) = '\0';
                pppppplVar17 = ppppppplVar23[0x3f];
                ppppppplVar23[0x3f] = (long ******)0x0;
                if (pppppplVar17 != (long ******)0x0) {
                  FUN_10a9fa638();
                }
                uStack_688 = uStack_688 & 0xffffffffffffff00;
                uStack_698 = uStack_658;
                uStack_690 = uStack_5e8;
                plStack_6a0 = plStack_660;
                FUN_10a9e283c(lStack_678,ppppppplVar23,plStack_628,plStack_630,uStack_648,uStack_640
                              ,uStack_638);
                FUN_10a9fa38c(&plStack_578);
                goto LAB_10a9e4660;
              }
            }
            plVar18 = plVar18 + 0x1a;
          } while (plVar18 != plStack_5e0);
        }
      }
      ppppppplVar36 = (long *******)(ulong)(uint)(iStack_61c + iStack_60c);
      FUN_10a9fa38c(&plStack_578);
      uVar39 = uStack_618 + 1;
      lVar33 = *plStack_628;
    } while (uVar39 < (ulong)((plStack_628[1] - lVar33 >> 4) * -0x5555555555555555));
  }
  lVar33 = lStack_678;
  func_0x00010a283ccc(lStack_678,&lStack_510);
  *(long *)(lVar33 + 0x138) = lStack_548;
  *(long *)(lVar33 + 0x130) = lStack_550;
  *(undefined8 *)(lVar33 + 0x140) = uStack_540;
  lStack_550 = 0;
  lStack_548 = 0;
  *(long ********)(lVar33 + 0x150) = ppppppplStack_530;
  *(long ********)(lVar33 + 0x148) = ppppppplStack_538;
  *(undefined8 *)(lVar33 + 0x158) = uStack_528;
  uStack_540 = 0;
  ppppppplStack_538 = (long *******)0x0;
  ppppppplStack_530 = (long *******)0x0;
  uStack_528 = 0;
  *(undefined1 *)(lVar33 + 0x160) = uStack_520;
LAB_10a9e4660:
  ppppppplVar23 = ppppppplStack_560;
  if ((bStack_558 & 1) == 0) {
    *(char *)((long)ppppppplStack_560 + 0x1a4) = '\0';
    pppppplVar17 = ppppppplStack_560[0x37];
    ppppppplStack_560[0x37] = (long ******)0x0;
    if (pppppplVar17 != (long ******)0x0) {
      FUN_10a9fa638();
    }
    *(char *)((long)ppppppplVar23 + 0x1e4) = '\0';
    pppppplVar17 = ppppppplVar23[0x3f];
    ppppppplVar23[0x3f] = (long ******)0x0;
    if (pppppplVar17 != (long ******)0x0) {
      FUN_10a9fa638();
    }
  }
  ppppppplVar23 = ppppppplStack_538;
  ppppppplVar44 = ppppppplStack_530;
  if (ppppppplStack_538 != (long *******)0x0) {
    while (ppppppplVar36 = ppppppplVar44, ppppppplVar36 != ppppppplVar23) {
      if (ppppppplVar36[-7] != (long ******)0x0) {
        ppppppplVar36[-6] = ppppppplVar36[-7];
        __ZdlPv();
      }
      ppppppplVar44 = ppppppplVar36 + -8;
    }
    ppppppplStack_530 = ppppppplVar23;
    __ZdlPv(ppppppplStack_538);
  }
  if (lStack_550 != 0) {
    lStack_548 = lStack_550;
    __ZdlPv();
  }
  plVar18 = &lStack_510;
  FUN_10a283e44();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
    ___stack_chk_fail();
    if ((long)uStack_398 < 0) {
      __ZdlPv(ppppppplStack_3a8);
    }
    if (ppppppplStack_2d8 != (long *******)0x0) {
      ppppppplStack_2d0 = ppppppplStack_2d8;
      __ZdlPv();
    }
    ppppppplVar23 = ppppppplStack_248;
    if (ppppppplStack_248 != (long *******)0x0) {
      ppppppplVar44 = ppppppplStack_248 + 1;
      do {
        pppppplVar17 = *ppppppplVar44;
        cVar6 = '\x01';
        bVar31 = (bool)ExclusiveMonitorPass(ppppppplVar44,0x10);
        if (bVar31) {
          *ppppppplVar44 = (long ******)((long)pppppplVar17 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (pppppplVar17 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_248)[2])(ppppppplStack_248);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar23);
      }
    }
    FUN_10a9fa38c(&plStack_578);
    FUN_10aa0dd1c(&ppppppplStack_560);
    func_0x00010a9f9274(&lStack_550);
    FUN_10a283e44(&lStack_510);
    plVar12 = plVar18;
    __Unwind_Resume();
    ppppppplStack_6b8 = ppppppplVar23;
    pcStack_6a8 = FUN_10a9e4b38;
    lVar33 = plVar12[0x29];
    plStack_6c8 = plVar18;
    ppppppplStack_6c0 = ppppppplVar36;
    puStack_6b0 = &stack0xfffffffffffffff0;
    if (lVar33 != 0) {
      lVar38 = plVar12[0x2a];
      lVar25 = lVar33;
      if (lVar38 != lVar33) {
        do {
          if (*(long *)(lVar38 + -0x38) != 0) {
            *(long *)(lVar38 + -0x30) = *(long *)(lVar38 + -0x38);
            __ZdlPv();
          }
          lVar38 = lVar38 + -0x40;
        } while (lVar38 != lVar33);
        lVar25 = plVar12[0x29];
      }
      plVar12[0x2a] = lVar33;
      __ZdlPv(lVar25);
    }
    if (plVar12[0x26] != 0) {
      plVar12[0x27] = plVar12[0x26];
      __ZdlPv();
    }
    func_0x000107c2826c(plVar12 + 0x21);
    if (*(char *)((long)plVar12 + 0x107) < '\0') {
      __ZdlPv(plVar12[0x1e]);
    }
    if (plVar12[0x1b] != 0) {
      plVar12[0x1c] = plVar12[0x1b];
      __ZdlPv();
    }
    plStack_6c8 = plVar12 + 0x18;
    func_0x00010a1f4bf4(&plStack_6c8);
    if (plVar12[0x15] != 0) {
      plVar12[0x16] = plVar12[0x15];
      __ZdlPv();
    }
    FUN_10a1f4c88(plVar12 + 0x10);
    func_0x00010a1f4cfc(plVar12 + 0xb);
    if (plVar12[8] != 0) {
      plVar12[9] = plVar12[8];
      __ZdlPv();
    }
    func_0x00010a283ee8(plVar12 + 3);
    plStack_6c8 = plVar12;
    func_0x00010a1f4ebc(&plStack_6c8);
    return plVar12;
  }
  return plVar18;
}



/* Entry: 10a9e4b38; end: 10a9e4baf;  */

long FUN_10a9e4b38(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x148);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x150);
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -0x38) != 0) {
          *(long *)(lVar3 + -0x30) = *(long *)(lVar3 + -0x38);
          __ZdlPv();
        }
        lVar3 = lVar3 + -0x40;
      } while (lVar3 != lVar2);
      lVar1 = *(long *)(param_1 + 0x148);
    }
    *(long *)(param_1 + 0x150) = lVar2;
    __ZdlPv(lVar1);
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x130);
    __ZdlPv();
  }
  func_0x000107c2826c(param_1 + 0x108);
  if (*(char *)(param_1 + 0x107) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xf0));
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xd8);
    __ZdlPv();
  }
  func_0x00010a1f4bf4(&stack0xffffffffffffffd8);
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8);
    __ZdlPv();
  }
  FUN_10a1f4c88(param_1 + 0x80);
  func_0x00010a1f4cfc(param_1 + 0x58);
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  func_0x00010a283ee8(param_1 + 0x18);
  func_0x00010a1f4ebc(&stack0xffffffffffffffd8);
  return param_1;
}



/* Entry: 10a9e4bb0; end: 10a9e4daf;  */

long FUN_10a9e4bb0(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uStack_50;
  long *plStack_48;
  
  lVar4 = param_1 + 0x178;
  FUN_10a9f92ec();
  if (lVar4 == 0) {
    return 0;
  }
  plVar12 = (long *)(lVar4 + 0x50);
  if (*plVar12 != 0) {
    return lVar4;
  }
  if (*(char *)(lVar4 + 0x98) != '\x01') {
    return lVar4;
  }
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar3 = *(long **)(lVar4 + 0x90);
  if ((plVar3 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar3, plVar3 != (long *)0x0)) {
    uStack_50 = *(undefined8 *)(lVar4 + 0x88);
  }
  FUN_10a350188(plVar12,&uStack_50);
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar9 = plStack_48 + 1;
    do {
      lVar5 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plVar12 != 0) {
    return lVar4;
  }
  plVar12 = (long *)(param_1 + 0x178);
  FUN_10a9f92ec(plVar12,param_2);
  if (plVar12 == (long *)0x0) {
    return 0;
  }
  uVar7 = *(ulong *)(param_1 + 0x180);
  lVar4 = *plVar12;
  uVar6 = plVar12[1];
  uVar8 = uVar7 - 1;
  if ((uVar7 & uVar8) == 0) {
    uVar6 = uVar8 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar10 * uVar7;
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x178) + uVar6 * 8);
  do {
    plVar9 = plVar3;
    plVar3 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar12);
  if (plVar9 == (long *)(param_1 + 0x188)) {
LAB_10a9e4cf4:
    if (lVar4 == 0) {
LAB_10a9e4d28:
      *(undefined8 *)(*(long *)(param_1 + 0x178) + uVar6 * 8) = 0;
      lVar4 = *plVar12;
      goto LAB_10a9e4d30;
    }
    uVar10 = *(ulong *)(lVar4 + 8);
    if ((uVar7 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar7 <= uVar10) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar10 / uVar7;
        }
        uVar11 = uVar10 - uVar11 * uVar7;
      }
    }
    if (uVar11 != uVar6) goto LAB_10a9e4d28;
  }
  else {
    uVar10 = plVar9[1];
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar11 * uVar7;
    }
    if (uVar10 != uVar6) goto LAB_10a9e4cf4;
LAB_10a9e4d30:
    if (lVar4 == 0) goto LAB_10a9e4d6c;
    uVar10 = *(ulong *)(lVar4 + 8);
  }
  if ((uVar7 & uVar8) == 0) {
    uVar10 = uVar10 & uVar8;
  }
  else if (uVar7 <= uVar10) {
    uVar8 = 0;
    if (uVar7 != 0) {
      uVar8 = uVar10 / uVar7;
    }
    uVar10 = uVar10 - uVar8 * uVar7;
  }
  if (uVar10 != uVar6) {
    *(long **)(*(long *)(param_1 + 0x178) + uVar10 * 8) = plVar9;
    lVar4 = *plVar12;
  }
LAB_10a9e4d6c:
  *plVar9 = lVar4;
  *plVar12 = 0;
  *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + -1;
  func_0x00010a9f9580(plVar12 + 2);
  __ZdlPv(plVar12);
  return 0;
}



/* Entry: 10a9e4db0; end: 10a9e5b03;  */

uint FUN_10a9e4db0(long *param_1,char *param_2,long *param_3,uint *param_4,ulong param_5,
                  uint param_6)

{
  ulong *puVar1;
  ulong uVar2;
  long ******pppppplVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  long ***ppplVar14;
  code *pcVar15;
  bool bVar16;
  int iVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  ulong uVar22;
  long *plVar23;
  long *****ppppplVar24;
  char *pcVar25;
  long lVar26;
  uint uVar27;
  undefined1 *puVar28;
  long ****pppplVar29;
  ulong uVar30;
  uint uVar31;
  long lVar32;
  ulong uVar33;
  undefined8 *puVar34;
  long ******pppppplVar35;
  undefined1 *puVar36;
  long ****pppplVar37;
  long lVar38;
  long lVar39;
  float fVar40;
  int iVar41;
  float fVar42;
  int iVar43;
  ulong uStack_168;
  byte bStack_159;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long ***ppplStack_140;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined7 uStack_130;
  char cStack_129;
  long ***ppplStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  float fStack_f8;
  undefined4 uStack_f4;
  long lStack_e8;
  long *****ppppplStack_e0;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  code *pcStack_c8;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined8 *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar32 = *(long *)(*param_3 + 0x50);
  pppppplVar35 = (long ******)(ulong)*(uint *)(*(long *)(lVar32 + 0x98) + 0x18);
  uVar18 = *(undefined8 *)(*(long *)(*param_3 + 0xd0) + 0x20);
  func_0x000109700ab4(uVar18,pppppplVar35);
  iVar17 = (int)uVar18;
  if (iVar17 == 0) {
    lVar26 = *(long *)(lVar32 + 0x98);
    iVar41 = *(int *)(lVar26 + 0xc0);
    iVar43 = *(int *)(lVar26 + 0xc4);
    if (param_2[0x17] < '\0') {
      if (*(long *)(param_2 + 8) == 1) {
        pcVar25 = *(char **)param_2;
        goto LAB_10a9e4ee4;
      }
LAB_10a9e4ef8:
      uVar33 = CONCAT44((int)((float)*(long *)(lVar26 + 0x38) / 64.0),
                        (int)((float)*(long *)(lVar26 + 0x30) / 64.0));
    }
    else {
      pcVar25 = param_2;
      if (param_2[0x17] != '\x01') goto LAB_10a9e4ef8;
LAB_10a9e4ee4:
      uVar33 = (ulong)*pcVar25;
      FUN_10a9ec418();
      if ((uVar33 & 1) == 0) goto LAB_10a9e4ef8;
      uVar33 = 0;
    }
    fVar42 = (float)iVar41;
    fVar40 = (float)iVar43;
    uStack_168 = uVar33 >> 0x20;
  }
  else {
    lVar19 = 0;
    func_0x0001097d866c(0,0x20028888,0,0,0xffffffff);
    lVar26 = lVar19;
    func_0x000109801070();
    func_0x000109801a90();
    pppplStack_d8 = (long ****)0x0;
    pppplStack_d0 = (long ****)0x0;
    ppppplStack_e0 = (long *****)pppppplVar35;
    func_0x000109801b0c(lVar26,&ppppplStack_e0,1,&uStack_158);
    pppppplVar3 = uStack_158;
    uVar33 = (ulong)(uint)(int)(double)CONCAT44(uStack_148._4_4_,(undefined4)uStack_148);
    uStack_168 = (ulong)(uint)(int)(double)ppplStack_140;
    dVar13 = (double)CONCAT44(uStack_150._4_4_,(uint)uStack_150);
    if (lVar26 != 0) {
      func_0x0001098010d0(lVar26);
    }
    fVar42 = (float)(double)pppppplVar3;
    fVar40 = -(float)dVar13;
    if (lVar19 != 0) {
      func_0x0001097f61ac(lVar19);
    }
  }
  lVar26 = *param_3;
  uVar5 = *(uint *)(lVar26 + 0x74);
  if ((param_5 & 1) == 0) {
    FUN_10a9ed3b8(param_1,param_4,~uVar5 >> 0x1f,CONCAT44(fVar40,fVar42),
                  uVar33 & 0xffffffff | uStack_168 << 0x20);
    FUN_10a350d34(param_2 + 0x18,param_1 + 10);
    lVar32 = param_1[0x10];
    lVar38 = param_1[0xc];
    lVar19 = param_1[0xf];
    lVar26 = param_1[0xe];
    *(long *)(param_2 + 0x30) = param_1[0xd];
    *(long *)(param_2 + 0x28) = lVar38;
    *(long *)(param_2 + 0x40) = lVar19;
    *(long *)(param_2 + 0x38) = lVar26;
    param_2[0x48] = (char)lVar32;
    func_0x00010a9f95d4(param_2 + 0x50,param_1 + 0x11);
    uVar31 = 1;
  }
  else {
    param_6 = param_6 ^ 1;
    if (((param_6 & 1) == 0) && (iVar17 == 0)) {
      uVar30 = *(ulong *)(lVar26 + 0x68);
      if (uVar30 == 0) {
LAB_10a9e5018:
        bVar9 = false;
        uVar30 = 0;
      }
      else {
        if ((char)param_1[0x46] == '\x01') {
          uVar31 = *(byte *)((long)param_4 + 0x39) - 1;
          if (uVar31 < 3) {
            uVar33 = *(ulong *)(&UNK_10e4eb820 + ((ulong)uVar31 & 0xff) * 8);
          }
          else {
            uVar33 = 0xf0000000f;
          }
          uVar31 = *(uint *)(lVar26 + 0x28);
          uVar22 = (ulong)*param_4 + 0x9e3779b9;
          uVar22 = (ulong)param_4[1] + uVar22 * 0x40 + (uVar22 >> 2) + 0x9e3779b9 ^ uVar22;
          FUN_10a206478(uVar22,param_4 + 2);
          uVar30 = uVar30 * 0x40 + 0x9e3779b9 + (uVar30 >> 2) + param_1[0x47] ^ uVar30;
          uVar30 = uVar30 * 0x40 + (uVar30 >> 2) + 0x9e3779bb ^ uVar30;
          uVar30 = (uVar33 & 0xef) + 0x9e3779b9 + uVar30 * 0x40 + (uVar30 >> 2) ^ uVar30;
          uVar30 = (uVar33 >> 0x20) + 0x9e3779b9 + uVar30 * 0x40 + (uVar30 >> 2) ^ uVar30;
          uVar30 = (ulong)uVar31 + 0x9e3779b9 + uVar30 * 0x40 + (uVar30 >> 2) ^ uVar30;
          uVar30 = uVar22 + 0x9e3779b9 + uVar30 * 0x40 + (uVar30 >> 2) ^ uVar30;
          ppplStack_140 = (long ***)0x0;
          uStack_138 = 0;
          uStack_131 = 0;
          uStack_130 = 0;
          cStack_129 = '\0';
          uStack_158 = (long ******)0x0;
          uStack_150._0_4_ = 0;
          uStack_150._4_4_ = 0;
          uStack_148._0_4_ = 0;
          if ((*(byte *)(param_1 + 0x46) & 1) != 0) {
            ppppplStack_e0 = (long *****)0x0;
            uVar33 = 0;
            pppplStack_d8 = (long ****)0x0;
            pppplStack_d0 = (long ****)0x0;
            FUN_10a9dea3c(&uStack_b0,param_1 + 0x46,uVar30);
            uStack_108 = CONCAT17(uStack_a1,uStack_a8);
            uStack_110 = CONCAT17(uStack_a9,uStack_b0);
            uStack_100 = puStack_a0;
            pppppplVar35 = &ppppplStack_e0;
            FUN_10a17496c(pppppplVar35,&uStack_110);
            if ((long)uStack_100 < 0) {
              __ZdlPv(uStack_110);
            }
            pppplVar37 = pppplStack_d0;
            pppppplVar3 = (long ******)ppppplStack_e0;
            if (((ulong)pppppplVar35 & 1) == 0) {
LAB_10a9e5218:
              bVar9 = false;
            }
            else {
              pppplVar29 = pppplStack_d8;
              if (-1 < (long)pppplStack_d0) {
                pppplVar29 = (long ****)((ulong)pppplStack_d0 >> 0x38);
              }
              if (pppplVar29 < (long *)0x20) goto LAB_10a9e5218;
              bVar9 = false;
              pppppplVar35 = (long ******)ppppplStack_e0;
              if (-1 < (long)pppplStack_d0) {
                pppppplVar35 = &ppppplStack_e0;
              }
              if ((*(int *)pppppplVar35 == 0x47534446) && (*(int *)((long)pppppplVar35 + 4) == 2)) {
                bVar9 = false;
                uVar31 = *(uint *)(pppppplVar35 + 1);
                if (-1 < (int)uVar31) {
                  uVar4 = *(uint *)((long)pppppplVar35 + 0xc);
                  if (-1 < (int)uVar4) {
                    uVar10 = *(uint *)(pppppplVar35 + 2);
                    if (-1 < (int)uVar10) {
                      uVar22 = (ulong)uVar31 + (ulong)uVar10 * 2;
                      uVar2 = (ulong)uVar4 + (ulong)uVar10 * 2;
                      if ((uVar2 != 0) &&
                         (auVar11._8_8_ = 0, auVar11._0_8_ = uVar2, auVar12._8_8_ = 0,
                         auVar12._0_8_ = uVar22, SUB168(auVar11 * auVar12,8) != 0))
                      goto LAB_10a9e5218;
                      bVar9 = false;
                      uVar33 = uVar22 * uVar2;
                      if ((uVar33 - *(uint *)((long)pppppplVar35 + 0x1c) != 0) ||
                         (pppplVar29 != (long ****)(uVar33 + 0x20))) goto LAB_10a9e521c;
                      uStack_158 = (long ******)CONCAT44(uVar4,uVar31);
                      uStack_150._4_4_ = (undefined4)*(undefined8 *)((long)pppppplVar35 + 0x14);
                      uStack_148._0_4_ =
                           (undefined4)((ulong)*(undefined8 *)((long)pppppplVar35 + 0x14) >> 0x20);
                      uVar22 = CONCAT17(uStack_131,uStack_138) - (long)ppplStack_140;
                      uStack_150._0_4_ = uVar10;
                      if (uVar33 < uVar22 || uVar33 - uVar22 == 0) {
                        if (uVar33 < uVar22) {
                          uStack_138 = SUB87((long ****)((long)ppplStack_140 + uVar33),0);
                          uStack_131 = (undefined1)((long)ppplStack_140 + uVar33 >> 0x38);
                        }
                        if (uVar33 != 0) goto LAB_10a9e5a28;
                      }
                      else {
                        func_0x000107c27d58(&ppplStack_140,uVar33 - uVar22);
LAB_10a9e5a28:
                        if (-1 < (long)pppplVar37) {
                          pppppplVar3 = &ppppplStack_e0;
                        }
                        _memcpy(ppplStack_140,pppppplVar3 + 4,uVar33);
                      }
                      bVar9 = true;
                    }
                  }
                }
              }
            }
LAB_10a9e521c:
            uVar31 = (uint)uVar33;
            if ((long)pppplStack_d0 < 0) {
              __ZdlPv(ppppplStack_e0);
            }
            if (bVar9) {
              ppppplStack_e0 = (long *****)((ulong)ppppplStack_e0 & 0xffffffffffffff00);
              plVar23 = param_1;
              FUN_10a9ed424(param_1,param_4,~uVar5 >> 0x1f,
                            CONCAT44((undefined4)uStack_148,uStack_150._4_4_),ppplStack_140,
                            (ulong)uStack_158 & 0xffffffff,uStack_158._4_4_,0,&ppppplStack_e0,
                            (uint)uStack_150);
              uVar31 = (uint)(byte)ppppplStack_e0;
              if (((ulong)ppppplStack_e0 & 1) != 0) {
                FUN_10a350d34(param_2 + 0x18,plVar23 + 10);
                lVar26 = plVar23[0x10];
                lVar39 = plVar23[0xc];
                lVar38 = plVar23[0xf];
                lVar19 = plVar23[0xe];
                *(long *)(param_2 + 0x30) = plVar23[0xd];
                *(long *)(param_2 + 0x28) = lVar39;
                *(long *)(param_2 + 0x40) = lVar38;
                *(long *)(param_2 + 0x38) = lVar19;
                param_2[0x48] = (char)lVar26;
                func_0x00010a9f95d4(param_2 + 0x50,plVar23 + 0x11);
              }
            }
            if ((long ****)ppplStack_140 != (long ****)0x0) {
              uStack_138 = SUB87(ppplStack_140,0);
              uStack_131 = (undefined1)((ulong)ppplStack_140 >> 0x38);
              __ZdlPv(ppplStack_140);
            }
            if (bVar9) goto LAB_10a9e59d4;
          }
        }
        else {
          uVar30 = 0;
        }
        bVar9 = true;
      }
      lVar26 = *(long *)(lVar32 + 0x98);
      if ((*(int *)(lVar26 + 0x90) != 0x62697473) && (*(long *)(lVar26 + 8) != 0)) {
        func_0x000109755fe4(*(undefined8 *)(*(long *)(*(long *)(lVar26 + 8) + 0xb0) + 8),lVar26,0);
        lVar26 = *(long *)(lVar32 + 0x98);
      }
      uVar31 = *(uint *)(lVar26 + 0x98);
      uStack_168 = (ulong)uVar31;
      uVar4 = *(uint *)(lVar26 + 0x9c);
      uVar33 = (ulong)uVar4;
      puVar36 = *(undefined1 **)(lVar26 + 0xa8);
      cVar6 = *(char *)(lVar26 + 0xb2);
      bVar16 = cVar6 == '\a';
      cVar8 = cVar6;
      if (bVar16) {
        if (uVar31 * uVar4 == 0) goto LAB_10a9e53a8;
        uVar22 = (ulong)(long)(int)(uVar31 * uVar4 * 4) >> 2;
        puVar20 = puVar36;
        if (uVar22 < 2) {
          uVar22 = 1;
        }
        do {
          uVar7 = *puVar20;
          *puVar20 = puVar20[2];
          puVar20[2] = uVar7;
          uVar22 = uVar22 - 1;
          puVar20 = puVar20 + 4;
        } while (uVar22 != 0);
        cVar8 = *(char *)(lVar26 + 0xb2);
      }
      if (cVar8 == '\x01') {
        FUN_10a9ed628((uint *)(lVar26 + 0x98),param_1 + 0x2c);
        puVar36 = (undefined1 *)param_1[0x2c];
      }
      bStack_159 = 0;
      if (cVar6 == '\a') {
        param_6 = 1;
      }
      if ((param_6 & 1) != 0) goto LAB_10a9e53ac;
      uVar10 = *(byte *)((long)param_4 + 0x39) - 1;
      if (uVar10 < 3) {
        uVar18 = *(undefined8 *)(&UNK_10e4eb820 + ((ulong)uVar10 & 0xff) * 8);
      }
      else {
        uVar18 = 0xf0000000f;
      }
      uVar10 = uVar4;
      if ((int)uVar4 <= (int)uVar31) {
        uVar10 = uVar31;
      }
      iVar17 = 400 - uVar10;
      uVar10 = iVar17 / 2 & (iVar17 - (iVar17 >> 0x1f) >> 0x1f ^ 0xffffffffU);
      uVar27 = (uint)((ulong)uVar18 >> 0x20);
      if (uVar27 <= uVar10) {
        uVar10 = uVar27;
      }
      uVar27 = uVar10;
      if ((uint)uVar18 <= uVar10) {
        uVar27 = (uint)uVar18;
      }
      if (uVar27 < 2) {
        uVar27 = 1;
      }
      if (uVar10 <= uVar27) {
        uVar10 = uVar27;
      }
      plVar23 = param_1;
      func_0x00010a9ece70(param_1,uVar33,uStack_168,puVar36,uVar27,uVar10);
      if ((bVar9) && ((char)param_1[0x46] == '\x01')) {
        lVar32 = (long)(int)(uVar4 + uVar10 * 2) * (long)(int)(uVar31 + uVar10 * 2);
        lVar26 = *plVar23;
        if (lVar32 != 0 && lVar26 != 0) {
          uStack_110 = 0x247534446;
          uStack_108 = CONCAT44(uVar31,uVar4);
          uStack_100 = (undefined8 *)CONCAT44(fVar42,uVar10);
          uStack_f4 = (undefined4)lVar32;
          ppplStack_128 = (long ***)0x0;
          uStack_120 = 0;
          lStack_118 = 0;
          fStack_f8 = fVar40;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                    (&ppplStack_128,lVar32 + 0x20);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppplStack_128,&uStack_110,0x20);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppplStack_128,lVar26,lVar32);
          puVar34 = &uStack_158;
          FUN_10a9dea3c(puVar34,param_1 + 0x46,uVar30);
          uStack_138 = (undefined7)uStack_120;
          uStack_131 = (undefined1)((ulong)uStack_120 >> 0x38);
          ppplStack_140 = ppplStack_128;
          uStack_130 = (undefined7)lStack_118;
          cStack_129 = (char)((ulong)lStack_118 >> 0x38);
          ppplStack_128 = (long ***)0x0;
          uStack_120 = 0;
          lStack_118 = 0;
          FUN_109d1a80c();
          cVar6 = cStack_129;
          ppplVar14 = ppplStack_140;
          iVar17 = uStack_148._4_4_;
          pppppplVar35 = uStack_158;
          puVar34 = (undefined8 *)puVar34[9];
          pppplVar37 = (long ****)puVar34[2];
          pppplStack_d8 = (long ****)0x0;
          pppplStack_d0 = (long ****)0x0;
          if (pppplVar37 == (long ****)0x0) {
            uStack_b0 = (undefined7)CONCAT44(uStack_150._4_4_,(uint)uStack_150);
            uStack_a9 = uStack_150._7_1_;
            uStack_a8 = (undefined7)
                        (CONCAT35(uStack_148._4_3_,CONCAT41((undefined4)uStack_148,uStack_150._7_1_)
                                 ) >> 8);
            uStack_150._0_4_ = 0;
            uStack_150._4_4_ = 0;
            uStack_148._0_4_ = 0;
            uStack_148._4_4_ = 0;
            uStack_158 = (long ******)0x0;
            uStack_c0 = uStack_138;
            uStack_b9 = uStack_131;
            uStack_b8 = uStack_130;
            ppplStack_140 = (long ***)0x0;
            uStack_138 = 0;
            uStack_131 = 0;
            uStack_130 = 0;
            cStack_129 = '\0';
            ppppplVar24 = (long *****)0xe8;
            __Znwm();
            ppppplVar24[2] = (long ****)0x0;
            ppppplVar24[1] = (long ****)0x200000006;
            *(undefined2 *)(ppppplVar24 + 3) = 4;
            ppppplVar24[5] = (long ****)0x0;
            ppppplVar24[4] = (long ****)0x0;
            ppppplVar24[7] = (long ****)0x0;
            ppppplVar24[6] = (long ****)0x0;
            ppppplVar24[9] = (long ****)0x0;
            ppppplVar24[8] = (long ****)0x0;
            ppppplVar24[0xb] = (long ****)0x0;
            ppppplVar24[10] = (long ****)0x0;
            ppppplVar24[0xd] = (long ****)0x0;
            ppppplVar24[0xc] = (long ****)0x0;
            ppppplVar24[0xf] = (long ****)0x0;
            ppppplVar24[0xe] = (long ****)0x0;
            ppppplVar24[0x10] = (long ****)0x0;
            ppppplVar24[0x11] = (long ****)(ppppplVar24 + 3);
            ppppplVar24[0x12] = (long ****)0x0;
            *(undefined2 *)(ppppplVar24 + 0x13) = 0;
            *ppppplVar24 = (long ****)&PTR_DAT_110c376f8;
            ppppplStack_e0 = ppppplVar24 + 0x14;
            *ppppplStack_e0 = (long ****)pppppplVar35;
            *(ulong *)((long)ppppplVar24 + 0xaf) = CONCAT71(uStack_a8,uStack_a9);
            ppppplVar24[0x15] = (long ****)CONCAT17(uStack_a9,uStack_b0);
            *(char *)((long)ppppplVar24 + 0xb7) = (char)((uint)iVar17 >> 0x18);
            ppppplVar24[0x17] = (long ****)ppplVar14;
            ppppplVar24[0x18] = (long ****)CONCAT17(uStack_b9,uStack_c0);
            *(ulong *)((long)ppppplVar24 + 199) = CONCAT71(uStack_b8,uStack_b9);
            *(char *)((long)ppppplVar24 + 0xcf) = cVar6;
            *(undefined1 *)(ppppplVar24 + 0x1b) = 1;
            ppppplVar24[0x1c] = (long ****)0x0;
            pcStack_c8 = FUN_10a9f8ea8;
            pppplStack_d8 = (long ****)ppppplVar24;
            pppplStack_d0 = (long ****)ppppplVar24;
          }
          else {
            lStack_e8 = 0;
            (*(code *)(*pppplVar37)[5])(pppplVar37,0,&lStack_e8);
            cVar6 = cStack_129;
            ppplVar14 = ppplStack_140;
            iVar17 = uStack_148._4_4_;
            pppppplVar35 = uStack_158;
            if (lStack_e8 != 0) goto LAB_10a9e5a4c;
            uStack_b0 = (undefined7)CONCAT44(uStack_150._4_4_,(uint)uStack_150);
            uStack_a9 = uStack_150._7_1_;
            uStack_a8 = (undefined7)
                        (CONCAT35(uStack_148._4_3_,CONCAT41((undefined4)uStack_148,uStack_150._7_1_)
                                 ) >> 8);
            uStack_150._0_4_ = 0;
            uStack_150._4_4_ = 0;
            uStack_148._0_4_ = 0;
            uStack_148._4_4_ = 0;
            uStack_158 = (long ******)0x0;
            uStack_c0 = uStack_138;
            uStack_b9 = uStack_131;
            uStack_b8 = uStack_130;
            ppplStack_140 = (long ***)0x0;
            uStack_138 = 0;
            uStack_131 = 0;
            uStack_130 = 0;
            cStack_129 = '\0';
            ppppplVar24 = (long *****)0xf0;
            __Znwm();
            ppppplVar24[2] = (long ****)0x0;
            ppppplVar24[1] = (long ****)0x200000006;
            *(undefined2 *)(ppppplVar24 + 3) = 4;
            ppppplVar24[5] = (long ****)0x0;
            ppppplVar24[4] = (long ****)0x0;
            ppppplVar24[7] = (long ****)0x0;
            ppppplVar24[6] = (long ****)0x0;
            ppppplVar24[9] = (long ****)0x0;
            ppppplVar24[8] = (long ****)0x0;
            ppppplVar24[0xb] = (long ****)0x0;
            ppppplVar24[10] = (long ****)0x0;
            ppppplVar24[0xd] = (long ****)0x0;
            ppppplVar24[0xc] = (long ****)0x0;
            ppppplVar24[0xf] = (long ****)0x0;
            ppppplVar24[0xe] = (long ****)0x0;
            ppppplVar24[0x10] = (long ****)0x0;
            ppppplVar24[0x11] = (long ****)(ppppplVar24 + 3);
            ppppplVar24[0x12] = (long ****)0x0;
            *(undefined2 *)(ppppplVar24 + 0x13) = 0;
            *ppppplVar24 = (long ****)&PTR_FUN_110c376c0;
            ppppplVar24[0x14] = (long ****)pppppplVar35;
            *(ulong *)((long)ppppplVar24 + 0xaf) = CONCAT71(uStack_a8,uStack_a9);
            ppppplVar24[0x15] = (long ****)CONCAT17(uStack_a9,uStack_b0);
            *(char *)((long)ppppplVar24 + 0xb7) = (char)((uint)iVar17 >> 0x18);
            ppppplVar24[0x17] = (long ****)ppplVar14;
            ppppplVar24[0x18] = (long ****)CONCAT17(uStack_b9,uStack_c0);
            *(ulong *)((long)ppppplVar24 + 199) = CONCAT71(uStack_b8,uStack_b9);
            *(char *)((long)ppppplVar24 + 0xcf) = cVar6;
            *(undefined1 *)(ppppplVar24 + 0x1b) = 1;
            ppppplVar24[0x1c] = (long ****)0x0;
            ppppplVar24[0x1d] = pppplVar37;
            if (pppplStack_d8 != (long ****)0x0) {
              puVar1 = (ulong *)(pppplStack_d8 + 1);
              do {
                uVar30 = *puVar1;
                cVar6 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar9) {
                  *puVar1 = uVar30 - 4;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((uVar30 & 0x1fffffffc) == 4) {
                do {
                  uVar30 = *puVar1;
                  cVar6 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar9) {
                    *puVar1 = uVar30 - 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (uVar30 - 1 == 0) {
                  (**(code **)((long)*pppplStack_d8 + 8))();
                }
              }
            }
            pppplStack_d8 = (long ****)ppppplVar24;
            if (pppplStack_d0 != (long ****)0x0) {
              func_0x0001092b4274(&pppplStack_d0);
            }
            pcStack_c8 = (code *)0x10a9f8e78;
            ppppplStack_e0 = ppppplVar24 + 0x14;
            pppplStack_d0 = (long ****)ppppplVar24;
            __ZNSt13exception_ptrD1Ev(&lStack_e8);
          }
          ppppplVar24 = ppppplStack_e0;
          if ((long *****)ppppplStack_e0[8] != (long *****)0x0) {
            func_0x0001092b4274();
          }
          ppppplVar24[8] = pppplStack_d0;
          pppplStack_d0 = (long ****)0x0;
          uStack_b0 = SUB87(pcStack_c8,0);
          uStack_a9 = (undefined1)((ulong)pcStack_c8 >> 0x38);
          uStack_a8 = SUB87(ppppplStack_e0,0);
          uStack_a1 = (undefined1)((ulong)ppppplStack_e0 >> 0x38);
          puStack_a0 = puVar34;
          (**(code **)*puVar34)(puVar34,&uStack_b0);
          pppplVar37 = pppplStack_d8;
          pppplStack_d8 = (long ****)0x0;
          if ((pppplStack_d0 != (long ****)0x0) &&
             (func_0x0001092b4274(&pppplStack_d0), pppplStack_d8 != (long ****)0x0)) {
            puVar1 = (ulong *)(pppplStack_d8 + 1);
            do {
              uVar30 = *puVar1;
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar9) {
                *puVar1 = uVar30 - 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((uVar30 & 0x1fffffffc) == 4) {
              do {
                uVar30 = *puVar1;
                cVar6 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar9) {
                  *puVar1 = uVar30 - 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (uVar30 - 1 == 0) {
                (**(code **)((long)*pppplStack_d8 + 8))();
              }
            }
          }
          if ((long *****)pppplVar37 != (long *****)0x0) {
            ppppplVar24 = (long *****)(pppplVar37 + 1);
            do {
              pppplVar29 = *ppppplVar24;
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(ppppplVar24,0x10);
              if (bVar9) {
                *ppppplVar24 = (long ****)((long)pppplVar29 + -4);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (((ulong)pppplVar29 & 0x1fffffffc) == 4) {
              do {
                pppplVar29 = *ppppplVar24;
                cVar6 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(ppppplVar24,0x10);
                if (bVar9) {
                  *ppppplVar24 = (long ****)((long)pppplVar29 + -1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((long ****)((long)pppplVar29 + -1) == (long ****)0x0) {
                (*(code *)(*pppplVar37)[1])(pppplVar37);
              }
            }
          }
          if (cStack_129 < '\0') {
            __ZdlPv(ppplStack_140);
          }
          if (uStack_148._4_4_ < 0) {
            __ZdlPv(uStack_158);
          }
          if (lStack_118 < 0) {
            __ZdlPv(ppplStack_128);
          }
        }
      }
      FUN_10a9ed424(param_1,param_4,~uVar5 >> 0x1f,CONCAT44(fVar40,fVar42),*plVar23,uVar33,
                    uStack_168,0,&bStack_159,uVar10);
    }
    else {
      if (iVar17 == 0) goto LAB_10a9e5018;
      uVar31 = (uint)uVar33;
      iVar17 = (int)uStack_168 * uVar31;
      uVar30 = (ulong)(iVar17 * 4);
      lVar32 = param_1[0x2c];
      uVar22 = param_1[0x2d] - lVar32;
      if (uVar30 < uVar22 || uVar30 - uVar22 == 0) {
        if (uVar30 < uVar22) {
          param_1[0x2d] = lVar32 + uVar30;
        }
      }
      else {
        func_0x000107c27d58(param_1 + 0x2c,uVar30 - uVar22);
        lVar32 = param_1[0x2c];
      }
      _bzero(lVar32,uVar30);
      puVar36 = (undefined1 *)param_1[0x2c];
      iVar41 = uVar31 << 2;
      if (0x3fffffe < uVar31) {
        iVar41 = -1;
      }
      puVar20 = puVar36;
      func_0x0001097d8784(puVar36,0,uVar33,uStack_168,iVar41);
      puVar21 = puVar20;
      func_0x000109801070();
      func_0x000109801a90();
      uStack_150 = (double)-fVar42;
      uStack_148 = (double)fVar40;
      uStack_158 = pppppplVar35;
      func_0x000109801b80(puVar21,&uStack_158,1);
      func_0x0001097f6f54(puVar20);
      if (iVar17 != 0) {
        uVar30 = uVar30 >> 2;
        puVar28 = puVar36;
        do {
          uVar7 = *puVar28;
          *puVar28 = puVar28[2];
          puVar28[2] = uVar7;
          puVar28 = puVar28 + 4;
          uVar30 = uVar30 - 1;
        } while (uVar30 != 0);
      }
      if (puVar21 != (undefined1 *)0x0) {
        func_0x0001098010d0(puVar21);
      }
      if (puVar20 != (undefined1 *)0x0) {
        func_0x0001097f61ac(puVar20);
      }
LAB_10a9e53a8:
      bVar16 = true;
LAB_10a9e53ac:
      FUN_10a9ed424(param_1,param_4,~uVar5 >> 0x1f,CONCAT44(fVar40,fVar42),puVar36,uVar33,uStack_168
                    ,bVar16,&bStack_159,0);
    }
    uVar31 = (uint)bStack_159;
    if (bStack_159 == 1) {
      FUN_10a350d34(param_2 + 0x18,param_1 + 10);
      lVar32 = param_1[0x10];
      lVar38 = param_1[0xc];
      lVar19 = param_1[0xf];
      lVar26 = param_1[0xe];
      *(long *)(param_2 + 0x30) = param_1[0xd];
      *(long *)(param_2 + 0x28) = lVar38;
      *(long *)(param_2 + 0x40) = lVar19;
      *(long *)(param_2 + 0x38) = lVar26;
      param_2[0x48] = (char)lVar32;
      func_0x00010a9f95d4(param_2 + 0x50,param_1 + 0x11);
    }
  }
LAB_10a9e59d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return uVar31 & 1;
  }
  ___stack_chk_fail();
LAB_10a9e5a4c:
  func_0x0001092af97c(&lStack_e8);
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10a9e5a58);
  (*pcVar15)();
}



/* Entry: 10a9e5b04; end: 10a9e5bab;  */

undefined8 * FUN_10a9e5b04(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 0x16) == '\x01') && (param_1[0x15] != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a042cd8(param_1 + 0xd);
  if ((*(char *)(param_1 + 0xc) == '\x01') && (param_1[0xb] != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a042cd8(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a9e5bac; end: 10a9e6003;  */

void FUN_10a9e5bac(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined2 param_7,undefined8 param_8,
                  undefined8 param_9,uint param_10,undefined1 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  ulong uVar19;
  float fVar20;
  long lStack_230;
  long lStack_228;
  undefined1 auStack_218 [64];
  undefined1 auStack_1d8 [40];
  long lStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  ulong uVar18;
  
  FUN_10a9e6004(&lStack_230,param_2,param_3,param_4,param_5,param_6,param_7,param_9,param_8,param_9,
                param_10,param_11,param_12,param_13);
  if (lStack_228 != lStack_230) {
    lVar13 = 0;
    uVar14 = 0;
    lVar15 = 4;
    do {
      lVar6 = lStack_230;
      puVar10 = auStack_218;
      FUN_10aa10ddc(puVar10,lStack_230 + lVar15 + -4);
      if (puVar10 == (undefined1 *)0x0) {
        FUN_109ffdddc(&UNK_10f639994);
LAB_10a9e5fd0:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10a9e5fd4);
        (*pcVar9)();
      }
      uVar1 = param_10;
      if (*(uint *)(lVar6 + lVar15) != 0) {
        uVar1 = *(uint *)(lVar6 + lVar15);
      }
      fVar20 = (float)uVar1 / (float)*(int *)(puVar10 + 0xf0);
      if (puVar10[0x80] == '\x01') {
        *(float *)(puVar10 + 0x7c) = fVar20;
        if ((ulong)(lStack_d8 - lStack_e0 >> 3) <= uVar14) goto LAB_10a9e5fd0;
        iVar2 = *(int *)(puVar10 + 0x74);
        fVar16 = *(float *)(puVar10 + 100);
        plVar12 = &lStack_1b0;
        FUN_10aa0fd50(plVar12,*(undefined8 *)(lStack_e0 + lVar13),lStack_e0 + lVar13);
        fVar17 = fVar16 * fVar20;
        fVar16 = ((float)iVar2 - fVar16) * fVar20;
        uVar18 = CONCAT44(fVar16,fVar17);
        uVar19 = plVar12[7];
        plVar12[7] = uVar18 ^ (uVar18 ^ uVar19) &
                              ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < fVar16),
                                        -(uint)((float)uVar19 < fVar17));
      }
      if (puVar10[0xd0] == '\x01') {
        *(float *)(puVar10 + 0xcc) = fVar20;
      }
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 8;
      lVar15 = lVar15 + 0x28;
    } while (uVar14 < (ulong)((lStack_228 - lStack_230 >> 3) * -0x3333333333333333));
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0x3f800000;
  plVar12 = plStack_1a0;
  if (plStack_1a0 != (long *)0x0) {
    do {
      fVar20 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar12 + 0x34));
      uStack_a4 = (undefined4)(long)(*(float *)(plVar12 + 6) * fVar20);
      puVar11 = &uStack_a0;
      FUN_10aa0ffd8(puVar11,(long)(*(float *)(plVar12 + 6) * fVar20),&uStack_a4);
      fVar20 = *(float *)(plVar12 + 7);
      if (*(float *)(plVar12 + 7) <= *(float *)((long)puVar11 + 0x14)) {
        fVar20 = *(float *)((long)puVar11 + 0x14);
      }
      *(float *)((long)puVar11 + 0x14) = fVar20;
      fVar20 = *(float *)((long)plVar12 + 0x3c);
      if (*(float *)((long)plVar12 + 0x3c) <= *(float *)(puVar11 + 3)) {
        fVar20 = *(float *)(puVar11 + 3);
      }
      *(float *)(puVar11 + 3) = fVar20;
      plVar12 = (long *)*plVar12;
      plVar5 = plStack_1a0;
    } while (plVar12 != (long *)0x0);
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      fVar20 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar5 + 0x34));
      uStack_a4 = (undefined4)(long)(*(float *)(plVar5 + 6) * fVar20);
      puVar11 = &uStack_a0;
      FUN_10aa0ffd8(puVar11,(long)(*(float *)(plVar5 + 6) * fVar20),&uStack_a4);
      plVar5[7] = *(undefined8 *)((long)puVar11 + 0x14);
    }
  }
  FUN_10aa10390(&uStack_a0);
  puVar8 = puStack_c0;
  lVar13 = lStack_1b0;
  for (puVar11 = puStack_c8; puVar11 != puVar8; puVar11 = puVar11 + 8) {
    lStack_1b0 = lVar13;
    if (*(char *)((long)puVar11 + 0x3c) == '\x01') {
      fVar16 = *(float *)((long)puVar11 + 0x34);
      fVar20 = *(float *)(puVar11 + 7);
    }
    else {
      fVar20 = 0.0;
      if (*(char *)(puVar11 + 5) == '\x01') {
        FUN_10aa0f39c(lVar13,uStack_1a8,puVar11[4]);
        fVar16 = 0.0;
        if (lVar13 != 0) {
          fVar16 = *(float *)(lVar13 + 0x38);
          fVar20 = *(float *)(lVar13 + 0x3c);
        }
      }
      else {
        fVar16 = 0.0;
      }
    }
    puVar10 = auStack_1d8;
    FUN_10aa0f430(puVar10,*puVar11,puVar11);
    FUN_10aa0f850(puVar10 + 0x18,*(undefined8 *)(puVar10 + 0x20),puVar11[1],puVar11[2],
                  (long)(puVar11[2] - puVar11[1]) >> 2);
    uStack_a0._0_4_ = fVar16 * *(float *)(puVar11 + 6);
    FUN_10aa0f1c4(puVar10 + 0x30,*(undefined8 *)(puVar10 + 0x38),
                  (long)(puVar11[2] - puVar11[1]) >> 2,&uStack_a0);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,fVar20 * *(float *)(puVar11 + 6));
    FUN_10aa0f1c4(puVar10 + 0x48,*(undefined8 *)(puVar10 + 0x50),
                  (long)(puVar11[2] - puVar11[1]) >> 2,&uStack_a0);
    lVar13 = lStack_1b0;
  }
  FUN_10a9e874c(&uStack_100,*(undefined8 *)(param_2 + 0x1a8),*(undefined8 *)(param_2 + 0x1b0));
  FUN_10a9e874c(&uStack_f0,*(undefined8 *)(param_2 + 0x1e8),*(undefined8 *)(param_2 + 0x1f0));
  func_0x00010a20b480(param_1,&lStack_230);
  puVar11 = puStack_c8;
  plVar12 = plStack_f8;
  uVar7 = uStack_100;
  uStack_100 = 0;
  plStack_f8 = (long *)0x0;
  *(long **)(param_1 + 0x138) = plVar12;
  *(undefined8 *)(param_1 + 0x130) = uVar7;
  *(long **)(param_1 + 0x148) = plStack_e8;
  *(undefined8 *)(param_1 + 0x140) = uStack_f0;
  uStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  if (puStack_c8 != (undefined8 *)0x0) {
    for (; puStack_c0 != puVar11; puStack_c0 = puStack_c0 + -8) {
      if (puStack_c0[-7] != 0) {
        puStack_c0[-6] = puStack_c0[-7];
        __ZdlPv();
      }
    }
    puStack_c0 = puVar11;
    __ZdlPv(puStack_c8);
  }
  if (lStack_e0 != 0) {
    lStack_d8 = lStack_e0;
    __ZdlPv();
  }
  plVar12 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar5 = plStack_e8 + 1;
    do {
      lVar13 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar5 = plStack_f8 + 1;
    do {
      lVar13 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  FUN_10a1f4af8(&lStack_230);
  return;
}



/* Entry: 10a9e6004; end: 10a9e874b;  */

/* WARNING: Type propagation algorithm not settling */

long ******
FUN_10a9e6004(undefined8 param_1,long *******param_2,long *******param_3,double param_4,long param_5
             ,long *******param_6,long *******param_7,long *param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  uint *puVar10;
  code *pcVar11;
  int iVar12;
  long *****ppppplVar13;
  long *****ppppplVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  undefined8 *puVar18;
  long ******pppppplVar19;
  long *******ppppppplVar20;
  undefined4 uVar21;
  uint uVar22;
  int iVar23;
  long *****ppppplVar24;
  long *******ppppppplVar25;
  char *******pppppppcVar26;
  int *piVar27;
  long *******ppppppplVar28;
  ulong uVar29;
  undefined8 uVar30;
  long ****pppplVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  long ******pppppplVar35;
  ulong uVar36;
  ulong uVar37;
  undefined1 uVar38;
  bool bVar39;
  byte bVar40;
  uint uVar41;
  uint uVar42;
  long *******ppppppplVar43;
  long *****ppppplVar44;
  long *******ppppppplVar45;
  bool bVar46;
  int iVar47;
  uint uVar48;
  long ******pppppplVar49;
  long *******ppppppplVar50;
  ulong uVar51;
  ulong uVar52;
  undefined4 *puVar53;
  long *******ppppppplVar54;
  uint uVar55;
  float fVar56;
  double dVar57;
  float fVar58;
  long *******ppppppplVar59;
  long *******ppppppplVar60;
  double dVar61;
  int iVar62;
  int iVar63;
  uint in_stack_00000010;
  byte in_stack_00000014;
  int *in_stack_00000018;
  uint in_stack_00000020;
  int iVar64;
  long *******ppppppplStack_700;
  long *******ppppppplStack_6f8;
  long *******ppppppplStack_6f0;
  uint uStack_670;
  uint uStack_66c;
  long *******ppppppplStack_668;
  long *******ppppppplStack_660;
  int iStack_654;
  long *******ppppppplStack_650;
  long *******ppppppplStack_648;
  uint uStack_63c;
  long *******ppppppplStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long ******pppppplStack_618;
  uint uStack_60c;
  long *****ppppplStack_608;
  long *******ppppppplStack_600;
  long *******ppppppplStack_5f8;
  long ******pppppplStack_5f0;
  int *piStack_5e8;
  undefined8 *puStack_5e0;
  long *******ppppppplStack_5d8;
  long *******ppppppplStack_5d0;
  long *******ppppppplStack_5c0;
  byte bStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  long lStack_590;
  undefined8 uStack_588;
  byte bStack_580;
  long ******pppppplStack_570;
  long lStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined4 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined4 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined4 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long *******ppppppplStack_4b0;
  long *******ppppppplStack_4a8;
  long *******ppppppplStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined8 uStack_440;
  long *plStack_438;
  undefined8 uStack_430;
  long *plStack_428;
  ulong uStack_418;
  int iStack_410;
  float fStack_408;
  float fStack_404;
  long ******pppppplStack_400;
  long *******appppppplStack_3f8 [2];
  long *******ppppppplStack_3e8;
  double dStack_3e0;
  ushort uStack_3d2;
  long *******ppppppplStack_3d0;
  long *****ppppplStack_3c8;
  ulong uStack_3c0;
  long lStack_3b8;
  long ******pppppplStack_3b0;
  long ******pppppplStack_3a8;
  long ******pppppplStack_3a0;
  uint uStack_394;
  long ******pppppplStack_390;
  long ******pppppplStack_388;
  long ******pppppplStack_380;
  long ******pppppplStack_378;
  char *******pppppppcStack_370;
  ulong uStack_368;
  byte bStack_359;
  undefined8 uStack_358;
  long *******ppppppplStack_350;
  long *******ppppppplStack_348;
  undefined8 uStack_340;
  long *******ppppppplStack_338;
  undefined4 uStack_330;
  undefined1 uStack_32c;
  undefined1 uStack_32b;
  undefined2 uStack_32a;
  long *******ppppppplStack_328;
  long *******ppppppplStack_320;
  float fStack_318;
  undefined4 uStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e0;
  long *******ppppppplStack_2d8;
  long *******ppppppplStack_2d0;
  double dStack_2c8;
  undefined1 uStack_2c0;
  long *****ppppplStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  byte bStack_2a7;
  undefined8 uStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  long *****ppppplStack_280;
  long *****ppppplStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  byte bStack_267;
  undefined8 uStack_260;
  long *******ppppppplStack_258;
  undefined8 uStack_250;
  float fStack_248;
  int iStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  long *******ppppppplStack_228;
  undefined8 uStack_220;
  byte bStack_218;
  ulong uStack_210;
  long lStack_208;
  byte bStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  long *******ppppppplStack_1e8;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  byte bStack_1c8;
  long *******ppppppplStack_1c0;
  long lStack_1b8;
  byte bStack_1b0;
  undefined8 uStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  undefined1 uStack_164;
  undefined2 uStack_163;
  char cStack_161;
  undefined8 uStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *******ppppppplStack_140;
  long ******pppppplStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  long *******ppppppplStack_100;
  undefined8 uStack_f8;
  long *******ppppppplStack_f0;
  undefined8 uStack_e8;
  byte bStack_e0;
  long *******ppppppplStack_d8;
  long lStack_d0;
  char cStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *******ppppppplVar14;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_540 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  lStack_568 = 0;
  pppppplStack_570 = (long ******)0x0;
  uStack_558 = 0;
  uStack_560 = 0;
  uStack_538 = 0x3f800000;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4f8 = 0x3f800000;
  uStack_4d0 = 0x3f800000;
  puStack_5e0 = &uStack_4c8;
  uStack_460 = 0;
  uStack_468 = 0;
  uStack_450 = 0;
  uStack_458 = 0;
  uStack_4c0 = 0;
  uStack_4c8 = 0;
  ppppppplStack_4b0 = (long *******)0x0;
  uStack_4b8 = 0;
  ppppppplStack_4a0 = (long *******)0x0;
  ppppppplStack_4a8 = (long *******)0x0;
  uStack_490 = 0;
  uStack_498 = 0;
  uStack_480 = 0;
  uStack_488 = 0;
  uStack_470 = 0;
  uStack_478 = 0;
  uStack_448 = 0x3f800000;
  plStack_438 = (long *)0x0;
  uStack_440 = 0;
  plStack_428 = (long *)0x0;
  uStack_430 = 0;
  lStack_598 = 0;
  uStack_5a0 = 0;
  uStack_588 = 0;
  lStack_590 = 0;
  lStack_5a8 = 0;
  lStack_5b0 = 0;
  bStack_580 = in_stack_00000020._2_1_;
  ppppppplVar14 = (long *******)param_7[1];
  ppppppplVar54 = param_6;
  ppppppplVar20 = param_7;
  for (ppppppplVar28 = (long *******)*param_7; ppppppplVar28 != ppppppplVar14;
      ppppppplVar28 = ppppppplVar28 + 6) {
    ppppppplVar17 = ppppppplVar28;
    FUN_10a9ec3d0();
    ppppppplVar20 = ppppppplVar54;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&uStack_480);
    ppppppplVar54 = ppppppplVar17;
  }
  ppppplVar13 = param_6[0x44][0x120];
  FUN_10a597fb4();
  FUN_10a9fa5b8(param_6 + 0x34);
  FUN_10a9fa5b8(param_6 + 0x3c);
  bStack_5b8 = 0;
  pppppplVar19 = *param_7;
  ppppppplStack_5c0 = param_6;
  if (param_7[1] != pppppplVar19) {
    iVar47 = 0;
    uVar51 = 0;
    ppppppplStack_648 = (long *******)&ppppppplStack_198;
    pppppplStack_5f0 = *(long *******)PTR__kCFAllocatorDefault_11034ab78;
    ppppppplStack_638 = (long *******)&ppppppplStack_4b0;
    uVar30 = *(undefined8 *)PTR__kCTTypesetterOptionForcedEmbeddingLevel_11034a150;
    uStack_60c = in_stack_00000020 & 0xff;
    uVar3 = uStack_60c ^ 1;
    ppppppplStack_6f8 = (long *******)0x3fcb600000000000;
    ppppppplStack_700 = (long *******)0x1;
    uStack_628 = 0x10ffff;
    uStack_630 = 0xffffffffffffffff;
    piStack_5e8 = in_stack_00000018;
    uStack_63c = (uint)in_stack_00000014;
    ppppppplStack_5f8 = param_6;
    do {
      uVar37 = param_8[1] - *param_8 >> 2;
      if ((uStack_60c & 1) == 0) {
        if (uVar37 <= uVar51) goto LAB_10a9e8388;
        param_2 = (long *******)(ulong)(uint)(float)in_stack_00000010;
      }
      if (uVar37 <= uVar51) {
LAB_10a9e8388:
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10a9e838c);
        (*pcVar11)();
      }
      ppppppplVar14 = (long *******)(pppppplVar19 + uVar51 * 6);
      ppppppplVar28 = (long *******)(ulong)*(uint *)(*param_8 + uVar51 * 4);
      ppppppplVar20 = ppppppplVar14;
      iVar64 = iVar47;
      FUN_10a9e9ad8(&ppppppplStack_5d8,ppppppplStack_5f8,ppppppplVar14,param_9,ppppplVar13,param_10,
                    param_11);
      FUN_10a9ec3d0();
      iVar12 = (int)ppppppplVar14;
      FUN_10aa0dadc();
      uVar48 = uStack_60c;
      ppppppplStack_668 = ppppppplStack_5d0;
      if (ppppppplStack_5d8 != ppppppplStack_5d0) {
        ppppppplVar14 = ppppppplStack_5d8;
        if (*(char *)(ppppppplStack_5d8 + 0x16) == '\x01') {
          if (0x151 < *(int *)(ppppppplStack_5f8[0x44][0x144] + 3)) {
            ppppppplVar28 = (long *******)ppppppplStack_5d8[0xf];
            ppppppplVar20 = (long *******)ppppppplStack_5d8[0x10];
            if (ppppppplVar28 != ppppppplVar20) {
              ppppppplStack_178 = (long *******)((ulong)ppppppplStack_178 & 0xffffffffffffff00);
              ppppppplStack_648[1] = (long ******)0x0;
              ppppppplStack_648[2] = (long ******)0x0;
              *ppppppplStack_648 = (long ******)0x0;
              *(undefined1 *)(ppppppplStack_648 + 3) = 0;
              fStack_170 = 1.0;
              fStack_16c = 0.0;
              fStack_168 = 0.0;
              uStack_164 = 0;
              ppppppplStack_1a0 =
                   (long *******)((lStack_568 - (long)pppppplStack_570 >> 3) * -0x3333333333333333);
              if (ppppppplStack_648 != ppppppplStack_5d8 + 0xf) {
                FUN_10a0ea4a0(ppppppplStack_648,ppppppplVar28,ppppppplVar20,
                              (long)ppppppplVar20 - (long)ppppppplVar28 >> 2);
                if ((char)ppppppplStack_178 == '\x01') {
                  ppppppplStack_178 = (long *******)((ulong)ppppppplStack_178 & 0xffffffffffffff00);
                }
              }
              fVar56 = 1.0;
              if (uVar48 != 0) {
                if (ppppppplStack_5d0 == ppppppplStack_5d8) goto LAB_10a9e8388;
                fVar56 = *(float *)(ppppppplStack_5d8 + 0x15);
              }
              fStack_170 = fVar56;
              if (ppppppplStack_5d0 == ppppppplStack_5d8) goto LAB_10a9e8388;
              if (((*ppppppplStack_5d8 != (long ******)0x0) &&
                  (ppppplVar24 = (*ppppppplStack_5d8)[10], ppppplVar24 != (long *****)0x0)) &&
                 (pppplVar31 = ppppplVar24[0x14], pppplVar31 != (long ****)0x0)) {
                ppppppplVar20 = (long *******)pppplVar31[7];
                FUN_10a9e9a54(ppppplVar24[5],pppplVar31[6]);
                fStack_16c = fVar56;
                fStack_168 = SUB84(param_2,0);
                uStack_164 = 1;
              }
              FUN_10aa0db84(&lStack_598,&ppppppplStack_1a0);
              if (ppppppplStack_198 != (long *******)0x0) {
                ppppppplStack_190 = ppppppplStack_198;
                __ZdlPv();
              }
            }
          }
        }
        else {
          do {
            pppppplVar19 = pppppplStack_5f0;
            fVar56 = SUB84(param_2,0);
            pppppplVar35 = *ppppppplVar14;
            ppppppplVar54 = (long *******)pppppplVar35[10];
            if (ppppppplVar54 == (long *******)0x0) {
              if (pppppplVar35[0x18] != (long *****)0x0) {
LAB_10a9e64e4:
                ppppppplVar20 = (long *******)ppppppplVar14[4];
                if (-1 < *(char *)((long)ppppppplVar14 + 0x37)) {
                  ppppppplVar20 = ppppppplVar14 + 4;
                }
                pppppplVar35 = pppppplStack_5f0;
                _CFStringCreateWithCString(pppppplStack_5f0,ppppppplVar20,0x8000100);
                pppppplStack_378 = pppppplVar35;
                _CFDictionaryCreateMutable
                          (pppppplVar19,1,PTR__kCFTypeDictionaryKeyCallBacks_11034ac18,
                           PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
                pppppplStack_380 = pppppplVar19;
                _CFDictionarySetValue();
                pppppplVar19 = pppppplStack_5f0;
                pppppplVar49 = pppppplStack_5f0;
                _CFAttributedStringCreate(pppppplStack_5f0,pppppplVar35,pppppplStack_380);
                pppppplVar35 = pppppplVar19;
                pppppplStack_388 = pppppplVar49;
                _CFDictionaryCreateMutable
                          (pppppplVar19,1,PTR__kCFTypeDictionaryKeyCallBacks_11034ac18,
                           PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
                uStack_394 = (uint)(*(int *)(ppppppplVar14 + 0x12) == 1);
                pppppplStack_390 = pppppplVar35;
                _CFNumberCreate(pppppplVar19,9,&uStack_394);
                pppppplStack_3a0 = pppppplVar19;
                _CFDictionarySetValue(pppppplStack_390,uVar30,pppppplVar19);
                _CTTypesetterCreateWithAttributedStringAndOptions(pppppplVar49,pppppplStack_390);
                ppppppplVar20 = (long *******)0x0;
                pppppplStack_3a8 = pppppplVar49;
                _CTTypesetterCreateLine();
                pppppplStack_3b0 = pppppplVar49;
                _CTLineGetGlyphRuns();
                FUN_10a9ef104(&lStack_3b8,pppppplVar49);
                lVar34 = lStack_3b8;
                _CFArrayGetCount();
                if ((lVar34 != 1) && ((bRam000000011330a9e8 & 1) != 0)) {
                  ppppppplVar20 = (long *******)&UNK_10f689b0e;
                  func_0x00010ae06f08(0,1,&UNK_10f689b0e,&UNK_10f68a392,0xdd0,&UNK_10f68a366);
                }
                lVar34 = lStack_3b8;
                _CFArrayGetCount();
                if (lVar34 == 0) {
                  bVar46 = true;
                }
                else {
                  lVar34 = lStack_3b8;
                  _CFArrayGetValueAtIndex(lStack_3b8,0);
                  FUN_10a9ef144(&uStack_3c0,lVar34);
                  uVar37 = uStack_3c0;
                  _CTRunGetGlyphCount();
                  ppppppplVar20 = ppppppplStack_648;
                  _CTFontGetAscent((*ppppppplVar14)[0x18]);
                  ppppppplVar54 = ppppppplVar28;
                  _CTFontGetSize((*ppppppplVar14)[0x18]);
                  iVar23 = (int)(double)ppppppplVar54;
                  if (*(int *)((long)ppppppplVar14 + 0xac) != 0) {
                    iVar23 = *(int *)((long)ppppppplVar14 + 0xac);
                  }
                  ppppppplStack_258 = (long *******)0x0;
                  uStack_250 = (long *******)0x0;
                  fStack_248 = 1.0;
                  iStack_244 = 0;
                  fStack_240 = 0.0;
                  fStack_234 = 0.0;
                  fStack_230 = 0.0;
                  fStack_23c = 0.0;
                  fStack_238 = 0.0;
                  fStack_22c = 0.0;
                  uStack_260._0_6_ = CONCAT24(1,*(undefined4 *)(ppppppplVar14 + 0x12));
                  FUN_10a2086b4(&ppppppplStack_258,ppppppplVar14 + 0x13);
                  fStack_248 = *(float *)(ppppppplVar14 + 0x15);
                  if (uStack_60c == 0) {
                    fStack_248 = 1.0;
                  }
                  dVar57 = (double)(ulong)(uint)fStack_248;
                  ppppplStack_608 = (long *****)CONCAT44(ppppplStack_608._4_4_,iVar23);
                  ppppplVar24 = (*ppppppplVar14)[0x18];
                  iStack_244 = iVar23;
                  if (*(char *)(*ppppppplVar14 + 0x19) == '\x01') {
                    _CTFontGetAscent(ppppplVar24);
                    fStack_240 = (float)dVar57;
                    dVar57 = (double)(ulong)(uint)fStack_240;
                    _CTFontGetDescent(ppppplVar24);
                    fStack_23c = (float)dVar57;
                    dVar57 = (double)(ulong)(uint)fStack_23c;
                  }
                  _CTFontGetUnderlinePosition(ppppplVar24);
                  fStack_238 = (float)dVar57;
                  dVar57 = (double)(ulong)(uint)fStack_238;
                  _CTFontGetUnderlineThickness(ppppplVar24);
                  fVar56 = (float)dVar57;
                  if (fVar56 <= 1.0) {
                    fVar56 = 1.0;
                  }
                  fStack_234 = (float)(int)fVar56;
                  ppppplVar44 = ppppplVar24;
                  _CTFontCopyTable(ppppplVar24,0x4f532f32,0);
                  ppppplStack_3c8 = ppppplVar44;
                  if (ppppplVar44 != (long *****)0x0) {
                    _CFDataGetBytePtr();
                    ppppplVar15 = ppppplStack_3c8;
                    _CFDataGetLength();
                    if ((ppppplVar44 != (long *****)0x0) && (0x1d < (long)ppppplVar15)) {
                      uVar5 = *(ushort *)((long)ppppplVar44 + 0x1a);
                      uVar6 = *(ushort *)((long)ppppplVar44 + 0x1c);
                      _CTFontGetUnitsPerEm();
                      if (((ulong)ppppplVar24 & 0xffff) != 0) {
                        dVar57 = (double)ppppppplVar54 / (double)((uint)ppppplVar24 & 0xffff);
                        fStack_230 = (float)(dVar57 * (double)(int)(short)(uVar6 >> 8 | uVar6 << 8))
                        ;
                        param_3 = (long *******)(double)(int)(short)(uVar5 >> 8 | uVar5 << 8);
                        fStack_22c = (float)(dVar57 * (double)param_3);
                      }
                    }
                  }
                  if ((fStack_230 <= 0.0) || (fStack_22c <= 0.0)) {
                    fStack_230 = (float)((double)(fStack_234 * 0.5) +
                                        (double)ppppppplVar54 * 0.2138671875);
                    fStack_22c = fStack_234;
                    param_3 = ppppppplStack_6f8;
                  }
                  ppppppplStack_3d0 =
                       (long *******)
                       ((lStack_568 - (long)pppppplStack_570 >> 3) * -0x3333333333333333);
                  *(undefined4 *)ppppppplVar20 = (undefined4)uStack_260;
                  *(undefined2 *)((long)ppppppplVar20 + 4) = uStack_260._4_2_;
                  ppppppplStack_188 = uStack_250;
                  ppppppplStack_190 = ppppppplStack_258;
                  if (uStack_250 != (long *******)0x0) {
                    ppppppplVar17 = uStack_250 + 1;
                    do {
                      cVar7 = '\x01';
                      bVar46 = (bool)ExclusiveMonitorPass(ppppppplVar17,0x10);
                      if (bVar46) {
                        *ppppppplVar17 = (long ******)((long)*ppppppplVar17 + 1);
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                  }
                  ppppppplStack_178 = (long *******)CONCAT44(fStack_23c,fStack_240);
                  ppppppplVar17 = (long *******)CONCAT44(iStack_244,fStack_248);
                  param_2 = (long *******)CONCAT44(fStack_234,fStack_238);
                  fStack_168 = fStack_230;
                  uStack_164 = SUB41(fStack_22c,0);
                  uStack_163 = (undefined2)((uint)fStack_22c >> 8);
                  cStack_161 = (char)((uint)fStack_22c >> 0x18);
                  fStack_170 = fStack_238;
                  fStack_16c = fStack_234;
                  ppppppplStack_1a0 = ppppppplStack_3d0;
                  ppppppplStack_180 = ppppppplVar17;
                  FUN_10aa0e078(&uStack_4f0,ppppppplStack_3d0,&ppppppplStack_1a0);
                  ppppppplVar45 = ppppppplStack_188;
                  if (ppppppplStack_188 != (long *******)0x0) {
                    ppppppplVar25 = ppppppplStack_188 + 1;
                    do {
                      pppppplVar19 = *ppppppplVar25;
                      cVar7 = '\x01';
                      bVar46 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                      if (bVar46) {
                        *ppppppplVar25 = (long ******)((long)pppppplVar19 + -1);
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (pppppplVar19 == (long ******)0x0) {
                      (*(code *)(*ppppppplStack_188)[2])(ppppppplStack_188);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar45);
                    }
                  }
                  if (0x151 < *(int *)(ppppppplStack_5f8[0x44][0x144] + 3)) {
                    pppppplVar19 = ppppppplVar14[0xf];
                    pppppplVar35 = ppppppplVar14[0x10];
                    if (pppppplVar19 != pppppplVar35) {
                      ppppppplStack_178 =
                           (long *******)((ulong)ppppppplStack_178 & 0xffffffffffffff00);
                      ppppppplVar20[1] = (long ******)0x0;
                      ppppppplVar20[2] = (long ******)0x0;
                      *ppppppplVar20 = (long ******)0x0;
                      *(undefined1 *)(ppppppplVar20 + 3) = 0;
                      fStack_170 = 1.0;
                      fStack_16c = 0.0;
                      fStack_168 = 0.0;
                      uStack_164 = 0;
                      ppppppplStack_1a0 = ppppppplStack_3d0;
                      if (ppppppplVar20 != ppppppplVar14 + 0xf) {
                        FUN_10a0ea4a0(ppppppplVar20,pppppplVar19,pppppplVar35,
                                      (long)pppppplVar35 - (long)pppppplVar19 >> 2);
                      }
                      ppppppplStack_180 = ppppppplStack_3d0;
                      ppppppplStack_178 = (long *******)CONCAT71(ppppppplStack_178._1_7_,1);
                      ppppppplVar17 = (long *******)(ulong)(uint)fStack_248;
                      fStack_170 = fStack_248;
                      FUN_10aa0db84(&lStack_598,&ppppppplStack_1a0);
                      if (ppppppplStack_198 != (long *******)0x0) {
                        ppppppplStack_190 = ppppppplStack_198;
                        __ZdlPv();
                      }
                    }
                  }
                  FUN_10a9fae88(&uStack_330,uVar37);
                  uVar29 = uStack_3c0;
                  lVar34 = CONCAT26(uStack_32a,CONCAT15(uStack_32b,CONCAT14(uStack_32c,uStack_330)))
                  ;
                  ppppppplStack_600 = ppppppplStack_328;
                  uVar36 = (long)ppppppplStack_328 - lVar34 >> 3;
                  if (0 < (long)uVar37) {
                    uVar52 = 0;
                    lVar33 = lVar34;
                    do {
                      if (uVar36 == uVar52) goto LAB_10a9e8388;
                      _CTRunGetStringIndices(uVar29,uVar52,1,lVar33);
                      uVar52 = uVar52 + 1;
                      lVar33 = lVar33 + 8;
                    } while (uVar37 != uVar52);
                  }
                  ppppppplStack_350 = (long *******)0x0;
                  uStack_358 = (long *******)0x0;
                  ppppppplStack_348 = (long *******)0x0;
                  FUN_10aa0e4b4(&uStack_358,lVar34,ppppppplStack_600,uVar36);
                  ppppppplVar45 = ppppppplStack_350;
                  __ZNSt3__16__sortIRNS_6__lessIllEEPlEEvT0_S5_T_
                            (uStack_358,ppppppplStack_350,&ppppppplStack_1a0);
                  if (0 < (long)uVar37) {
                    bVar46 = false;
                    uVar29 = 0;
                    dVar57 = 0.0;
                    do {
                      uVar36 = uStack_3c0;
                      lVar34 = CONCAT26(uStack_32a,
                                        CONCAT15(uStack_32b,CONCAT14(uStack_32c,uStack_330)));
                      if ((ulong)((long)ppppppplStack_600 - lVar34 >> 3) <= uVar29)
                      goto LAB_10a9e8388;
                      pppppplVar49 = *(long *******)(lVar34 + uVar29 * 8);
                      _CTRunGetGlyphs(uStack_3c0,uVar29,1,&uStack_3d2);
                      _CTRunGetPositions(uVar36,uVar29,1,&ppppppplStack_3e8);
                      _CTRunGetAdvances(uVar36,uVar29,1,appppppplStack_3f8);
                      pppppplVar19 = pppppplStack_378;
                      pppppplVar35 = pppppplStack_378;
                      _CFStringGetLength();
                      ppppppplVar25 = uStack_358;
                      for (ppppppplVar20 = uStack_358; ppppppplVar20 != ppppppplVar45;
                          ppppppplVar20 = ppppppplVar20 + 1) {
                        ppppppplVar25 = ppppppplVar25 + 1;
                        if (*ppppppplVar20 == pppppplVar49) {
                          if ((ppppppplVar20 != ppppppplVar45) && (ppppppplVar45 != ppppppplVar25))
                          {
                            pppppplVar35 = *ppppppplVar25;
                          }
                          break;
                        }
                      }
                      lVar33 = (long)pppppplVar35 - (long)pppppplVar49;
                      pppppplVar35 = pppppplStack_5f0;
                      _CFStringCreateWithSubstring
                                (pppppplStack_5f0,pppppplVar19,pppppplVar49,lVar33);
                      lVar34 = lVar33;
                      pppppplStack_400 = pppppplVar35;
                      _CFStringGetMaximumSizeForEncoding(lVar33,0x8000100);
                      FUN_10a1032d4(&puStack_2f8,lVar34 + 1);
                      _CFStringGetCString(pppppplVar35,puStack_2f8,lVar34 + 1,0x8000100);
                      func_0x000107c2b054(&pppppppcStack_370,puStack_2f8);
                      _CTFontGetBoundingRectsForGlyphs((*ppppppplVar14)[0x18],1,&uStack_3d2,0,1);
                      ppppppplVar25 = appppppplStack_3f8[0];
                      fStack_408 = (float)((double)ppppppplVar17 +
                                          ((double)ppppppplStack_3e8 - dVar57));
                      pppppplVar19 = *ppppppplVar14;
                      ppppppplVar60 = (long *******)(param_4 + (double)param_2 + dStack_3e0);
                      dVar61 = (double)ppppppplVar28 - dStack_3e0;
                      ppppppplVar20 = ppppppplVar60;
                      if (*(char *)(pppppplVar19 + 0x19) == '\0') {
                        ppppppplVar20 = (long *******)((double)param_2 + dVar61);
                      }
                      fStack_404 = (float)(double)ppppppplVar20;
                      ppppppplVar59 = (long *******)(ulong)(uint)fStack_404;
                      uStack_2a0 = CONCAT44(ppppplStack_608._0_4_,(uint)uStack_3d2);
                      lStack_290 = 0;
                      uStack_288 = 0;
                      lStack_298 = 0;
                      ppppppplVar20 = (long *******)pppppplVar19[0x16];
                      uStack_2e0 = ppppppplVar17;
                      ppppppplStack_2d8 = param_2;
                      ppppppplStack_2d0 = param_3;
                      dStack_2c8 = param_4;
                      FUN_10a0ca588(&lStack_298,pppppplVar19[0x15],ppppppplVar20,
                                    (long)ppppppplVar20 - (long)pppppplVar19[0x15] >> 2);
                      ppppplStack_280 = (*ppppppplVar14)[0x18];
                      puVar18 = &uStack_558;
                      FUN_10a20cf48(puVar18,&uStack_2a0);
                      if ((puVar18 == (undefined8 *)0x0) &&
                         (ppppppplVar16 = ppppppplStack_5f8, ppppppplVar20 = ppppppplVar14,
                         ppppppplVar17 = ppppppplVar54,
                         FUN_10a9edb8c(ppppppplStack_5f8,&pppppplStack_570,ppppppplVar14,&uStack_2a0
                                       ,&pppppppcStack_370,uStack_3d2,&uStack_2e0,&fStack_408,
                                       (char)uStack_63c,piStack_5e8,uStack_60c & 0xff,iVar64,
                                       ppppppplStack_3d0), ((ulong)ppppppplVar16 & 1) == 0)) {
                        bVar39 = false;
                      }
                      else {
                        FUN_10aa0dd8c(&pppppplStack_570,&uStack_2a0);
                        FUN_10a17478c(&lStack_5b0,&ppppppplStack_3d0);
                        uStack_418 = 0;
                        ppppppplVar17 = appppppplStack_3f8[0];
                        if ((char)bStack_359 < '\0') {
                          pppppppcVar26 = pppppppcStack_370;
                          if (uStack_368 == 1) goto LAB_10a9e6c84;
                        }
                        else if (bStack_359 == 1) {
                          pppppppcVar26 = (char *******)&pppppppcStack_370;
LAB_10a9e6c84:
                          ppppppplVar59 = (long *******)((double)appppppplStack_3f8[0] * 0.25);
                          ppppppplVar17 = ppppppplVar59;
                          if (*(char *)pppppppcVar26 != ' ') {
                            ppppppplVar17 = appppppplStack_3f8[0];
                          }
                        }
                        iStack_410 = (int)(double)ppppppplVar17;
                        FUN_10aa0df84(&uStack_530,&uStack_418);
                        ppppppplStack_1a0 =
                             (long *******)
                             CONCAT44(ppppppplStack_1a0._4_4_,*(undefined4 *)(ppppppplVar14 + 3));
                        ppppppplVar16 = ppppppplVar14 + 7;
                        func_0x000109de3048(ppppppplVar16,&ppppppplStack_1a0);
                        if (ppppppplVar16 == (long *******)0x0) {
                          FUN_109ffdddc(&UNK_10f639994);
                          goto LAB_10a9e8388;
                        }
                        ppppppplStack_1a0._0_4_ =
                             *(int *)((long)ppppppplVar16 + 0x14) + (int)pppppplVar49;
                        FUN_109febd04(puStack_5e0,&ppppppplStack_1a0);
                        ppppppplStack_1a0 =
                             (long *******)CONCAT44(ppppppplStack_1a0._4_4_,(int)lVar33);
                        FUN_109febd04(&uStack_498,&ppppppplStack_1a0);
                        if (ppppppplStack_4a8 < ppppppplStack_4a0) {
                          ppppppplVar50 = ppppppplStack_4a8 + 3;
                          *ppppppplStack_4a8 = (long ******)0x0;
                          ppppppplStack_4a8[1] = (long ******)0x0;
                          ppppppplStack_4a8[2] = (long ******)0x0;
                        }
                        else {
                          lVar34 = (long)ppppppplStack_4a8 - (long)ppppppplStack_4b0;
                          uVar36 = (lVar34 >> 3) * -0x5555555555555555 + 1;
                          if (0xaaaaaaaaaaaaaaa < uVar36) {
                            FUN_10a3aa8f4();
                            goto LAB_10a9e8388;
                          }
                          lVar33 = (long)ppppppplStack_4a0 - (long)ppppppplStack_4b0 >> 3;
                          uVar52 = lVar33 * 0x5555555555555556;
                          if (uVar52 < uVar36 || uVar52 - uVar36 == 0) {
                            uVar52 = uVar36;
                          }
                          if (0x555555555555554 < (ulong)(lVar33 * -0x5555555555555555)) {
                            uVar52 = 0xaaaaaaaaaaaaaaa;
                          }
                          ppppppplStack_180 = ppppppplStack_638;
                          if (uVar52 == 0) {
                            ppppppplVar16 = (long *******)0x0;
                          }
                          else {
                            ppppppplVar16 = ppppppplStack_638;
                            FUN_10a3aa908();
                          }
                          puVar18 = (undefined8 *)((long)ppppppplVar16 + lVar34);
                          ppppppplVar50 = (long *******)(puVar18 + 3);
                          *puVar18 = 0;
                          puVar18[1] = 0;
                          puVar18[2] = 0;
                          ppppppplVar20 =
                               (long *******)((long)ppppppplStack_4a8 - (long)ppppppplStack_4b0);
                          ppppppplVar43 = (long *******)((long)puVar18 - (long)ppppppplVar20);
                          _memcpy(ppppppplVar43);
                          ppppppplStack_190 = ppppppplStack_4b0;
                          ppppppplStack_188 = ppppppplStack_4a0;
                          ppppppplStack_198 = ppppppplStack_4b0;
                          ppppppplStack_1a0 = ppppppplStack_4b0;
                          ppppppplStack_4b0 = ppppppplVar43;
                          ppppppplStack_4a8 = ppppppplVar50;
                          ppppppplStack_4a0 = ppppppplVar16 + uVar52 * 3;
                          func_0x00010937ce88(&ppppppplStack_1a0);
                        }
                        bVar39 = true;
                        ppppppplStack_4a8 = ppppppplVar50;
                      }
                      param_2 = ppppppplVar59;
                      param_3 = ppppppplVar60;
                      param_4 = dVar61;
                      if (lStack_298 != 0) {
                        lStack_290 = lStack_298;
                        __ZdlPv();
                        param_2 = ppppppplVar59;
                        param_3 = ppppppplVar60;
                        param_4 = dVar61;
                      }
                      if ((char)bStack_359 < '\0') {
                        __ZdlPv(pppppppcStack_370);
                      }
                      if (puStack_2f8 != (undefined8 *)0x0) {
                        puStack_2f0 = puStack_2f8;
                        __ZdlPv();
                      }
                      FUN_10aa10ec8(&pppppplStack_400);
                      if (!bVar39) goto LAB_10a9e6eec;
                      dVar57 = dVar57 + (double)ppppppplVar25;
                      uVar29 = uVar29 + 1;
                      bVar46 = (long)uVar37 <= (long)uVar29;
                    } while (uVar29 != uVar37);
                  }
                  ppppppplVar20 = (long *******)ppppppplVar14[0xd];
                  if ((long *******)ppppppplVar14[0xc] != ppppppplVar20) {
                    ppppppplStack_178 =
                         (long *******)((ulong)ppppppplStack_178 & 0xffffffffffffff00);
                    ppppppplStack_648[1] = (long ******)0x0;
                    ppppppplStack_648[2] = (long ******)0x0;
                    *ppppppplStack_648 = (long ******)0x0;
                    *(undefined1 *)(ppppppplStack_648 + 3) = 0;
                    fStack_170 = 1.0;
                    fStack_16c = 0.0;
                    fStack_168 = 0.0;
                    uStack_164 = 0;
                    ppppppplStack_1a0 =
                         (long *******)
                         ((lStack_568 - (long)pppppplStack_570 >> 3) * -0x3333333333333333);
                    if (ppppppplStack_648 != ppppppplVar14 + 0xc) {
                      FUN_10a0ea4a0();
                    }
                    ppppppplStack_180 = ppppppplStack_3d0;
                    ppppppplStack_178 = (long *******)CONCAT71(ppppppplStack_178._1_7_,1);
                    ppppppplVar17 = (long *******)(ulong)(uint)fStack_248;
                    fStack_170 = fStack_248;
                    FUN_10aa0db84(&lStack_598,&ppppppplStack_1a0);
                    if (ppppppplStack_198 != (long *******)0x0) {
                      ppppppplStack_190 = ppppppplStack_198;
                      __ZdlPv();
                    }
                  }
                  bVar46 = true;
LAB_10a9e6eec:
                  ppppppplVar28 = ppppppplVar17;
                  if (uStack_358 != (long *******)0x0) {
                    __ZdlPv();
                    ppppppplVar28 = ppppppplVar17;
                  }
                  if (CONCAT26(uStack_32a,CONCAT15(uStack_32b,CONCAT14(uStack_32c,uStack_330))) != 0
                     ) {
                    __ZdlPv();
                  }
                  FUN_10aa12154(&ppppplStack_3c8);
                  ppppppplVar54 = uStack_250;
                  if (uStack_250 != (long *******)0x0) {
                    ppppppplVar17 = uStack_250 + 1;
                    do {
                      pppppplVar19 = *ppppppplVar17;
                      cVar7 = '\x01';
                      bVar39 = (bool)ExclusiveMonitorPass(ppppppplVar17,0x10);
                      if (bVar39) {
                        *ppppppplVar17 = (long ******)((long)pppppplVar19 + -1);
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (pppppplVar19 == (long ******)0x0) {
                      (*(code *)(*uStack_250)[2])(uStack_250);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar54);
                    }
                  }
                  FUN_10aa120f4(&uStack_3c0);
                }
                FUN_10a103380(&lStack_3b8);
                FUN_10aa120c4(&pppppplStack_3b0);
                FUN_10aa0e5a0(&pppppplStack_3a8);
                FUN_10aa0e5d0(&pppppplStack_3a0);
                FUN_10aa12064(&pppppplStack_390);
                FUN_10aa12094(&pppppplStack_388);
                FUN_10aa12064(&pppppplStack_380);
                FUN_10aa10ec8(&pppppplStack_378);
                if (!bVar46 && ((in_stack_00000020._1_1_ ^ 1) & 1) == 0) goto LAB_10a9e8164;
              }
            }
            else {
              if (pppppplVar35[0x18] != (long *****)0x0) goto LAB_10a9e64e4;
              iStack_654 = *(int *)((long)ppppppplVar14 + 0xac);
              uVar48 = *(uint *)((long)pppppplVar35 + 0x74);
              ppppppplStack_600 = (long *******)CONCAT44(ppppppplStack_600._4_4_,iStack_654);
              if (-1 < (int)uVar48) {
                iStack_654 = *(int *)(ppppppplVar54[8] + (ulong)uVar48 * 4 + 1);
              }
              uStack_330 = 0xffffffff;
              uStack_32c = 1;
              uStack_32b = 0;
              ppppppplStack_328 = (long *******)0x0;
              ppppppplStack_320 = (long *******)0x0;
              fStack_318 = 1.0;
              uStack_314 = 0;
              fStack_310 = 0.0;
              fStack_304 = 0.0;
              fStack_300 = 0.0;
              fStack_30c = 0.0;
              fStack_308 = 0.0;
              fStack_2fc = 0.0;
              if ((int)uVar48 < 0) {
                FUN_10a9e9a54(ppppppplVar54[5],ppppppplVar54[0x14][6],ppppppplVar54[0x14][7]);
                if (0.0 < fVar56) {
                  fStack_30c = fVar56;
                }
                if (0.0 < SUB84(ppppppplVar28,0)) {
                  fStack_310 = SUB84(ppppppplVar28,0);
                }
              }
              if (*(int *)(ppppppplVar14 + 0x12) == 0) {
                uVar21 = 4;
LAB_10a9e6fac:
                if (*(int *)((long)ppppppplVar14[1] + 4) != 0) {
                  *(undefined4 *)(ppppppplVar14[1] + 7) = uVar21;
                }
              }
              else if (*(int *)(ppppppplVar14 + 0x12) == 1) {
                uVar21 = 5;
                goto LAB_10a9e6fac;
              }
              pppppplVar19 = *ppppppplVar14;
              if (ppppppplVar14[0x17] != ppppppplVar14[0x18]) {
                FUN_10a9e964c(pppppplVar19 + 6);
                pppppplVar19 = *ppppppplVar14;
              }
              ppppplVar24 = pppppplVar19[0x1a];
              pppppplVar19 = ppppppplVar14[1];
              FUN_10a9eea84(ppppppplStack_5f8,pppppplVar19);
              func_0x00010970fc5c(ppppplVar24,pppppplVar19,0,0,0);
              uVar38 = (undefined1)*(undefined4 *)((long)ppppppplVar14[1] + 0x3c);
              uStack_330 = *(undefined4 *)(ppppppplVar14 + 0x12);
              uVar8 = uVar38;
              FUN_10aa0e600();
              uStack_32c = uVar8;
              func_0x00010aa0e730();
              uStack_32b = uVar38;
              FUN_10a2086b4(&ppppppplStack_328,ppppppplVar14 + 0x13);
              fStack_318 = *(float *)(ppppppplVar14 + 0x15);
              if (uStack_60c == 0) {
                fStack_318 = 1.0;
              }
              uStack_314 = ppppppplStack_600._0_4_;
              lVar34 = (long)ppppppplVar54[0x14][5] * (long)*(short *)((long)ppppppplVar54 + 0x94);
              fStack_308 = (float)(lVar34 + (lVar34 >> 0x3f) + 0x8000 >> 0x10) / 64.0;
              lVar34 = (long)ppppppplVar54[0x14][5] * (long)*(short *)((long)ppppppplVar54 + 0x96);
              fVar56 = (float)(lVar34 + (lVar34 >> 0x3f) + 0x8000 >> 0x10) / 64.0;
              if (fVar56 <= 1.0) {
                fVar56 = 1.0;
              }
              fStack_304 = (float)(int)fVar56;
              fStack_300 = 0.0;
              fStack_2fc = 0.0;
              ppppppplVar28 = ppppppplVar54;
              func_0x000109755e44(ppppppplVar54,2);
              if (ppppppplVar28 != (long *******)0x0) {
                lVar34 = (long)ppppppplVar54[0x14][5] * (long)*(short *)((long)ppppppplVar28 + 0x1c)
                ;
                fStack_300 = (float)(lVar34 + (lVar34 >> 0x3f) + 0x8000 >> 0x10) / 64.0;
                lVar34 = (long)ppppppplVar54[0x14][5] * (long)*(short *)((long)ppppppplVar28 + 0x1a)
                ;
                fVar56 = (float)(lVar34 + (lVar34 >> 0x3f) + 0x8000 >> 0x10) / 64.0;
                if (fVar56 <= 1.0) {
                  fVar56 = 1.0;
                }
                fStack_2fc = (float)(int)fVar56;
              }
              if (fStack_300 <= 0.0) {
                fVar56 = (float)NEON_ucvtf((uint)*(ushort *)((long)ppppppplVar54[0x14] + 0x1a));
                param_3 = (long *******)(ulong)(uint)(fStack_304 * 0.5);
                param_4 = 5.16867352465494e-315;
                fStack_300 = fStack_304 * 0.5 + fVar56 * 0.21386719;
                fStack_2fc = fStack_304;
              }
              appppppplStack_3f8[0] =
                   (long *******)((lStack_568 - (long)pppppplStack_570 >> 3) * -0x3333333333333333);
              *(undefined4 *)ppppppplStack_648 = uStack_330;
              *(ushort *)((long)ppppppplStack_648 + 4) = CONCAT11(uStack_32b,uStack_32c);
              ppppppplStack_188 = ppppppplStack_320;
              ppppppplStack_190 = ppppppplStack_328;
              if (ppppppplStack_320 != (long *******)0x0) {
                ppppppplVar28 = ppppppplStack_320 + 1;
                do {
                  cVar7 = '\x01';
                  bVar46 = (bool)ExclusiveMonitorPass(ppppppplVar28,0x10);
                  if (bVar46) {
                    *ppppppplVar28 = (long ******)((long)*ppppppplVar28 + 1);
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              ppppppplStack_178 = (long *******)CONCAT44(fStack_30c,fStack_310);
              ppppppplVar28 = (long *******)CONCAT44(uStack_314,fStack_318);
              param_2 = (long *******)CONCAT44(fStack_304,fStack_308);
              fStack_168 = fStack_300;
              uStack_164 = SUB41(fStack_2fc,0);
              uStack_163 = (undefined2)((uint)fStack_2fc >> 8);
              cStack_161 = (char)((uint)fStack_2fc >> 0x18);
              fStack_170 = fStack_308;
              fStack_16c = fStack_304;
              ppppppplStack_1a0 = appppppplStack_3f8[0];
              ppppppplStack_180 = ppppppplVar28;
              FUN_10aa0e078(&uStack_4f0,appppppplStack_3f8[0],&ppppppplStack_1a0);
              ppppppplVar20 = ppppppplStack_188;
              if (ppppppplStack_188 != (long *******)0x0) {
                ppppppplVar17 = ppppppplStack_188 + 1;
                do {
                  pppppplVar19 = *ppppppplVar17;
                  cVar7 = '\x01';
                  bVar46 = (bool)ExclusiveMonitorPass(ppppppplVar17,0x10);
                  if (bVar46) {
                    *ppppppplVar17 = (long ******)((long)pppppplVar19 + -1);
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (pppppplVar19 == (long ******)0x0) {
                  (*(code *)(*ppppppplStack_188)[2])(ppppppplStack_188);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar20);
                }
              }
              if ((0x151 < *(int *)(ppppppplStack_5f8[0x44][0x144] + 3)) &&
                 (ppppppplVar14[0xf] != ppppppplVar14[0x10])) {
                ppppppplStack_178 = (long *******)((ulong)ppppppplStack_178 & 0xffffffffffffff00);
                ppppppplStack_648[1] = (long ******)0x0;
                ppppppplStack_648[2] = (long ******)0x0;
                *ppppppplStack_648 = (long ******)0x0;
                *(undefined1 *)(ppppppplStack_648 + 3) = 0;
                fStack_170 = 1.0;
                fStack_16c = 0.0;
                fStack_168 = 0.0;
                uStack_164 = 0;
                ppppppplStack_1a0 = appppppplStack_3f8[0];
                if (ppppppplStack_648 != ppppppplVar14 + 0xf) {
                  FUN_10a0ea4a0();
                }
                ppppppplStack_180 = appppppplStack_3f8[0];
                ppppppplStack_178 = (long *******)CONCAT71(ppppppplStack_178._1_7_,1);
                ppppppplVar28 = (long *******)(ulong)(uint)fStack_318;
                fStack_170 = fStack_318;
                FUN_10aa0db84(&lStack_598,&ppppppplStack_1a0);
                if (ppppppplStack_198 != (long *******)0x0) {
                  ppppppplStack_190 = ppppppplStack_198;
                  __ZdlPv();
                }
              }
              pppppplVar19 = ppppppplVar14[1];
              uStack_418 = CONCAT44(uStack_418._4_4_,*(undefined4 *)(pppppplVar19 + 0xc));
              ppppplStack_608 = pppppplVar19[0xe];
              func_0x0001096f6f94(pppppplVar19,&uStack_418);
              pppppplStack_618 = pppppplVar19;
              if ((int)uStack_418 != 0) {
                uVar37 = 0;
                uStack_66c = 0x100002;
                if (0x18 < iStack_654 - 1U) {
                  uStack_66c = 0x100000;
                }
                uStack_670 = uStack_66c | 0x400000;
                ppppppplStack_660 = ppppppplVar54;
                do {
                  puVar53 = (undefined4 *)((long)ppppplStack_608 + uVar37 * 0x14);
                  uStack_358 = (long *******)CONCAT44(ppppppplStack_600._0_4_,*puVar53);
                  ppppppplStack_348 = (long *******)0x0;
                  uStack_340 = 0;
                  ppppppplStack_350 = (long *******)0x0;
                  ppppplVar24 = (*ppppppplVar14)[0x15];
                  ppppplVar44 = (*ppppppplVar14)[0x16];
                  FUN_10a0ca588(&ppppppplStack_350,ppppplVar24,ppppplVar44,
                                (long)ppppplVar44 - (long)ppppplVar24 >> 2);
                  ppppppplStack_338 = ppppppplVar54;
                  FUN_10a9df360(&pppppppcStack_370,ppppppplVar14 + 4,
                                *(undefined4 *)(ppppppplVar14[1] + 0xc),ppppppplVar14[1][0xe],uVar37
                                ,*(undefined4 *)(ppppppplVar14 + 3));
                  puVar18 = &uStack_558;
                  FUN_10a20cf48(puVar18,&uStack_358);
                  bVar40 = bStack_580;
                  if (puVar18 == (undefined8 *)0x0) {
                    ppppppplStack_3e8 = appppppplStack_3f8[0];
                    ppppplVar24 = (*ppppppplVar14)[10];
                    ppppppplStack_650 = appppppplStack_3f8[0];
                    if ((char)bStack_359 < '\0') {
                      pppppppcVar26 = pppppppcStack_370;
                      if (uStack_368 < 2) goto LAB_10a9e73b8;
LAB_10a9e73ac:
                      uVar48 = 1;
                    }
                    else {
                      if (1 < bStack_359) goto LAB_10a9e73ac;
                      pppppppcVar26 = (char *******)&pppppppcStack_370;
LAB_10a9e73b8:
                      uVar48 = (uint)*(char *)pppppppcVar26;
                      FUN_10a9ec418();
                      uVar48 = uVar48 ^ 1;
                    }
                    uVar41 = (uint)uStack_220;
                    fStack_238 = 0.0;
                    fStack_234 = 0.0;
                    fStack_240 = 0.0;
                    fStack_23c = 0.0;
                    ppppppplStack_228 = (long *******)0x0;
                    fStack_230 = 0.0;
                    fStack_22c = 0.0;
                    ppppppplStack_258 = (long *******)0x0;
                    uStack_260 = (long *******)0x0;
                    fStack_248 = 0.0;
                    iStack_244 = 0;
                    uStack_250 = (long *******)0x0;
                    uStack_220 = (long ******)CONCAT44(0x3f800000,uVar41 & 0xffffff00);
                    bStack_218 = 0;
                    uStack_210 = uStack_210 & 0xffffffffffffff00;
                    bStack_200 = 0;
                    plStack_1f0 = (long *)0x0;
                    uStack_1f8 = 0;
                    uStack_1e0 = 0;
                    ppppppplStack_1e8 = (long *******)0x0;
                    uStack_1d7 = 0;
                    uStack_1d0 = uStack_1d0 & 0xffffff00;
                    uStack_1df = 0;
                    uStack_1d8 = 0;
                    uStack_1cc = 0x3f800000;
                    bStack_1c8 = 0;
                    ppppppplStack_1c0 =
                         (long *******)((ulong)ppppppplStack_1c0 & 0xffffffffffffff00);
                    bStack_1b0 = 0;
                    uStack_1a8 = 0;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                              (&uStack_260,&pppppppcStack_370);
                    iVar23 = iStack_654;
                    uVar48 = uStack_63c & uVar48;
                    uStack_1a8 = CONCAT44(uStack_1a8._4_4_,
                                          (uint)*(ushort *)((long)ppppplVar24[0x14] + 0x1a));
                    ppppppplVar28 = (long *******)(ulong)(uint)piStack_5e8[1];
                    uVar41 = 0;
                    if (0.0 < (float)piStack_5e8[1] && *piStack_5e8 != 0) {
                      uVar41 = uVar48;
                    }
                    uStack_2a0 = CONCAT44(iStack_654,*puVar53);
                    lStack_290 = 0;
                    uStack_288 = 0;
                    lStack_298 = 0;
                    ppppplVar44 = (*ppppppplVar14)[0x15];
                    ppppplVar15 = (*ppppppplVar14)[0x16];
                    FUN_10a0ca588(&lStack_298,ppppplVar44,ppppplVar15,
                                  (long)ppppplVar15 - (long)ppppplVar44 >> 2);
                    ppppplStack_280 = (long *****)CONCAT71(ppppplStack_280._1_7_,(char)uVar48);
                    uStack_270 = 0;
                    uVar8 = (undefined1)uStack_60c;
                    bStack_267 = 0;
                    uStack_2e0 = (long *******)CONCAT44(iVar23,*puVar53);
                    ppppppplStack_2d0 = (long *******)0x0;
                    dStack_2c8 = 0.0;
                    ppppppplStack_2d8 = (long *******)0x0;
                    ppppplVar44 = (*ppppppplVar14)[0x15];
                    ppppplVar15 = (*ppppppplVar14)[0x16];
                    ppppplStack_278 = ppppplVar24;
                    uStack_268 = uVar8;
                    FUN_10a0ca588(&ppppppplStack_2d8,ppppplVar44,ppppplVar15,
                                  (long)ppppplVar15 - (long)ppppplVar44 >> 2);
                    uStack_2b0 = *(undefined8 *)piStack_5e8;
                    bStack_267 = bVar40;
                    bStack_2a7 = bVar40;
                    ppppppplVar54 = ppppppplStack_5f8;
                    uStack_2c0 = (char)uVar48;
                    ppppplStack_2b8 = ppppplVar24;
                    uStack_2a8 = uVar8;
                    FUN_10a9e4bb0(ppppppplStack_5f8,&uStack_2a0);
                    if (ppppppplVar54 != (long *******)0x0) {
                      FUN_10a350d34(&fStack_248,ppppppplVar54 + 10);
                      ppppppplVar28 = (long *******)ppppppplVar54[0xc];
                      uStack_220 = ppppppplVar54[0xf];
                      param_2 = (long *******)ppppppplVar54[0xe];
                      fStack_230 = SUB84(ppppppplVar54[0xd],0);
                      fStack_22c = (float)((ulong)ppppppplVar54[0xd] >> 0x20);
                      fStack_238 = SUB84(ppppppplVar28,0);
                      fStack_234 = (float)((ulong)ppppppplVar28 >> 0x20);
                      bStack_218 = *(byte *)(ppppppplVar54 + 0x10);
                      ppppppplStack_228 = param_2;
                      func_0x00010a9f95d4(&uStack_210,ppppppplVar54 + 0x11);
                    }
                    if (uVar41 == 0) {
LAB_10a9e7568:
                      uVar41 = 0;
                      uVar55 = 1;
                      if (ppppppplVar54 == (long *******)0x0) goto LAB_10a9e7578;
LAB_10a9e7574:
                      if (uVar41 != 0) goto LAB_10a9e7578;
LAB_10a9e786c:
                      if (((uVar55 | (byte)uStack_220) & 1) == 0) {
                        FUN_10a350d34(&uStack_1f8,&fStack_248);
                        ppppppplStack_1e8 = (long *******)CONCAT44(fStack_234,fStack_238);
                        uStack_1e0 = SUB41(fStack_230,0);
                        uStack_1df = (undefined7)(CONCAT44(fStack_22c,fStack_230) >> 8);
                        uStack_1d0 = (uint)uStack_220;
                        uStack_1cc = (undefined4)((ulong)uStack_220 >> 0x20);
                        uStack_1d8 = SUB81(ppppppplStack_228,0);
                        uStack_1d7 = (undefined7)((ulong)ppppppplStack_228 >> 8);
                        bStack_1c8 = bStack_218;
                        func_0x00010a9f95d4(&ppppppplStack_1c0,&uStack_210);
                        if (*piStack_5e8 == 2) {
                          fVar56 = (float)NEON_ucvtf((uint)*(ushort *)(ppppplVar24[0x14] + 3));
                          fVar56 = (float)piStack_5e8[1] * fVar56;
                        }
                        else {
                          fVar56 = 0.0;
                          if (*piStack_5e8 == 1) {
                            fVar56 = (float)piStack_5e8[1];
                          }
                        }
                        uStack_1a8 = CONCAT44(fVar56 / 30.0,(undefined4)uStack_1a8);
                      }
                      if ((bStack_218 & 1) == 0) {
                        puVar18 = &uStack_4f0;
                        FUN_10aa0fd50(puVar18,ppppppplStack_650,&ppppppplStack_3e8);
                        fVar56 = fStack_234;
                        if (*(float *)(puVar18 + 7) < fStack_234) {
                          *(float *)(puVar18 + 7) = fStack_234;
                        }
                        if (CONCAT44(iStack_244,fStack_248) != 0) {
                          lVar34 = *(long *)(CONCAT44(iStack_244,fStack_248) + 0x18);
                          param_3 = (long *******)(ulong)(uint)fStack_22c;
                          param_4 = 5.30498947741318e-315;
                          fVar56 = (float)(*(int *)(lVar34 + 0xc) - *(int *)(lVar34 + 4)) -
                                   (fVar56 + fStack_22c * 2.0);
                          if (*(float *)((long)puVar18 + 0x3c) < fVar56) {
                            *(float *)((long)puVar18 + 0x3c) = fVar56;
                          }
                        }
                      }
                      ppppppplStack_1a0 = uStack_358;
                      ppppppplStack_648[1] = (long ******)0x0;
                      ppppppplStack_648[2] = (long ******)0x0;
                      *ppppppplStack_648 = (long ******)0x0;
                      FUN_10a0ca588();
                      ppppppplVar20 = ppppppplStack_1c0;
                      ppppppplVar54 = ppppppplStack_660;
                      ppppppplStack_180 = ppppppplStack_338;
                      fStack_170 = SUB84(ppppppplStack_258,0);
                      fStack_16c = (float)((ulong)ppppppplStack_258 >> 0x20);
                      ppppppplStack_178 = uStack_260;
                      fStack_168 = SUB84(uStack_250,0);
                      uStack_164 = (undefined1)((ulong)uStack_250 >> 0x20);
                      uStack_163 = (undefined2)((ulong)uStack_250 >> 0x28);
                      cStack_161 = (char)((ulong)uStack_250 >> 0x38);
                      ppppppplStack_258 = (long *******)0x0;
                      uStack_260 = (long *******)0x0;
                      uStack_250 = (long *******)0x0;
                      plStack_158 = (long *)CONCAT44(fStack_23c,fStack_240);
                      uStack_160 = CONCAT44(iStack_244,fStack_248);
                      fStack_248 = 0.0;
                      iStack_244 = 0;
                      fStack_240 = 0.0;
                      fStack_23c = 0.0;
                      uStack_148 = CONCAT44(fStack_22c,fStack_230);
                      uStack_150 = CONCAT44(fStack_234,fStack_238);
                      pppppplStack_138 = uStack_220;
                      ppppppplStack_140 = ppppppplStack_228;
                      uStack_130 = CONCAT71(uStack_130._1_7_,bStack_218);
                      uStack_128 = uStack_128 & 0xffffffffffffff00;
                      uVar29 = uStack_118 >> 8;
                      uStack_118 = uStack_118 & 0xffffffffffffff00;
                      if ((bStack_200 & 1) != 0) {
                        lStack_120 = lStack_208;
                        uStack_128 = uStack_210;
                        uStack_210 = 0;
                        lStack_208 = 0;
                        uStack_118 = CONCAT71((int7)uVar29,1);
                      }
                      plStack_108 = plStack_1f0;
                      uStack_110 = uStack_1f8;
                      uStack_1f8 = 0;
                      plStack_1f0 = (long *)0x0;
                      uStack_f8 = CONCAT71(uStack_1df,uStack_1e0);
                      uStack_e8 = CONCAT44(uStack_1cc,uStack_1d0);
                      param_2 = (long *******)CONCAT71(uStack_1d7,uStack_1d8);
                      ppppppplStack_100 = ppppppplStack_1e8;
                      bStack_e0 = bStack_1c8;
                      ppppppplStack_d8 =
                           (long *******)((ulong)ppppppplStack_d8 & 0xffffffffffffff00);
                      cStack_c8 = (bStack_1b0 & 1) != 0;
                      ppppppplVar28 = ppppppplStack_1e8;
                      if ((bool)cStack_c8) {
                        lStack_d0 = lStack_1b8;
                        ppppppplStack_d8 = ppppppplStack_1c0;
                        ppppppplStack_1c0 = (long *******)0x0;
                        lStack_1b8 = 0;
                        ppppppplVar28 = ppppppplVar20;
                      }
                      uStack_c0 = uStack_1a8;
                      ppppppplVar20 = (long *******)&ppppppplStack_1a0;
                      ppppppplStack_f0 = param_2;
                      FUN_10aa106f0(&uStack_558,&ppppppplStack_1a0);
                      if ((cStack_c8 == '\x01') && (lStack_d0 != 0)) {
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                      }
                      plVar2 = plStack_108;
                      if (plStack_108 != (long *)0x0) {
                        plVar1 = plStack_108 + 1;
                        do {
                          lVar34 = *plVar1;
                          cVar7 = '\x01';
                          bVar46 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar46) {
                            *plVar1 = lVar34 + -1;
                            cVar7 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar7 != '\0');
                        if (lVar34 == 0) {
                          (**(code **)(*plStack_108 + 0x10))(plStack_108);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
                        }
                      }
                      if (((char)uStack_118 == '\x01') && (lStack_120 != 0)) {
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                      }
                      plVar2 = plStack_158;
                      if (plStack_158 != (long *)0x0) {
                        plVar1 = plStack_158 + 1;
                        do {
                          lVar34 = *plVar1;
                          cVar7 = '\x01';
                          bVar46 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar46) {
                            *plVar1 = lVar34 + -1;
                            cVar7 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar7 != '\0');
                        if (lVar34 == 0) {
                          (**(code **)(*plStack_158 + 0x10))(plStack_158);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
                        }
                      }
                      if (cStack_161 < '\0') {
                        __ZdlPv(ppppppplStack_178);
                      }
                      if (ppppppplStack_198 != (long *******)0x0) {
                        ppppppplStack_190 = ppppppplStack_198;
                        __ZdlPv();
                      }
                      bVar46 = true;
                    }
                    else {
                      ppppppplVar20 = ppppppplStack_5f8;
                      FUN_10a9e4bb0(ppppppplStack_5f8,&uStack_2e0);
                      if (ppppppplVar20 != (long *******)0x0) {
                        FUN_10a350d34(&uStack_1f8,ppppppplVar20 + 10);
                        bStack_1c8 = *(byte *)(ppppppplVar20 + 0x10);
                        param_2 = (long *******)ppppppplVar20[0xc];
                        ppppppplVar28 = (long *******)ppppppplVar20[0xe];
                        uStack_1e0 = SUB81(ppppppplVar20[0xd],0);
                        uStack_1df = (undefined7)((ulong)ppppppplVar20[0xd] >> 8);
                        uStack_1d0 = (uint)ppppppplVar20[0xf];
                        uStack_1cc = (undefined4)((ulong)ppppppplVar20[0xf] >> 0x20);
                        uStack_1d8 = SUB81(ppppppplVar28,0);
                        uStack_1d7 = (undefined7)((ulong)ppppppplVar28 >> 8);
                        ppppppplStack_1e8 = param_2;
                        func_0x00010a9f95d4(&ppppppplStack_1c0,ppppppplVar20 + 0x11);
                        goto LAB_10a9e7568;
                      }
                      ppppppplVar28 = (long *******)(ulong)(uint)piStack_5e8[1];
                      param_2 = (long *******)0x3e124925;
                      uVar41 = uVar3;
                      if (0.14285715 <= (float)piStack_5e8[1]) {
                        uVar41 = 1;
                      }
                      uVar55 = uVar41;
                      if (ppppppplVar54 != (long *******)0x0) goto LAB_10a9e7574;
LAB_10a9e7578:
                      puVar10 = &uStack_66c;
                      if (uVar48 == 0) {
                        puVar10 = &uStack_670;
                      }
                      ppppplVar44 = ppppplVar24;
                      func_0x000109752c30(ppppplVar24,*puVar53,
                                          (*(uint *)(ppppplVar24 + 2) & 1) << 3 | *puVar10);
                      if ((int)ppppplVar44 != 0) {
                        __ZNSt3__19to_stringEi(&puStack_2f8);
                        FUN_109feb280(&ppppppplStack_1a0,&UNK_10f6899f7,&puStack_2f8);
                        FUN_10a0029c0(&ppppppplStack_1a0);
                        goto LAB_10a9e8388;
                      }
                      if ((uVar41 == 0) || (*(int *)(ppppplVar24[0x13] + 0x12) != 0x6f75746c)) {
LAB_10a9e7848:
                        if ((ppppppplVar54 != (long *******)0x0) ||
                           (ppppppplVar54 = ppppppplStack_5f8, ppppppplVar20 = ppppppplVar14,
                           FUN_10a9e4db0(ppppppplStack_5f8,&uStack_260,ppppppplVar14,&uStack_2a0,
                                         uVar48,uStack_60c), (int)ppppppplVar54 != 0))
                        goto LAB_10a9e786c;
                      }
                      else {
                        fVar56 = (float)piStack_5e8[1];
                        ppppppplVar28 = (long *******)(ulong)(uint)fVar56;
                        ppppplVar44 = (*ppppppplVar14)[10];
                        if (*piStack_5e8 == 2) {
                          fVar58 = (float)NEON_ucvtf((uint)*(ushort *)(ppppplVar44[0x14] + 3));
                          param_2 = (long *******)(ulong)(uint)fVar58;
                          fVar58 = fVar56 * fVar58;
                        }
                        else {
                          fVar58 = 0.0;
                          if (*piStack_5e8 == 1) {
                            fVar58 = fVar56;
                          }
                        }
                        func_0x000109759ecc(ppppppplStack_5f8[0x45],&ppppppplStack_1a0);
                        ppppppplVar20 = ppppppplStack_1a0;
                        if (ppppppplStack_1a0 != (long *******)0x0) {
                          *(undefined8 *)((long)ppppppplStack_1a0 + 0x54) = 1;
                          ppppppplVar20[0xc] = (long ******)0x10000;
                          ppppppplVar20[0xd] = (long ******)(long)((float)(int)fVar58 * 64.0);
                          *(undefined4 *)((long)ppppppplVar20 + 0x5c) = 0;
                          *(undefined4 *)(ppppppplVar20 + 0xe) = 0;
                          *(undefined4 *)((long)ppppppplVar20 + 0x8c) = 0xffffffff;
                          *(undefined1 *)(ppppppplVar20 + 0x13) = 0;
                          *(undefined4 *)(ppppppplVar20 + 0x14) = 0;
                          *(undefined4 *)((long)ppppppplVar20 + 0xbc) = 0xffffffff;
                          *(undefined1 *)(ppppppplVar20 + 0x19) = 0;
                          ppppppplVar28 = ppppppplStack_700;
                        }
                        func_0x000109759698(ppppplVar44[0x13],&puStack_2f8);
                        func_0x00010975c2c0(&puStack_2f8,ppppppplStack_1a0,0,1);
                        func_0x00010975978c(&puStack_2f8,0,0,1);
                        puVar18 = puStack_2f8;
                        ppppppplStack_6f0 = (long *******)(puStack_2f8 + 8);
                        ppppppplVar20 = ppppppplStack_6f0;
                        if (*(char *)((long)puStack_2f8 + 0x4a) == '\x01') {
                          FUN_10a9ed628(puStack_2f8 + 6,param_6 + 0x2c);
                          ppppppplVar20 = param_6 + 0x2c;
                        }
                        iVar23 = *(int *)((long)puVar18 + 0x34);
                        if ((iVar23 == 0) || (iVar4 = *(int *)(puVar18 + 6), iVar4 == 0)) {
LAB_10a9e7810:
                          func_0x000109759f88(ppppppplStack_1a0);
                          puVar18 = puStack_2f8;
                          if (puStack_2f8 != (undefined8 *)0x0) {
                            lVar34 = *(long *)*puStack_2f8;
                            if (*(code **)(puStack_2f8[1] + 0x18) != (code *)0x0) {
                              (**(code **)(puStack_2f8[1] + 0x18))(puStack_2f8);
                            }
                            (**(code **)(lVar34 + 0x10))(lVar34,puVar18);
                          }
                          goto LAB_10a9e7848;
                        }
                        iVar62 = *(int *)(puVar18 + 5);
                        iVar63 = *(int *)((long)puVar18 + 0x2c);
                        uVar41 = *(uint *)((long)*ppppppplVar14 + 0x74);
                        if (uStack_60c == 0) {
                          uVar42 = 0;
                        }
                        else {
                          if (bStack_2a7 - 1 < 3) {
                            uVar32 = *(undefined8 *)
                                      (&UNK_10e4eb820 + ((ulong)(bStack_2a7 - 1) & 0xff) * 8);
                          }
                          else {
                            uVar32 = 0xf0000000f;
                          }
                          iVar9 = iVar23;
                          if (iVar23 <= iVar4) {
                            iVar9 = iVar4;
                          }
                          iVar9 = 400 - iVar9;
                          uVar42 = iVar9 / 2 & (iVar9 - (iVar9 >> 0x1f) >> 0x1f ^ 0xffffffffU);
                          uVar22 = (uint)((ulong)uVar32 >> 0x20);
                          if (uVar22 <= uVar42) {
                            uVar42 = uVar22;
                          }
                          uVar22 = uVar42;
                          if ((uint)uVar32 <= uVar42) {
                            uVar22 = (uint)uVar32;
                          }
                          if (uVar22 < 2) {
                            uVar22 = 1;
                          }
                          if (uVar42 <= uVar22) {
                            uVar42 = uVar22;
                          }
                          ppppppplStack_6f0 = ppppppplStack_5f8;
                          func_0x00010a9ece70(ppppppplStack_5f8,iVar23,iVar4,*ppppppplVar20);
                        }
                        ppppppplVar28 = (long *******)(ulong)(uint)(float)iVar62;
                        param_2 = (long *******)(ulong)(uint)(float)iVar63;
                        ppppppplVar20 = (long *******)(ulong)(~uVar41 >> 0x1f);
                        ppppppplVar17 = ppppppplStack_5f8;
                        FUN_10a9ed424(ppppppplStack_5f8,&uStack_2e0,ppppppplVar20,
                                      CONCAT44((float)iVar63,(float)iVar62),*ppppppplStack_6f0,
                                      iVar23,iVar4,0,&pppppplStack_378,uVar42);
                        if ((char)pppppplStack_378 == '\x01') {
                          FUN_10a350d34(&uStack_1f8,ppppppplVar17 + 10);
                          bStack_1c8 = *(byte *)(ppppppplVar17 + 0x10);
                          param_2 = (long *******)ppppppplVar17[0xc];
                          ppppppplVar28 = (long *******)ppppppplVar17[0xe];
                          uStack_1e0 = SUB81(ppppppplVar17[0xd],0);
                          uStack_1df = (undefined7)((ulong)ppppppplVar17[0xd] >> 8);
                          uStack_1d0 = (uint)ppppppplVar17[0xf];
                          uStack_1cc = (undefined4)((ulong)ppppppplVar17[0xf] >> 0x20);
                          uStack_1d8 = SUB81(ppppppplVar28,0);
                          uStack_1d7 = (undefined7)((ulong)ppppppplVar28 >> 8);
                          ppppppplStack_1e8 = param_2;
                          func_0x00010a9f95d4(&ppppppplStack_1c0,ppppppplVar17 + 0x11);
                          goto LAB_10a9e7810;
                        }
                      }
                      bVar46 = false;
                      ppppppplVar54 = ppppppplStack_660;
                    }
                    if (ppppppplStack_2d8 != (long *******)0x0) {
                      ppppppplStack_2d0 = ppppppplStack_2d8;
                      __ZdlPv();
                    }
                    if (lStack_298 != 0) {
                      lStack_290 = lStack_298;
                      __ZdlPv();
                    }
                    if (((bStack_1b0 & 1) != 0) && (lStack_1b8 != 0)) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    plVar2 = plStack_1f0;
                    if (plStack_1f0 != (long *)0x0) {
                      plVar1 = plStack_1f0 + 1;
                      do {
                        lVar34 = *plVar1;
                        cVar7 = '\x01';
                        bVar39 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar39) {
                          *plVar1 = lVar34 + -1;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                      if (lVar34 == 0) {
                        (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
                      }
                    }
                    if (((bStack_200 & 1) != 0) && (lStack_208 != 0)) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    plVar2 = (long *)CONCAT44(fStack_23c,fStack_240);
                    if (plVar2 != (long *)0x0) {
                      plVar1 = plVar2 + 1;
                      do {
                        lVar34 = *plVar1;
                        cVar7 = '\x01';
                        bVar39 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar39) {
                          *plVar1 = lVar34 + -1;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                      if (lVar34 == 0) {
                        (**(code **)(*plVar2 + 0x10))(plVar2);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
                      }
                    }
                    if ((long)uStack_250 < 0) {
                      __ZdlPv(uStack_260);
                    }
                    if (!bVar46) {
                      if ((char)bStack_359 < '\0') {
                        __ZdlPv(pppppppcStack_370);
                      }
                      if (ppppppplStack_350 != (long *******)0x0) {
                        ppppppplStack_348 = ppppppplStack_350;
                        __ZdlPv();
                      }
                      bVar40 = 1;
                      goto LAB_10a9e807c;
                    }
                  }
                  FUN_10aa0dd8c(&pppppplStack_570,&uStack_358);
                  FUN_10a17478c(&lStack_5b0,appppppplStack_3f8);
                  piVar27 = (int *)((long)pppppplStack_618 + uVar37 * 0x14);
                  uVar32 = NEON_scvtf(*(undefined8 *)(piVar27 + 2),4);
                  uStack_2a0 = CONCAT44((float)((ulong)uVar32 >> 0x20) * 0.015625,
                                        (float)uVar32 * 0.015625);
                  param_2 = (long *******)0x3c800000;
                  iVar23 = (int)((float)*piVar27 * 0.015625);
                  lStack_298 = CONCAT44(lStack_298._4_4_,iVar23);
                  if ((char)bStack_359 < '\0') {
                    pppppppcVar26 = pppppppcStack_370;
                    if (uStack_368 == 1) goto LAB_10a9e7c78;
                  }
                  else if (bStack_359 == 1) {
                    pppppppcVar26 = (char *******)&pppppppcStack_370;
LAB_10a9e7c78:
                    if ((*(char *)pppppppcVar26 == ' ') &&
                       ((*(byte *)((long)ppppppplVar54 + 0x11) >> 6 & 1) != 0)) {
                      param_2 = (long *******)0x40a00000;
                      lStack_298 = CONCAT44(lStack_298._4_4_,(int)((float)iVar23 / 5.0));
                    }
                  }
                  FUN_10aa0df84(&uStack_530,&uStack_2a0);
                  ppppppplVar28 = ppppppplVar14 + 7;
                  func_0x000109de3048(ppppppplVar28,puVar53 + 2);
                  if (ppppppplVar28 == (long *******)0x0) {
                    FUN_109ffdddc(&UNK_10f639994);
                    goto LAB_10a9e8388;
                  }
                  ppppppplStack_1a0 =
                       (long *******)
                       CONCAT44(ppppppplStack_1a0._4_4_,*(undefined4 *)((long)ppppppplVar28 + 0x14))
                  ;
                  FUN_109febd04(puStack_5e0,&ppppppplStack_1a0);
                  puVar18 = (undefined8 *)0x20;
                  __Znwm();
                  puVar18[2] = uStack_628;
                  puVar18[1] = uStack_630;
                  *(undefined4 *)(puVar18 + 3) = 0;
                  *puVar18 = &PTR_DAT_110c380a0;
                  ppppppplStack_198 = (long *******)0x0;
                  ppppppplStack_1a0 = (long *******)0x0;
                  ppppppplStack_188 = (long *******)0x0;
                  ppppppplStack_190 = (long *******)0x0;
                  ppppppplStack_178 = (long *******)0x0;
                  ppppppplStack_180 = (long *******)0x0;
                  fStack_170 = SUB84(puVar18,0);
                  fStack_16c = (float)((ulong)puVar18 >> 0x20);
                  uStack_160 = 0;
                  fStack_168 = 0.0;
                  uStack_164 = 0;
                  uStack_163 = 0;
                  cStack_161 = '\0';
                  uStack_150 = 0;
                  plStack_158 = (long *)0x0;
                  ppppppplStack_140 = (long *******)0x0;
                  uStack_148 = 0;
                  uStack_130 = 0;
                  pppppplStack_138 = (long ******)0x0;
                  lStack_120 = 0;
                  uStack_128 = 0;
                  uStack_110 = 0;
                  uStack_118 = 0;
                  ppppppplStack_100 = (long *******)0x0;
                  plStack_108 = (long *)0x0;
                  ppppppplStack_f0 = (long *******)0x0;
                  uStack_f8 = 0;
                  uVar29 = uStack_368;
                  pppppppcVar26 = pppppppcStack_370;
                  if (-1 < (char)bStack_359) {
                    uVar29 = (ulong)bStack_359;
                    pppppppcVar26 = (char *******)&pppppppcStack_370;
                  }
                  uStack_e8 = 0;
                  FUN_10aa0e8ac(&uStack_260,&ppppppplStack_1a0,pppppppcVar26,
                                (char *)((long)pppppppcVar26 + uVar29));
                  ppppppplVar28 = ppppppplStack_258;
                  ppppppplVar20 = (long *******)(long)uStack_250._7_1_;
                  if ((long)uStack_250._7_1_ < 0) {
                    __ZdlPv(uStack_260);
                    ppppppplVar20 = ppppppplVar28;
                  }
                  func_0x00010aa0ed70(&ppppppplStack_1a0);
                  ppppppplStack_1a0 =
                       (long *******)CONCAT44(ppppppplStack_1a0._4_4_,(int)ppppppplVar20);
                  FUN_109febd04(&uStack_498,&ppppppplStack_1a0);
                  uStack_2e0 = (long *******)CONCAT44(uStack_2e0._4_4_,10);
                  FUN_109ffe1f4(&uStack_260,10);
                  func_0x000109700bc0((*ppppppplVar14)[0x1a],*(undefined4 *)(ppppppplVar14[1] + 7),
                                      *puVar53,0,&uStack_2e0,uStack_260);
                  func_0x000108a5942c(&uStack_260,(ulong)uStack_2e0 & 0xffffffff);
                  for (ppppppplVar28 = uStack_260; ppppppplVar28 != ppppppplStack_258;
                      ppppppplVar28 = (long *******)((long)ppppppplVar28 + 4)) {
                    param_2 = (long *******)0x3c800000;
                    *(int *)ppppppplVar28 = (int)((float)*(int *)ppppppplVar28 * 0.015625);
                  }
                  if (ppppppplStack_4a8 < ppppppplStack_4a0) {
                    *ppppppplStack_4a8 = (long ******)0x0;
                    ppppppplStack_4a8[1] = (long ******)0x0;
                    ppppppplStack_4a8[2] = (long ******)0x0;
                    ppppppplVar28 = uStack_260;
                    ppppppplStack_4a8[1] = (long ******)ppppppplStack_258;
                    *ppppppplStack_4a8 = (long ******)ppppppplVar28;
                    ppppppplStack_4a8[2] = (long ******)uStack_250;
                    ppppppplStack_4a8 = ppppppplStack_4a8 + 3;
                  }
                  else {
                    lVar34 = (long)ppppppplStack_4a8 - (long)ppppppplStack_4b0;
                    uVar29 = (lVar34 >> 3) * -0x5555555555555555 + 1;
                    if (0xaaaaaaaaaaaaaaa < uVar29) {
                      FUN_10a3aa8f4();
                      goto LAB_10a9e8388;
                    }
                    lVar33 = (long)ppppppplStack_4a0 - (long)ppppppplStack_4b0 >> 3;
                    uVar36 = lVar33 * 0x5555555555555556;
                    if (uVar36 < uVar29 || uVar36 - uVar29 == 0) {
                      uVar36 = uVar29;
                    }
                    if (0x555555555555554 < (ulong)(lVar33 * -0x5555555555555555)) {
                      uVar36 = 0xaaaaaaaaaaaaaaa;
                    }
                    ppppppplStack_180 = ppppppplStack_638;
                    ppppppplVar17 = ppppppplStack_638;
                    FUN_10a3aa908();
                    ppppppplVar28 = uStack_260;
                    plVar2 = (long *)((long)ppppppplVar17 + lVar34);
                    *plVar2 = 0;
                    plVar2[1] = 0;
                    plVar2[2] = 0;
                    plVar2[1] = (long)ppppppplStack_258;
                    *plVar2 = (long)uStack_260;
                    plVar2[2] = (long)uStack_250;
                    ppppppplStack_258 = (long *******)0x0;
                    uStack_260 = (long *******)0x0;
                    uStack_250 = (long *******)0x0;
                    ppppppplVar20 = (long *******)(plVar2 + 3);
                    ppppppplVar45 =
                         (long *******)
                         ((long)plVar2 - ((long)ppppppplStack_4a8 - (long)ppppppplStack_4b0));
                    _memcpy(ppppppplVar45);
                    ppppppplStack_190 = ppppppplStack_4b0;
                    ppppppplStack_188 = ppppppplStack_4a0;
                    ppppppplStack_198 = ppppppplStack_4b0;
                    ppppppplStack_1a0 = ppppppplStack_4b0;
                    ppppppplStack_4b0 = ppppppplVar45;
                    ppppppplStack_4a8 = ppppppplVar20;
                    ppppppplStack_4a0 = ppppppplVar17 + uVar36 * 3;
                    func_0x00010937ce88(&ppppppplStack_1a0);
                    ppppppplStack_4a8 = ppppppplVar20;
                    if (uStack_260 != (long *******)0x0) {
                      ppppppplStack_258 = uStack_260;
                      __ZdlPv();
                    }
                  }
                  if ((char)bStack_359 < '\0') {
                    __ZdlPv(pppppppcStack_370);
                  }
                  if (ppppppplStack_350 != (long *******)0x0) {
                    ppppppplStack_348 = ppppppplStack_350;
                    __ZdlPv();
                  }
                  uVar37 = uVar37 + 1;
                } while (uVar37 < (uStack_418 & 0xffffffff));
              }
              ppppppplVar54 = (long *******)ppppppplVar14[0xc];
              ppppppplVar20 = (long *******)ppppppplVar14[0xd];
              if (ppppppplVar54 != ppppppplVar20) {
                ppppppplStack_178 = (long *******)((ulong)ppppppplStack_178 & 0xffffffffffffff00);
                ppppppplStack_648[1] = (long ******)0x0;
                ppppppplStack_648[2] = (long ******)0x0;
                *ppppppplStack_648 = (long ******)0x0;
                *(undefined1 *)(ppppppplStack_648 + 3) = 0;
                fStack_170 = 1.0;
                fStack_16c = 0.0;
                fStack_168 = 0.0;
                uStack_164 = 0;
                ppppppplStack_1a0 =
                     (long *******)
                     ((lStack_568 - (long)pppppplStack_570 >> 3) * -0x3333333333333333);
                if (ppppppplStack_648 != ppppppplVar14 + 0xc) {
                  FUN_10a0ea4a0(ppppppplStack_648,ppppppplVar54,ppppppplVar20,
                                (long)ppppppplVar20 - (long)ppppppplVar54 >> 2);
                }
                ppppppplStack_180 = appppppplStack_3f8[0];
                ppppppplStack_178 = (long *******)CONCAT71(ppppppplStack_178._1_7_,1);
                ppppppplVar28 = (long *******)(ulong)(uint)fStack_318;
                fStack_170 = fStack_318;
                FUN_10aa0db84(&lStack_598,&ppppppplStack_1a0);
                if (ppppppplStack_198 != (long *******)0x0) {
                  ppppppplStack_190 = ppppppplStack_198;
                  __ZdlPv();
                }
              }
              bVar40 = 0;
LAB_10a9e807c:
              ppppppplVar54 = ppppppplStack_320;
              if (ppppppplStack_320 != (long *******)0x0) {
                ppppppplVar17 = ppppppplStack_320 + 1;
                do {
                  pppppplVar19 = *ppppppplVar17;
                  cVar7 = '\x01';
                  bVar46 = (bool)ExclusiveMonitorPass(ppppppplVar17,0x10);
                  if (bVar46) {
                    *ppppppplVar17 = (long ******)((long)pppppplVar19 + -1);
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (pppppplVar19 == (long ******)0x0) {
                  (*(code *)(*ppppppplStack_320)[2])(ppppppplStack_320);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar54);
                }
              }
              if ((in_stack_00000020._1_1_ & bVar40) == 1) {
LAB_10a9e8164:
                ppppppplVar28 = ppppppplStack_5f8;
                *(undefined1 *)((long)ppppppplStack_5f8 + 0x1a4) = 0;
                pppppplVar19 = ppppppplStack_5f8[0x37];
                ppppppplStack_5f8[0x37] = (long ******)0x0;
                if (pppppplVar19 != (long ******)0x0) {
                  FUN_10a9fa638();
                }
                *(undefined1 *)((long)ppppppplVar28 + 0x1e4) = 0;
                pppppplVar19 = ppppppplVar28[0x3f];
                ppppppplVar28[0x3f] = (long ******)0x0;
                if (pppppplVar19 != (long ******)0x0) {
                  FUN_10a9fa638();
                }
                FUN_10a9e6004(param_5,ppppppplVar28,param_7,param_8,param_9,param_10,param_11);
                FUN_10a9fa38c(&ppppppplStack_5d8);
                goto LAB_10a9e81e8;
              }
            }
            ppppppplVar14 = ppppppplVar14 + 0x1a;
          } while (ppppppplVar14 != ppppppplStack_668);
        }
      }
      iVar47 = iVar12 + iVar47;
      FUN_10a9fa38c(&ppppppplStack_5d8);
      uVar51 = uVar51 + 1;
      pppppplVar19 = *param_7;
    } while (uVar51 < (ulong)(((long)param_7[1] - (long)pppppplVar19 >> 4) * -0x5555555555555555));
  }
  param_7 = ppppppplVar20;
  ppppppplVar28 = &pppppplStack_570;
  func_0x00010a20b480();
  plVar2 = plStack_438;
  uVar30 = uStack_440;
  uStack_440 = 0;
  plStack_438 = (long *)0x0;
  *(long **)(param_5 + 0x138) = plVar2;
  *(undefined8 *)(param_5 + 0x130) = uVar30;
  *(long **)(param_5 + 0x148) = plStack_428;
  *(undefined8 *)(param_5 + 0x140) = uStack_430;
  uStack_430 = 0;
  plStack_428 = (long *)0x0;
  *(long *)(param_5 + 0x158) = lStack_5a8;
  *(long *)(param_5 + 0x150) = lStack_5b0;
  *(undefined8 *)(param_5 + 0x160) = uStack_5a0;
  lStack_5b0 = 0;
  lStack_5a8 = 0;
  *(long *)(param_5 + 0x170) = lStack_590;
  *(long *)(param_5 + 0x168) = lStack_598;
  *(undefined8 *)(param_5 + 0x178) = uStack_588;
  lStack_590 = 0;
  uStack_588 = 0;
  uStack_5a0 = 0;
  lStack_598 = 0;
  *(byte *)(param_5 + 0x180) = bStack_580;
LAB_10a9e81e8:
  ppppppplVar20 = ppppppplStack_5c0;
  if ((bStack_5b8 & 1) == 0) {
    bStack_5b8 = 1;
    *(undefined1 *)((long)ppppppplStack_5c0 + 0x1a4) = 0;
    pppppplVar19 = ppppppplStack_5c0[0x37];
    ppppppplStack_5c0[0x37] = (long ******)0x0;
    if (pppppplVar19 != (long ******)0x0) {
      FUN_10a9fa638();
    }
    *(undefined1 *)((long)ppppppplVar20 + 0x1e4) = 0;
    pppppplVar19 = ppppppplVar20[0x3f];
    ppppppplVar20[0x3f] = (long ******)0x0;
    if (pppppplVar19 != (long ******)0x0) {
      FUN_10a9fa638();
    }
  }
  lVar33 = lStack_598;
  lVar34 = lStack_590;
  if (lStack_598 != 0) {
    for (; lVar34 != lVar33; lVar34 = lVar34 + -0x40) {
      if (*(long *)(lVar34 + -0x38) != 0) {
        *(long *)(lVar34 + -0x30) = *(long *)(lVar34 + -0x38);
        __ZdlPv();
      }
    }
    lStack_590 = lVar33;
    __ZdlPv(lStack_598);
  }
  if (lStack_5b0 != 0) {
    lStack_5a8 = lStack_5b0;
    __ZdlPv();
  }
  plVar2 = plStack_428;
  if (plStack_428 != (long *)0x0) {
    plVar1 = plStack_428 + 1;
    do {
      lVar34 = *plVar1;
      cVar7 = '\x01';
      bVar46 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar46) {
        *plVar1 = lVar34 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar34 == 0) {
      (**(code **)(*plStack_428 + 0x10))(plStack_428);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    plVar1 = plStack_438 + 1;
    do {
      lVar34 = *plVar1;
      cVar7 = '\x01';
      bVar46 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar46) {
        *plVar1 = lVar34 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar34 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  pppppplVar19 = (long ******)&pppppplStack_570;
  FUN_10a1f4af8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
    ___stack_chk_fail();
    if ((char)bStack_359 < '\0') {
      __ZdlPv(pppppppcStack_370);
    }
    if (ppppppplStack_350 != (long *******)0x0) {
      ppppppplStack_348 = ppppppplStack_350;
      __ZdlPv();
    }
    ppppppplVar20 = ppppppplStack_320;
    if (ppppppplStack_320 != (long *******)0x0) {
      ppppppplVar14 = ppppppplStack_320 + 1;
      do {
        pppppplVar35 = *ppppppplVar14;
        cVar7 = '\x01';
        bVar46 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
        if (bVar46) {
          *ppppppplVar14 = (long ******)((long)pppppplVar35 + -1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (pppppplVar35 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_320)[2])(ppppppplStack_320);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar20);
      }
    }
    FUN_10a9fa38c(&ppppppplStack_5d8);
    FUN_10aa0ff7c(&ppppppplStack_5c0);
    func_0x00010a9f9274(&lStack_5b0);
    FUN_10a1e88c4(&pppppplStack_570);
    __Unwind_Resume();
    if (param_7 != (long *******)0x0) {
      ppppppplVar20 = param_7 + 1;
      do {
        cVar7 = '\x01';
        bVar46 = (bool)ExclusiveMonitorPass(ppppppplVar20,0x10);
        if (bVar46) {
          *ppppppplVar20 = (long ******)((long)*ppppppplVar20 + 1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    ppppplVar13 = pppppplVar19[1];
    *pppppplVar19 = (long *****)ppppppplVar28;
    pppppplVar19[1] = (long *****)param_7;
    if (ppppplVar13 != (long *****)0x0) {
      ppppplVar24 = ppppplVar13 + 1;
      do {
        pppplVar31 = *ppppplVar24;
        cVar7 = '\x01';
        bVar46 = (bool)ExclusiveMonitorPass(ppppplVar24,0x10);
        if (bVar46) {
          *ppppplVar24 = (long ****)((long)pppplVar31 + -1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (pppplVar31 == (long ****)0x0) {
        (*(code *)(*ppppplVar13)[2])(ppppplVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar13);
      }
    }
    return pppppplVar19;
  }
  return pppppplVar19;
}



/* Entry: 10a9e874c; end: 10a9e87bf;  */

undefined8 * FUN_10a9e874c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a9e87c0; end: 10a9e8847;  */

long FUN_10a9e87c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x168);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x170);
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -0x38) != 0) {
          *(long *)(lVar3 + -0x30) = *(long *)(lVar3 + -0x38);
          __ZdlPv();
        }
        lVar3 = lVar3 + -0x40;
      } while (lVar3 != lVar2);
      lVar1 = *(long *)(param_1 + 0x168);
    }
    *(long *)(param_1 + 0x170) = lVar2;
    __ZdlPv(lVar1);
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x150);
    __ZdlPv();
  }
  func_0x00010a1f4b9c(param_1 + 0x140);
  func_0x00010a1f4b9c(param_1 + 0x130);
  func_0x000107c2826c(param_1 + 0x108);
  if (*(char *)(param_1 + 0x107) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xf0));
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xd8);
    __ZdlPv();
  }
  func_0x00010a1f4bf4(&stack0xffffffffffffffd8);
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8);
    __ZdlPv();
  }
  FUN_10a1f4c88(param_1 + 0x80);
  func_0x00010a1f4cfc(param_1 + 0x58);
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  func_0x00010a1f4dc4(param_1 + 0x18);
  func_0x00010a1f4ebc(&stack0xffffffffffffffd8);
  return param_1;
}



/* Entry: 10a9e8848; end: 10a9e8c7f;  */

void FUN_10a9e8848(long *param_1,long param_2,long param_3,undefined8 param_4,undefined2 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  code *pcVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuStack_f0;
  undefined8 **ppuStack_e8;
  undefined8 **ppuStack_e0;
  byte bStack_d1;
  byte bStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  byte bStack_b1;
  byte bStack_b0;
  undefined1 uStack_a1;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 *puStack_50;
  undefined8 **ppuStack_48;
  undefined1 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = param_6;
  uStack_70 = param_7;
  FUN_10a9e8c80(param_6,param_7,param_4,param_5);
  uStack_80 = (undefined4)param_6;
  uStack_7c = (undefined1)((ulong)param_6 >> 0x20);
  ppuStack_60 = (undefined8 **)&uStack_80;
  pppuVar4 = (undefined8 ***)((ulong)ppuStack_60 | 4);
  puStack_a0 = (undefined8 **)0x0;
  puStack_98 = (undefined8 **)0x0;
  lStack_90 = 0;
  puStack_50 = &uStack_78;
  ppuStack_48 = &puStack_a0;
  ppuStack_58 = pppuVar4;
  if (*(uint *)(param_3 + 8) == 0xffffffff) {
    FUN_10a0d459c();
    goto LAB_10a9e8bf8;
  }
  ppuStack_c8 = &ppuStack_60;
  (*(code *)(&PTR_FUN_110c37720)[*(uint *)(param_3 + 8)])(&ppuStack_c8,param_3);
  plVar3 = (long *)(param_2 + 0x20);
  if (*plVar3 == 0) {
LAB_10a9e8b30:
    param_1[1] = (long)puStack_98;
    *param_1 = (long)puStack_a0;
    param_1[2] = lStack_90;
LAB_10a9e8b40:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    FUN_10a65f780(&ppuStack_c8,plVar3);
    if (bStack_b0 != 1) {
      FUN_10a65f898(&ppuStack_e8,plVar3);
      if (bStack_d0 != 1) {
LAB_10a9e8b14:
        if ((bStack_b0 == 1) && ((char)bStack_b1 < '\0')) {
          __ZdlPv(ppuStack_c8);
        }
        goto LAB_10a9e8b30;
      }
      ppuStack_58 = ppuStack_e0;
      ppuStack_60 = ppuStack_e8;
      if (-1 < (char)bStack_d1) {
        ppuStack_58 = (undefined8 ***)(ulong)bStack_d1;
        ppuStack_60 = &ppuStack_e8;
      }
      puVar2 = &uStack_a1;
      FUN_10a15aadc(puVar2,&ppuStack_60,&PTR_DAT_110c37230);
      if ((int)puVar2 == 0) {
        ppuStack_f0 = (undefined8 ***)0x0;
        ppuStack_60 = &ppuStack_f0;
        ppuStack_58 = &ppuStack_e8;
        puStack_50 = (undefined8 *)&uStack_80;
        puStack_40 = &uStack_a1;
        ppuStack_48 = pppuVar4;
        if (*(uint *)(param_3 + 8) == 0xffffffff) {
          FUN_10a0d459c();
          goto LAB_10a9e8bf8;
        }
        ppuStack_68 = &ppuStack_60;
        (*(code *)(&PTR_FUN_110c37750)[*(uint *)(param_3 + 8)])(&ppuStack_68,param_3);
        if ((undefined8 ***)ppuStack_f0 == (undefined8 ***)0x0) {
          if ((bStack_d0 & 1) == 0) {
            FUN_10a04f808();
            goto LAB_10a9e8bf8;
          }
          pppuVar4 = (undefined8 ***)ppuStack_e8;
          if (-1 < (char)bStack_d1) {
            pppuVar4 = &ppuStack_e8;
          }
          func_0x00010ae06f08(1,0x12,&UNK_10f6891b4,&UNK_10f6891b4,0xffffffff,&UNK_10f689aa9,param_8
                              ,param_9,pppuVar4);
          if ((bStack_d0 == 1) && ((char)bStack_d1 < '\0')) {
            __ZdlPv(ppuStack_e8);
          }
          goto LAB_10a9e8b14;
        }
        ppuStack_60 = ppuStack_f0;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        FUN_10a9f9984(param_1,&ppuStack_60,&ppuStack_58);
      }
      else {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      if ((bStack_d0 == 1) && ((char)bStack_d1 < '\0')) {
        __ZdlPv(ppuStack_e8);
      }
LAB_10a9e8aa0:
      if ((bStack_b0 == 1) && ((char)bStack_b1 < '\0')) {
        __ZdlPv(ppuStack_c8);
      }
      if ((undefined8 **)puStack_a0 != (undefined8 **)0x0) {
        puStack_98 = puStack_a0;
        __ZdlPv();
      }
      goto LAB_10a9e8b40;
    }
    ppuStack_58 = ppuStack_c0;
    ppuStack_60 = ppuStack_c8;
    if (-1 < (char)bStack_b1) {
      ppuStack_58 = (undefined8 ***)(ulong)bStack_b1;
      ppuStack_60 = &ppuStack_c8;
    }
    puVar2 = &uStack_a1;
    FUN_10a15aadc(puVar2,&ppuStack_60,&PTR_DAT_110c37230);
    if ((int)puVar2 != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto LAB_10a9e8aa0;
    }
    ppuStack_60 = &ppuStack_68;
    ppuStack_58 = &ppuStack_c8;
    ppuStack_68 = (undefined8 ***)0x0;
    puStack_50 = (undefined8 *)&uStack_a1;
    if (*(uint *)(param_3 + 8) != 0xffffffff) {
      ppuStack_e8 = &ppuStack_60;
      (*(code *)(&PTR_LAB_110c37738)[*(uint *)(param_3 + 8)])(&ppuStack_e8,param_3);
      if ((undefined8 ***)ppuStack_68 == (undefined8 ***)0x0) {
        if ((bStack_b0 & 1) == 0) {
          FUN_10a04f808();
          goto LAB_10a9e8bf8;
        }
        pppuVar4 = (undefined8 ***)ppuStack_c8;
        if (-1 < (char)bStack_b1) {
          pppuVar4 = &ppuStack_c8;
        }
        func_0x00010ae06f08(1,0x12,&UNK_10f6891b4,&UNK_10f6891b4,0xffffffff,&UNK_10f689a57,param_8,
                            param_9,pppuVar4);
        goto LAB_10a9e8b14;
      }
      ppuStack_60 = ppuStack_68;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      FUN_10a9f9984(param_1,&ppuStack_60,&ppuStack_58);
      goto LAB_10a9e8aa0;
    }
  }
  FUN_10a0d459c();
LAB_10a9e8bf8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9e8bfc);
  (*pcVar1)();
}



/* Entry: 10a9e8c80; end: 10a9e8cdf;  */

ulong FUN_10a9e8c80(ulong param_1,uint param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  if (((param_3 >> 0x20 & 1) == 0) || (((uint)param_4 >> 8 & 1) == 0)) {
    FUN_10ab1a068();
    uVar1 = param_1 >> 0x20;
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
      param_1 = 400;
    }
    if ((param_3 & 0x100000000) == 0) {
      param_3 = param_1;
    }
  }
  else {
    uVar1 = 0;
  }
  if ((param_4 & 0x100) == 0) {
    param_4 = uVar1;
  }
  return param_3 & 0xffffffff | (param_4 & 0xff) << 0x20;
}



/* Entry: 10a9e8ce0; end: 10a9e9087;  */

undefined1  [16]
FUN_10a9e8ce0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined2 param_6,ulong param_7,undefined8 param_8,int param_9)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  uint uStack_a0;
  ulong uStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  
  if (param_9 == 0) {
    uVar9 = 0;
    uVar10 = 0;
    goto LAB_10a9e8fc4;
  }
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_b0 = 0;
  lStack_a8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  FUN_10a9e8848(&plStack_88,&uStack_b8,param_4,param_5,param_6);
  plVar4 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar5 = plStack_90 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  FUN_10a1cc630(&uStack_b8);
  plVar4 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar5 = plStack_c0 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_88;
  if (plStack_88 == plStack_80) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    plVar5 = plStack_88;
    do {
      lVar8 = *plVar5;
      if (lVar8 != 0) {
        lVar6 = *(long *)(param_3 + 0x18);
        FUN_10a9e1910(&uStack_b8,lVar8);
        FUN_10a9df994(lVar6,&uStack_b8,*(undefined4 *)(lVar8 + 0x110),0,0);
        if (lStack_a8 < 0) {
          __ZdlPv(uStack_b8);
        }
        if ((lVar6 != 0) && (*(long *)(lVar6 + 0x50) != 0)) break;
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plStack_80);
  }
  FUN_10a9e8c80(param_7,param_8,param_5,param_6);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x50) == 0)) {
    plVar5 = *(long **)(*(long *)(*(long *)(param_3 + 0x18) + 0x220) + 0x900);
    FUN_10a597fb4();
    lVar8 = *plVar5;
    lVar1 = plVar5[1];
    if (lVar8 != lVar1) {
      do {
        FUN_10a0ef2e4(&uStack_b8,lVar8,param_7,param_7 >> 0x20 & 1);
        if ((uStack_98 & 1) == 0) {
          iVar7 = 5;
        }
        else {
          lVar6 = *(long *)(param_3 + 0x18);
          FUN_10a9df994(lVar6,&uStack_b8,uStack_a0,0,0);
          if (lVar6 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = 0;
            if (*(long *)(lVar6 + 0x50) != 0) {
              iVar7 = 4;
            }
          }
        }
        if (((char)uStack_98 == '\x01') && (lStack_a8 < 0)) {
          __ZdlPv(uStack_b8);
        }
      } while (((iVar7 == 5) || (iVar7 == 0)) && (lVar8 = lVar8 + 0x18, lVar8 != lVar1));
    }
    uVar9 = 0;
    if (lVar6 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      if (*(long *)(lVar6 + 0x50) != 0) goto LAB_10a9e8f38;
    }
  }
  else {
LAB_10a9e8f38:
    FUN_10a9e9088(*(undefined8 *)(param_3 + 0x18),lVar6 + 0x30,param_9);
    uStack_b8 = uStack_b8 & 0xffffffffffffff00;
    uStack_a0 = uStack_a0 & 0xffffff00;
    FUN_10a9e93cc(&lStack_e0,lVar6 + 0x78,&uStack_b8,param_7 & 0xffffffff | 0x100000000,
                  param_7 >> 0x20 | 0x100);
    if (lStack_e0 != lStack_d8) {
      FUN_10a9e964c(lVar6 + 0x30,&lStack_e0);
    }
    if (lStack_e0 != 0) {
      __ZdlPv();
    }
    lVar8 = *(long *)(*(long *)(lVar6 + 0x50) + 0xa0);
    FUN_10a9e9a54(*(undefined8 *)(*(long *)(lVar6 + 0x50) + 0x28),*(undefined8 *)(lVar8 + 0x30),
                  *(undefined8 *)(lVar8 + 0x38));
    uVar9 = param_1;
    uVar10 = param_2;
    plVar4 = plStack_88;
  }
  if (plVar4 != (long *)0x0) {
    __ZdlPv(plVar4);
  }
LAB_10a9e8fc4:
  auVar11._8_8_ = uVar10;
  auVar11._0_8_ = uVar9;
  return auVar11;
}



/* Entry: 10a9e9088; end: 10a9e93cb;  */

void FUN_10a9e9088(double param_1,long param_2,undefined4 **param_3,undefined4 **param_4,
                  ulong param_5,ulong param_6)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  long *plVar9;
  uint *puVar10;
  undefined4 **ppuVar11;
  long lVar12;
  undefined4 **ppuVar13;
  uint *puVar14;
  long lVar15;
  long *plVar16;
  undefined4 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  undefined4 **ppuVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined4 **ppuStack_68;
  undefined4 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined4 *puStack_40;
  undefined4 *puStack_38;
  
  puVar7 = param_3[4];
  iVar24 = (int)param_4;
  if (puVar7 == (undefined4 *)0x0) {
    if (param_3[0x12] == (undefined4 *)0x0) {
      return;
    }
    if (((ulong)param_3[0x13] & 1) == 0) {
      return;
    }
    _CTFontGetSize();
    if (iVar24 == (int)param_1) {
      return;
    }
    puVar7 = param_3[0x12];
    _CTFontCreateCopyWithAttributes((double)((ulong)param_4 & 0xffffffff),puVar7,0,0);
    if (param_3[0x12] != (undefined4 *)0x0) {
      puStack_40 = puVar7;
      _CFRelease();
    }
    param_3[0x12] = puVar7;
    puStack_40 = (undefined4 *)0x0;
    FUN_10aa10ef8(&puStack_40);
    return;
  }
  ppuVar25 = param_3 + 6;
  plVar16 = (long *)*ppuVar25;
  ppuVar11 = param_3;
  ppuVar13 = param_4;
  if (plVar16 == (long *)0x0) {
    ppuVar11 = ppuVar25;
    func_0x000109754eb8();
    if ((int)puVar7 == 0) {
      plVar16 = (long *)*ppuVar25;
      if (plVar16 != (long *)0x0) goto LAB_10a9e90d0;
      goto LAB_10a9e9380;
    }
LAB_10a9e938c:
    FUN_10a00946c(&UNK_10f689c53);
  }
  else {
LAB_10a9e90d0:
    lVar18 = *plVar16;
    if ((lVar18 == 0) || (*(long *)(lVar18 + 0xb0) == 0)) {
LAB_10a9e9380:
      FUN_10a00946c(&UNK_10f689c71);
      goto LAB_10a9e938c;
    }
    *(long **)(lVar18 + 0xa0) = plVar16;
    if (*(int *)(param_3 + 8) == iVar24) {
      return;
    }
    *(int *)(param_3 + 8) = iVar24;
    ppuVar25 = (undefined4 **)param_3[4];
    if (((ulong)ppuVar25[2] & 1) == 0) {
      if ((int)*(uint *)(ppuVar25 + 7) < 1) {
        ppuVar11 = (undefined4 **)0x0;
      }
      else {
        uVar19 = 0;
        ppuVar11 = (undefined4 **)0x0;
        lVar18 = 0x7fffffffffffffff;
        plVar16 = (long *)(ppuVar25[8] + 2);
        do {
          lVar15 = *plVar16 - ((ulong)param_4 & 0xffffffff);
          lVar12 = -lVar15;
          if (-1 < lVar15) {
            lVar12 = lVar15;
          }
          uVar27 = (uint)uVar19;
          if (lVar18 <= lVar12) {
            uVar27 = (uint)ppuVar11;
            lVar12 = lVar18;
          }
          lVar18 = lVar12;
          ppuVar11 = (undefined4 **)(ulong)uVar27;
          uVar19 = uVar19 + 1;
          plVar16 = plVar16 + 4;
        } while (*(uint *)(ppuVar25 + 7) != uVar19);
      }
      if ((int)ppuVar11 == *(int *)((long)param_3 + 0x44)) goto LAB_10a9e924c;
      *(int *)((long)param_3 + 0x44) = (int)ppuVar11;
      ppuVar8 = ppuVar25;
      func_0x0001097555d0();
      iVar24 = (int)ppuVar8;
    }
    else {
      puVar7 = ppuVar25[5];
      if (puVar7 == (undefined4 *)0x0) {
        bVar6 = false;
      }
      else {
        _strcmp(puVar7,&UNK_10f689f89);
        bVar6 = (int)puVar7 == 0;
      }
      if ((*(int *)(*(long *)(*(long *)(param_2 + 0x220) + 0xa20) + 0x18) < 0x149) && (!bVar6)) {
        fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(ppuVar25 + 0x11));
        param_4 = (undefined4 **)
                  (ulong)(uint)(int)((float)((ulong)param_4 & 0xffffffff) * 1.3714286 *
                                    (fVar4 / (float)((int)*(short *)((long)ppuVar25 + 0x8a) -
                                                    (int)*(short *)((long)ppuVar25 + 0x8c))));
      }
      ppuVar8 = ppuVar25;
      ppuVar11 = param_4;
      ppuVar13 = param_4;
      func_0x000109755780();
      iVar24 = (int)ppuVar8;
    }
    if (iVar24 == 0) {
LAB_10a9e924c:
      if (param_3[0x16] == (undefined4 *)0x0) {
        func_0x0001096fc718(param_3[0x14]);
      }
      else {
        param_3[0x16] = (undefined4 *)0x0;
        (*(code *)param_3[0x17])();
        puVar7 = param_3[0x18];
        param_3[0x18] = (undefined4 *)0x0;
        if (puVar7 != (undefined4 *)0x0) {
          (*(code *)param_3[0x19])();
        }
        puVar7 = param_3[4];
        func_0x0001096fc5f0(puVar7,0);
        if ((puVar7[1] != 0) && (*(undefined **)(puVar7 + 0x28) == &UNK_1096fc390)) {
          **(undefined4 **)(puVar7 + 0x26) = 0;
        }
        puVar17 = param_3[0x14];
        param_3[0x14] = puVar7;
        if (puVar17 != (undefined4 *)0x0) {
          (*(code *)param_3[0x15])(puVar17);
        }
        param_3[0x15] = (undefined4 *)&SUB_1096fba38;
      }
      lVar18 = *(long *)(param_3[0x14] + 8) + 0x170;
      func_0x000109747f24();
      iVar24 = 0xdfe4888;
      if (0xd < *(uint *)(lVar18 + 0x18)) {
        iVar24 = (int)*(undefined8 *)(lVar18 + 0x10);
      }
      func_0x000109700a58();
      if (iVar24 != 0) {
        puVar7 = param_3[0x14];
        func_0x00010975149c();
        puVar17 = param_3[0x16];
        param_3[0x16] = puVar7;
        if (puVar17 != (undefined4 *)0x0) {
          (*(code *)param_3[0x17])();
          puVar7 = param_3[0x16];
        }
        param_3[0x17] = (undefined4 *)&UNK_1097cf084;
        FUN_10a9ef184(&puStack_40,*(undefined2 *)(*(long *)(param_3[4] + 0x28) + 0x18),
                      *(undefined2 *)(*(long *)(param_3[4] + 0x28) + 0x1a),puVar7);
        puVar7 = param_3[0x18];
        param_3[0x18] = puStack_40;
        if (puVar7 != (undefined4 *)0x0) {
          (*(code *)param_3[0x19])();
        }
        param_3[0x19] = puStack_38;
      }
      return;
    }
  }
  plVar16 = (long *)&UNK_10f689c91;
  FUN_10a00946c();
  FUN_10aa10ef8(&puStack_40);
  plVar9 = plVar16;
  __Unwind_Resume();
  func_0x000104bd46a0();
  func_0x000104bd46a0();
  func_0x000104bd46a0();
  func_0x000104bd46a0();
  func_0x000104bd46a0();
  pcStack_48 = FUN_10a9e93cc;
  puVar7 = *ppuVar11;
  puVar17 = ppuVar11[1];
  if (puVar7 == puVar17) {
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9[2] = 0;
    return;
  }
  puStack_88 = (undefined4 *)0x0;
  puStack_80 = (undefined4 *)0x0;
  uStack_78 = 0;
  lStack_70 = param_2;
  ppuStack_68 = ppuVar25;
  ppuStack_60 = param_4;
  plStack_58 = plVar16;
  puStack_50 = &stack0xfffffffffffffff0;
  if (((ulong)ppuVar13[3] & 1) == 0) {
    lVar18 = (long)puVar17 - (long)puVar7 >> 6;
  }
  else {
    lVar18 = (long)puVar17 - (long)puVar7 >> 6;
    if (lVar18 == (long)ppuVar13[1] - (long)*ppuVar13 >> 2) {
      if (&puStack_88 != ppuVar13) {
        func_0x00010a14ddc8(&puStack_88,*ppuVar13,ppuVar13[1]);
      }
      goto LAB_10a9e9498;
    }
  }
  func_0x00010742a308(&puStack_88,lVar18);
  lVar18 = (long)ppuVar11[1] - (long)*ppuVar11;
  if (lVar18 != 0) {
    lVar18 = lVar18 >> 6;
    lVar12 = (long)puStack_80 - (long)puStack_88 >> 2;
    puVar7 = puStack_88;
    puVar17 = *ppuVar11 + 0xd;
    do {
      if (lVar12 == 0) goto LAB_10a9e962c;
      *puVar7 = *puVar17;
      lVar12 = lVar12 + -1;
      lVar18 = lVar18 + -1;
      puVar7 = puVar7 + 1;
      puVar17 = puVar17 + 0x10;
    } while (lVar18 != 0);
  }
LAB_10a9e9498:
  puVar7 = *ppuVar11;
  puVar17 = ppuVar11[1];
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = 0;
  if (puVar7 != puVar17) {
    FUN_10a0ca588(plVar9,puStack_88,puStack_80,(long)puStack_80 - (long)puStack_88 >> 2);
    puVar1 = *ppuVar11;
    if ((long)ppuVar11[1] - (long)puVar1 != 0) {
      bVar6 = false;
      uVar19 = 0;
      uVar21 = (long)ppuVar11[1] - (long)puVar1 >> 6;
      lVar18 = *plVar9;
      uVar20 = plVar9[1] - lVar18 >> 2;
      uVar26 = 0x3f800000;
      if ((param_6 & 1) == 0) {
        uVar26 = 0;
      }
      puVar10 = puVar1;
      uVar22 = uVar21;
      do {
        cVar2 = *(char *)((long)puVar10 + 0x17);
        lVar12 = (long)cVar2;
        puVar14 = puVar10;
        lVar15 = lVar12;
        if (lVar12 < 0) {
          puVar14 = *(uint **)puVar10;
          lVar15 = *(long *)(puVar10 + 2);
        }
        uVar23 = uVar22;
        if ((lVar15 == 4) && (*puVar14 == 0x74686777)) {
          if ((param_5 >> 0x20 & 1) != 0) {
            if (uVar20 <= uVar19) goto LAB_10a9e962c;
            *(float *)(lVar18 + uVar19 * 4) = (float)(int)param_5;
          }
        }
        else {
          puVar14 = puVar10;
          lVar15 = lVar12;
          if (cVar2 < '\0') {
            puVar14 = *(uint **)puVar10;
            lVar15 = *(long *)(puVar10 + 2);
          }
          if ((lVar15 == 4) && (*puVar14 == 0x6c617469)) {
            if (((uint)param_6 >> 8 & 1) != 0) {
              if (uVar20 <= uVar19) goto LAB_10a9e962c;
              *(undefined4 *)(lVar18 + uVar19 * 4) = uVar26;
            }
            bVar6 = true;
          }
          else {
            puVar14 = puVar10;
            if (cVar2 < '\0') {
              lVar12 = *(long *)(puVar10 + 2);
              puVar14 = *(uint **)puVar10;
            }
            if (lVar12 == 4) {
              uVar27 = (*puVar14 & 0xff00ff00) >> 8 | (*puVar14 & 0xff00ff) << 8;
              uVar3 = uVar27 >> 0x10 | uVar27 << 0x10;
              uVar27 = (uint)(uVar3 < 0x736c6e74);
              if (0x736c6e74 < uVar3) {
                uVar27 = 0xffffffff;
              }
              uVar23 = uVar19;
              if (uVar27 != 0) {
                uVar23 = uVar22;
              }
            }
          }
        }
        uVar19 = uVar19 + 1;
        puVar10 = puVar10 + 0x10;
        uVar22 = uVar23;
      } while (uVar21 != uVar19);
      if (((!bVar6) && (((uint)param_6 >> 8 & 1) != 0)) && (uVar23 < uVar21)) {
        uVar27 = 0;
        if ((param_6 & 1) != 0) {
          uVar27 = puVar1[uVar23 * 0x10 + 0xc];
        }
        if (uVar20 <= uVar23) {
LAB_10a9e962c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9e9630);
          (*pcVar5)();
        }
        *(uint *)(lVar18 + uVar23 * 4) = uVar27;
      }
    }
  }
  if (puStack_88 != (undefined4 *)0x0) {
    puStack_80 = puStack_88;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a9e93cc; end: 10a9e964b;  */

void FUN_10a9e93cc(long *param_1,long *param_2,undefined4 **param_3,ulong param_4,uint param_5)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 *puStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  lVar8 = *param_2;
  lVar6 = param_2[1];
  if (lVar8 == lVar6) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  puStack_48 = (undefined4 *)0x0;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (((ulong)param_3[3] & 1) == 0) {
    lVar8 = lVar6 - lVar8 >> 6;
  }
  else {
    lVar8 = lVar6 - lVar8 >> 6;
    if (lVar8 == (long)param_3[1] - (long)*param_3 >> 2) {
      if (&puStack_48 != param_3) {
        func_0x00010a14ddc8(&puStack_48,*param_3,param_3[1]);
      }
      goto LAB_10a9e9498;
    }
  }
  func_0x00010742a308(&puStack_48,lVar8);
  lVar8 = param_2[1] - *param_2;
  if (lVar8 != 0) {
    lVar8 = lVar8 >> 6;
    lVar6 = (long)puStack_40 - (long)puStack_48 >> 2;
    puVar10 = puStack_48;
    puVar12 = (undefined4 *)(*param_2 + 0x34);
    do {
      if (lVar6 == 0) goto LAB_10a9e962c;
      *puVar10 = *puVar12;
      lVar6 = lVar6 + -1;
      lVar8 = lVar8 + -1;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 0x10;
    } while (lVar8 != 0);
  }
LAB_10a9e9498:
  lVar8 = *param_2;
  lVar6 = param_2[1];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar8 != lVar6) {
    FUN_10a0ca588(param_1,puStack_48,puStack_40,(long)puStack_40 - (long)puStack_48 >> 2);
    puVar1 = (uint *)*param_2;
    if (param_2[1] - (long)puVar1 != 0) {
      bVar17 = false;
      uVar14 = 0;
      uVar13 = param_2[1] - (long)puVar1 >> 6;
      lVar8 = *param_1;
      uVar11 = param_1[1] - lVar8 >> 2;
      uVar18 = 0x3f800000;
      if ((param_5 & 1) == 0) {
        uVar18 = 0;
      }
      puVar5 = puVar1;
      uVar15 = uVar13;
      do {
        cVar2 = *(char *)((long)puVar5 + 0x17);
        lVar6 = (long)cVar2;
        puVar7 = puVar5;
        lVar9 = lVar6;
        if (lVar6 < 0) {
          puVar7 = *(uint **)puVar5;
          lVar9 = *(long *)(puVar5 + 2);
        }
        uVar16 = uVar15;
        if ((lVar9 == 4) && (*puVar7 == 0x74686777)) {
          if ((param_4 >> 0x20 & 1) != 0) {
            if (uVar11 <= uVar14) goto LAB_10a9e962c;
            *(float *)(lVar8 + uVar14 * 4) = (float)(int)param_4;
          }
        }
        else {
          puVar7 = puVar5;
          lVar9 = lVar6;
          if (cVar2 < '\0') {
            puVar7 = *(uint **)puVar5;
            lVar9 = *(long *)(puVar5 + 2);
          }
          if ((lVar9 == 4) && (*puVar7 == 0x6c617469)) {
            if ((param_5 >> 8 & 1) != 0) {
              if (uVar11 <= uVar14) goto LAB_10a9e962c;
              *(undefined4 *)(lVar8 + uVar14 * 4) = uVar18;
            }
            bVar17 = true;
          }
          else {
            puVar7 = puVar5;
            if (cVar2 < '\0') {
              lVar6 = *(long *)(puVar5 + 2);
              puVar7 = *(uint **)puVar5;
            }
            if (lVar6 == 4) {
              uVar19 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
              uVar3 = uVar19 >> 0x10 | uVar19 << 0x10;
              uVar19 = (uint)(uVar3 < 0x736c6e74);
              if (0x736c6e74 < uVar3) {
                uVar19 = 0xffffffff;
              }
              uVar16 = uVar14;
              if (uVar19 != 0) {
                uVar16 = uVar15;
              }
            }
          }
        }
        uVar14 = uVar14 + 1;
        puVar5 = puVar5 + 0x10;
        uVar15 = uVar16;
      } while (uVar13 != uVar14);
      if (((!bVar17) && ((param_5 >> 8 & 1) != 0)) && (uVar16 < uVar13)) {
        uVar19 = 0;
        if ((param_5 & 1) != 0) {
          uVar19 = puVar1[uVar16 * 0x10 + 0xc];
        }
        if (uVar11 <= uVar16) {
LAB_10a9e962c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9e9630);
          (*pcVar4)();
        }
        *(uint *)(lVar8 + uVar16 * 4) = uVar19;
      }
    }
  }
  if (puStack_48 != (undefined4 *)0x0) {
    puStack_40 = puStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a9e964c; end: 10a9e9a53;  */

void FUN_10a9e964c(long param_1,long *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  long *plVar9;
  
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x48) != *(long *)(param_1 + 0x50)))
  {
    plVar9 = (long *)(param_1 + 0x78);
    puStack_78 = &UNK_10e49e72c;
    plVar6 = plVar9;
    FUN_10a20651c(plVar9,param_2,&puStack_78);
    if (((ulong)plVar6 & 1) == 0) {
      if (plVar9 != param_2) {
        func_0x00010a14ddc8(plVar9,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
      }
      FUN_10a9fae88(&puStack_78,param_2[1] - *param_2 >> 2);
      lVar7 = *param_2;
      lVar13 = param_2[1] - lVar7;
      if (lVar13 == 0) {
        uVar12 = lStack_70 - (long)puStack_78;
      }
      else {
        lVar14 = 0;
        uVar12 = lStack_70 - (long)puStack_78;
        do {
          if ((long)uVar12 >> 3 == lVar14) goto LAB_10a9e99f4;
          *(long *)(puStack_78 + lVar14 * 8) = (long)(*(float *)(lVar7 + lVar14 * 4) * 65536.0);
          lVar14 = lVar14 + 1;
        } while (lVar13 >> 2 != lVar14);
      }
      uVar12 = uVar12 >> 3;
      func_0x000109759c34(*(undefined8 *)(param_1 + 0x20));
      if (*(long *)(param_1 + 0xb0) == 0) {
        func_0x0001096fc718(*(undefined8 *)(param_1 + 0xa0));
      }
      else {
        *(undefined8 *)(param_1 + 0xb0) = 0;
        (**(code **)(param_1 + 0xb8))();
        lVar7 = *(long *)(param_1 + 0xc0);
        *(undefined8 *)(param_1 + 0xc0) = 0;
        if (lVar7 != 0) {
          (**(code **)(param_1 + 200))();
        }
        lVar7 = *(long *)(param_1 + 0x20);
        uVar12 = 0;
        func_0x0001096fc5f0();
        if ((*(int *)(lVar7 + 4) != 0) && (*(undefined **)(lVar7 + 0xa0) == &UNK_1096fc390)) {
          **(undefined4 **)(lVar7 + 0x98) = 0;
        }
        lVar13 = *(long *)(param_1 + 0xa0);
        *(long *)(param_1 + 0xa0) = lVar7;
        if (lVar13 != 0) {
          (**(code **)(param_1 + 0xa8))(lVar13);
        }
        *(undefined **)(param_1 + 0xa8) = &SUB_1096fba38;
      }
      lVar7 = *param_2;
      lVar13 = param_2[1];
      if (lVar13 - lVar7 == 0) {
        puVar16 = (undefined4 *)0x0;
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = (undefined4 *)(lVar13 - lVar7 >> 2);
        if ((ulong)puVar8 >> 0x3d != 0) {
          func_0x00010a9faf50();
LAB_10a9e99f4:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9e99f8);
          (*pcVar3)();
        }
        FUN_10a9faf64();
        puVar16 = puVar8 + uVar12 * 2;
        lVar7 = *param_2;
        lVar13 = param_2[1];
      }
      puStack_90 = puVar8;
      if (lVar13 != lVar7) {
        lVar14 = 0;
        uVar12 = 0;
        do {
          if ((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 6) <= uVar12) break;
          plVar9 = (long *)(*(long *)(param_1 + 0x48) + lVar14);
          lVar11 = (long)*(char *)((long)plVar9 + 0x17);
          if (lVar11 < 0) {
            lVar11 = plVar9[1];
            plVar9 = (long *)*plVar9;
          }
          uVar4 = SUB84(plVar9,0);
          func_0x0001096f5c50();
          if ((ulong)(lVar13 - lVar7 >> 2) <= uVar12) goto LAB_10a9e99f4;
          uVar2 = *(undefined4 *)(lVar7 + uVar12 * 4);
          if (puVar8 < puVar16) {
            *puVar8 = uVar4;
            puVar8[1] = uVar2;
            puVar17 = puStack_90;
          }
          else {
            lVar7 = (long)puVar8 - (long)puStack_90;
            uVar1 = (lVar7 >> 3) + 1;
            if (uVar1 >> 0x3d != 0) {
              func_0x00010a9faf50();
              goto LAB_10a9e99f4;
            }
            uVar15 = (long)puVar16 - (long)puStack_90 >> 2;
            if (uVar15 <= uVar1) {
              uVar15 = uVar1;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)puVar16 - (long)puStack_90)) {
              uVar15 = 0x1fffffffffffffff;
            }
            FUN_10a9faf64();
            puVar8 = (undefined4 *)(uVar15 + lVar7);
            puVar16 = (undefined4 *)(uVar15 + lVar11 * 8);
            *puVar8 = uVar4;
            puVar8[1] = uVar2;
            puVar17 = puVar8 + (lVar7 >> 3) * -2;
            _memcpy(puVar17,puStack_90,lVar7);
            if (puStack_90 != (undefined4 *)0x0) {
              __ZdlPv(puStack_90);
            }
          }
          puStack_90 = puVar17;
          puVar8 = puVar8 + 2;
          uVar12 = uVar12 + 1;
          lVar7 = *param_2;
          lVar13 = param_2[1];
          lVar14 = lVar14 + 0x40;
        } while (uVar12 < (ulong)(lVar13 - lVar7 >> 2));
      }
      func_0x0001096fbc24(*(undefined8 *)(param_1 + 0xa0),puStack_90,
                          (ulong)((long)puVar8 - (long)puStack_90) >> 3);
      lVar7 = *(long *)(*(long *)(param_1 + 0xa0) + 0x20) + 0x170;
      func_0x000109747f24();
      iVar5 = 0xdfe4888;
      if (0xd < *(uint *)(lVar7 + 0x18)) {
        iVar5 = (int)*(undefined8 *)(lVar7 + 0x10);
      }
      func_0x000109700a58();
      if (iVar5 != 0) {
        uVar10 = *(undefined8 *)(param_1 + 0xa0);
        func_0x00010975149c();
        lVar7 = *(long *)(param_1 + 0xb0);
        *(undefined8 *)(param_1 + 0xb0) = uVar10;
        if (lVar7 != 0) {
          (**(code **)(param_1 + 0xb8))();
          uVar10 = *(undefined8 *)(param_1 + 0xb0);
        }
        *(undefined **)(param_1 + 0xb8) = &UNK_1097cf084;
        lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0xa0);
        FUN_10a9ef184(&uStack_88,*(undefined2 *)(lVar7 + 0x18),*(undefined2 *)(lVar7 + 0x1a),uVar10)
        ;
        uVar10 = uStack_88;
        uStack_88 = 0;
        lVar7 = *(long *)(param_1 + 0xc0);
        *(undefined8 *)(param_1 + 0xc0) = uVar10;
        if (lVar7 != 0) {
          (**(code **)(param_1 + 200))();
        }
        *(undefined8 *)(param_1 + 200) = uStack_80;
      }
      if (puStack_90 != (undefined4 *)0x0) {
        __ZdlPv(puStack_90);
      }
      if (puStack_78 != (undefined *)0x0) {
        __ZdlPv();
      }
    }
  }
  return;
}



/* Entry: 10a9e9a54; end: 10a9e9ad7;  */

float FUN_10a9e9a54(long param_1,long param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)param_1;
  fVar2 = (float)param_2 / 64.0;
  if ((float)param_2 / 64.0 < 0.0) {
    fVar2 = -((float)param_2 * 0.015625);
  }
  if ((param_1 != 0) && (_strcmp(iVar1,&UNK_10f689f89), iVar1 == 0)) {
    fVar2 = (float)(int)(fVar2 * 0.87108016);
  }
  return fVar2;
}



/* Entry: 10a9e9ad8; end: 10a9ec30b;  */

/* WARNING: Removing unreachable block (ram,0x00010a9ea82c) */
/* WARNING: Removing unreachable block (ram,0x00010a9ea610) */
/* WARNING: Removing unreachable block (ram,0x00010a9eb878) */
/* WARNING: Removing unreachable block (ram,0x00010a9ea8a4) */
/* WARNING: Removing unreachable block (ram,0x00010a9ebce0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a9e9ad8(undefined4 param_1,long *param_2,code *******param_3,code *******param_4,
                  code *******param_5,long *param_6,ulong param_7,ulong param_8,undefined8 param_9,
                  undefined8 param_10,long *******param_11,undefined4 param_12,int param_13)

{
  uint uVar1;
  bool bVar2;
  code *****pppppcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  code *******pppppppcVar10;
  long *plVar11;
  code *******pppppppcVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  long *******ppppppplVar16;
  code ******ppppppcVar17;
  code *******pppppppcVar18;
  code *******pppppppcVar19;
  code *******pppppppcVar20;
  long ******pppppplVar21;
  long lVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  ulong uVar27;
  code ******ppppppcVar28;
  ulong uVar29;
  long *****ppppplVar30;
  long ******pppppplVar31;
  code *******pppppppcVar32;
  long *plVar33;
  ulong uVar34;
  uint uVar35;
  int *piVar36;
  long *plVar37;
  uint *puVar38;
  ulong uVar39;
  long *plVar40;
  uint *puVar41;
  ulong uVar42;
  code *****pppppcVar43;
  code ******ppppppcVar44;
  long lVar45;
  uint uVar46;
  uint *puVar47;
  uint *puVar48;
  undefined8 *puVar49;
  code ****ppppcVar50;
  int iVar51;
  long *******ppppppplVar52;
  undefined4 *puVar53;
  code *******pppppppcVar54;
  uint *puVar55;
  code ******ppppppcVar56;
  uint uVar57;
  long lVar58;
  long lVar59;
  undefined8 *puVar60;
  undefined8 *puVar61;
  uint uStack_4b8;
  uint uStack_4b4;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  code *******pppppppcStack_468;
  undefined8 uStack_460;
  code *******pppppppcStack_458;
  code *******pppppppcStack_450;
  code *******pppppppcStack_448;
  code *******pppppppcStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined4 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  long lStack_388;
  undefined8 uStack_380;
  long *******ppppppplStack_378;
  long *******ppppppplStack_370;
  long lStack_368;
  uint *puStack_360;
  uint *puStack_358;
  undefined8 uStack_350;
  code *******pppppppcStack_348;
  code *******pppppppcStack_340;
  code *******pppppppcStack_338;
  undefined8 *puStack_330;
  long *plStack_328;
  uint *puStack_320;
  undefined4 *puStack_318;
  undefined4 *puStack_310;
  uint uStack_304;
  undefined8 uStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  ulong uStack_2d8;
  code *******pppppppcStack_2d0;
  code *******pppppppcStack_2c8;
  code *******pppppppcStack_2c0;
  code *******pppppppcStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  uint uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 uStack_220;
  code *******pppppppcStack_218;
  code *******pppppppcStack_210;
  undefined8 uStack_208;
  long lStack_200;
  uint *puStack_1f8;
  long *plStack_1f0;
  ulong uStack_1e8;
  float fStack_1e0;
  code ******ppppppcStack_1d8;
  code ******ppppppcStack_1d0;
  undefined8 uStack_1c8;
  code *******pppppppcStack_1c0;
  code *******pppppppcStack_1b8;
  code *****pppppcStack_1b0;
  code *****pppppcStack_1a8;
  code *******pppppppcStack_198;
  code *******pppppppcStack_190;
  code *******pppppppcStack_188;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  ulong uStack_170;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  undefined8 uStack_150;
  undefined4 uStack_144;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  undefined8 uStack_a0;
  code *******pppppppcStack_90;
  code *******pppppppcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  uVar24 = (uint)param_8;
  uStack_144 = param_1;
  if ((long *******)0x7ffffffffffffff7 < param_11) {
    func_0x000109ffde50();
LAB_10a9ebec8:
    func_0x000109ffded8();
    goto LAB_10a9ebee8;
  }
  if (param_11 < (long *******)0x17) {
    uStack_150 = CONCAT17((char)param_11,(undefined7)uStack_150);
    ppppppplVar16 = (long *******)&ppppppplStack_160;
    if (param_11 != (long *******)0x0) goto LAB_10a9e9b6c;
  }
  else {
    ppppppplVar52 = (long *******)0x19;
    if (((ulong)param_11 | 7) != 0x17) {
      ppppppplVar52 = (long *******)(((ulong)param_11 | 7) + 1);
    }
    ppppppplVar16 = ppppppplVar52;
    __Znwm();
    uStack_150 = (ulong)ppppppplVar52 | 0x8000000000000000;
    ppppppplStack_158 = param_11;
    ppppppplStack_160 = ppppppplVar16;
LAB_10a9e9b6c:
    _memmove(ppppppplVar16,param_10,param_11);
  }
  *(undefined1 *)((long)ppppppplVar16 + (long)param_11) = 0;
  if ((long)uStack_150 < 0) {
    func_0x000107c3192c(&ppppppplStack_180,ppppppplStack_160,ppppppplStack_158);
  }
  else {
    ppppppplStack_178 = ppppppplStack_158;
    ppppppplStack_180 = ppppppplStack_160;
    uStack_170 = uStack_150;
  }
  uVar57 = (uint)(param_7 >> 0x20);
  iVar51 = (int)(param_8 >> 8);
  ppppppcVar17 = param_4[4];
  uVar42 = param_7;
  if (ppppppcVar17 == (code ******)0x0) {
    bVar8 = false;
  }
  else {
    uStack_460 = (code *******)CONCAT44(uStack_460._4_4_,8);
    FUN_10a1cc830(ppppppcVar17,&uStack_460);
    if (ppppppcVar17 != (code ******)0x0) {
      pppppppcVar18 = (code *******)ppppppcVar17[3];
      ___dynamic_cast(pppppppcVar18,&PTR_DAT_110baded8,&PTR_DAT_110badf00,0);
      pppppppcVar54 = (code *******)ppppppcVar17[4];
      if (pppppppcVar54 != (code *******)0x0) {
        pppppppcVar12 = pppppppcVar54 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppppppcVar12,0x10);
          if (bVar8) {
            *pppppppcVar12 = (code ******)((long)*pppppppcVar12 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      uStack_460 = pppppppcVar18;
      pppppppcStack_458 = pppppppcVar54;
      FUN_10a1ccb30(&pppppppcStack_2d0,pppppppcVar18 + 2);
      uStack_2b0 = (code *******)pppppppcVar18[6];
      uStack_2a8 = CONCAT62(uStack_2a8._2_6_,*(undefined2 *)(pppppppcVar18 + 7));
      uStack_2a0 = CONCAT71(uStack_2a0._1_7_,1);
      if (pppppppcVar54 != (code *******)0x0) {
        pppppppcVar18 = pppppppcVar54 + 1;
        do {
          ppppppcVar17 = *pppppppcVar18;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppppppcVar18,0x10);
          if (bVar8) {
            *pppppppcVar18 = (code ******)((long)ppppppcVar17 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (ppppppcVar17 == (code ******)0x0) {
          (*(code *)(*pppppppcVar54)[2])(pppppppcVar54);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar54);
        }
      }
      if ((char)uStack_2a0 == '\x01') {
        if ((char)pppppppcStack_2b8 == '\x01') {
          pppppppcVar18 = pppppppcStack_2c8;
          if (-1 < (long)pppppppcStack_2c0) {
            pppppppcVar18 = (code *******)((ulong)pppppppcStack_2c0 >> 0x38);
          }
          if (pppppppcVar18 == (code *******)0x0) {
            bVar8 = false;
            uVar27 = 1;
          }
          else {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&ppppppplStack_180,&pppppppcStack_2d0);
            if ((char)uStack_2a0 != '\x01') goto LAB_10a9ebee8;
            iVar26 = 0;
            if ((param_8 >> 8 & 1) == 0) {
              iVar26 = iVar51;
            }
            uVar46 = 0;
            if ((param_7 >> 0x20 & 1) == 0) {
              uVar46 = uVar57;
            }
            uVar27 = (ulong)pppppppcStack_2b8 & 0xff;
            bVar8 = true;
            uVar57 = uVar46;
            iVar51 = iVar26;
          }
        }
        else {
          uVar27 = 0;
          bVar8 = false;
        }
        uVar46 = (uint)uStack_2b0;
        if (uStack_2b0._4_1_ == '\0') {
          uVar46 = (uint)param_7;
        }
        uVar42 = (ulong)uVar46;
        if (uStack_2b0._4_1_ != '\0') {
          uVar57 = 1;
        }
        if (uStack_2a8._1_1_ != '\0') {
          iVar51 = 1;
          uVar24 = (uint)(byte)uStack_2a8;
        }
        if (((uVar27 & 1) != 0) && ((long)pppppppcStack_2c0 < 0)) {
          __ZdlPv(pppppppcStack_2d0);
        }
        goto LAB_10a9e9d5c;
      }
    }
    bVar8 = false;
  }
LAB_10a9e9d5c:
  ppppppplVar52 = ppppppplStack_178;
  ppppppplVar16 = ppppppplStack_180;
  if (-1 < (long)uStack_170) {
    ppppppplVar52 = (long *******)(uStack_170 >> 0x38);
    ppppppplVar16 = (long *******)&ppppppplStack_180;
  }
  uVar42 = uVar42 & 0xffffffff | (ulong)(uVar57 & 0xff) << 0x20 | param_7 & 0xffffff0000000000;
  FUN_10a9e8c80(ppppppplVar16,ppppppplVar52,uVar42,uVar24 & 0xff | iVar51 << 8 & 0xffffU);
  pppppppcStack_190 = (code *******)0x0;
  pppppppcStack_198 = (code *******)0x0;
  pppppppcStack_188 = (code *******)0x0;
  lVar45 = *param_6;
  lVar22 = param_6[1];
  if (lVar45 != lVar22) {
    do {
      FUN_10a0ef2e4(&uStack_460,lVar45,ppppppplVar16,(ulong)ppppppplVar16 >> 0x20 & 1);
      pppppppcVar18 = pppppppcStack_190;
      pppppppcVar54 = pppppppcStack_198;
      if ((char)pppppppcStack_440 == '\x01') {
        if (pppppppcStack_190 < pppppppcStack_188) {
          if ((long)pppppppcStack_450 < 0) {
            func_0x000107c3192c(pppppppcStack_190,uStack_460,pppppppcStack_458);
          }
          else {
            pppppppcStack_190[2] = (code ******)pppppppcStack_450;
            pppppppcStack_190[1] = (code ******)pppppppcStack_458;
            *pppppppcStack_190 = (code ******)uStack_460;
          }
          *(undefined4 *)(pppppppcVar18 + 3) = pppppppcStack_448._0_4_;
          pppppppcVar18 = pppppppcVar18 + 4;
        }
        else {
          lVar58 = (long)pppppppcStack_190 - (long)pppppppcStack_198;
          lVar59 = lVar58 >> 5;
          uVar27 = lVar59 + 1;
          if (uVar27 >> 0x3b != 0) {
            FUN_10a9f9b30();
            goto LAB_10a9ebee8;
          }
          uVar29 = (long)pppppppcStack_188 - (long)pppppppcStack_198 >> 4;
          if (uVar29 <= uVar27) {
            uVar29 = uVar27;
          }
          if (0x7fffffffffffffdf < (ulong)((long)pppppppcStack_188 - (long)pppppppcStack_198)) {
            uVar29 = 0x7ffffffffffffff;
          }
          uStack_2b0 = (code *******)&pppppppcStack_198;
          if (uVar29 == 0) {
            ppppppcVar17 = (code ******)0x0;
          }
          else {
            if (uVar29 >> 0x3b != 0) {
              func_0x000109ffded8();
              goto LAB_10a9ebee8;
            }
            ppppppcVar17 = (code ******)(uVar29 << 5);
            __Znwm();
          }
          puVar60 = (undefined8 *)((long)ppppppcVar17 + lVar58);
          pppppppcVar12 = (code *******)(ppppppcVar17 + uVar29 * 4);
          pppppppcStack_2d0 = (code *******)ppppppcVar17;
          pppppppcStack_2c8 = (code *******)puVar60;
          pppppppcStack_2c0 = (code *******)puVar60;
          pppppppcStack_2b8 = pppppppcVar12;
          if ((long)pppppppcStack_450 < 0) {
            func_0x000107c3192c(puVar60,uStack_460,pppppppcStack_458);
            lVar59 = (long)pppppppcStack_190 - (long)pppppppcStack_198 >> 5;
            pppppppcVar54 = pppppppcStack_198;
            pppppppcVar18 = pppppppcStack_190;
          }
          else {
            puVar60[1] = pppppppcStack_458;
            *puVar60 = uStack_460;
            puVar60[2] = pppppppcStack_450;
          }
          *(undefined4 *)(puVar60 + 3) = pppppppcStack_448._0_4_;
          pppppppcVar32 = pppppppcVar54;
          pppppppcVar19 = (code *******)(puVar60 + lVar59 * -4);
          if (pppppppcVar54 != pppppppcVar18) {
            do {
              ppppppcVar28 = pppppppcVar32[1];
              ppppppcVar17 = *pppppppcVar32;
              pppppppcVar19[2] = pppppppcVar32[2];
              pppppppcVar19[1] = ppppppcVar28;
              *pppppppcVar19 = ppppppcVar17;
              pppppppcVar32[1] = (code ******)0x0;
              pppppppcVar32[2] = (code ******)0x0;
              *pppppppcVar32 = (code ******)0x0;
              *(undefined4 *)(pppppppcVar19 + 3) = *(undefined4 *)(pppppppcVar32 + 3);
              pppppppcVar32 = pppppppcVar32 + 4;
              pppppppcVar19 = pppppppcVar19 + 4;
            } while (pppppppcVar32 != pppppppcVar18);
            do {
              if (*(char *)((long)pppppppcVar54 + 0x17) < '\0') {
                __ZdlPv(*pppppppcVar54);
              }
              pppppppcVar54 = pppppppcVar54 + 4;
              pppppppcVar32 = pppppppcStack_198;
            } while (pppppppcVar54 != pppppppcVar18);
          }
          pppppppcVar18 = (code *******)(puVar60 + 4);
          pppppppcStack_2b8 = pppppppcStack_188;
          pppppppcStack_2d0 = pppppppcVar32;
          pppppppcStack_2c8 = pppppppcVar32;
          pppppppcStack_2c0 = pppppppcVar32;
          pppppppcStack_198 = (code *******)(puVar60 + lVar59 * -4);
          pppppppcStack_190 = pppppppcVar18;
          pppppppcStack_188 = pppppppcVar12;
          FUN_10a9f9b44(&pppppppcStack_2d0);
        }
        pppppppcStack_190 = pppppppcVar18;
        if (((char)pppppppcStack_440 == '\x01') && ((long)pppppppcStack_450 < 0)) {
          __ZdlPv(uStack_460);
        }
      }
      lVar45 = lVar45 + 0x18;
    } while (lVar45 != lVar22);
  }
  ppppppplVar52 = ppppppplStack_178;
  ppppppplVar16 = ppppppplStack_180;
  if (-1 < (long)uStack_170) {
    ppppppplVar52 = (long *******)(uStack_170 >> 0x38);
    ppppppplVar16 = (long *******)&ppppppplStack_180;
  }
  pppppppcVar18 = param_4;
  FUN_10a9e8848(&pppppcStack_1b0,param_4,param_5,uVar42,uVar24 & 0xff | iVar51 << 8 & 0xffffU,
                ppppppplVar16,ppppppplVar52);
  if (pppppcStack_1b0 == pppppcStack_1a8) {
LAB_10a9ea02c:
    pppppppcStack_1b8 = (code *******)0x0;
    pppppppcStack_1c0 = (code *******)0x0;
    uStack_1c8 = 0;
    ppppppcStack_1d0 = (code ******)0x0;
    ppppppcStack_1d8 = (code ******)0x0;
    param_5 = pppppppcStack_198;
    if (pppppppcStack_198 != pppppppcStack_190) {
      FUN_10a7a1b28(&pppppppcStack_2d0,param_3[0x44],pppppppcStack_198,pppppppcStack_198 + 3);
      pppppppcStack_1b8 = pppppppcStack_2c8;
      pppppppcStack_1c0 = pppppppcStack_2d0;
      pppppppcVar18 = &ppppppcStack_1d8;
      param_5 = (code *******)&pppppppcStack_2d0;
      FUN_10a9ec30c();
    }
    ppppppcVar17 = (code ******)&ppppppcStack_1d8;
  }
  else {
    pppppppcStack_1b8 = (code *******)0x0;
    pppppppcStack_1c0 = (code *******)0x0;
    ppppppcStack_1d0 = (code ******)0x0;
    ppppppcStack_1d8 = (code ******)0x0;
    uStack_1c8 = 0;
    if (*pppppcStack_1b0 == (code ****)0x0) goto LAB_10a9ea02c;
    ppppppcVar17 = &pppppcStack_1b0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x0001096f6e38();
  pppppppcVar54 = param_4;
  FUN_10a9ec3d0();
  func_0x0001096f7104(pppppppcVar18,pppppppcVar54,param_5,0,param_5);
  uVar24 = *(uint *)(pppppppcVar18 + 0xc);
  uVar27 = (ulong)uVar24;
  ppppppcVar28 = pppppppcVar18[0xe];
  puStack_1f8 = (uint *)0x0;
  lStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  fStack_1e0 = 1.0;
  pppppppcStack_2c0 = (code *******)0x0;
  pppppppcStack_2b8 = (code *******)((ulong)pppppppcStack_2b8 & 0xffffffff00000000);
  uStack_2a8 = 0;
  uStack_2b0 = (code *******)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_280 = 0;
  uStack_278 = 0x3f800000;
  uStack_268 = 0;
  lStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_240 = 0xffffffff;
  uStack_230 = 0;
  uStack_238 = 0;
  uStack_220 = 0;
  pppppppcStack_210 = (code *******)0x0;
  pppppppcStack_218 = (code *******)0x0;
  uStack_208 = 0;
  pppppppcStack_2c8 = (code *******)0x0;
  pppppppcStack_2d0 = (code *******)0x0;
  uStack_228 = uStack_144;
  uStack_224 = param_12;
  uStack_2e8 = 0;
  lStack_2f0 = 0;
  uStack_2d8 = 0;
  lStack_2e0 = 0;
  lStack_2f8 = 0;
  uStack_300 = 0;
  func_0x00010aa10420(&uStack_300,0xffffffff);
  pppppppcStack_348 = (code *******)&pppppppcStack_2d0;
  uStack_304 = 0xffffffff;
  puStack_320 = &uStack_304;
  puStack_318 = &uStack_144;
  puStack_310 = &param_12;
  puStack_360 = (uint *)0x0;
  puStack_358 = (uint *)0x0;
  uStack_350 = 0;
  ppppppplStack_378 = (long *******)&ppppppplStack_378;
  lStack_368 = 0;
  lStack_390 = 0;
  lStack_388 = 0;
  uStack_380 = 0;
  ppppppplStack_370 = ppppppplStack_378;
  pppppppcStack_340 = param_4;
  pppppppcStack_338 = param_3;
  puStack_330 = &uStack_300;
  plStack_328 = param_2;
  if (uVar24 != 0) {
    puStack_478 = (undefined8 *)0x0;
    puStack_470 = (undefined8 *)0x0;
    puVar60 = (undefined8 *)0x0;
    uVar57 = 0;
    pppppppcVar12 = param_3 + 5;
    uStack_4b4 = 0xffffffff;
    pppppppcVar32 = (code *******)0x0;
    iVar51 = param_13;
    pppppppcStack_468 = param_4;
LAB_10a9ea1d4:
    puVar47 = (uint *)((long)ppppppcVar28 + (long)(int)uVar57 * 0x14);
    uStack_460 = (code *******)CONCAT44(uStack_460._4_4_,*puVar47);
    FUN_10a4ef8f8(&puStack_360,&uStack_460,(long)&uStack_460 + 4,1);
    uVar46 = *puVar47;
    if ((uVar46 < 10) || ((0xd < uVar46 && 1 < uVar46 - 0x2028 && (uVar46 != 0x85)))) {
      bVar14 = false;
      while( true ) {
        lVar45 = (long)puStack_358 - (long)puStack_360 >> 2;
        uVar29 = (int)uVar57 + lVar45;
        if (uVar27 <= uVar29) break;
        uVar46 = (puVar47 + lVar45 * 5)[-5];
        if ((((9 < uVar46) && ((uVar46 < 0xe || uVar46 - 0x2028 < 2 || (uVar46 == 0x85)))) ||
            (uVar25 = uVar46, FUN_10a9ec418(), uVar25 == 0)) ||
           ((uVar25 = puVar47[lVar45 * 5], 9 < uVar25 &&
            ((uVar25 < 0xe || uVar25 - 0x2028 < 2 || (uVar25 == 0x85)))))) goto LAB_10a9ea508;
        if ((int)uVar46 < 0x2066) {
          if (uVar46 == 0x202a) {
LAB_10a9ea4a4:
            func_0x00010aa10420(&uStack_300,0);
            goto LAB_10a9ea4e0;
          }
          if (uVar46 != 0x202b) {
            uVar25 = 0x202c;
            goto LAB_10a9ea43c;
          }
LAB_10a9ea4b4:
          bVar14 = true;
          func_0x00010aa10420(&uStack_300,1);
        }
        else if ((int)uVar46 < 0x2068) {
          if (uVar46 == 0x2066) goto LAB_10a9ea4a4;
          if (uVar46 == 0x2067) goto LAB_10a9ea4b4;
        }
        else if (uVar46 == 0x2068) {
          func_0x00010aa10420(&uStack_300,0xffffffff);
LAB_10a9ea4e0:
          bVar14 = true;
        }
        else {
          uVar25 = 0x2069;
LAB_10a9ea43c:
          if (uVar46 == uVar25) {
            if (1 < uStack_2d8) {
              lVar45 = 0;
              if (lStack_2f0 != lStack_2f8) {
                lVar45 = (lStack_2f0 - lStack_2f8) * 0x80 + -1;
              }
              uVar29 = uStack_2d8 - 1;
              lVar22 = uStack_2d8 + lStack_2e0;
              uStack_2d8 = uVar29;
              if ((lVar45 - lVar22) - 0x7ffU < 0xfffffffffffff800) {
                __ZdlPv(*(undefined8 *)(lStack_2f0 + -8));
                lStack_2f0 = lStack_2f0 + -8;
              }
              goto LAB_10a9ea4e0;
            }
            bVar14 = false;
          }
        }
        FUN_10a0e6678(&puStack_360,
                      puVar47 + ((ulong)((long)puStack_358 - (long)puStack_360) >> 2) * 5);
      }
      goto LAB_10a9ea5bc;
    }
    uVar46 = uVar57;
    for (puVar23 = (uint *)((long)ppppppcVar28 + (long)(int)uVar57 * 0x14 + 0x14);
        ((uVar46 = uVar46 + 1, uVar46 < uVar24 && (uVar25 = *puVar23, 9 < uVar25)) &&
        ((uVar25 < 0xe || uVar25 - 0x2028 < 2 || (uVar25 == 0x85)))); puVar23 = puVar23 + 5) {
      FUN_10a0e6678(&puStack_360);
    }
    plVar37 = &lStack_390;
    if (pppppppcStack_2d0 != (code *******)0x0) {
      plVar37 = &lStack_270;
    }
    if ((long)puStack_358 - (long)puStack_360 != 0) {
      iVar26 = 0;
      uVar29 = (long)puStack_358 - (long)puStack_360 >> 2;
      do {
        piVar36 = (int *)((long)ppppppcVar28 + (long)(int)(iVar26 + uVar57) * 0x14);
        if (((*piVar36 == 0xd) && ((ulong)(long)(iVar26 + 1) < uVar29)) && (piVar36[5] == 10)) {
          uStack_460 = (code *******)CONCAT44(uStack_460._4_4_,2);
          FUN_109febd04(plVar37,&uStack_460);
          iVar26 = iVar26 + 1;
        }
        else {
          uStack_460 = (code *******)CONCAT44(uStack_460._4_4_,1);
          FUN_109febd04(plVar37,&uStack_460);
        }
        iVar26 = iVar26 + 1;
        uVar29 = (long)puStack_358 - (long)puStack_360 >> 2;
      } while ((ulong)(long)iVar26 < uVar29);
    }
    pppppppcStack_468 = (code *******)0x0;
    bVar14 = false;
    uStack_4b4 = 0xffffffff;
    puVar23 = puStack_360;
    puVar48 = puStack_360;
    puVar38 = puStack_358;
    goto joined_r0x00010a9ead9c;
  }
  puStack_470 = (undefined8 *)0x0;
  if (pppppppcStack_2d0 != (code *******)0x0) goto LAB_10a9ebafc;
  goto LAB_10a9ebb1c;
LAB_10a9ea508:
  do {
    puVar23 = (uint *)((long)ppppppcVar28 + uVar29 * 0x14);
    uVar46 = *puVar23;
    if (uVar46 == 0x200d) {
      FUN_10a0e6678(&puStack_360,puVar23);
      uVar34 = uVar29 + 1;
      if (uVar34 < uVar27) {
        FUN_10a0e6678(&puStack_360,(long)ppppppcVar28 + uVar34 * 0x14);
        uVar29 = uVar34;
      }
    }
    else {
      if ((uVar46 - 0x202a < 3) ||
         ((uVar46 >> 4 != 0xfe0 &&
          ((uVar25 = uVar46, FUN_10a9ec418(), uVar25 == 0 ||
           ((9 < uVar46 && ((uVar46 < 0xe || uVar46 - 0x2028 < 2 || (uVar46 == 0x85)))))))))) break;
      FUN_10a0e6678(&puStack_360,puVar23);
    }
    uVar29 = uVar29 + 1;
  } while (uVar29 < uVar27);
LAB_10a9ea5bc:
  uVar4 = param_12;
  pppppppcStack_88 = (code *******)0x0;
  pppppppcStack_90 = (code *******)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0x3f800000;
  pppppcVar3 = ppppppcVar17[1];
  puVar23 = puStack_360;
  for (pppppcVar43 = *ppppppcVar17; puStack_360 = puVar23, pppppcVar43 != pppppcVar3;
      pppppcVar43 = pppppcVar43 + 1) {
    if (*pppppcVar43 != (code ****)0x0) {
      FUN_10a9e1910(&ppppppplStack_b0);
      FUN_10a9eebbc(&uStack_460,&ppppppplStack_b0,*(undefined4 *)(*pppppcVar43 + 0x22));
      pppppppcStack_468 = param_3 + 8;
      FUN_10aa11050(pppppppcStack_468,&uStack_460);
      if (pppppppcStack_468 == (code *******)0x0) {
LAB_10a9ea6f4:
        bVar6 = true;
      }
      else {
        lStack_c8 = 0;
        lStack_c0 = 0;
        uStack_b8 = 0;
        FUN_10a0723d0(&lStack_c8,puStack_360,puStack_358,(long)puStack_358 - (long)puStack_360 >> 2)
        ;
        pppppppcVar19 = pppppppcStack_468 + 6;
        FUN_10a9eecb8(pppppppcVar19,&lStack_c8);
        if (lStack_c8 != 0) {
          lStack_c0 = lStack_c8;
          __ZdlPv();
        }
        if ((int)pppppppcVar19 == 0) {
          FUN_10aa119e0(&pppppppcStack_90,pppppppcStack_468 + 2,pppppppcStack_468 + 2);
          goto LAB_10a9ea6f4;
        }
        FUN_10a9e9088(param_3,pppppppcStack_468 + 6,uVar4);
        FUN_10a9e1ad4(&ppppppplStack_b0,*pppppcVar43);
        FUN_10a1e8610(pppppppcStack_468 + 6,&ppppppplStack_b0);
        ppppppplVar52 = ppppppplStack_a8;
        if (ppppppplStack_a8 != (long *******)0x0) {
          ppppppplVar16 = ppppppplStack_a8 + 1;
          do {
            pppppplVar21 = *ppppppplVar16;
            cVar7 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
            if (bVar6) {
              *ppppppplVar16 = (long ******)((long)pppppplVar21 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (pppppplVar21 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_a8)[2])(ppppppplStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar52);
          }
        }
        bVar6 = false;
      }
      if ((long)pppppppcStack_450 < 0) {
        __ZdlPv(uStack_460);
      }
      if (!bVar6) goto LAB_10a9ead8c;
    }
    puVar23 = puStack_360;
  }
  ppppppcVar56 = param_3[5];
  ppppppcVar44 = param_3[6];
  if (ppppppcVar56 != ppppppcVar44) {
    lVar45 = (long)puStack_358 - (long)puVar23;
    do {
      if ((lVar45 == (long)ppppppcVar56[1] - (long)*ppppppcVar56) &&
         (puVar48 = puVar23, _memcmp(puVar23,*ppppppcVar56,lVar45), (int)puVar48 == 0)) {
        pppppppcStack_468 = (code *******)0x0;
        goto LAB_10a9ead8c;
      }
      ppppppcVar56 = ppppppcVar56 + 3;
    } while (ppppppcVar56 != ppppppcVar44);
  }
  if (pppppppcVar32 == (code *******)0x0) {
LAB_10a9ea7f0:
    pppppcVar3 = ppppppcVar17[1];
    for (pppppcVar43 = *ppppppcVar17; plVar37 = plStack_1f0, pppppppcVar32 = pppppppcStack_190,
        pppppcVar43 != pppppcVar3; pppppcVar43 = pppppcVar43 + 1) {
      if (*pppppcVar43 != (code ****)0x0) {
        FUN_10a9e1910(&plStack_e0);
        FUN_10a9eebbc(&uStack_460,&plStack_e0,*(undefined4 *)(*pppppcVar43 + 0x22));
        pppppppcStack_468 = param_3 + 8;
        FUN_10aa11050(pppppppcStack_468,&uStack_460);
        if (pppppppcStack_468 == (code *******)0x0) {
          FUN_10a9e1910(&plStack_e0,*pppppcVar43);
          pppppppcStack_468 = param_3;
          FUN_10a9df994(param_3,&plStack_e0,*(undefined4 *)(*pppppcVar43 + 0x22),0,0);
          if (pppppppcStack_468 == (code *******)0x0) {
            pppppppcStack_468 = (code *******)0x0;
            iVar26 = 5;
          }
          else {
            lStack_f8 = 0;
            lStack_f0 = 0;
            uStack_e8 = 0;
            FUN_10a0723d0(&lStack_f8,puStack_360,puStack_358,
                          (long)puStack_358 - (long)puStack_360 >> 2);
            pppppppcVar32 = pppppppcStack_468 + 6;
            FUN_10a9eecb8(pppppppcVar32,&lStack_f8);
            if (lStack_f8 != 0) {
              lStack_f0 = lStack_f8;
              __ZdlPv();
            }
            if ((int)pppppppcVar32 == 0) {
              FUN_10aa11f34(param_3 + 8,pppppppcStack_468);
              iVar26 = 0;
            }
            else {
              FUN_10a9e9088(param_3,pppppppcStack_468 + 6,uVar4);
              FUN_10a9e1ad4(&plStack_e0,*pppppcVar43);
              FUN_10a1e8610(pppppppcStack_468 + 6,&plStack_e0);
              plVar37 = plStack_d8;
              if (plStack_d8 != (long *)0x0) {
                plVar33 = plStack_d8 + 1;
                do {
                  lVar45 = *plVar33;
                  cVar7 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                  if (bVar6) {
                    *plVar33 = lVar45 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (lVar45 == 0) {
                  (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar37);
                }
              }
              iVar26 = 1;
            }
          }
        }
        else {
          iVar26 = 0;
        }
        if ((long)pppppppcStack_450 < 0) {
          __ZdlPv(uStack_460);
        }
        if ((iVar26 != 5) && (iVar26 != 0)) goto LAB_10a9ead8c;
      }
    }
    for (; pppppppcVar20 = pppppppcStack_198, pppppppcVar19 = pppppppcStack_198,
        pppppppcVar10 = pppppppcVar32, plVar37 != (long *)0x0; plVar37 = (long *)*plVar37) {
      pppppppcVar19 = (code *******)&pppppppcStack_90;
      pppppppcStack_190 = pppppppcVar32;
      FUN_10aa11e34(pppppppcVar19,plVar37[2] + 0x10);
      if (pppppppcVar19 == (code *******)0x0) {
        lVar22 = plVar37[2];
        plStack_e0 = (long *)0x0;
        plStack_d8 = (long *)0x0;
        uStack_d0 = 0;
        FUN_10a0723d0(&plStack_e0,puStack_360,puStack_358,(long)puStack_358 - (long)puStack_360 >> 2
                     );
        lVar45 = lVar22 + 0x30;
        FUN_10a9eecb8(lVar45,&plStack_e0);
        if (plStack_e0 != (long *)0x0) {
          plStack_d8 = plStack_e0;
          __ZdlPv();
        }
        if ((int)lVar45 != 0) {
          FUN_10a9e9088(param_3,lVar22 + 0x30,uVar4);
          pppppppcStack_468 = (code *******)plVar37[2];
          goto LAB_10a9ead8c;
        }
        FUN_10aa119e0(&pppppppcStack_90,plVar37[2] + 0x10,plVar37[2] + 0x10);
      }
      pppppppcVar32 = pppppppcStack_190;
    }
    for (; pppppppcStack_198 = pppppppcVar19, pppppppcStack_190 = pppppppcVar10,
        pppppppcVar20 != pppppppcVar32; pppppppcVar20 = pppppppcVar20 + 4) {
      FUN_10a9eebbc(&uStack_460,pppppppcVar20,*(undefined4 *)(pppppppcVar20 + 3));
      pppppppcStack_468 = param_3 + 8;
      FUN_10aa11050(pppppppcStack_468,&uStack_460);
      if (pppppppcStack_468 == (code *******)0x0) {
LAB_10a9eaac4:
        iVar26 = 0;
      }
      else {
        pppppppcVar19 = (code *******)&pppppppcStack_90;
        FUN_10aa11e34(pppppppcVar19,pppppppcStack_468 + 2);
        if (pppppppcVar19 == (code *******)0x0) {
          lStack_110 = 0;
          lStack_108 = 0;
          uStack_100 = 0;
          FUN_10a0723d0(&lStack_110,puStack_360,puStack_358,
                        (long)puStack_358 - (long)puStack_360 >> 2);
          pppppppcVar19 = pppppppcStack_468 + 6;
          FUN_10a9eecb8(pppppppcVar19,&lStack_110);
          if (lStack_110 != 0) {
            lStack_108 = lStack_110;
            __ZdlPv();
          }
          if ((int)pppppppcVar19 == 0) {
            FUN_10aa119e0(&pppppppcStack_90,pppppppcStack_468 + 2,pppppppcStack_468 + 2);
            goto LAB_10a9eaac4;
          }
          FUN_10a9e9088(param_3,pppppppcStack_468 + 6,uVar4);
          iVar26 = 1;
        }
        else {
          iVar26 = 9;
        }
      }
      if ((long)pppppppcStack_450 < 0) {
        __ZdlPv(uStack_460);
      }
      if ((iVar26 != 9) && (iVar26 != 0)) goto LAB_10a9ead8c;
      pppppppcVar19 = pppppppcStack_198;
      pppppppcVar10 = pppppppcStack_190;
    }
    for (; pppppppcVar19 != pppppppcVar10; pppppppcVar19 = pppppppcVar19 + 4) {
      FUN_10a9eebbc(&uStack_460,pppppppcVar19,*(undefined4 *)(pppppppcVar19 + 3));
      pppppppcVar32 = param_3 + 8;
      FUN_10aa11050(pppppppcVar32,&uStack_460);
      if (pppppppcVar32 == (code *******)0x0) {
        pppppppcStack_468 = param_3;
        FUN_10a9df994(param_3,pppppppcVar19,*(undefined4 *)(pppppppcVar19 + 3),0,0);
        if (pppppppcStack_468 == (code *******)0x0) {
          pppppppcStack_468 = (code *******)0x0;
        }
        else {
          lStack_138 = 0;
          lStack_140 = 0;
          uStack_130 = 0;
          FUN_10a0723d0(&lStack_140,puStack_360,puStack_358,
                        (long)puStack_358 - (long)puStack_360 >> 2);
          pppppppcVar32 = pppppppcStack_468 + 6;
          FUN_10a9eecb8(pppppppcVar32,&lStack_140);
          if (lStack_140 != 0) {
            lStack_138 = lStack_140;
            __ZdlPv();
          }
          if ((int)pppppppcVar32 != 0) {
            FUN_10a9e9088(param_3,pppppppcStack_468 + 6,uVar4);
            iVar26 = 1;
            goto LAB_10a9eac3c;
          }
          FUN_10aa11f34(param_3 + 8,pppppppcStack_468);
        }
        iVar26 = 0;
      }
      else {
        pppppppcVar20 = (code *******)&pppppppcStack_90;
        FUN_10aa11e34(pppppppcVar20,pppppppcVar32 + 2);
        if (pppppppcVar20 == (code *******)0x0) {
          lStack_120 = 0;
          lStack_128 = 0;
          uStack_118 = 0;
          FUN_10a0723d0(&lStack_128,puStack_360,puStack_358,
                        (long)puStack_358 - (long)puStack_360 >> 2);
          pppppppcVar20 = pppppppcVar32 + 6;
          FUN_10a9eecb8(pppppppcVar20,&lStack_128);
          if (lStack_128 != 0) {
            lStack_120 = lStack_128;
            __ZdlPv();
          }
          if ((int)pppppppcVar20 != 0) {
            FUN_10a9e9088(param_3,pppppppcVar32 + 6,uVar4);
            iVar26 = 1;
            pppppppcStack_468 = pppppppcVar32;
            goto LAB_10a9eac3c;
          }
        }
        iVar26 = 0xb;
      }
LAB_10a9eac3c:
      if ((long)pppppppcStack_450 < 0) {
        __ZdlPv(uStack_460);
      }
      if ((iVar26 != 0xb) && (iVar26 != 0)) goto LAB_10a9ead8c;
    }
    ppppppcVar56 = param_3[6];
    if (ppppppcVar56 < param_3[7]) {
      *ppppppcVar56 = (code *****)0x0;
      ppppppcVar56[1] = (code *****)0x0;
      ppppppcVar56[2] = (code *****)0x0;
      FUN_10a0723d0(ppppppcVar56,puStack_360,puStack_358,(long)puStack_358 - (long)puStack_360 >> 2)
      ;
      ppppppcVar56 = ppppppcVar56 + 3;
      param_3[6] = ppppppcVar56;
    }
    else {
      lVar45 = (long)ppppppcVar56 - (long)*pppppppcVar12;
      uVar29 = (lVar45 >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar29) {
        FUN_10a7bf884();
        goto LAB_10a9ebee8;
      }
      lVar22 = (long)param_3[7] - (long)*pppppppcVar12 >> 3;
      uVar34 = lVar22 * 0x5555555555555556;
      if (uVar34 < uVar29 || uVar34 - uVar29 == 0) {
        uVar34 = uVar29;
      }
      if (0x555555555555554 < (ulong)(lVar22 * -0x5555555555555555)) {
        uVar34 = 0xaaaaaaaaaaaaaaa;
      }
      pppppppcStack_440 = pppppppcVar12;
      if (uVar34 == 0) {
        pppppppcVar32 = (code *******)0x0;
      }
      else {
        pppppppcVar32 = pppppppcVar12;
        FUN_10a7bf898();
      }
      puVar49 = (undefined8 *)((long)pppppppcVar32 + lVar45);
      *puVar49 = 0;
      puVar49[1] = 0;
      puVar49[2] = 0;
      uStack_460 = pppppppcVar32;
      pppppppcStack_458 = (code *******)puVar49;
      pppppppcStack_450 = (code *******)puVar49;
      pppppppcStack_448 = pppppppcVar32 + uVar34 * 3;
      FUN_10a0723d0(puVar49,puStack_360,puStack_358,(long)puStack_358 - (long)puStack_360 >> 2);
      ppppppcVar56 = (code ******)(puVar49 + 3);
      ppppppcVar44 = (code ******)((long)puVar49 - ((long)param_3[6] - (long)param_3[5]));
      _memcpy(ppppppcVar44);
      uStack_460 = (code *******)param_3[5];
      param_3[5] = ppppppcVar44;
      param_3[6] = ppppppcVar56;
      pppppppcStack_448 = (code *******)param_3[7];
      param_3[7] = (code ******)(pppppppcVar32 + uVar34 * 3);
      pppppppcStack_458 = uStack_460;
      pppppppcStack_450 = uStack_460;
      func_0x000107442cc4(&uStack_460);
    }
    pppppppcStack_468 = (code *******)0x0;
    param_3[6] = ppppppcVar56;
  }
  else {
    pppppppcVar19 = (code *******)&pppppppcStack_90;
    FUN_10aa11e34(pppppppcVar19,pppppppcVar32 + 2);
    if (((pppppppcVar19 != (code *******)0x0) || (pppppppcVar32[0x18] != (code ******)0x0)) ||
       ((*(byte *)((long)pppppppcVar32[10] + 0x11) >> 6 & 1) != 0)) goto LAB_10a9ea7f0;
    ppppppplStack_b0 = (long *******)0x0;
    ppppppplStack_a8 = (long *******)0x0;
    uStack_a0 = 0;
    FUN_10a0723d0(&ppppppplStack_b0,puStack_360,puStack_358,
                  (long)puStack_358 - (long)puStack_360 >> 2);
    pppppppcVar19 = pppppppcVar32 + 6;
    FUN_10a9eecb8(pppppppcVar19,&ppppppplStack_b0);
    if (ppppppplStack_b0 != (long *******)0x0) {
      ppppppplStack_a8 = ppppppplStack_b0;
      __ZdlPv();
    }
    if ((int)pppppppcVar19 == 0) {
      FUN_10aa119e0(&pppppppcStack_90,pppppppcVar32 + 2,pppppppcVar32 + 2);
      goto LAB_10a9ea7f0;
    }
    FUN_10a9e9088(param_3,pppppppcVar32 + 6,uVar4);
    pppppppcStack_468 = pppppppcVar32;
  }
LAB_10a9ead8c:
  FUN_10aa1197c(&pppppppcStack_90);
  puVar23 = puStack_360;
  puVar48 = puStack_360;
  puVar38 = puStack_358;
joined_r0x00010a9ead9c:
  for (; puVar41 = puStack_358, puVar55 = puStack_360, puStack_360 = puVar48, puVar23 != puStack_358
      ; puVar23 = puVar23 + 1) {
    uVar25 = 0;
    uVar46 = *puVar23;
    uVar29 = (ulong)uVar46;
    uVar35 = 0x1ec;
    do {
      uVar1 = uVar35 + uVar25;
      uVar9 = uVar1 - uVar1 % 2;
      puStack_358 = puVar38;
      if (0x3d9 < uVar9) goto LAB_10a9ebee8;
      if (uVar46 < *(uint *)(&UNK_10e4e9854 + (ulong)uVar9 * 4)) {
        if ((uVar1 == uVar1 % 2) ||
           (uVar35 = uVar1 / 2, *(uint *)(&UNK_10e4e9854 + (ulong)(uVar9 - 1) * 4) < uVar46))
        goto LAB_10a9eaecc;
      }
      else {
        if (uVar9 == 0x3d9) goto LAB_10a9ebee8;
        if (uVar46 <= *(uint *)(&UNK_10e4e9854 + (ulong)(uVar9 + 1) * 4)) goto LAB_10a9eaef4;
        if ((uVar9 == 0x3d8) ||
           (uVar25 = uVar1 / 2, uVar46 < *(uint *)(&UNK_10e4e9854 + (ulong)(uVar9 + 2) * 4)))
        goto LAB_10a9eaecc;
      }
    } while (uVar25 + 1 != uVar35);
    uVar25 = uVar25 << 1;
    if (0x3d9 < uVar25) goto LAB_10a9ebee8;
    if ((uVar46 < *(uint *)(&UNK_10e4e9854 + (ulong)uVar25 * 4)) ||
       (*(uint *)(&UNK_10e4e9854 + (ulong)(uVar25 | 1) * 4) < uVar46)) {
      uVar35 = uVar35 << 1;
      if (0x3d9 < uVar35) goto LAB_10a9ebee8;
      if ((uVar46 < *(uint *)(&UNK_10e4e9854 + (ulong)uVar35 * 4)) ||
         (*(uint *)(&UNK_10e4e9854 + (ulong)(uVar35 | 1) * 4) < uVar46)) {
LAB_10a9eaecc:
        FUN_10a9ec418();
        if (((uVar29 & 1) == 0) && ((uVar46 != 0x200d && ((uVar46 & 0xfffffff0) != 0xfe00))))
        goto LAB_10a9eb11c;
      }
    }
LAB_10a9eaef4:
    puVar48 = puStack_360;
    puVar38 = puStack_358;
    puStack_358 = puVar41;
    puStack_360 = puVar55;
  }
  bVar15 = false;
  uStack_4b8 = 0;
  bVar6 = true;
  uVar46 = uStack_4b4;
  puStack_358 = puVar38;
LAB_10a9eaf10:
  uStack_4b4 = uVar46;
  if (pppppppcStack_468 == (code *******)0x0) {
    if (pppppppcStack_2d0 != (code *******)0x0) {
LAB_10a9eaf70:
      bVar2 = false;
      if (uStack_240 == 1) {
        bVar2 = bVar15;
      }
      puVar61 = puVar60;
      puVar49 = puStack_470;
      if (bVar2 && uStack_4b4 == 0) {
        pppppppcVar32 = pppppppcStack_2c8;
        if (puStack_470 != puVar60) {
          do {
            lVar45 = lStack_368 + 1;
            iVar26 = *(int *)((long)puVar60 + -4);
            func_0x00010a9ec4b4();
            ppppppplVar52 = ppppppplStack_370;
            puVar61 = puVar60;
            if (iVar26 == 0) break;
            pppppplVar21 = (long ******)0x20;
            __Znwm();
            puVar61 = (undefined8 *)((long)puVar60 + -0xc);
            ppppplVar30 = (long *****)*puVar61;
            *(undefined4 *)(pppppplVar21 + 3) = *(undefined4 *)((long)puVar60 + -4);
            pppppplVar21[2] = ppppplVar30;
            pppppplVar31 = *ppppppplVar52;
            pppppplVar31[1] = (long *****)pppppplVar21;
            *pppppplVar21 = (long *****)pppppplVar31;
            *ppppppplVar52 = pppppplVar21;
            pppppplVar21[1] = (long *****)ppppppplVar52;
            puVar60 = puVar61;
            lStack_368 = lVar45;
          } while (puVar61 != puStack_470);
          goto LAB_10a9eaff4;
        }
      }
      else {
LAB_10a9eaff4:
        pppppppcVar32 = pppppppcStack_2c8;
        if (((bVar15) && (uStack_240 == 0)) && (uStack_4b4 == 1)) {
          while (pppppppcVar32 = pppppppcStack_2c8, puStack_470 != puVar61) {
            lVar45 = lStack_368 + 1;
            iVar26 = *(int *)((long)puVar61 + -4);
            func_0x00010a9ec4b4();
            ppppppplVar52 = ppppppplStack_370;
            pppppppcVar32 = pppppppcStack_2c8;
            if (iVar26 == 0) break;
            pppppplVar21 = (long ******)0x20;
            __Znwm();
            ppppplVar30 = *(long ******)((long)puVar61 + -0xc);
            *(undefined4 *)(pppppplVar21 + 3) = *(undefined4 *)((long)puVar61 + -4);
            pppppplVar21[2] = ppppplVar30;
            pppppplVar31 = *ppppppplVar52;
            pppppplVar31[1] = (long *****)pppppplVar21;
            *pppppplVar21 = (long *****)pppppplVar31;
            *ppppppplVar52 = pppppplVar21;
            pppppplVar21[1] = (long *****)ppppppplVar52;
            puVar61 = (undefined8 *)((long)puVar61 + -0xc);
            lStack_368 = lVar45;
          }
        }
      }
      for (; pppppppcStack_2c8 = pppppppcVar32, puVar49 != puVar61;
          puVar49 = (undefined8 *)((long)puVar49 + 0xc)) {
        puVar53 = (undefined4 *)((long)puVar49 + 4);
        func_0x0001096f628c(pppppppcVar32,*(undefined4 *)puVar49,*puVar53);
        *(undefined4 *)((long)pppppppcVar32 + 0xb4) = 0;
        puVar60 = &uStack_298;
        FUN_10aa104f0(puVar60,*puVar53,puVar53);
        *(int *)((long)puVar60 + 0x14) = iVar51;
        iVar26 = 1;
        if (*(short *)((long)puVar49 + 10) != 0) {
          iVar26 = 2;
        }
        iVar51 = iVar26 + iVar51;
        pppppppcVar32 = pppppppcStack_2c8;
      }
      pppppppcVar32 = (code *******)(long)(int)pppppppcStack_2b8;
      if (param_5 < pppppppcVar32) {
        FUN_109ffdddc(&UNK_10f2fca6e);
        goto LAB_10a9ebee8;
      }
      uVar34 = (ulong)(puVar47[2] - (int)pppppppcStack_2b8) - lStack_368;
      uVar29 = (long)param_5 - (long)pppppppcVar32;
      if (uVar34 <= (ulong)((long)param_5 - (long)pppppppcVar32)) {
        uVar29 = uVar34;
      }
      FUN_10a9ec548(&pppppppcStack_348,(long)pppppppcVar54 + (long)pppppppcVar32,uVar29);
      puVar60 = puStack_470;
      if (pppppppcStack_468 != (code *******)0x0) goto LAB_10a9eb27c;
    }
    uVar46 = *puVar47;
    if ((9 < uVar46) &&
       ((((uVar46 < 0xe || (uVar46 - 0x2028 < 2)) || (uVar46 == 0x85)) &&
        ((long)puStack_358 - (long)puStack_360 != 0)))) {
      lVar45 = (long)puStack_358 - (long)puStack_360 >> 2;
      puVar23 = puStack_360;
      do {
        iVar26 = 1;
        if (*(short *)((long)puVar23 + 2) != 0) {
          iVar26 = 2;
        }
        iVar51 = iVar26 + iVar51;
        puVar23 = puVar23 + 1;
        lVar45 = lVar45 + -1;
      } while (lVar45 != 0);
    }
LAB_10a9eb27c:
    if (bVar14) {
      if (uStack_2d8 == 0) goto LAB_10a9ebee8;
      uVar29 = (uStack_2d8 + lStack_2e0) - 1;
      uStack_304 = *(uint *)(*(long *)(lStack_2f8 + (uVar29 >> 10) * 8) + (uVar29 & 0x3ff) * 4);
    }
    puVar23 = puStack_360;
    puVar48 = puStack_358;
    if (pppppppcStack_468 == (code *******)0x0) goto LAB_10a9eba94;
    puVar49 = &uStack_460;
    func_0x000107c2b05c(puVar49,pppppppcStack_468 + 2);
    puVar23 = puStack_1f8;
    uVar29 = (long)puVar49 + 0x9e3779b9;
    puVar48 = (uint *)((long)*(int *)(pppppppcStack_468 + 5) + 0x9e3779b9 + uVar29 * 0x40 +
                       (uVar29 >> 2) ^ uVar29);
    if (puStack_1f8 != (uint *)0x0) {
      uVar29 = (long)puStack_1f8 - 1;
      if (((ulong)puStack_1f8 & uVar29) == 0) {
        puVar55 = (uint *)((ulong)puVar48 & uVar29);
      }
      else {
        puVar55 = puVar48;
        if (puStack_1f8 <= puVar48) {
          uVar34 = 0;
          if (puStack_1f8 != (uint *)0x0) {
            uVar34 = (ulong)puVar48 / (ulong)puStack_1f8;
          }
          puVar55 = (uint *)((long)puVar48 - uVar34 * (long)puStack_1f8);
        }
      }
      plVar37 = *(long **)(lStack_200 + (long)puVar55 * 8);
      if (plVar37 != (long *)0x0) {
        do {
          while( true ) {
            plVar37 = (long *)*plVar37;
            if (plVar37 == (long *)0x0) goto LAB_10a9eb384;
            puVar38 = (uint *)plVar37[1];
            if (puVar38 != puVar48) break;
            if ((code *******)plVar37[2] == pppppppcStack_468) goto LAB_10a9eb66c;
          }
          if (((ulong)puStack_1f8 & uVar29) == 0) {
            puVar38 = (uint *)((ulong)puVar38 & uVar29);
          }
          else if (puStack_1f8 <= puVar38) {
            uVar34 = 0;
            if (puStack_1f8 != (uint *)0x0) {
              uVar34 = (ulong)puVar38 / (ulong)puStack_1f8;
            }
            puVar38 = (uint *)((long)puVar38 - uVar34 * (long)puStack_1f8);
          }
        } while (puVar38 == puVar55);
      }
    }
LAB_10a9eb384:
    plVar37 = (long *)0x18;
    __Znwm();
    *plVar37 = 0;
    plVar37[1] = (long)puVar48;
    plVar37[2] = (long)pppppppcStack_468;
    if ((puVar23 == (uint *)0x0) || (fStack_1e0 * (float)puVar23 < (float)(uStack_1e8 + 1))) {
      uVar29 = 1;
      if ((uint *)0x2 < puVar23) {
        uVar29 = (ulong)(((ulong)puVar23 & (long)puVar23 - 1U) != 0);
      }
      puVar38 = (uint *)(uVar29 | (long)puVar23 << 1);
      puVar55 = (uint *)(long)((float)(uStack_1e8 + 1) / fStack_1e0);
      if (puVar38 <= puVar55) {
        puVar38 = puVar55;
      }
      if ((long)puVar38 - 1U == 0) {
        puVar38 = (uint *)0x2;
      }
      else if (((ulong)puVar38 & (long)puVar38 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        puVar23 = puStack_1f8;
      }
      if (puVar23 < puVar38) {
LAB_10a9eb440:
        if ((ulong)puVar38 >> 0x3d != 0) goto LAB_10a9ebec8;
        lVar45 = (long)puVar38 << 3;
        __Znwm();
        bVar14 = lStack_200 != 0;
        lStack_200 = lVar45;
        if (bVar14) {
          __ZdlPv();
        }
        puVar23 = (uint *)0x0;
        do {
          *(undefined8 *)(lStack_200 + (long)puVar23 * 8) = 0;
          puVar23 = (uint *)((long)puVar23 + 1);
        } while (puVar38 != puVar23);
        puVar23 = puVar38;
        puStack_1f8 = puVar38;
        if (plStack_1f0 != (long *)0x0) {
          puVar55 = (uint *)plStack_1f0[1];
          uVar29 = (long)puVar38 - 1;
          if (((ulong)puVar38 & uVar29) == 0) {
            puVar55 = (uint *)((ulong)puVar55 & uVar29);
          }
          else if (puVar38 <= puVar55) {
            uVar34 = 0;
            if (puVar38 != (uint *)0x0) {
              uVar34 = (ulong)puVar55 / (ulong)puVar38;
            }
            puVar55 = (uint *)((long)puVar55 - uVar34 * (long)puVar38);
          }
          *(long ***)(lStack_200 + (long)puVar55 * 8) = &plStack_1f0;
          plVar33 = (long *)*plStack_1f0;
          plVar11 = plStack_1f0;
          while (plVar33 != (long *)0x0) {
            puVar41 = (uint *)plVar33[1];
            if (((ulong)puVar38 & uVar29) == 0) {
              puVar41 = (uint *)((ulong)puVar41 & uVar29);
            }
            else if (puVar38 <= puVar41) {
              uVar34 = 0;
              if (puVar38 != (uint *)0x0) {
                uVar34 = (ulong)puVar41 / (ulong)puVar38;
              }
              puVar41 = (uint *)((long)puVar41 - uVar34 * (long)puVar38);
            }
            plVar40 = plVar33;
            if (puVar41 != puVar55) {
              if (*(long *)(lStack_200 + (long)puVar41 * 8) == 0) {
                *(long **)(lStack_200 + (long)puVar41 * 8) = plVar11;
                puVar55 = puVar41;
              }
              else {
                *plVar11 = *plVar33;
                *plVar33 = **(long **)(lStack_200 + (long)puVar41 * 8);
                **(undefined8 **)(lStack_200 + (long)puVar41 * 8) = plVar33;
                plVar40 = plVar11;
              }
            }
            plVar11 = plVar40;
            plVar33 = (long *)*plVar40;
          }
        }
      }
      else if (puVar38 < puVar23) {
        puVar55 = (uint *)(long)((float)uStack_1e8 / fStack_1e0);
        if ((puVar23 < (uint *)0x3) || (((ulong)puVar23 & (long)puVar23 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((uint *)0x1 < puVar55) {
          puVar55 = (uint *)(1L << (-LZCOUNT((long)puVar55 + -1) & 0x3fU));
        }
        lVar45 = lStack_200;
        if (puVar38 <= puVar55) {
          puVar38 = puVar55;
        }
        bVar14 = puVar38 < puVar23;
        puVar23 = puStack_1f8;
        if (bVar14) {
          if (puVar38 != (uint *)0x0) goto LAB_10a9eb440;
          lStack_200 = 0;
          if (lVar45 != 0) {
            __ZdlPv();
          }
          puStack_1f8 = (uint *)0x0;
          puVar23 = (uint *)0x0;
        }
      }
      if (((ulong)puVar23 & (long)puVar23 - 1U) == 0) {
        puVar55 = (uint *)((long)puVar23 - 1U & (ulong)puVar48);
      }
      else {
        puVar55 = puVar48;
        if (puVar23 <= puVar48) {
          uVar29 = 0;
          if (puVar23 != (uint *)0x0) {
            uVar29 = (ulong)puVar48 / (ulong)puVar23;
          }
          puVar55 = (uint *)((long)puVar48 - uVar29 * (long)puVar23);
        }
      }
    }
    plVar33 = *(long **)(lStack_200 + (long)puVar55 * 8);
    if (plVar33 == (long *)0x0) {
      *plVar37 = (long)plStack_1f0;
      *(long ***)(lStack_200 + (long)puVar55 * 8) = &plStack_1f0;
      plStack_1f0 = plVar37;
      if (*plVar37 != 0) {
        puVar48 = *(uint **)(*plVar37 + 8);
        if (((ulong)puVar23 & (long)puVar23 - 1U) == 0) {
          puVar48 = (uint *)((ulong)puVar48 & (long)puVar23 - 1U);
        }
        else if (puVar23 <= puVar48) {
          uVar29 = 0;
          if (puVar23 != (uint *)0x0) {
            uVar29 = (ulong)puVar48 / (ulong)puVar23;
          }
          puVar48 = (uint *)((long)puVar48 - uVar29 * (long)puVar23);
        }
        plVar33 = (long *)(lStack_200 + (long)puVar48 * 8);
        goto LAB_10a9eb65c;
      }
    }
    else {
      *plVar37 = *plVar33;
LAB_10a9eb65c:
      *plVar33 = (long)plVar37;
    }
    uStack_1e8 = uStack_1e8 + 1;
LAB_10a9eb66c:
    uStack_240 = 2;
    if (uStack_304 != 0xffffffff) {
      uStack_240 = uStack_304;
    }
    if (!bVar6) {
      uStack_240 = uStack_4b8;
    }
    pppppppcStack_2d0 = pppppppcStack_468;
    if ((long)uStack_170 < 0) {
      func_0x000107c3192c(&ppppppplStack_b0,ppppppplStack_180,ppppppplStack_178);
    }
    else {
      ppppppplStack_a8 = ppppppplStack_178;
      ppppppplStack_b0 = ppppppplStack_180;
      uStack_a0 = uStack_170;
    }
    ppppppcVar56 = pppppppcStack_468[6];
    bVar14 = false;
    if (ppppppcVar56 != (code ******)0x0) {
      bVar14 = bVar8;
    }
    uVar29 = uVar42;
    if (bVar14) {
      ppppppplVar52 = ppppppplStack_178;
      if (-1 < (long)uStack_170) {
        ppppppplVar52 = (long *******)(uStack_170 >> 0x38);
      }
      if (ppppppplVar52 != (long *******)0x0) {
        ppppppplVar52 = ppppppplStack_180;
        if (-1 < (long)uStack_170) {
          ppppppplVar52 = (long *******)&ppppppplStack_180;
        }
        ppppppcVar44 = ppppppcVar56;
        FUN_10ab19af8(ppppppcVar56,ppppppplVar52);
        if (((ulong)ppppppcVar44 & 1) != 0) goto LAB_10a9eb734;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&ppppppplStack_b0,&ppppppplStack_160);
      uVar29 = param_7;
    }
LAB_10a9eb734:
    uStack_460 = (code *******)((ulong)uStack_460 & 0xffffffffffffff00);
    pppppppcStack_448 = (code *******)((ulong)pppppppcStack_448 & 0xffffffffffffff00);
    if ((long)uStack_a0 < 0) {
      if ((ppppppplStack_a8 != (long *******)0x0) &&
         (ppppppplVar52 = ppppppplStack_b0, ppppppcVar56 != (code ******)0x0)) goto LAB_10a9eb764;
LAB_10a9eb7c4:
      ppppppplVar52 = ppppppplStack_a8;
      ppppppplVar16 = ppppppplStack_b0;
      if (-1 < (long)uStack_a0) {
        ppppppplVar52 = (long *******)(uStack_a0 >> 0x38);
        ppppppplVar16 = (long *******)&ppppppplStack_b0;
      }
      FUN_10a9e8c80(ppppppplVar16,ppppppplVar52,uVar29);
      uVar29 = uVar29 & 0xffffff0000000000 | (ulong)ppppppplVar16 & 0xffffffff | 0x100000000;
    }
    else {
      if ((uStack_a0._7_1_ == '\0') || (ppppppcVar56 == (code ******)0x0)) goto LAB_10a9eb7c4;
      ppppppplVar52 = (long *******)&ppppppplStack_b0;
LAB_10a9eb764:
      FUN_10ab19c08(&pppppppcStack_90,ppppppcVar56,ppppppplVar52);
      func_0x00010a9fa008(&uStack_460,&pppppppcStack_90);
      if (((char)uStack_78 == '\x01') && (pppppppcStack_90 != (code *******)0x0)) {
        pppppppcStack_88 = pppppppcStack_90;
        __ZdlPv();
      }
      if (((char)pppppppcStack_448 != '\x01') ||
         ((long)pppppppcStack_458 - (long)uStack_460 >> 2 !=
          (long)pppppppcStack_468[0x10] - (long)pppppppcStack_468[0xf] >> 6)) goto LAB_10a9eb7c4;
    }
    FUN_10a9e93cc(&pppppppcStack_90,pppppppcStack_468 + 0xf,&uStack_460,uVar29);
    pppppppcVar32 = pppppppcStack_218;
    if (pppppppcStack_218 != (code *******)0x0) {
      pppppppcStack_210 = pppppppcStack_218;
      __ZdlPv();
      pppppppcVar32 = pppppppcStack_218;
    }
    pppppppcStack_210 = pppppppcStack_88;
    pppppppcStack_218 = pppppppcStack_90;
    uStack_208 = uStack_80;
    if (((char)pppppppcStack_448 == '\x01') &&
       (pppppppcVar32 = uStack_460, uStack_460 != (code *******)0x0)) {
      pppppppcStack_458 = uStack_460;
      __ZdlPv();
    }
    func_0x0001096f6e38();
    pppppppcVar19 = pppppppcStack_2c8;
    bVar14 = pppppppcStack_2c8 != (code *******)0x0;
    pppppppcStack_2c8 = pppppppcVar32;
    if (bVar14) {
      (*(code *)pppppppcStack_2c0)(pppppppcVar19);
    }
    pppppppcStack_2c0 = (code *******)&SUB_1096f6e98;
    pppppppcStack_2b8 = (code *******)CONCAT44(pppppppcStack_2b8._4_4_,puVar47[2]);
    *(undefined4 *)(pppppppcStack_2c8 + 6) = 1;
    if (lStack_368 != 0) {
      ppppppplVar52 = ppppppplStack_370;
      if ((long ********)ppppppplStack_370 != &ppppppplStack_378) {
        do {
          pppppppcVar32 = pppppppcStack_2c8;
          puVar53 = (undefined4 *)((long)ppppppplVar52 + 0x14);
          func_0x0001096f628c(pppppppcStack_2c8,*(undefined4 *)(ppppppplVar52 + 2),*puVar53);
          *(undefined4 *)((long)pppppppcVar32 + 0xb4) = 0;
          puVar49 = &uStack_298;
          FUN_10aa104f0(puVar49,*puVar53,puVar53);
          *(int *)((long)puVar49 + 0x14) = iVar51;
          iVar26 = 1;
          if (*(short *)((long)ppppppplVar52 + 0x1a) != 0) {
            iVar26 = 2;
          }
          iVar51 = iVar26 + iVar51;
          ppppppplVar52 = (long *******)ppppppplVar52[1];
        } while ((long ********)ppppppplVar52 != &ppppppplStack_378);
        if (lStack_368 == 0) goto LAB_10a9ebee8;
      }
      pppppppcStack_2b8 =
           (code *******)
           CONCAT44(pppppppcStack_2b8._4_4_,*(undefined4 *)((long)ppppppplStack_370 + 0x14));
      FUN_10a9fa268(&ppppppplStack_378);
    }
  }
  else {
    if (pppppppcStack_2d0 == (code *******)0x0) goto LAB_10a9eb27c;
    if ((pppppppcStack_468[10] != pppppppcStack_2d0[10]) ||
       ((bVar15 || bVar14) ||
        (pppppppcStack_468[0x18] != (code ******)0x0) !=
        (pppppppcStack_2d0[0x18] != (code ******)0x0))) goto LAB_10a9eaf70;
  }
  if (uStack_240 != 2) {
    bVar6 = true;
  }
  if (!bVar6) {
    uStack_240 = 0xffffffff;
  }
  puVar23 = puStack_358;
  puVar48 = puStack_358;
  if (puStack_358 != puStack_360) {
    uVar29 = 0;
    puVar53 = (undefined4 *)((long)ppppppcVar28 + (long)(int)uVar57 * 0x14 + 8);
    puVar23 = puStack_360;
    do {
      uVar5 = puVar53[-2];
      uVar4 = *puVar53;
      uVar46 = puVar23[uVar29];
      if (puVar60 < puStack_478) {
        *(undefined4 *)puVar60 = uVar5;
        *(undefined4 *)((long)puVar60 + 4) = uVar4;
        *(uint *)(puVar60 + 1) = uVar46;
        puVar49 = puStack_470;
      }
      else {
        lVar45 = (long)puVar60 - (long)puStack_470;
        uVar34 = (lVar45 >> 2) * -0x5555555555555555 + 1;
        if (0x1555555555555555 < uVar34) {
          FUN_10a9fa08c();
          goto LAB_10a9ebee8;
        }
        lVar22 = (long)puStack_478 - (long)puStack_470 >> 2;
        uVar39 = lVar22 * 0x5555555555555556;
        if (uVar39 < uVar34 || uVar39 - uVar34 == 0) {
          uVar39 = uVar34;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar22 * -0x5555555555555555)) {
          uVar39 = 0x1555555555555555;
        }
        if (0x1555555555555555 < uVar39) {
          func_0x000109ffded8();
          goto LAB_10a9ebee8;
        }
        lVar22 = uVar39 * 0xc;
        __Znwm();
        puVar60 = (undefined8 *)(lVar22 + lVar45);
        puStack_478 = (undefined8 *)(lVar22 + uVar39 * 0xc);
        *(undefined4 *)puVar60 = uVar5;
        *(undefined4 *)((long)puVar60 + 4) = uVar4;
        *(uint *)(puVar60 + 1) = uVar46;
        uVar34 = SUB168(SEXT816(lVar45) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
        puVar49 = (undefined8 *)((long)puVar60 + ((uVar34 >> 1) - ((long)uVar34 >> 0x3f)) * 0xc);
        _memcpy(puVar49,puStack_470,lVar45);
        if (puStack_470 != (undefined8 *)0x0) {
          __ZdlPv(puStack_470);
          puVar23 = puStack_360;
          puVar48 = puStack_358;
        }
      }
      puStack_470 = puVar49;
      puVar60 = (undefined8 *)((long)puVar60 + 0xc);
      puVar53 = puVar53 + 5;
      uVar29 = uVar29 + 1;
    } while (uVar29 < (ulong)((long)puVar48 - (long)puVar23 >> 2));
  }
LAB_10a9eba94:
  uVar57 = uVar57 + (int)((ulong)((long)puVar48 - (long)puVar23) >> 2);
  pppppppcVar32 = pppppppcStack_468;
  if (uVar24 <= uVar57) goto LAB_10a9ebbc8;
  goto LAB_10a9ea1d4;
LAB_10a9eb11c:
  do {
    uVar25 = 0;
    uVar46 = *puVar55;
    uVar35 = 0x7d;
    do {
      uVar1 = uVar35 + uVar25;
      uVar9 = uVar1 - uVar1 % 2;
      if (0xfb < uVar9) goto LAB_10a9ebee8;
      if (uVar46 < *(uint *)(&UNK_10e4ea7bc + (ulong)uVar9 * 4)) {
        if ((uVar1 == uVar1 % 2) ||
           (uVar35 = uVar1 / 2, *(uint *)(&UNK_10e4ea7bc + (ulong)(uVar9 - 1) * 4) < uVar46))
        goto LAB_10a9eb204;
      }
      else {
        if (uVar9 == 0xfb) goto LAB_10a9ebee8;
        if (uVar46 <= *(uint *)(&UNK_10e4ea7bc + (ulong)(uVar9 + 1) * 4)) goto LAB_10a9eb4f8;
        if ((uVar9 == 0xfa) ||
           (uVar25 = uVar1 / 2, uVar46 < *(uint *)(&UNK_10e4ea7bc + (ulong)(uVar9 + 2) * 4)))
        goto LAB_10a9eb204;
      }
    } while (uVar25 + 1 != uVar35);
    uVar25 = uVar25 << 1;
    if (0xfb < uVar25) goto LAB_10a9ebee8;
    if ((*(uint *)(&UNK_10e4ea7bc + (ulong)uVar25 * 4) <= uVar46) &&
       (uVar46 <= *(uint *)(&UNK_10e4ea7bc + (ulong)(uVar25 | 1) * 4))) {
LAB_10a9eb4f8:
      uStack_4b8 = 1;
      goto LAB_10a9eb500;
    }
    uVar35 = uVar35 << 1;
    if (0xfb < uVar35) goto LAB_10a9ebee8;
    if ((*(uint *)(&UNK_10e4ea7bc + (ulong)uVar35 * 4) <= uVar46) &&
       (uVar46 <= *(uint *)(&UNK_10e4ea7bc + (ulong)(uVar35 | 1) * 4))) goto LAB_10a9eb4f8;
LAB_10a9eb204:
    puVar55 = puVar55 + 1;
  } while (puVar55 != puVar41);
  uStack_4b8 = 0;
LAB_10a9eb500:
  if (uStack_240 == 2) {
    uStack_240 = uStack_4b8;
  }
  bVar6 = false;
  bVar15 = uStack_240 == (uStack_4b8 ^ 1);
  uVar46 = uStack_240;
  if (uStack_4b4 != 0xffffffff) {
    uVar46 = uStack_4b4;
  }
  goto LAB_10a9eaf10;
LAB_10a9ebbc8:
  puVar49 = puStack_470;
  pppppppcVar12 = pppppppcStack_2c8;
  if (pppppppcStack_2d0 != (code *******)0x0) {
    for (; pppppppcStack_2c8 = pppppppcVar12, puVar49 != puVar60;
        puVar49 = (undefined8 *)((long)puVar49 + 0xc)) {
      puVar53 = (undefined4 *)((long)puVar49 + 4);
      func_0x0001096f628c(pppppppcVar12,*(undefined4 *)puVar49,*puVar53);
      *(undefined4 *)((long)pppppppcVar12 + 0xb4) = 0;
      puVar61 = &uStack_298;
      FUN_10aa104f0(puVar61,*puVar53,puVar53);
      *(int *)((long)puVar61 + 0x14) = iVar51;
      iVar26 = 1;
      if (*(short *)((long)puVar49 + 10) != 0) {
        iVar26 = 2;
      }
      iVar51 = iVar26 + iVar51;
      pppppppcVar12 = pppppppcStack_2c8;
    }
LAB_10a9ebafc:
    if (param_5 < (code *******)(long)(int)pppppppcStack_2b8) {
      FUN_109ffdddc(&UNK_10f2fca6e);
      goto LAB_10a9ebee8;
    }
    FUN_10a9ec548(&pppppppcStack_348,(long)pppppppcVar54 + (long)(int)pppppppcStack_2b8);
  }
LAB_10a9ebb1c:
  uVar4 = param_12;
  if (uStack_2d8 == 0) {
LAB_10a9ebee8:
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10a9ebeec);
    (*pcVar13)();
  }
  uVar42 = (uStack_2d8 + lStack_2e0) - 1;
  if (*(int *)(*(long *)(lStack_2f8 + (uVar42 >> 10) * 8) + (uVar42 & 0x3ff) * 4) == -1) {
    lVar22 = param_2[1];
    for (lVar45 = *param_2; lVar45 != lVar22; lVar45 = lVar45 + 0xd0) {
      if (*(int *)(lVar45 + 0x90) == 2) {
        *(undefined4 *)(lVar45 + 0x90) = 0;
      }
    }
  }
  if (lStack_390 != lStack_388) {
    lVar45 = *param_2;
    if (lVar45 != param_2[1]) {
      lVar22 = *(long *)(lVar45 + 0x78);
      if (lVar22 != 0) {
        *(long *)(lVar45 + 0x80) = lVar22;
        __ZdlPv();
        *(long *)(lVar45 + 0x78) = 0;
        *(undefined8 *)(lVar45 + 0x80) = 0;
        *(undefined8 *)(lVar45 + 0x88) = 0;
      }
      *(long *)(lVar45 + 0x80) = lStack_388;
      *(long *)(lVar45 + 0x78) = lStack_390;
      *(undefined8 *)(lVar45 + 0x88) = uStack_380;
      goto LAB_10a9ebd8c;
    }
    uStack_460 = (code *******)0x0;
    pppppppcStack_458 = (code *******)0x0;
    pppppppcStack_448 = (code *******)((ulong)pppppppcStack_448 & 0xffffffff00000000);
    pppppppcStack_450 = (code *******)0x0;
    uStack_438 = 0;
    pppppppcStack_440 = (code *******)0x0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_410 = 0;
    uStack_408 = 0x3f800000;
    uStack_3f8 = 0;
    uStack_400 = 0;
    lStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    lStack_3e0 = 0;
    uStack_3d0 = 0xffffffff;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3b8 = 0x3f800000;
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_3b0 = 1;
    pppppcVar3 = ppppppcVar17[1];
    for (pppppcVar43 = *ppppppcVar17; pppppcVar43 != pppppcVar3; pppppcVar43 = pppppcVar43 + 1) {
      ppppcVar50 = *pppppcVar43;
      if (ppppcVar50 != (code ****)0x0) {
        FUN_10a9e1910(&pppppppcStack_90,ppppcVar50);
        pppppppcVar54 = param_3;
        FUN_10a9df994(param_3,&pppppppcStack_90,*(undefined4 *)(ppppcVar50 + 0x22),0,0);
        if ((pppppppcVar54 != (code *******)0x0) && (pppppppcVar54[10] != (code ******)0x0)) {
          FUN_10a9e9088(param_3,pppppppcVar54 + 6,uVar4);
          goto LAB_10a9ebd38;
        }
      }
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f689b0e,&UNK_10f689b49,0x10ea,&UNK_10f689c11);
    }
    pppppppcVar54 = (code *******)0x0;
LAB_10a9ebd38:
    uStack_460 = pppppppcVar54;
    if (lStack_3e8 != 0) {
      lStack_3e0 = lStack_3e8;
      __ZdlPv();
    }
    lStack_3e0 = lStack_388;
    lStack_3e8 = lStack_390;
    uStack_3d8 = uStack_380;
    lStack_388 = 0;
    uStack_380 = 0;
    lStack_390 = 0;
    FUN_10a9ec8c4(param_2,&uStack_460);
    FUN_10a9fa1e0(&uStack_460);
  }
  if (lStack_390 != 0) {
    lStack_388 = lStack_390;
    __ZdlPv();
  }
LAB_10a9ebd8c:
  FUN_10a9fa268(&ppppppplStack_378);
  if (puStack_470 != (undefined8 *)0x0) {
    __ZdlPv(puStack_470);
  }
  if (puStack_360 != (uint *)0x0) {
    puStack_358 = puStack_360;
    __ZdlPv();
  }
  FUN_10a9fa2c4(&uStack_300);
  FUN_10a9fa1e0(&pppppppcStack_2d0);
  func_0x00010aa103d8(&lStack_200);
  if (pppppppcVar18 != (code *******)0x0) {
    func_0x0001096f6e98(pppppppcVar18);
  }
  if (ppppppcStack_1d8 != (code ******)0x0) {
    ppppppcStack_1d0 = ppppppcStack_1d8;
    __ZdlPv();
  }
  pppppppcVar18 = pppppppcStack_1b8;
  if (pppppppcStack_1b8 != (code *******)0x0) {
    pppppppcVar54 = pppppppcStack_1b8 + 1;
    do {
      ppppppcVar17 = *pppppppcVar54;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppppppcVar54,0x10);
      if (bVar8) {
        *pppppppcVar54 = (code ******)((long)ppppppcVar17 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppppppcVar17 == (code ******)0x0) {
      (*(code *)(*pppppppcStack_1b8)[2])(pppppppcStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar18);
    }
  }
  if (pppppcStack_1b0 != (code *****)0x0) {
    __ZdlPv();
  }
  FUN_10a9fa3e8(&pppppppcStack_198);
  if ((long)uStack_170 < 0) {
    __ZdlPv(ppppppplStack_180);
  }
  if ((long)uStack_150 < 0) {
    __ZdlPv(ppppppplStack_160);
  }
  return;
}



/* Entry: 10a9ec30c; end: 10a9ec3cf;  */

undefined1 ** FUN_10a9ec30c(undefined1 **param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 uStack_49;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < param_1[2]) {
    puVar10 = puVar2 + 1;
    *puVar2 = *param_2;
    ppuVar5 = param_1;
  }
  else {
    lVar9 = (long)puVar2 - (long)*param_1;
    uVar1 = (lVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a9f9828();
      pcStack_38 = FUN_10a9ec3d0;
      puStack_40 = &stack0xfffffffffffffff0;
      if (*(uint *)(param_1 + 3) != 0xffffffff) {
        puStack_48 = &uStack_49;
        ppuVar5 = &puStack_48;
        (*(code *)(&PTR_FUN_110c37768)[*(uint *)(param_1 + 3)])(ppuVar5,param_1);
        return ppuVar5;
      }
      FUN_10a0d459c();
      uVar3 = (uint)param_1;
      if (0x20 < uVar3) {
        if ((uVar3 & 0xfffffff0) == 0x2000) {
          return (undefined1 **)0x1;
        }
        if (uVar3 == 0x61c) {
          return (undefined1 **)0x1;
        }
        if (uVar3 - 0x80 < 0x21) {
          return (undefined1 **)0x1;
        }
        if ((0x35 < uVar3 - 0x202a) ||
           ((0x2000000000003fU >> ((ulong)(uVar3 - 0x202a) & 0x3f) & 1) == 0)) {
          if (0x2065 < uVar3) {
            if (uVar3 < 0x206a) {
              return (undefined1 **)0x1;
            }
            if (uVar3 == 0x3000) {
              return (undefined1 **)0x1;
            }
            if (uVar3 == 0xfeff) {
              return (undefined1 **)0x1;
            }
          }
          return (undefined1 **)(ulong)(uVar3 - 0xfff0 < 0xd);
        }
      }
      return (undefined1 **)0x1;
    }
    uVar6 = (long)param_1[2] - (long)*param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    ppuVar4 = param_1;
    FUN_10a9f983c();
    puVar2 = (undefined8 *)((long)ppuVar4 + lVar9);
    puVar10 = puVar2 + 1;
    *puVar2 = *param_2;
    puVar8 = (undefined1 *)((long)puVar2 - ((long)param_1[1] - (long)*param_1));
    _memcpy(puVar8);
    ppuVar5 = (undefined1 **)*param_1;
    *param_1 = puVar8;
    param_1[1] = (undefined1 *)puVar10;
    param_1[2] = (undefined1 *)(ppuVar4 + uVar7);
    if (ppuVar5 != (undefined1 **)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (undefined1 *)puVar10;
  return ppuVar5;
}



/* Entry: 10a9ec3d0; end: 10a9ec417;  */

undefined1 ** FUN_10a9ec3d0(long param_1)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    puStack_18 = &uStack_19;
    ppuVar2 = &puStack_18;
    (*(code *)(&PTR_FUN_110c37768)[*(uint *)(param_1 + 0x18)])(ppuVar2,param_1);
    return ppuVar2;
  }
  FUN_10a0d459c();
  uVar1 = (uint)param_1;
  if (0x20 < uVar1) {
    if ((uVar1 & 0xfffffff0) == 0x2000) {
      return (undefined1 **)0x1;
    }
    if (uVar1 == 0x61c) {
      return (undefined1 **)0x1;
    }
    if (uVar1 - 0x80 < 0x21) {
      return (undefined1 **)0x1;
    }
    if ((0x35 < uVar1 - 0x202a) ||
       ((0x2000000000003fU >> ((ulong)(uVar1 - 0x202a) & 0x3f) & 1) == 0)) {
      if (0x2065 < uVar1) {
        if (uVar1 < 0x206a) {
          return (undefined1 **)0x1;
        }
        if (uVar1 == 0x3000) {
          return (undefined1 **)0x1;
        }
        if (uVar1 == 0xfeff) {
          return (undefined1 **)0x1;
        }
      }
      return (undefined1 **)(ulong)(uVar1 - 0xfff0 < 0xd);
    }
  }
  return (undefined1 **)0x1;
}


