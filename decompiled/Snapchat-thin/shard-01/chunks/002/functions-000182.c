/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e35b74; end: 100e35c1f; -[SCPasskeyEnrollmentEntryPoint setValue:forIvarName:] */

void FUN_100e35b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100e3575c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e35c20; end: 100e35d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e35c20(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d3ad20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3ad28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3ad30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3ad38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3ad40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3ad48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3ad50,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d3ad58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d3ad60) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e35d04; end: 100e35d23; -[SCPasskeyEnrollmentEntryPoint init] */

void FUN_100e35d04(void)

{
  FUN_100e35c20();
  return;
}



/* Entry: 100e35d24; end: 100e35d57;  */

void FUN_100e35d24(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e35d58; end: 100e35dff; -[SCPasskeyEnrollmentEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e35d58(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d3ad20);
  func_0x000107c61610(param_1 + _DAT_112d3ad28);
  func_0x000107c61610(param_1 + _DAT_112d3ad30);
  func_0x000107c61610(param_1 + _DAT_112d3ad38);
  func_0x000107c61610(param_1 + _DAT_112d3ad40);
  func_0x000107c61610(param_1 + _DAT_112d3ad48);
  func_0x000107c61610(param_1 + _DAT_112d3ad50);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3ad58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d3ad60));
  return;
}



/* Entry: 100e35e00; end: 100e35e1f;  */

void FUN_100e35e00(void)

{
  func_0x000107c61168(&PTR_PTR_11279ac00);
  return;
}



/* Entry: 100e35e20; end: 100e35e2f;  */

void FUN_100e35e20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 100e35e30; end: 100e365ff;  */

undefined1  [16] FUN_100e35e30(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  undefined6 *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  code cVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined6 uStack_f0;
  undefined2 uStack_ea;
  undefined6 uStack_e8;
  undefined2 uStack_e2;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined6 uStack_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 uStack_92;
  ulong *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = (undefined6)param_1;
  uStack_ea = (undefined2)(param_1 >> 0x30);
  uStack_e8 = (undefined6)param_2;
  uStack_e2 = (undefined2)(param_2 >> 0x30);
  uStack_e0 = param_1;
  uStack_d8 = param_2;
  func_0x000107c61434(param_2);
  uVar3 = 0x112d3ae30;
  func_0x0001000285a8(0x112d3ae30,&UNK_10d904770);
  puVar4 = &uStack_d0;
  puVar6 = PTR___sSS8UTF8ViewVN_11034da18;
  func_0x000107c6147c(puVar4,&uStack_f0,PTR___sSS8UTF8ViewVN_11034da18,uVar3,6);
  if ((int)puVar4 != 0) {
    func_0x000100e37768(&uStack_d0,&uStack_a0);
    func_0x0001000a8868(&uStack_a0,uStack_88);
    func_0x000107c5ec8c(&uStack_d0,&UNK_1004497b8,0,
                        PTR___s10Foundation4DataV15_RepresentationON_110350a40,uStack_88,uStack_80);
    func_0x000100e37780(&uStack_a0);
    uVar10 = uStack_d0;
    uVar8 = uStack_c8;
    goto LAB_100e3625c;
  }
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  func_0x000100e376f4(&uStack_d0);
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if ((param_1 >> 0x3c & 1) == 0) {
        uVar10 = param_1;
        uVar8 = param_2;
        func_0x000107c60358();
      }
      else {
        uVar10 = (param_2 & 0xfffffffffffffff) + 0x20;
        uVar8 = param_1 & 0xffffffffffff;
      }
      uVar14 = 0;
      if (uVar10 != 0) {
        uVar14 = uVar8 + uVar10;
      }
      FUN_100e37074();
      uVar8 = uVar14;
    }
    else {
      uVar14 = param_2 >> 0x38 & 0xf;
      uStack_c8 = param_2 & 0xffffffffffffff;
      uStack_d0 = param_1;
      FUN_100e36614(&uStack_a0,&uStack_d0);
      uVar10 = CONCAT26(uStack_9a,uStack_a0);
      uVar8 = CONCAT26(uStack_92,uStack_98);
    }
    if (uVar8 >> 0x3c < 0xf) goto LAB_100e3625c;
    param_1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      param_1 = param_2 >> 0x38 & 0xf;
    }
  }
  else {
    uVar14 = param_2;
    func_0x000107c5fb8c();
    uVar10 = 0;
    uVar8 = 0xf000000000000000;
  }
  FUN_100e370d8();
  puStack_90 = &uStack_e0;
  pcVar2 = FUN_100e3773c;
  puVar9 = &uStack_a0;
  uStack_d0 = param_1;
  uStack_c8 = uVar14;
  FUN_100e366e0();
  uVar11 = (uint)(uStack_c8 >> 0x20);
  uVar12 = uVar11 >> 0x1e;
  if (uVar11 >> 0x1e < 2) {
    if (uVar12 == 0) {
      uVar14 = uStack_c8 >> 0x30 & 0xff;
    }
    else {
      iVar13 = (int)(uStack_d0 >> 0x20);
      if (SBORROW4(iVar13,(int)uStack_d0)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100e362fc);
        (*pcVar2)();
      }
      uVar14 = (ulong)(iVar13 - (int)uStack_d0);
    }
    if (uVar3 == uVar14) goto LAB_100e36044;
LAB_100e36020:
    if (uVar12 == 2) {
      uVar10 = *(ulong *)(uStack_d0 + 0x18);
    }
    else if (uVar12 == 1) {
      uVar10 = (long)uStack_d0 >> 0x20;
    }
    else {
      uVar10 = uStack_c8 >> 0x30 & 0xff;
    }
LAB_100e36238:
    if ((long)uVar10 < (long)uVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100e362f4);
      (*pcVar2)();
    }
    func_0x000107c5ee10(uVar3,uVar10,0,0);
LAB_100e36254:
    func_0x000107c6142c(puVar9);
    uVar10 = uStack_d0;
    uVar8 = uStack_c8;
  }
  else {
    if (uVar12 == 2) {
      if (SBORROW8(*(long *)(uStack_d0 + 0x18),*(long *)(uStack_d0 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100e362f8);
        (*pcVar2)();
      }
      if (uVar3 != *(long *)(uStack_d0 + 0x18) - *(long *)(uStack_d0 + 0x10)) goto LAB_100e36020;
    }
    else if (uVar3 != 0) {
      uVar10 = 0;
      goto LAB_100e36238;
    }
LAB_100e36044:
    uVar3 = (ulong)pcVar2 & 0xffffffffffff;
    if (((ulong)puVar9 & 0x2000000000000000) != 0) {
      uVar3 = (ulong)puVar9 >> 0x38 & 0xf;
    }
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_ea = 0;
    if (uVar3 * 4 - ((ulong)puVar6 >> 0xe) != 0) {
      uVar14 = 0;
      uVar11 = (uint)((ulong)pcVar2 >> 0x3b) & 1;
      if (((ulong)puVar9 & 0x1000000000000000) == 0) {
        uVar11 = 1;
      }
      uVar17 = 4L << uVar11;
      do {
        uVar18 = (ulong)puVar6 & 0xc;
        puVar5 = puVar6;
        if (uVar18 == uVar17) {
          FUN_100e36e7c(puVar6,pcVar2,puVar9);
        }
        uVar16 = (ulong)puVar5 >> 0x10;
        if (uVar3 <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100e362c0);
          (*pcVar2)();
        }
        if (((ulong)puVar9 >> 0x3c & 1) == 0) {
          if (((ulong)puVar9 >> 0x3d & 1) != 0) {
            uStack_a0 = SUB86(pcVar2,0);
            uStack_9a = (undefined2)((ulong)pcVar2 >> 0x30);
            uStack_98 = (undefined6)((ulong)puVar9 & 0xffffffffffffff);
            uStack_92 = (undefined2)(((ulong)puVar9 & 0xffffffffffffff) >> 0x30);
            cVar15 = *(code *)((long)&uStack_a0 + uVar16);
            goto joined_r0x000100e36138;
          }
          pcVar7 = (code *)(((ulong)puVar9 & 0xfffffffffffffff) + 0x20);
          if (((ulong)pcVar2 >> 0x3c & 1) == 0) {
            pcVar7 = pcVar2;
            func_0x000107c60358(pcVar2,puVar9);
          }
          cVar15 = pcVar7[uVar16];
          if (uVar18 != uVar17) goto LAB_100e360f8;
LAB_100e3613c:
          FUN_100e36e7c(puVar6,pcVar2,puVar9);
          if (((ulong)puVar9 >> 0x3c & 1) != 0) goto LAB_100e36154;
LAB_100e360fc:
          puVar6 = (undefined *)(((ulong)puVar6 & 0xffffffffffff0000) + 0x10004);
        }
        else {
          func_0x000107c5fb9c();
          cVar15 = SUB81(puVar5,0);
joined_r0x000100e36138:
          if (uVar18 == uVar17) goto LAB_100e3613c;
LAB_100e360f8:
          if (((ulong)puVar9 >> 0x3c & 1) == 0) goto LAB_100e360fc;
LAB_100e36154:
          if (uVar3 <= (ulong)puVar6 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100e362c8);
            (*pcVar2)();
          }
          func_0x000107c5fb90(puVar6,pcVar2,puVar9);
        }
        *(code *)((long)&uStack_f0 + (uVar14 & 0xff)) = cVar15;
        uVar11 = ((uint)uVar14 & 0xff) + 1;
        uVar14 = (ulong)uVar11;
        if ((uVar11 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100e362c4);
          (*pcVar2)();
        }
        if ((uVar11 & 0xff) == 0xe) {
          uStack_a0 = uStack_f0;
          uStack_9a = uStack_ea;
          uStack_98 = uStack_e8;
          func_0x000107c5ee14(&uStack_a0,&uStack_92);
          uVar14 = 0;
        }
      } while (uVar3 * 4 - ((ulong)puVar6 >> 0xe) != 0);
      if ((uVar14 & 0xff) != 0) {
        uStack_a0 = uStack_f0;
        uStack_9a = uStack_ea;
        uStack_98 = uStack_e8;
        func_0x000107c5ee14(&uStack_a0,(long)&uStack_a0 + (uVar14 & 0xff));
        func_0x000100e37754(uVar10,uVar8);
        goto LAB_100e36254;
      }
    }
    func_0x000107c6142c(puVar9);
    func_0x000100e37754(uVar10,uVar8);
    uVar10 = uStack_d0;
    uVar8 = uStack_c8;
  }
LAB_100e3625c:
  uStack_c8 = uVar8;
  uStack_d0 = uVar10;
  uVar3 = uStack_c8;
  auVar1._8_8_ = uStack_c8;
  auVar1._0_8_ = uStack_d0;
  func_0x00010006c00c(uStack_d0,uStack_c8);
  func_0x000107c6142c(param_2);
  func_0x00010006c090(uStack_d0,uStack_c8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return auVar1;
  }
  func_0x000107c60e78();
  func_0x000107c614ac(uVar3);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100e3630c);
  (*pcVar2)();
}



/* Entry: 100e36600; end: 100e36613;  */

void FUN_100e36600(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e36614; end: 100e366df;  */

void FUN_100e36614(ulong *param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = param_2;
  if (param_2 != 0) {
    if (param_3 != 0) {
      if (param_3 < 0xf) {
        param_3 = param_3 + param_2;
        FUN_100e36f4c();
        param_3 = param_3 & 0xffffffffffffff;
        uVar2 = param_2;
      }
      else {
        uVar1 = 0;
        func_0x000107c5ec40();
        func_0x000107c613fc();
        func_0x000107c5ec2c(param_2,param_3,uVar1);
        if (param_3 < 0x7fffffff) {
          uVar2 = param_3 << 0x20;
          param_3 = param_2 | 0x4000000000000000;
        }
        else {
          uVar2 = 0;
          func_0x000107c5ee0c();
          func_0x000107c613fc();
          *(undefined8 *)(uVar2 + 0x10) = 0;
          *(ulong *)(uVar2 + 0x18) = param_3;
          param_3 = param_2 | 0x8000000000000000;
        }
      }
      goto LAB_100e3665c;
    }
    uVar2 = 0;
  }
  param_3 = 0xc000000000000000;
LAB_100e3665c:
  *param_1 = uVar2;
  param_1[1] = param_3;
  return;
}



/* Entry: 100e366e0; end: 100e36a77;  */

void FUN_100e366e0(code *param_1,long *param_2,code *param_3,long *param_4)

{
  byte *pbVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long *unaff_x20;
  byte *pbVar12;
  long unaff_x21;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbStack_98;
  byte *pbStack_90;
  code *pcStack_88;
  long *plStack_80;
  byte abStack_78 [16];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar1 = (byte *)*unaff_x20;
  uVar11 = unaff_x20[1];
  uVar2 = (uint)(uVar11 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar10 == 0) {
      func_0x00010006c090(pbVar1,uVar11);
      abStack_78[0] = (byte)pbVar1;
      abStack_78[1] = (byte)((ulong)pbVar1 >> 8);
      abStack_78[2] = (byte)((ulong)pbVar1 >> 0x10);
      abStack_78[3] = (byte)((ulong)pbVar1 >> 0x18);
      abStack_78[4] = (byte)((ulong)pbVar1 >> 0x20);
      abStack_78[5] = (byte)((ulong)pbVar1 >> 0x28);
      abStack_78[6] = (byte)((ulong)pbVar1 >> 0x30);
      abStack_78[7] = (byte)((ulong)pbVar1 >> 0x38);
      abStack_78[8] = (byte)uVar11;
      abStack_78[9] = (byte)(uVar11 >> 8);
      abStack_78[10] = (byte)(uVar11 >> 0x10);
      abStack_78[0xb] = (byte)(uVar11 >> 0x18);
      abStack_78[0xc] = (byte)(uVar11 >> 0x20);
      abStack_78[0xd] = (byte)(uVar11 >> 0x28);
      abStack_78[0xe] = (byte)(uVar11 >> 0x30);
      pbVar6 = abStack_78 + abStack_78[0xe];
      pbVar13 = abStack_78;
      (*param_1)(&pbStack_98,pbVar13,pbVar6);
      if (unaff_x21 == 0) {
        *unaff_x20 = CONCAT17(abStack_78[7],
                              CONCAT16(abStack_78[6],
                                       CONCAT15(abStack_78[5],
                                                CONCAT14(abStack_78[4],
                                                         CONCAT13(abStack_78[3],
                                                                  CONCAT12(abStack_78[2],
                                                                           CONCAT11(abStack_78[1],
                                                                                    abStack_78[0])))
                                                        ))));
        unaff_x20[1] = (ulong)CONCAT16(abStack_78[0xe],
                                       CONCAT15(abStack_78[0xd],
                                                CONCAT14(abStack_78[0xc],
                                                         CONCAT13(abStack_78[0xb],
                                                                  CONCAT12(abStack_78[10],
                                                                           CONCAT11(abStack_78[9],
                                                                                    abStack_78[8])))
                                                        )));
        pbVar13 = pbStack_98;
        pbVar6 = pbStack_90;
        param_3 = pcStack_88;
        param_4 = plStack_80;
      }
      else {
        *unaff_x20 = CONCAT17(abStack_78[7],
                              CONCAT16(abStack_78[6],
                                       CONCAT15(abStack_78[5],
                                                CONCAT14(abStack_78[4],
                                                         CONCAT13(abStack_78[3],
                                                                  CONCAT12(abStack_78[2],
                                                                           CONCAT11(abStack_78[1],
                                                                                    abStack_78[0])))
                                                        ))));
        unaff_x20[1] = (ulong)CONCAT16(abStack_78[0xe],
                                       CONCAT15(abStack_78[0xd],
                                                CONCAT14(abStack_78[0xc],
                                                         CONCAT13(abStack_78[0xb],
                                                                  CONCAT12(abStack_78[10],
                                                                           CONCAT11(abStack_78[9],
                                                                                    abStack_78[8])))
                                                        )));
      }
      goto LAB_100e36a18;
    }
    pbVar13 = (byte *)(uVar11 & 0x3fffffffffffffff);
    func_0x000107c6157c(pbVar13);
    func_0x00010006c090(pbVar1,uVar11);
    unaff_x20[1] = -0x4000000000000000;
    *unaff_x20 = 0;
    func_0x00010006c090(0,0xc000000000000000);
    pbVar6 = pbVar13;
    func_0x000107c61558();
    pbVar14 = (byte *)(long)(int)pbVar1;
    pbVar15 = (byte *)((long)pbVar1 >> 0x20);
    pbVar12 = pbVar13;
    if (((ulong)pbVar6 & 1) == 0) {
      if ((long)pbVar15 < (long)pbVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100e36a70);
        (*pcVar3)();
      }
      func_0x000107c6157c();
      func_0x000107c5ec30();
      if (pbVar12 == (byte *)0x0) {
        pbVar12 = (byte *)0x0;
      }
      else {
        pbVar6 = pbVar12;
        func_0x000107c5ec3c();
        if (SBORROW8((long)pbVar14,(long)pbVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100e36a74);
          (*pcVar3)();
        }
        pbVar12 = pbVar12 + ((long)pbVar14 - (long)pbVar6);
      }
      uVar7 = 0;
      func_0x000107c5ec40();
      func_0x000107c613fc();
      func_0x000107c5ec28(pbVar12,(long)pbVar15 - (long)pbVar14,1,0,0,pbVar14,uVar7);
      func_0x000107c61578(pbVar13,2);
    }
    if ((long)pbVar15 < (long)pbVar14) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100e36a6c);
      (*pcVar3)();
    }
    func_0x000107c6157c(pbVar12);
    FUN_100e36af0();
    pbVar13 = pbVar12;
    pbVar6 = pbVar15;
    pcVar3 = param_1;
    plVar9 = param_2;
    func_0x000107c61574(pbVar12);
    uVar11 = (ulong)pbVar12 | 0x4000000000000000;
    if (unaff_x21 == 0) {
      *unaff_x20 = (long)pbVar1;
      unaff_x20[1] = uVar11;
      pbVar13 = pbVar14;
      pbVar6 = pbVar15;
      param_3 = param_1;
      param_4 = param_2;
      goto LAB_100e36a18;
    }
    *unaff_x20 = (long)pbVar1;
    param_1 = pcVar3;
    param_2 = plVar9;
  }
  else {
    if (uVar10 != 2) {
      abStack_78[8] = 0;
      abStack_78[9] = 0;
      abStack_78[10] = 0;
      abStack_78[0xb] = 0;
      abStack_78[0xc] = 0;
      abStack_78[0xd] = 0;
      abStack_78[0] = 0;
      abStack_78[1] = 0;
      abStack_78[2] = 0;
      abStack_78[3] = 0;
      abStack_78[4] = 0;
      abStack_78[5] = 0;
      abStack_78[6] = 0;
      abStack_78[7] = 0;
      pbVar13 = abStack_78;
      pbVar6 = abStack_78;
      (*param_1)(&pbStack_98,pbVar13,pbVar6);
      if (unaff_x21 == 0) {
        pbVar13 = pbStack_98;
        pbVar6 = pbStack_90;
        param_3 = pcStack_88;
        param_4 = plStack_80;
      }
      goto LAB_100e36a18;
    }
    func_0x000107c6157c(pbVar1);
    func_0x000107c6157c((byte *)(uVar11 & 0x3fffffffffffffff));
    func_0x00010006c090(pbVar1,uVar11);
    unaff_x20[1] = -0x4000000000000000;
    *unaff_x20 = 0;
    pbStack_98 = pbVar1;
    pbStack_90 = (byte *)(uVar11 & 0x3fffffffffffffff);
    func_0x00010006c090(0,0xc000000000000000);
    func_0x000107c5ede4();
    pbVar12 = pbStack_90;
    pbVar1 = pbStack_98;
    pbVar13 = *(byte **)(pbStack_98 + 0x10);
    pbVar6 = *(byte **)(pbStack_98 + 0x18);
    FUN_100e36af0(pbVar13,pbVar6);
    uVar11 = (ulong)pbVar12 | 0x8000000000000000;
    if (unaff_x21 == 0) {
      *unaff_x20 = (long)pbVar1;
      unaff_x20[1] = uVar11;
      param_3 = param_1;
      param_4 = param_2;
      goto LAB_100e36a18;
    }
    *unaff_x20 = (long)pbVar1;
  }
  unaff_x20[1] = uVar11;
  param_3 = param_1;
  param_4 = param_2;
LAB_100e36a18:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  iVar4 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar4 != 0) {
    lVar8 = 0;
    FUN_100e376b4(0,pbVar13,pbVar6);
    if (lVar8 != 0) {
      param_3 = (code *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*(ulong *)param_3 == 0 || (*(ulong *)param_3 & 1) != 0) {
    puVar5 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar5,*param_4 >> 0x20,0,0);
    *(undefined **)param_3 = puVar5;
  }
  return;
}



/* Entry: 100e36a78; end: 100e36aef;  */

void FUN_100e36a78(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100e376b4(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100e36af0; end: 100e36b9b;  */

void FUN_100e36af0(long param_1,long param_2,code *param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [32];
  
  lVar3 = param_1;
  func_0x000107c5ec30();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100e36b9c);
    (*pcVar2)();
  }
  lVar4 = lVar3;
  func_0x000107c5ec3c();
  lVar1 = param_1 - lVar4;
  if (!SBORROW8(param_1,lVar4)) {
    if (!SBORROW8(param_2,param_1)) {
      func_0x000107c5ec38();
      if (param_2 - param_1 <= lVar4) {
        lVar4 = param_2 - param_1;
      }
      lVar3 = lVar3 + lVar1;
      (*param_3)(auStack_70,lVar3,lVar3 + lVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100e36b98);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100e36b94);
  (*pcVar2)();
}



/* Entry: 100e36b9c; end: 100e36cc3;  */

ulong FUN_100e36b9c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e36cc4);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100e36cc4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e36cc0);
      (*pcVar1)();
    }
    FUN_100e36d64(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100e36cc4; end: 100e36d63;  */

undefined * FUN_100e36cc4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d3a1f8;
    FUN_100e36a78(0x112d3a1f8,
                  &PTR__OBJC_CLASS___ASAuthorizationPlatformPublicKeyCredentialDescriptor_1126a5dc8,
                  0x112d3a210,&UNK_10d903bd0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100e36d64; end: 100e36e7b;  */

long FUN_100e36d64(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100e36e78);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100e36e7c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_100e376b4(0,0x112d3a1f8,
                    &
                    PTR__OBJC_CLASS___ASAuthorizationPlatformPublicKeyCredentialDescriptor_1126a5dc8
                   );
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_100e376b4(0,0x112d3a1f8,
                    &
                    PTR__OBJC_CLASS___ASAuthorizationPlatformPublicKeyCredentialDescriptor_1126a5dc8
                   );
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100e36e74);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 100e36e7c; end: 100e36f4b;  */

ulong FUN_100e36e7c(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1 >> 0xe & 3;
  if (((param_3 >> 0x3c & 1) == 0) || ((param_2 >> 0x3b & 1) != 0)) {
    uVar1 = 0xf;
    func_0x000107c5fbb0(0xf,param_1 >> 0x10);
    uVar2 = uVar1 + uVar3 * 0x10000 & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = uVar1 & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 4;
  }
  else {
    uVar1 = 0xf;
    func_0x000107c5fb94(0xf);
    uVar2 = uVar1 + uVar3 * 0x10000 & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = uVar1 & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}



/* Entry: 100e36f4c; end: 100e36fff;  */

void FUN_100e36f4c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lStack_28;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = param_2 - param_1;
  }
  if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100e36ff8);
    (*pcVar3)();
  }
  if (0xff < uVar1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100e36ffc);
    (*pcVar3)();
  }
  lStack_28 = 0;
  uStack_1a = (undefined1)uVar1;
  uStack_1c = 0;
  uStack_20 = 0;
  if ((param_1 != 0) && (param_2 != param_1)) {
    func_0x000107c610b4(&lStack_28);
    param_2 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    lVar4 = lStack_28;
    func_0x000107c60e78();
    lVar2 = 0;
    if (lVar4 != 0) {
      lVar2 = param_2 - lVar4;
    }
    func_0x000107c5ec40();
    func_0x000107c613fc();
    func_0x000107c5ec2c(lVar4,lVar2);
    lVar4 = 0;
    func_0x000107c5ee0c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(long *)(lVar4 + 0x18) = lVar2;
    return;
  }
  return;
}



/* Entry: 100e37000; end: 100e37073;  */

void FUN_100e37000(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_2 - param_1;
  }
  func_0x000107c5ec40();
  func_0x000107c613fc();
  func_0x000107c5ec2c(param_1,lVar1);
  lVar2 = 0;
  func_0x000107c5ee0c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(long *)(lVar2 + 0x18) = lVar1;
  return;
}



/* Entry: 100e37074; end: 100e370d7;  */

undefined1  [16] FUN_100e37074(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((param_1 == 0) || (param_2 == param_1)) {
    return ZEXT816(0xc000000000000000) << 0x40;
  }
  if (param_2 - param_1 < 0xf) {
    FUN_100e36f4c();
    auVar1._8_8_ = param_2 & 0xffffffffffffff;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  if (0x7ffffffe < param_2 - param_1) {
    FUN_100e37000();
    auVar3._8_8_ = param_2 | 0x8000000000000000;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  func_0x000100449844();
  auVar2._8_8_ = param_2 | 0x4000000000000000;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 100e370d8; end: 100e37173;  */

void FUN_100e370d8(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  
  if (param_1 != 0) {
    if ((long)param_1 < 0xf) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100e37174);
        (*pcVar1)();
      }
    }
    else {
      func_0x000107c5ec40();
      func_0x000107c613fc();
      func_0x000107c5ec34(param_1);
      if (0x7ffffffe < param_1) {
        lVar2 = 0;
        func_0x000107c5ee0c();
        func_0x000107c613fc();
        *(undefined8 *)(lVar2 + 0x10) = 0;
        *(ulong *)(lVar2 + 0x18) = param_1;
      }
    }
  }
  return;
}



/* Entry: 100e37174; end: 100e37693;  */

/* WARNING: Possible PIC construction at 0x000100e371e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e371fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e37258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e372a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e373c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e373d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e37404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3744c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e37478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e374c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3753c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e37624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3764c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e37348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e37650) */
/* WARNING: Removing unreachable block (ram,0x000100e37628) */
/* WARNING: Removing unreachable block (ram,0x000100e37540) */
/* WARNING: Removing unreachable block (ram,0x000100e3747c) */
/* WARNING: Removing unreachable block (ram,0x000100e37490) */
/* WARNING: Removing unreachable block (ram,0x000100e374c4) */
/* WARNING: Removing unreachable block (ram,0x000100e374dc) */
/* WARNING: Removing unreachable block (ram,0x000100e37544) */
/* WARNING: Removing unreachable block (ram,0x000100e3754c) */
/* WARNING: Removing unreachable block (ram,0x000100e374ec) */
/* WARNING: Removing unreachable block (ram,0x000100e37568) */
/* WARNING: Removing unreachable block (ram,0x000100e3756c) */
/* WARNING: Removing unreachable block (ram,0x000100e374f8) */
/* WARNING: Removing unreachable block (ram,0x000100e37498) */
/* WARNING: Removing unreachable block (ram,0x000100e37684) */
/* WARNING: Removing unreachable block (ram,0x000100e374ac) */
/* WARNING: Removing unreachable block (ram,0x000100e37408) */
/* WARNING: Removing unreachable block (ram,0x000100e3741c) */
/* WARNING: Removing unreachable block (ram,0x000100e37450) */
/* WARNING: Removing unreachable block (ram,0x000100e3767c) */
/* WARNING: Removing unreachable block (ram,0x000100e37464) */
/* WARNING: Removing unreachable block (ram,0x000100e37424) */
/* WARNING: Removing unreachable block (ram,0x000100e37680) */
/* WARNING: Removing unreachable block (ram,0x000100e37438) */
/* WARNING: Removing unreachable block (ram,0x000100e373dc) */
/* WARNING: Removing unreachable block (ram,0x000100e37678) */
/* WARNING: Removing unreachable block (ram,0x000100e373f0) */
/* WARNING: Removing unreachable block (ram,0x000100e373cc) */
/* WARNING: Removing unreachable block (ram,0x000100e372a8) */
/* WARNING: Removing unreachable block (ram,0x000100e3725c) */
/* WARNING: Removing unreachable block (ram,0x000100e37320) */
/* WARNING: Removing unreachable block (ram,0x000100e3768c) */
/* WARNING: Removing unreachable block (ram,0x000100e37334) */
/* WARNING: Removing unreachable block (ram,0x000100e37264) */
/* WARNING: Removing unreachable block (ram,0x000100e37658) */
/* WARNING: Removing unreachable block (ram,0x000100e3727c) */
/* WARNING: Removing unreachable block (ram,0x000100e37690) */
/* WARNING: Removing unreachable block (ram,0x000100e37290) */
/* WARNING: Removing unreachable block (ram,0x000100e37200) */
/* WARNING: Removing unreachable block (ram,0x000100e371e4) */
/* WARNING: Removing unreachable block (ram,0x000100e371e8) */
/* WARNING: Removing unreachable block (ram,0x000100e3734c) */
/* WARNING: Removing unreachable block (ram,0x000100e373bc) */

void FUN_100e37174(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = param_1;
  func_0x000107c44a88();
  if ((int)lVar2 == 0) {
    param_1 = -0x2fffffffffffffeb;
    puVar3 = PTR__OBJC_CLASS___ASAuthorizationPlatformPublicKeyCredentialProvider_1126a5db8;
    func_0x000107c610f8(
                       PTR__OBJC_CLASS___ASAuthorizationPlatformPublicKeyCredentialProvider_1126a5db8
                       );
    func_0x000107c5fadc(0xd000000000000015,0x800000010ef12950);
    func_0x000107c6142c(0x800000010ef12950);
    func_0x000107c482e8(puVar3);
  }
  else {
    func_0x000107c4fdb0();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e3768c);
      (*pcVar1)();
    }
    func_0x000107c44fd8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e37694; end: 100e376b3;  */

void FUN_100e37694(void)

{
  func_0x000107c61168(&PTR_PTR_112d3add0);
  return;
}



/* Entry: 100e376b4; end: 100e3773b;  */

void FUN_100e376b4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100e3773c; end: 100e37753;  */

void FUN_100e3773c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000100e36ef4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100e37754; end: 100e3779f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_100e37754(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 100e377a0; end: 100e379f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e377a0(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d3ae50);
  uVar3 = uVar10;
  func_0x000107c3dafc(uVar10);
  func_0x000107c61180();
  puVar4 = &UNK_110358588;
  func_0x000107c613fc(&UNK_110358588,0x20,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x18) = uVar10;
  puVar5 = &UNK_1103585b0;
  func_0x000107c613fc(&UNK_1103585b0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_100e3906c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_100e39090;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100e37c64;
  puStack_88 = &UNK_1103585c8;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar7 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_110358600;
  func_0x000107c613fc(&UNK_110358600,0x20,7);
  *(long *)(puVar7 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar7 + 0x18) = uVar10;
  puVar8 = &UNK_110358628;
  func_0x000107c613fc(&UNK_110358628,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_100e390cc;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_80 = FUN_100e390f8;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100e380c8;
  puStack_88 = &UNK_110358640;
  puStack_78 = puVar8;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c61174(unaff_x20);
  func_0x000107c61174(uVar10);
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c4c610(uVar3);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar3);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x66,0x28,0x3f,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100e379f0);
    (*pcVar2)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x66,0x2d,0x19,1);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100e379f4);
  (*pcVar2)();
}



/* Entry: 100e379f4; end: 100e37c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e379f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &UNK_1103588a8;
  func_0x000107c613fc(&UNK_1103588a8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_10;
  uVar6 = *(undefined8 *)(param_9 + _DAT_112d3ae50);
  func_0x000107c6157c(param_8);
  func_0x000107c61174(param_10);
  func_0x000107c5d17c();
  func_0x000107c61180();
  puVar2 = &UNK_1103588d0;
  func_0x000107c613fc(&UNK_1103588d0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x18) = 0x100e3936c;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  func_0x000107c615f0(uVar6);
  func_0x000107c6157c(puVar1);
  func_0x000107c5fadc(param_5,param_6);
  uVar3 = 0x6b6f;
  func_0x000107c5fadc(0x6b6f,0xe200000000000000);
  uStack_70 = 0x100e393a4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100e381c8;
  puStack_78 = &UNK_1103588e8;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c3dacc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar3);
  puVar5 = puStack_68;
  func_0x000107c61574();
  FUN_100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 3;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(undefined **)(puVar5 + 0x20) = puVar2;
  func_0x000107c61174(puVar2);
  FUN_100e3823c(param_1,param_2,param_3,param_4,puVar5,0x100e3936c,puVar1,0);
  func_0x000107c61574(puVar1);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 100e37c14; end: 100e37c63;  */

void FUN_100e37c14(code *param_1,undefined8 param_2,long param_3)

{
  (*param_1)();
  func_0x000107c4168c();
  func_0x000107c61180();
  if (param_3 != 0) {
    func_0x000107c3db00();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
    return;
  }
  return;
}



/* Entry: 100e37c64; end: 100e37d57;  */

/* WARNING: Possible PIC construction at 0x000100e37d24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e37d28) */

void FUN_100e37c64(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_2 == 0) {
    lVar6 = 0;
    lVar5 = 0;
    lVar3 = param_2;
  }
  else {
    lVar5 = param_2;
    func_0x000107c5faec(param_2);
    lVar3 = lVar5;
    lVar6 = param_2;
  }
  func_0x000107c5faec(param_3);
  lVar4 = lVar3;
  func_0x000107c5faec(param_4);
  func_0x000107c60bc4();
  puVar2 = &UNK_110358880;
  func_0x000107c613fc(&UNK_110358880,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  (*pcVar1)(lVar6,lVar5,param_3,lVar3,param_4,lVar4,FUN_100e39360,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
  return;
}



/* Entry: 100e37d58; end: 100e38047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e37d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar2 = &UNK_110358678;
  func_0x000107c613fc(&UNK_110358678,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_9;
  *(undefined8 *)(puVar2 + 0x18) = param_11;
  uVar8 = *(undefined8 *)(param_10 + _DAT_112d3ae50);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_11);
  func_0x000107c5d17c();
  func_0x000107c61180();
  puVar3 = &UNK_1103586a0;
  func_0x000107c613fc(&UNK_1103586a0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(code **)(puVar3 + 0x18) = FUN_100e39128;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  func_0x000107c615f0(uVar8);
  func_0x000107c6157c(puVar2);
  func_0x000107c5fadc(param_5,param_6);
  uVar4 = 0x6b6f;
  func_0x000107c5fadc(0x6b6f,0xe200000000000000);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_100e39130;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100e381c8;
  puStack_88 = &UNK_1103586b8;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  puVar7 = puVar6;
  func_0x000107c3dacc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puStack_78);
  puVar3 = &UNK_1103586f0;
  func_0x000107c613fc(&UNK_1103586f0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(code **)(puVar3 + 0x18) = FUN_100e39128;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  func_0x000107c615f0(uVar8);
  func_0x000107c6157c(puVar2);
  func_0x000107c5fadc(param_7,param_8);
  uVar4 = 0x6c65636e6163;
  func_0x000107c5fadc(0x6c65636e6163,0xe600000000000000);
  pcStack_80 = (code *)0x100e39164;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100e381c8;
  puStack_88 = &UNK_110358708;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c3dacc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  puVar3 = puStack_78;
  func_0x000107c61574();
  FUN_100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 5;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  *(undefined **)(puVar3 + 0x20) = puVar7;
  *(undefined **)(puVar3 + 0x28) = puVar6;
  func_0x000107c61174(puVar7);
  func_0x000107c61174(puVar6);
  FUN_100e3823c(param_1,param_2,param_3,param_4,puVar3,FUN_100e39128,puVar2,1);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 100e38048; end: 100e380c7;  */

void FUN_100e38048(undefined8 param_1,long param_2,long param_3)

{
  func_0x000107c3eae4();
  func_0x000107c61180();
  (**(code **)(param_2 + 0x10))();
  func_0x000107c60bd0(param_2);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (param_3 != 0) {
    func_0x000107c3db00();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
    return;
  }
  return;
}



/* Entry: 100e380c8; end: 100e381c7;  */

/* WARNING: Possible PIC construction at 0x000100e38188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e38198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e3818c) */
/* WARNING: Removing unreachable block (ram,0x000100e3819c) */

void FUN_100e380c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c5faec(param_2);
  if (param_3 == 0) {
    param_3 = 0;
    uVar3 = 0;
    uVar4 = uVar2;
  }
  else {
    uVar3 = uVar2;
    func_0x000107c5faec(param_3);
    uVar4 = uVar3;
  }
  func_0x000107c5faec(param_4);
  uVar5 = uVar4;
  func_0x000107c5faec(param_5);
  func_0x000107c61174();
  (*pcVar1)(param_2,uVar2,param_3,uVar3,param_4,uVar4,param_5,uVar5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 100e381c8; end: 100e3823b;  */

void FUN_100e381c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 100e3823c; end: 100e38593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3823c(undefined8 param_1,long param_2,undefined *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  if (param_4 == 0) {
    puVar11 = (undefined *)0x0;
    param_4 = 0;
    puVar9 = (undefined *)0x0;
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126b17e8;
    func_0x000107c610f8();
    func_0x000107c5fadc(param_3);
    func_0x000107c475fc();
    func_0x000107c61170(param_3);
    if (puVar9 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      puVar7 = (undefined *)0x0;
      param_3 = (undefined *)0x0;
      param_4 = 0;
    }
    else {
      puVar7 = puVar9;
      func_0x000107c4e820(puVar9);
      func_0x000107c61180();
      param_3 = puVar7;
      func_0x000107c5faec();
      func_0x000107c61170(puVar7);
      puVar11 = puVar9;
      func_0x000107c4e828();
      func_0x000107c61180();
      puVar7 = puVar11;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar11);
      puVar4 = puVar9;
      func_0x000107c5d804();
      func_0x000107c61180();
      puVar11 = puVar4;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar4);
    }
  }
  puVar4 = &UNK_110358740;
  func_0x000107c613fc(&UNK_110358740,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  if (param_2 == 0) {
    func_0x000107c6157c(puVar4);
    param_1 = 0;
  }
  else {
    func_0x000107c6157c(puVar4);
    func_0x000107c5fadc(param_1,param_2);
  }
  if (param_4 == 0) {
    param_3 = (undefined *)0x0;
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c6142c(param_4);
  }
  uVar5 = 0;
  FUN_100dfe1a0(0);
  func_0x000107c5fc48(param_5,uVar5);
  if (puVar7 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = puVar7;
    func_0x000107c5fc48(puVar7,PTR___sSSN_11034da80);
    func_0x000107c6142c(puVar7);
  }
  if (puVar11 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = puVar11;
    func_0x000107c5fc48(puVar11,PTR___sSSN_11034da80);
    func_0x000107c6142c(puVar11);
  }
  puVar11 = PTR_PTR_1126aed78;
  func_0x000107c610f8();
  pcStack_70 = FUN_100e39244;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100e39198;
  puStack_78 = &UNK_110358758;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_68);
  func_0x000107c46ddc();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar7);
  func_0x000107c53fcc(puVar11);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d3ae50);
  func_0x000107c5d17c(uVar5);
  func_0x000107c61180();
  func_0x000107c3e2c0();
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(puVar9);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d3ae40);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  uVar8 = puVar1[2];
  *puVar1 = puVar11;
  puVar1[1] = param_6;
  puVar1[2] = param_7;
  uVar3 = *(undefined1 *)(puVar1 + 3);
  *(undefined1 *)(puVar1 + 3) = param_8;
  FUN_100e38cc4();
  FUN_100e39028(uVar5,uVar2,uVar8,uVar3);
  return;
}



/* Entry: 100e38594; end: 100e38647;  */

void FUN_100e38594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x000107c613fc(param_6,0x20,7);
  *(undefined8 *)(param_6 + 0x10) = param_4;
  *(undefined8 *)(param_6 + 0x18) = param_5;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  uStack_58 = param_8;
  uStack_50 = param_7;
  lStack_48 = param_6;
  func_0x000107c60bc4(&puStack_70);
  lVar1 = lStack_48;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(lVar1);
  func_0x000107c41864(param_3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100e38648; end: 100e386a7;  */

undefined8 FUN_100e38648(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_100e386a8(param_1);
    func_0x000107c61170(param_2);
  }
  return 1;
}



/* Entry: 100e386a8; end: 100e38b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e386a8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 extraout_x13;
  long lVar18;
  long unaff_x20;
  code *pcVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long alStack_110 [7];
  undefined1 auStack_d8 [8];
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  uint uStack_ac;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar23 = *(long *)(lVar5 + -8);
  lVar24 = *(long *)(lVar23 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)&lStack_d0 - (lVar24 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar7 - extraout_x8;
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar22 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar22 - extraout_x12;
  lVar6 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = (lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00;
  plVar1 = (long *)(unaff_x20 + _DAT_112d3ae40);
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    lVar2 = plVar1[1];
    lVar3 = plVar1[2];
    pcVar19 = *(code **)(lVar23 + 0x38);
    bVar4 = *(byte *)(plVar1 + 3);
    uStack_ac = (uint)bVar4;
    lStack_d0 = lVar23;
    lStack_c8 = lVar7;
    lStack_c0 = lVar24;
    uStack_b8 = extraout_x13;
    (*pcVar19)(lVar21,1,1);
    (*pcVar19)(lVar22,1,1,lVar5);
    lVar7 = 0;
    func_0x0001046305a8();
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar18,1,1,lVar7);
    func_0x000107c61174(lVar6);
    FUN_100e38cc4(lVar2,lVar3,bVar4);
    *(undefined1 *)(lVar17 + -8) = 0;
    *(undefined8 *)(lVar17 + -0x10) = 0;
    *(undefined8 *)(lVar17 + -0x18) = 0;
    *(undefined8 *)(lVar17 + -0x20) = 0;
    *(undefined8 *)(lVar17 + -0x28) = 0;
    *(undefined8 *)(lVar17 + -0x30) = 0;
    *(undefined8 *)(lVar17 + -0x38) = 0;
    *(long *)(lVar17 + -0x40) = lVar18;
    func_0x000104638e24(lVar17,2,lVar21,0,lVar22,0,0,0,0);
    puVar8 = PTR_PTR_1126ae560;
    func_0x000107c610f8(PTR_PTR_1126ae560);
    func_0x000107c453e4();
    puVar9 = puVar8;
    func_0x000107c43bf4();
    func_0x000107c61180();
    lVar7 = lStack_c8;
    lVar18 = lStack_d0;
    (**(code **)(lStack_d0 + 0x10))(lStack_c8,param_1,lVar5);
    uVar16 = (ulong)*(byte *)(lVar18 + 0x50);
    uVar20 = uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff);
    puVar10 = &UNK_110358790;
    func_0x000107c613fc(&UNK_110358790,uVar20 + lStack_c0,uVar16 | 7);
    (**(code **)(lVar18 + 0x20))(puVar10 + uVar20,lVar7,lVar5);
    pcStack_70 = FUN_100e3924c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100e38b5c;
    puStack_78 = &UNK_1103587a8;
    ppuVar11 = &puStack_90;
    puStack_68 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    func_0x000107c61574(puStack_68);
    pcVar12 = "openUrlInBrowser(url:)";
    func_0x0001000c10c0("openUrlInBrowser(url:)");
    func_0x000107c61180();
    func_0x000107c5dc68(puVar9);
    func_0x000107c615e8(pcVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(puVar9);
    puVar10 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    uVar13 = 0;
    func_0x0001000956f0(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    FUN_100e39298(lVar17,uStack_b8);
    uVar14 = 0;
    func_0x000104652fec(0);
    func_0x000107c610f8();
    uVar15 = uStack_b8;
    func_0x000104651d90(uStack_b8,uVar14);
    func_0x000107c61174(puVar10);
    uVar14 = uVar15;
    func_0x000103c5d254(uVar15,puVar8,puVar10,unaff_x20,0,0,0,0);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(puVar10);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d3ae48));
    func_0x000107c61170(lVar6);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar14);
    func_0x000100e38ccc(lVar2,lVar3,uStack_ac);
    func_0x000107c61170(puVar10);
    func_0x000100e392dc(lVar17);
  }
  return;
}



/* Entry: 100e38b0c; end: 100e38b5b;  */

void FUN_100e38b0c(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100e38b5c; end: 100e38bcb;  */

void FUN_100e38b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100e38bcc; end: 100e38c2b; -[_TtC27SCPasskeyAlertViewPresenter25PasskeyAlertViewPresenter init] */

void FUN_100e38bcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPasskeyAlertViewPresenter.PasskeyAlertViewPresenter",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e38bf8);
  (*pcVar1)();
}



/* Entry: 100e38c2c; end: 100e38c7f; -[_TtC27SCPasskeyAlertViewPresenter25PasskeyAlertViewPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e38c2c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3ae48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3ae50));
  plVar1 = (long *)(param_1 + _DAT_112d3ae40);
  lVar3 = plVar1[2];
  lVar2 = plVar1[3];
  if (*plVar1 != 0) {
    func_0x000107c61170(*plVar1,plVar1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3,lVar3,(char)lVar2);
    return;
  }
  return;
}



/* Entry: 100e38c80; end: 100e38cc3;  */

void FUN_100e38c80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_3,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 100e38cc4; end: 100e38cd3;  */

void FUN_100e38cc4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100e38cd4; end: 100e38db3; -[_TtC27SCPasskeyAlertViewPresenter25PasskeyAlertViewPresenter dialogDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000100e38d90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e38d94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e38cd4(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  
  plVar1 = (long *)(param_1 + _DAT_112d3ae40);
  lVar5 = *plVar1;
  if (lVar5 != 0) {
    pcVar2 = (code *)plVar1[1];
    lVar3 = plVar1[2];
    cVar4 = (char)plVar1[3];
    func_0x000107c61174();
    if (cVar4 == '\x01') {
      FUN_100e38c80(lVar5,pcVar2,lVar3,1);
      FUN_100e38cc4(pcVar2,lVar3,1);
      (*pcVar2)(0);
    }
    else {
      FUN_100e38c80(lVar5,pcVar2,lVar3,cVar4);
      FUN_100e38cc4(pcVar2,lVar3,cVar4);
      (*pcVar2)();
    }
    func_0x000107c61170(lVar5);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3,lVar3,cVar4);
    return;
  }
  return;
}



/* Entry: 100e38db4; end: 100e38dff; -[_TtC27SCPasskeyAlertViewPresenter25PasskeyAlertViewPresenter webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e38db4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d3ae48);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 100e38e00; end: 100e38e1f;  */

void FUN_100e38e00(void)

{
  func_0x000107c61168(&PTR_PTR_11279acf8);
  return;
}



/* Entry: 100e38e20; end: 100e38e77;  */

long FUN_100e38e20(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100e38e78; end: 100e38f3b;  */

undefined8 * FUN_100e38e78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar3 = param_2[2];
  uVar2 = *(undefined1 *)(param_2 + 3);
  func_0x000107c61174();
  FUN_100e38cc4(uVar1,uVar3,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  *(undefined1 *)(param_1 + 3) = uVar2;
  return param_1;
}



/* Entry: 100e38f3c; end: 100e38f8b;  */

undefined8 * FUN_100e38f3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar4);
  uVar2 = *(undefined1 *)(param_2 + 3);
  uVar4 = param_1[1];
  uVar1 = param_1[2];
  uVar5 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar5;
  uVar3 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar2;
  func_0x000100e38ccc(uVar4,uVar1,uVar3);
  return param_1;
}



/* Entry: 100e38f8c; end: 100e39027;  */

int FUN_100e38f8c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100e39028; end: 100e3906b;  */

void FUN_100e39028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_3,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 100e3906c; end: 100e3908f;  */

void FUN_100e3906c(void)

{
  FUN_100e379f4();
  return;
}



/* Entry: 100e39090; end: 100e390af;  */

void FUN_100e39090(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e390b0; end: 100e390cb;  */

void FUN_100e390b0(long param_1,long param_2)

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



/* Entry: 100e390cc; end: 100e390f7;  */

void FUN_100e390cc(void)

{
  FUN_100e37d58();
  return;
}



/* Entry: 100e390f8; end: 100e39127;  */

void FUN_100e390f8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e39128; end: 100e3912f;  */

void FUN_100e39128(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c3eae4();
  func_0x000107c61180();
  (**(code **)(lVar1 + 0x10))();
  func_0x000107c60bd0(lVar1);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3db00();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 100e39130; end: 100e39197;  */

void FUN_100e39130(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100e38594(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&UNK_110358830,0x100e3933c,&UNK_110358848);
  return;
}



/* Entry: 100e39198; end: 100e39243;  */

uint FUN_100e39198(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5edb4(puVar5,param_2);
  func_0x000107c6157c(uVar2);
  puVar4 = puVar5;
  (*pcVar1)(puVar5);
  func_0x000107c61574(uVar2);
  (**(code **)(lVar6 + 8))(puVar5,lVar3);
  return (uint)puVar4 & 1;
}



/* Entry: 100e39244; end: 100e3924b;  */

undefined8 FUN_100e39244(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_100e386a8(param_1);
    func_0x000107c61170(lVar1);
  }
  return 1;
}



/* Entry: 100e3924c; end: 100e39297;  */

void FUN_100e3924c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0(param_1,0,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100e39298; end: 100e3935f;  */

undefined8 FUN_100e39298(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000104638d5c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100e39360; end: 100e39377;  */

void FUN_100e39360(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100e39368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 100e39378; end: 100e393d7;  */

void FUN_100e39378(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100e393d8; end: 100e393f7;  */

void FUN_100e393d8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e393f8; end: 100e39407;  */

void FUN_100e393f8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)
            (*param_1,param_1[1],param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Entry: 100e39408; end: 100e394a3;  */

undefined8 * FUN_100e39408(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_100e38cc4(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100e394a4; end: 100e394e7;  */

undefined8 * FUN_100e394a4(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000100e38ccc(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 100e394e8; end: 100e395e7;  */

int FUN_100e394e8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100e395e8; end: 100e39687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100e395e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  func_0x000107c613fc();
  lVar2 = 0;
  FUN_100e38e00();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112d3ae40);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *puVar1 = 0;
  *(undefined8 *)(lVar3 + _DAT_112d3ae48) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112d3ae50) = param_1;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + 0x10) = plVar4;
  return unaff_x20;
}



/* Entry: 100e39688; end: 100e396ab;  */

void FUN_100e39688(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e396ac; end: 100e396cf;  */

void FUN_100e396ac(void)

{
  FUN_100e377a0();
  return;
}



/* Entry: 100e396d0; end: 100e396d7;  */

undefined8 FUN_100e396d0(void)

{
  return 0;
}



/* Entry: 100e396d8; end: 100e396f7;  */

void FUN_100e396d8(void)

{
  func_0x000107c61168(&PTR_PTR_112d3aec8);
  return;
}



/* Entry: 100e396f8; end: 100e3973f; -[SCPasskeyAlertViewPresenterEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e396f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3af28;
  func_0x000107c61428(param_1 + _DAT_112d3af28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e39740; end: 100e39797; -[SCPasskeyAlertViewPresenterEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e39740(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3af28;
  func_0x000107c61428(param_1 + _DAT_112d3af28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e39798; end: 100e397df; -[SCPasskeyAlertViewPresenterEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e39798(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3af30;
  func_0x000107c61428(param_1 + _DAT_112d3af30,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100e397e0; end: 100e39843; -[SCPasskeyAlertViewPresenterEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e397e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3af30;
  func_0x000107c61428(param_1 + _DAT_112d3af30,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100e39844; end: 100e3997b;  */

/* WARNING: Possible PIC construction at 0x000100e39928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e3992c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e39844(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c5e1d0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar4 = 0;
    FUN_100e396d8();
    func_0x000107c613fc();
    lVar5 = 0;
    FUN_100e38e00();
    lVar6 = lVar5;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar6 + _DAT_112d3ae40);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    *puVar1 = 0;
    *(long *)(lVar6 + _DAT_112d3ae48) = unaff_x20;
    *(long *)(lVar6 + _DAT_112d3ae50) = lVar3;
    puVar2 = PTR_s_init_1125d9248;
    lStack_50 = lVar6;
    lStack_48 = lVar5;
    func_0x000107c61174(lVar3);
    func_0x000107c61174(unaff_x20);
    func_0x000107c61154(&lStack_50,puVar2);
    *(long **)(lVar4 + 0x10) = plVar7;
    FUN_100e377a0();
    lVar3 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100e3997c; end: 100e399a3; -[SCPasskeyAlertViewPresenterEntryPoint begin] */

void FUN_100e3997c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e39844();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e399a4; end: 100e399e7; -[SCPasskeyAlertViewPresenterEntryPoint end] */

void FUN_100e399a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e399e8; end: 100e39b7f;  */

void FUN_100e399e8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SCPasskeyAlertViewPresenter/SCPasskeyAlertViewPresenterEntryPoint.swift"
                            ,0x47,2,0x27,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100e39b80);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a68c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e39b80; end: 100e39c2b; -[SCPasskeyAlertViewPresenterEntryPoint setValue:forIvarName:] */

void FUN_100e39b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100e399e8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e39c2c; end: 100e39c97; -[SCPasskeyAlertViewPresenterEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e39c2c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d3af28,0);
  *(undefined8 *)(param_1 + _DAT_112d3af30) = 0;
  *(undefined8 *)(param_1 + _DAT_112d3af38) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e39c98; end: 100e39ccb;  */

void FUN_100e39c98(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e39ccc; end: 100e39d13; -[SCPasskeyAlertViewPresenterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e39ccc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d3af28);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3af30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d3af38));
  return;
}



/* Entry: 100e39d14; end: 100e39d33;  */

void FUN_100e39d14(void)

{
  func_0x000107c61168(&PTR_PTR_11279adc8);
  return;
}



/* Entry: 100e39d34; end: 100e3a13b;  */

/* WARNING: Removing unreachable block (ram,0x000100e39dac) */

uint FUN_100e39d34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 ****ppppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  long lVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  long unaff_x20;
  undefined8 ****ppppuVar13;
  code *pcVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 ***pppuStack_100;
  undefined *puStack_f8;
  undefined1 auStack_d8 [24];
  long alStack_c0 [3];
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined8 ***apppuStack_98 [3];
  undefined8 uStack_80;
  long lStack_78;
  
  func_0x000107c610f8(PTR_PTR_1126c0328);
  func_0x00010006c00c(param_3,param_4);
  lVar5 = param_3;
  FUN_100e3a450(param_3,param_4);
  func_0x00010006c090(param_3,param_4);
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c4b580();
    func_0x000107c61180();
    if (lVar6 != 0) {
      apppuStack_98[0] = (undefined8 ****)0x0;
      uVar7 = 0;
      FUN_100e3a5a4(0);
      ppppuVar9 = apppuStack_98;
      func_0x000107c5fc50(lVar6,ppppuVar9,uVar7);
      func_0x000107c61170(lVar6);
      pppuVar4 = apppuStack_98[0];
      if ((undefined8 ****)apppuStack_98[0] != (undefined8 ****)0x0) {
        ppppuVar16 = (undefined8 ****)((ulong)apppuStack_98[0] & 0xffffffffffffff8);
        if ((ulong)apppuStack_98[0] >> 0x3e == 0) {
          ppppuVar12 = (undefined8 ****)ppppuVar16[2];
        }
        else {
          ppppuVar12 = (undefined8 ****)apppuStack_98[0];
          if (-1 < (long)apppuStack_98[0]) {
            ppppuVar12 = ppppuVar16;
          }
          func_0x000107c60480();
        }
        if (ppppuVar12 != (undefined8 ****)0x0) {
          ppppuVar13 = (undefined8 ****)0x0;
          do {
            if (((ulong)pppuVar4 & 0xc000000000000001) == 0) {
              if (ppppuVar16[2] <= ppppuVar13) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x100e39f64);
                (*pcVar14)();
              }
              ppppuVar8 = (undefined8 ****)pppuVar4[(long)ppppuVar13 + 4];
              func_0x000107c61174();
            }
            else {
              ppppuVar8 = ppppuVar13;
              ppppuVar9 = (undefined8 ****)pppuVar4;
              FUN_100e3a29c(ppppuVar13,pppuVar4);
            }
            ppppuVar1 = (undefined8 ****)((long)ppppuVar13 + 1);
            if (SCARRY8((long)ppppuVar13,1)) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100e39f60);
              (*pcVar14)();
            }
            ppppuVar15 = ppppuVar8;
            func_0x000107c3d2dc();
            func_0x000107c61180();
            if (ppppuVar15 == (undefined8 ****)0x0) {
              ppppuVar17 = (undefined8 ****)0x0;
              ppppuVar15 = (undefined8 ****)0x0;
            }
            else {
              ppppuVar17 = ppppuVar15;
              func_0x000107c5faec();
              func_0x000107c61170(ppppuVar15);
              ppppuVar15 = ppppuVar9;
            }
            ppppuVar9 = ppppuVar15;
            func_0x0001048daacc(ppppuVar17,ppppuVar15);
            func_0x000107c6142c(ppppuVar15);
            if (((ulong)ppppuVar17 & 1) == 0) {
              func_0x000107c6142c(pppuVar4);
              ppppuVar9 = ppppuVar8;
              func_0x000107c5d2ac();
              puStack_108 = PTR___ss5Int64VN_11034ee50;
              puStack_110 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
              apppuStack_98[0] = ppppuVar9;
              func_0x000107c6057c();
              ppppuVar9 = ppppuVar8;
              puStack_f8 = puStack_110;
              func_0x000107c3d2dc();
              func_0x000107c61180();
              if (ppppuVar9 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x100e3a13c);
                (*pcVar14)();
              }
              pppuStack_100 = ppppuVar9;
              func_0x000107c5faec();
              func_0x000107c61170(ppppuVar8);
              func_0x000107c61170(lVar5);
              func_0x000107c61170(ppppuVar9);
              goto LAB_100e39f9c;
            }
            func_0x000107c61170(ppppuVar8);
            ppppuVar13 = (undefined8 ****)((long)ppppuVar13 + 1);
          } while (ppppuVar1 != ppppuVar12);
        }
        func_0x000107c6142c(pppuVar4);
      }
    }
    func_0x000107c61170(lVar5);
  }
  puStack_108 = (undefined *)0x0;
  pppuStack_100 = (undefined8 ****)0x0;
  puStack_f8 = (undefined *)0xe000000000000000;
  puStack_110 = (undefined *)0xe000000000000000;
LAB_100e39f9c:
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar10 = 0;
  func_0x000100e3ad24();
  lVar6 = lVar10;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar7;
  *(undefined8 *)(lVar6 + 0x18) = uVar3;
  *(undefined8 *)(lVar6 + 0x20) = param_6;
  lVar11 = 0;
  func_0x000100e3b578(0);
  func_0x000107c613fc();
  func_0x000107c61614(lVar11 + 0x10,0);
  func_0x000107c61604(lVar11 + 0x10,param_5);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar5 = *(long *)(unaff_x20 + 0x40);
  func_0x0001000a8868(unaff_x20 + 0x20,uVar2);
  ppuStack_a0 = &PTR_DAT_110358ab8;
  pcVar14 = *(code **)(lVar5 + 0x10);
  alStack_c0[0] = lVar6;
  lStack_a8 = lVar10;
  func_0x000107c615f0(uVar7);
  func_0x000107c615f0(uVar3);
  func_0x000107c61174(param_6);
  func_0x000107c6157c(lVar11);
  func_0x000107c6157c(lVar6);
  (*pcVar14)(apppuStack_98,lVar11,alStack_c0,5,unaff_x20 + 0x48,uVar2,lVar5);
  func_0x000107c61574(lVar11);
  func_0x0001000834e4(alStack_c0);
  FUN_100e3a510(apppuStack_98,alStack_c0);
  func_0x000107c61428(unaff_x20 + 0x70,auStack_d8,0x21,0);
  func_0x000100e3a554(alStack_c0,unaff_x20 + 0x70);
  func_0x000107c614a8(auStack_d8);
  func_0x0001000a8868(apppuStack_98,uStack_80);
  (**(code **)(lStack_78 + 8))
            (param_1,param_2,puStack_108,puStack_110,pppuStack_100,puStack_f8,uStack_80,lStack_78);
  func_0x000107c6142c(puStack_110);
  func_0x000107c6142c(puStack_f8);
  func_0x000107c61574(lVar6);
  func_0x000107c61574(lVar11);
  func_0x0001000834e4(apppuStack_98);
  return (uint)param_1 & 1;
}



/* Entry: 100e3a13c; end: 100e3a237; -[_TtC35SponsoredLensContextCardCtaProvider39SponsoredLensContextCardCtaProviderImpl handleSponsoredAttachmentWithAdRenderData:unlockableSnapInfo:uiContainer:contextActionParams:] */

uint FUN_100e3a13c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c6157c(param_1);
  func_0x000107c5ee30(param_3);
  uVar3 = param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_4;
  func_0x000107c5ee30(param_4);
  func_0x000107c61170(param_4);
  uVar2 = param_3;
  FUN_100e39d34(param_3,param_2,uVar1,uVar3,param_5,param_6);
  func_0x00010006c090(uVar1,uVar3);
  func_0x00010006c090(param_3,param_2);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61574(param_1);
  return (uint)uVar2 & 1;
}



/* Entry: 100e3a238; end: 100e3a29b;  */

void FUN_100e3a238(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x0001000834e4(unaff_x20 + 0x48);
  FUN_100e3a5e8(unaff_x20 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e3a29c; end: 100e3a44f;  */

ulong FUN_100e3a29c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100e3a380);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100e3a384);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126d24c8;
    func_0x000107c61168(PTR_PTR_1126d24c8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126d24c8;
    func_0x000107c61168(PTR_PTR_1126d24c8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_100e3a5a4(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100e3a450);
  (*pcVar2)();
}



/* Entry: 100e3a450; end: 100e3a50f;  */

long FUN_100e3a450(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar1 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar2 = *(long *)(lVar1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar2;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
  (*(code *)**(undefined8 **)(lVar2 + -8))(param_2,lVar1);
  return param_2;
}



/* Entry: 100e3a510; end: 100e3a5a3;  */

long FUN_100e3a510(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100e3a5a4; end: 100e3a5e7;  */

void FUN_100e3a5a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d3b050 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d24c8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d3b050 = puVar1;
  return;
}



/* Entry: 100e3a5e8; end: 100e3a62f;  */

undefined8 FUN_100e3a5e8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d3b048;
  func_0x0001000285a8(0x112d3b048,&UNK_10d9048e8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100e3a630; end: 100e3a79b;  */

/* WARNING: Possible PIC construction at 0x000100e3a6a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3a6e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3a774: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e3a6ec) */
/* WARNING: Removing unreachable block (ram,0x000100e3a758) */
/* WARNING: Removing unreachable block (ram,0x000100e3a714) */
/* WARNING: Removing unreachable block (ram,0x000100e3a75c) */
/* WARNING: Removing unreachable block (ram,0x000100e3a6a8) */
/* WARNING: Removing unreachable block (ram,0x000100e3a778) */

void FUN_100e3a630(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x20);
  puVar3 = puVar4;
  func_0x000107c4dec4();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  func_0x000107c4dee8();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    func_0x000103bb9238();
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar3);
  return;
}



/* Entry: 100e3a79c; end: 100e3acef;  */

void FUN_100e3a79c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar3 = 0;
  uStack_90 = param_2;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_98 = lVar10;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d3b128;
  lStack_a0 = lVar10;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12;
  lVar3 = 0x112d3b130;
  func_0x0001000285a8(0x112d3b130,&UNK_10d904950);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar10 - extraout_x8_02;
  lVar4 = 0;
  func_0x000100b91584();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar14 = lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = 0;
  func_0x000100b913d8();
  FUN_100e3aeac((long)param_1 + (long)*(int *)(lVar5 + 0x18),lVar13,0x112d3b130,&UNK_10d904950);
  lVar3 = lVar13;
  (**(code **)(lVar11 + 0x30))(lVar13,1,lVar4);
  if ((int)lVar3 == 1) {
    func_0x000100e3af38(lVar13,0x112d3b130,&UNK_10d904950);
  }
  else {
    lStack_b0 = lVar14 - extraout_x12_00;
    lStack_70 = lVar10;
    func_0x000100e3afb4(lVar13,lVar14 - extraout_x12_00,&SUB_100b91584);
    uVar7 = *param_1;
    uVar1 = param_1[1];
    lVar3 = param_1[3];
    if (lVar3 == 0) {
      uVar12 = 0;
      lVar10 = -0x2000000000000000;
    }
    else {
      uVar12 = param_1[2];
      lVar10 = lVar3;
    }
    FUN_100e3aeac((long)param_1 + (long)*(int *)(lVar5 + 0x2c),lStack_70,0x112d3b128,&UNK_10d996bb0)
    ;
    puVar6 = PTR_PTR_1126c7cc8;
    func_0x000107c610f8(PTR_PTR_1126c7cc8);
    func_0x000107c61434(lVar3);
    func_0x000107c453e4(puVar6);
    func_0x000107c5fadc(uVar7,uVar1);
    func_0x000107c549d4(puVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c5fadc(uVar12,lVar10);
    func_0x000107c6142c(lVar10);
    func_0x000107c59648(puVar6);
    func_0x000107c61170(uVar12);
    uVar7 = uStack_90;
    func_0x000107c5fadc(uStack_90,uStack_88);
    func_0x000107c59478(puVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c59558(puVar6);
    func_0x000107c55e78(puVar6);
    lVar3 = lStack_b0;
    func_0x000100e3aef4(lStack_b0,lVar14);
    lVar13 = lVar14;
    func_0x000107c614c4(lVar14,lVar4);
    lVar11 = lStack_70;
    lVar10 = lStack_98;
    lVar4 = lStack_a0;
    iVar2 = (int)lVar13;
    if (iVar2 == 2) {
      func_0x000100e3af78(lVar14,&SUB_100b919a8);
      lVar11 = lStack_70;
      lVar14 = lStack_a8;
      FUN_100e3aeac(lStack_70,lStack_a8,0x112d3b128,&UNK_10d996bb0);
      lVar5 = 0;
      func_0x000100b91acc();
      lVar4 = lVar14;
      (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar14,1,lVar5);
      if ((int)lVar4 != 1) {
        lVar4 = lVar14;
        func_0x000107c614c4(lVar14,lVar5);
        puVar9 = &SUB_100b91790;
        if ((int)lVar4 != 1) {
          puVar9 = &SUB_100b915bc;
        }
        func_0x000100e3af78(lVar14,puVar9);
      }
      func_0x000107c52990(puVar6);
      func_0x000107c53eec(puVar6);
    }
    else if (iVar2 == 1) {
      func_0x000100e3afb4(lVar14,lStack_98,&SUB_100b91790);
      func_0x000107c52990(puVar6);
      puVar9 = PTR___sSiN_11034deb0;
      puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar8);
      func_0x000107c55518(puVar6);
      func_0x000107c61170(puVar9);
      func_0x000100e3af78(lVar10,&SUB_100b91790);
      lVar11 = lStack_70;
    }
    else {
      if (iVar2 == 0) {
        puVar9 = &SUB_100b915bc;
        lVar10 = lStack_a0;
        func_0x000100e3afb4(lVar14,lStack_a0,&SUB_100b915bc);
        puVar8 = puVar6;
        func_0x000107c52990(puVar6);
        func_0x000107c5ed70();
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar10);
        func_0x000107c52998(puVar6);
        func_0x000107c61170(puVar8);
        func_0x000107c5a594((double)(long)(*(double *)((long)param_1 + (long)*(int *)(lVar5 + 0x1c))
                                          * 10.0) / 10.0,puVar6);
        lVar14 = lVar4;
      }
      else {
        puVar9 = &SUB_100b91584;
      }
      func_0x000100e3af78(lVar14,puVar9);
    }
    func_0x000107c4bfb0(*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c61170(puVar6);
    func_0x000100e3af38(lVar11,0x112d3b128,&UNK_10d996bb0);
    func_0x000100e3af78(lVar3,&SUB_100b91584);
  }
  return;
}



/* Entry: 100e3acf0; end: 100e3ad43;  */

void FUN_100e3acf0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e3ad44; end: 100e3ad83;  */

void FUN_100e3ad44(void)

{
  FUN_100e3ad84();
  return;
}


