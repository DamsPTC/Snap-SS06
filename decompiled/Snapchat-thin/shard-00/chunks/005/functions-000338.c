/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10070e9a4; end: 10070e9c3;  */

void FUN_10070e9a4(void)

{
  func_0x000107c61168(&PTR_PTR_112935050);
  return;
}



/* Entry: 10070e9c4; end: 10070ee23;  */

void FUN_10070e9c4(void)

{
  return;
}



/* Entry: 10070ee24; end: 10070f207;  */

/* WARNING: Possible PIC construction at 0x0001005a7ae8: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

char ** FUN_10070ee24(char **param_1,ulong *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  ulong *puVar7;
  int *piVar8;
  long *plVar9;
  char **ppcVar10;
  ulong uVar11;
  char *pcStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong auStack_a8 [4];
  undefined1 uStack_81;
  ulong uStack_80;
  ulong uStack_78;
  char **ppcStack_70;
  ulong *puStack_68;
  long lStack_60;
  ulong uStack_58;
  ulong uStack_50;
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[5] == (char *)0x0) {
    func_0x000107c2c34c();
LAB_10070f134:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10070f138);
    (*pcVar4)();
  }
  if (*param_2 != 0) {
    FUN_1005a7050();
    ppcVar10 = (char **)*param_2;
    if (((ulong)ppcVar10 & 1) != 0) {
      piVar8 = (int *)((long)ppcVar10 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppcVar5 = param_1;
    ppcStack_70 = ppcVar10;
    FUN_100727168(param_1,&ppcStack_70);
    if (((ulong)ppcVar10 & 1) != 0) {
      FUN_10084dad0();
      ppcVar5 = ppcVar10;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      ppcVar10 = param_1 + 1;
      FUN_1005a5e70();
      if ((int)ppcVar10 == 0) {
        return ppcVar10;
      }
      func_0x000107c607f0(param_1[2]);
      func_0x000107c607f0(param_1[3]);
      FUN_1005a5ea4(param_1[4],"",0,0);
      if (*(char *)((long)param_1 + 0xb7) < '\0') {
        param_1 = (char **)param_1[0x14];
      }
      else if (*(char *)((long)param_1 + 0x9f) < '\0') {
        func_0x000107c60e14(param_1[0x11]);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return param_1;
    }
    goto SUB_10016f258;
  }
  if (*(long *)(param_1[7] + 0x10) != 1) {
    func_0x000107c2c350();
    goto LAB_10070f134;
  }
  plVar9 = *(long **)(param_1[7] + 8);
  uStack_58 = plVar9[1];
  lStack_60 = *plVar9;
  lStack_48 = plVar9[3];
  uStack_50 = plVar9[2];
  uVar11 = uStack_58 & 0xff;
  if (lStack_60 != 0) {
    uVar11 = uStack_58;
  }
  pcVar6 = param_1[2];
  uVar1 = (ulong)&lStack_60 | 9;
  if (lStack_60 != 0) {
    uVar1 = uStack_50;
  }
  func_0x000107c607e4(pcVar6,uVar1,uVar11);
  if (pcVar6 == (char *)0x0) {
    FUN_1005a7050(param_1[7]);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    func_0x000104ab5920(&uStack_b8,2,&DAT_10f3dfdaf,0xd,&uStack_80,&uStack_d0);
    func_0x000104aba7a8(&uStack_b0,&uStack_b8,param_1);
    FUN_100727168(param_1,&uStack_b0);
    if ((uStack_b0 & 1) != 0) {
      FUN_10084dad0();
    }
    if ((uStack_b8 & 1) != 0) {
      FUN_10084dad0();
    }
    puStack_68 = &uStack_d0;
    func_0x000100482b64(&puStack_68);
  }
  else if (pcVar6 == (char *)0xffffffffffffffff) {
    FUN_1005a7050(param_1[7]);
    pcVar6 = param_1[2];
    func_0x000107c607d8();
    if (pcVar6 == (char *)0x0) {
      auStack_a8[2] = 0;
      auStack_a8[3] = 0;
      auStack_a8[1] = 0;
      func_0x000104ab5920(&uStack_80,2,"Read error",10,&uStack_81,auStack_a8 + 1);
      uVar11 = *param_2;
      if (uStack_80 == uVar11) {
LAB_10070f0a4:
        if ((uVar11 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        *param_2 = uStack_80;
        uStack_80 = 0x36;
        if ((uVar11 & 1) != 0) {
          FUN_10084dad0();
          uVar11 = uStack_80;
          goto LAB_10070f0a4;
        }
      }
      puStack_68 = auStack_a8 + 1;
      func_0x000100482b64(&puStack_68);
    }
    else {
      func_0x000104abac74(&uStack_78,
                          "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/endpoint_cfstream.cc"
                          ,0xa7,pcVar6,"Read error");
      func_0x000104aba7a8(&puStack_68,&uStack_78,param_1);
      puVar7 = (ulong *)*param_2;
      if (puStack_68 == puVar7) {
LAB_10070ef94:
        if (((ulong)puVar7 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        *param_2 = (ulong)puStack_68;
        puStack_68 = (ulong *)0x36;
        if (((ulong)puVar7 & 1) != 0) {
          FUN_10084dad0();
          puVar7 = puStack_68;
          goto LAB_10070ef94;
        }
      }
      if ((uStack_78 & 1) != 0) {
        FUN_10084dad0();
      }
      func_0x000107c607f0(pcVar6);
    }
    uVar11 = *param_2;
    if ((uVar11 & 1) != 0) {
      piVar8 = (int *)(uVar11 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    auStack_a8[0] = uVar11;
    FUN_100727168(param_1,auStack_a8);
    if ((uVar11 & 1) != 0) {
      FUN_10084dad0(uVar11);
    }
  }
  else {
    if (uVar11 - (long)pcVar6 != 0 && (long)pcVar6 <= (long)uVar11) {
      FUN_100726dd0(param_1[7],uVar11 - (long)pcVar6,0);
    }
    pcStack_d8 = (char *)0x0;
    FUN_100727168(param_1,&pcStack_d8);
  }
  FUN_1005a7a98();
  ppcVar5 = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
SUB_10016f258:
  func_0x000107c60e78();
  FUN_1004bdf74(&uStack_80);
  puStack_68 = auStack_a8 + 1;
  func_0x000100482b64(&puStack_68);
  func_0x000107c60bd8(ppcVar5);
  if ((pcStack_d8 != (char *)0x0) && (*pcStack_d8 != '\0')) {
    func_0x000107c2d058(pcStack_d8,uStack_d0,uStack_c8);
  }
  return &pcStack_d8;
}



/* Entry: 10070f208; end: 10070f37b;  */

undefined8 * FUN_10070f208(void)

{
  char *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((in_stack_00000008 != (char *)0x0) && (*in_stack_00000008 != '\0')) {
    func_0x000107c2d058(in_stack_00000008,in_stack_00000010,in_stack_00000018);
  }
  return &stack0x00000008;
}



/* Entry: 10070f37c; end: 10070f4df; -[SCAdBrowserServiceProvider provide] */

void FUN_10070f37c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_105743624;
  puStack_68 = &UNK_1108aec68;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126bdb50;
  func_0x000107c610f4(PTR_PTR_1126bdb50);
  func_0x000107c45564();
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10070f4e0; end: 10070f547;  */

void FUN_10070f4e0(long param_1)

{
  if (*(char *)(param_1 + 0x1dc) == '\x01') {
    if (((*(int *)(param_1 + 0x144) < *(int *)(*(long *)(param_1 + 0x88) + 0xc)) &&
        ((*(byte *)(param_1 + 0x1d7) & 1) == 0)) &&
       ((10 < *(int *)(param_1 + 0x1c8) || ((*(byte *)(param_1 + 0x1d0) >> 5 & 1) != 0)))) {
      func_0x000107c2d884(param_1 + 0x148,0);
    }
    *(undefined1 *)(param_1 + 0x1dc) = 0;
  }
  return;
}



/* Entry: 10070f548; end: 10070f5bf; -[_TtC19SCAdBrowserServices19SCAdBrowserServices initWithAdBrowserLifecycleService:adWebviewEventStreams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070f548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fbd100) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fbd108) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10070f5c0; end: 10070f5eb;  */

void FUN_10070f5c0(long param_1)

{
  if (param_1 != 0) {
    func_0x0001006a1994(param_1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10070f5ec; end: 10070f6c7;  */

void FUN_10070f5ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10070f6c8; end: 10070f6cf;  */

void FUN_10070f6c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x128);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070f6d0; end: 10070f723;  */

void FUN_10070f6d0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x128);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070f724; end: 10070f787;  */

void FUN_10070f724(void)

{
  long unaff_x20;
  
  FUN_1007100e4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118));
  return;
}



/* Entry: 10070f788; end: 1007100e3;  */

void FUN_10070f788(long param_1)

{
  if (param_1 != 0) {
    func_0x00010064bdf8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1007100e4; end: 100711667;  */

void FUN_1007100e4(long *param_1,long param_2)

{
  code *pcVar1;
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
  undefined *puVar13;
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
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
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
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_100083b20(&uStack_140);
  FUN_100083b20(&uStack_148);
  FUN_100083b20(&uStack_150);
  FUN_100083b20(&uStack_158);
  FUN_100083b20(&uStack_160);
  FUN_100083b20(&uStack_168);
  FUN_100083b20(&uStack_170);
  FUN_100083b20(&uStack_178);
  FUN_100364778();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  *(undefined8 *)(param_2 + 0x98) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_100;
  *(undefined8 *)(param_2 + 0xc0) = uStack_108;
  *(undefined8 *)(param_2 + 200) = uStack_110;
  *(undefined8 *)(param_2 + 0xd0) = uStack_118;
  *(undefined8 *)(param_2 + 0xd8) = uStack_120;
  *(undefined8 *)(param_2 + 0xe0) = uStack_128;
  *(undefined8 *)(param_2 + 0xe8) = uStack_130;
  *(undefined8 *)(param_2 + 0xf0) = uStack_138;
  *(undefined8 *)(param_2 + 0xf8) = uStack_140;
  *(undefined8 *)(param_2 + 0x100) = uStack_148;
  *(undefined8 *)(param_2 + 0x108) = uStack_150;
  *(undefined8 *)(param_2 + 0x110) = uStack_158;
  *(undefined8 *)(param_2 + 0x118) = uStack_160;
  *(undefined8 *)(param_2 + 0x120) = uStack_168;
  FUN_1000285a8(0x112e4cce0,&UNK_10da46da0);
  func_0x000107c610f8();
  uVar16 = uStack_78;
  func_0x000107c61174();
  uVar17 = uStack_80;
  func_0x000107c61174();
  uVar18 = uStack_88;
  func_0x000107c61174();
  uVar2 = uStack_90;
  func_0x000107c61174();
  uVar3 = uStack_98;
  func_0x000107c61174();
  uVar4 = uStack_a0;
  func_0x000107c61174();
  uVar5 = uStack_a8;
  func_0x000107c61174();
  uVar6 = uStack_b0;
  func_0x000107c61174();
  uVar7 = uStack_b8;
  func_0x000107c61174();
  uVar8 = uStack_c0;
  func_0x000107c61174();
  uVar9 = uStack_c8;
  func_0x000107c61174();
  uVar10 = uStack_d0;
  func_0x000107c61174();
  uVar11 = uStack_d8;
  func_0x000107c61174();
  uVar12 = uStack_e0;
  func_0x000107c61174();
  uVar19 = uStack_e8;
  func_0x000107c61174();
  uVar20 = uStack_f0;
  func_0x000107c61174();
  uVar21 = uStack_f8;
  func_0x000107c61174();
  uVar22 = uStack_100;
  func_0x000107c61174();
  uVar23 = uStack_108;
  func_0x000107c61174();
  uVar24 = uStack_110;
  func_0x000107c61174();
  uVar25 = uStack_118;
  func_0x000107c61174();
  uVar26 = uStack_120;
  func_0x000107c61174();
  uVar27 = uStack_128;
  func_0x000107c61174();
  uVar28 = uStack_130;
  func_0x000107c61174();
  uVar29 = uStack_138;
  func_0x000107c61174();
  uVar30 = uStack_140;
  func_0x000107c61174();
  uVar31 = uStack_148;
  func_0x000107c61174();
  uVar32 = uStack_150;
  func_0x000107c61174();
  uVar33 = uStack_158;
  func_0x000107c61174();
  uVar34 = uStack_160;
  func_0x000107c61174();
  uVar35 = uStack_168;
  func_0x000107c61174();
  uVar15 = uStack_170;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x18) = puVar13;
  FUN_1000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  uVar15 = uStack_178;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x20) = puVar13;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x28) = puVar13;
  puVar13 = PTR_PTR_1126ac4a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar13;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar37);
  uVar15 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar37);
  uVar15 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar37 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar37);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc32c0);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar37 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar37);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar37 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f051600);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar37);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar37 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar37);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar37 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar37);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar37);
  uVar15 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2a530);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0fcb60);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f10d1b0);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar37);
  uVar38 = 0xd000000000000010;
  uVar15 = uVar38;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2c670);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar37 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar37);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar37 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar37);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar38);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar37 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar37);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1bf20);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar37);
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar37 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar37);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2d430);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar37 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar37);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f10d1e0);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar31);
  func_0x000107c61174(uVar37);
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1a530);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32790);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f10d200);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  uVar38 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f10d230);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  uVar38 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef35990);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar15);
  uVar37 = *(undefined8 *)(param_2 + 0x10);
  uVar38 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar37);
  func_0x000107c61174();
  uVar15 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2b760);
  func_0x000107c5a49c(uVar37);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar15);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  lVar36 = *(long *)(param_2 + 0x28);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar36 != 0) {
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar29);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar32);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar35);
    func_0x000107c61574(uStack_170);
    func_0x000107c61574(uStack_178);
    *(long *)(param_2 + 0x128) = lVar36;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100711668);
  (*pcVar1)();
}



/* Entry: 100711668; end: 10071220b;  */

/* WARNING: Possible PIC construction at 0x000100711680: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100711684) */
/* WARNING: Removing unreachable block (ram,0x000100711688) */
/* WARNING: Removing unreachable block (ram,0x0001007116a8) */
/* WARNING: Removing unreachable block (ram,0x0001007116c0) */
/* WARNING: Removing unreachable block (ram,0x0001007116b4) */
/* WARNING: Removing unreachable block (ram,0x00010065539c) */

bool FUN_100711668(uint param_1)

{
  func_0x0001006552dc();
  if ((param_1 < 0x11) && ((1 << (ulong)(param_1 & 0x1f) & 0x107ffU) != 0)) {
    return true;
  }
  return param_1 == 0x89;
}



/* Entry: 10071220c; end: 100712213;  */

void FUN_10071220c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100712214; end: 100712267;  */

void FUN_100712214(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100712268; end: 1007127b7;  */

undefined8 FUN_100712268(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x104) != 0) {
    if ((*(char *)(param_1 + 0x11e) == '\x01') &&
       (*(char *)(param_2 + 8) != *(char *)(param_1 + 0x100))) {
      func_0x000107c38e54();
      func_0x000107c38e90();
      func_0x000107c2fb6c();
      func_0x000107c38e74();
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 1007127b8; end: 1007127bf;  */

void FUN_1007127b8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002a5750();
  func_0x000107c613fc();
  func_0x000100712820(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1007127c0; end: 1007128e7;  */

void FUN_1007127c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002a5750();
  func_0x000107c613fc();
  func_0x000100712820(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 1007128e8; end: 100712a03; -[SCSwipeToProfileParamsProviderServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007128e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108b5db0);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272a2fc);
  *(undefined **)(param_1 + _DAT_11272a2fc) = puVar1;
  func_0x000107c61170(uVar3);
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bec90;
  func_0x000107c610f4(PTR_PTR_1126bec90);
  func_0x000107c47d68();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100712a04; end: 100712a7b; -[SCSwipeToProfileParamsProviderService initWithParamsStream:paramsProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100712a04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff3018) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff3020) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 100712a7c; end: 100712a83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100712a7c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100361468();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee7e8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100712a84; end: 100712aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100712a84(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100361468();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fee7e8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100712af0; end: 100712c9b;  */

/* WARNING: Possible PIC construction at 0x000100712bf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100712c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100712c14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100712c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100712c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100712c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100712c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100712c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100712c74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100712c68) */
/* WARNING: Removing unreachable block (ram,0x000100712c58) */
/* WARNING: Removing unreachable block (ram,0x000100712c48) */
/* WARNING: Removing unreachable block (ram,0x000100712c38) */
/* WARNING: Removing unreachable block (ram,0x000100712c28) */
/* WARNING: Removing unreachable block (ram,0x000100712c18) */
/* WARNING: Removing unreachable block (ram,0x000100712c08) */
/* WARNING: Removing unreachable block (ram,0x000100712bf8) */
/* WARNING: Removing unreachable block (ram,0x000100712c78) */

void FUN_100712af0(undefined8 *param_1)

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
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x98);
  puVar18 = &UNK_1105aeb18;
  func_0x000107c613fc(&UNK_1105aeb18,0xa0,7);
  *(undefined8 *)(puVar18 + 0x10) = uVar1;
  *(undefined8 *)(puVar18 + 0x18) = uVar9;
  *(undefined8 *)(puVar18 + 0x20) = uVar19;
  *(undefined8 *)(puVar18 + 0x28) = uVar10;
  *(undefined8 *)(puVar18 + 0x30) = uVar2;
  *(undefined8 *)(puVar18 + 0x38) = uVar11;
  *(undefined8 *)(puVar18 + 0x40) = uVar3;
  *(undefined8 *)(puVar18 + 0x48) = uVar12;
  *(undefined8 *)(puVar18 + 0x50) = uVar4;
  *(undefined8 *)(puVar18 + 0x58) = uVar13;
  *(undefined8 *)(puVar18 + 0x60) = uVar5;
  *(undefined8 *)(puVar18 + 0x68) = uVar14;
  *(undefined8 *)(puVar18 + 0x70) = uVar6;
  *(undefined8 *)(puVar18 + 0x78) = uVar15;
  *(undefined8 *)(puVar18 + 0x80) = uVar7;
  *(undefined8 *)(puVar18 + 0x88) = uVar16;
  *(undefined8 *)(puVar18 + 0x90) = uVar8;
  *(undefined8 *)(puVar18 + 0x98) = uVar17;
  uVar19 = 0x112efdd48;
  FUN_1000285a8(0x112efdd48,&UNK_10db30240);
  func_0x000107c613fc();
  puVar20 = &UNK_102be3420;
  FUN_1000841f8(&UNK_102be3420,puVar18,uVar19);
  FUN_100084214(&UNK_10db30210,0x2e,2);
  *param_1 = puVar20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100712c9c; end: 100712ca3;  */

void FUN_100712c9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100712ca4; end: 100712d4f;  */

void FUN_100712ca4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100712d50; end: 100712d57;  */

void FUN_100712d50(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100712d58; end: 100712dab;  */

void FUN_100712d58(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100712dac; end: 100713623;  */

void FUN_100712dac(long *param_1,long param_2)

{
  undefined *puVar1;
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
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_1002361d4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  puVar1 = PTR_PTR_1126a8158;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar15 = auStack_70[0];
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc45a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc45c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0x53656761726f7473;
  func_0x000107c5fadc(0x53656761726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc45e0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4600);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef223b0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar17);
  uVar16 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef226b0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar16);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar17);
  uVar16 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar16 = uVar17;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  *(undefined8 *)(param_2 + 0x80) = uVar16;
  *param_1 = param_2;
  return;
}



/* Entry: 100713624; end: 10071365f;  */

void FUN_100713624(void)

{
  long unaff_x20;
  
  FUN_100712dac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 100713660; end: 100713667;  */

void FUN_100713660(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100713668; end: 1007136bb;  */

void FUN_100713668(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007136bc; end: 1007136cb;  */

void FUN_1007136bc(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100234d50();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a8178;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc4640);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  puVar10 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined **)(lVar1 + 0x40) = puVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 1007136cc; end: 100713a93;  */

void FUN_1007136cc(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100234d50();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a8178;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc4640);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x40) = puVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 100713a94; end: 100713a9b;  */

void FUN_100713a94(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100713a9c; end: 100713aef;  */

void FUN_100713a9c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100713af0; end: 100713aff;  */

void FUN_100713af0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10022cad0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a8828;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(lVar1 + 0x38) = puVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 100713b00; end: 100713e37;  */

void FUN_100713b00(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10022cad0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a8828;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x38) = puVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 100713e38; end: 100713f1b; -[SCStoriesGetActiveStoryServiceProvider provide] */

void FUN_100713e38(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bd378;
  func_0x000107c610f4(PTR_PTR_1126bd378);
  func_0x000107c45544();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100713f1c; end: 100713f73; -[_TtC31SCStoriesGetActiveStoryServices31SCStoriesGetActiveStoryServices initWithActiveStoryStatusFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100713f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_1130491d8) = param_3;
  lVar2 = param_1;
  FUN_10022cb5c();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100713f74; end: 100713fb7;  */

void FUN_100713f74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100713fb8; end: 10071403b; -[SCFriendingActiveStoryServiceProvider provide] */

void FUN_100713fb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bb438;
  func_0x000107c610f4(PTR_PTR_1126bb438);
  uVar2 = param_1;
  func_0x000107c3b27c(param_1);
  func_0x000107c61180();
  func_0x000107c3b280(param_1);
  func_0x000107c61180();
  func_0x000107c45540(puVar1,param_2,uVar2,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10071403c; end: 1007141ab; -[SCFriendingActiveStoryServiceProvider _createLazyActiveStoryFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10071403c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1 + _DAT_112725f60;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5b478();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112725f64;
  func_0x000107c61148();
  lVar3 = lVar1;
  func_0x000107c3d1b4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112725f68;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1;
  func_0x000107c3b280();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112725f6c;
  func_0x000107c61148();
  lVar5 = param_1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1055aaee4;
  puStack_70 = &UNK_11089a130;
  puVar6 = PTR_PTR_1126ae720;
  lStack_68 = lVar2;
  lStack_60 = lVar3;
  lStack_58 = lVar4;
  lStack_50 = lVar1;
  lStack_48 = lVar5;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_88);
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1007141ac; end: 1007141bb; -[_TtC31SCStoriesGetActiveStoryServices31SCStoriesGetActiveStoryServices activeStoryStatusFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007141ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130491d8));
  return;
}



/* Entry: 1007141bc; end: 10071425f; -[SCFriendingActiveStoryServiceProvider _createLazyActiveStoryLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007141bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + _DAT_112725f70;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  puStack_38 = &UNK_1055aaf64;
  puStack_30 = &UNK_11089a160;
  puVar2 = PTR_PTR_1126ae720;
  lStack_28 = lVar1;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_48);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100714260; end: 1007142d7; -[_TtC30SCFriendingActiveStoryServices30SCFriendingActiveStoryServices initWithActiveStoryFetcher:friendingActiveStoryLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100714260(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113022080) = param_3;
  *(undefined8 *)(param_1 + _DAT_113022088) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1007142d8; end: 100714323;  */

void FUN_1007142d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100714324; end: 10071432b;  */

void FUN_100714324(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071432c; end: 10071437f;  */

void FUN_10071432c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100714380; end: 10071438b;  */

void FUN_100714380(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100234ea0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a8198;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10071438c; end: 10071463f;  */

void FUN_10071438c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100234ea0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a8198;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100714640; end: 100714723; -[SCFriendingSelectedSuggestionsServiceProvider provide] */

void FUN_100714640(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bb518;
  func_0x000107c610f4(PTR_PTR_1126bb518);
  func_0x000107c48580();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100714724; end: 10071477b; -[_TtC38SCFriendingSelectedSuggestionsServices38SCFriendingSelectedSuggestionsServices initWithSelectedSuggestionsRepository:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100714724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113022050) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10071477c; end: 1007147b7;  */

void FUN_10071477c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007147b8; end: 1007147bf;  */

void FUN_1007147b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007147c0; end: 100714813;  */

void FUN_1007147c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100714814; end: 10071481b;  */

void FUN_100714814(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1001ceaec();
  func_0x000107c613fc();
  FUN_100714890(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071481c; end: 10071488f;  */

void FUN_10071481c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1001ceaec();
  func_0x000107c613fc();
  FUN_100714890(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 100714890; end: 1007149f3;  */

void FUN_100714890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8190;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 1007149f4; end: 1007149f7; -[SCFriendingQuickAddRefreshServiceProvider provide] */

void FUN_1007149f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf2290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createQuickAddRefreshServices_11255a240);
  return;
}



/* Entry: 1007149f8; end: 100714ac3; -[SCFriendingQuickAddRefreshServiceProvider _createQuickAddRefreshServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007149f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  param_1 = param_1 + _DAT_112725fe4;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_1055b3c0c;
  puStack_40 = &UNK_11089a930;
  puVar2 = PTR_PTR_1126ae720;
  lStack_38 = lVar1;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_58);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126bb4b0;
  func_0x000107c610f4(PTR_PTR_1126bb4b0);
  func_0x000107c48220();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100714ac4; end: 100714b1b; -[_TtC34SCFriendingQuickAddRefreshServices34SCFriendingQuickAddRefreshServices initWithQuickAddRefresher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100714ac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113022020) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100714b1c; end: 100714b47;  */

void FUN_100714b1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100714b48; end: 100714b4f;  */

void FUN_100714b48(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100714b50; end: 100714ba3;  */

void FUN_100714b50(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100714ba4; end: 100714bb3;  */

void FUN_100714ba4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100233610();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a81c8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef1c450);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  puVar10 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined **)(lVar1 + 0x40) = puVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 100714bb4; end: 100714f77;  */

void FUN_100714bb4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100233610();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a81c8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef1c450);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x40) = puVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 100714f78; end: 100714fcb; -[SCSnapchattersRecentlyActiveRecordServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100714f78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c3bc1c();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112726028);
  *(long *)(param_1 + _DAT_112726028) = lVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c610f4(PTR_PTR_1126bb4d8);
  func_0x000107c4828c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100714fcc; end: 1007151e7; -[SCSnapchattersRecentlyActiveRecordServiceProvider _lazyRecentlyActiveRecordRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100714fcc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11272603c;
    func_0x000107c61148();
  }
  lVar1 = lVar9;
  func_0x000107c421c8();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  lVar9 = param_1;
  FUN_1007151e8();
  func_0x000107c61180();
  lVar2 = lVar9;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  lVar9 = param_1;
  func_0x00010071520c();
  func_0x000107c61180();
  lVar3 = lVar9;
  func_0x000107c5b478();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  puVar4 = PTR_PTR_1126bb4e0;
  func_0x000107c61160();
  lVar9 = param_1 + _DAT_11272602c;
  func_0x000107c61148();
  lVar5 = lVar9;
  func_0x000107c42eac();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  lVar9 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar6 = lVar9;
  func_0x000107c44424();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112726030);
  *(long *)(param_1 + _DAT_112726030) = lVar6;
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar9);
  func_0x000107c61144(auStack_58,param_1);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1007151e8; end: 10071522f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007151e8(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112726044);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100715230; end: 1007152a3; -[SCSnapchattersRecentlyActiveRecordServices initWithRecentlyActiveRecordRepository:] */

undefined1 * FUN_100715230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fdb80;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007152a4; end: 1007152ef;  */

void FUN_1007152a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007152f0; end: 1007152f7;  */

void FUN_1007152f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007152f8; end: 10071534b;  */

void FUN_1007152f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071534c; end: 10071535b;  */

void FUN_10071534c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1002340a0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_100715504(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_100715598();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_100715684();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10071535c; end: 100715503;  */

void FUN_10071535c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1002340a0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_100715504(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_100715598();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_100715684();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100715504; end: 100715597;  */

void FUN_100715504(undefined8 param_1)

{
  if (lRam0000000112de0a28 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e660a48);
  return;
}



/* Entry: 100715598; end: 100715683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100715598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  uVar3 = *(undefined8 *)(param_1 + _DAT_113091ad8);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  return;
}



/* Entry: 100715684; end: 100715bd3;  */

undefined * FUN_100715684(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  FUN_1000285a8(0x112de09e0,&UNK_10d9a8170);
  func_0x000107c613fc();
  puVar2 = &UNK_101995140;
  FUN_1000bdd8c(&UNK_101995140,0);
  FUN_1000285a8(0x112de09e8,&UNK_10d9a8178);
  func_0x000107c613fc();
  puVar3 = &UNK_101995160;
  FUN_1000bdd8c(&UNK_101995160,0);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar9 = &UNK_1104203f8;
  puVar5 = puVar9;
  func_0x000107c613fc(&UNK_1104203f8,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = &UNK_1019952b0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101995bc4;
  puStack_88 = &UNK_110420410;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar5 = &UNK_110420448;
  func_0x000107c613fc(&UNK_110420448,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar14;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  FUN_1000285a8(0x112de09f0,&UNK_10d9a8180);
  func_0x000107c613fc();
  func_0x000107c61434(uVar1);
  puVar7 = &UNK_10199533c;
  FUN_1000bdd8c(&UNK_10199533c,puVar5);
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  func_0x000107c613fc(&UNK_1104203f8,0x18,7);
  func_0x000107c61644(puVar9 + 0x10);
  puVar5 = &UNK_110420470;
  func_0x000107c613fc(&UNK_110420470,0x38,7);
  *(undefined **)(puVar5 + 0x10) = puVar9;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  *(undefined **)(puVar5 + 0x20) = puVar2;
  *(undefined **)(puVar5 + 0x28) = puVar4;
  *(undefined **)(puVar5 + 0x30) = puVar7;
  puStack_80 = &UNK_1019955e8;
  puStack_a0 = puVar13;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101995bc8;
  puStack_88 = &UNK_110420488;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar9 = puStack_78;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar2);
  func_0x000107c61174();
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar10 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar9 = &UNK_1104204c0;
  func_0x000107c613fc(&UNK_1104204c0,0x20,7);
  *(undefined **)(puVar9 + 0x10) = puVar2;
  *(undefined **)(puVar9 + 0x18) = puVar3;
  puStack_80 = &UNK_101995718;
  puStack_a0 = puVar13;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101995bcc;
  puStack_88 = &UNK_1104204d8;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar9;
  func_0x000107c60bc4(ppuVar6);
  puVar9 = puStack_78;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar9);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  FUN_1000285a8(0x112de09f8,&UNK_10d9a8188);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar7);
  puVar9 = &UNK_10199578c;
  FUN_1000bdd8c(&UNK_10199578c,puVar7);
  puVar11 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puStack_80 = &UNK_101995bbc;
  puStack_a0 = puVar13;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101995bd0;
  puStack_88 = &UNK_110420500;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar9;
  func_0x000107c60bc4();
  puVar5 = puStack_78;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar12 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puStack_80 = &UNK_101995794;
  puStack_a0 = puVar13;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101995bd4;
  puStack_88 = &UNK_110420528;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar9;
  func_0x000107c60bc4();
  puVar5 = puStack_78;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar5 = &UNK_1104203f8;
  func_0x000107c613fc(&UNK_1104203f8,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar13 = &UNK_110420560;
  func_0x000107c613fc(&UNK_110420560,0x20,7);
  *(undefined **)(puVar13 + 0x10) = puVar5;
  *(undefined **)(puVar13 + 0x18) = puVar10;
  func_0x000107c61174(puVar10);
  uVar14 = 9;
  func_0x0001001ca524(9,2,0x34,4,0,0,&UNK_10d9a8198,puVar13,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(uVar14);
  uVar14 = 0;
  FUN_10023412c(0);
  func_0x000107c610f8();
  FUN_100715cfc(puVar8,puVar10,puVar4,puVar11,puVar12,uVar14);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar9);
  return puVar8;
}



/* Entry: 100715bd4; end: 100715cb7;  */

void FUN_100715bd4(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100715cb8; end: 100715cd3;  */

void FUN_100715cb8(long param_1,long param_2)

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



/* Entry: 100715cd4; end: 100715cf3;  */

void FUN_100715cd4(void)

{
  func_0x000107c61168(&PTR_PTR_112de0c18);
  return;
}



/* Entry: 100715cf4; end: 100715cfb;  */

void FUN_100715cf4(long param_1,long param_2)

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



/* Entry: 100715cfc; end: 100715d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100715cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130219f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113021a00) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113021a08) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113021a10) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113021a18) = param_5;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100715d98; end: 100715ddb;  */

void FUN_100715d98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100715ddc; end: 100716177; -[SCComposerPeopleBridgeFriendServiceProvider provide] */

void FUN_100715ddc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar2 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_106999998;
  puStack_90 = &UNK_11094f9f0;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_1069999d8;
  puStack_b8 = &UNK_11094fa20;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_106999a18;
  puStack_e0 = &UNK_11094fa50;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_106999a58;
  puStack_108 = &UNK_11094fa80;
  func_0x000107c6111c(auStack_100,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c3b77c();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126cf6b8;
  func_0x000107c610f4(PTR_PTR_1126cf6b8);
  puStack_150 = puVar1;
  uStack_148 = 0xc2000000;
  puStack_140 = &UNK_106999a98;
  puStack_138 = &UNK_11094fae0;
  func_0x000107c6111c(auStack_128,auStack_80);
  puStack_178 = puVar1;
  uStack_170 = 0xc2000000;
  puStack_168 = &UNK_106999bb4;
  puStack_160 = &UNK_11094fb40;
  uStack_130 = param_1;
  func_0x000107c6111c(auStack_158,auStack_80);
  puStack_1a0 = puVar1;
  uStack_198 = 0xc2000000;
  puStack_190 = &UNK_106999ccc;
  puStack_188 = &UNK_11094fba0;
  func_0x000107c6111c(auStack_180,auStack_80);
  func_0x000107c6111c(auStack_1a8,auStack_80);
  func_0x000107c46a40(puVar6);
  func_0x000107c61120(auStack_1a8);
  func_0x000107c61120(auStack_180);
  func_0x000107c61120(auStack_158);
  func_0x000107c61120(auStack_128);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_100);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100716178; end: 1007161e7; -[SCComposerPeopleBridgeFriendServiceProvider _friendEmissionPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100716178(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_1127549c8;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c4e604();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1007161e8; end: 10071639f; -[SCComposerPeopleBridgeFriendServices initWithFriendStoreFactory:friendActionStoreFactory:incomingFriendStoreFactory:suggestedFriendStoreFactory:blockedUserStore:friendscoreProvider:recentFriendStore:recentlyActiveFriendStore:] */

undefined1 *
FUN_1007161e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_68 = PTR_PTR_1126fdb38;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007163a0; end: 10071642b;  */

void FUN_1007163a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10071642c; end: 100716433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10071642c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100233a5c();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113042988) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100716434; end: 10071649f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100716434(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100233a5c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113042988) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1007164a0; end: 1007164bf;  */

void FUN_1007164a0(void)

{
  func_0x000107c61168(&PTR_PTR_112dc43c8);
  return;
}



/* Entry: 1007164c0; end: 1007165a3;  */

void FUN_1007164c0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_1007164a0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1000285a8(0x112dc4380,&UNK_10d981bc8);
  func_0x000107c613fc();
  ppuVar5 = &puStack_58;
  FUN_10042e6a0();
  *(undefined ***)(param_2 + 0x48) = ppuVar5;
  *(undefined1 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x60) = 1;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x28) = uVar6;
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *(undefined8 *)(param_2 + 0x20) = uVar3;
  *param_1 = param_2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar6);
  return;
}



/* Entry: 1007165a4; end: 1007165c3;  */

void FUN_1007165a4(void)

{
  func_0x000107c61168(&PTR_PTR_112979660);
  return;
}



/* Entry: 1007165c4; end: 10071663f;  */

void FUN_1007165c4(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((((*(byte *)(param_1 + 0x38) & 1) == 0) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) &&
     ((*(char *)(param_1 + 0xa1) != '\x01' || (*(long *)(param_1 + 0xd0) == param_2)))) {
    lVar1 = param_3[1];
    for (lVar3 = *param_3; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
      func_0x000107c2dc0c(lVar2 + 0xb0,lVar3);
    }
    return;
  }
  return;
}



/* Entry: 100716640; end: 100716683;  */

void FUN_100716640(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100716684; end: 1007166eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100716684(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1003613fc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fee738) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1007166ec; end: 100716897;  */

/* WARNING: Possible PIC construction at 0x0001007167f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100716800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100716810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100716820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100716830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100716840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100716850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100716860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100716870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100716864) */
/* WARNING: Removing unreachable block (ram,0x000100716854) */
/* WARNING: Removing unreachable block (ram,0x000100716844) */
/* WARNING: Removing unreachable block (ram,0x000100716834) */
/* WARNING: Removing unreachable block (ram,0x000100716824) */
/* WARNING: Removing unreachable block (ram,0x000100716814) */
/* WARNING: Removing unreachable block (ram,0x000100716804) */
/* WARNING: Removing unreachable block (ram,0x0001007167f4) */
/* WARNING: Removing unreachable block (ram,0x000100716874) */

void FUN_1007166ec(undefined8 *param_1)

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
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x98);
  puVar18 = &UNK_1105ae698;
  func_0x000107c613fc(&UNK_1105ae698,0xa0,7);
  *(undefined8 *)(puVar18 + 0x10) = uVar1;
  *(undefined8 *)(puVar18 + 0x18) = uVar9;
  *(undefined8 *)(puVar18 + 0x20) = uVar19;
  *(undefined8 *)(puVar18 + 0x28) = uVar10;
  *(undefined8 *)(puVar18 + 0x30) = uVar2;
  *(undefined8 *)(puVar18 + 0x38) = uVar11;
  *(undefined8 *)(puVar18 + 0x40) = uVar3;
  *(undefined8 *)(puVar18 + 0x48) = uVar12;
  *(undefined8 *)(puVar18 + 0x50) = uVar4;
  *(undefined8 *)(puVar18 + 0x58) = uVar13;
  *(undefined8 *)(puVar18 + 0x60) = uVar5;
  *(undefined8 *)(puVar18 + 0x68) = uVar14;
  *(undefined8 *)(puVar18 + 0x70) = uVar6;
  *(undefined8 *)(puVar18 + 0x78) = uVar15;
  *(undefined8 *)(puVar18 + 0x80) = uVar7;
  *(undefined8 *)(puVar18 + 0x88) = uVar16;
  *(undefined8 *)(puVar18 + 0x90) = uVar8;
  *(undefined8 *)(puVar18 + 0x98) = uVar17;
  uVar19 = 0x112efdc38;
  FUN_1000285a8(0x112efdc38,&UNK_10db30108);
  func_0x000107c613fc();
  puVar20 = &UNK_102be1290;
  FUN_1000841f8(&UNK_102be1290,puVar18,uVar19);
  FUN_100084214(&UNK_10db300d0,0x31,2);
  *param_1 = puVar20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100716898; end: 10071689f;  */

void FUN_100716898(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


