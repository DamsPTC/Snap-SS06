/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074e9450; end: 1074e9897;  */

undefined4 FUN_1074e9450(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 in_stack_00000150;
  
  if (param_3[0xc] != 0) {
    puVar1 = param_3;
    func_0x00010727f740();
    if (((ulong)puVar1 >> 0x20 & 1) == 0) {
      if (*(char *)(param_3 + 0xb) == '\x01') {
        in_stack_00000150 = param_3[10];
      }
    }
    else {
      in_stack_00000150 = SUB84(puVar1,0);
    }
    return in_stack_00000150;
  }
  return *param_3;
}



/* Entry: 1074e9898; end: 1074e9a87;  */

void FUN_1074e9898(float param_1,float param_2,undefined8 *param_3,undefined8 param_4,uint param_5,
                  undefined8 *param_6,ulong param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined8 extraout_x8;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  undefined1 auStack_88 [40];
  
  func_0x0001074ff034();
  *param_3 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_3 + 1);
  *(float *)(unaff_x19 + 0x20) = param_1;
  *(float *)(unaff_x19 + 0x24) = param_2;
  uVar2 = (ulong)(param_1 / (float)param_5);
  uVar4 = (ulong)(param_2 / (float)param_5);
  *(ulong *)(unaff_x19 + 0x28) = uVar2;
  *(ulong *)(unaff_x19 + 0x30) = uVar4;
  *(double *)(unaff_x19 + 0x38) = (double)((float)uVar2 / param_1);
  *(double *)(unaff_x19 + 0x40) = (double)((float)uVar4 / param_2);
  FUN_1074f8f34(unaff_x19 + 0x48,param_8);
  uVar3 = *param_6;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  uVar3 = *param_6;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar3;
  uVar3 = *param_6;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined8 *)(unaff_x19 + 200) = uVar3;
  uVar3 = *param_6;
  *(undefined8 *)(unaff_x19 + 0xd0) = 0;
  *(undefined8 *)(unaff_x19 + 0xd8) = 0;
  *(undefined8 *)(unaff_x19 + 0xe0) = 0;
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  *(undefined8 *)(unaff_x19 + 0xf0) = 0;
  *(undefined8 *)(unaff_x19 + 0x108) = 0;
  *(undefined8 *)(unaff_x19 + 0x100) = 0;
  *(undefined8 *)(unaff_x19 + 0x118) = 0;
  *(undefined8 *)(unaff_x19 + 0x110) = 0;
  FUN_1074e9a88((undefined8 *)(unaff_x19 + 0x90),
                *(long *)(unaff_x19 + 0x30) * *(long *)(unaff_x19 + 0x28));
  FUN_1074e9a88((undefined8 *)(unaff_x19 + 0xb0),
                *(long *)(unaff_x19 + 0x30) * *(long *)(unaff_x19 + 0x28));
  FUN_1074e9a88((undefined8 *)(unaff_x19 + 0xd0),
                *(long *)(unaff_x19 + 0x30) * *(long *)(unaff_x19 + 0x28));
  if ((ulong)((*(long *)(unaff_x19 + 0x80) - *(long *)(unaff_x19 + 0x70)) / 0x28) < param_7) {
    if (0x666666666666666 < param_7) {
      FUN_1074f4760();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1074e9a48);
      (*pcVar1)();
    }
    FUN_1074f47b0(auStack_88,param_7,
                  (*(long *)(unaff_x19 + 0x78) - *(long *)(unaff_x19 + 0x70)) / 0x28,
                  (undefined8 *)(unaff_x19 + 0x88));
    FUN_1074f476c((undefined8 *)(unaff_x19 + 0x70),auStack_88);
    func_0x0001074ff3b8();
  }
  func_0x0001072a07f4();
  func_0x0001072a0860();
  return;
}



/* Entry: 1074e9a88; end: 1074e9d23;  */

long * FUN_1074e9a88(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *unaff_x19;
  ulong unaff_x20;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long **pplStack_98;
  long **pplStack_90;
  undefined1 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  
  func_0x0001074fe9f4();
  puVar3 = (undefined8 *)param_1[1];
  lVar16 = (long)puVar3 - *param_1;
  uVar14 = lVar16 >> 5;
  if (uVar14 < param_2) {
    uVar15 = unaff_x20 - uVar14;
    if ((ulong)(unaff_x19[2] - (long)puVar3 >> 5) < uVar15) {
      if (unaff_x20 >> 0x3b != 0) {
        FUN_1074f4558();
        FUN_1074f45cc(&plStack_70);
        func_0x0001074f468c(&plStack_a0);
        plVar9 = &lStack_c8;
        func_0x0001074f46cc();
        func_0x0001074fe8f4();
        func_0x0001074fe9f4();
        *plVar9 = (long)&PTR_FUN_1109b7010;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (plVar9 + 1,param_2 + 8);
        param_1[4] = *(long *)(unaff_x20 + 0x20);
        lVar16 = *(long *)(unaff_x20 + 0x28);
        param_1[6] = *(long *)(unaff_x20 + 0x30);
        param_1[5] = lVar16;
        lVar16 = *(long *)(unaff_x20 + 0x38);
        param_1[8] = *(long *)(unaff_x20 + 0x40);
        param_1[7] = lVar16;
        FUN_1074f8f34(param_1 + 9,unaff_x20 + 0x48);
        param_1[0xd] = *(long *)(unaff_x20 + 0x68);
        FUN_1074f4a80(param_1 + 0xe,unaff_x20 + 0x70);
        func_0x0001074f4a9c(param_1 + 0x12,unaff_x20 + 0x90);
        func_0x0001074f4a9c(param_1 + 0x16,unaff_x20 + 0xb0);
        func_0x0001074f4a9c(param_1 + 0x1a,unaff_x20 + 0xd0);
        lVar7 = *(long *)(unaff_x20 + 0xf8);
        lVar16 = *(long *)(unaff_x20 + 0xf0);
        lVar12 = *(long *)(unaff_x20 + 0x100);
        lVar21 = *(long *)(unaff_x20 + 0x118);
        lVar20 = *(long *)(unaff_x20 + 0x110);
        param_1[0x21] = *(long *)(unaff_x20 + 0x108);
        param_1[0x20] = lVar12;
        param_1[0x23] = lVar21;
        param_1[0x22] = lVar20;
        param_1[0x1f] = lVar7;
        param_1[0x1e] = lVar16;
        func_0x0001072a07f4();
        func_0x0001072a0860();
        return param_1;
      }
      uVar10 = unaff_x19[2] - *param_1;
      uVar11 = (long)uVar10 >> 4;
      if (uVar11 <= unaff_x20) {
        uVar11 = unaff_x20;
      }
      if (0x7fffffffffffffdf < uVar10) {
        uVar11 = 0x7ffffffffffffff;
      }
      plVar9 = unaff_x19 + 3;
      lVar7 = *plVar9;
      plStack_a8 = plVar9;
      FUN_1074f4564(lVar7,uVar11 << 5);
      puStack_c0 = (undefined8 *)(lVar7 + lVar16);
      lStack_b0 = lVar7 + uVar11 * 0x20;
      puStack_b8 = puStack_c0 + uVar15 * 4;
      puVar3 = puStack_c0;
      for (lVar16 = unaff_x20 * 0x20 + uVar14 * -0x20; lVar16 != 0; lVar16 = lVar16 + -0x20) {
        lVar12 = *plVar9;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = lVar12;
        puVar3 = puVar3 + 4;
      }
      plVar13 = (long *)*unaff_x19;
      plVar4 = (long *)unaff_x19[1];
      plVar1 = (long *)((long)puStack_c0 + ((long)plVar13 - (long)plVar4));
      pplStack_98 = &plStack_80;
      pplStack_90 = &plStack_78;
      uStack_88 = 0;
      plVar18 = plVar1;
      lStack_c8 = lVar7;
      plStack_a0 = plVar9;
      plStack_80 = plVar1;
      for (plVar17 = plVar13; plStack_78 = plVar18, plVar17 != plVar4; plVar17 = plVar17 + 4) {
        lVar16 = *plVar9;
        plVar8 = plVar18 + 3;
        *plVar8 = lVar16;
        *plVar18 = 0;
        plVar18[1] = 0;
        plVar18[2] = 0;
        if (plVar17[3] == lVar16) {
          lVar16 = *plVar17;
          plVar18[1] = plVar17[1];
          *plVar18 = lVar16;
          plVar18[2] = plVar17[2];
          *plVar17 = 0;
          plVar17[1] = 0;
          plVar17[2] = 0;
        }
        else {
          plVar19 = (long *)*plVar17;
          plVar5 = (long *)plVar17[1];
          uStack_68 = 0;
          lVar16 = (long)plVar5 - (long)plVar19;
          plStack_70 = plVar18;
          if (lVar16 != 0) {
            uVar14 = lVar16 >> 3;
            if (uVar14 >> 0x3d != 0) {
              FUN_1074f4594();
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1074e9cfc);
              (*pcVar6)();
            }
            FUN_1074f45a0();
            *plVar18 = (long)plVar8;
            plVar18[1] = (long)plVar8;
            plVar18[2] = (long)(plVar8 + uVar14);
            for (; plVar19 != plVar5; plVar19 = plVar19 + 1) {
              *plVar8 = *plVar19;
              plVar8 = plVar8 + 1;
            }
            plVar18[1] = (long)plVar8;
          }
          uStack_68 = 1;
          FUN_1074f45cc(&plStack_70);
          plVar18 = plStack_78;
        }
        plVar18 = plVar18 + 4;
      }
      uStack_88 = 1;
      for (; plVar13 != plVar4; plVar13 = plVar13 + 4) {
        FUN_1074f4668(plVar13);
      }
      func_0x0001074f468c(&plStack_a0);
      lStack_c8 = *unaff_x19;
      *unaff_x19 = (long)plVar1;
      lVar16 = unaff_x19[2];
      unaff_x19[2] = lStack_b0;
      unaff_x19[1] = (long)puStack_b8;
      param_1 = &lStack_c8;
      puStack_c0 = (undefined8 *)lStack_c8;
      puStack_b8 = (undefined8 *)lStack_c8;
      lStack_b0 = lVar16;
      func_0x0001074f46cc(param_1);
    }
    else {
      puVar2 = puVar3 + uVar15 * 4;
      for (lVar16 = unaff_x20 * 0x20 + uVar14 * -0x20; lVar16 != 0; lVar16 = lVar16 + -0x20) {
        lVar7 = unaff_x19[3];
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = lVar7;
        puVar3 = puVar3 + 4;
      }
      unaff_x19[1] = (long)puVar2;
    }
  }
  else if (unaff_x20 < uVar14) {
    plVar9 = unaff_x19;
    func_0x0001074fe980();
    plVar9 = (long *)plVar9[1];
    while (plVar9 != unaff_x19) {
      plVar9 = plVar9 + -4;
      FUN_1074f4668();
    }
    *(long **)(unaff_x20 + 8) = unaff_x19;
    return plVar9;
  }
  return param_1;
}



/* Entry: 1074e9d24; end: 1074e9dff;  */

void FUN_1074e9d24(undefined8 *param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001074fe9f4();
  *param_1 = &PTR_FUN_1109b7010;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1,param_2 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  FUN_1074f8f34(unaff_x19 + 0x48,unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
  FUN_1074f4a80(unaff_x19 + 0x70,unaff_x20 + 0x70);
  func_0x0001074f4a9c(unaff_x19 + 0x90,unaff_x20 + 0x90);
  func_0x0001074f4a9c(unaff_x19 + 0xb0,unaff_x20 + 0xb0);
  func_0x0001074f4a9c(unaff_x19 + 0xd0,unaff_x20 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x20 + 0x108);
  *(undefined8 *)(unaff_x19 + 0x100) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x118) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x110) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar1;
  func_0x0001072a07f4();
  func_0x0001072a0860();
  return;
}



/* Entry: 1074e9e00; end: 1074e9e57;  */

void FUN_1074e9e00(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x0001074ff034();
  *param_1 = extraout_x8;
  func_0x0001072a07f4();
  func_0x0001072a091c();
  FUN_1074f4978(unaff_x19 + 0xd0);
  FUN_1074f4978(unaff_x19 + 0xb0);
  FUN_1074f4978(unaff_x19 + 0x90);
  FUN_1074f49dc(unaff_x19 + 0x70);
  func_0x0001074ff868();
  func_0x0001074ff7d4();
  return;
}



/* Entry: 1074e9e58; end: 1074e9e5b;  */

void FUN_1074e9e58(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x0001074ff034();
  *param_1 = extraout_x8;
  func_0x0001072a07f4();
  func_0x0001072a091c();
  FUN_1074f4978(unaff_x19 + 0xd0);
  FUN_1074f4978(unaff_x19 + 0xb0);
  FUN_1074f4978(unaff_x19 + 0x90);
  FUN_1074f49dc(unaff_x19 + 0x70);
  func_0x0001074ff868();
  func_0x0001074ff7d4();
  return;
}



/* Entry: 1074e9e5c; end: 1074e9e6f;  */

void FUN_1074e9e5c(void)

{
  FUN_1074e9e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074e9e70; end: 1074e9e77;  */

long FUN_1074e9e70(long param_1)

{
  return param_1 + 8;
}



/* Entry: 1074e9e78; end: 1074e9f9f;  */

void FUN_1074e9e78(ulong param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_68;
  
  lStack_68 = (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70)) / 0x28;
  uVar3 = param_1;
  FUN_1074e9fa0(*param_3);
  uVar4 = param_1;
  func_0x0001074e9fb4(param_3[1]);
  uVar5 = param_1;
  FUN_1074e9fa0(param_3[2]);
  uVar6 = param_1;
  func_0x0001074e9fb4(param_3[3]);
  for (; uVar8 = uVar4, uVar3 <= uVar5; uVar3 = uVar3 + 1) {
    for (; uVar8 <= uVar6; uVar8 = uVar8 + 1) {
      lVar9 = uVar3 + *(long *)(param_1 + 0x28) * uVar8;
      FUN_1074e9fc8(*(long *)(param_1 + 0x90) + lVar9 * 0x20,8);
      FUN_1074f4b3c(*(long *)(param_1 + 0x90) + lVar9 * 0x20,&lStack_68);
      plVar1 = (long *)(*(long *)(param_1 + 0x90) + lVar9 * 0x20);
      uVar7 = plVar1[1] - *plVar1 >> 3;
      uVar2 = *(ulong *)(param_1 + 0xf0);
      if (*(ulong *)(param_1 + 0xf0) <= uVar7) {
        uVar2 = uVar7;
      }
      *(ulong *)(param_1 + 0xf0) = uVar2;
    }
  }
  *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 1;
  func_0x0001074febdc();
  FUN_1074ea044();
  func_0x0001074ff1c4();
  return;
}



/* Entry: 1074e9fa0; end: 1074e9fc7;  */

uint FUN_1074e9fa0(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)(param_2 + 0x28) - 1;
  uVar2 = (uint)(*(double *)(param_2 + 0x38) * (double)param_1);
  if ((int)uVar1 <= (int)uVar2) {
    uVar2 = uVar1;
  }
  return uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
}



/* Entry: 1074e9fc8; end: 1074ea043;  */

long *** FUN_1074e9fc8(long ***param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long **pplVar2;
  undefined8 *extraout_x8;
  long **pplVar3;
  undefined8 *extraout_x9;
  undefined8 *unaff_x19;
  undefined8 uVar4;
  long **pplStack_48;
  long lStack_40;
  long lStack_38;
  long **pplStack_30;
  long **pplStack_28;
  
  pplVar2 = *param_1;
  if ((undefined8 *)((long)param_1[2] - (long)pplVar2 >> 3) < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      FUN_1074f4594();
      func_0x0001074fead8();
      FUN_1074f4ae0();
      func_0x0001074fe8f4();
      func_0x0001074ff5e4();
      if (extraout_x8 < extraout_x9) {
        *extraout_x8 = *param_2;
        uVar4 = *param_3;
        extraout_x8[2] = param_3[1];
        extraout_x8[1] = uVar4;
        *(undefined4 *)(extraout_x8 + 4) = 0;
        puVar1 = extraout_x8 + 5;
      }
      else {
        puVar1 = unaff_x19;
        FUN_1074f4c4c();
      }
      unaff_x19[1] = puVar1;
      return (long ***)(puVar1 + -5);
    }
    pplVar3 = param_1[1];
    param_1 = param_1 + 3;
    pplStack_28 = (long **)param_1;
    FUN_1074f45a0();
    lStack_40 = (long)param_1 + ((long)pplVar3 - (long)pplVar2);
    pplStack_30 = (long **)(param_1 + (long)param_2);
    pplStack_48 = (long **)param_1;
    lStack_38 = lStack_40;
    func_0x0001074fec24();
    FUN_1074f4ac0();
    param_1 = &pplStack_48;
    FUN_1074f4ae0(param_1);
  }
  return param_1;
}



/* Entry: 1074ea044; end: 1074ea08f;  */

undefined8 * FUN_1074ea044(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 *extraout_x9;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  
  func_0x0001074ff5e4();
  if (extraout_x8 < extraout_x9) {
    *extraout_x8 = *param_2;
    uVar2 = *param_3;
    extraout_x8[2] = param_3[1];
    extraout_x8[1] = uVar2;
    *(undefined4 *)(extraout_x8 + 4) = 0;
    puVar1 = extraout_x8 + 5;
  }
  else {
    puVar1 = unaff_x19;
    FUN_1074f4c4c();
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -5;
}



/* Entry: 1074ea090; end: 1074ea50b;  */

void FUN_1074ea090(int *param_1,float *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined8 *puVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float *pfVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  int *piVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int *piStack_138;
  int *piStack_130;
  undefined8 auStack_128 [2];
  undefined8 uStack_118;
  int *piStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  fVar24 = param_2[2];
  if (0.0 <= fVar24) {
    fVar3 = *param_2;
    uVar20 = SUB41(fVar3,0);
    uVar21 = (undefined1)((uint)fVar3 >> 8);
    uVar22 = (undefined1)((uint)fVar3 >> 0x10);
    uVar23 = (undefined1)((uint)fVar3 >> 0x18);
    fVar25 = (float)param_1[8];
    if ((fVar3 < fVar25) && (fVar26 = param_2[3], 0.0 <= fVar26)) {
      fVar27 = (float)param_1[9];
      if (param_2[1] < fVar27) {
        if (fVar3 <= 0.0) {
          bVar4 = false;
          bVar6 = true;
          if (param_2[1] <= 0.0) {
            bVar4 = false;
            bVar6 = true;
            if (!NAN(fVar25) && !NAN(fVar24)) {
              bVar4 = fVar25 == fVar24;
              bVar6 = fVar24 <= fVar25;
            }
          }
          bVar5 = false;
          bVar7 = true;
          if (!bVar6 || bVar4) {
            bVar5 = false;
            bVar7 = true;
            if (!NAN(fVar27) && !NAN(fVar26)) {
              bVar5 = fVar27 == fVar26;
              bVar7 = fVar26 <= fVar27;
            }
          }
          if (!bVar7 || bVar5) {
            uVar16 = 0;
            lVar17 = 0x20;
            piVar8 = param_1;
            do {
              if ((ulong)((*(long *)(param_1 + 0x1e) - *(long *)(param_1 + 0x1c)) / 0x28) <= uVar16)
              {
                return;
              }
              piVar9 = (int *)(*(long *)(param_1 + 0x1c) + lVar17);
              piVar10 = piVar9 + -6;
              iVar2 = *piVar9;
              if (iVar2 == 1) {
                FUN_1074ea8f0();
LAB_1074ea18c:
                uStack_a0 = CONCAT44(fVar24,CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20))
                                                    ));
                uStack_98 = CONCAT44(fVar26,fVar25);
                uStack_c8 = CONCAT44(uStack_c8._4_4_,1);
              }
              else {
                if (iVar2 != 0) {
                  func_0x0001072a0e60();
                  goto LAB_1074ea18c;
                }
                uStack_98 = CONCAT44(uStack_98._4_4_,1);
                piVar10 = piVar8;
              }
              func_0x0001074feae4();
              func_0x0001072a1bc0();
              uVar16 = uVar16 + 1;
              lVar17 = lVar17 + 0x28;
              piVar8 = piVar10;
              if ((int)piVar10 == 1) {
                return;
              }
            } while( true );
          }
        }
        piStack_138 = param_1;
        FUN_1074e9fa0();
        piVar8 = param_1;
        func_0x0001074e9fb4();
        piVar9 = param_1;
        FUN_1074e9fa0();
        piVar10 = param_1;
        func_0x0001074e9fb4();
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_80 = 0x3f800000;
        func_0x0001072abda8(&uStack_a0,*(undefined8 *)(param_1 + 0x3e));
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_b0 = 0x3f800000;
        func_0x0001072abda8(&uStack_d0,*(undefined8 *)(param_1 + 0x42));
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_e0 = 0x3f800000;
        func_0x0001072abda8(&uStack_100,*(undefined8 *)(param_1 + 0x46));
        for (; piStack_130 = piVar8, piStack_138 <= piVar9;
            piStack_138 = (int *)((long)piStack_138 + 1)) {
          for (; piStack_130 <= piVar10; piStack_130 = (int *)((long)piStack_130 + 1)) {
            bVar4 = false;
            piVar19 = (int *)((long)piStack_138 + *(long *)(param_1 + 10) * (long)piStack_130);
            puVar18 = (undefined8 *)(*(long *)(param_1 + 0x24) + (long)piVar19 * 0x20);
            puVar1 = (undefined8 *)puVar18[1];
            for (puVar18 = (undefined8 *)*puVar18; puVar18 != puVar1; puVar18 = puVar18 + 1) {
              auStack_128[0] = *puVar18;
              if (param_5 == 0) {
LAB_1074ea2b4:
                func_0x0001072a1b80(&uStack_a0,auStack_128);
                lVar17 = *(long *)(param_1 + 0x1c);
                FUN_1074ea90c(lVar17,*(undefined8 *)(param_1 + 0x1e),auStack_128[0]);
                lVar17 = lVar17 + 8;
                func_0x0001072ac330(lVar17);
                pfVar11 = param_2;
                func_0x0001078756d8(param_2,lVar17);
                if ((int)pfVar11 != 0) {
                  uStack_108 = 0;
                  uVar12 = param_3;
                  piStack_110 = piVar19;
                  func_0x0001072a1bc0(param_3,auStack_128[0],lVar17,&piStack_110);
                  if ((int)uVar12 == 1) goto LAB_1074ea488;
                  bVar4 = true;
                }
              }
              else {
                puVar13 = &uStack_a0;
                func_0x0001072ac278(puVar13,auStack_128);
                if (puVar13 == (undefined8 *)0x0) goto LAB_1074ea2b4;
              }
            }
            puVar18 = (undefined8 *)(*(long *)(param_1 + 0x2c) + (long)piVar19 * 0x20);
            puVar1 = (undefined8 *)puVar18[1];
            for (puVar18 = (undefined8 *)*puVar18; puVar18 != puVar1; puVar18 = puVar18 + 1) {
              uStack_118 = *puVar18;
              if (param_5 == 0) {
LAB_1074ea348:
                func_0x0001072a1b80(&uStack_d0,&uStack_118);
                lVar17 = *(long *)(param_1 + 0x1c);
                FUN_1074ea90c(lVar17,*(undefined8 *)(param_1 + 0x1e),uStack_118);
                lVar17 = lVar17 + 8;
                func_0x0001072ac360();
                lVar14 = lVar17;
                func_0x00010787574c();
                uVar12 = uStack_118;
                if ((int)lVar14 != 0) {
                  FUN_1074ea8f0(lVar17);
                  func_0x0001074ff968();
                  uVar15 = param_3;
                  func_0x0001072a1bc0(param_3,uVar12,&piStack_110,auStack_128);
                  if ((int)uVar15 == 1) goto LAB_1074ea488;
                  bVar4 = true;
                }
              }
              else {
                puVar13 = &uStack_d0;
                func_0x0001072ac278(puVar13,&uStack_118);
                if (puVar13 == (undefined8 *)0x0) goto LAB_1074ea348;
              }
            }
            puVar18 = (undefined8 *)(*(long *)(param_1 + 0x34) + (long)piVar19 * 0x20);
            puVar1 = (undefined8 *)puVar18[1];
            for (puVar18 = (undefined8 *)*puVar18; puVar18 != puVar1; puVar18 = puVar18 + 1) {
              uStack_118 = *puVar18;
              if (param_5 == 0) {
LAB_1074ea3e4:
                func_0x0001072a1b80(&uStack_100,&uStack_118);
                lVar17 = *(long *)(param_1 + 0x1c);
                FUN_1074ea90c(lVar17,*(undefined8 *)(param_1 + 0x1e),uStack_118);
                lVar17 = lVar17 + 8;
                func_0x0001072ac37c();
                lVar14 = lVar17;
                func_0x000107875848();
                uVar12 = uStack_118;
                if ((int)lVar14 != 0) {
                  func_0x0001072a0e60(lVar17);
                  func_0x0001074ff968();
                  uVar15 = param_3;
                  func_0x0001072a1bc0(param_3,uVar12,&piStack_110,auStack_128);
                  if ((int)uVar15 == 1) goto LAB_1074ea488;
                  bVar4 = true;
                }
              }
              else {
                puVar13 = &uStack_100;
                func_0x0001072ac278(puVar13,&uStack_118);
                if (puVar13 == (undefined8 *)0x0) goto LAB_1074ea3e4;
              }
            }
            if (!bVar4) {
              func_0x0001072a1bf4(param_4,piStack_138,piStack_130,piVar19);
            }
          }
        }
LAB_1074ea488:
        func_0x0001072a8888(&uStack_100);
        func_0x0001072a8888(&uStack_d0);
        func_0x0001072a8888(&uStack_a0);
      }
    }
  }
  return;
}



/* Entry: 1074ea50c; end: 1074ea637;  */

undefined *** FUN_1074ea50c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined ***pppuVar3;
  undefined8 extraout_x8;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  undefined ***pppuStack_70;
  undefined **ppuStack_68;
  undefined8 *puStack_60;
  undefined ***pppuStack_50;
  undefined8 uStack_48;
  
  func_0x0001074fe5e8();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  uStack_48 = extraout_x8;
  func_0x0001074ff69c();
  func_0x0001074ff69c(param_1);
  func_0x0001074ff69c(param_1 + 10);
  ppuStack_68 = &PTR_FUN_1109b6360;
  pppuStack_50 = &ppuStack_68;
  ppuStack_88 = &PTR_DAT_1109b63e0;
  pppuStack_70 = &ppuStack_88;
  puStack_80 = param_1;
  puStack_60 = param_1;
  func_0x0001074ff3c8();
  FUN_1074ea090();
  func_0x0001072abac4(&ppuStack_88);
  pppuVar3 = &ppuStack_68;
  func_0x0001072aba90();
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 3);
  func_0x0001074ff3c8();
  FUN_1074ea638();
  *(int *)(param_1 + 0xf) = (int)pppuVar3 - (iVar2 + iVar1);
  func_0x0001074fe49c(uStack_48);
  if ((bool)in_ZR) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  func_0x0001072abac4(&ppuStack_88);
  func_0x0001072aba90(&ppuStack_68);
  FUN_1074f4d24();
  func_0x0001074fea88();
  return (undefined ***)
         (long)((((int)(long)(double)(long)((double)param_1[7] * (double)(float)param_3[1]) -
                 (int)(long)(double)(long)((double)param_1[7] * (double)(float)*param_3)) + 1) *
               (((int)(long)(double)(long)((double)param_1[8] *
                                          (double)(float)((ulong)param_3[1] >> 0x20)) -
                (int)(long)(double)(long)((double)param_1[8] *
                                         (double)(float)((ulong)*param_3 >> 0x20))) + 1));
}



/* Entry: 1074ea638; end: 1074ea6a3;  */

long FUN_1074ea638(long param_1,undefined8 *param_2)

{
  return (long)((((int)(long)(double)(long)(*(double *)(param_1 + 0x38) * (double)(float)param_2[1])
                 - (int)(long)(double)(long)(*(double *)(param_1 + 0x38) * (double)(float)*param_2))
                + 1) * (((int)(long)(double)(long)(*(double *)(param_1 + 0x40) *
                                                  (double)(float)((ulong)param_2[1] >> 0x20)) -
                        (int)(long)(double)(long)(*(double *)(param_1 + 0x40) *
                                                 (double)(float)((ulong)*param_2 >> 0x20))) + 1));
}



/* Entry: 1074ea6a4; end: 1074ea777;  */

void FUN_1074ea6a4(void)

{
  long unaff_x20;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  func_0x0001074ff2d4();
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  uStack_50 = 0x3f800000;
  for (uVar2 = 0; uVar2 < *(ulong *)(unaff_x20 + 0x28); uVar2 = uVar2 + 1) {
    for (uVar3 = 0; uVar3 < *(ulong *)(unaff_x20 + 0x30); uVar3 = uVar3 + 1) {
      func_0x0001074fe9a0();
      func_0x0001074fe9a0();
      func_0x0001074fe9a0();
    }
  }
  func_0x0001074ff174();
  for (plVar1 = (long *)lStack_60; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    func_0x0001072a19bc();
  }
  func_0x0001072ac0a4(&uStack_70);
  return;
}



/* Entry: 1074ea778; end: 1074ea823;  */

void FUN_1074ea778(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [40];
  
  if (*param_5 != param_5[1]) {
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0x3f800000;
    uStack_a8 = param_2;
    uStack_a0 = param_3;
    uStack_70 = param_4;
    func_0x0001072a813c(auStack_68,&uStack_a8);
    func_0x0001072a7ed8(param_1,&uStack_70);
    func_0x0001072a8888(auStack_58);
    func_0x0001072a8888(&uStack_98);
    func_0x0001072a7ef0(param_1 + 0x28,*param_5,param_5[1]);
  }
  return;
}



/* Entry: 1074ea824; end: 1074ea8ef;  */

ulong FUN_1074ea824(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined8 extraout_x8;
  float *unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  uVar7 = (undefined4)((ulong)param_1 >> 0x20);
  uVar6 = (undefined4)param_1;
  func_0x0001074ff2d4();
  func_0x0001074fe5e8();
  uStack_38 = extraout_x8;
  func_0x0001074ff174();
  func_0x0001072ac134();
  lVar5 = *(long *)(unaff_x20 + 0x70);
  lVar1 = *(long *)(unaff_x20 + 0x78);
  while( true ) {
    bVar3 = lVar5 == lVar1;
    if (bVar3) {
      func_0x0001074fe49c(uStack_38);
      if (!bVar3) {
        ___stack_chk_fail();
        func_0x000107269124();
        func_0x0001074fea88();
        return (ulong)(uint)(*unaff_x19 - unaff_x19[2]);
      }
      return CONCAT44(uVar7,uVar6);
    }
    plVar4 = *(long **)(unaff_x20 + 0x60);
    if (plVar4 == (long *)0x0) break;
    (**(code **)(*plVar4 + 0x30))(auStack_78,plVar4,lVar5);
    func_0x0001074fec24();
    func_0x0001072aad1c();
    func_0x000104c3323c(auStack_78);
    lVar5 = lVar5 + 0x28;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1074ea8c4);
  (*pcVar2)();
}



/* Entry: 1074ea8f0; end: 1074ea90b;  */

float FUN_1074ea8f0(float *param_1)

{
  return *param_1 - param_1[2];
}



/* Entry: 1074ea90c; end: 1074ea937;  */

undefined8 *
FUN_1074ea90c(undefined4 param_1,undefined8 *param_2,long param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int extraout_w10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  if (param_4 < (ulong)((param_3 - (long)param_2) / 0x28)) {
    return param_2 + param_4 * 5;
  }
  FUN_1074f4d54();
  *param_2 = &PTR_FUN_1109b5df0;
  param_2[1] = &PTR_DAT_1109b5e38;
  param_2[2] = &PTR_DAT_1109b5e68;
  puVar1 = param_2;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  param_2[3] = puVar1 + 1;
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_2[4] = puVar1 + 3;
  param_2[5] = puVar1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109b6460;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xb] = 0;
  param_2[6] = &PTR_PTR_1131ad7d0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 1;
  FUN_107415a58(param_2 + 0xb,1,0);
  param_2[0x1d5] = param_7;
  param_2[0x1d6] = param_8;
  lVar2 = 0x830;
  __Znwm();
  lVar4 = lVar2;
  func_0x0001077fc47c();
  param_2[0x1d7] = lVar2;
  func_0x0001074fec38();
  func_0x0001078baa3c();
  uVar3 = 0x168;
  __Znwm();
  lStack_98 = lVar4;
  func_0x0001074feb28(&uStack_b0);
  lStack_88 = lStack_a8;
  uStack_90 = uStack_b0;
  uStack_b0 = 0;
  lStack_a8 = 0;
  func_0x00010780dde4(uVar3,lVar2,&lStack_98,&uStack_90);
  param_2[0x1d8] = uVar3;
  func_0x0001074ff128();
  func_0x0001074fee14();
  if (lStack_98 != 0) {
    func_0x0001074fe5f8();
  }
  uVar3 = 0xf8;
  __Znwm();
  FUN_10747ac3c();
  param_2[0x1d9] = uVar3;
  param_2[0x1da] = 0;
  FUN_1074eb070(param_2 + 0x1db);
  func_0x0001074eb0a4(param_2 + 0x1dc);
  uVar3 = 0x1a8;
  __Znwm();
  func_0x000107857224();
  param_2[0x1dd] = uVar3;
  lVar4 = 0x1b0;
  __Znwm();
  _bzero();
  FUN_1074f9368(lVar4 + 8);
  __ZNSt3__119__shared_mutex_baseC1Ev(lVar4 + 0xe0);
  func_0x0001078696e8(lVar4 + 0x188);
  puVar1 = (undefined8 *)(lVar4 + 0x1a0);
  func_0x00010747e6e0();
  param_2[0x1de] = lVar4;
  func_0x0001074feb28(&uStack_b0);
  func_0x0001074fec30();
  lStack_88 = lStack_a8;
  uStack_90 = uStack_b0;
  uStack_b0 = 0;
  lStack_a8 = 0;
  puVar5 = puVar1;
  func_0x00010784b518();
  param_2[0x1df] = puVar1;
  func_0x0001074ff128();
  func_0x0001074fee14();
  func_0x0001074feb28(&uStack_b0);
  func_0x0001074fec38();
  lVar4 = lStack_a8;
  uVar3 = uStack_b0;
  uStack_90 = uStack_b0;
  lStack_88 = lStack_a8;
  uStack_b0 = 0;
  lStack_a8 = 0;
  *puVar5 = uVar3;
  puVar5[1] = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001074fe68c();
    } while (extraout_w10 != 0);
  }
  param_2[0x1e0] = puVar5;
  func_0x0001074ff128();
  func_0x0001074fee14();
  puVar1 = (undefined8 *)0x2d0;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar5 = puVar1 + 3;
  *puVar1 = &PTR_FUN_1109b64b0;
  FUN_10740cc64(puVar5,0);
  param_2[0x1e1] = puVar5;
  param_2[0x1e2] = puVar1;
  param_2[0x1e4] = 0;
  param_2[0x1e3] = 0;
  func_0x0001074eb0cc(&uStack_90);
  param_2[0x1e6] = lStack_88;
  param_2[0x1e5] = uStack_90;
  uStack_90 = 0;
  lStack_88 = 0;
  FUN_1074f4d90(&uStack_90);
  func_0x0001074eb0f4(&uStack_90);
  param_2[0x1e8] = lStack_88;
  param_2[0x1e7] = uStack_90;
  uStack_90 = 0;
  lStack_88 = 0;
  func_0x0001074f4db4(&uStack_90);
  func_0x0001074eb11c(&uStack_90);
  param_2[0x1ea] = lStack_88;
  param_2[0x1e9] = uStack_90;
  uStack_90 = 0;
  lStack_88 = 0;
  func_0x0001074f4dd8(&uStack_90);
  param_2[0x1eb] = 0;
  param_2[0x1ec] = &UNK_10e52b660;
  param_2[0x1ed] = 0;
  param_2[0x1ef] = 0;
  param_2[0x1ee] = 0;
  param_2[0x1f0] = &UNK_10e52b660;
  param_2[0x1f1] = 0;
  param_2[499] = 0;
  param_2[0x1f2] = 0;
  uVar3 = 0x1001e0;
  __Znwm();
  func_0x0001075195b8();
  param_2[500] = uVar3;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1109b6500;
  puVar1[3] = &UNK_10e52b660;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = &UNK_10e52b660;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0x32aaaba7;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  param_2[0x1f5] = puVar1 + 3;
  param_2[0x1f6] = puVar1;
  func_0x0001074eb144(&uStack_90);
  uStack_b8 = lStack_88;
  uStack_c0 = uStack_90;
  uStack_90 = 0;
  lStack_88 = 0;
  FUN_1074e3d5c(param_2 + 0x1f7,&uStack_c0,param_2[0x1d9],param_3);
  func_0x000107410da4(&uStack_c0);
  func_0x0001074f4dfc(&uStack_90);
  param_2[0x4a1] = 0;
  param_2[0x4a0] = 0;
  param_2[0x49f] = param_2 + 0x4a0;
  *(undefined4 *)(param_2 + 0x4a2) = 0;
  func_0x000107813b7c(param_2 + 0x4a3);
  *(char *)(param_2 + 0x4bb) = (char)param_4;
  *(undefined8 *)((long)param_2 + 0x25d9) = 0;
  *(undefined4 *)(param_2 + 0x4bc) = 0;
  param_2[0x4be] = 0;
  param_2[0x4bd] = 0;
  param_2[0x4c0] = 0;
  param_2[0x4bf] = 0;
  param_2[0x4c2] = 0;
  param_2[0x4c1] = 0;
  param_2[0x4c3] = param_6;
  *(undefined4 *)(param_2 + 0x4c4) = param_1;
  param_2[0x4c5] = &UNK_10e52b660;
  param_2[0x4c6] = 0;
  param_2[0x4c8] = 0;
  param_2[0x4c7] = 0;
  param_2[0x4ca] = &UNK_10e52b660;
  param_2[0x4cb] = 0;
  param_2[0x4cd] = 0;
  param_2[0x4cc] = 0;
  param_2[0x4ce] = &UNK_10e52b660;
  param_2[0x4d0] = 0;
  param_2[0x4cf] = 0;
  param_2[0x4d1] = 0;
  func_0x00010726ed14(param_2 + 0x4d2);
  param_2[0x4d4] = param_2;
  *(undefined8 **)(param_2[0x1d8] + 0x120) = param_2;
  *(undefined8 **)(param_2[0x1d9] + 200) = param_2 + 1;
  return param_2;
}



/* Entry: 1074ea938; end: 1074eb06f;  */

undefined8 *
FUN_1074ea938(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int extraout_w10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  *param_2 = &PTR_FUN_1109b5df0;
  param_2[1] = &PTR_DAT_1109b5e38;
  param_2[2] = &PTR_DAT_1109b5e68;
  puVar1 = param_2;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  param_2[3] = puVar1 + 1;
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_2[4] = puVar1 + 3;
  param_2[5] = puVar1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109b6460;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xb] = 0;
  param_2[6] = &PTR_PTR_1131ad7d0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 1;
  FUN_107415a58(param_2 + 0xb,1,0);
  param_2[0x1d5] = param_7;
  param_2[0x1d6] = param_8;
  lVar2 = 0x830;
  __Znwm();
  lVar4 = lVar2;
  func_0x0001077fc47c();
  param_2[0x1d7] = lVar2;
  func_0x0001074fec38();
  func_0x0001078baa3c();
  uVar3 = 0x168;
  __Znwm();
  lStack_88 = lVar4;
  func_0x0001074feb28(&uStack_a0);
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  uStack_a0 = 0;
  lStack_98 = 0;
  func_0x00010780dde4(uVar3,lVar2,&lStack_88,&uStack_80);
  param_2[0x1d8] = uVar3;
  func_0x0001074ff128();
  func_0x0001074fee14();
  if (lStack_88 != 0) {
    func_0x0001074fe5f8();
  }
  uVar3 = 0xf8;
  __Znwm();
  FUN_10747ac3c();
  param_2[0x1d9] = uVar3;
  param_2[0x1da] = 0;
  FUN_1074eb070(param_2 + 0x1db);
  func_0x0001074eb0a4(param_2 + 0x1dc);
  uVar3 = 0x1a8;
  __Znwm();
  func_0x000107857224();
  param_2[0x1dd] = uVar3;
  lVar4 = 0x1b0;
  __Znwm();
  _bzero();
  FUN_1074f9368(lVar4 + 8);
  __ZNSt3__119__shared_mutex_baseC1Ev(lVar4 + 0xe0);
  func_0x0001078696e8(lVar4 + 0x188);
  puVar1 = (undefined8 *)(lVar4 + 0x1a0);
  func_0x00010747e6e0();
  param_2[0x1de] = lVar4;
  func_0x0001074feb28(&uStack_a0);
  func_0x0001074fec30();
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  uStack_a0 = 0;
  lStack_98 = 0;
  puVar5 = puVar1;
  func_0x00010784b518();
  param_2[0x1df] = puVar1;
  func_0x0001074ff128();
  func_0x0001074fee14();
  func_0x0001074feb28(&uStack_a0);
  func_0x0001074fec38();
  lVar4 = lStack_98;
  uVar3 = uStack_a0;
  uStack_80 = uStack_a0;
  lStack_78 = lStack_98;
  uStack_a0 = 0;
  lStack_98 = 0;
  *puVar5 = uVar3;
  puVar5[1] = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001074fe68c();
    } while (extraout_w10 != 0);
  }
  param_2[0x1e0] = puVar5;
  func_0x0001074ff128();
  func_0x0001074fee14();
  puVar1 = (undefined8 *)0x2d0;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar5 = puVar1 + 3;
  *puVar1 = &PTR_FUN_1109b64b0;
  FUN_10740cc64(puVar5,0);
  param_2[0x1e1] = puVar5;
  param_2[0x1e2] = puVar1;
  param_2[0x1e4] = 0;
  param_2[0x1e3] = 0;
  func_0x0001074eb0cc(&uStack_80);
  param_2[0x1e6] = lStack_78;
  param_2[0x1e5] = uStack_80;
  uStack_80 = 0;
  lStack_78 = 0;
  FUN_1074f4d90(&uStack_80);
  func_0x0001074eb0f4(&uStack_80);
  param_2[0x1e8] = lStack_78;
  param_2[0x1e7] = uStack_80;
  uStack_80 = 0;
  lStack_78 = 0;
  func_0x0001074f4db4(&uStack_80);
  func_0x0001074eb11c(&uStack_80);
  param_2[0x1ea] = lStack_78;
  param_2[0x1e9] = uStack_80;
  uStack_80 = 0;
  lStack_78 = 0;
  func_0x0001074f4dd8(&uStack_80);
  param_2[0x1eb] = 0;
  param_2[0x1ec] = &UNK_10e52b660;
  param_2[0x1ed] = 0;
  param_2[0x1ef] = 0;
  param_2[0x1ee] = 0;
  param_2[0x1f0] = &UNK_10e52b660;
  param_2[0x1f1] = 0;
  param_2[499] = 0;
  param_2[0x1f2] = 0;
  uVar3 = 0x1001e0;
  __Znwm();
  func_0x0001075195b8();
  param_2[500] = uVar3;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1109b6500;
  puVar1[3] = &UNK_10e52b660;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = &UNK_10e52b660;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0x32aaaba7;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  param_2[0x1f5] = puVar1 + 3;
  param_2[0x1f6] = puVar1;
  func_0x0001074eb144(&uStack_80);
  uStack_a8 = lStack_78;
  uStack_b0 = uStack_80;
  uStack_80 = 0;
  lStack_78 = 0;
  FUN_1074e3d5c(param_2 + 0x1f7,&uStack_b0,param_2[0x1d9],param_3);
  func_0x000107410da4(&uStack_b0);
  func_0x0001074f4dfc(&uStack_80);
  param_2[0x4a1] = 0;
  param_2[0x4a0] = 0;
  param_2[0x49f] = param_2 + 0x4a0;
  *(undefined4 *)(param_2 + 0x4a2) = 0;
  func_0x000107813b7c(param_2 + 0x4a3);
  *(undefined1 *)(param_2 + 0x4bb) = param_4;
  *(undefined8 *)((long)param_2 + 0x25d9) = 0;
  *(undefined4 *)(param_2 + 0x4bc) = 0;
  param_2[0x4be] = 0;
  param_2[0x4bd] = 0;
  param_2[0x4c0] = 0;
  param_2[0x4bf] = 0;
  param_2[0x4c2] = 0;
  param_2[0x4c1] = 0;
  param_2[0x4c3] = param_6;
  *(undefined4 *)(param_2 + 0x4c4) = param_1;
  param_2[0x4c5] = &UNK_10e52b660;
  param_2[0x4c6] = 0;
  param_2[0x4c8] = 0;
  param_2[0x4c7] = 0;
  param_2[0x4ca] = &UNK_10e52b660;
  param_2[0x4cb] = 0;
  param_2[0x4cd] = 0;
  param_2[0x4cc] = 0;
  param_2[0x4ce] = &UNK_10e52b660;
  param_2[0x4d0] = 0;
  param_2[0x4cf] = 0;
  param_2[0x4d1] = 0;
  func_0x00010726ed14(param_2 + 0x4d2);
  param_2[0x4d4] = param_2;
  *(undefined8 **)(param_2[0x1d8] + 0x120) = param_2;
  *(undefined8 **)(param_2[0x1d9] + 200) = param_2 + 1;
  return param_2;
}



/* Entry: 1074eb070; end: 1074eb16b;  */

void FUN_1074eb070(undefined8 *param_1,undefined8 *param_2)

{
  func_0x0001074ff3c0();
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  *param_2 = param_2 + 1;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_1 = param_2;
  return;
}



/* Entry: 1074eb16c; end: 1074eb353;  */

undefined1  [16] FUN_1074eb16c(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  undefined1 auVar5 [16];
  undefined1 auStack_140 [16];
  ulong uStack_118;
  ulong *puStack_110;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001074fe570();
  uStack_118 = uStack_118 & 0xffffffffffffff00;
  uStack_40 = 0;
  puVar3 = &uStack_118;
  uStack_38 = extraout_x8;
  func_0x00010784b6b4(*(undefined8 *)(param_1 + 0xef8));
  func_0x000107266948(&uStack_118);
  FUN_107508ab0(*(undefined8 *)(unaff_x19 + 0xeb0));
  uVar1 = *(char *)(unaff_x19 + 0x25d9) == '\x01';
  if ((bool)uVar1) {
    uVar4 = unaff_x19 + 0xf80;
    FUN_1074eb354();
    uStack_118 = uVar4;
    puStack_110 = puVar3;
    while (uStack_118 != 0) {
      func_0x0001074ff0ac(puStack_110);
      (**(code **)(extraout_x8_00 + 0xe0))();
      FUN_1074eb374(&uStack_118);
    }
  }
  uVar4 = (ulong)*(uint *)(unaff_x19 + 0x2648);
  (**(code **)(**(long **)(unaff_x19 + 0xee8) + 0x48))();
  if (*(long *)(unaff_x19 + 0x2690) != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(unaff_x19 + 0x2690);
  func_0x0001072508cc(unaff_x19 + 0x2690);
  FUN_10732e514(unaff_x19 + 0x2670);
  func_0x000107261dac(unaff_x19 + 0x2650);
  FUN_1074f4e20(unaff_x19 + 0x2628);
  func_0x0001074f4ee0(unaff_x19 + 0x2600);
  func_0x0001074f4f04(unaff_x19 + 0x25e8);
  func_0x0001074f4f54(unaff_x19 + 0x2518);
  func_0x0001074ff89c();
  FUN_1074e47f4(unaff_x19 + 0xfb8);
  FUN_1074f9d98(unaff_x19 + 0xfa8);
  FUN_1074f9948(unaff_x19 + 4000);
  FUN_1074f522c(unaff_x19 + 0xf80);
  FUN_1074f52b8(unaff_x19 + 0xf60);
  func_0x0001074fa228(unaff_x19 + 0xf58);
  func_0x000107410d38(unaff_x19 + 0xf48);
  func_0x000107410d5c(unaff_x19 + 0xf38);
  func_0x000107410d80(unaff_x19 + 0xf28);
  func_0x0001074fa204(unaff_x19 + 0xf18);
  FUN_1074f94f4(unaff_x19 + 0xf08);
  func_0x0001074f947c(unaff_x19 + 0xf00);
  func_0x0001074f942c(unaff_x19 + 0xef8);
  func_0x0001074f93e8(unaff_x19 + 0xef0);
  FUN_1074f9344(unaff_x19 + 0xee8);
  FUN_1074f92f0(unaff_x19 + 0xee0);
  func_0x0001074f929c(unaff_x19 + 0xed8);
  FUN_1074fa1bc(unaff_x19 + 0xed0);
  func_0x0001074f9274(unaff_x19 + 0xec8);
  func_0x0001074f924c(unaff_x19 + 0xec0);
  func_0x0001074f9228(unaff_x19 + 0xeb8);
  func_0x0001074f9204(unaff_x19 + 0x20);
  func_0x0001074fe49c(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    iVar2 = (int)uVar4;
    while (iVar2 != 0) {
      func_0x000104bd46a0();
      iVar2 = (int)uVar4;
    }
    __Unwind_Resume();
    func_0x0001074fef98();
    FUN_1074fa270();
    return auStack_140;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = unaff_x19;
  return auVar5;
}



/* Entry: 1074eb354; end: 1074eb373;  */

undefined1  [16] FUN_1074eb354(void)

{
  undefined1 auStack_20 [16];
  
  func_0x0001074fef98();
  FUN_1074fa270();
  return auStack_20;
}



/* Entry: 1074eb374; end: 1074eb39f;  */

void FUN_1074eb374(undefined8 param_1)

{
  func_0x0001074ff058();
  func_0x0001074fef8c(param_1,1);
  FUN_1074fa270();
  return;
}



/* Entry: 1074eb3a0; end: 1074eb3b3;  */

undefined1  [16] FUN_1074eb3a0(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  undefined1 auVar5 [16];
  undefined1 auStack_140 [16];
  ulong uStack_118;
  ulong *puStack_110;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001074fe570();
  uStack_118 = uStack_118 & 0xffffffffffffff00;
  uStack_40 = 0;
  puVar3 = &uStack_118;
  uStack_38 = extraout_x8;
  func_0x00010784b6b4(*(undefined8 *)(param_1 + 0xef8));
  func_0x000107266948(&uStack_118);
  FUN_107508ab0(*(undefined8 *)(unaff_x19 + 0xeb0));
  uVar1 = *(char *)(unaff_x19 + 0x25d9) == '\x01';
  if ((bool)uVar1) {
    uVar4 = unaff_x19 + 0xf80;
    FUN_1074eb354();
    uStack_118 = uVar4;
    puStack_110 = puVar3;
    while (uStack_118 != 0) {
      func_0x0001074ff0ac(puStack_110);
      (**(code **)(extraout_x8_00 + 0xe0))();
      FUN_1074eb374(&uStack_118);
    }
  }
  uVar4 = (ulong)*(uint *)(unaff_x19 + 0x2648);
  (**(code **)(**(long **)(unaff_x19 + 0xee8) + 0x48))();
  if (*(long *)(unaff_x19 + 0x2690) != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(unaff_x19 + 0x2690);
  func_0x0001072508cc(unaff_x19 + 0x2690);
  FUN_10732e514(unaff_x19 + 0x2670);
  func_0x000107261dac(unaff_x19 + 0x2650);
  FUN_1074f4e20(unaff_x19 + 0x2628);
  func_0x0001074f4ee0(unaff_x19 + 0x2600);
  func_0x0001074f4f04(unaff_x19 + 0x25e8);
  func_0x0001074f4f54(unaff_x19 + 0x2518);
  func_0x0001074ff89c();
  FUN_1074e47f4(unaff_x19 + 0xfb8);
  FUN_1074f9d98(unaff_x19 + 0xfa8);
  FUN_1074f9948(unaff_x19 + 4000);
  FUN_1074f522c(unaff_x19 + 0xf80);
  FUN_1074f52b8(unaff_x19 + 0xf60);
  func_0x0001074fa228(unaff_x19 + 0xf58);
  func_0x000107410d38(unaff_x19 + 0xf48);
  func_0x000107410d5c(unaff_x19 + 0xf38);
  func_0x000107410d80(unaff_x19 + 0xf28);
  func_0x0001074fa204(unaff_x19 + 0xf18);
  FUN_1074f94f4(unaff_x19 + 0xf08);
  func_0x0001074f947c(unaff_x19 + 0xf00);
  func_0x0001074f942c(unaff_x19 + 0xef8);
  func_0x0001074f93e8(unaff_x19 + 0xef0);
  FUN_1074f9344(unaff_x19 + 0xee8);
  FUN_1074f92f0(unaff_x19 + 0xee0);
  func_0x0001074f929c(unaff_x19 + 0xed8);
  FUN_1074fa1bc(unaff_x19 + 0xed0);
  func_0x0001074f9274(unaff_x19 + 0xec8);
  func_0x0001074f924c(unaff_x19 + 0xec0);
  func_0x0001074f9228(unaff_x19 + 0xeb8);
  func_0x0001074f9204(unaff_x19 + 0x20);
  func_0x0001074fe49c(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    iVar2 = (int)uVar4;
    while (iVar2 != 0) {
      func_0x000104bd46a0();
      iVar2 = (int)uVar4;
    }
    __Unwind_Resume();
    func_0x0001074fef98();
    FUN_1074fa270();
    return auStack_140;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = unaff_x19;
  return auVar5;
}



/* Entry: 1074eb3b4; end: 1074eb3c7;  */

void FUN_1074eb3b4(void)

{
  FUN_1074eb16c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074eb3c8; end: 1074eb3d7;  */

void FUN_1074eb3c8(long param_1)

{
  FUN_1074eb16c(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074eb3d8; end: 1074eb4c3;  */

void FUN_1074eb3d8(long *param_1,undefined *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long *plVar5;
  long *plStack_40;
  undefined *puStack_38;
  
  plVar5 = (long *)param_1[0x1eb];
  plVar4 = param_1;
  if (plVar5 != (long *)0x0) {
    func_0x00010785f1f4();
    plVar4 = plVar4 + 0x8c;
    func_0x0001072cd2b0();
    uVar2 = 0;
    if (((ulong)plVar4 & 0x100000000) != 0) {
      uVar2 = (uint)plVar4;
    }
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = 0x100000000;
    }
    param_2 = (undefined *)(uVar1 | uVar2);
    (**(code **)(*plVar5 + 0x28))();
    plVar4 = plVar5;
    if (plVar5 != (long *)0x0) {
      func_0x0001074fe8d0();
      param_2 = &UNK_10de76360;
      (*extraout_x8)();
      plVar4 = plVar5;
    }
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (((*(uint *)(param_1 + 0x4ba) & 1) != 0) && (param_1[0x4b9] <= (long)plVar4)) {
    func_0x0001074fe8d0();
    param_2 = &UNK_10de7637a;
    (*extraout_x8_00)();
  }
  param_1 = param_1 + 0x1f0;
  FUN_1074eb354();
  uVar2 = 0;
  plStack_40 = param_1;
  puStack_38 = param_2;
  while (plStack_40 != (long *)0x0) {
    uVar3 = (uint)plStack_40;
    func_0x0001074ff0ac(puStack_38);
    (**(code **)(extraout_x8_01 + 0xa0))();
    uVar2 = uVar3 | uVar2;
    FUN_1074eb374(&plStack_40);
  }
  if ((uVar2 & 1) != 0) {
    func_0x0001074fe8d0();
    (*extraout_x8_02)();
  }
  return;
}



/* Entry: 1074eb4c4; end: 1074eb58b;  */

void FUN_1074eb4c4(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined1 auStack_48 [24];
  long *plStack_30;
  undefined8 uStack_28;
  
  bVar1 = **(byte **)(param_1 + 0x20);
  **(byte **)(param_1 + 0x20) = (byte)param_2;
  if (((int)param_2 != 0) && ((bVar1 & 1) == 0)) {
    plVar2 = *(long **)(param_1 + 0xef0);
    FUN_10745f750(auStack_48);
    func_0x0001074ff87c();
    uStack_28 = param_2;
    while (plStack_30 = plVar2, plVar2 != (long *)0x0) {
      func_0x0001074ff4a4(uStack_28);
      if ((bool)in_ZR) {
        (**(code **)(*plVar2 + 0xd0))();
      }
      func_0x0001074ff7a4();
      plVar2 = plStack_30;
    }
    func_0x0001074fefe4();
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0xef8) + 0x10) + 0x2ac) = 1;
  if (*(long *)(param_1 + 0xf58) != 0) {
    func_0x00010002b838(auStack_48,&UNK_10f415d97);
    func_0x0001074ff804(*(undefined8 *)(param_1 + 0xf58));
    func_0x0001074ff144();
  }
  return;
}



/* Entry: 1074eb58c; end: 1074eb6df;  */

void FUN_1074eb58c(void)

{
  undefined4 *unaff_x19;
  undefined1 auStack_100 [40];
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined4 auStack_b0 [6];
  undefined4 uStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x0001074fe980();
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  auStack_b0[0] = 0xb6;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x0001074ff9f4();
  uStack_64 = 1;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  func_0x0001074ff860(auStack_c8);
  func_0x00010726e300(auStack_b0,&DAT_10f2e34e7,auStack_c8);
  uStack_d8 = *unaff_x19;
  uStack_d0 = 1;
  func_0x0001074ff9e0();
  func_0x0001074fe720();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  func_0x0001074ff794();
  auStack_b0[0] = 0xb7;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x0001074ff9f4();
  uStack_64 = 1;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  func_0x0001074ff860(auStack_100);
  func_0x00010726e300(auStack_b0,&DAT_10f2e34e7,auStack_100);
  uStack_d8 = unaff_x19[1];
  uStack_d0 = 1;
  func_0x0001074ff9e0();
  func_0x0001074fe720();
  func_0x0001074fee50();
  func_0x0001074ff794();
  return;
}



/* Entry: 1074eb6e0; end: 1074eb76b;  */

void FUN_1074eb6e0(long *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  
  *(char *)(param_1[4] + 1) = (char)param_2;
  plVar1 = param_1;
  if (param_1[0x1eb] != 0) {
    func_0x0001074ff2b8();
    func_0x0001074ff804(param_1[0x1eb]);
    func_0x0001074ff144();
  }
  func_0x0001074ff2b8();
  func_0x0001074ff87c();
  while (plVar1 != (long *)0x0) {
    plVar2 = plVar1;
    func_0x0001074ff4a4(param_2);
    if ((bool)in_ZR) {
      (**(code **)(*plVar2 + 0xd8))();
    }
    func_0x0001074ff7a4();
  }
  func_0x0001074ff144();
  return;
}



/* Entry: 1074f0cc8; end: 1074f0d37;  */

void FUN_1074f0cc8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  *param_1 = param_2;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined ***)(param_1 + 8) = &PTR_DAT_110996720;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0x10] = param_2;
  param_1[0x12] = param_3;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  FUN_1074fa2a4(param_1,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1074f0d38; end: 1074f0e4f;  */

undefined *** FUN_1074f0d38(long param_1,undefined ***param_2)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  code *pcVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  ulong uVar6;
  ulong extraout_x8_01;
  ulong uVar7;
  ulong uVar8;
  long unaff_x19;
  long *plVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong unaff_x27;
  double dVar13;
  undefined **ppuStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  long lStack_3d0;
  undefined ***pppuStack_3c8;
  undefined1 *puStack_3a0;
  code *pcStack_398;
  undefined1 *puStack_390;
  code *pcStack_388;
  undefined1 **ppuStack_380;
  undefined **ppuStack_378;
  undefined1 auStack_358 [240];
  long lStack_268;
  undefined ***pppuStack_258;
  undefined **appuStack_1c8 [50];
  undefined8 uStack_38;
  
  pppuVar4 = param_2;
  func_0x0001074fe570();
  pppuVar1 = *(undefined ****)(param_1 + 0xee8);
  uStack_38 = extraout_x8;
  func_0x0001074ff554();
  (*extraout_x8_00)();
  if ((int)pppuVar1 != 0) {
    lVar10 = *(long *)(unaff_x19 + 0xec8);
    dVar13 = *(double *)(unaff_x19 + 0xd0);
    _log2(dVar13);
    func_0x0001077512dc((float)dVar13,auStack_358);
    lStack_268 = lVar10 + 0x70;
    pppuStack_258 = param_2;
    func_0x000107751334(appuStack_1c8,auStack_358);
    func_0x000107267da8(auStack_358);
    param_2 = *(undefined ****)(unaff_x19 + 0xee8);
    ppuStack_378 = &PTR_FUN_1109b5f88;
    pppuVar4 = appuStack_1c8;
    (*(code *)(*param_2)[7])(param_2,pppuVar4,*(undefined8 *)(unaff_x19 + 0xef0),&ppuStack_378);
    pppuVar1 = &ppuStack_378;
    func_0x0001073db5b8();
    if ((int)param_2 != 0) {
      plVar9 = *(long **)(unaff_x19 + 0xea8);
      __ZNSt3__16chrono12steady_clock3nowEv();
      (**(code **)(*plVar9 + 0x38))(plVar9);
      pppuVar4 = pppuVar1;
    }
    pppuVar1 = appuStack_1c8;
    func_0x000107267da8();
  }
  func_0x0001074fe49c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppuVar2 = appuStack_1c8;
    func_0x000107267da8();
    func_0x0001074fe8f4();
    pcStack_388 = FUN_1074f0e50;
    puStack_390 = &stack0xfffffffffffffff0;
    FUN_1074f3ec4();
    if (pppuVar2 != (undefined ***)0x0) {
      return pppuVar4 + 7;
    }
    func_0x0001074ff064();
    pcStack_398 = FUN_1074f0e70;
    puStack_3a0 = (undefined1 *)&puStack_390;
    func_0x0001074fe9f4();
    pppuStack_3c8 = pppuVar2 + 2;
    ppuVar11 = pppuVar2[1];
    if (ppuVar11 < *pppuStack_3c8) {
      ppuVar12 = ppuVar11 + 1;
      *ppuVar11 = (undefined *)param_2;
    }
    else {
      lVar10 = (long)ppuVar11 - (long)*pppuVar1;
      uVar6 = (lVar10 >> 3) + 1;
      if (uVar6 >> 0x3d != 0) {
        FUN_1074f53f0();
        pcVar5 = FUN_1074f0f28;
        func_0x0001074feda8();
        ppuStack_380 = &puStack_3a0;
        ppuStack_378 = (undefined **)pcVar5;
        func_0x0001074fe9f4();
        func_0x0001074fe584();
        lVar10 = 0;
        ppuVar11 = pppuVar1[1];
        ppuVar12 = pppuVar1[2];
        uVar6 = (ulong)*pppuVar1 >> 0xc ^ (ulong)pppuVar2 >> 7;
        while( true ) {
          uVar6 = uVar6 & (ulong)ppuVar12;
          func_0x0001074febcc();
          while (unaff_x27 != 0) {
            uVar8 = (unaff_x27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x27 & 0x5555555555555555) << 1;
            uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
            uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
            uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            uVar8 = uVar6 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & (ulong)ppuVar12;
            ppuVar3 = ppuVar11 + uVar8 * 10;
            func_0x000104c32db4(ppuVar3,param_2);
            if ((int)ppuVar3 != 0) {
              return (undefined ***)((long)*pppuVar1 + uVar8);
            }
            func_0x0001074ff5c0();
          }
          func_0x0001074fe824();
          if ((extraout_x8_01 & 1) != 0) break;
          lVar10 = lVar10 + 8;
          uVar6 = lVar10 + uVar6;
        }
        return (undefined ***)0x0;
      }
      uVar7 = (long)*pppuStack_3c8 - (long)*pppuVar1;
      uVar8 = (long)uVar7 >> 2;
      if (uVar8 <= uVar6) {
        uVar8 = uVar6;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 == 0) {
        pppuVar4 = (undefined ***)0x0;
      }
      else {
        FUN_1074f541c();
      }
      plStack_3e0 = (long *)(uVar8 + lVar10);
      lStack_3d0 = uVar8 + (long)pppuVar4 * 8;
      plStack_3d8 = plStack_3e0 + 1;
      *plStack_3e0 = (long)param_2;
      func_0x0001074fec24();
      FUN_1074f53fc();
      ppuVar12 = pppuVar1[1];
      pppuVar2 = &ppuStack_3e8;
      func_0x0001074f5444(pppuVar2);
    }
    pppuVar1[1] = ppuVar12;
    return pppuVar2;
  }
  return pppuVar1;
}



/* Entry: 1074f0e50; end: 1074f0e6f;  */

undefined1 * FUN_1074f0e50(undefined1 *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong unaff_x27;
  ulong uVar8;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  ulong *puStack_48;
  
  FUN_1074f3ec4();
  if (param_1 != (undefined1 *)0x0) {
    return (undefined1 *)(param_2 + 0x38);
  }
  func_0x0001074ff064();
  func_0x0001074fe9f4();
  puStack_48 = (ulong *)(param_1 + 0x10);
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar5 < (undefined8 *)*puStack_48) {
    puVar7 = puVar5 + 1;
    *puVar5 = unaff_x20;
  }
  else {
    lVar6 = (long)puVar5 - *unaff_x19;
    uVar2 = (lVar6 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_1074f53f0();
      func_0x0001074feda8();
      func_0x0001074fe9f4();
      func_0x0001074fe584();
      lVar6 = 0;
      uVar4 = unaff_x19[1];
      uVar3 = unaff_x19[2];
      uVar2 = *unaff_x19 >> 0xc ^ (ulong)param_1 >> 7;
      while( true ) {
        uVar2 = uVar2 & uVar3;
        func_0x0001074febcc();
        while (unaff_x27 != 0) {
          uVar8 = (unaff_x27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x27 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar2 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar3;
          iVar1 = (int)uVar4 + (int)uVar8 * 0x50;
          func_0x000104c32db4();
          if (iVar1 != 0) {
            return (undefined1 *)(*unaff_x19 + uVar8);
          }
          func_0x0001074ff5c0();
        }
        func_0x0001074fe824();
        if ((extraout_x8 & 1) != 0) break;
        lVar6 = lVar6 + 8;
        uVar2 = lVar6 + uVar2;
      }
      return (undefined1 *)0x0;
    }
    uVar3 = (long)*puStack_48 - *unaff_x19;
    uVar4 = (long)uVar3 >> 2;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 == 0) {
      param_2 = 0;
    }
    else {
      FUN_1074f541c();
    }
    puStack_60 = (undefined8 *)(uVar4 + lVar6);
    lStack_50 = uVar4 + param_2 * 8;
    puStack_58 = puStack_60 + 1;
    *puStack_60 = unaff_x20;
    func_0x0001074fec24();
    FUN_1074f53fc();
    puVar7 = (undefined8 *)unaff_x19[1];
    param_1 = auStack_68;
    func_0x0001074f5444(param_1);
  }
  unaff_x19[1] = (ulong)puVar7;
  return param_1;
}



/* Entry: 1074f0e70; end: 1074f0f27;  */

undefined1 * FUN_1074f0e70(undefined1 *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong unaff_x27;
  ulong uVar8;
  undefined1 auStack_58 [8];
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  ulong *puStack_38;
  
  func_0x0001074fe9f4();
  puStack_38 = (ulong *)(param_1 + 0x10);
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar5 < (undefined8 *)*puStack_38) {
    puVar7 = puVar5 + 1;
    *puVar5 = unaff_x20;
  }
  else {
    lVar6 = (long)puVar5 - *unaff_x19;
    uVar2 = (lVar6 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_1074f53f0();
      func_0x0001074feda8();
      func_0x0001074fe9f4();
      func_0x0001074fe584();
      lVar6 = 0;
      uVar4 = unaff_x19[1];
      uVar3 = unaff_x19[2];
      uVar2 = *unaff_x19 >> 0xc ^ (ulong)param_1 >> 7;
      while( true ) {
        uVar2 = uVar2 & uVar3;
        func_0x0001074febcc();
        while (unaff_x27 != 0) {
          uVar8 = (unaff_x27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x27 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar2 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar3;
          iVar1 = (int)uVar4 + (int)uVar8 * 0x50;
          func_0x000104c32db4();
          if (iVar1 != 0) {
            return (undefined1 *)(*unaff_x19 + uVar8);
          }
          func_0x0001074ff5c0();
        }
        func_0x0001074fe824();
        if ((extraout_x8 & 1) != 0) break;
        lVar6 = lVar6 + 8;
        uVar2 = lVar6 + uVar2;
      }
      return (undefined1 *)0x0;
    }
    uVar3 = (long)*puStack_38 - *unaff_x19;
    uVar4 = (long)uVar3 >> 2;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 == 0) {
      param_2 = 0;
    }
    else {
      FUN_1074f541c();
    }
    puStack_50 = (undefined8 *)(uVar4 + lVar6);
    lStack_40 = uVar4 + param_2 * 8;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = unaff_x20;
    func_0x0001074fec24();
    FUN_1074f53fc();
    puVar7 = (undefined8 *)unaff_x19[1];
    param_1 = auStack_58;
    func_0x0001074f5444(param_1);
  }
  unaff_x19[1] = (ulong)puVar7;
  return param_1;
}



/* Entry: 1074f0f28; end: 1074f0fd3;  */

long FUN_1074f0f28(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong extraout_x8;
  ulong *unaff_x19;
  long lVar5;
  ulong unaff_x27;
  ulong uVar6;
  
  func_0x0001074feda8();
  func_0x0001074fe9f4();
  func_0x0001074fe584();
  lVar5 = 0;
  uVar1 = unaff_x19[1];
  uVar2 = unaff_x19[2];
  uVar4 = *unaff_x19 >> 0xc ^ param_1 >> 7;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    func_0x0001074febcc();
    while (unaff_x27 != 0) {
      uVar6 = (unaff_x27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x27 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar4 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar2;
      iVar3 = (int)uVar1 + (int)uVar6 * 0x50;
      func_0x000104c32db4();
      if (iVar3 != 0) {
        return *unaff_x19 + uVar6;
      }
      func_0x0001074ff5c0();
    }
    func_0x0001074fe824();
    if ((extraout_x8 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    uVar4 = lVar5 + uVar4;
  }
  return 0;
}



/* Entry: 1074f0fd4; end: 1074f103f;  */

void FUN_1074f0fd4(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  long *unaff_x19;
  long unaff_x20;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_48 [40];
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 4)) {
    return;
  }
  if (param_2 >> 0x3c == 0) {
    FUN_1074f5cd0(auStack_48,param_2,param_1[1] - *param_1 >> 4);
    func_0x0001074fec24();
    FUN_1074f5c98();
    func_0x0001074fefdc();
    return;
  }
  FUN_1074f5c8c();
  func_0x0001074fead8();
  func_0x0001074f5e6c();
  func_0x0001074fe8f4();
  func_0x0001074fe9f4();
  lStack_98 = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  lVar1 = param_2 + 0xf60;
  FUN_1074f1818();
  lStack_a8 = lVar1;
  while (uStack_a0 = param_2, lStack_a8 != 0) {
    plVar2 = *(long **)(param_2 + 0x38);
    (**(code **)(*plVar2 + 0x20))();
    if (((ulong)plVar2 & 1) == 0) {
      func_0x0001072d17f4(&lStack_98,*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x10);
    }
    FUN_1074f1838(&lStack_a8);
    param_2 = uStack_a0;
  }
  if (lStack_98 == lStack_90) {
    if (**(char **)(unaff_x20 + 0xec8) == '\x01') {
      *(undefined4 *)(unaff_x19 + 3) = 0;
      goto LAB_1074f10f4;
    }
    uVar3 = 2;
  }
  else {
    *unaff_x19 = lStack_98;
    unaff_x19[1] = lStack_90;
    unaff_x19[2] = lStack_88;
    lStack_90 = 0;
    lStack_88 = 0;
    lStack_98 = 0;
    uVar3 = 1;
  }
  *(undefined4 *)(unaff_x19 + 3) = uVar3;
LAB_1074f10f4:
  func_0x00010726e078(&lStack_98);
  return;
}



/* Entry: 1074f1040; end: 1074f111b;  */

void FUN_1074f1040(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  long *unaff_x19;
  long unaff_x20;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x0001074fe9f4();
  lStack_48 = 0;
  lStack_40 = 0;
  lStack_38 = 0;
  lVar1 = param_2 + 0xf60;
  FUN_1074f1818();
  lStack_58 = lVar1;
  while (lStack_50 = param_2, lStack_58 != 0) {
    plVar2 = *(long **)(param_2 + 0x38);
    (**(code **)(*plVar2 + 0x20))();
    if (((ulong)plVar2 & 1) == 0) {
      func_0x0001072d17f4(&lStack_48,*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x10);
    }
    FUN_1074f1838(&lStack_58);
    param_2 = lStack_50;
  }
  if (lStack_48 == lStack_40) {
    if (**(char **)(unaff_x20 + 0xec8) == '\x01') {
      *(undefined4 *)(unaff_x19 + 3) = 0;
      goto LAB_1074f10f4;
    }
    uVar3 = 2;
  }
  else {
    *unaff_x19 = lStack_48;
    unaff_x19[1] = lStack_40;
    unaff_x19[2] = lStack_38;
    lStack_40 = 0;
    lStack_38 = 0;
    lStack_48 = 0;
    uVar3 = 1;
  }
  *(undefined4 *)(unaff_x19 + 3) = uVar3;
LAB_1074f10f4:
  func_0x00010726e078(&lStack_48);
  return;
}



/* Entry: 1074f111c; end: 1074f12ff;  */

undefined1 * FUN_1074f111c(void)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 extraout_x8_03;
  int extraout_w10;
  long unaff_x19;
  long unaff_x21;
  long lVar5;
  long unaff_x22;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 unaff_d8;
  undefined8 uVar10;
  undefined1 *puStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [64];
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 uStack_80;
  undefined8 uStack_58;
  
  func_0x0001074ff910();
  func_0x0001074fe980();
  puVar7 = (undefined1 *)0x0;
  func_0x0001074fe5e8();
  uStack_58 = extraout_x8;
  func_0x0001074ffaf4();
  uStack_e8 = 0;
  uStack_e0 = 0;
  puStack_d8 = (undefined1 *)0x0;
  lVar5 = 0x1138369c0;
  for (; unaff_x22 != unaff_x21; unaff_x22 = unaff_x22 + 0x98) {
    func_0x0001074ff554(*(undefined8 *)(unaff_x22 + 0x10));
    (*extraout_x8_00)();
    func_0x00010726236c(auStack_d0);
    func_0x000107262398(&puStack_90,auStack_d0,0x1138369c0);
    func_0x00010724b3d8(auStack_d0);
    puVar6 = auStack_f0;
    func_0x0001072a02dc(puVar6,&puStack_90);
    if (((ulong)puVar6 & 1) == 0) {
      puVar6 = auStack_f0;
      func_0x0001072628ec(auStack_d0,puVar6,&puStack_90);
      func_0x0001074ff7b8();
      FUN_1074f1964();
      puVar7 = puVar6 + (long)puVar7;
    }
    func_0x000104c2f714(&puStack_90);
  }
  uVar2 = puVar7 == puStack_d8;
  if (!(bool)uVar2) {
    FUN_1074f1980(&puStack_100);
    func_0x00010002b838(auStack_d0,&UNK_10de7597c);
    pcStack_88 = (code *)lStack_f8;
    puStack_90 = puStack_100;
    if (lStack_f8 != 0) {
      do {
        func_0x0001074fe68c();
      } while (extraout_w10 != 0);
    }
    uStack_80 = 1;
    func_0x00010726acf0(&stack0xfffffffffffffef0);
    FUN_1074f1a48();
    func_0x0001074ff218();
    func_0x000107279298(&puStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
    func_0x0001072792b8(&puStack_100);
  }
  func_0x0001074ff7b8();
  FUN_10735ace0();
  puVar6 = auStack_f0;
  func_0x000107261dac(puVar6);
  func_0x0001074fe49c(uStack_58);
  if ((bool)uVar2) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x0001074feb10();
  func_0x00010726b264();
  func_0x000107279298(&puStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  func_0x0001072792b8(&puStack_100);
  puVar6 = auStack_f0;
  func_0x000107261dac();
  func_0x0001074fe8f4();
  pcVar4 = FUN_1074f1300;
  func_0x0001074feaa4();
  puStack_90 = &stack0xfffffffffffffff0;
  pcStack_88 = pcVar4;
  func_0x0001074fe9f4();
  func_0x0001074fe584();
  func_0x0001074fe870();
  uVar8 = extraout_x8_01;
  while( true ) {
    uVar8 = uVar8 & (ulong)puVar7;
    uVar10 = *(undefined8 *)(uVar8 + 0x2670);
    for (uVar9 = CONCAT17(-((char)((ulong)uVar10 >> 0x38) == (char)((ulong)unaff_d8 >> 0x38)),
                          CONCAT16(-((char)((ulong)uVar10 >> 0x30) ==
                                    (char)((ulong)unaff_d8 >> 0x30)),
                                   CONCAT15(-((char)((ulong)uVar10 >> 0x28) ==
                                             (char)((ulong)unaff_d8 >> 0x28)),
                                            CONCAT14(-((char)((ulong)uVar10 >> 0x20) ==
                                                      (char)((ulong)unaff_d8 >> 0x20)),
                                                     CONCAT13(-((char)((ulong)uVar10 >> 0x18) ==
                                                               (char)((ulong)unaff_d8 >> 0x18)),
                                                              CONCAT12(-((char)((ulong)uVar10 >>
                                                                               0x10) ==
                                                                        (char)((ulong)unaff_d8 >>
                                                                              0x10)),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar10 >> 8) == (char)((ulong)unaff_d8 >> 8)),
                                                  -((char)uVar10 == (char)unaff_d8)))))))) &
                 0x8080808080808080; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      puVar6 = (undefined1 *)
               (uVar8 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & (ulong)puVar7);
      puVar3 = &stack0xfffffffffffffef0;
      FUN_1074fb0a8(&stack0xfffffffffffffef0,*(long *)(unaff_x19 + 8) + (long)puVar6 * 0xd8);
      if (((ulong)puVar3 & 1) != 0) goto LAB_1074f13e0;
      puVar6 = puVar3;
    }
    func_0x0001074fe824();
    if ((extraout_x8_02 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    uVar8 = lVar5 + uVar8;
  }
  func_0x0001074feae4();
  FUN_1074fb018();
  lVar5 = *(long *)(unaff_x19 + 8) + (long)puVar6 * 0xd8;
  func_0x0001074ff3c8();
  func_0x000104c2fe00();
  _bzero(lVar5 + 0x38,0xa0);
  func_0x0001074ffaf4();
  *(undefined8 *)(lVar5 + 0x50) = extraout_x8_03;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  *(undefined8 *)(lVar5 + 0x70) = 0;
  *(undefined8 *)(lVar5 + 0x68) = 0;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0x78) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0x98) = 0;
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  *(undefined8 *)(lVar5 + 0xa8) = 0;
  *(undefined8 *)(lVar5 + 0xc0) = 0;
  *(undefined8 *)(lVar5 + 0xb8) = 0;
  *(undefined4 *)(lVar5 + 200) = 0x3f800000;
LAB_1074f13e0:
  return (undefined1 *)(*(long *)(unaff_x19 + 8) + (long)puVar6 * 0xd8 + 0x38);
}



/* Entry: 1074f1300; end: 1074f1417;  */

long FUN_1074f1300(undefined1 *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar3;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  ulong uVar4;
  ulong uVar5;
  undefined8 unaff_d8;
  undefined8 uVar6;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  func_0x0001074feaa4();
  func_0x0001074fe9f4();
  func_0x0001074fe584();
  func_0x0001074fe870();
  uVar4 = extraout_x8;
  while( true ) {
    uVar4 = uVar4 & unaff_x25;
    uVar6 = *(undefined8 *)(unaff_x24 + uVar4);
    for (uVar5 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == (char)((ulong)unaff_d8 >> 0x38)),
                          CONCAT16(-((char)((ulong)uVar6 >> 0x30) == (char)((ulong)unaff_d8 >> 0x30)
                                    ),CONCAT15(-((char)((ulong)uVar6 >> 0x28) ==
                                                (char)((ulong)unaff_d8 >> 0x28)),
                                               CONCAT14(-((char)((ulong)uVar6 >> 0x20) ==
                                                         (char)((ulong)unaff_d8 >> 0x20)),
                                                        CONCAT13(-((char)((ulong)uVar6 >> 0x18) ==
                                                                  (char)((ulong)unaff_d8 >> 0x18)),
                                                                 CONCAT12(-((char)((ulong)uVar6 >>
                                                                                  0x10) ==
                                                                           (char)((ulong)unaff_d8 >>
                                                                                 0x10)),
                                                                          CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == (char)((ulong)unaff_d8 >> 8)),
                                                  -((char)uVar6 == (char)unaff_d8)))))))) &
                 0x8080808080808080; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar1 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      param_1 = (undefined1 *)
                (uVar4 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & unaff_x25);
      puVar2 = (undefined1 *)register0x00000008;
      in_stack_00000000 = unaff_x20;
      in_stack_00000008 = unaff_x19;
      FUN_1074fb0a8();
      if (((ulong)puVar2 & 1) != 0) goto LAB_1074f13e0;
      param_1 = puVar2;
    }
    func_0x0001074fe824();
    if ((extraout_x8_00 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 8;
    uVar4 = unaff_x23 + uVar4;
  }
  func_0x0001074feae4();
  FUN_1074fb018();
  lVar3 = *(long *)(unaff_x19 + 8) + (long)param_1 * 0xd8;
  func_0x0001074ff3c8();
  func_0x000104c2fe00();
  _bzero(lVar3 + 0x38,0xa0);
  func_0x0001074ffaf4();
  *(undefined8 *)(lVar3 + 0x50) = extraout_x8_01;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined8 *)(lVar3 + 0xa0) = 0;
  *(undefined8 *)(lVar3 + 0x98) = 0;
  *(undefined8 *)(lVar3 + 0xb0) = 0;
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  *(undefined8 *)(lVar3 + 0xc0) = 0;
  *(undefined8 *)(lVar3 + 0xb8) = 0;
  *(undefined4 *)(lVar3 + 200) = 0x3f800000;
LAB_1074f13e0:
  return *(long *)(unaff_x19 + 8) + (long)param_1 * 0xd8 + 0x38;
}



/* Entry: 1074f1418; end: 1074f146b;  */

void FUN_1074f1418(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001074fe980();
  FUN_1074f64d0();
  FUN_1074f6808(unaff_x20 + 0x18,unaff_x19 + 0x18);
  FUN_1074f64f4(unaff_x20 + 0x38,unaff_x19 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x58) = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  func_0x0001072e89fc(unaff_x20 + 0x70,unaff_x19 + 0x70);
  *(undefined4 *)(unaff_x20 + 0x98) = *(undefined4 *)(unaff_x19 + 0x98);
  return;
}



/* Entry: 1074f146c; end: 1074f148b;  */

void FUN_1074f146c(void)

{
  func_0x0001074f3f04();
  return;
}



/* Entry: 1074f148c; end: 1074f1577;  */

void FUN_1074f148c(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_w10;
  undefined8 *unaff_x21;
  undefined4 uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [4];
  int iStack_54;
  
  *(undefined4 *)(param_1 + 4) = 1;
  if (param_4 != param_5) {
    func_0x0001074ff910();
    uVar3 = 1;
    for (; unaff_x21 != param_5; unaff_x21 = unaff_x21 + 2) {
      uStack_68 = unaff_x21[1];
      uStack_70 = *unaff_x21;
      if (unaff_x21[1] != 0) {
        do {
          func_0x0001074fe68c();
        } while (extraout_w10 != 0);
      }
      uStack_60 = 1;
      uStack_80 = 0;
      uStack_78 = 0;
      func_0x00010726acf0(&uStack_80);
      (**(code **)(*param_2 + 0x28))(auStack_58,param_2);
      iVar2 = iStack_54;
      func_0x0001074ff218();
      func_0x0001074ff320();
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1;
    }
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  return;
}



/* Entry: 1074f1578; end: 1074f1817;  */

void FUN_1074f1578(undefined8 param_1,int *param_2)

{
  long unaff_x20;
  
  func_0x0001074fe9f4();
  if (*param_2 != 0) {
    func_0x0001074fece4();
    func_0x0001074fed90();
    func_0x0001074fe52c();
    FUN_10743fa9c();
    func_0x0001074feaf0();
    func_0x0001074fe860(0xc0);
    func_0x0001074fef28();
    func_0x0001074fece4();
    func_0x0001074fea30();
    func_0x0001074fe52c();
    FUN_10743fa9c();
    func_0x0001074feaf0();
    func_0x0001074fe860(0xc3);
    func_0x0001074fef28();
    func_0x0001074fece4();
    func_0x0001074fea30();
    func_0x0001074fe52c();
    FUN_10743fa44();
    func_0x0001074feaf0();
    func_0x0001074fe860(0xc0);
    func_0x0001074fe7dc();
    func_0x0001074fea30();
    func_0x0001074fe52c();
    FUN_10743fa44();
    func_0x0001074feaf0();
    func_0x0001074fe860(0xc5);
    func_0x0001074fe7dc();
    func_0x0001074fea30();
    func_0x0001074fe52c();
    FUN_10743fa44();
    func_0x0001074feaf0();
    func_0x0001074fe860(0xc2);
    func_0x0001074fe7dc();
    func_0x0001074fea30();
    func_0x0001074fe52c();
    FUN_10743fa44();
    func_0x0001074feaf0();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001074fece4();
    func_0x0001074fed90();
    func_0x0001074fe52c();
    FUN_10743fa9c();
    func_0x0001074feaf0();
    func_0x0001074fe860(0xc1);
    func_0x0001074fe7dc();
    func_0x0001074fea30();
    func_0x0001074fe52c();
    FUN_10743fa9c();
    func_0x0001074feaf0();
    func_0x0001074fe860(0xc4);
    func_0x0001074fef28();
    func_0x0001074fece4();
    func_0x0001074fed90();
    func_0x0001074fe52c();
    FUN_10743fa44();
    func_0x0001074feaf0();
    func_0x0001074fe860(0xc1);
    func_0x0001074fef28();
    func_0x0001074fece4();
    func_0x0001074fed90();
    func_0x0001074fe52c();
    FUN_10743fa44();
    func_0x0001074feaf0();
  }
  return;
}



/* Entry: 1074f1818; end: 1074f1837;  */

undefined1  [16] FUN_1074f1818(void)

{
  undefined1 auStack_20 [16];
  
  func_0x0001074fef98();
  FUN_1074f91a0();
  return auStack_20;
}



/* Entry: 1074f1838; end: 1074f188b;  */

void FUN_1074f1838(undefined8 param_1)

{
  func_0x0001074ff058();
  func_0x0001074fef8c(param_1,1);
  FUN_1074f91a0();
  return;
}



/* Entry: 1074f188c; end: 1074f195b;  */

void FUN_1074f188c(undefined1 *param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  lVar2 = param_3;
  func_0x0001074fe5e8();
  param_2 = param_2 + 0xf80;
  uStack_38 = extraout_x8;
  FUN_1074eb354();
  lStack_a8 = param_2;
  while ((lStack_a8 != 0 &&
         (lStack_a0 = lVar2, func_0x000107283140(lVar2,param_3), iVar1 = (int)lVar2,
         lVar2 = lStack_a0, iVar1 == 0))) {
    FUN_1074eb374(&lStack_a8);
    lVar2 = lStack_a0;
  }
  lStack_a0 = lVar2;
  if (lStack_a8 == 0) {
    *param_1 = 0;
    param_1[0x70] = 0;
    plVar3 = (long *)0x0;
  }
  else {
    func_0x000104c2fe00(&lStack_a8,*(long *)(*(long *)(lVar2 + 0x38) + 0x18) + 0x40);
    func_0x000104c2fe00(auStack_70,*(long *)(*(long *)(lVar2 + 0x38) + 0x18) + 0x78);
    func_0x0001074fec24();
    FUN_1074f72bc();
    plVar3 = &lStack_a8;
    func_0x000107284df4();
    param_3 = lVar2;
  }
  func_0x0001074fe49c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001074fe980();
  puVar4 = (undefined1 *)plVar3[1];
  while (puVar4 != param_1) {
    puVar4 = puVar4 + -0x10;
    FUN_1073ad37c();
  }
  *(undefined1 **)(param_3 + 8) = param_1;
  return;
}



/* Entry: 1074f195c; end: 1074f1963;  */

void FUN_1074f195c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074fe980(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    FUN_1073ad37c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074f1964; end: 1074f197f;  */

bool FUN_1074f1964(long param_1)

{
  func_0x0001072a0454();
  return param_1 != 0;
}



/* Entry: 1074f1980; end: 1074f1a47;  */

void FUN_1074f1980(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  ulong *puVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  undefined1 auStack_128 [4];
  int iStack_124;
  ulong uStack_120;
  ulong uStack_118;
  undefined1 uStack_110;
  undefined1 auStack_d0 [16];
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [64];
  undefined4 auStack_78 [16];
  undefined8 uStack_38;
  
  puVar1 = auStack_d0;
  func_0x0001074fe570();
  uStack_38 = extraout_x8;
  func_0x0001074ff220();
  func_0x000107296b84();
  puStack_c0[1] = 0;
  puStack_c0[2] = 0;
  *puStack_c0 = &PTR_DAT_110998a58;
  auStack_78[0] = 4;
  func_0x00010729807c(auStack_b8,param_2);
  puVar2 = (ulong *)0x1138369c0;
  puVar3 = auStack_78;
  puVar4 = puVar2;
  FUN_1074fbd30(puStack_c0 + 3,puVar3,0x1138369c0,0x1138369c0,auStack_b8);
  func_0x0001074fef84();
  func_0x0001074ff278();
  func_0x0001074fe658();
  func_0x000107297fb8();
  func_0x0001074fe49c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001074fef84();
    func_0x0001074ff278();
    __ZNSt3__119__shared_weak_countD2Ev(puStack_c0);
    func_0x000107297fb8();
    func_0x0001074fe8f4();
    if ((char)puVar2[2] == '\x01') {
      func_0x000107392e34();
      uStack_118 = puVar2[1];
      uStack_120 = *puVar2;
      if (puVar2[1] != 0) {
        do {
          func_0x0001074fe68c();
        } while (extraout_w10 != 0);
      }
      uStack_110 = 1;
    }
    else {
      uStack_110 = 0;
      uStack_120 = uStack_120 & 0xffffffffffffff00;
    }
    (**(code **)(**(long **)(puVar1 + 0xee8) + 0x28))
              (auStack_128,*(long **)(puVar1 + 0xee8),puVar3,&uStack_120,puVar4);
    if (iStack_124 == 0) {
      func_0x0001074fe8d0();
      (*extraout_x8_00)();
    }
    func_0x0001074ff320();
    return;
  }
  return;
}



/* Entry: 1074f1a48; end: 1074f1aff;  */

void FUN_1074f1a48(long param_1,undefined8 param_2,ulong *param_3,undefined8 param_4)

{
  code *extraout_x8;
  int extraout_w10;
  undefined1 auStack_58 [4];
  int iStack_54;
  ulong uStack_50;
  ulong uStack_48;
  undefined1 uStack_40;
  
  if ((char)param_3[2] == '\x01') {
    func_0x000107392e34();
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x0001074fe68c();
      } while (extraout_w10 != 0);
    }
    uStack_40 = 1;
  }
  else {
    uStack_40 = 0;
    uStack_50 = uStack_50 & 0xffffffffffffff00;
  }
  (**(code **)(**(long **)(param_1 + 0xee8) + 0x28))
            (auStack_58,*(long **)(param_1 + 0xee8),param_2,&uStack_50,param_4);
  if (iStack_54 == 0) {
    func_0x0001074fe8d0();
    (*extraout_x8)();
  }
  func_0x0001074ff320();
  return;
}



/* Entry: 1074f1b00; end: 1074f2a7b;  */

void FUN_1074f1b00(long *param_1,long *param_2,long ******param_3,ulong *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  ulong *puVar13;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar14;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x10;
  long ******pppppplVar15;
  int iVar16;
  long *****ppppplVar17;
  long ****pppplVar18;
  long ******pppppplVar19;
  long lVar20;
  long lVar21;
  long ******pppppplVar22;
  long *****ppppplVar23;
  long ******pppppplVar24;
  long ******pppppplVar25;
  long ******pppppplVar26;
  long *****ppppplVar27;
  float fVar28;
  long ****pppplStack_738;
  long lStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  long lStack_718;
  long lStack_710;
  long ****pppplStack_700;
  long *****ppppplStack_6f8;
  long ****pppplStack_6f0;
  long *****ppppplStack_6e8;
  undefined8 uStack_6e0;
  long lStack_6d8;
  long ****apppplStack_6d0 [16];
  long ****pppplStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined *puStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  long ****pppplStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long *****ppppplStack_5d0;
  long *****ppppplStack_5c8;
  long *****ppppplStack_5c0;
  long *****ppppplStack_5b8;
  long *****ppppplStack_5b0;
  long *plStack_5a8;
  long *****ppppplStack_5a0;
  long ****pppplStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  long lStack_578;
  long *****ppppplStack_570;
  long *****ppppplStack_568;
  long *****ppppplStack_560;
  long *****ppppplStack_558;
  undefined8 uStack_550;
  long *plStack_488;
  long lStack_480;
  long *****ppppplStack_3e0;
  long *****ppppplStack_3d8;
  long *****ppppplStack_3d0;
  long *****ppppplStack_3c8;
  long ****pppplStack_250;
  long *****ppppplStack_248;
  undefined1 uStack_240;
  long *****ppppplStack_230;
  long *****ppppplStack_228;
  long *plStack_220;
  long *****ppppplStack_218;
  long *****ppppplStack_210;
  undefined1 uStack_208;
  long lStack_1f8;
  long lStack_1f0;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  
  pppppplVar22 = param_3;
  puVar13 = param_4;
  func_0x0001074fe5e8();
  pppplStack_738 = (long ****)&UNK_10e52b660;
  lStack_730 = 0;
  uStack_728 = 0;
  uStack_720 = 0;
  uStack_88 = extraout_x8;
  if ((char)puVar13[3] == '\x01') {
    pppppplVar25 = (long ******)param_4[1];
    pppppplVar15 = (long ******)*param_4;
    for (; pppppplVar15 != pppppplVar25; pppppplVar15 = pppppplVar15 + 7) {
      plVar8 = param_2 + 0x1f0;
      pppppplVar22 = pppppplVar15;
      func_0x0001074f3ee4();
      if ((plVar8 != (long *)0x0) && (ppppplVar17 = pppppplVar22[7], ppppplVar17 != (long *****)0x0)
         ) {
        pppplVar18 = ppppplVar17[3];
        ppppplVar23 = &pppplStack_738;
        pppppplVar22 = (long ******)(pppplVar18 + 1);
        FUN_1074fbeac();
        if (((ulong)pppppplVar22 & 1) != 0) {
          lVar21 = lStack_730 + (long)ppppplVar23 * 0x40;
          pppppplVar22 = (long ******)(pppplVar18 + 1);
          func_0x000104c2fe00();
          *(long ******)(lVar21 + 0x38) = ppppplVar17;
        }
      }
      param_4 = puVar13;
    }
  }
  else {
    pppppplVar15 = (long ******)(param_2 + 0x1f0);
    FUN_1074eb354();
    ppppplStack_230 = (long *****)pppppplVar15;
    ppppplStack_228 = (long *****)pppppplVar22;
    while ((long ******)ppppplStack_230 != (long ******)0x0) {
      ppppplVar23 = (long *****)ppppplStack_228[7];
      pppplVar18 = ppppplVar23[3];
      ppppplVar17 = &pppplStack_738;
      pppppplVar22 = (long ******)(pppplVar18 + 1);
      FUN_1074fbeac();
      if (((ulong)pppppplVar22 & 1) != 0) {
        lVar21 = lStack_730 + (long)ppppplVar17 * 0x40;
        pppppplVar22 = (long ******)(pppplVar18 + 1);
        func_0x000104c2fe00();
        *(long ******)(lVar21 + 0x38) = ppppplVar23;
      }
      FUN_1074eb374(&ppppplStack_230);
      param_4 = puVar13;
    }
  }
  if ((char)param_4[0x1b] == '\x01' && param_4[0x19] != 0) {
    pppppplVar15 = (long ******)&pppplStack_738;
    FUN_1074f2a7c();
    ppppplStack_3e0 = (long *****)pppppplVar15;
    ppppplStack_3d8 = (long *****)pppppplVar22;
joined_r0x0001074f1c30:
    if ((long ******)ppppplStack_3e0 != (long ******)0x0) {
      func_0x0001074e3ac0(&ppppplStack_230,ppppplStack_3d8[7]);
      pppppplVar15 = (long ******)(ppppplStack_230 + 2);
      do {
        pppppplVar15 = (long ******)*pppppplVar15;
        if (pppppplVar15 == (long ******)0x0) {
          func_0x000107283194(&ppppplStack_230);
          ppppplVar17 = ppppplStack_3d8;
          pppppplVar22 = (long ******)ppppplStack_3e0;
          func_0x0001074ff6e0();
          func_0x000104c2f714(ppppplVar17);
          func_0x0001074ff77c(&pppplStack_738);
          goto joined_r0x0001074f1c30;
        }
        puVar7 = param_4 + 0x16;
        pppppplVar22 = pppppplVar15 + 2;
        func_0x0001072623d4();
      } while (puVar7 == (ulong *)0x0);
      func_0x000107283194(&ppppplStack_230);
      func_0x0001074ff6e0();
      goto joined_r0x0001074f1c30;
    }
  }
  pppplStack_610 = (long ****)&UNK_10e52b660;
  uStack_608 = 0;
  uStack_600 = 0;
  uStack_5f8 = 0;
  puStack_630 = &UNK_10e52b660;
  uStack_628 = 0;
  uStack_620 = 0;
  uStack_618 = 0;
  pppplStack_650 = (long ****)&UNK_10e52b660;
  uStack_648 = 0;
  uStack_640 = 0;
  uStack_638 = 0;
  ppppplVar17 = &pppplStack_738;
  FUN_1074f2a7c();
  ppppplStack_3e0 = ppppplVar17;
  while (ppppplStack_3d8 = (long *****)pppppplVar22, ppppplStack_3e0 != (long *****)0x0) {
    if ((((*(char *)(pppppplVar22[7] + 7) != '\0') &&
         (pppplVar18 = pppppplVar22[7][3], ((ulong)pppplVar18[0x2c] & 1) == 0)) &&
        (*(float *)(pppplVar18 + 0x26) <= *(float *)(param_2 + 7))) &&
       (*(float *)(param_2 + 7) <= *(float *)((long)pppplVar18 + 0x134))) {
      FUN_1074f2b40(&ppppplStack_230,&puStack_630,pppppplVar22);
      func_0x0001072628ec(&ppppplStack_230,&pppplStack_610,pppppplVar22[7][3] + 8);
    }
    func_0x0001074ff6e0();
    pppppplVar22 = (long ******)ppppplStack_3d8;
  }
  iVar16 = 0;
  plVar2 = (long *)((undefined8 *)param_2[0x1e9])[1];
  ppppplStack_3e0 = (long *****)0x0;
  for (plVar8 = *(long **)param_2[0x1e9]; uVar6 = plVar8 == plVar2, !(bool)uVar6;
      plVar8 = plVar8 + 2) {
    ppppplVar17 = &pppplStack_650;
    FUN_1074f8038(ppppplVar17,*plVar8 + 8);
    *(int *)ppppplVar17 = iVar16;
    iVar16 = iVar16 + 1;
  }
  pppppplVar22 = (long ******)(param_2 + 0xb);
  pppppplVar15 = (long ******)apppplStack_6d0;
  FUN_10741607c(pppppplVar22,pppppplVar15,1,0);
  pppplStack_6f0 = (long ****)&UNK_10e52b660;
  ppppplStack_6e8 = (long *****)0x0;
  uStack_6e0 = 0;
  lStack_6d8 = 0;
  pppppplVar25 = (long ******)&pppplStack_610;
  func_0x0001072621e0();
  pppppplVar19 = pppppplVar15;
  while (ppppplStack_5b8 = (long *****)pppppplVar25, ppppplStack_5b0 = (long *****)pppppplVar19,
        pppppplVar25 != (long ******)0x0) {
    plVar8 = param_2;
    FUN_1074f146c();
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x88))(&ppppplStack_230);
      pppppplVar25 = (long ******)ppppplStack_230;
      pppppplVar15 = (long ******)ppppplStack_228;
      func_0x0001074f2acc();
      pppppplVar19 = (long ******)ppppplStack_6e8;
      func_0x0001074f2acc(pppplStack_6f0);
      ppppplVar17 = &pppplStack_6f0;
      ppppplStack_570 = (long *****)pppppplVar25;
      while (ppppplStack_568 = (long *****)pppppplVar15, ppppplStack_3e0 = ppppplVar17,
            (long ******)ppppplStack_570 != (long ******)0x0) {
        ppppplVar23 = ppppplVar17;
        pppppplVar19 = pppppplVar15;
        FUN_1073c6228();
        if (((ulong)pppppplVar19 & 1) != 0) {
          pppplVar18 = ppppplVar17[1] + (long)ppppplVar23 * 10;
          pppppplVar19 = pppppplVar15;
          func_0x000104c2fe00();
          pppplVar18[7] = (long ***)0x0;
          pppplVar18[8] = (long ***)0x0;
          pppplVar18[9] = (long ***)0x0;
          ppppplVar27 = pppppplVar15[7];
          pppplVar18[8] = (long ***)pppppplVar15[8];
          pppplVar18[7] = (long ***)ppppplVar27;
          pppplVar18[9] = (long ***)pppppplVar15[9];
          pppppplVar15[7] = (long *****)0x0;
          pppppplVar15[8] = (long *****)0x0;
          pppppplVar15[9] = (long *****)0x0;
        }
        ppppplStack_3d8 = (long *****)((long)*ppppplVar17 + (long)ppppplVar23);
        ppppplStack_3d0 = (long *****)(ppppplVar17[1] + (long)ppppplVar23 * 10);
        FUN_1074f2aec(&ppppplStack_3d8);
        FUN_1074f2aec(&ppppplStack_570);
        ppppplVar17 = ppppplStack_3e0;
        pppppplVar15 = (long ******)ppppplStack_568;
      }
      FUN_1073c4728(&ppppplStack_230);
    }
    func_0x000107262260(&ppppplStack_5b8);
    pppppplVar25 = (long ******)ppppplStack_5b8;
    pppppplVar15 = pppppplVar19;
    pppppplVar19 = (long ******)ppppplStack_5b0;
  }
  pppplStack_590 = (long ****)&UNK_10e52b660;
  uStack_588 = 0;
  uStack_580 = 0;
  lStack_578 = 0;
  func_0x0001074ff248();
  pppppplVar19 = (long ******)&pppplStack_590;
  pppppplVar11 = pppppplVar15;
  FUN_1074f2a7c();
  ppppplStack_3e0 = &pppplStack_590;
  ppppplStack_570 = (long *****)pppppplVar25;
  ppppplStack_3d8 = (long *****)pppppplVar19;
  ppppplStack_568 = (long *****)pppppplVar15;
  ppppplStack_3d0 = (long *****)pppppplVar11;
  while ((long ******)ppppplStack_570 != (long ******)0x0) {
    pppplVar18 = (long ****)ppppplStack_568[7][3];
    func_0x0001074ff554();
    (*extraout_x8_00)();
    if (*(int *)((long)pppplVar18 + 0x14) == 0) {
      pppppplVar11 = (long ******)ppppplStack_3e0;
      FUN_1074f2b40(&ppppplStack_230,ppppplStack_3e0,ppppplStack_568);
      ppppplStack_3d0 = ppppplStack_228;
      ppppplStack_3d8 = ppppplStack_230;
      FUN_1074f2b94(&ppppplStack_3d8);
    }
    FUN_1074f2b94(&ppppplStack_570);
  }
  if (lStack_578 != 0) {
    ppppplVar17 = (long *****)param_2[0x4a5];
    pppppplVar15 = param_3;
    func_0x0001077f67c0(&ppppplStack_5b8,ppppplVar17 + 8);
    ppppplStack_5d0 = (long *****)0x0;
    ppppplStack_5c8 = (long *****)0x0;
    ppppplStack_5c0 = (long *****)0x0;
    plVar8 = plStack_5a8;
    if ((long ******)ppppplStack_5a0 != (long ******)0x0) {
      if ((ulong)ppppplStack_5a0 >> 0x3d != 0) goto LAB_1074f2840;
      pppppplVar25 = (long ******)ppppplStack_5a0;
      ppppplStack_210 = (long *****)&ppppplStack_5c0;
      FUN_1074f75c4();
      pppppplVar19 = (long ******)
                     ((long)pppppplVar25 - ((long)ppppplStack_5c8 - (long)ppppplStack_5d0));
      _memcpy(pppppplVar19);
      ppppplVar23 = ppppplStack_5d0;
      ppppplStack_5d0 = (long *****)pppppplVar19;
      ppppplStack_5c8 = (long *****)pppppplVar25;
      ppppplStack_5c0 = (long *****)(pppppplVar25 + (long)pppppplVar15);
      func_0x0001074fee98(ppppplVar23);
      plVar8 = plStack_5a8;
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      ppppplVar23 = ppppplVar17;
      func_0x00010781a640(ppppplVar17,*(undefined4 *)(plVar8 + 2));
      if (ppppplStack_5c8 < ppppplStack_5c0) {
        pppppplVar25 = (long ******)(ppppplStack_5c8 + 1);
        *ppppplStack_5c8 = (long ****)ppppplVar23;
      }
      else {
        lVar21 = (long)ppppplStack_5c8 - (long)ppppplStack_5d0;
        if ((lVar21 >> 3) + 1U >> 0x3d != 0) {
          FUN_1074f75b8();
          goto LAB_1074f2844;
        }
        pppppplVar15 = (long ******)ppppplStack_5d0;
        func_0x0001074ff948();
        lVar9 = extraout_x10;
        if (0x7ffffffffffffff7 < extraout_x8_01) {
          lVar9 = 0x1fffffffffffffff;
        }
        if (lVar9 == 0) {
          pppppplVar15 = (long ******)0x0;
          lVar20 = extraout_x9;
          ppppplStack_210 = (long *****)&ppppplStack_5c0;
        }
        else {
          ppppplStack_210 = (long *****)&ppppplStack_5c0;
          FUN_1074f75c4();
          lVar20 = (long)ppppplStack_5c8 - (long)ppppplStack_5d0 >> 3;
        }
        puVar1 = (undefined8 *)(lVar9 + lVar21);
        pppppplVar25 = (long ******)(puVar1 + 1);
        *puVar1 = ppppplVar23;
        _memcpy(puVar1 + -lVar20);
        ppppplVar23 = ppppplStack_5d0;
        ppppplStack_5d0 = (long *****)(puVar1 + -lVar20);
        ppppplStack_5c8 = (long *****)pppppplVar25;
        ppppplStack_5c0 = (long *****)(lVar9 + (long)pppppplVar15 * 8);
        func_0x0001074fee98(ppppplVar23);
      }
      ppppplStack_5c8 = (long *****)pppppplVar25;
    }
    pppppplVar15 = (long ******)ppppplStack_5d0;
    pppppplVar11 = (long ******)ppppplStack_5c8;
    if (ppppplStack_5d0 != ppppplStack_5c8) {
      FUN_1074f7624(ppppplStack_5d0,ppppplStack_5c8,
                    LZCOUNT((long)ppppplStack_5c8 - (long)ppppplStack_5d0 >> 3) << 1 ^ 0x7e,1);
      pppppplVar15 = (long ******)ppppplStack_5d0;
      pppppplVar11 = (long ******)ppppplStack_5c8;
    }
    for (; uVar6 = pppppplVar15 == pppppplVar11, !(bool)uVar6; pppppplVar15 = pppppplVar15 + 1) {
      ppppplVar17 = *pppppplVar15;
      pppplVar18 = ppppplVar17[1];
      pppppplVar25 = &ppppplStack_5b8;
      func_0x0001074f2a9c(pppppplVar25,ppppplVar17);
      FUN_1073c0da8(&lStack_5f0,pppplVar18,pppppplVar25,puVar13,&pppplStack_590,ppppplVar17 + 3,
                    ppppplVar17 + 5,param_2[0x1de]);
      lVar9 = lStack_5f0;
      lVar21 = lStack_5e8;
      func_0x0001074f2acc();
      lStack_718 = lVar9;
      while (lStack_710 = lVar21, lStack_718 != 0) {
        func_0x0001074ff650(&ppppplStack_230);
        func_0x0001072f40f4(&lStack_1f8,lVar21 + 0x38);
        ppppplVar17 = &pppplStack_6f0;
        FUN_1073c1490(ppppplVar17,&ppppplStack_230);
        lVar9 = lStack_1f0;
        pppppplVar25 = (long ******)ppppplVar17[1];
        for (lVar21 = lStack_1f8; lVar21 != lVar9; lVar21 = lVar21 + 0x1b0) {
          pppppplVar19 = (long ******)ppppplVar17[1];
          if (pppppplVar19 < ppppplVar17[2]) {
            pppppplVar26 = pppppplVar25;
            if (pppppplVar25 == pppppplVar19) {
              FUN_1073c5174(ppppplVar17,lVar21);
            }
            else {
              pppppplVar24 = pppppplVar19;
              for (pppppplVar12 = pppppplVar19 + -0x36; pppppplVar12 < pppppplVar19;
                  pppppplVar12 = pppppplVar12 + 0x36) {
                func_0x0001074ff66c();
                pppppplVar24 = pppppplVar24 + 0x36;
              }
              ppppplVar17[1] = (long ****)pppppplVar24;
              pppppplVar12 = pppppplVar19 + -0x6c;
              pppppplVar19 = pppppplVar19 + -0x36;
              for (; pppppplVar12 + 0x36 != pppppplVar25; pppppplVar12 = pppppplVar12 + -0x36) {
                func_0x00010729bf90(pppppplVar19);
                pppppplVar19 = pppppplVar19 + -0x36;
              }
              func_0x00010729bf90(pppppplVar25,lVar21);
            }
          }
          else {
            ppppplVar23 = ppppplVar17;
            func_0x00010729bde0(ppppplVar17,((long)pppppplVar19 - (long)*ppppplVar17) / 0x1b0 + 1);
            func_0x00010729cd10(&ppppplStack_570,ppppplVar23,
                                ((long)pppppplVar25 - (long)*ppppplVar17) / 0x1b0,ppppplVar17 + 2);
            if (ppppplStack_560 == ppppplStack_558) {
              if (ppppplStack_568 < ppppplStack_570 ||
                  (long)ppppplStack_568 - (long)ppppplStack_570 == 0) {
                uVar14 = ((long)ppppplStack_560 - (long)ppppplStack_570) / 0x1b0 << 1;
                if ((long)ppppplStack_560 - (long)ppppplStack_570 == 0) {
                  uVar14 = 1;
                }
                func_0x00010729cd10(&ppppplStack_3e0,uVar14,uVar14 >> 2,uStack_550);
                lVar20 = (long)ppppplStack_560 - (long)ppppplStack_568;
                pppppplVar19 = (long ******)((long)ppppplStack_3d0 + lVar20);
                for (; lVar20 != 0; lVar20 = lVar20 + -0x1b0) {
                  func_0x0001074ff66c();
                }
                pppppplVar26 = (long ******)ppppplStack_570;
                ppppplStack_570 = ppppplStack_3e0;
                pppppplVar12 = (long ******)ppppplStack_568;
                ppppplStack_568 = ppppplStack_3d8;
                ppppplStack_3d0 = ppppplStack_560;
                ppppplStack_560 = (long *****)pppppplVar19;
                pppppplVar19 = (long ******)ppppplStack_558;
                ppppplStack_558 = ppppplStack_3c8;
                ppppplStack_3e0 = (long *****)pppppplVar26;
                ppppplStack_3d8 = (long *****)pppppplVar12;
                ppppplStack_3c8 = (long *****)pppppplVar19;
                func_0x00010729cdf4(&ppppplStack_3e0);
              }
              else {
                lVar20 = (((long)ppppplStack_568 - (long)ppppplStack_570) / 0x1b0 + 1) / -2;
                pppppplVar19 = (long ******)ppppplStack_568;
                FUN_1074f7fcc(ppppplStack_568,ppppplStack_560,ppppplStack_568 + lVar20 * 0x36);
                ppppplStack_568 = ppppplStack_568 + lVar20 * 0x36;
                ppppplStack_560 = (long *****)pppppplVar19;
              }
            }
            func_0x00010729b464(ppppplStack_560,lVar21);
            pppppplVar26 = (long ******)ppppplStack_568;
            ppppplStack_560 = ppppplStack_560 + 0x36;
            func_0x00010729cd44(ppppplVar17 + 2,pppppplVar25,ppppplVar17[1]);
            ppppplStack_560 =
                 (long *****)((long)ppppplStack_560 + ((long)ppppplVar17[1] - (long)pppppplVar25));
            ppppplVar17[1] = (long ****)pppppplVar25;
            pppppplVar19 = (long ******)
                           (ppppplStack_568 +
                           (((long)pppppplVar25 - (long)*ppppplVar17) / -0x1b0) * 0x36);
            func_0x00010729cd44(ppppplVar17 + 2,*ppppplVar17,pppppplVar25,pppppplVar19);
            ppppplStack_570 = (long *****)*ppppplVar17;
            *ppppplVar17 = (long ****)pppppplVar19;
            ppppplStack_568 = ppppplStack_570;
            ppppplVar17[1] = (long ****)ppppplStack_560;
            pppppplVar25 = (long ******)ppppplVar17[2];
            ppppplStack_560 = ppppplStack_570;
            ppppplVar17[2] = (long ****)ppppplStack_558;
            ppppplStack_558 = (long *****)pppppplVar25;
            func_0x00010729cdf4(&ppppplStack_570);
          }
          pppppplVar25 = pppppplVar26 + 0x36;
        }
        func_0x0001073c5808(&ppppplStack_230);
        FUN_1074f2aec(&lStack_718);
        lVar21 = lStack_710;
      }
      FUN_1073c4728(&lStack_5f0);
    }
    FUN_1074f8014(&ppppplStack_5d0);
    FUN_1074fc0dc(&ppppplStack_5b8);
  }
  pppppplVar15 = (long ******)&pppplStack_590;
  FUN_1074f7554();
  pppplStack_590 = (long ****)0x0;
  uStack_588 = 0;
  uStack_580 = 0;
  func_0x0001074ff248();
  ppppplStack_230 = (long *****)pppppplVar15;
  ppppplStack_228 = (long *****)pppppplVar11;
  while ((long ******)ppppplStack_230 != (long ******)0x0) {
    func_0x0001074ff0ac(ppppplStack_228);
    (**(code **)(extraout_x8_02 + 0x90))();
    FUN_1074f2b94(&ppppplStack_230);
  }
  pppppplVar15 = (long ******)&pppplStack_6f0;
  FUN_1073c16ac(&pppplStack_590,pppppplVar15,param_3,pppppplVar22,(char)puVar13[0x15]);
  ppppplVar17 = (long *****)param_2[0x1de];
  FUN_10745f750(&lStack_5f0);
  func_0x0001074ff248();
  ppppplStack_568 = (long *****)pppppplVar15;
  while (ppppplVar17 != (long *****)0x0) {
    ppppplVar23 = (long *****)ppppplStack_568[7];
    ppppplStack_570 = ppppplVar17;
    func_0x0001074ff724(ppppplVar23[3]);
    if (ppppplVar17 == (long *****)0x0) {
      func_0x0001078699c4();
      FUN_1074f80c0(&ppppplStack_3e0,ppppplVar17);
    }
    else {
      FUN_10750a4d8(&ppppplStack_3e0);
    }
    ppppplStack_210 = (long *****)CONCAT71(ppppplStack_210._1_7_,1);
    ppppplStack_230 = (long *****)param_3;
    ppppplStack_228 = (long *****)pppppplVar22;
    plStack_220 = &lStack_5f0;
    ppppplStack_218 = (long *****)&ppppplStack_3e0;
    func_0x0001074e3ac0(&ppppplStack_5b8,ppppplVar23);
    puVar7 = puVar13;
    FUN_1073c1420(puVar13,&ppppplStack_5b8);
    uStack_208 = SUB81(puVar7,0);
    pppppplVar15 = &ppppplStack_230;
    (*(code *)(*ppppplVar23)[0x1b])(ppppplVar23,pppppplVar15,&pppplStack_6f0);
    func_0x000107283194(&ppppplStack_5b8);
    func_0x00010726e4c8(&ppppplStack_3e0);
    FUN_1074f2b94(&ppppplStack_570);
    ppppplVar17 = ppppplStack_570;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ppppplStack_570 = (long *****)0x0;
  if (lStack_6d8 != 0) {
    ppppplStack_570 = ppppplVar17;
    func_0x0001074ff248();
    pppplStack_700 = (long ****)ppppplVar17;
    puVar3 = PTR___ZSt7nothrow_1103469d8;
joined_r0x0001074f24f8:
    PTR___ZSt7nothrow_1103469d8 = puVar3;
    ppppplStack_6f8 = (long *****)pppppplVar15;
    if ((long *****)pppplStack_700 != (long *****)0x0) {
      ppppplVar17 = &pppplStack_6f0;
      pppplVar18 = pppppplVar15[7][3] + 1;
      FUN_10748a4c0(ppppplVar17,pppplVar18);
      if (ppppplVar17 != (long *****)0x0) {
        func_0x0001074ff724(pppppplVar15[7][3]);
        func_0x0001072f40f4(&ppppplStack_5d0,pppplVar18 + 7);
        pppppplVar25 = (long ******)ppppplStack_5d0;
        pppppplVar22 = (long ******)ppppplStack_5c8;
        if ((char)puVar13[0x11] == '\x01') {
          fVar28 = *(float *)(param_2 + 7);
          if (*(float *)(pppppplVar15[7][3] + 0x26) <= fVar28) {
            bVar5 = fVar28 <= *(float *)((long)pppppplVar15[7][3] + 0x134);
          }
          else {
            bVar5 = false;
          }
          lVar21 = param_2[0x1d9];
          func_0x000107751284(&ppppplStack_570);
          if (bVar5) {
            pppppplVar22 = &ppppplStack_230;
            func_0x0001077512dc(fVar28,pppppplVar22);
            func_0x0001074ff6b4();
          }
          else {
            pppppplVar22 = &ppppplStack_230;
            func_0x000107751284(pppppplVar22);
            func_0x0001074ff6b4();
          }
          func_0x0001074ff1f8();
          lStack_480 = lVar21 + 0x70;
          plStack_488 = &lStack_5f0;
          if (ppppplVar17 == (long *****)0x0) {
            func_0x0001078699c4();
            FUN_1074f80c0(&ppppplStack_5b8,pppppplVar22);
          }
          else {
            FUN_10750a4d8(&ppppplStack_5b8,ppppplVar17,pppppplVar15[7][3] + 0xf);
          }
          ppppplVar17 = pppppplVar15[7];
          func_0x0001072f40f4(&lStack_718,&ppppplStack_5d0);
          func_0x000107751334(&ppppplStack_3e0,&ppppplStack_570);
          lVar9 = lStack_710;
          lVar21 = lStack_718;
          uStack_240 = 1;
          pppplStack_250 = (long ****)ppppplVar17;
          ppppplStack_248 = (long *****)&ppppplStack_5b8;
          func_0x000107751334(&ppppplStack_230,&ppppplStack_3e0);
          ppppplStack_98 = ppppplStack_248;
          pppplStack_a0 = pppplStack_250;
          uStack_90 = uStack_240;
          for (; lVar20 = lVar9, lVar21 != lVar9; lVar21 = lVar21 + 0x1b0) {
            pppppplVar22 = &ppppplStack_230;
            FUN_1074f80e4(pppppplVar22,lVar21);
            lVar20 = lVar21;
            if ((int)pppppplVar22 != 0) goto LAB_1074f2658;
          }
          goto LAB_1074f268c;
        }
        goto LAB_1074f26e4;
      }
      goto LAB_1074f2708;
    }
    lVar21 = *param_1;
    lVar9 = param_1[1];
    ppppplStack_570 = &pppplStack_650;
    lVar20 = lVar9 - lVar21;
    ppppplStack_228 = (long *****)0x0;
    ppppplStack_230 = (long *****)0x0;
    uVar6 = lVar20 == 1;
    pppplStack_700 = (long ****)0x0;
    pppppplVar22 = (long ******)(lVar20 / 0x1b0);
    if (lVar20 < 1) {
      pppppplVar22 = (long ******)0x0;
    }
    else {
      for (; uVar6 = pppppplVar22 == (long ******)0x1, 0 < (long)pppppplVar22;
          pppppplVar22 = (long ******)((ulong)pppppplVar22 >> 1)) {
        lVar10 = (long)pppppplVar22 * 0x1b0;
        __ZnwmRKSt9nothrow_t(lVar10,puVar3);
        if (lVar10 != 0) goto LAB_1074f278c;
      }
      lVar10 = 0;
LAB_1074f278c:
      ppppplStack_3e0 = (long *****)0x0;
      ppppplStack_3d8 = (long *****)pppppplVar22;
      FUN_1074fc8e4(&ppppplStack_230,lVar10);
      ppppplStack_228 = (long *****)pppppplVar22;
      FUN_1074fc8fc(&ppppplStack_3e0);
    }
    FUN_1074fc60c(lVar21,lVar9,&ppppplStack_570,(long ******)(lVar20 / 0x1b0),ppppplStack_230,
                  pppppplVar22);
    FUN_1074fc8fc(&ppppplStack_230);
  }
  func_0x00010726b264(&lStack_5f0);
  FUN_1073c5230(&pppplStack_590);
  FUN_1073c4728(&pppplStack_6f0);
  FUN_1074f8344(&pppplStack_650);
  FUN_1074f7554(&puStack_630);
  func_0x000107261dac(&pppplStack_610);
  FUN_1074f7554(&pppplStack_738);
  func_0x0001074fe49c(uStack_88);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_1074f2840:
  FUN_1074f75b8();
LAB_1074f2844:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1074f2848);
  (*pcVar4)();
LAB_1074f2658:
  while (lVar21 = lVar21 + 0x1b0, lVar21 != lVar9) {
    pppppplVar22 = &ppppplStack_230;
    FUN_1074f80e4(pppppplVar22,lVar21);
    if (((ulong)pppppplVar22 & 1) == 0) {
      func_0x00010729bf90(lVar20,lVar21);
      lVar20 = lVar20 + 0x1b0;
    }
  }
LAB_1074f268c:
  if (lVar20 != lStack_710) {
    lVar21 = lStack_710;
    FUN_1074f7fcc(lStack_710,lStack_710,lVar20);
    func_0x00010729cb64(&lStack_718,lVar21);
  }
  func_0x0001074ff1f8();
  func_0x000107267da8(&ppppplStack_3e0);
  FUN_1073c5a34(&ppppplStack_5d0,&lStack_718);
  func_0x00010729d51c(&lStack_718);
  func_0x00010726e4c8(&ppppplStack_5b8);
  func_0x000107267da8(&ppppplStack_570);
  pppppplVar25 = (long ******)ppppplStack_5d0;
  pppppplVar22 = (long ******)ppppplStack_5c8;
LAB_1074f26e4:
  for (; pppppplVar25 != pppppplVar22; pppppplVar25 = pppppplVar25 + 0x36) {
    FUN_1073c14b8(param_1,pppppplVar25);
  }
  func_0x00010729d51c(&ppppplStack_5d0);
LAB_1074f2708:
  FUN_1074f2b94(&pppplStack_700);
  pppppplVar15 = (long ******)ppppplStack_6f8;
  puVar3 = PTR___ZSt7nothrow_1103469d8;
  goto joined_r0x0001074f24f8;
}



/* Entry: 1074f2a7c; end: 1074f2aeb;  */

undefined1  [16] FUN_1074f2a7c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x0001074fef98();
  func_0x0001074fc0a8();
  return auStack_20;
}



/* Entry: 1074f2aec; end: 1074f2b17;  */

void FUN_1074f2aec(undefined8 param_1)

{
  func_0x0001074ff058();
  func_0x0001074fef8c(param_1,1);
  FUN_1074fc5d4();
  return;
}



/* Entry: 1074f2b18; end: 1074f2b3f;  */

void FUN_1074f2b18(long *param_1)

{
  FUN_1074f146c();
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001074f2b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xc0))();
    return;
  }
  return;
}



/* Entry: 1074f2b40; end: 1074f2b93;  */

void FUN_1074f2b40(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = param_3;
  func_0x0001074fe9f4();
  FUN_1074fbeac();
  if ((uVar2 & 1) != 0) {
    lVar1 = *(long *)(unaff_x20 + 8) + param_2 * 0x40;
    func_0x0001074ff650();
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_3 + 0x38);
  }
  func_0x0001074ff4dc();
  return;
}



/* Entry: 1074f2b94; end: 1074f2c07;  */

void FUN_1074f2b94(undefined8 param_1)

{
  func_0x0001074ff058();
  func_0x0001074fef8c(param_1,1);
  func_0x0001074fc0a8();
  return;
}



/* Entry: 1074f2c08; end: 1074f2c6f;  */

void FUN_1074f2c08(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *extraout_x8;
  
  func_0x0001074ff910();
  FUN_1074f146c();
  if (param_1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x98);
    func_0x0001074fea64(extraout_x8);
                    /* WARNING: Could not recover jumptable at 0x0001074f2c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  *extraout_x8 = 1;
  extraout_x8[2] = 7;
  return;
}



/* Entry: 1074f2c70; end: 1074f2d3b;  */

void FUN_1074f2c70(undefined8 param_1,long *param_2)

{
  FUN_1074f146c();
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001074f2c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 200))(param_1);
    return;
  }
  func_0x0001074ff174();
  return;
}



/* Entry: 1074f2d3c; end: 1074f2daf;  */

void FUN_1074f2d3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *extraout_x8;
  long unaff_x20;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x0001074ff2d4();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  uVar2 = *(undefined8 *)(param_1 + 0xf78);
  func_0x0001072dd514(extraout_x8);
  lVar1 = unaff_x20 + 0xf60;
  FUN_1074f1818();
  lStack_30 = lVar1;
  uStack_28 = uVar2;
  while (lStack_30 != 0) {
    func_0x0001072d17f4();
    FUN_1074f1838(&lStack_30);
  }
  return;
}



/* Entry: 1074f2db0; end: 1074f336f;  */

void FUN_1074f2db0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  ulong extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  long extraout_x11;
  long unaff_x19;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint6 uVar19;
  undefined8 uVar20;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  long lStack_2a0;
  long lStack_298;
  undefined1 uStack_290;
  long alStack_288 [3];
  long lStack_270;
  long lStack_268;
  ulong *puStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  undefined1 auStack_228 [64];
  undefined1 auStack_1e8 [56];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [112];
  undefined1 auStack_120 [104];
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [56];
  undefined1 auStack_48 [56];
  undefined8 uStack_10;
  
  func_0x0001074feda8();
  func_0x0001074fe570();
  uStack_10 = extraout_x8;
  FUN_1074f146c();
  if (param_1 == (long *)0x0) {
    lVar12 = unaff_x19 + 0x2628;
    lVar8 = param_2;
    FUN_1074f0f28();
    if (lVar12 == 0) {
      func_0x0001074ff8b4();
      func_0x0001074ff0e4(auStack_1e8);
      puVar5 = auStack_1b0;
      func_0x000107277f0c(puVar5,param_5);
      Hint_Prefetch(*(undefined8 *)(unaff_x19 + 0x2628),0,2,0);
      func_0x0001074febe8(*(undefined8 *)(unaff_x19 + 0x2628));
      lVar12 = 0;
      uVar9 = *(ulong *)(unaff_x19 + 0x2628);
      uVar18 = *(ulong *)(unaff_x19 + 0x2638);
      uVar4 = uVar9 >> 0xc ^ (ulong)puVar5 >> 7;
      bVar2 = (byte)puVar5;
      uVar19 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2)))))
               & 0x7f7f7f7f7f7f;
      lVar8 = 0;
      while( true ) {
        uVar4 = uVar4 & uVar18;
        uVar20 = *(undefined8 *)(uVar9 + uVar4);
        for (uVar15 = CONCAT17(-((byte)((ulong)uVar20 >> 0x38) == (bVar2 & 0x7f)),
                               CONCAT16(-((byte)((ulong)uVar20 >> 0x30) == (bVar2 & 0x7f)),
                                        CONCAT15(-((char)((ulong)uVar20 >> 0x28) ==
                                                  (char)(uVar19 >> 0x28)),
                                                 CONCAT14(-((char)((ulong)uVar20 >> 0x20) ==
                                                           (char)(uVar19 >> 0x20)),
                                                          CONCAT13(-((char)((ulong)uVar20 >> 0x18)
                                                                    == (char)(uVar19 >> 0x18)),
                                                                   CONCAT12(-((char)((ulong)uVar20
                                                                                    >> 0x10) ==
                                                                             (char)(uVar19 >> 0x10))
                                                                            ,CONCAT11(-((char)((
                                                  ulong)uVar20 >> 8) == (char)(uVar19 >> 8)),
                                                  -((char)uVar20 == (char)uVar19)))))))) &
                      0x8080808080808080; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
          uVar14 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar14 = uVar4 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar18;
          uVar6 = *(long *)(unaff_x19 + 0x2630) + uVar14 * lVar8;
          lVar8 = param_2;
          func_0x000104c32db4();
          if ((uVar6 & 1) != 0) goto LAB_1074f317c;
          lVar8 = 0;
        }
        func_0x0001074fe824();
        if ((extraout_x8_00 & 1) != 0) break;
        lVar12 = lVar12 + 8;
        uVar4 = lVar12 + uVar4;
        lVar8 = extraout_x11;
      }
      uVar14 = unaff_x19 + 0x2628;
      FUN_1074fd150(uVar14,puVar5);
      lVar12 = *(long *)(unaff_x19 + 0x2630) + uVar14 * 0x50;
      func_0x000104c2fe00();
      *(undefined8 *)(lVar12 + 0x38) = 0;
      *(undefined8 *)(lVar12 + 0x40) = 0;
      *(undefined8 *)(lVar12 + 0x48) = 0;
      lVar8 = param_2;
LAB_1074f317c:
      lVar10 = *(long *)(unaff_x19 + 0x2630) + uVar14 * 0x50;
      puVar11 = (ulong *)(lVar10 + 0x38);
      uVar4 = *puVar11;
      lVar12 = *(long *)(lVar10 + 0x48);
      if (lVar12 - uVar4 < 0x90) {
        if (uVar4 != 0) {
          FUN_1074f4ea4(puVar11);
          func_0x0001074ff38c();
          func_0x0001074ff174(0);
          lVar12 = extraout_x8_01;
        }
        uVar4 = (lVar12 / 0x90) * 2;
        if (uVar4 < 2) {
          uVar4 = 1;
        }
        if (0xe38e38e38e38e2 < (ulong)(lVar12 / 0x90)) {
          uVar4 = 0x1c71c71c71c71c7;
        }
        in_ZR = uVar4 == 0x1c71c71c71c71c7;
        if (0x1c71c71c71c71c7 < uVar4) goto LAB_1074f3288;
        func_0x0001074f8490();
        *puVar11 = uVar4;
        *(ulong *)(lVar10 + 0x40) = uVar4;
        *(ulong *)(lVar10 + 0x48) = uVar4 + lVar8 * 0x90;
      }
      else {
        uVar4 = *(long *)(lVar10 + 0x40) - uVar4;
        in_ZR = uVar4 == 0x8f;
        if (0x8f < uVar4) {
          puVar5 = auStack_228;
          FUN_1074f8608(puVar5,auStack_198);
          FUN_1074f4eac(puVar11,puVar5);
          goto LAB_1074f3264;
        }
        FUN_1074f8608(auStack_228,auStack_228 + uVar4);
      }
      func_0x0001074feb04();
      FUN_1074f8544();
    }
    else {
      func_0x0001074ff8b4();
      func_0x0001074ff0e4(auStack_1e8);
      func_0x000107277f0c(auStack_1b0,param_5);
      uVar9 = *(ulong *)(lVar8 + 0x48);
      uVar4 = *(ulong *)(lVar8 + 0x40);
      in_ZR = uVar4 == uVar9;
      if (uVar4 < uVar9) {
        func_0x0001074f83ec(uVar4,auStack_228);
        lVar10 = uVar4 + 0x90;
      }
      else {
        plVar13 = (long *)(lVar8 + 0x38);
        lVar12 = (long)(uVar4 - *plVar13) / 0x90 + 1;
        func_0x0001074f842c();
        lVar10 = *(long *)(lVar8 + 0x38);
        lVar7 = *(long *)(lVar8 + 0x40);
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)0x0;
          lVar12 = 0;
        }
        else {
          func_0x0001074f8490();
        }
        lVar10 = (long)plVar13 + (lVar7 - lVar10);
        func_0x0001074f83ec(lVar10,auStack_228);
        lVar16 = *(long *)(lVar8 + 0x38);
        lVar1 = *(long *)(lVar8 + 0x40);
        lVar17 = lVar10 + ((lVar1 - lVar16) / -0x90) * 0x90;
        plStack_250 = &lStack_2a0;
        plStack_248 = alStack_288;
        alStack_288[0] = lVar17;
        lStack_2a0 = lVar17;
        puStack_258 = (ulong *)(lVar8 + 0x48);
        for (lVar7 = lVar16; lVar7 != lVar1; lVar7 = lVar7 + 0x90) {
          func_0x0001074f83ec(alStack_288[0],lVar7);
          alStack_288[0] = alStack_288[0] + 0x90;
        }
        uStack_240 = 1;
        for (; in_ZR = lVar16 == lVar1, !(bool)in_ZR; lVar16 = lVar16 + 0x90) {
          func_0x0001074f8514(lVar16);
        }
        lVar10 = lVar10 + 0x90;
        func_0x0001074f84d4(&puStack_258);
        lVar7 = *(long *)(lVar8 + 0x38);
        *(long *)(lVar8 + 0x38) = lVar17;
        *(long *)(lVar8 + 0x40) = lVar10;
        *(long **)(lVar8 + 0x48) = plVar13 + lVar12 * 0x12;
        if (lVar7 != 0) {
          __ZdlPv();
        }
      }
      *(long *)(lVar8 + 0x40) = lVar10;
    }
LAB_1074f3264:
    func_0x0001074f8514(auStack_228);
  }
  else {
    (**(code **)(*param_1 + 0xa0))(&puStack_258);
    if (*(long *)(CONCAT71(uStack_23f,uStack_240) + 0x18) != 0) {
      func_0x0001072e7640(auStack_228,param_3,0x1138369c0);
      FUN_1074f3370(&lStack_270,param_4,param_2,auStack_228);
      func_0x0001074ff40c();
      plVar13 = *(long **)(unaff_x19 + 0xee8);
      func_0x00010002b838(alStack_288,&UNK_10de7598e);
      lStack_298 = lStack_268;
      lStack_2a0 = lStack_270;
      if (lStack_268 != 0) {
        do {
          func_0x0001074fe68c();
        } while (extraout_w10 != 0);
      }
      uStack_290 = 1;
      func_0x000107277f30(auStack_2c0,&uStack_240);
      FUN_1074fd134(auStack_190,auStack_2c0);
      func_0x000107277f30(auStack_2d0,&puStack_258);
      FUN_1074fd134(auStack_120,auStack_2d0);
      func_0x0001074ff0e4(auStack_b8);
      func_0x000104c2fe00(auStack_80,param_2);
      func_0x000104c2f64c(auStack_228);
      func_0x0001072d78b4(auStack_48,param_3,auStack_228);
      func_0x000107746988(auStack_2b0,auStack_198);
      (**(code **)(*plVar13 + 0x28))(auStack_2d8,plVar13,alStack_288,&lStack_2a0,auStack_2b0);
      func_0x0001074ff2f0();
      FUN_1074f83a8(auStack_198);
      func_0x0001074ff40c();
      func_0x0001074ff328();
      func_0x0001074ff310();
      func_0x0001074ff200();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_288);
      func_0x0001074fe8d0();
      func_0x0001074ff870();
      func_0x0001072792b8(&lStack_270);
    }
    FUN_10745f870(&puStack_258);
  }
  func_0x0001074fe49c(uStack_10);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1074f3288:
  func_0x0001074f8484();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1074f3290);
  (*pcVar3)();
}



/* Entry: 1074f3370; end: 1074f3443;  */

void FUN_1074f3370(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long alStack_e0 [2];
  undefined8 *puStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_90;
  undefined1 auStack_88 [64];
  undefined8 uStack_48;
  
  plVar1 = alStack_e0;
  func_0x0001074ff910();
  func_0x0001074fe570();
  uStack_48 = extraout_x8;
  func_0x0001074ff220();
  func_0x000107296b84();
  puStack_d0[2] = 0;
  *puStack_d0 = &PTR_DAT_110998a58;
  puStack_d0[1] = 0;
  func_0x000107269228(auStack_88,param_2);
  uStack_c8 = 0;
  uStack_90 = 0;
  FUN_1074fbd30(puStack_d0 + 3,auStack_88);
  func_0x0001074fef84();
  func_0x0001074ff278();
  func_0x0001074fe658();
  func_0x000107297fb8();
  func_0x0001074fe49c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074fef84();
  func_0x0001074ff278();
  __ZNSt3__119__shared_weak_countD2Ev(puStack_d0);
  func_0x000107297fb8();
  func_0x0001074fe8f4();
  FUN_1074f146c();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001074f348c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa8))();
    return;
  }
  return;
}



/* Entry: 1074f3444; end: 1074f3497;  */

void FUN_1074f3444(long *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1074f146c(param_1,param_3);
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001074f348c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa8))();
    return;
  }
  return;
}



/* Entry: 1074f3498; end: 1074f34cf;  */

void FUN_1074f3498(long *param_1)

{
  FUN_1074f146c();
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001074f34c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))();
    return;
  }
  return;
}



/* Entry: 1074f34d0; end: 1074f37d3;  */

void FUN_1074f34d0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  int extraout_w10;
  long *plVar3;
  undefined1 auStack_338 [8];
  undefined1 auStack_330 [16];
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  undefined8 uStack_300;
  long lStack_2f8;
  undefined1 uStack_2f0;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined1 auStack_2d0 [24];
  long alStack_2b8 [3];
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_278;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [112];
  undefined1 auStack_1f8 [104];
  undefined1 auStack_190 [56];
  undefined1 auStack_158 [56];
  undefined1 auStack_120 [56];
  undefined1 auStack_e8 [56];
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_78;
  
  plVar3 = param_1;
  func_0x0001074fe5e8();
  uStack_78 = extraout_x8;
  FUN_1074f146c();
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0xb8))(&lStack_290);
    if (lStack_278 != 0) {
      lStack_a8 = lStack_288;
      lStack_b0 = lStack_290;
      func_0x0001074fd26c(&lStack_b0);
      lVar1 = lStack_a8;
      lVar2 = lStack_b0;
      while (lStack_2a0 = lVar2, lStack_298 = lVar1, lVar2 != 0) {
        func_0x000107277f0c(auStack_2d0,lVar1 + 0x38);
        func_0x000107277f0c(alStack_2b8,lVar1 + 0x50);
        if (*(long *)(alStack_2b8[0] + 0x18) != 0) {
          func_0x000104c2f64c(auStack_e8);
          func_0x0001072d78b4(&lStack_b0,param_3,auStack_e8);
          FUN_1074f3370(&uStack_2e0,lVar1,param_2,&lStack_b0);
          func_0x0001074ff384();
          func_0x000104c2f714(auStack_e8);
          plVar3 = (long *)param_1[0x1dd];
          func_0x00010002b838(auStack_e8,&UNK_10de7598e);
          lStack_2f8 = lStack_2d8;
          uStack_300 = uStack_2e0;
          if (lStack_2d8 != 0) {
            do {
              func_0x0001074fe68c();
            } while (extraout_w10 != 0);
          }
          uStack_2f0 = 1;
          func_0x000107277f30(auStack_320,alStack_2b8);
          FUN_1074fd134(auStack_268,auStack_320);
          func_0x000107277f30(auStack_330,auStack_2d0);
          FUN_1074fd134(auStack_1f8,auStack_330);
          func_0x0001074ff0e4(auStack_190);
          func_0x0001074ff0ec(auStack_158);
          func_0x000104c2f64c(&lStack_b0);
          func_0x0001072d78b4(auStack_120,param_3,&lStack_b0);
          func_0x000107746988(auStack_310,auStack_270);
          (**(code **)(*plVar3 + 0x28))(auStack_338,plVar3,auStack_e8,&uStack_300,auStack_310);
          func_0x0001074ff2f0();
          FUN_1074f83a8(auStack_270);
          func_0x0001074ff384();
          func_0x0001074ff328();
          func_0x0001074ff310();
          func_0x0001074ff200();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
          func_0x0001072792b8(&uStack_2e0);
        }
        FUN_10745f870(auStack_2d0);
        lStack_2a0 = lVar2 + 1;
        lStack_298 = lVar1 + 0x68;
        func_0x0001074fd26c(&lStack_2a0);
        lVar1 = lStack_298;
        lVar2 = lStack_2a0;
      }
      func_0x0001074feb40(param_1[6]);
      func_0x0001074ff870();
    }
    FUN_1074f8690(&lStack_290);
  }
  func_0x0001074fe49c(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  do {
    FUN_1074f8690(&lStack_290);
    func_0x0001074fe8f4();
  } while( true );
}



/* Entry: 1074f37d4; end: 1074f38e7;  */

void FUN_1074f37d4(long param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long unaff_x19;
  undefined8 unaff_x20;
  long lStack_2e8;
  undefined8 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined **ppuStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined ***pppuStack_2a0;
  undefined4 uStack_250;
  undefined8 uStack_248;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined1 auStack_198 [32];
  undefined1 uStack_178;
  undefined1 uStack_168;
  undefined1 auStack_148 [24];
  long alStack_130 [31];
  undefined8 uStack_38;
  
  func_0x0001074fe570();
  puVar6 = *(undefined1 **)(param_1 + 0xef0);
  uStack_38 = extraout_x8_02;
  FUN_10745f348(auStack_148);
  if (*(long *)(alStack_130[0] + 0x18) != 0) {
    unaff_x20 = *(undefined8 *)(unaff_x19 + 0xee8);
    func_0x0001074ff338();
    uStack_178 = 0;
    uStack_168 = 0;
    puVar6 = auStack_198;
    param_2 = alStack_130;
    func_0x000107277f30();
    func_0x0001074ff7ac();
    func_0x0001074ff810();
    func_0x0001074ff854();
    func_0x0001074ff690();
    func_0x0001074feff4();
    func_0x0001074ff240();
    func_0x0001074ff318();
    func_0x0001074fefe4();
    func_0x0001074ff37c();
    func_0x0001074ff2e8();
    func_0x0001074ff2e0();
    func_0x0001074fe8d0();
    func_0x0001074fef78();
  }
  func_0x0001074ff308();
  func_0x0001074fe49c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = puVar6;
  func_0x0001074ff308();
  func_0x0001074fe8f4();
  lVar8 = *(long *)(puVar7 + 0xef0);
  pcStack_1b8 = FUN_1074f38e8;
  uStack_1d0 = unaff_x20;
  puStack_1c8 = puVar6;
  puStack_1c0 = &stack0xfffffffffffffff0;
  func_0x000107460818();
  func_0x000107460754();
  lVar8 = lVar8 + 0xe0;
  uStack_1d8 = extraout_x8;
  func_0x0001074607b0();
  func_0x00010724e404();
  ppuStack_1f8 = &PTR_FUN_1109b2600;
  pppuStack_1e0 = &ppuStack_1f8;
  uStack_1f0 = unaff_x20;
  puStack_1e8 = puVar6;
  func_0x000107460894();
  func_0x000107460854();
  func_0x00010746086c();
  func_0x00010746072c(uStack_1d8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar8;
  func_0x000107460854();
  func_0x00010746086c();
  func_0x00010746079c();
  pcStack_218 = FUN_10745f548;
  ppuStack_220 = &puStack_1c0;
  func_0x000107460740();
  uStack_248 = extraout_x8_00;
  FUN_10745f83c(lVar8);
  uVar3 = lVar2 + 0xe0;
  func_0x0001074607b0();
  func_0x000107279a5c();
  uVar1 = (char)param_2[7] == '\x01';
  if ((bool)uVar1) {
    func_0x0001074607f8();
    plVar5 = (long *)(lVar2 + 0x188);
    func_0x000107869920();
    if ((uVar3 & 1) != 0) {
      func_0x0001074607f8();
      lVar4 = lVar8;
      func_0x000107869874(lVar8,plVar5,lVar2 + 0x188);
      func_0x0001074607f8();
      uStack_250 = 0;
      func_0x000107869848(lVar8 + 0x18,lVar4,&ppuStack_2b8);
      plVar5 = &lStack_2b0;
      func_0x00010726af18(plVar5);
      func_0x0001074607f8();
      lVar4 = lVar2 + 0x188;
      func_0x0001077551c8(lVar4,plVar5);
      func_0x0001074607f8();
      plVar5 = (long *)(lVar2 + 0x1a0);
      FUN_10745f68c(&ppuStack_2b8,plVar5,lVar4);
    }
  }
  else {
    ppuStack_2b8 = &PTR_DAT_1109b2680;
    pppuStack_2a0 = &ppuStack_2b8;
    lStack_2b0 = lVar2;
    lStack_2a8 = lVar8;
    func_0x000107460894();
    func_0x000107460854();
    plVar5 = (long *)(lVar2 + 0x188);
    func_0x000107869990();
  }
  func_0x000107460874();
  func_0x00010746072c(uStack_248);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107460874();
  FUN_10745f870(lVar8);
  func_0x000107460794();
  pcStack_2d8 = FUN_10745f68c;
  lStack_2e8 = lVar8;
  ppuStack_2e0 = &ppuStack_220;
  func_0x000107460818();
  func_0x00010745f964();
  lStack_2e8 = *plVar5;
  func_0x00010726290c(extraout_x8_01,&lStack_2e8,lVar8);
  return;
}



/* Entry: 1074f38e8; end: 1074f38ef;  */

void FUN_1074f38e8(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined **ppuStack_108;
  long lStack_100;
  long lStack_f8;
  undefined ***pppuStack_f0;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_48;
  
  lVar6 = *(long *)(param_1 + 0xef0);
  func_0x000107460818();
  func_0x000107460754();
  lVar6 = lVar6 + 0xe0;
  func_0x0001074607b0();
  func_0x00010724e404();
  ppuStack_48 = &PTR_FUN_1109b2600;
  func_0x000107460894();
  func_0x000107460854();
  func_0x00010746086c();
  func_0x00010746072c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar6;
  func_0x000107460854();
  func_0x00010746086c();
  func_0x00010746079c();
  pcStack_68 = FUN_10745f548;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000107460740();
  uStack_98 = extraout_x8_00;
  FUN_10745f83c(lVar6);
  uVar3 = lVar2 + 0xe0;
  func_0x0001074607b0();
  func_0x000107279a5c();
  uVar1 = *(char *)(param_2 + 0x38) == '\x01';
  if ((bool)uVar1) {
    func_0x0001074607f8();
    plVar5 = (long *)(lVar2 + 0x188);
    func_0x000107869920();
    if ((uVar3 & 1) != 0) {
      func_0x0001074607f8();
      lVar4 = lVar6;
      func_0x000107869874(lVar6,plVar5,lVar2 + 0x188);
      func_0x0001074607f8();
      uStack_a0 = 0;
      func_0x000107869848(lVar6 + 0x18,lVar4,&ppuStack_108);
      plVar5 = &lStack_100;
      func_0x00010726af18(plVar5);
      func_0x0001074607f8();
      lVar4 = lVar2 + 0x188;
      func_0x0001077551c8(lVar4,plVar5);
      func_0x0001074607f8();
      plVar5 = (long *)(lVar2 + 0x1a0);
      FUN_10745f68c(&ppuStack_108,plVar5,lVar4);
    }
  }
  else {
    ppuStack_108 = &PTR_DAT_1109b2680;
    pppuStack_f0 = &ppuStack_108;
    lStack_100 = lVar2;
    lStack_f8 = lVar6;
    func_0x000107460894();
    func_0x000107460854();
    plVar5 = (long *)(lVar2 + 0x188);
    func_0x000107869990();
  }
  func_0x000107460874();
  func_0x00010746072c(uStack_98);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107460874();
  FUN_10745f870(lVar6);
  func_0x000107460794();
  pcStack_128 = FUN_10745f68c;
  lStack_138 = lVar6;
  ppuStack_130 = &puStack_70;
  func_0x000107460818();
  func_0x00010745f964();
  lStack_138 = *plVar5;
  func_0x00010726290c(extraout_x8_01,&lStack_138,lVar6);
  return;
}



/* Entry: 1074f38f0; end: 1074f39f7;  */

void FUN_1074f38f0(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_198 [32];
  undefined1 uStack_178;
  undefined1 uStack_168;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [248];
  undefined8 uStack_38;
  
  func_0x0001074fe570();
  uStack_38 = extraout_x8;
  FUN_10745f548(auStack_148,*(undefined8 *)(param_1 + 0xef0));
  func_0x0001074ff338();
  uStack_178 = 0;
  uStack_168 = 0;
  func_0x000107277f30(auStack_198,auStack_130);
  func_0x0001074ff7ac();
  func_0x0001074ff810();
  func_0x0001074ff854();
  func_0x0001074ff690();
  func_0x0001074feff4();
  func_0x0001074ff240();
  func_0x0001074ff318();
  func_0x0001074fefe4();
  func_0x0001074ff37c();
  func_0x0001074ff2e8();
  func_0x0001074ff2e0();
  func_0x0001074fe8d0();
  func_0x0001074fef78();
  func_0x0001074ff308();
  func_0x0001074fe49c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074ff308();
  do {
    func_0x0001074fe8f4();
  } while( true );
}



/* Entry: 1074f39f8; end: 1074f3a73;  */

void FUN_1074f39f8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_68 [40];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = *(long *)(param_1 + 4000);
  if (lVar1 != 0) {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    uStack_30 = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    func_0x0001072cdd90(auStack_68,param_3);
    FUN_107519a34(lVar1,&uStack_40,auStack_68);
    func_0x0001072cdc88(auStack_68);
    func_0x0001072bc168(&uStack_40);
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x0001074feb40();
      func_0x0001074fef78();
    }
  }
  return;
}



/* Entry: 1074f3a74; end: 1074f3b07;  */

void FUN_1074f3a74(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x0001074fe5e8();
  uStack_28 = extraout_x8;
  func_0x0001074ffa08();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001074fe68c();
    } while (extraout_w10 != 0);
  }
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_DAT_1109b7190;
  FUN_10747b0e0();
  func_0x00010724b884();
  func_0x0001074ff22c();
  func_0x0001074fe49c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010724b884(appuStack_48);
    func_0x0001074ff22c();
    func_0x0001074fe8f4();
    func_0x0001074ffa08();
    if (extraout_x8_01 != 0) {
      do {
        func_0x0001074fe68c();
      } while (extraout_w10_00 != 0);
    }
    FUN_10747b570();
    func_0x0001074ff22c();
    return;
  }
  return;
}



/* Entry: 1074f3b08; end: 1074f3b4b;  */

void FUN_1074f3b08(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x0001074ffa08();
  if (extraout_x8 != 0) {
    do {
      func_0x0001074fe68c();
    } while (extraout_w10 != 0);
  }
  FUN_10747b570(param_1,auStack_30);
  func_0x0001074ff22c();
  return;
}



/* Entry: 1074f3b4c; end: 1074f3b53;  */

void FUN_1074f3b4c(void)

{
  func_0x00010747b8f8();
  return;
}



/* Entry: 1074f3b54; end: 1074f3c73;  */

void FUN_1074f3b54(undefined4 param_1,long param_2,long *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lStack_d8;
  long lStack_d0;
  long lStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  undefined4 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x0001074ff2d4();
  func_0x0001074fe5e8();
  uStack_48 = extraout_x8;
  func_0x0001074ff174();
  lVar1 = *(long *)(param_2 + 0xec8) + 0x70;
  FUN_10746bbb8();
  plVar5 = param_3;
  while (lStack_a8 = lVar1, plStack_a0 = param_3, lVar1 != 0) {
    puVar2 = *(uint **)(unaff_x20 + 0xec8);
    FUN_10747b8dc();
    if (puVar2 == (uint *)0x0) {
      func_0x0001074ff0ec(auStack_98);
      uStack_60 = 0;
      uStack_58 = 0x3f800000;
      lStack_50 = 0;
      func_0x0001074ff73c();
    }
    else {
      puVar3 = puVar2;
      func_0x00010778196c();
      func_0x0001074ff0ec(auStack_98);
      uStack_60 = *(undefined8 *)puVar3;
      func_0x000107781994(puVar2);
      lStack_50 = (ulong)*puVar3 * (ulong)puVar3[1] * 4;
      uStack_58 = param_1;
      func_0x0001074ff73c();
    }
    func_0x000104c2f714(auStack_98);
    func_0x000107262260(&lStack_a8);
    lVar1 = lStack_a8;
    plVar5 = param_3;
    param_3 = plStack_a0;
  }
  func_0x0001074fe49c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001074f8a98();
    func_0x0001074fea88();
    plVar4 = *(long **)(unaff_x19 + 0xee8);
    lStack_d8 = *plVar5;
    *plVar5 = 0;
    lStack_d0 = lVar1;
    (**(code **)(*plVar4 + 0x40))(plVar4,&lStack_d8);
    lVar1 = lStack_d8;
    lStack_d8 = 0;
    if (lVar1 != 0) {
      func_0x0001074fe5f8();
    }
    return;
  }
  return;
}



/* Entry: 1074f3c74; end: 1074f3cd3;  */

void FUN_1074f3c74(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_28;
  
  plVar2 = *(long **)(param_1 + 0xee8);
  lStack_28 = *param_2;
  *param_2 = 0;
  (**(code **)(*plVar2 + 0x40))(plVar2,&lStack_28);
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    func_0x0001074fe5f8();
  }
  return;
}



/* Entry: 1074f3cd4; end: 1074f3de7;  */

void FUN_1074f3cd4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  code *extraout_x8_00;
  undefined8 uVar3;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 auStack_b0 [2];
  undefined4 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_78;
  undefined1 uStack_54;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001074fe860(0xab);
  func_0x0001074fea20();
  uStack_78 = 0;
  func_0x0001074fef28();
  uStack_54 = 1;
  func_0x0001074fece4();
  func_0x00010750283c(param_2);
  plVar1 = &lStack_a0;
  func_0x00010729d56c(plVar1,&UNK_10f415dad,param_2);
  auStack_b0[0] = 1;
  uStack_a8 = 0;
  uStack_c0 = **(undefined8 **)(param_1 + 0x18);
  uStack_b8 = 3;
  FUN_10743fa9c(uVar3,plVar1,auStack_b0,&uStack_c0,7);
  func_0x0001074feaf0();
  lVar2 = param_1 + 0x25e8;
  FUN_1074f3de8();
  func_0x0001074ff87c();
  lStack_a0 = lVar2;
  plStack_98 = plVar1;
  while (lStack_a0 != 0) {
    func_0x0001074ff0ac(plStack_98);
    (**(code **)(extraout_x8 + 0xe0))();
    func_0x0001074ff7a4();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  FUN_10747bfc0(&lStack_a0,*(undefined8 *)(param_1 + 0xec8));
  FUN_1074f1578(uVar3,&lStack_a0);
  func_0x0001074fe8d0();
  (*extraout_x8_00)();
  return;
}



/* Entry: 1074f3de8; end: 1074f3e7f;  */

void FUN_1074f3de8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long alStack_48 [3];
  long lStack_30;
  
  uVar2 = param_1[1] - *param_1;
  if (uVar2 < (ulong)(param_1[2] - *param_1)) {
    lVar1 = (long)uVar2 >> 4;
    FUN_1074f5cd0(alStack_48,lVar1,lVar1);
    if ((ulong)(lStack_30 - alStack_48[0]) < (ulong)(param_1[2] - *param_1)) {
      func_0x0001074fec24();
      FUN_1074f5c98();
    }
    func_0x0001074fefdc();
  }
  return;
}



/* Entry: 1074f3e80; end: 1074f3ec3;  */

void FUN_1074f3e80(long param_1,undefined8 param_2)

{
  long extraout_x8;
  long lStack_20;
  undefined8 uStack_18;
  
  param_1 = param_1 + 0xf60;
  FUN_1074f1818();
  lStack_20 = param_1;
  uStack_18 = param_2;
  while (lStack_20 != 0) {
    func_0x0001074ff0ac(uStack_18);
    (**(code **)(extraout_x8 + 0xe8))();
    FUN_1074f1838(&lStack_20);
  }
  return;
}



/* Entry: 1074f3ec4; end: 1074f3f23;  */

void FUN_1074f3ec4(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x26;
  
  func_0x0001074fe4dc();
  func_0x0001074fe930();
  func_0x0001074feda8();
  func_0x0001074fe544();
  do {
    func_0x0001074feba8();
    while (unaff_x26 != 0) {
      func_0x0001074fecf0();
      if ((int)param_1 != 0) {
        func_0x0001074ff494();
        return;
      }
      func_0x0001074ff988();
    }
    func_0x0001074fe824();
  } while ((extraout_x8 & 1) == 0);
  return;
}



/* Entry: 1074f3f24; end: 1074f404b;  */

void FUN_1074f3f24(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 auStack_38 [3];
  
  FUN_1074f404c();
  func_0x0001074ff9a0(*(undefined8 *)(param_1 + 0xf48));
  if (!(bool)in_ZR) {
    func_0x0001074eb11c(auStack_38);
    func_0x0001074f4098(param_1 + 0xf48,auStack_38);
    func_0x0001074f4dd8(auStack_38);
  }
  func_0x0001074ff9a0(*(undefined8 *)(param_1 + 0xf28));
  if (!(bool)in_ZR) {
    func_0x0001074eb0cc(auStack_38);
    func_0x0001074f40c4(param_1 + 0xf28,auStack_38);
    func_0x0001074f4d90(auStack_38);
  }
  func_0x0001074f40f0(param_1 + 0xf80);
  func_0x0001077fa3d8(param_1 + 0x24f8);
  if (*(long *)(*(long *)(param_1 + 0xed8) + 0x10) != 0) {
    func_0x0001074eb070(auStack_38);
    uVar1 = auStack_38[0];
    auStack_38[0] = 0;
    FUN_1074f92bc(param_1 + 0xed8,uVar1);
    func_0x0001074f929c(auStack_38);
  }
  if (*(long *)(*(long *)(param_1 + 0xee0) + 0xa0) != 0) {
    func_0x0001074eb0a4(auStack_38);
    uVar1 = auStack_38[0];
    auStack_38[0] = 0;
    FUN_1074f9310(param_1 + 0xee0,uVar1);
    FUN_1074f92f0(auStack_38);
  }
  FUN_107430144(*(undefined8 *)(param_1 + 0xed0));
  FUN_10747c4b0(*(undefined8 *)(param_1 + 0xec8));
  uVar1 = *(undefined8 *)(param_1 + 0xec0);
  func_0x00010786e938(auStack_38,*(undefined8 *)(param_1 + 0xf48));
  func_0x00010780f410(uVar1,auStack_38);
  FUN_1074fa6a0(auStack_38);
  if (*(long *)(param_1 + 0xf58) != 0) {
    FUN_10746e8e0();
  }
  return;
}



/* Entry: 1074f404c; end: 1074f41a3;  */

void FUN_1074f404c(long param_1)

{
  undefined1 in_ZR;
  undefined1 auStack_30 [16];
  
  func_0x0001074ff9a0(*(undefined8 *)(param_1 + 0xf38));
  if (!(bool)in_ZR) {
    func_0x0001074eb0f4(auStack_30);
    func_0x0001074f4134(param_1 + 0xf38,auStack_30);
    func_0x0001074f4db4(auStack_30);
  }
  func_0x0001074f4160(param_1 + 0xf60);
  return;
}



/* Entry: 1074f41a4; end: 1074f41ab;  */

void FUN_1074f41a4(long param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  long ***ppplVar3;
  long ***ppplVar4;
  long ***ppplVar5;
  undefined4 uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  long *******ppppppplVar21;
  long lVar22;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long *****ppppplVar23;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long *******extraout_x8_09;
  long *******ppppppplVar24;
  long ******pppppplVar25;
  long ******extraout_x8_10;
  long *******extraout_x9;
  long *******extraout_x9_00;
  long ******pppppplVar26;
  long ******extraout_x9_01;
  int extraout_w10;
  int extraout_w11;
  long ******pppppplVar27;
  ulong extraout_x12;
  long ******pppppplVar28;
  long ******pppppplVar29;
  long ******pppppplVar30;
  long lVar31;
  bool bVar32;
  long *******ppppppplVar33;
  long *plVar34;
  long *******ppppppplVar35;
  ulong uVar36;
  long *plVar37;
  long *******ppppppplVar38;
  long *******unaff_x23;
  long ******pppppplVar39;
  long lVar40;
  long *******ppppppplVar41;
  long ***ppplVar42;
  long ******pppppplVar43;
  long *****ppppplVar44;
  long lVar45;
  long ****pppplVar46;
  long *******ppppppplVar47;
  long lStack_210;
  long ******pppppplStack_1f0;
  long ******pppppplStack_1e8;
  long ******pppppplStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char cStack_130;
  long ******pppppplStack_120;
  long lStack_118;
  long ******pppppplStack_110;
  undefined4 uStack_108;
  undefined1 uStack_104;
  long *****ppppplStack_100;
  long *****ppppplStack_f8;
  uint uStack_e8;
  uint uStack_e4;
  long ******pppppplStack_e0;
  long ******pppppplStack_d8;
  long ******pppppplStack_d0;
  long ******pppppplStack_c8;
  long ****pppplStack_c0;
  long ****pppplStack_b8;
  undefined1 uStack_b0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  long **pplStack_28;
  undefined8 uStack_18;
  
  lVar22 = *(long *)(param_1 + 0xed0);
  func_0x00010743c598();
  lVar17 = lVar22;
  func_0x00010743b2e8();
  uStack_18 = extraout_x8;
  if (*(long *)(lVar17 + 0x1e0) == 0) {
    pppppplStack_120 = (long ******)CONCAT44(pppppplStack_120._4_4_,0xffffffff);
    func_0x00010743b6f4();
    uStack_1c0 = CONCAT35(uStack_1c0._5_3_,0x1010303);
    func_0x00010743b5d4();
    func_0x00010743bbd4();
    uVar36 = uStack_198;
    uStack_198 = 0;
    lVar22 = lVar17 + 0x1e0;
    FUN_1074301b4(lVar22,uVar36);
    func_0x00010743c258();
    func_0x00010743be6c();
    if (lVar22 != 0) {
      func_0x00010743b2a4();
    }
    func_0x00010743be9c();
    lVar22 = lVar17;
  }
  if (*(long *)(lVar22 + 0x1e8) == 0) {
    pppppplStack_120 = (long ******)CONCAT44(pppppplStack_120._4_4_,0xff000000);
    func_0x00010743b6f4();
    uStack_1c0 = CONCAT35(uStack_1c0._5_3_,0x1010303);
    func_0x00010743b5d4();
    func_0x00010743bbd4();
    uVar36 = uStack_198;
    uStack_198 = 0;
    lVar22 = lVar17 + 0x1e8;
    FUN_1074301b4(lVar22,uVar36);
    func_0x00010743c258();
    func_0x00010743be6c();
    if (lVar22 != 0) {
      func_0x00010743b2a4();
    }
    func_0x00010743be9c();
    lVar22 = lVar17;
  }
  if (*(long *)(lVar22 + 0x1f0) == 0) {
    pppppplStack_120 = (long ******)CONCAT44(pppppplStack_120._4_4_,0xffff0000);
    func_0x00010743b6f4();
    uStack_1c0 = CONCAT35(uStack_1c0._5_3_,0x1010303);
    func_0x00010743b5d4();
    func_0x00010743bbd4();
    uVar36 = uStack_198;
    uStack_198 = 0;
    lVar22 = lVar17 + 0x1f0;
    FUN_1074301b4(lVar22,uVar36);
    func_0x00010743c258();
    func_0x00010743be6c();
    if (lVar22 != 0) {
      func_0x00010743b2a4();
    }
    func_0x00010743be9c();
    lVar22 = lVar17;
  }
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3f800000;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  uStack_1c8 = 0;
  pppppplStack_1f0 = (long ******)0x0;
  pppppplStack_1e8 = (long ******)0x0;
  pppppplStack_1e0 = (long ******)0x0;
  lVar45 = *(long *)(lVar22 + 0x18);
  cVar8 = *(char *)(lVar22 + 0x238);
  pppppplStack_e0 = (long ******)((ulong)pppppplStack_e0 & 0xffffffffffffff00);
  pppppplVar43 = (long ******)(lVar45 + 0xab0);
  func_0x00010724e2c8(pppppplVar43,&pppppplStack_e0);
  iVar15 = (int)pppppplVar43;
  ppppppplVar33 = (long *******)0x0;
  ppppppplVar38 = *(long ********)(lVar22 + 200);
  while (ppppppplVar38 != (long *******)0x0) {
    if (*(int *)(ppppppplVar38 + 0xb) == 1) {
      ppppppplVar47 = ppppppplVar38 + 9;
      FUN_1074306c0(&ppppplStack_100);
      if ((long ******)ppppplStack_100 == (long ******)0x0) {
        func_0x00010724ef84(&pppppplStack_e0,ppppppplVar38 + 2);
        func_0x0001000fecf4(&lStack_1d8,&pppppplStack_e0);
        ppppppplVar38 = &pppppplStack_e0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x00010743c304();
      }
      else {
        if ((*ppppplStack_100 == ppppplStack_100[1]) && (ppppplStack_100[3] == ppppplStack_100[4]))
        {
          bVar32 = false;
        }
        else {
          lStack_118 = 0;
          pppppplStack_110 = (long ******)0x0;
          pppppplStack_120 = (long ******)0x0;
          lVar22 = (long)ppppplStack_100[1] - (long)*ppppplStack_100;
          if (lVar22 != 0) {
            ppppppplVar47 = &pppppplStack_120;
            FUN_107427ef4(ppppppplVar47,lVar22 / 0x88);
            FUN_107427f9c(&pppppplStack_e0,ppppppplVar47,
                          (lStack_118 - (long)pppppplStack_120) / 0x88,&pppppplStack_110);
            ppppppplVar47 = (long *******)((long)pppppplStack_d0 + lVar22);
            unaff_x23 = (long *******)pppppplStack_d0;
            for (; lVar22 != 0; lVar22 = lVar22 + -0x88) {
              FUN_107434458(unaff_x23);
              unaff_x23 = unaff_x23 + 0x11;
            }
            pppppplStack_d0 = (long ******)ppppppplVar47;
            FUN_107427f3c(&pppppplStack_120,&pppppplStack_e0);
            ppppppplVar47 = &pppppplStack_e0;
            func_0x000107428160();
          }
          lVar22 = 0;
          lVar31 = 0;
          for (uVar36 = 0; ppppplVar23 = (long *****)*ppppplStack_100,
              uVar36 < (ulong)(((long)ppppplStack_100[1] - (long)ppppplVar23) / 0x88);
              uVar36 = uVar36 + 1) {
            unaff_x23 = (long *******)((long)ppppplVar23 + lVar22);
            if (*(int *)(unaff_x23 + 8) == 0) {
              FUN_10743449c(unaff_x23);
              puVar1 = (uint *)((long)ppppplVar23 + lVar22);
              if ((char)puVar1[0x20] == '\x01') {
                FUN_107434274(unaff_x23);
              }
              lVar40 = (ulong)*puVar1 * (ulong)puVar1[1] * 4;
            }
            else {
              FUN_1074344d8(unaff_x23);
              if ((*(char *)((long)ppppplVar23 + lVar22 + 0x80) == '\x01') &&
                 (0xd < *(byte *)((long)ppppplVar23 + lVar22 + 8) - 3)) {
                *(undefined1 *)((long)ppppplVar23 + lVar22 + 0x18) = 1;
              }
              lVar40 = *(long *)((long)ppppplVar23 + lVar22 + 0x10);
            }
            lVar2 = (long)pppppplStack_120 + lVar22;
            FUN_10742a7d4(lVar2,unaff_x23);
            ppppppplVar47 = (long *******)(lVar2 + 0x48);
            func_0x000104c2f1f0(ppppppplVar47,(long)ppppplVar23 + lVar22 + 0x48);
            *(undefined1 *)(lVar2 + 0x80) = *(undefined1 *)((long)ppppplVar23 + lVar22 + 0x80);
            lVar31 = lVar40 + lVar31;
            lVar22 = lVar22 + 0x88;
          }
          lVar22 = 0x260;
          for (lVar40 = ((long)ppppplStack_100[0xd] - (long)ppppplStack_100[0xc]) / 0x288;
              lVar40 != 0; lVar40 = lVar40 + -1) {
            func_0x00010743b950();
            func_0x00010743ba60();
            func_0x00010743bea4();
            func_0x00010743b83c();
            if (((ulong)unaff_x23 & 1) == 0) {
              func_0x00010743b950();
              func_0x00010743ba60();
              func_0x00010743b830();
              uVar6 = *(undefined4 *)(extraout_x8_00 + lVar22 + -0x1c8);
              *(undefined1 *)((long)ppppppplVar47 + 4) =
                   *(undefined1 *)(extraout_x8_00 + lVar22 + -0x1c4);
              *(undefined4 *)ppppppplVar47 = uVar6;
              func_0x00010743ba40();
            }
            func_0x00010743b950();
            func_0x00010743ba60();
            func_0x00010743bea4();
            func_0x00010743b83c();
            if (((ulong)unaff_x23 & 1) == 0) {
              func_0x00010743b950();
              func_0x00010743ba60();
              func_0x00010743b830();
              uVar6 = *(undefined4 *)(extraout_x8_01 + lVar22 + -0x130);
              *(undefined1 *)((long)ppppppplVar47 + 4) =
                   *(undefined1 *)(extraout_x8_01 + lVar22 + -300);
              *(undefined4 *)ppppppplVar47 = uVar6;
              func_0x00010743ba40();
            }
            func_0x00010743b950();
            func_0x00010743ba60();
            func_0x00010743bea4();
            func_0x00010743b83c();
            if (((ulong)unaff_x23 & 1) == 0) {
              func_0x00010743b950();
              func_0x00010743ba60();
              func_0x00010743b830();
              uVar6 = *(undefined4 *)(extraout_x8_02 + lVar22 + -0x90);
              *(undefined1 *)((long)ppppppplVar47 + 4) =
                   *(undefined1 *)(extraout_x8_02 + lVar22 + -0x8c);
              *(undefined4 *)ppppppplVar47 = uVar6;
              func_0x00010743ba40();
            }
            func_0x00010743b950();
            func_0x00010743ba60();
            func_0x00010743bea4();
            func_0x00010743b83c();
            if (((ulong)unaff_x23 & 1) == 0) {
              func_0x00010743b950();
              func_0x00010743ba60();
              func_0x00010743b830();
              uVar6 = *(undefined4 *)(extraout_x8_03 + lVar22);
              *(undefined1 *)((long)ppppppplVar47 + 4) =
                   *(undefined1 *)((undefined4 *)(extraout_x8_03 + lVar22) + 1);
              *(undefined4 *)ppppppplVar47 = uVar6;
              func_0x00010743ba40();
            }
            lVar22 = lVar22 + 0x288;
          }
          pppppplStack_e0 = (long ******)((ulong)pppppplStack_e0 & 0xffffffffffffff00);
          unaff_x23 = (long *******)(lVar45 + 0xe0);
          func_0x00010724e2c8(unaff_x23,&pppppplStack_e0);
          lVar40 = 0;
          lVar22 = 0x260;
          for (uVar36 = 0; ppppplVar44 = ppppplStack_100,
              ppppplVar23 = (long *****)ppppplStack_100[3],
              uVar36 < (ulong)((long)ppppplStack_100[4] - (long)ppppplVar23 >> 5);
              uVar36 = uVar36 + 1) {
            if (*(char *)((long)ppppplVar23 + lVar40 + 4) == '\x01') {
              func_0x000107312278();
              func_0x00010743b5b0();
              func_0x00010743b708();
              func_0x00010743b668();
              func_0x00010743c454(extraout_x8_04 + -0x260);
              FUN_10742c2b4();
              func_0x00010743bbe0();
              ppppplVar23 = (long *****)ppppplStack_100[3];
            }
            if (*(char *)((long)ppppplVar23 + lVar40 + 0xc) == '\x01') {
              func_0x000107312278((long)ppppplVar23 + lVar40 + 8);
              func_0x00010743b5b0();
              func_0x00010743b708();
              func_0x00010743b668();
              func_0x00010743c454(extraout_x8_05 + -0x260);
              func_0x00010742c33c();
              func_0x00010743bbe0();
              ppppplVar23 = (long *****)ppppplStack_100[3];
            }
            if (*(char *)((long)ppppplVar23 + lVar40 + 0x14) == '\x01') {
              func_0x000107312278((long)ppppplVar23 + lVar40 + 0x10);
              func_0x00010743b5b0();
              func_0x00010743b708();
              func_0x00010743b668();
              func_0x00010743c454(extraout_x8_06 + -0x260);
              func_0x00010742c370();
              func_0x00010743bbe0();
              ppppplVar23 = (long *****)ppppplStack_100[3];
            }
            if (*(char *)((long)ppppplVar23 + lVar40 + 0x1c) == '\x01') {
              func_0x000107312278((long)ppppplVar23 + lVar40 + 0x18);
              func_0x00010743b5b0();
              FUN_10743429c(&pppppplStack_e0,param_2,ppppplVar44,extraout_x8_07 + lVar22,0);
              func_0x00010743b668();
              func_0x00010743c454(extraout_x8_08 + -0x260);
              func_0x00010742c3a4();
              func_0x00010743bbe0();
            }
            lVar22 = lVar22 + 0x288;
            lVar40 = lVar40 + 0x20;
          }
          ppppplStack_100[0x28] = (long ****)((long)ppppplStack_100[0x28] + lVar31);
          pppppplStack_c8 = (long ******)0x0;
          pppppplStack_d0 = (long ******)0x0;
          pppplStack_b8 = (long ****)0x0;
          pppplStack_c0 = (long ****)0x0;
          pppppplStack_d8 = (long ******)0x0;
          pppppplStack_e0 = (long ******)0x0;
          pppppplVar43 = (long ******)0x0;
          pppppplVar39 = (long ******)0x0;
          pppppplVar25 = (long ******)0x0;
          if ((long *****)*ppppplStack_100 != (long *****)0x0) {
            FUN_107425f00(ppppplStack_100);
            __ZdlPv(*ppppplVar44);
            *ppppplVar44 = (long ****)0x0;
            ppppplVar44[1] = (long ****)0x0;
            ppppplVar44[2] = (long ****)0x0;
            pppppplVar43 = pppppplStack_d0;
            pppppplVar39 = pppppplStack_e0;
            pppppplVar25 = pppppplStack_d8;
          }
          ppppplVar44[1] = (long ****)pppppplVar25;
          *ppppplVar44 = (long ****)pppppplVar39;
          ppppplVar44[2] = (long ****)pppppplVar43;
          pppppplStack_e0 = (long ******)0x0;
          pppppplStack_d8 = (long ******)0x0;
          pppppplStack_d0 = (long ******)0x0;
          if ((long *****)ppppplVar44[3] != (long *****)0x0) {
            ppppplVar44[4] = ppppplVar44[3];
            __ZdlPv();
            ppppplVar44[3] = (long ****)0x0;
            ppppplVar44[4] = (long ****)0x0;
            ppppplVar44[5] = (long ****)0x0;
          }
          ppppplVar44[4] = pppplStack_c0;
          ppppplVar44[3] = (long ****)pppppplStack_c8;
          ppppplVar44[5] = pppplStack_b8;
          pppppplStack_c8 = (long ******)0x0;
          pppplStack_c0 = (long ****)0x0;
          pppplStack_b8 = (long ****)0x0;
          func_0x000107425e44(&pppppplStack_e0);
          FUN_107425ea4(&pppppplStack_120);
          bVar32 = true;
        }
        if (iVar15 != 0) {
          ppppppplVar47 = (long *******)ppppplStack_100[0xd];
          for (unaff_x23 = (long *******)ppppplStack_100[0xc]; unaff_x23 != ppppppplVar47;
              unaff_x23 = unaff_x23 + 0x51) {
            if (unaff_x23[0x4f] == (long ******)0x0) {
              plVar37 = param_2;
              (**(code **)(*param_2 + 0x38))(param_2);
              FUN_10742c404(unaff_x23,plVar37);
            }
          }
        }
        ppppplVar44 = (long *****)ppppplStack_100[10];
        for (ppppplVar23 = (long *****)ppppplStack_100[9]; ppppplVar23 != ppppplVar44;
            ppppplVar23 = ppppplVar23 + 0x12) {
          ppppppplVar47 = (long *******)ppppplVar23[4];
          for (pppplVar46 = ppppplVar23[3] + 0x17; unaff_x23 = (long *******)(pppplVar46 + -0x17),
              unaff_x23 != ppppppplVar47; pppplVar46 = pppplVar46 + 0x3e) {
            if ((unaff_x23 != (long *******)0x0) && (*(int *)(pppplVar46 + 1) == 0)) {
              if (cVar8 != '\0') {
                ppppppplVar21 = (long *******)(pppplVar46 + 2);
                if (*(char *)(pppplVar46 + 0x12) == '\x01') {
                  uVar7 = *(uint *)(pppplVar46 + -0x13);
                  if (*(int *)(pppplVar46 + 6) != -1 || uVar7 != 0xffffffff) {
                    if (uVar7 == 0xffffffff) {
                      FUN_107425d60(ppppppplVar21);
                    }
                    else {
                      pppppplStack_e0 = (long ******)ppppppplVar21;
                      (*(code *)(&PTR_FUN_1109af5d0)[uVar7])
                                (&pppppplStack_e0,ppppppplVar21,unaff_x23);
                    }
                  }
                  FUN_107429b50(pppplVar46 + 7,pppplVar46 + -0x12);
                  cVar9 = *(char *)(pppplVar46 + 0xd);
                  if (cVar9 == *(char *)(pppplVar46 + -0xc)) {
                    if (cVar9 != '\0') {
                      FUN_107429654(pppplVar46 + 10);
                    }
                  }
                  else if (cVar9 == '\0') {
                    FUN_1074348f0(pppplVar46 + 10,pppplVar46 + -0xf);
                  }
                  else {
                    func_0x000107429cb4(pppplVar46 + 10);
                  }
                  cVar9 = *(char *)(pppplVar46 + 0x11);
                  if (cVar9 == *(char *)(pppplVar46 + -8)) {
                    if (cVar9 != '\0') {
                      FUN_10742986c(pppplVar46 + 0xe);
                    }
                  }
                  else if (cVar9 == '\0') {
                    FUN_10743498c(pppplVar46 + 0xe,pppplVar46 + -0xb);
                  }
                  else {
                    func_0x000107429cd8(pppplVar46 + 0xe);
                  }
                }
                else {
                  *(undefined1 *)(pppplVar46 + 2) = 0;
                  *(undefined4 *)(pppplVar46 + 6) = 0xffffffff;
                  FUN_107425d60(ppppppplVar21);
                  uVar7 = *(uint *)(pppplVar46 + -0x13);
                  if (uVar7 != 0xffffffff) {
                    pppppplStack_e0 = (long ******)ppppppplVar21;
                    (*(code *)(&PTR_FUN_1109af5e0)[uVar7])(&pppppplStack_e0,unaff_x23);
                    *(uint *)(pppplVar46 + 6) = uVar7;
                  }
                  pppppplStack_e0 = (long ******)(pppplVar46 + 7);
                  *pppppplStack_e0 = (long *****)0x0;
                  pppplVar46[8] = (long ***)0x0;
                  pppplVar46[9] = (long ***)0x0;
                  ppplVar3 = pppplVar46[-0x12];
                  pppppplStack_d8 = (long ******)((ulong)pppppplStack_d8 & 0xffffffffffffff00);
                  lVar22 = (long)pppplVar46[-0x11] - (long)ppplVar3;
                  if (lVar22 != 0) {
                    func_0x000107429c6c(pppppplStack_e0,lVar22 / 0x18);
                    ppplVar42 = pppplVar46[8];
                    _memmove(ppplVar42,ppplVar3,lVar22);
                    pppplVar46[8] = (long ***)((long)ppplVar42 + lVar22);
                  }
                  pppppplStack_d8 = (long ******)CONCAT71(pppppplStack_d8._1_7_,1);
                  FUN_107434a38(&pppppplStack_e0);
                  *(undefined1 *)(pppplVar46 + 10) = 0;
                  *(undefined1 *)(pppplVar46 + 0xd) = 0;
                  if (*(char *)(pppplVar46 + -0xc) == '\x01') {
                    FUN_1074348f0(pppplVar46 + 10,pppplVar46 + -0xf);
                  }
                  *(undefined1 *)(pppplVar46 + 0xe) = 0;
                  *(undefined1 *)(pppplVar46 + 0x11) = 0;
                  if (*(char *)(pppplVar46 + -8) == '\x01') {
                    FUN_10743498c(pppplVar46 + 0xe,pppplVar46 + -0xb);
                  }
                  *(undefined1 *)(pppplVar46 + 0x12) = 1;
                }
              }
              ppppppplVar21 = unaff_x23;
              FUN_10742c9d8();
              if ((((ulong)ppppppplVar21 & 1) == 0) && (*(int *)(pppplVar46 + 0x13) != 0)) {
                ppppppplVar21 = unaff_x23;
                FUN_10742c918();
                ppplVar3 = pppplVar46[-0x12];
                ppplVar42 = pppplVar46[-0x11];
                ppppppplVar41 = unaff_x23;
                func_0x00010742ca14(unaff_x23);
                FUN_1073da574(&pppppplStack_120,param_2,ppppppplVar41,1);
                func_0x00010743bc8c(param_2);
                FUN_1073da3e8(param_2,0xad,(long)pppplVar46[-0x11] - (long)pppplVar46[-0x12]);
                lVar22 = (long)pppplVar46[-0x11] - (long)pppplVar46[-0x12];
                (**(code **)(*param_2 + 0x40))(&uStack_e8,param_2,pppplVar46[-0x12],lVar22,1);
                cVar9 = *(char *)(pppplVar46 + -0xc);
                if (cVar9 != '\x01') {
                  uStack_160 = uStack_160 & 0xffffffffffffff00;
                }
                else {
                  func_0x00010743bc8c(param_2);
                  func_0x00010743c290();
                  ppplVar4 = pppplVar46[-0xf];
                  ppplVar5 = pppplVar46[-0xe];
                  func_0x00010743bd80();
                  uStack_138 = CONCAT44(uStack_e4,uStack_e8);
                  uStack_160 = (long)ppplVar5 - (long)ppplVar4 >> 3;
                  uStack_158 = CONCAT71(uStack_158._1_7_,1);
                  uStack_150 = 8;
                  uStack_148 = CONCAT71(uStack_148._1_7_,1);
                }
                cStack_130 = cVar9 == '\x01';
                cVar9 = *(char *)(pppplVar46 + -8);
                if (cVar9 != '\x01') {
                  uStack_198 = uStack_198 & 0xffffffffffffff00;
                }
                else {
                  func_0x00010743bc8c(param_2);
                  func_0x00010743c290();
                  ppplVar4 = pppplVar46[-0xb];
                  ppplVar5 = pppplVar46[-10];
                  func_0x00010743bd80();
                  uStack_198 = (long)ppplVar5 - (long)ppplVar4 >> 3;
                  uStack_170 = CONCAT44(uStack_e4,uStack_e8);
                  uStack_190 = CONCAT71(uStack_190._1_7_,1);
                  lStack_188 = 8;
                  uStack_180 = 1;
                }
                pppppplStack_d0 = pppppplStack_110;
                uVar13 = uStack_138;
                uVar12 = uStack_170;
                uStack_168 = cVar9 == '\x01';
                pppppplStack_e0 = pppppplStack_120;
                pppppplStack_d8 =
                     (long ******)CONCAT71(pppppplStack_d8._1_7_,(undefined1)lStack_118);
                pppppplStack_110 = (long ******)0x0;
                pppppplStack_c8 = (long ******)(lVar22 / 0x18);
                pppplStack_c0 = (long ****)CONCAT71(pppplStack_c0._1_7_,1);
                pppplStack_b8 = (long ****)0x18;
                uStack_b0 = 1;
                uStack_98 = uStack_98 & 0xffffffffffffff00;
                uStack_68 = cStack_130 != '\0';
                if ((bool)uStack_68) {
                  uStack_90 = uStack_158;
                  uStack_98 = uStack_160;
                  uStack_80 = uStack_148;
                  uStack_88 = uStack_150;
                  uStack_78 = (undefined4)uStack_140;
                  uStack_138 = 0;
                  uStack_70 = uVar13;
                }
                uStack_60 = uStack_60 & 0xffffffffffffff00;
                if ((bool)uStack_168) {
                  uStack_48 = CONCAT71(uStack_17f,uStack_180);
                  uStack_58 = uStack_190;
                  uStack_60 = uStack_198;
                  lStack_50 = lStack_188;
                  uStack_40 = uStack_178;
                  uStack_170 = 0;
                  uStack_38 = uVar12;
                }
                uStack_30 = uStack_168;
                func_0x00010730b13c(&uStack_198);
                func_0x00010730b13c(&uStack_160);
                if ((long *******)pppppplStack_110 != (long *******)0x0) {
                  func_0x00010743b2a4();
                }
                lVar22 = ((long)ppplVar42 - (long)ppplVar3) + (long)ppppppplVar21;
                if (*(char *)(pppplVar46 + -0xc) == '\x01') {
                  lVar22 = (long)pppplVar46[-0xe] + (lVar22 - (long)pppplVar46[-0xf]);
                }
                if (*(char *)(pppplVar46 + -8) == '\x01') {
                  lVar22 = (long)pppplVar46[-10] + (lVar22 - (long)pppplVar46[-0xb]);
                }
                if (*(int *)(pppplVar46 + 1) == 1) {
                  func_0x00010730afe0(unaff_x23,&pppppplStack_e0);
                  func_0x00010730af34(pppplVar46 + -0x14,&pppppplStack_c8);
                  FUN_107434a64(pppplVar46 + -0xe,&uStack_98);
                  FUN_107434a64(pppplVar46 + -7,&uStack_60);
                  *pppplVar46 = (long ***)pplStack_28;
                }
                else {
                  FUN_107425db4(unaff_x23);
                  FUN_107429f88(unaff_x23,&pppppplStack_e0);
                  *(undefined4 *)(pppplVar46 + 1) = 1;
                }
                ppppplStack_100[0x28] = (long ****)((long)ppppplStack_100[0x28] + lVar22);
                func_0x000107425e08(&pppppplStack_e0);
              }
              bVar32 = true;
            }
          }
        }
        if (bVar32) {
          if (pppppplStack_1e8 < pppppplStack_1e0) {
            pppppplStack_1e8[1] = ppppplStack_f8;
            *pppppplStack_1e8 = ppppplStack_100;
            ppppppplVar47 = (long *******)pppppplStack_1e8;
            if ((long ******)ppppplStack_f8 != (long ******)0x0) {
              do {
                func_0x00010743bfcc();
                ppppppplVar47 = extraout_x8_09;
              } while (extraout_w11 != 0);
            }
            pppppplStack_1e8 = (long ******)(ppppppplVar47 + 2);
          }
          else {
            ppppppplVar47 = &pppppplStack_1f0;
            FUN_1073b4a6c(ppppppplVar47,((long)pppppplStack_1e8 - (long)pppppplStack_1f0 >> 4) + 1);
            FUN_1073b4ac0(&pppppplStack_e0,ppppppplVar47,
                          (long)pppppplStack_1e8 - (long)pppppplStack_1f0 >> 4,&pppppplStack_1e0);
            pppppplStack_d0[1] = ppppplStack_f8;
            *pppppplStack_d0 = ppppplStack_100;
            if ((long ******)ppppplStack_f8 != (long ******)0x0) {
              do {
                func_0x00010743b4a0();
              } while (extraout_w10 != 0);
            }
            pppppplStack_d0 = pppppplStack_d0 + 2;
            unaff_x23 = (long *******)
                        ((long)pppppplStack_d8 - ((long)pppppplStack_1e8 - (long)pppppplStack_1f0));
            _memcpy(unaff_x23);
            pppppplVar39 = pppppplStack_d0;
            pppppplVar43 = pppppplStack_1e0;
            pppppplStack_1e0 = pppppplStack_c8;
            pppppplStack_1e8 = pppppplStack_d0;
            pppppplStack_d0 = pppppplStack_1f0;
            pppppplStack_c8 = pppppplVar43;
            pppppplStack_e0 = pppppplStack_1f0;
            pppppplStack_d8 = pppppplStack_1f0;
            pppppplStack_1f0 = (long ******)unaff_x23;
            FUN_1073b4b48(&pppppplStack_e0);
            pppppplStack_1e8 = pppppplVar39;
          }
        }
        ppppppplVar38 = (long *******)*ppppppplVar38;
        ppppppplVar33 = (long *******)((long)ppppplStack_100[0x28] + (long)ppppppplVar33);
        lVar22 = lVar17;
      }
      pppppplVar43 = &ppppplStack_100;
      func_0x0001073b4a44();
    }
    else {
      ppppppplVar38 = (long *******)*ppppppplVar38;
    }
  }
  *(long ********)(lVar22 + 0x220) = ppppppplVar33;
  lStack_210 = 0;
  plVar37 = *(long **)(lVar22 + 0xf0);
LAB_107431450:
  do {
    if (plVar37 == (long *)0x0) {
      lVar45 = 0;
      *(long *)(lVar22 + 0x228) = lStack_210;
      plVar37 = *(long **)(lVar22 + 0x140);
      while (plVar37 != (long *)0x0) {
        if ((int)plVar37[0xb] == 1) {
          func_0x000107434d58(&uStack_198,plVar37 + 9);
          if (uStack_198 == 0) {
            plVar34 = (long *)(lVar17 + 0x130);
            func_0x000107434d94(plVar34,plVar37);
          }
          else {
            plVar34 = (long *)(uStack_198 + 0x10);
            while (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0) {
              iVar15 = *(int *)(plVar34 + 0x13);
              if (iVar15 == 0) {
                if (*(int *)(plVar34 + 0x12) == 0) {
                  FUN_10743449c(plVar34 + 10);
                  uVar7 = *(uint *)(plVar34 + 10);
                  uVar11 = *(uint *)((long)plVar34 + 0x54);
                  lVar22 = (long)(plVar34 + 10);
                  FUN_107434274();
                  func_0x00010743c208();
                  if (lVar22 == 0) {
                    pppppplStack_120 = (long ******)((ulong)pppppplStack_120 & 0xffffff0000000000);
                  }
                  else {
                    func_0x00010743c3c8();
                  }
                  func_0x00010743c0f0();
                  FUN_107432024();
                  func_0x00010743bb44((ulong)uVar7 * (ulong)uVar11);
                }
                else {
                  lVar22 = (long)(plVar34 + 10);
                  FUN_1074344d8();
                  if (0xd < *(byte *)(plVar34 + 0xb) - 3) {
                    *(undefined1 *)(plVar34 + 0xd) = 1;
                  }
                  ppppppplVar38 = (long *******)plVar34[0xc];
                  func_0x00010743c208();
                  if (lVar22 == 0) {
                    pppppplStack_120 = (long ******)((ulong)pppppplStack_120 & 0xffffff0000000000);
                  }
                  else {
                    func_0x00010743c3c8();
                  }
                  func_0x00010743c0f0();
                  FUN_1073da708();
                  func_0x00010743bd9c();
                  pppppplStack_d0 = (long ******)extraout_x9_00;
                  pppppplStack_c8 = (long ******)ppppppplVar38;
                }
                lVar22 = (long)(plVar34 + 9);
                FUN_107434b0c(lVar22,&pppppplStack_e0);
                func_0x00010743c428();
                if (lVar22 != 0) {
                  func_0x00010743b2a4();
                }
                func_0x00010743be6c();
                if (lVar22 != 0) {
                  func_0x00010743b2a4();
                }
                iVar15 = *(int *)(plVar34 + 0x13);
              }
              if (iVar15 == 1) {
                lVar45 = plVar34[0xd] + lVar45;
              }
            }
            plVar34 = (long *)*plVar37;
            ppppppplVar33 = (long *******)0x0;
          }
          FUN_10742ac74(&uStack_198);
          plVar37 = plVar34;
        }
        else {
          plVar37 = (long *)*plVar37;
        }
      }
      *(long *)(lVar17 + 0x230) = lVar45;
      ppppppplVar38 = *(long ********)(lVar17 + 0x1f8);
      pppppplVar43 = ppppppplVar38[7];
      pppppplVar39 = ppppppplVar38[8];
      do {
        if (pppppplVar43 == pppppplVar39) {
          FUN_107434094(ppppppplVar38 + 7);
          if (pppppplStack_1f0 != pppppplStack_1e8) {
            func_0x00010743be8c();
            ppppppplVar38 = &pppppplStack_d8;
            ppppppplVar33 = (long *******)pppppplStack_e0;
            while (ppppppplVar33 != ppppppplVar38) {
              (*(code *)(*ppppppplVar33[4])[2])(ppppppplVar33[4],&pppppplStack_1f0);
              func_0x00010002c7d4();
            }
            FUN_107439d1c(&pppppplStack_e0);
          }
          uVar14 = lStack_1d8 == lStack_1d0;
          if (!(bool)uVar14) {
            func_0x00010743be8c();
            ppppppplVar33 = &pppppplStack_d8;
            ppppppplVar38 = (long *******)pppppplStack_e0;
            while (uVar14 = ppppppplVar38 == ppppppplVar33, !(bool)uVar14) {
              (*(code *)(*ppppppplVar38[4])[3])(ppppppplVar38[4],&lStack_1d8);
              func_0x00010002c7d4();
            }
            FUN_107439d1c(&pppppplStack_e0);
          }
          FUN_1073b4994(&pppppplStack_1f0);
          func_0x0001000e30f4(&lStack_1d8);
          FUN_107434fe8(&uStack_1c0);
          func_0x00010743b264(uStack_18);
          if ((bool)uVar14) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010743bab4();
          func_0x000107434d24();
          func_0x000107435084(&ppppplStack_100);
          FUN_1073b4994(&pppppplStack_1f0);
          func_0x0001000e30f4(&lStack_1d8);
          FUN_107434fe8(&uStack_1c0);
          func_0x00010743b660();
          func_0x00010743c1b0();
          pppppplVar43 = (long ******)0x18;
          __Znwm();
          *pppppplVar43 = (long *****)*ppppppplVar38;
          *(undefined8 *)((long)pppppplVar43 + 5) = *(undefined8 *)((long)ppppppplVar38 + 5);
          pppppplVar39 = ppppppplVar38[2];
          ppppppplVar38[2] = (long ******)0x0;
          pppppplVar43[2] = (long *****)pppppplVar39;
          *ppppppplVar33 = pppppplVar43;
          return;
        }
        ppppppplVar33 = (long *******)*pppppplVar43;
        uStack_198 = 0;
        uStack_190 = 0;
        if (ppppppplVar33 != (long *******)0x0) {
          if (*(int *)(ppppppplVar33 + 10) == 1) {
            func_0x000107434780(&pppppplStack_e0,ppppppplVar33 + 1);
            func_0x000107433f40(&uStack_198,&pppppplStack_e0);
            func_0x00010743bbe0();
          }
          else if (*(int *)(ppppppplVar33 + 10) == 0) {
            if (*(int *)(ppppppplVar33 + 9) == 0) {
              FUN_10743449c(ppppppplVar33 + 1);
              func_0x00010743c3b4(param_2);
              func_0x00010743c538();
              FUN_107432024();
              func_0x00010743c2dc();
            }
            else {
              FUN_1074344d8(ppppppplVar33 + 1);
              func_0x00010743c3b4(param_2);
              func_0x00010743c538();
              FUN_1073da708();
              func_0x00010743c2dc();
            }
            func_0x000107433f40(&uStack_198,&uStack_160);
            puVar20 = &uStack_160;
            func_0x0001073bca64();
            func_0x00010743c428();
            if (puVar20 != (ulong *)0x0) {
              func_0x00010743b2a4();
            }
          }
          if (((uStack_198 != 0) &&
              (ppppppplVar47 = (long *******)ppppppplVar38[3], ppppppplVar47 != (long *******)0x0))
             && (ppppppplVar38[5] != (long ******)0x0)) {
            ppppplVar23 = *pppppplVar43;
            ppppppplVar21 = ppppppplVar38 + 5;
            func_0x00010726364c(ppppppplVar21,ppppplVar23 + 0xb);
            uVar36 = (long)ppppppplVar47 - 1;
            if (((ulong)ppppppplVar47 & uVar36) == 0) {
              ppppppplVar41 = (long *******)((ulong)ppppppplVar21 & uVar36);
            }
            else {
              ppppppplVar41 = ppppppplVar21;
              if (ppppppplVar47 <= ppppppplVar21) {
                uVar18 = 0;
                if (ppppppplVar47 != (long *******)0x0) {
                  uVar18 = (ulong)ppppppplVar21 / (ulong)ppppppplVar47;
                }
                ppppppplVar41 = (long *******)((long)ppppppplVar21 - uVar18 * (long)ppppppplVar47);
              }
            }
            ppppppplVar33 = (long *******)0x0;
            ppppppplVar35 = (long *******)ppppppplVar38[2][(long)ppppppplVar41];
            if ((long *******)ppppppplVar38[2][(long)ppppppplVar41] != (long *******)0x0) {
LAB_107431ac4:
              while (ppppppplVar33 = (long *******)*ppppppplVar35,
                    ppppppplVar33 != (long *******)0x0) {
                ppppppplVar24 = (long *******)ppppppplVar33[1];
                ppppppplVar35 = ppppppplVar33;
                if (ppppppplVar24 != ppppppplVar21) goto LAB_107431aec;
                ppppppplVar24 = ppppppplVar33 + 2;
                func_0x000104c32db4(ppppppplVar24,ppppplVar23 + 0xb);
                if ((int)ppppppplVar24 != 0) {
                  pppppplVar26 = ppppppplVar33[10];
                  for (pppppplVar25 = ppppppplVar33[9]; pppppplVar25 != pppppplVar26;
                      pppppplVar25 = pppppplVar25 + 0xf) {
                    if (*(char *)(pppppplVar25[0xe] + 0x10) == '\x01') {
                      ppppplVar23 = pppppplVar25[0xe] + 9;
                      func_0x000104c32db4(ppppplVar23,*pppppplVar43 + 0xb);
                      if ((int)ppppplVar23 != 0) {
                        func_0x00010742c2e8(pppppplVar25[0xe],&uStack_198);
                      }
                    }
                  }
                  pppppplVar26 = ppppppplVar38[3];
                  pppppplVar25 = ppppppplVar33[1];
                  uVar36 = (long)pppppplVar26 - 1;
                  if (((ulong)pppppplVar26 & uVar36) == 0) {
                    pppppplVar25 = (long ******)(uVar36 & (ulong)pppppplVar25);
                  }
                  else if (pppppplVar26 <= pppppplVar25) {
                    func_0x00010743c114();
                    pppppplVar25 = extraout_x8_10;
                    pppppplVar26 = extraout_x9_01;
                    uVar36 = extraout_x12;
                  }
                  pppppplVar27 = *ppppppplVar33;
                  pppppplVar28 = ppppppplVar38[2];
                  ppppppplVar47 = (long *******)pppppplVar28[(long)pppppplVar25];
                  do {
                    ppppppplVar21 = ppppppplVar47;
                    ppppppplVar47 = (long *******)*ppppppplVar21;
                  } while ((long *******)*ppppppplVar21 != ppppppplVar33);
                  if (ppppppplVar21 == ppppppplVar38 + 4) {
LAB_107431bd8:
                    if (pppppplVar27 == (long ******)0x0) {
LAB_107431c0c:
                      pppppplVar28[(long)pppppplVar25] = (long *****)0x0;
                      pppppplVar27 = *ppppppplVar33;
                      goto LAB_107431c14;
                    }
                    pppppplVar29 = (long ******)pppppplVar27[1];
                    if (((ulong)pppppplVar26 & uVar36) == 0) {
                      pppppplVar30 = (long ******)((ulong)pppppplVar29 & uVar36);
                    }
                    else {
                      pppppplVar30 = pppppplVar29;
                      if (pppppplVar26 <= pppppplVar29) {
                        uVar18 = 0;
                        if (pppppplVar26 != (long ******)0x0) {
                          uVar18 = (ulong)pppppplVar29 / (ulong)pppppplVar26;
                        }
                        pppppplVar30 = (long ******)
                                       ((long)pppppplVar29 - uVar18 * (long)pppppplVar26);
                      }
                    }
                    if (pppppplVar30 != pppppplVar25) goto LAB_107431c0c;
LAB_107431c1c:
                    if (((ulong)pppppplVar26 & uVar36) == 0) {
                      pppppplVar29 = (long ******)((ulong)pppppplVar29 & uVar36);
                    }
                    else if (pppppplVar26 <= pppppplVar29) {
                      uVar36 = 0;
                      if (pppppplVar26 != (long ******)0x0) {
                        uVar36 = (ulong)pppppplVar29 / (ulong)pppppplVar26;
                      }
                      pppppplVar29 = (long ******)((long)pppppplVar29 - uVar36 * (long)pppppplVar26)
                      ;
                    }
                    if (pppppplVar29 != pppppplVar25) {
                      pppppplVar28[(long)pppppplVar29] = (long *****)ppppppplVar21;
                      pppppplVar27 = *ppppppplVar33;
                    }
                  }
                  else {
                    pppppplVar29 = ppppppplVar21[1];
                    if (((ulong)pppppplVar26 & uVar36) == 0) {
                      pppppplVar29 = (long ******)((ulong)pppppplVar29 & uVar36);
                    }
                    else if (pppppplVar26 <= pppppplVar29) {
                      uVar18 = 0;
                      if (pppppplVar26 != (long ******)0x0) {
                        uVar18 = (ulong)pppppplVar29 / (ulong)pppppplVar26;
                      }
                      pppppplVar29 = (long ******)((long)pppppplVar29 - uVar18 * (long)pppppplVar26)
                      ;
                    }
                    if (pppppplVar29 != pppppplVar25) goto LAB_107431bd8;
LAB_107431c14:
                    if (pppppplVar27 != (long ******)0x0) {
                      pppppplVar29 = (long ******)pppppplVar27[1];
                      goto LAB_107431c1c;
                    }
                  }
                  *ppppppplVar21 = pppppplVar27;
                  *ppppppplVar33 = (long ******)0x0;
                  ppppppplVar38[5] = (long ******)((long)ppppppplVar38[5] + -1);
                  pppppplStack_d0 = (long ******)0x1;
                  pppppplStack_e0 = (long ******)ppppppplVar33;
                  pppppplStack_d8 = (long ******)(ppppppplVar38 + 4);
                  FUN_107433f94(&pppppplStack_e0);
                  break;
                }
              }
            }
          }
        }
LAB_107431c84:
        func_0x0001073bca64(&uStack_198);
        pppppplVar43 = pppppplVar43 + 2;
      } while( true );
    }
    func_0x00010743bb8c();
    if ((int)plVar37[0xb] == 1) {
      bVar10 = *(byte *)pppppplVar43;
      ppppppplVar33 = (long *******)(ulong)bVar10;
      FUN_107434ad0(&ppppplStack_100,plVar37 + 9);
      ppppplVar23 = ppppplStack_100;
      if ((long ******)ppppplStack_100 == (long ******)0x0) {
        plVar34 = (long *)(lVar17 + 0xe0);
        FUN_107434b3c(plVar34,plVar37);
        plVar37 = plVar34;
        goto LAB_10743163c;
      }
      if (*(int *)(ppppplStack_100 + 10) == 0) {
        if (*(int *)(ppppplStack_100 + 9) == 0) {
          FUN_10743449c(ppppplStack_100 + 1);
          uVar7 = *(uint *)(ppppplVar23 + 1);
          uVar11 = *(uint *)((long)ppppplVar23 + 0xc);
          FUN_107434274(ppppplVar23 + 1);
          if (bVar10 != 1) {
            func_0x00010743c09c();
            func_0x00010743be2c();
            func_0x00010743c084();
            FUN_107432024();
            func_0x00010743bb44((ulong)uVar7 * (ulong)uVar11);
            goto LAB_1074317ac;
          }
          uVar36 = (ulong)*(uint *)(ppppplVar23 + 1);
          uVar7 = *(uint *)((long)ppppplVar23 + 0xc);
          uVar18 = (ulong)uVar7;
          if (*(uint *)(ppppplVar23 + 1) == uVar7 * 6) {
            uStack_104 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            uStack_108 = 0x303;
            uStack_e8 = uVar7;
            uStack_e4 = uVar7;
            func_0x00010743c24c();
            uVar19 = uVar18;
            func_0x00010743c24c(uVar18);
            lVar22 = 0;
            ppppppplVar33 = (long *******)(uVar36 & 0xffffffff);
            do {
              *(undefined8 *)((long)&pppppplStack_e0 + lVar22) = 0;
              *(undefined8 *)((long)&pppppplStack_d8 + lVar22) = 0;
              *(undefined2 *)((long)&pppppplStack_d0 + lVar22) = 1;
              lVar22 = lVar22 + 0x18;
            } while (lVar22 != 0x90);
            uVar19 = uVar19 & 0xffffffff;
            uVar12 = CONCAT44(uStack_e4,uStack_e8);
            for (lVar22 = 0; lVar22 != 6; lVar22 = lVar22 + 1) {
              FUN_1073be070(&uStack_198,uVar12,0);
              FUN_10742a894(&pppppplStack_e0 + lVar22 * 3,&uStack_198);
              func_0x00010724e5f4(&uStack_198);
              ppppplVar44 = (long *****)
                            ((long)ppppplVar23[2] + *(uint *)(&UNK_10de6903c + lVar22 * 4) * uVar19)
              ;
              pppppplVar43 = (&pppppplStack_d8)[lVar22 * 3];
              uVar36 = uVar18;
              uVar11 = uVar7;
              while (uVar11 != 0) {
                _memcpy(pppppplVar43,ppppplVar44,uVar19);
                ppppplVar44 = (long *****)((long)ppppplVar44 + (long)ppppppplVar33);
                pppppplVar43 = (long ******)((long)pppppplVar43 + uVar19);
                uVar11 = (int)uVar36 - 1;
                uVar36 = (ulong)uVar11;
              }
              (&uStack_160)[lVar22] = (ulong)(&pppppplStack_d8)[lVar22 * 3];
            }
            func_0x00010743c0cc();
            FUN_1073daa34();
            func_0x00010743b978((ulong)*(uint *)(ppppplVar23 + 1) *
                                (ulong)*(uint *)((long)ppppplVar23 + 0xc) * 4);
            lVar22 = lStack_188;
            lStack_188 = 0;
            if (lVar22 != 0) {
              func_0x00010743b2a4();
            }
            func_0x000107434cf0(&pppppplStack_e0);
            goto LAB_107431490;
          }
        }
        else {
          FUN_1074344d8(ppppplStack_100 + 1);
          ppppppplVar38 = (long *******)ppppplVar23[3];
          *(undefined1 *)(ppppplVar23 + 4) = 1;
          if (bVar10 != 1) {
            func_0x00010743c09c();
            func_0x00010743be2c();
            func_0x00010743c084();
            FUN_1073da708();
            func_0x00010743bd9c();
            pppppplStack_d0 = (long ******)extraout_x9;
            pppppplStack_c8 = (long ******)ppppppplVar38;
LAB_1074317ac:
            pppppplVar43 = (long ******)ppppplStack_100;
            FUN_107434b0c(ppppplStack_100,&pppppplStack_e0);
            func_0x00010743c428();
            if (pppppplVar43 != (long ******)0x0) {
              func_0x00010743b2a4();
            }
            func_0x00010743be6c();
            if (pppppplVar43 != (long ******)0x0) {
              func_0x00010743b2a4();
            }
            goto LAB_107431490;
          }
          uVar7 = *(uint *)((long)ppppplVar23 + 0xc);
          uVar36 = (ulong)uVar7;
          if (*(int *)(ppppplVar23 + 1) == uVar7 * 6) {
            uStack_104 = 0;
            pppppplVar43 = (long ******)(ppppplVar23 + 1);
            uStack_108 = 0x303;
            FUN_1073c90e8(pppppplVar43);
            uVar18 = uVar36;
            uStack_e8 = uVar7;
            uStack_e4 = uVar7;
            func_0x0001073da298(uVar36,uVar36,pppppplVar43);
            uVar19 = (ulong)*(uint *)(ppppplVar23 + 1);
            func_0x00010743c240();
            func_0x00010743c240();
            ppppppplVar33 = (long *******)(uVar19 & 0xffffffff);
            if (((uVar36 & 0xffffffff) * 2 + (uVar36 & 0xffffffff)) * 2 - (long)ppppppplVar33 == 0)
            {
              lVar22 = 0;
              uVar19 = uVar36 & 0xffffffff;
              pppppplStack_c8 = (long ******)0x0;
              pppppplStack_d0 = (long ******)0x0;
              pppplStack_b8 = (long ****)0x0;
              pppplStack_c0 = (long ****)0x0;
              uVar11 = 0;
              uVar16 = (uint)uVar36;
              if (uVar16 != 0) {
                uVar11 = (uint)uVar18 / uVar16;
              }
              pppppplStack_d8 = (long ******)0x0;
              pppppplStack_e0 = (long ******)0x0;
              uStack_148 = 0;
              uStack_150 = 0;
              uStack_138 = 0;
              uStack_140 = 0;
              if (uVar16 != 0) {
                uVar7 = uVar11;
              }
              uStack_158 = 0;
              uStack_160 = 0;
              for (; lVar22 != 6; lVar22 = lVar22 + 1) {
                uVar36 = uVar18 & 0xffffffff;
                __Znam(uVar18 & 0xffffffff);
                _bzero();
                uStack_198 = 0;
                FUN_1073c8290(&pppppplStack_e0 + lVar22,uVar36);
                func_0x00010724e5b8(&uStack_198);
                lVar45 = (long)ppppplVar23[5] +
                         (long)(*(uint *)(&UNK_10de6903c + lVar22 * 4) * uVar19 +
                               (long)ppppplVar23[6][1]);
                pppppplVar43 = (&pppppplStack_e0)[lVar22];
                for (uVar11 = uVar7; uVar11 != 0; uVar11 = uVar11 - 1) {
                  _memcpy(pppppplVar43,lVar45,uVar19);
                  lVar45 = lVar45 + (long)ppppppplVar33;
                  pppppplVar43 = (long ******)((long)pppppplVar43 + uVar19);
                }
                (&uStack_160)[lVar22] = (ulong)(&pppppplStack_e0)[lVar22];
              }
              func_0x00010743c0cc();
              FUN_1073daa34();
              func_0x00010743b978(ppppplVar23[3]);
              lVar22 = lStack_188;
              lStack_188 = 0;
              if (lVar22 != 0) {
                func_0x00010743b2a4();
              }
              func_0x000107434d24(&pppppplStack_e0);
              goto LAB_107431490;
            }
          }
        }
      }
      else {
LAB_107431490:
        if (((long ******)ppppplStack_100 != (long ******)0x0) &&
           (*(int *)(ppppplStack_100 + 10) == 1)) {
          lStack_210 = (long)ppppplStack_100[4] + lStack_210;
        }
        plVar37 = (long *)*plVar37;
      }
LAB_10743163c:
      pppppplVar43 = &ppppplStack_100;
      func_0x000107435084();
      lVar22 = lVar17;
      goto LAB_107431450;
    }
    plVar37 = (long *)*plVar37;
  } while( true );
LAB_107431aec:
  if (((ulong)ppppppplVar47 & uVar36) == 0) {
    ppppppplVar24 = (long *******)((ulong)ppppppplVar24 & uVar36);
  }
  else if (ppppppplVar47 <= ppppppplVar24) {
    uVar18 = 0;
    if (ppppppplVar47 != (long *******)0x0) {
      uVar18 = (ulong)ppppppplVar24 / (ulong)ppppppplVar47;
    }
    ppppppplVar24 = (long *******)((long)ppppppplVar24 - uVar18 * (long)ppppppplVar47);
  }
  if (ppppppplVar24 != ppppppplVar41) goto LAB_107431c84;
  goto LAB_107431ac4;
}



/* Entry: 1074f41ac; end: 1074f41f7;  */

void FUN_1074f41ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *extraout_x8;
  long *plVar1;
  undefined1 auStack_28 [8];
  
  plVar1 = *(long **)(param_1 + 0x30);
  __ZNSt13exception_ptrC1ERKS_(auStack_28,param_4);
  func_0x0001074fec24(*(undefined8 *)(*plVar1 + 0x18));
  (*extraout_x8)();
  __ZNSt13exception_ptrD1Ev(auStack_28);
  return;
}



/* Entry: 1074f41f8; end: 1074f4473;  */

void FUN_1074f41f8(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 extraout_w8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x9;
  undefined1 *unaff_x19;
  long *plVar7;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  long unaff_x22;
  long lVar8;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar6 = param_4;
    puVar5 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x23 = puVar5;
    func_0x0001074fe570(param_1);
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    lVar8 = *(long *)(unaff_x23 + 8);
    func_0x00010784b468((undefined1 *)((long)register0x00000008 + -0xc0),param_3);
    unaff_x22 = lVar8 + 0x10;
    func_0x0001072bb3b4();
    puVar2 = (undefined1 *)((long)register0x00000008 + -0xc0);
    puVar4 = unaff_x23;
    func_0x0001005d466c();
    *(long *)((long)register0x00000008 + -0x130) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x128) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x120) = puVar2;
    *(undefined1 **)((long)register0x00000008 + -0x118) = puVar4;
    func_0x0001003a91d4(&UNK_10f415db4);
    func_0x0001003a9204((undefined1 *)((long)register0x00000008 + -0xa8));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0xc0));
    *(undefined4 *)((long)register0x00000008 + -0x130) = 0x75;
    *(undefined4 *)((long)register0x00000008 + -0x118) = 0;
    func_0x0001074fecd8();
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(long *)((long)register0x00000008 + -0x110) = extraout_x9 + 0x10;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xf0) = extraout_w8;
    *(undefined4 *)((long)register0x00000008 + -0xe8) = 0;
    *(undefined1 *)((long)register0x00000008 + -0xe4) = 1;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    func_0x000104c2fe00((undefined1 *)((long)register0x00000008 + -0x80),
                        *(long *)(puVar5 + 8) + 0x10);
    FUN_107371bc4((undefined1 *)((long)register0x00000008 + -0x130),"source",
                  (undefined1 *)((long)register0x00000008 + -0x80));
    func_0x000104c2f714((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x0001074ff860((undefined1 *)((long)register0x00000008 + -0x148));
    func_0x00010726e300((undefined1 *)((long)register0x00000008 + -0x130),"error",
                        (undefined1 *)((long)register0x00000008 + -0x148));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0x148));
    puVar3 = *(undefined8 **)(unaff_x19 + 0x18);
    *(undefined4 *)((long)register0x00000008 + -0xc0) = 1;
    *(undefined4 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = *puVar3;
    *(undefined4 *)((long)register0x00000008 + -0x88) = 3;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x130);
    param_3 = (undefined1 *)((long)register0x00000008 + -0xc0);
    param_4 = (undefined1 *)((long)register0x00000008 + -0x90);
    FUN_10743fa9c();
    uVar1 = puVar6[0x20] == '\x01';
    if ((bool)uVar1) {
      __ZNSt13exception_ptrC1ERKS_((undefined1 *)((long)register0x00000008 + -0x150),puVar6 + 0x18);
    }
    else {
      puVar4 = (undefined1 *)((long)register0x00000008 + -0xa8);
      func_0x0001005d466c();
      *(undefined1 **)((long)register0x00000008 + -0x90) = puVar4;
      *(undefined1 **)((long)register0x00000008 + -0x88) = puVar2;
      func_0x0001003a91d4(&UNK_10f415dbc);
      param_4 = (undefined1 *)((long)register0x00000008 + -0x90);
      param_3 = (undefined1 *)0xd;
      func_0x0001003a9204((undefined1 *)((long)register0x00000008 + -0xc0));
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                ((undefined1 *)((long)register0x00000008 + -0x160),
                 (undefined1 *)((long)register0x00000008 + -0xc0));
      func_0x0001052b2bd0((undefined1 *)((long)register0x00000008 + -0x150),
                          (undefined1 *)((long)register0x00000008 + -0x160));
      __ZNSt13runtime_errorD1Ev((undefined1 *)((long)register0x00000008 + -0x160));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((undefined1 *)((long)register0x00000008 + -0xc0));
    }
    plVar7 = *(long **)(unaff_x19 + 0x30);
    param_2 = (undefined1 *)((long)register0x00000008 + -0x150);
    __ZNSt13exception_ptrC1ERKS_((undefined1 *)((long)register0x00000008 + -0x168));
    func_0x0001074fec24(*(undefined8 *)(*plVar7 + 0x18));
    (*extraout_x8_00)();
    __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x168));
    __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x150));
    func_0x000107262330((undefined1 *)((long)register0x00000008 + -0x130));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0xa8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001074fe49c(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0xc0));
    func_0x000107262330((undefined1 *)((long)register0x00000008 + -0x130));
    param_1 = (undefined1 *)((long)register0x00000008 + -0xa8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    unaff_x30 = FUN_1074f4474;
    func_0x0001074fe8f4();
    param_1 = param_1 + -0x10;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x170);
    unaff_x20 = puVar6;
    unaff_x21 = puVar5;
  }
  return;
}



/* Entry: 1074f4474; end: 1074f44a3;  */

void FUN_1074f4474(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 extraout_w8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x9;
  long *plVar7;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  long lVar8;
  long unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar6 = param_4;
    puVar5 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x23 = puVar5;
    func_0x0001074fe570(param_1 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    lVar8 = *(long *)(unaff_x23 + 8);
    func_0x00010784b468((undefined1 *)((long)register0x00000008 + -0xc0),param_3);
    unaff_x22 = lVar8 + 0x10;
    func_0x0001072bb3b4();
    puVar2 = (undefined1 *)((long)register0x00000008 + -0xc0);
    puVar4 = unaff_x23;
    func_0x0001005d466c();
    *(long *)((long)register0x00000008 + -0x130) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x128) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x120) = puVar2;
    *(undefined1 **)((long)register0x00000008 + -0x118) = puVar4;
    func_0x0001003a91d4(&UNK_10f415db4);
    func_0x0001003a9204((undefined1 *)((long)register0x00000008 + -0xa8));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0xc0));
    *(undefined4 *)((long)register0x00000008 + -0x130) = 0x75;
    *(undefined4 *)((long)register0x00000008 + -0x118) = 0;
    func_0x0001074fecd8();
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(long *)((long)register0x00000008 + -0x110) = extraout_x9 + 0x10;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xf0) = extraout_w8;
    *(undefined4 *)((long)register0x00000008 + -0xe8) = 0;
    *(undefined1 *)((long)register0x00000008 + -0xe4) = 1;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    func_0x000104c2fe00((undefined1 *)((long)register0x00000008 + -0x80),
                        *(long *)(puVar5 + 8) + 0x10);
    FUN_107371bc4((undefined1 *)((long)register0x00000008 + -0x130),"source",
                  (undefined1 *)((long)register0x00000008 + -0x80));
    func_0x000104c2f714((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x0001074ff860((undefined1 *)((long)register0x00000008 + -0x148));
    func_0x00010726e300((undefined1 *)((long)register0x00000008 + -0x130),"error",
                        (undefined1 *)((long)register0x00000008 + -0x148));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0x148));
    puVar3 = *(undefined8 **)(unaff_x19 + 0x18);
    *(undefined4 *)((long)register0x00000008 + -0xc0) = 1;
    *(undefined4 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = *puVar3;
    *(undefined4 *)((long)register0x00000008 + -0x88) = 3;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x130);
    param_3 = (undefined1 *)((long)register0x00000008 + -0xc0);
    param_4 = (undefined1 *)((long)register0x00000008 + -0x90);
    FUN_10743fa9c();
    uVar1 = puVar6[0x20] == '\x01';
    if ((bool)uVar1) {
      __ZNSt13exception_ptrC1ERKS_((undefined1 *)((long)register0x00000008 + -0x150),puVar6 + 0x18);
    }
    else {
      puVar4 = (undefined1 *)((long)register0x00000008 + -0xa8);
      func_0x0001005d466c();
      *(undefined1 **)((long)register0x00000008 + -0x90) = puVar4;
      *(undefined1 **)((long)register0x00000008 + -0x88) = puVar2;
      func_0x0001003a91d4(&UNK_10f415dbc);
      param_4 = (undefined1 *)((long)register0x00000008 + -0x90);
      param_3 = (undefined1 *)0xd;
      func_0x0001003a9204((undefined1 *)((long)register0x00000008 + -0xc0));
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                ((undefined1 *)((long)register0x00000008 + -0x160),
                 (undefined1 *)((long)register0x00000008 + -0xc0));
      func_0x0001052b2bd0((undefined1 *)((long)register0x00000008 + -0x150),
                          (undefined1 *)((long)register0x00000008 + -0x160));
      __ZNSt13runtime_errorD1Ev((undefined1 *)((long)register0x00000008 + -0x160));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((undefined1 *)((long)register0x00000008 + -0xc0));
    }
    plVar7 = *(long **)(unaff_x19 + 0x30);
    param_2 = (undefined1 *)((long)register0x00000008 + -0x150);
    __ZNSt13exception_ptrC1ERKS_((undefined1 *)((long)register0x00000008 + -0x168));
    func_0x0001074fec24(*(undefined8 *)(*plVar7 + 0x18));
    (*extraout_x8_00)();
    __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x168));
    __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x150));
    func_0x000107262330((undefined1 *)((long)register0x00000008 + -0x130));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0xa8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001074fe49c(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0xc0));
    func_0x000107262330((undefined1 *)((long)register0x00000008 + -0x130));
    param_1 = (undefined1 *)((long)register0x00000008 + -0xa8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    unaff_x30 = FUN_1074f4474;
    func_0x0001074fe8f4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x170);
    unaff_x20 = puVar6;
    unaff_x21 = puVar5;
  }
  return;
}



/* Entry: 1074f44a4; end: 1074f454b;  */

void FUN_1074f44a4(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 extraout_w8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x9;
  long *plVar7;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  long lVar8;
  long unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 *apuStack_70 [2];
  char cStack_59;
  undefined1 auStack_58 [24];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001074fe8ac();
  FUN_1074f146c();
  puVar6 = unaff_x19;
  puVar4 = unaff_x20;
  if (param_1 == (undefined1 *)0x0) {
    func_0x00010724ef84(apuStack_70);
    puStack_40 = apuStack_70[0];
    if (-1 < cStack_59) {
      puStack_40 = (undefined1 *)apuStack_70;
    }
    uStack_38 = 0;
    func_0x0001003a91d4(&UNK_10f415dd3);
    func_0x0001003a9204(auStack_58);
    func_0x0001074fee50();
    func_0x0001074ff7c4();
    return;
  }
  while( true ) {
    puVar5 = puVar6;
    puVar3 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x23 = puVar3;
    func_0x0001074fe570();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    lVar8 = *(long *)(unaff_x23 + 8);
    func_0x00010784b468((undefined1 *)((long)register0x00000008 + -0xc0),unaff_x20);
    unaff_x22 = lVar8 + 0x10;
    func_0x0001072bb3b4();
    puVar6 = (undefined1 *)((long)register0x00000008 + -0xc0);
    puVar4 = unaff_x23;
    func_0x0001005d466c();
    *(long *)((long)register0x00000008 + -0x130) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x128) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x120) = puVar6;
    *(undefined1 **)((long)register0x00000008 + -0x118) = puVar4;
    func_0x0001003a91d4(&UNK_10f415db4);
    func_0x0001003a9204((undefined1 *)((long)register0x00000008 + -0xa8));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0xc0));
    *(undefined4 *)((long)register0x00000008 + -0x130) = 0x75;
    *(undefined4 *)((long)register0x00000008 + -0x118) = 0;
    func_0x0001074fecd8();
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(long *)((long)register0x00000008 + -0x110) = extraout_x9 + 0x10;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xf0) = extraout_w8;
    *(undefined4 *)((long)register0x00000008 + -0xe8) = 0;
    *(undefined1 *)((long)register0x00000008 + -0xe4) = 1;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    func_0x000104c2fe00((undefined1 *)((long)register0x00000008 + -0x80),
                        *(long *)(puVar3 + 8) + 0x10);
    FUN_107371bc4((undefined1 *)((long)register0x00000008 + -0x130),"source",
                  (undefined1 *)((long)register0x00000008 + -0x80));
    func_0x000104c2f714((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x0001074ff860((undefined1 *)((long)register0x00000008 + -0x148));
    func_0x00010726e300((undefined1 *)((long)register0x00000008 + -0x130),"error",
                        (undefined1 *)((long)register0x00000008 + -0x148));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0x148));
    puVar2 = *(undefined8 **)(unaff_x19 + 0x18);
    *(undefined4 *)((long)register0x00000008 + -0xc0) = 1;
    *(undefined4 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = *puVar2;
    *(undefined4 *)((long)register0x00000008 + -0x88) = 3;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x130);
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0xc0);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x90);
    FUN_10743fa9c();
    uVar1 = puVar5[0x20] == '\x01';
    if ((bool)uVar1) {
      __ZNSt13exception_ptrC1ERKS_((undefined1 *)((long)register0x00000008 + -0x150),puVar5 + 0x18);
    }
    else {
      puVar6 = (undefined1 *)((long)register0x00000008 + -0xa8);
      func_0x0001005d466c();
      *(undefined1 **)((long)register0x00000008 + -0x90) = puVar6;
      *(undefined1 **)((long)register0x00000008 + -0x88) = puVar4;
      func_0x0001003a91d4(&UNK_10f415dbc);
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x90);
      unaff_x20 = (undefined1 *)0xd;
      func_0x0001003a9204((undefined1 *)((long)register0x00000008 + -0xc0));
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                ((undefined1 *)((long)register0x00000008 + -0x160),
                 (undefined1 *)((long)register0x00000008 + -0xc0));
      func_0x0001052b2bd0((undefined1 *)((long)register0x00000008 + -0x150),
                          (undefined1 *)((long)register0x00000008 + -0x160));
      __ZNSt13runtime_errorD1Ev((undefined1 *)((long)register0x00000008 + -0x160));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((undefined1 *)((long)register0x00000008 + -0xc0));
    }
    plVar7 = *(long **)(unaff_x19 + 0x30);
    param_1 = (undefined1 *)((long)register0x00000008 + -0x150);
    __ZNSt13exception_ptrC1ERKS_((undefined1 *)((long)register0x00000008 + -0x168));
    func_0x0001074fec24(*(undefined8 *)(*plVar7 + 0x18));
    (*extraout_x8_00)();
    __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x168));
    __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x150));
    func_0x000107262330((undefined1 *)((long)register0x00000008 + -0x130));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0xa8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001074fe49c(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0xc0));
    func_0x000107262330((undefined1 *)((long)register0x00000008 + -0x130));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0xa8));
    unaff_x30 = FUN_1074f4474;
    func_0x0001074fe8f4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x170);
    puVar4 = puVar5;
    unaff_x21 = puVar3;
  }
  return;
}



/* Entry: 1074f454c; end: 1074f4557;  */

void FUN_1074f454c(undefined1 *param_1,long param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  long lStack_1f8;
  undefined1 auStack_1e8 [16];
  undefined4 uStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined4 uStack_1c0;
  byte bStack_40;
  undefined8 uStack_38;
  
  func_0x000107479adc(*(undefined8 *)(param_2 + 0xf58));
  uStack_38 = extraout_x8;
  func_0x000107262e9c(auStack_1e8);
  func_0x00010747a450();
  func_0x00010747a400();
  uVar2 = bStack_40 == 1;
  if ((bool)uVar2) {
    uStack_1d8 = 0;
    uStack_1c0 = 0;
    func_0x00010747a180();
    FUN_107476d6c(auStack_1e8,lStack_1f8 + 0x2c0);
    func_0x000107479fd4();
    if ((bStack_40 & 1) == 0) goto LAB_10746e89c;
    func_0x00010747a180();
    FUN_107476d6c(auStack_1d0,lStack_1f8 + 0x2d8);
    func_0x000107479fd4();
    FUN_107471538(param_1,auStack_1e8);
    FUN_1073ebecc(auStack_1e8);
  }
  else {
    *param_1 = 0;
    param_1[0x30] = 0;
  }
  func_0x00010747a548();
  func_0x000107479a9c(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_10746e89c:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10746e8a4);
  (*pcVar1)();
}



/* Entry: 1074f4558; end: 1074f4563;  */

void FUN_1074f4558(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  func_0x0001074fe6bc();
  uVar2 = param_2 + 7U & 0xfffffffffffffff8;
  plVar1 = (long *)(param_1 + 0x100000);
  if ((ulong)((long)plVar1 - *plVar1) < uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2);
    return;
  }
  *plVar1 = *plVar1 + uVar2;
  return;
}



/* Entry: 1074f4564; end: 1074f4593;  */

void FUN_1074f4564(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = param_2 + 7U & 0xfffffffffffffff8;
  plVar1 = (long *)(param_1 + 0x100000);
  if ((ulong)((long)plVar1 - *plVar1) < uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2);
    return;
  }
  *plVar1 = *plVar1 + uVar2;
  return;
}



/* Entry: 1074f4594; end: 1074f459f;  */

void FUN_1074f4594(void)

{
  func_0x0001074fe6bc();
  FUN_1074f45c0();
  return;
}



/* Entry: 1074f45a0; end: 1074f45bf;  */

void FUN_1074f45a0(void)

{
  FUN_1074f45c0();
  return;
}



/* Entry: 1074f45c0; end: 1074f45cb;  */

void FUN_1074f45c0(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = param_2 * 8;
  plVar1 = (long *)(*param_1 + 0x100000);
  if ((ulong)((long)plVar1 - *plVar1) < uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(uVar2);
    return;
  }
  *plVar1 = *plVar1 + uVar2;
  return;
}



/* Entry: 1074f45cc; end: 1074f45f7;  */

long FUN_1074f45cc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1074f45f8(param_1);
  }
  return param_1;
}



/* Entry: 1074f45f8; end: 1074f4667;  */

void FUN_1074f45f8(undefined8 *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  
  param_1 = (undefined8 *)*param_1;
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    return;
  }
  param_1[1] = puVar2;
  puVar1 = (ulong *)param_1[3] + 0x20000;
  if (puVar2 < (ulong *)param_1[3] || puVar1 < puVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar2);
    return;
  }
  if (puVar2 + (param_1[2] - (long)puVar2 >> 3) != (ulong *)*puVar1) {
    return;
  }
  *puVar1 = (ulong)puVar2;
  return;
}



/* Entry: 1074f4668; end: 1074f471f;  */

void FUN_1074f4668(void)

{
  func_0x0001074fe834();
  FUN_1074f45f8();
  return;
}



/* Entry: 1074f4720; end: 1074f472b;  */

void FUN_1074f4720(ulong *param_1,ulong *param_2,long param_3)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)*param_1 + 0x20000;
  if (param_2 < (ulong *)*param_1 || puVar1 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  if (param_2 + param_3 * 4 != (ulong *)*puVar1) {
    return;
  }
  *puVar1 = (ulong)param_2;
  return;
}



/* Entry: 1074f472c; end: 1074f475f;  */

void FUN_1074f472c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074fe980();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    FUN_1074f4668();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074f4760; end: 1074f476b;  */

void FUN_1074f4760(long *param_1,long param_2)

{
  func_0x0001074fe6bc();
  func_0x0001074fe980();
  FUN_1074f4814(param_1 + 3,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x28) * 0x28);
  func_0x0001074fe430();
  return;
}



/* Entry: 1074f476c; end: 1074f47af;  */

void FUN_1074f476c(long *param_1,long param_2)

{
  func_0x0001074fe980();
  FUN_1074f4814(param_1 + 3,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x28) * 0x28);
  func_0x0001074fe430();
  return;
}



/* Entry: 1074f47b0; end: 1074f4803;  */

void FUN_1074f47b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001074ff464();
  if (param_2 != 0) {
    func_0x0001074f47e4(param_4);
  }
  func_0x0001074ff524(0x28);
  return;
}


