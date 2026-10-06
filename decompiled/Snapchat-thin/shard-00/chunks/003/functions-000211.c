/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004c51d4; end: 1004c5353;  */

undefined8 * FUN_1004c51d4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plStack_58;
  undefined1 uStack_49;
  long *plStack_48;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar8 = param_2[3];
  uVar3 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar11 = param_2[6];
  uVar13 = param_2[9];
  uVar12 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar11;
  param_1[9] = uVar13;
  param_1[8] = uVar12;
  param_1[3] = uVar8;
  param_1[2] = uVar3;
  param_1[5] = uVar10;
  param_1[4] = uVar9;
  uVar8 = param_2[0xb];
  uVar3 = param_2[10];
  uVar10 = param_2[0xd];
  uVar9 = param_2[0xc];
  uVar12 = param_2[0xf];
  uVar11 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar10;
  param_1[0xc] = uVar9;
  param_1[0xf] = uVar12;
  param_1[0xe] = uVar11;
  param_1[0xb] = uVar8;
  param_1[10] = uVar3;
  uVar3 = param_2[0x11];
  FUN_1004bf248();
  param_1[0x13] = 0;
  puVar6 = param_1 + 0x12;
  *puVar6 = param_1 + 0x13;
  param_1[0x11] = uVar3;
  param_1[0x14] = 0;
  plVar7 = (long *)param_2[0x12];
  while (plVar7 != param_2 + 0x13) {
    (**(code **)(*(long *)plVar7[5] + 0x10))(&plStack_58);
    plStack_48 = plVar7 + 4;
    puVar4 = puVar6;
    func_0x000104acaf9c(puVar6,plStack_48,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
    plVar1 = plStack_58;
    plStack_58 = (long *)0x0;
    plVar5 = (long *)puVar4[5];
    puVar4[5] = plVar1;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      plVar1 = plStack_58;
      plStack_58 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    plVar1 = (long *)plVar7[1];
    plVar5 = plVar7;
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar5[2];
        bVar2 = (long *)*plVar7 != plVar5;
        plVar5 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar1;
        plVar1 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  return param_1;
}



/* Entry: 1004c5354; end: 1004c53ab;  */

void FUN_1004c5354(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [80];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_1004c4d2c(auStack_70,param_1 + 0x10);
  FUN_1004c53b0(uVar1,auStack_70);
  FUN_1004d8a60(auStack_70);
  return;
}



/* Entry: 1004c53ac; end: 1004c53af;  */

void FUN_1004c53ac(void)

{
  return;
}



/* Entry: 1004c53b0; end: 1004c54f7;  */

void FUN_1004c53b0(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auStack_80 [80];
  
  plVar3 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)*plVar3)();
  }
  if ((char)param_1[0xe] == '\0') {
    if ((param_2[4] == 0) && (*param_2 == 0)) {
      FUN_1004c54f8(param_1 + 0x1f);
    }
    else {
      func_0x000100460dc4();
      *(undefined1 *)(*plVar3 + 0x34) = 0;
      plVar3 = param_1 + 0x1f;
      FUN_1004db8b4();
      plVar4 = plVar3;
      func_0x000100460dc4();
      puVar5 = (undefined8 *)*plVar4;
      FUN_1004671a4();
      if ((char)param_1[0x10] != '\0') {
        func_0x000107c2c1f0();
        FUN_1004d8a60(auStack_80);
        func_0x000107c60bd8();
        func_0x000104bd46a0();
        puVar5[0x28] = *puVar5;
        *(undefined1 *)(puVar5 + 0x27) = 1;
        return;
      }
      *(undefined1 *)(param_1 + 0x10) = 1;
      plVar4 = param_1 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      param_1[0x19] = (long)&UNK_104a85d7c;
      param_1[0x1a] = (long)param_1;
      param_1[0x1b] = 0;
      func_0x000100480ee4(param_1 + 0x11,plVar3,param_1 + 0x18);
    }
    plVar3 = (long *)param_1[0xb];
    FUN_1004c4d2c(auStack_80,param_2);
    (**(code **)(*plVar3 + 0x10))(plVar3,auStack_80);
    FUN_1004d8a60(auStack_80);
  }
  plVar3 = param_1 + 1;
  do {
    lVar6 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 + -1 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}



/* Entry: 1004c54f8; end: 1004c550b;  */

void FUN_1004c54f8(undefined8 *param_1)

{
  param_1[0x28] = *param_1;
  *(undefined1 *)(param_1 + 0x27) = 1;
  return;
}



/* Entry: 1004c550c; end: 1004c555f;  */

void FUN_1004c550c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [80];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_1004c4d2c(auStack_70);
  FUN_1004c5560(uVar1,auStack_70);
  FUN_1004d8a60(auStack_70);
  return;
}



/* Entry: 1004c5560; end: 1004c63bb;  */

/* WARNING: Removing unreachable block (ram,0x0001004c5f3c) */
/* WARNING: Removing unreachable block (ram,0x0001004c5ae4) */
/* WARNING: Removing unreachable block (ram,0x0001004c5b90) */
/* WARNING: Removing unreachable block (ram,0x0001004c600c) */
/* WARNING: Removing unreachable block (ram,0x0001004c6018) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1004c5560(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  uint uVar4;
  long *******ppppppplVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  long ******pppppplVar9;
  long *plVar10;
  undefined8 uVar11;
  long *******ppppppplVar12;
  long lVar13;
  undefined1 uVar14;
  ulong uVar15;
  int *piVar16;
  undefined4 uVar17;
  long *******ppppppplVar18;
  long lVar19;
  ulong uVar20;
  long ******pppppplVar21;
  long *plVar22;
  ulong *puVar23;
  long *******ppppppplVar24;
  long *******ppppppplVar25;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined1 auStack_2a0 [80];
  long *plStack_250;
  undefined8 auStack_248 [2];
  char cStack_231;
  long *******ppppppplStack_230;
  long *plStack_228;
  long *plStack_220;
  ulong uStack_218;
  long *******ppppppplStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  undefined1 uStack_1d1;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  long ******pppppplStack_198;
  long ******pppppplStack_190;
  char *pcStack_188;
  undefined8 *******pppppppuStack_180;
  undefined1 uStack_178;
  long *******ppppppplStack_170;
  undefined8 uStack_168;
  undefined7 uStack_160;
  char cStack_159;
  undefined8 uStack_150;
  char cStack_139;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 *****apppppuStack_120 [3];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *******pppppppuStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long ******pppppplStack_80;
  long ******pppppplStack_78;
  long ******pppppplStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x170) == 0) {
LAB_1004c5fd4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    func_0x000107c60e78();
  }
  else {
    ppppppplStack_1f0 = (long *******)0x0;
    ppppppplStack_1e8 = (long *******)0x0;
    ppppppplStack_1e0 = (long *******)0x0;
    if ((*param_2 == 0) && (param_2[1] != param_2[2])) {
      if (*(char *)(param_1 + 0x178) == '\0') {
        ppppppplVar24 = (long *******)&ppppppplStack_1e0;
        lVar13 = 1;
        FUN_1004c63bc();
        ppppppplStack_1e0 = ppppppplVar24 + lVar13;
        ppppppplVar25 = ppppppplVar24 + 1;
        *ppppppplVar24 = (long ******)"Address list became non-empty";
        ppppppplVar12 = ppppppplStack_1e8;
        while (ppppppplStack_1e8 != ppppppplStack_1f0) {
          ppppppplStack_1e8 = ppppppplStack_1e8 + -1;
          ppppppplVar24 = ppppppplVar24 + -1;
          *ppppppplVar24 = *ppppppplStack_1e8;
          ppppppplVar12 = ppppppplStack_1f0;
        }
        ppppppplStack_1f0 = ppppppplVar24;
        ppppppplStack_1e8 = ppppppplVar25;
        if (ppppppplVar12 != (long *******)0x0) {
          func_0x000107c60e14(ppppppplVar12);
          ppppppplStack_1e8 = ppppppplVar25;
        }
      }
      uVar14 = 1;
    }
    else {
      uVar14 = 0;
      if (*(char *)(param_1 + 0x178) != '\0') {
        ppppppplVar24 = (long *******)&ppppppplStack_1e0;
        lVar13 = 1;
        FUN_1004c63bc();
        ppppppplStack_1e0 = ppppppplVar24 + lVar13;
        ppppppplVar25 = ppppppplVar24 + 1;
        *ppppppplVar24 = (long ******)"Address list became empty";
        ppppppplVar12 = ppppppplStack_1e8;
        while (ppppppplStack_1e8 != ppppppplStack_1f0) {
          ppppppplStack_1e8 = ppppppplStack_1e8 + -1;
          ppppppplVar24 = ppppppplVar24 + -1;
          *ppppppplVar24 = *ppppppplStack_1e8;
          ppppppplVar12 = ppppppplStack_1f0;
        }
        ppppppplStack_1f0 = ppppppplVar24;
        if (ppppppplVar12 != (long *******)0x0) {
          ppppppplStack_1e8 = ppppppplVar25;
          func_0x000107c60e14(ppppppplVar12);
        }
        uVar14 = 0;
        ppppppplStack_1e8 = ppppppplVar25;
      }
    }
    *(undefined1 *)(param_1 + 0x178) = uVar14;
    ppppppplStack_210 = (long *******)0x0;
    uStack_208 = 0;
    lStack_200 = 0;
    puVar23 = (ulong *)(param_2 + 4);
    if (*puVar23 == 0) {
LAB_1004c57e4:
      plVar22 = (long *)param_2[5];
      if (plVar22 == (long *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          ppppppplVar24 = (long *******)0x0;
          plVar22 = (long *)0x0;
        }
        else {
          plVar22 = (long *)(*(long *)(param_1 + 0x20) + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar2) {
              *plVar22 = *plVar22 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          ppppppplVar24 = (long *******)0x0;
          plVar22 = *(long **)(param_1 + 0x20);
joined_r0x0001004c5828:
          if (plVar22 != (long *)0x0) goto LAB_1004c5888;
        }
      }
      else {
        param_2[5] = 0;
        func_0x000104a820d8(&ppppppplStack_170,param_2[9]);
        ppppppplVar24 = ppppppplStack_170;
LAB_1004c5888:
        lVar13 = *(long *)(param_1 + 0x68);
        plVar6 = plVar22;
        (**(code **)(*plVar22 + 0x18))();
        if (plVar6[1] == 0) {
LAB_1004c5904:
          pcStack_188 = (char *)(plVar6 + 2);
          if (*(char *)((long)plVar6 + 0x27) < '\0') {
            if (plVar6[3] == 0) goto LAB_1004c5928;
            pcStack_188 = *(char **)pcStack_188;
LAB_1004c59a0:
LAB_1004c59a4:
            if (pcStack_188 == (char *)0x0) goto LAB_1004c59a8;
          }
          else {
            if (*(char *)((long)plVar6 + 0x27) != '\0') goto LAB_1004c59a0;
LAB_1004c5928:
            pcVar8 = (char *)param_2[9];
            FUN_100481218(pcVar8,"grpc.lb_policy_name");
            ppppppplStack_170 = (long *******)((ulong)ppppppplStack_170 & 0xffffffffffffff00);
            if (pcVar8 != (char *)0x0) {
              pcStack_188 = pcVar8;
              FUN_1004c7394();
              uVar4 = 0;
              if ((char)ppppppplStack_170 == '\0') {
                uVar4 = (uint)pcVar8;
              }
              if ((uVar4 & 1) == 0) {
                uVar17 = 0x4a4;
                if ((char)ppppppplStack_170 != '\0') {
                  uVar17 = 0x49f;
                }
                pcVar8 = 
                "LB policy: %s passed through channel_args does not exist. Using pick_first instead."
                ;
                if ((char)ppppppplStack_170 != '\0') {
                  pcVar8 = 
                  "LB policy: %s passed through channel_args must not require a config. Using pick_first instead."
                  ;
                }
                FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                              ,uVar17,2,pcVar8);
                pcStack_188 = "pick_first";
                goto LAB_1004c59a0;
              }
              goto LAB_1004c59a4;
            }
LAB_1004c59a8:
            pcStack_188 = "pick_first";
          }
          uStack_1c8 = 0;
          uStack_1c0 = 0;
          puStack_1d0 = &uStack_1c8;
          FUN_1004c63fc(&ppppppplStack_170,&pcStack_188,&puStack_1d0);
          FUN_1004c669c(&plStack_1b8,&ppppppplStack_170,1,&uStack_1d1);
          uStack_108 = 5;
          uStack_100 = 0;
          lStack_f8 = 0;
          uStack_f0 = 0;
          plStack_e8 = plStack_1b8;
          lStack_e0 = lStack_1b0;
          lStack_d8 = lStack_1a8;
          plVar7 = &lStack_e0;
          if (lStack_1a8 != 0) {
            plStack_1b8 = &lStack_1b0;
            *(long **)(lStack_1b0 + 0x10) = &lStack_e0;
            lStack_1b0 = 0;
            lStack_1a8 = 0;
            plVar7 = plStack_e8;
          }
          plStack_e8 = plVar7;
          pppppuStack_d0 = (undefined8 *****)0x0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          pppppppuStack_180 = &pppppppuStack_1a0;
          pppppplStack_198 = (long ******)0x0;
          pppppplStack_190 = (long ******)0x0;
          pppppppuStack_1a0 = (undefined8 *******)0x0;
          uStack_178 = 0;
          pppppplVar9 = (long ******)0x50;
          func_0x000107c60e20();
          pppppplVar21 = (long ******)&pppppplStack_190;
          pppppplStack_190 = pppppplVar9 + 10;
          pppppppuStack_1a0 = (undefined8 *******)pppppplVar9;
          pppppplStack_198 = pppppplVar9;
          FUN_1004c6b30(pppppplVar21,&uStack_108,&pppppppuStack_b8,pppppplVar9);
          pppppppuStack_b8 = (undefined8 *******)CONCAT44(pppppppuStack_b8._4_4_,6);
          uStack_b0 = 0;
          uStack_a8 = 0;
          plStack_98 = &lStack_90;
          lStack_90 = 0;
          uStack_88 = 0;
          uStack_a0 = 0;
          pppppplStack_80 = (long ******)pppppppuStack_1a0;
          pppppplStack_70 = pppppplStack_190;
          pppppppuStack_1a0 = (undefined8 *******)0x0;
          pppppplStack_198 = (long ******)0x0;
          pppppplStack_190 = (long ******)0x0;
          pppppppuStack_180 = &pppppppuStack_1a0;
          pppppplStack_78 = pppppplVar21;
          FUN_100482ae0(&pppppppuStack_180);
          pppppppuStack_180 = (undefined8 *******)&pppppuStack_d0;
          FUN_100482ae0(&pppppppuStack_180);
          FUN_100482900(&plStack_e8,lStack_e0);
          FUN_100482900(&plStack_1b8,lStack_1b0);
          pppppppuStack_180 = (undefined8 *******)apppppuStack_120;
          FUN_100482ae0(&pppppppuStack_180);
          FUN_100482900(auStack_138,uStack_130);
          if (cStack_139 < '\0') {
            func_0x000107c60e14(uStack_150);
          }
          if (cStack_159 < '\0') {
            func_0x000107c60e14(ppppppplStack_170);
          }
          FUN_100482900(&puStack_1d0,uStack_1c8);
          ppppppplStack_170 = (long *******)0x0;
          FUN_1004c6cfc(&plStack_220,&pppppppuStack_b8,&ppppppplStack_170);
          if (plStack_220 == (long *)0x0) {
            uVar11 = 0x4bf;
          }
          else {
            if (ppppppplStack_170 == (long *******)0x0) {
              ppppppplStack_170 = &pppppplStack_80;
              FUN_100482ae0(&ppppppplStack_170);
              lVar13 = lStack_90;
              FUN_100482900(&plStack_98);
              goto LAB_1004c5b98;
            }
            uVar11 = 0x4c0;
          }
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                        ,uVar11,2,"assertion failed: %s");
          func_0x000107c60ebc();
          goto LAB_1004c60f0;
        }
        plVar7 = (long *)(plVar6[1] + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plVar7 = (long *)plVar6[1];
        if (plVar7 == (long *)0x0) goto LAB_1004c5904;
        plVar10 = plVar7 + 1;
        do {
          lVar19 = *plVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar19 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar19 + -1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
        plStack_220 = (long *)0x0;
        if (plVar6[1] != 0) {
          plVar7 = (long *)(plVar6[1] + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = *plVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          plStack_220 = (long *)plVar6[1];
        }
LAB_1004c5b98:
        if (*(long *)(param_1 + 0x180) == 0) {
LAB_1004c5bf0:
          uVar4 = 1;
        }
        else {
          plVar7 = plVar22;
          (**(code **)(*plVar22 + 0x10))();
          plVar10 = *(long **)(param_1 + 0x180);
          lVar19 = lVar13;
          (**(code **)(*plVar10 + 0x10))();
          if (lVar13 != lVar19) goto LAB_1004c5bf0;
          func_0x000107c610b0(plVar7,plVar10,lVar13);
          uVar4 = (uint)((int)plVar7 != 0);
        }
        uVar11 = *(undefined8 *)(param_1 + 0x188);
        FUN_1004c754c(uVar11,ppppppplVar24);
        uVar4 = uVar4 | (uint)uVar11 ^ 1;
        if (uVar4 == 1) {
          plVar7 = plStack_220;
          ppppppplStack_230 = ppppppplVar24;
          plStack_228 = plVar22;
          (**(code **)(*plStack_220 + 0x10))();
          FUN_10002b024(auStack_248,plVar7);
          FUN_1004c760c(param_1,&plStack_228,&ppppppplStack_230,auStack_248);
          if (cStack_231 < '\0') {
            func_0x000107c60e14(auStack_248[0]);
          }
          if (ppppppplStack_230 != (long *******)0x0) {
            ppppppplVar24 = ppppppplStack_230 + 1;
            do {
              pppppplVar21 = *ppppppplVar24;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar24,0x10);
              if (bVar2) {
                *ppppppplVar24 = (long ******)((long)pppppplVar21 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if ((long ******)((long)pppppplVar21 + -1) == (long ******)0x0) {
              (*(code *)(*ppppppplStack_230)[1])();
            }
          }
          if (plStack_228 != (long *)0x0) {
            plVar22 = plStack_228 + 1;
            do {
              lVar13 = *plVar22;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar2) {
                *plVar22 = lVar13 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar13 == 1) {
              (**(code **)(*plStack_228 + 8))();
            }
          }
          ppppppplVar24 = (long *******)0x0;
          plVar22 = (long *)0x0;
        }
        plStack_250 = plStack_220;
        plStack_220 = (long *)0x0;
        FUN_1004c4d2c(auStack_2a0,param_2);
        FUN_1004c7808(param_1,&plStack_250,plVar6 + 5,auStack_2a0);
        FUN_1004d8a60(auStack_2a0);
        if (plStack_250 != (long *)0x0) {
          plVar6 = plStack_250 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 + -1 == 0) {
            (**(code **)(*plStack_250 + 8))();
          }
        }
        if (uVar4 != 0) {
          FUN_1004d8b10(param_1);
          if (ppppppplStack_1e8 < ppppppplStack_1e0) {
            *ppppppplStack_1e8 = (long ******)"Service config changed";
            ppppppplStack_1e8 = ppppppplStack_1e8 + 1;
          }
          else {
            lVar13 = (long)ppppppplStack_1e8 - (long)ppppppplStack_1f0 >> 3;
            uVar15 = lVar13 + 1;
            if (uVar15 >> 0x3d != 0) {
              func_0x000104a7f484(&ppppppplStack_1f0);
              goto LAB_1004c60f0;
            }
            uVar20 = (long)ppppppplStack_1e0 - (long)ppppppplStack_1f0 >> 2;
            if (uVar20 <= uVar15) {
              uVar20 = uVar15;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)ppppppplStack_1e0 - (long)ppppppplStack_1f0)) {
              uVar20 = 0x1fffffffffffffff;
            }
            if (uVar20 == 0) {
              ppppppplVar12 = (long *******)0x0;
            }
            else {
              ppppppplVar12 = (long *******)&ppppppplStack_1e0;
              FUN_1004c63bc();
            }
            ppppppplVar25 = ppppppplVar12 + lVar13;
            ppppppplVar18 = ppppppplVar25 + 1;
            *ppppppplVar25 = (long ******)"Service config changed";
            ppppppplVar5 = ppppppplStack_1e8;
            while (ppppppplVar5 != ppppppplStack_1f0) {
              ppppppplVar5 = ppppppplVar5 + -1;
              ppppppplVar25 = ppppppplVar25 + -1;
              *ppppppplVar25 = *ppppppplVar5;
              ppppppplStack_1e8 = ppppppplStack_1f0;
            }
            bVar2 = ppppppplStack_1e8 != (long *******)0x0;
            ppppppplStack_1f0 = ppppppplVar25;
            ppppppplStack_1e8 = ppppppplVar18;
            ppppppplStack_1e0 = ppppppplVar12 + uVar20;
            if (bVar2) {
              func_0x000107c60e14();
              ppppppplStack_1e8 = ppppppplVar18;
            }
          }
        }
        if (plStack_220 != (long *)0x0) {
          plVar6 = plStack_220 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 + -1 == 0) {
            (**(code **)(*plStack_220 + 8))();
          }
        }
      }
LAB_1004c5ea4:
      if (ppppppplStack_1f0 != ppppppplStack_1e8) {
        ppppppplStack_170 = (long *******)0x10f23004d;
        uStack_168 = 0x12;
        FUN_1004da138(&pppppppuStack_1a0,ppppppplStack_1f0,ppppppplStack_1e8,&DAT_10f68f19e,2,
                      &plStack_1b8);
        uStack_b0 = (ulong)pppppplStack_198;
        pppppppuStack_b8 = pppppppuStack_1a0;
        if (-1 < (long)pppppplStack_190) {
          uStack_b0 = (ulong)pppppplStack_190 >> 0x38;
          pppppppuStack_b8 = &pppppppuStack_1a0;
        }
        FUN_10047c83c(&uStack_108,&ppppppplStack_170,&pppppppuStack_b8);
        if ((long)pppppplStack_190 < 0) {
          func_0x000107c60e14(pppppppuStack_1a0);
        }
        lVar13 = *(long *)(param_1 + 0x58);
        if (lVar13 != 0) {
          uStack_2c0 = CONCAT44(uStack_104,uStack_108);
          uStack_2b8 = uStack_100;
          lStack_2b0 = lStack_f8;
          FUN_1004da2c8(&ppppppplStack_170,&uStack_2c0);
          FUN_10047e7e4(lVar13 + 0x70,1,&ppppppplStack_170);
          if (lStack_2b0 < 0) {
            func_0x000107c60e14(uStack_2c0);
          }
        }
      }
      if (ppppppplVar24 != (long *******)0x0) {
        ppppppplVar12 = ppppppplVar24 + 1;
        do {
          pppppplVar21 = *ppppppplVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
          if (bVar2) {
            *ppppppplVar12 = (long ******)((long)pppppplVar21 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long ******)((long)pppppplVar21 + -1) == (long ******)0x0) {
          (*(code *)(*ppppppplVar24)[1])(ppppppplVar24);
        }
      }
      if (plVar22 != (long *)0x0) {
        plVar6 = plVar22 + 1;
        do {
          lVar13 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar22 + 8))(plVar22);
        }
      }
      if (lStack_200 < 0) {
        func_0x000107c60e14(ppppppplStack_210);
      }
      if (ppppppplStack_1f0 != (long *******)0x0) {
        ppppppplStack_1e8 = ppppppplStack_1f0;
        func_0x000107c60e14();
      }
      goto LAB_1004c5fd4;
    }
    func_0x000107c2b9c0(&ppppppplStack_170,puVar23,1);
    if (lStack_200 < 0) {
      func_0x000107c60e14(ppppppplStack_210);
    }
    uStack_208 = uStack_168;
    ppppppplStack_210 = ppppppplStack_170;
    lStack_200 = CONCAT17(cStack_159,uStack_160);
    ppppppplVar24 = ppppppplStack_170;
    if (-1 < cStack_159) {
      ppppppplVar24 = (long *******)&ppppppplStack_210;
    }
    ppppppplVar12 = (long *******)&ppppppplStack_1e0;
    if (ppppppplStack_1e8 < ppppppplStack_1e0) {
      ppppppplVar25 = ppppppplStack_1e8 + 1;
      *ppppppplStack_1e8 = (long ******)ppppppplVar24;
LAB_1004c5794:
      uVar15 = *puVar23;
      ppppppplStack_1e8 = ppppppplVar25;
      if (uVar15 == 0) goto LAB_1004c57e4;
      if (*(long *)(param_1 + 0x180) == 0) {
        if ((uVar15 & 1) != 0) {
          piVar16 = (int *)(uVar15 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar2) {
              *piVar16 = *piVar16 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uStack_218 = uVar15;
        func_0x000104a75a34(param_1,&uStack_218);
        if ((uStack_218 & 1) != 0) {
          FUN_10084dad0();
        }
        if (ppppppplStack_1e8 < ppppppplStack_1e0) {
          ppppppplVar5 = ppppppplStack_1e8 + 1;
          *ppppppplStack_1e8 = (long ******)"no valid service config";
        }
        else {
          lVar13 = (long)ppppppplStack_1e8 - (long)ppppppplStack_1f0 >> 3;
          uVar15 = lVar13 + 1;
          if (uVar15 >> 0x3d != 0) {
            func_0x000104a7f484(&ppppppplStack_1f0);
            goto LAB_1004c60f0;
          }
          uVar20 = (long)ppppppplStack_1e0 - (long)ppppppplStack_1f0 >> 2;
          if (uVar20 <= uVar15) {
            uVar20 = uVar15;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppppppplStack_1e0 - (long)ppppppplStack_1f0)) {
            uVar20 = 0x1fffffffffffffff;
          }
          if (uVar20 == 0) {
            ppppppplVar12 = (long *******)0x0;
          }
          else {
            FUN_1004c63bc();
          }
          ppppppplVar24 = ppppppplVar12 + lVar13;
          ppppppplVar5 = ppppppplVar24 + 1;
          *ppppppplVar24 = (long ******)"no valid service config";
          ppppppplVar25 = ppppppplStack_1e8;
          while (ppppppplVar25 != ppppppplStack_1f0) {
            ppppppplVar25 = ppppppplVar25 + -1;
            ppppppplVar24 = ppppppplVar24 + -1;
            *ppppppplVar24 = *ppppppplVar25;
            ppppppplStack_1e8 = ppppppplStack_1f0;
          }
          ppppppplStack_1f0 = ppppppplVar24;
          ppppppplStack_1e0 = ppppppplVar12 + uVar20;
          if (ppppppplStack_1e8 != (long *******)0x0) {
            ppppppplStack_1e8 = ppppppplVar5;
            func_0x000107c60e14();
          }
        }
        ppppppplVar24 = (long *******)0x0;
        plVar22 = (long *)0x0;
        ppppppplStack_1e8 = ppppppplVar5;
        goto LAB_1004c5ea4;
      }
      plVar22 = (long *)(*(long *)(param_1 + 0x180) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar2) {
          *plVar22 = *plVar22 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar22 = *(long **)(param_1 + 0x180);
      if (*(long *)(param_1 + 0x188) != 0) {
        plVar6 = (long *)(*(long *)(param_1 + 0x188) + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        ppppppplVar24 = *(long ********)(param_1 + 0x188);
        goto joined_r0x0001004c5828;
      }
      ppppppplVar24 = (long *******)0x0;
      if (plVar22 == (long *)0x0) goto LAB_1004c5ea4;
      goto LAB_1004c5888;
    }
    lVar13 = (long)ppppppplStack_1e8 - (long)ppppppplStack_1f0 >> 3;
    uVar15 = lVar13 + 1;
    if (uVar15 >> 0x3d == 0) {
      uVar20 = (long)ppppppplStack_1e0 - (long)ppppppplStack_1f0 >> 2;
      if (uVar20 <= uVar15) {
        uVar20 = uVar15;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)ppppppplStack_1e0 - (long)ppppppplStack_1f0)) {
        uVar20 = 0x1fffffffffffffff;
      }
      if (uVar20 == 0) {
        ppppppplVar5 = (long *******)0x0;
      }
      else {
        ppppppplVar5 = ppppppplVar12;
        FUN_1004c63bc();
      }
      ppppppplVar18 = ppppppplVar5 + lVar13;
      ppppppplVar25 = ppppppplVar18 + 1;
      *ppppppplVar18 = (long ******)ppppppplVar24;
      ppppppplVar24 = ppppppplStack_1e8;
      while (ppppppplVar24 != ppppppplStack_1f0) {
        ppppppplVar24 = ppppppplVar24 + -1;
        ppppppplVar18 = ppppppplVar18 + -1;
        *ppppppplVar18 = *ppppppplVar24;
        ppppppplStack_1e8 = ppppppplStack_1f0;
      }
      ppppppplStack_1f0 = ppppppplVar18;
      ppppppplStack_1e0 = ppppppplVar5 + uVar20;
      if (ppppppplStack_1e8 != (long *******)0x0) {
        ppppppplStack_1e8 = ppppppplVar25;
        func_0x000107c60e14();
      }
      goto LAB_1004c5794;
    }
  }
  func_0x000104a7f484(&ppppppplStack_1f0);
LAB_1004c60f0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1004c60f4);
  (*pcVar3)();
}



/* Entry: 1004c63bc; end: 1004c63ef;  */

undefined1  [16] FUN_1004c63bc(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    func_0x000107c60e20(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104a7757c();
  auVar3._0_8_ = *(undefined8 *)(*(long *)(param_1 + 0x78) + param_2 * 8);
  auVar3._8_8_ = param_2;
  return auVar3;
}



/* Entry: 1004c63f0; end: 1004c63fb;  */

undefined8 FUN_1004c63f0(long param_1,long param_2)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x78) + param_2 * 8);
}



/* Entry: 1004c63fc; end: 1004c646f;  */

void FUN_1004c63fc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  FUN_10002b024(param_1,*param_2);
  *(undefined4 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = *param_3;
  plVar1 = param_3 + 1;
  lVar3 = *plVar1;
  plVar2 = (long *)(param_1 + 0x40);
  *plVar2 = lVar3;
  lVar4 = param_3[2];
  *(long *)(param_1 + 0x48) = lVar4;
  if (lVar4 == 0) {
    *(long **)(param_1 + 0x38) = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    *param_3 = plVar1;
    *plVar1 = 0;
    param_3[2] = 0;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 1004c6470; end: 1004c6607;  */

long * FUN_1004c6470(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_1 + 1 != param_2) {
    plVar6 = param_1 + 2;
    plVar2 = plVar6;
    func_0x000104a77514(plVar6,param_5,param_2 + 4);
    if ((int)plVar2 == 0) {
      plVar2 = plVar6;
      func_0x000104a77514(plVar6,param_2 + 4,param_5);
      if ((int)plVar2 == 0) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar5 = param_2 + 1;
      plVar4 = (long *)*plVar5;
      plVar2 = param_2;
      plVar3 = plVar4;
      if (plVar4 == (long *)0x0) {
        do {
          plVar7 = (long *)plVar2[2];
          bVar1 = (long *)*plVar7 != plVar2;
          plVar2 = plVar7;
        } while (bVar1);
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if (plVar7 == param_1 + 1) {
LAB_1004c65b4:
        if (plVar4 != (long *)0x0) {
          *param_3 = (long)plVar7;
          return plVar7;
        }
        *param_3 = (long)param_2;
        return plVar5;
      }
      func_0x000104a77514(plVar6,param_5,plVar7 + 4);
      if ((int)plVar6 != 0) {
        plVar4 = (long *)*plVar5;
        goto LAB_1004c65b4;
      }
      goto LAB_104a77478;
    }
  }
  plVar6 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar2 = param_1 + 2;
    plVar3 = param_2;
    plVar4 = (long *)*param_2;
    if ((long *)*param_2 == (long *)0x0) {
      do {
        plVar6 = (long *)plVar3[2];
        bVar1 = (long *)*plVar6 == plVar3;
        plVar3 = plVar6;
      } while (bVar1);
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)plVar6[1];
      } while ((long *)plVar6[1] != (long *)0x0);
    }
    func_0x000104a77514(plVar2,plVar6 + 4,param_5);
    if ((int)plVar2 == 0) {
LAB_104a77478:
      plVar2 = param_1 + 1;
      plVar6 = plVar2;
      if ((long *)*plVar2 != (long *)0x0) {
        param_1 = param_1 + 2;
        plVar3 = (long *)*plVar2;
        do {
          while( true ) {
            plVar2 = plVar3;
            plVar3 = param_1;
            func_0x000104a77514(param_1,param_5,plVar2 + 4);
            if ((int)plVar3 == 0) break;
            plVar3 = (long *)*plVar2;
            plVar6 = plVar2;
            if ((long *)*plVar2 == (long *)0x0) goto code_r0x000104a774f8;
          }
          plVar3 = param_1;
          func_0x000104a77514(param_1,plVar2 + 4,param_5);
          if ((int)plVar3 == 0) break;
          plVar6 = plVar2 + 1;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
code_r0x000104a774f8:
      *param_3 = (long)plVar2;
      return plVar6;
    }
  }
  if (*param_2 == 0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar6;
    param_2 = plVar6 + 1;
  }
  return param_2;
}



/* Entry: 1004c6608; end: 1004c669b;  */

undefined1  [16]
FUN_1004c6608(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_1004c6470(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_1004c671c(alStack_58,param_1,param_4);
    FUN_1004c6a98(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
    alStack_58[0] = 0;
    func_0x0001004c6aec(alStack_58,0);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1004c669c; end: 1004c671b;  */

undefined8 * FUN_1004c669c(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  param_1[2] = 0;
  *param_1 = puVar1;
  if (param_3 != 0) {
    param_3 = param_3 * 0x68;
    do {
      FUN_1004c6608(param_1,puVar1,param_2,param_2);
      param_2 = param_2 + 0x68;
      param_3 = param_3 + -0x68;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 1004c671c; end: 1004c6783;  */

void FUN_1004c671c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x88;
  func_0x000107c60e20();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_1004c6784(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1004c6784; end: 1004c67f7;  */

undefined8 * FUN_1004c6784(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  FUN_1004c6870(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 1004c67f8; end: 1004c686f;  */

/* WARNING: Possible PIC construction at 0x000104a77704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004c698c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a77708) */
/* WARNING: Removing unreachable block (ram,0x000104a77804) */
/* WARNING: Removing unreachable block (ram,0x000104a77710) */
/* WARNING: Removing unreachable block (ram,0x000104a77734) */
/* WARNING: Removing unreachable block (ram,0x000104a77744) */
/* WARNING: Removing unreachable block (ram,0x0001004c6990) */
/* WARNING: Removing unreachable block (ram,0x0001004c69d0) */
/* WARNING: Removing unreachable block (ram,0x0001004c69d8) */
/* WARNING: Removing unreachable block (ram,0x0001004c69f0) */
/* WARNING: Removing unreachable block (ram,0x0001004c69e0) */
/* WARNING: Removing unreachable block (ram,0x0001004c69ec) */
/* WARNING: Removing unreachable block (ram,0x0001004c6a04) */
/* WARNING: Removing unreachable block (ram,0x0001004c6a0c) */
/* WARNING: Removing unreachable block (ram,0x0001004c6a10) */

void FUN_1004c67f8(int *param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  iVar2 = *param_2;
  *param_1 = iVar2;
  if (iVar2 - 3U < 2) {
    param_2 = param_2 + 2;
    param_1 = param_1 + 2;
code_r0x000107c60ca4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )(param_1,param_2);
    return;
  }
  if (iVar2 == 5) {
    if (param_1 != param_2) {
      plVar1 = (long *)(param_1 + 8);
      piVar8 = *(int **)(param_2 + 8);
      if (*(long *)(param_1 + 0xc) != 0) {
        lVar11 = *plVar1;
        plVar5 = (long *)(param_1 + 10);
        *plVar1 = (long)plVar5;
        *(undefined8 *)(*plVar5 + 0x10) = 0;
        *plVar5 = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        lVar6 = *(long *)(lVar11 + 8);
        if (lVar6 != 0) {
          lVar11 = lVar6;
        }
        plStack_60 = plVar1;
        plStack_58 = (long *)lVar11;
        puStack_50 = (undefined1 *)lVar11;
        if ((lVar11 != 0) &&
           (lVar6 = lVar11, func_0x000104a775a4(), plStack_58 = (long *)lVar6,
           piVar8 != param_2 + 10)) {
          param_2 = piVar8 + 8;
          param_1 = (int *)(lVar11 + 0x20);
          goto code_r0x000107c60ca4;
        }
        func_0x000104a775f8(&plStack_60);
      }
      while (piVar8 != param_2 + 10) {
        FUN_1004c6bd0(plVar1,piVar8 + 8);
        piVar3 = *(int **)(piVar8 + 2);
        piVar10 = piVar8;
        if (*(int **)(piVar8 + 2) == (int *)0x0) {
          do {
            piVar8 = *(int **)(piVar10 + 4);
            bVar4 = *(int **)piVar8 != piVar10;
            piVar10 = piVar8;
          } while (bVar4);
        }
        else {
          do {
            piVar8 = piVar3;
            piVar3 = *(int **)piVar8;
          } while (*(int **)piVar8 != (int *)0x0);
        }
      }
      return;
    }
  }
  else if (iVar2 == 6 && param_1 != param_2) {
    plVar1 = (long *)(param_1 + 0xe);
    lVar11 = *(long *)(param_2 + 0xe);
    lVar6 = *(long *)(param_2 + 0x10);
    uVar7 = (lVar6 - lVar11 >> 4) * -0x3333333333333333;
    puStack_50 = &stack0xfffffffffffffff0;
    plVar5 = (long *)(param_1 + 0x12);
    if (uVar7 <= (ulong)((*plVar5 - *plVar1 >> 4) * -0x3333333333333333)) {
      lVar9 = *(long *)(param_1 + 0x10) - *plVar1 >> 4;
      if ((ulong)(lVar9 * -0x3333333333333333) < uVar7) {
        lVar9 = lVar11 + lVar9 * 0x10;
        func_0x000104a779c8(lVar11,lVar9);
        func_0x000104a778d8(plVar5,lVar9,lVar6,*(undefined8 *)(param_1 + 0x10));
        *(long **)(param_1 + 0x10) = plVar5;
      }
      else {
        func_0x000104a779c8(lVar11);
        lVar11 = *(long *)(param_1 + 0x10);
        while (lVar11 != lVar6) {
          lVar11 = lVar11 + -0x50;
          func_0x0001004c74fc(plVar5,lVar11);
        }
        *(long *)(param_1 + 0x10) = lVar6;
      }
      return;
    }
    puStack_48 = &UNK_104a77708;
    lVar11 = *plVar1;
    if (lVar11 != 0) {
      lVar9 = *(long *)(param_1 + 0x10);
      lVar6 = lVar11;
      plStack_60 = plVar5;
      plStack_58 = plVar1;
      if (lVar9 != lVar11) {
        do {
          lVar9 = lVar9 + -0x50;
          func_0x0001004c74fc(param_1 + 0x12,lVar9);
        } while (lVar9 != lVar11);
        lVar6 = *plVar1;
      }
      *(long *)(param_1 + 0x10) = lVar11;
      __ZdlPv(lVar6);
      *plVar1 = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
    }
    return;
  }
  return;
}



/* Entry: 1004c6870; end: 1004c690b;  */

undefined4 * FUN_1004c6870(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined4 **)(param_1 + 8) = param_1 + 10;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  FUN_1004c67f8();
  return param_1;
}



/* Entry: 1004c690c; end: 1004c6a97;  */

void FUN_1004c690c(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if (param_1[2] != 0) {
    lVar3 = *param_1;
    plVar2 = param_1 + 1;
    *param_1 = (long)plVar2;
    *(undefined8 *)(*plVar2 + 0x10) = 0;
    *plVar2 = 0;
    param_1[2] = 0;
    lVar4 = *(long *)(lVar3 + 8);
    if (lVar4 != 0) {
      lVar3 = lVar4;
    }
    plStack_60 = param_1;
    lStack_58 = lVar3;
    lStack_50 = lVar3;
    if ((lVar3 != 0) &&
       (lVar4 = lVar3, func_0x000104a775a4(), lStack_58 = lVar4, param_2 != param_3)) {
      do {
        func_0x000107c60ca4(lVar3 + 0x20,param_2 + 4);
        FUN_1004c67f8(lVar3 + 0x38,param_2 + 7);
        lVar3 = lStack_50;
        plVar2 = param_1;
        FUN_1004c6c50(param_1,&uStack_48,lStack_50 + 0x20);
        FUN_1004c6a98(param_1,uStack_48,plVar2,lVar3);
        lStack_50 = lStack_58;
        if (lStack_58 != 0) {
          func_0x000104a775a4();
        }
        plVar2 = (long *)param_2[1];
        plVar5 = param_2;
        if ((long *)param_2[1] == (long *)0x0) {
          do {
            param_2 = (long *)plVar5[2];
            bVar1 = (long *)*param_2 != plVar5;
            plVar5 = param_2;
          } while (bVar1);
        }
        else {
          do {
            param_2 = plVar2;
            plVar2 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        lVar3 = lStack_50;
      } while (lStack_50 != 0 && param_2 != param_3);
    }
    func_0x000104a775f8(&plStack_60);
  }
  while (param_2 != param_3) {
    FUN_1004c6bd0(param_1,param_2 + 4);
    plVar2 = (long *)param_2[1];
    plVar5 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar5[2];
        bVar1 = (long *)*param_2 != plVar5;
        plVar5 = param_2;
      } while (bVar1);
    }
    else {
      do {
        param_2 = plVar2;
        plVar2 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 1004c6a98; end: 1004c6b2f;  */

void FUN_1004c6a98(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1004c6b30; end: 1004c6bcf;  */

long FUN_1004c6b30(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  lStack_40 = param_4;
  uStack_60 = param_1;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x50) {
    FUN_1004c6870(param_4,param_2);
    param_4 = lStack_38 + 0x50;
  }
  uStack_48 = 1;
  FUN_1004c6cc8(&uStack_60);
  return param_4;
}



/* Entry: 1004c6bd0; end: 1004c6c4f;  */

long FUN_1004c6bd0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long alStack_38 [3];
  
  FUN_1004c671c(alStack_38);
  uVar2 = param_1;
  FUN_1004c6c50(param_1,&uStack_40,alStack_38[0] + 0x20);
  FUN_1004c6a98(param_1,uStack_40,uVar2,alStack_38[0]);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  func_0x0001004c6aec(alStack_38,0);
  return lVar1;
}



/* Entry: 1004c6c50; end: 1004c6cc7;  */

long * FUN_1004c6c50(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 8);
  plVar3 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar1 = (long *)*plVar4;
    do {
      while (plVar4 = plVar1, lVar2 = param_1 + 0x10,
            func_0x000104a77514(param_1 + 0x10,param_3,plVar4 + 4), (int)lVar2 == 0) {
        plVar1 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) {
          plVar3 = plVar4 + 1;
          goto LAB_1004c6cb4;
        }
      }
      plVar3 = plVar4;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_1004c6cb4:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 1004c6cc8; end: 1004c6cfb;  */

long FUN_1004c6cc8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    func_0x000104a77978(param_1);
  }
  return param_1;
}



/* Entry: 1004c6cfc; end: 1004c7317;  */

/* WARNING: Removing unreachable block (ram,0x0001004c71fc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1004c6cfc(undefined8 *param_1,int *param_2,ulong *param_3)

{
  char ******ppppppcVar1;
  int *piVar2;
  char *******pppppppcVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  undefined8 ******ppppppuVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *******pppppppuVar10;
  char ******ppppppcVar11;
  ulong uVar12;
  undefined8 *******pppppppuVar13;
  long lVar14;
  undefined8 *******pppppppuVar15;
  int *piVar16;
  undefined8 ******ppppppuVar17;
  char ******ppppppcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong auStack_148 [4];
  undefined1 uStack_121;
  char *******pppppppcStack_120;
  ulong uStack_118;
  byte bStack_109;
  undefined8 *******pppppppuStack_108;
  ulong uStack_100;
  byte bStack_f1;
  undefined8 *******pppppppuStack_f0;
  undefined8 *******pppppppuStack_e8;
  undefined8 *******pppppppuStack_e0;
  ulong *puStack_d8;
  char *******pppppppcStack_d0;
  ulong uStack_c8;
  char *******pppppppcStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (plRam00000001136a1db8 == (long *)0x0) {
    func_0x000107c2c1ec();
    goto LAB_1004c721c;
  }
  if (*param_2 == 6) {
    pppppppuStack_f0 = (undefined8 *******)0x0;
    pppppppuStack_e8 = (undefined8 *******)0x0;
    pppppppuStack_e0 = (undefined8 *******)0x0;
    piVar16 = *(int **)(param_2 + 0xe);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar16 != piVar2) {
      do {
        if (*piVar16 != 5) {
          uStack_98 = 0;
          uStack_90 = 0;
          pppppppcStack_a0 = (char *******)0x0;
          func_0x000104ab5920(auStack_148,2,"child entry should be of type object",0x24,
                              &pppppppuStack_108,&pppppppcStack_a0);
LAB_1004c7078:
          pppppppcStack_d0 = (char *******)&pppppppcStack_a0;
          func_0x000100482b64(&pppppppcStack_d0);
          lVar14 = 0;
          goto LAB_1004c7094;
        }
        if (*(long *)(piVar16 + 0xc) != 1) {
          if (*(long *)(piVar16 + 0xc) == 0) {
            uStack_98 = 0;
            uStack_90 = 0;
            pppppppcStack_a0 = (char *******)0x0;
            func_0x000104ab5920(auStack_148,2,"no policy found in child entry",0x1e,
                                &pppppppuStack_108,&pppppppcStack_a0);
          }
          else {
            uStack_98 = 0;
            uStack_90 = 0;
            pppppppcStack_a0 = (char *******)0x0;
            func_0x000104ab5920(auStack_148,2,"oneOf violation",0xf,&pppppppuStack_108,
                                &pppppppcStack_a0);
          }
          pppppppcStack_d0 = (char *******)&pppppppcStack_a0;
          func_0x000100482b64(&pppppppcStack_d0);
          goto LAB_1004c7044;
        }
        lVar14 = *(long *)(piVar16 + 8);
        if (*(int *)(lVar14 + 0x38) != 5) {
          uStack_98 = 0;
          uStack_90 = 0;
          pppppppcStack_a0 = (char *******)0x0;
          func_0x000104ab5920(auStack_148,2,"child entry should be of type object",0x24,
                              &pppppppuStack_108,&pppppppcStack_a0);
          goto LAB_1004c7078;
        }
        ppppppuVar17 = (undefined8 ******)(lVar14 + 0x20);
        ppppppuVar7 = ppppppuVar17;
        if (*(char *)(lVar14 + 0x37) < '\0') {
          ppppppuVar7 = (undefined8 ******)*ppppppuVar17;
        }
        FUN_1004c7394(ppppppuVar7,0);
        if ((int)ppppppuVar7 != 0) {
          auStack_148[0] = 0;
          goto LAB_1004c7094;
        }
        if ((char)*(byte *)(lVar14 + 0x37) < '\0') {
          ppppppuVar17 = *(undefined8 *******)(lVar14 + 0x20);
          ppppppuVar7 = *(undefined8 *******)(lVar14 + 0x28);
        }
        else {
          ppppppuVar7 = (undefined8 ******)(ulong)*(byte *)(lVar14 + 0x37);
        }
        if (pppppppuStack_e8 < pppppppuStack_e0) {
          *pppppppuStack_e8 = ppppppuVar17;
          pppppppuStack_e8[1] = ppppppuVar7;
          pppppppuVar15 = pppppppuStack_e8 + 2;
        }
        else {
          lVar14 = (long)pppppppuStack_e8 - (long)pppppppuStack_f0 >> 4;
          uVar12 = lVar14 + 1;
          if (uVar12 >> 0x3c != 0) goto LAB_1004c7214;
          uVar8 = (long)pppppppuStack_e0 - (long)pppppppuStack_f0 >> 3;
          if (uVar8 <= uVar12) {
            uVar8 = uVar12;
          }
          if (0x7fffffffffffffef < (ulong)((long)pppppppuStack_e0 - (long)pppppppuStack_f0)) {
            uVar8 = 0xfffffffffffffff;
          }
          if (uVar8 == 0) {
            pppppppuVar10 = (undefined8 *******)0x0;
          }
          else {
            pppppppuVar10 = &pppppppuStack_e0;
            func_0x000100477c28();
          }
          pppppppuVar5 = pppppppuStack_f0;
          pppppppuVar15 = pppppppuVar10 + lVar14 * 2;
          *pppppppuVar15 = ppppppuVar17;
          pppppppuVar15[1] = ppppppuVar7;
          pppppppuVar13 = pppppppuVar15;
          pppppppuVar4 = pppppppuStack_e8;
          for (; pppppppuStack_e8 != pppppppuVar5; pppppppuStack_e8 = pppppppuStack_e8 + -2) {
            ppppppuVar17 = pppppppuStack_e8[-2];
            pppppppuVar13[-1] = pppppppuStack_e8[-1];
            pppppppuVar13[-2] = ppppppuVar17;
            pppppppuVar13 = pppppppuVar13 + -2;
            pppppppuVar4 = pppppppuStack_f0;
          }
          pppppppuStack_e0 = pppppppuVar10 + uVar8 * 2;
          pppppppuVar15 = pppppppuVar15 + 2;
          pppppppuStack_f0 = pppppppuVar13;
          if (pppppppuVar4 != (undefined8 *******)0x0) {
            pppppppuStack_e8 = pppppppuVar15;
            func_0x000107c60e14(pppppppuVar4);
          }
        }
        piVar16 = piVar16 + 0x14;
        pppppppuStack_e8 = pppppppuVar15;
      } while (piVar16 != piVar2);
    }
    pppppppcStack_a0 = (char *******)0x10f2315a6;
    uStack_98 = 0x1b;
    FUN_100479138(&pppppppcStack_120,pppppppuStack_f0,pppppppuStack_e8," ",1);
    uStack_c8 = uStack_118;
    pppppppcStack_d0 = pppppppcStack_120;
    if (-1 < (char)bStack_109) {
      uStack_c8 = (ulong)bStack_109;
      pppppppcStack_d0 = (char *******)&pppppppcStack_120;
    }
    FUN_10047c83c(&pppppppuStack_108,&pppppppcStack_a0,&pppppppcStack_d0);
    pppppppuVar10 = pppppppuStack_108;
    if (-1 < (char)bStack_f1) {
      uStack_100 = (ulong)bStack_f1;
      pppppppuVar10 = &pppppppuStack_108;
    }
    auStack_148[2] = 0;
    auStack_148[3] = 0;
    auStack_148[1] = 0;
    func_0x000104ab5920(auStack_148,2,pppppppuVar10,uStack_100,&uStack_121,auStack_148 + 1);
    puStack_d8 = auStack_148 + 1;
    func_0x000100482b64(&puStack_d8);
    if ((char)bStack_f1 < '\0') {
      func_0x000107c60e14(pppppppuStack_108);
    }
    if ((char)bStack_109 < '\0') {
      func_0x000107c60e14(pppppppcStack_120);
    }
LAB_1004c7044:
    lVar14 = 0;
LAB_1004c7094:
    if (pppppppuStack_f0 != (undefined8 *******)0x0) {
      pppppppuStack_e8 = pppppppuStack_f0;
      func_0x000107c60e14();
    }
  }
  else {
    uStack_98 = 0;
    uStack_90 = 0;
    pppppppcStack_a0 = (char *******)0x0;
    func_0x000104ab5920(auStack_148,2,"type should be array",0x14,&pppppppuStack_f0,
                        &pppppppcStack_a0);
    pppppppcStack_d0 = (char *******)&pppppppcStack_a0;
    func_0x000100482b64(&pppppppcStack_d0);
    lVar14 = 0;
  }
  uVar12 = auStack_148[0];
  uVar8 = *param_3;
  if (auStack_148[0] == uVar8) {
LAB_1004c70cc:
    if ((uVar8 & 1) != 0) {
      FUN_10084dad0();
    }
    uVar12 = *param_3;
  }
  else {
    *param_3 = auStack_148[0];
    auStack_148[0] = 0x36;
    if ((uVar8 & 1) != 0) {
      FUN_10084dad0();
      uVar8 = auStack_148[0];
      goto LAB_1004c70cc;
    }
  }
  if (uVar12 == 0) {
    ppppppcVar1 = (char ******)(lVar14 + 0x20);
    ppppppcVar11 = ppppppcVar1;
    if (*(char *)(lVar14 + 0x37) < '\0') {
      ppppppcVar11 = (char ******)*ppppppcVar1;
    }
    plVar9 = plRam00000001136a1db8;
    FUN_1004c7318(plRam00000001136a1db8,ppppppcVar11);
    if (plVar9 == (long *)0x0) {
      uStack_c8 = 0x100746d14;
      pppppppcStack_d0 = (char *******)ppppppcVar1;
      FUN_1004d4da0(&pppppppcStack_a0,"Factory not found for policy \"%s\"",0x21,&pppppppcStack_d0,1
                   );
      uVar12 = uStack_98;
      pppppppcVar3 = pppppppcStack_a0;
      if (-1 < (long)uStack_90) {
        uVar12 = uStack_90 >> 0x38;
        pppppppcVar3 = (char *******)&pppppppcStack_a0;
      }
      uStack_158 = 0;
      uStack_150 = 0;
      ppppppcStack_160 = (char ******)0x0;
      func_0x000104ab5920(&pppppppuStack_f0,2,pppppppcVar3,uVar12,&pppppppuStack_108,
                          &ppppppcStack_160);
      pppppppuVar10 = (undefined8 *******)*param_3;
      if (pppppppuStack_f0 == pppppppuVar10) {
LAB_1004c71dc:
        if (((ulong)pppppppuVar10 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        *param_3 = (ulong)pppppppuStack_f0;
        pppppppuStack_f0 = (undefined8 *******)0x36;
        if (((ulong)pppppppuVar10 & 1) != 0) {
          FUN_10084dad0();
          pppppppuVar10 = pppppppuStack_f0;
          goto LAB_1004c71dc;
        }
      }
      pppppppcStack_d0 = &ppppppcStack_160;
      func_0x000100482b64(&pppppppcStack_d0);
      goto LAB_1004c70dc;
    }
    (**(code **)(*plVar9 + 0x20))(param_1);
  }
  else {
LAB_1004c70dc:
    *param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
LAB_1004c7214:
  func_0x000104a831e0(&pppppppuStack_f0);
LAB_1004c721c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1004c7220);
  (*pcVar6)();
}



/* Entry: 1004c7318; end: 1004c7393;  */

undefined8 FUN_1004c7318(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  if (param_1[1] != lVar3) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      (**(code **)(*plVar1 + 0x18))();
      uVar2 = param_2;
      func_0x000107c613c0(param_2,plVar1);
      if ((int)uVar2 == 0) {
        return *(undefined8 *)(*param_1 + uVar4 * 8);
      }
      uVar4 = uVar4 + 1;
      lVar3 = *param_1;
    } while (uVar4 < (ulong)(param_1[1] - lVar3 >> 3));
  }
  return 0;
}



/* Entry: 1004c7394; end: 1004c74c3;  */

bool FUN_1004c7394(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 **unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  ulong uStack_40;
  undefined8 *puStack_38;
  
  if (plRam00000001136a1db8 == (long *)0x0) {
    plVar3 = plRam00000001136a1db8;
    func_0x000107c2c1e8(0,param_1);
LAB_1004c7494:
    (**(code **)(*plVar3 + 8))();
  }
  else {
    unaff_x19 = plRam00000001136a1db8;
    FUN_1004c7318();
    if ((param_2 == 0) || (unaff_x19 == (long *)0x0)) goto LAB_1004c7474;
    uStack_40 = 0;
    puStack_80 = &uStack_78;
    lStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    (**(code **)(*unaff_x19 + 0x20))(&plStack_48,unaff_x19,&uStack_a0,&uStack_40);
    unaff_x21 = &puStack_80;
    unaff_x22 = &uStack_68;
    *(bool *)param_2 = plStack_48 == (long *)0x0;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = plStack_48;
      if (lVar4 + -1 == 0) goto LAB_1004c7494;
    }
  }
  puStack_38 = unaff_x22;
  FUN_100482ae0(&puStack_38);
  FUN_100482900(unaff_x21,uStack_78);
  if (lStack_88 < 0) {
    func_0x000107c60e14(uStack_98);
  }
  if ((uStack_40 & 1) != 0) {
    FUN_10084dad0();
  }
LAB_1004c7474:
  return unaff_x19 != (long *)0x0;
}



/* Entry: 1004c74c4; end: 1004c754b;  */

void FUN_1004c74c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  func_0x000107c60e20();
  *puVar1 = &PTR_DAT_1107c2730;
  puVar1[1] = 1;
  *param_1 = puVar1;
  return;
}



/* Entry: 1004c754c; end: 1004c75df;  */

long * FUN_1004c754c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)(ulong)(param_1 == (long *)0x0 && param_2 == (long *)0x0);
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x10))();
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x10))(param_2);
    func_0x000107c613c0(plVar1,plVar2);
    if ((int)plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004c75dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1,param_2);
      return param_1;
    }
    plVar1 = (long *)0x0;
  }
  return plVar1;
}



/* Entry: 1004c75e0; end: 1004c760b;  */

undefined * FUN_1004c75e0(void)

{
  return &UNK_10dd50770;
}



/* Entry: 1004c760c; end: 1004c7807;  */

/* WARNING: Possible PIC construction at 0x0001004c7700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004c77fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004c78a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004c79c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004c7a64: Changing call to branch */

long ***** FUN_1004c760c(long param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long ***ppplVar4;
  long *plVar5;
  long *****ppppplVar6;
  ulong uVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long lVar13;
  long ****pppplVar14;
  undefined8 uVar15;
  ulong uVar16;
  long ***appplStack_198 [9];
  long ***ppplStack_150;
  char *apcStack_148 [4];
  long ***appplStack_128 [4];
  long *plStack_108;
  long ****pppplStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long ****apppplStack_d8 [4];
  long lStack_b8;
  long ****pppplStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  plVar5 = (long *)*param_2;
  puVar10 = param_2;
  puVar11 = param_3;
  puVar12 = param_4;
  (**(code **)(*plVar5 + 0x10))();
  if ((undefined8 *)0x7ffffffffffffff7 < puVar10) {
    ppppplVar6 = &pppplStack_68;
    func_0x000104a6fa5c();
    func_0x000104bd46a0();
    ppppplVar9 = (long *****)pppplStack_68;
    if (-1 < (long)uStack_58) {
      func_0x000107c60bd8();
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      FUN_1004c44d4(appplStack_128);
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      pppplStack_100 = (long ****)0x0;
      plStack_108 = (long *)0x0;
      FUN_1004c7a78(appplStack_128,puVar12);
      uVar15 = *puVar10;
      if (plStack_108 != (long *)0x0) {
        plVar5 = plStack_108 + 1;
        do {
          lVar13 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plStack_108 + 8))();
        }
      }
      *puVar10 = 0;
      ppppplVar9 = (long *****)pppplStack_100;
      plStack_108 = (long *)uVar15;
      if (-1 < (long)uStack_f0) {
        uStack_f8 = puVar12[7];
        pppplStack_100 = (long ****)puVar12[6];
        uStack_f0 = puVar12[8];
        *(undefined1 *)((long)puVar12 + 0x47) = 0;
        *(undefined1 *)(puVar12 + 6) = 0;
        uStack_e0 = 0;
        if (*(char *)(puVar11 + 3) != '\0') {
          puVar10 = (undefined8 *)*puVar11;
          if (-1 < *(char *)((long)puVar11 + 0x17)) {
            puVar10 = puVar11;
          }
          func_0x0001004c9ae8(apcStack_148,"grpc.internal.health_check_service_name",puVar10);
          func_0x000104a7f570(&uStack_e0,apcStack_148);
        }
        apcStack_148[0] = "grpc.internal.config_selector";
        uVar7 = puVar12[9];
        ppppplVar9 = apppplStack_d8;
        if ((uStack_e0 & 1) != 0) {
          ppppplVar9 = (long *****)apppplStack_d8[0];
        }
        FUN_10047f924(uVar7,apcStack_148,1,ppppplVar9,uStack_e0 >> 1);
        pppplVar14 = ppppplVar6[0x32];
        uStack_e8 = uVar7;
        if (pppplVar14 == (long ****)0x0) {
          FUN_1004c7b38(&ppplStack_150,ppppplVar6);
          ppplVar4 = ppplStack_150;
          ppplStack_150 = (long ***)0x0;
          pppplVar14 = ppppplVar6[0x32];
          ppppplVar6[0x32] = (long ****)ppplVar4;
          if (pppplVar14 != (long ****)0x0) {
            (*(code *)**pppplVar14)();
            ppplVar4 = ppplStack_150;
            ppplStack_150 = (long ***)0x0;
            if ((long ****)ppplVar4 != (long ****)0x0) {
              (*(code *)**ppplVar4)();
            }
          }
          pppplVar14 = ppppplVar6[0x32];
        }
        func_0x0001004c7e8c(appplStack_198,appplStack_128);
        ppppplVar6 = (long *****)appplStack_198;
        (*(code *)(*pppplVar14)[4])(pppplVar14);
        FUN_1004d89a4(appplStack_198);
        ppppplVar9 = (long *****)apppplStack_d8[0];
        if ((uStack_e0 & 1) == 0) {
          ppppplVar8 = (long *****)appplStack_128;
          FUN_1004d89a4();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
            return ppppplVar8;
          }
          func_0x000107c60e78();
          if ((int)ppppplVar6 != 0) {
            func_0x000104bd46a0();
            ppppplVar9 = (long *****)apppplStack_d8[0];
            if ((uStack_e0 & 1) != 0) goto code_r0x000107c60e14;
            FUN_1004d89a4(appplStack_128);
          }
          func_0x000107c60bd8();
          if (ppppplVar8 != ppppplVar6) {
            if (*ppppplVar6 == (long ****)0x0) {
              FUN_1004c4c1c(ppppplVar8,ppppplVar6 + 1);
            }
            else {
              func_0x000104a77a7c(ppppplVar8);
            }
          }
          return ppppplVar8;
        }
      }
    }
    goto code_r0x000107c60e14;
  }
  if (puVar10 < (undefined8 *)0x17) {
    uStack_58 = CONCAT17((char)puVar10,(undefined7)uStack_58);
    ppppplVar6 = &pppplStack_68;
    if (puVar10 != (undefined8 *)0x0) goto LAB_1004c76a4;
  }
  else {
    uVar7 = ((ulong)puVar10 & 0xfffffffffffffff8) + 8;
    if (((ulong)puVar10 | 7) != 0x17) {
      uVar7 = (ulong)puVar10 | 7;
    }
    ppppplVar6 = (long *****)(uVar7 + 1);
    func_0x000107c60e20();
    uStack_58 = uVar7 + 1 | 0x8000000000000000;
    pppplStack_68 = (long ****)ppppplVar6;
    puStack_60 = puVar10;
LAB_1004c76a4:
    func_0x000107c610b8(ppppplVar6,plVar5,puVar10);
  }
  *(undefined1 *)((long)ppppplVar6 + (long)puVar10) = 0;
  uVar15 = *param_2;
  plVar5 = *(long **)(param_1 + 0x180);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar13 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  *(undefined8 *)(param_1 + 0x180) = uVar15;
  *param_2 = 0;
  FUN_100460448(param_1 + 0x1e0);
  if (*(char *)(param_1 + 0x237) < '\0') {
    ppppplVar9 = *(long ******)(param_1 + 0x220);
  }
  else {
    uVar16 = param_4[1];
    uVar7 = *param_4;
    *(ulong *)(param_1 + 0x230) = param_4[2];
    *(ulong *)(param_1 + 0x228) = uVar16;
    *(ulong *)(param_1 + 0x220) = uVar7;
    *(undefined1 *)((long)param_4 + 0x17) = 0;
    *(undefined1 *)param_4 = 0;
    if (*(char *)(param_1 + 0x24f) < '\0') {
      func_0x000107c60e14(*(undefined8 *)(param_1 + 0x238));
    }
    *(undefined8 **)(param_1 + 0x240) = puStack_60;
    *(undefined8 *)(param_1 + 0x238) = pppplStack_68;
    *(ulong *)(param_1 + 0x248) = uStack_58;
    uStack_58 = uStack_58 & 0xffffffffffffff;
    pppplStack_68 = (long ****)((ulong)pppplStack_68 & 0xffffffffffffff00);
    func_0x000100466b80(param_1 + 0x1e0);
    uVar15 = *param_3;
    ppppplVar6 = *(long ******)(param_1 + 0x188);
    if (ppppplVar6 != (long *****)0x0) {
      ppppplVar9 = ppppplVar6 + 1;
      do {
        pppplVar14 = *ppppplVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
        if (bVar3) {
          *ppppplVar9 = (long ****)((long)pppplVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((long ****)((long)pppplVar14 + -1) == (long ****)0x0) {
        (*(code *)(*ppppplVar6)[1])();
      }
    }
    *(undefined8 *)(param_1 + 0x188) = uVar15;
    *param_3 = 0;
    ppppplVar9 = (long *****)pppplStack_68;
    if (-1 < (long)uStack_58) {
      return ppppplVar6;
    }
  }
code_r0x000107c60e14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(ppppplVar9);
  return ppppplVar9;
}



/* Entry: 1004c7808; end: 1004c7a77;  */

long * FUN_1004c7808(long param_1,undefined8 *param_2,long *param_3,long param_4)

{
  undefined8 ****ppppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long alStack_128 [9];
  undefined8 *puStack_e0;
  char *apcStack_d8 [4];
  long alStack_b8 [4];
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 ***apppuStack_68 [4];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1004c44d4(alStack_b8);
  uStack_78 = 0;
  lStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  plStack_98 = (long *)0x0;
  FUN_1004c7a78(alStack_b8,param_4);
  uVar9 = *param_2;
  if (plStack_98 != (long *)0x0) {
    plVar8 = plStack_98 + 1;
    do {
      lVar7 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plStack_98 + 8))();
    }
  }
  *param_2 = 0;
  plStack_98 = (long *)uVar9;
  if (lStack_80 < 0) {
    func_0x000107c60e14(uStack_90);
  }
  uStack_88 = *(undefined8 *)(param_4 + 0x38);
  uStack_90 = *(undefined8 *)(param_4 + 0x30);
  lStack_80 = *(undefined8 *)(param_4 + 0x40);
  *(undefined1 *)(param_4 + 0x47) = 0;
  *(undefined1 *)(param_4 + 0x30) = 0;
  uStack_70 = 0;
  if ((char)param_3[3] != '\0') {
    plVar8 = (long *)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      plVar8 = param_3;
    }
    func_0x0001004c9ae8(apcStack_d8,"grpc.internal.health_check_service_name",plVar8);
    func_0x000104a7f570(&uStack_70,apcStack_d8);
  }
  apcStack_d8[0] = "grpc.internal.config_selector";
  uVar9 = *(undefined8 *)(param_4 + 0x48);
  ppppuVar1 = apppuStack_68;
  if ((uStack_70 & 1) != 0) {
    ppppuVar1 = (undefined8 ****)apppuStack_68[0];
  }
  FUN_10047f924(uVar9,apcStack_d8,1,ppppuVar1,uStack_70 >> 1);
  plVar8 = *(long **)(param_1 + 400);
  uStack_78 = uVar9;
  if (plVar8 == (long *)0x0) {
    FUN_1004c7b38(&puStack_e0,param_1);
    puVar4 = puStack_e0;
    puStack_e0 = (undefined8 *)0x0;
    puVar5 = *(undefined8 **)(param_1 + 400);
    *(undefined8 **)(param_1 + 400) = puVar4;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
      puVar4 = puStack_e0;
      puStack_e0 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)();
      }
    }
    plVar8 = *(long **)(param_1 + 400);
  }
  func_0x0001004c7e8c(alStack_128,alStack_b8);
  plVar6 = alStack_128;
  (**(code **)(*plVar8 + 0x20))(plVar8);
  FUN_1004d89a4(alStack_128);
  if ((uStack_70 & 1) != 0) {
    func_0x000107c60e14(apppuStack_68[0]);
  }
  plVar8 = alStack_b8;
  FUN_1004d89a4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    if ((int)plVar6 != 0) {
      func_0x000104bd46a0();
      if ((uStack_70 & 1) != 0) {
        func_0x000107c60e14(apppuStack_68[0]);
      }
      FUN_1004d89a4(alStack_b8);
    }
    func_0x000107c60bd8();
    if (plVar8 != plVar6) {
      if (*plVar6 == 0) {
        FUN_1004c4c1c(plVar8,plVar6 + 1);
      }
      else {
        func_0x000104a77a7c(plVar8);
      }
    }
    return plVar8;
  }
  return plVar8;
}



/* Entry: 1004c7a78; end: 1004c7b37;  */

long * FUN_1004c7a78(long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    if (*param_2 == 0) {
      FUN_1004c4c1c(param_1,param_2 + 1);
    }
    else {
      func_0x000104a77a7c(param_1);
    }
  }
  return param_1;
}



/* Entry: 1004c7b38; end: 1004c7d1b;  */

void FUN_1004c7b38(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  plStack_68 = (long *)0x0;
  uStack_70 = 0;
  uStack_58 = 0;
  plStack_60 = (long *)0x0;
  func_0x0001004c7ac0(&uStack_70,param_2 + 0x130);
  plVar4 = (long *)0x10;
  func_0x000107c60e20();
  plVar3 = plStack_60;
  *plVar4 = (long)&PTR_DAT_1107c15a0;
  plVar4[1] = param_2;
  plVar5 = *(long **)(param_2 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (plStack_60 != (long *)0x0) {
    lVar6 = *plStack_60;
    plStack_60 = plVar4;
    (**(code **)(lVar6 + 8))(plVar3);
    plVar4 = plStack_60;
  }
  plStack_60 = plVar4;
  lVar6 = 0x58;
  uStack_58 = param_3;
  func_0x000107c60e20();
  plStack_40 = plStack_60;
  plStack_48 = plStack_68;
  uStack_50 = uStack_70;
  plStack_68 = (long *)0x0;
  plStack_60 = (long *)0x0;
  uStack_70 = 0;
  uStack_38 = param_3;
  FUN_1004c7d8c();
  plVar3 = plStack_40;
  plStack_40 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      func_0x000107c60d68(plVar3);
    }
  }
  *param_1 = lVar6;
  FUN_1004c7e78(*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(param_2 + 0x60));
  plVar3 = plStack_60;
  plStack_60 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar4 = plStack_68 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      func_0x000107c60d68(plVar3);
    }
  }
  return;
}



/* Entry: 1004c7d1c; end: 1004c7d8b;  */

undefined8 * FUN_1004c7d1c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_1107c2180;
  param_1[1] = param_3;
  uVar2 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  puVar1 = param_1;
  FUN_10048099c();
  param_1[4] = puVar1;
  uVar2 = param_2[2];
  param_2[2] = 0;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 1004c7d8c; end: 1004c7e77;  */

undefined8 * FUN_1004c7d8c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  plStack_48 = (long *)param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  plStack_40 = (long *)param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_1004c7d1c(param_1,&uStack_50,1);
  plVar4 = plStack_40;
  plStack_40 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      func_0x000107c60d68(plVar4);
    }
  }
  *param_1 = &PTR_DAT_1107c22c0;
  param_1[6] = param_3;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  return param_1;
}



/* Entry: 1004c7e78; end: 1004c7f03;  */

void FUN_1004c7e78(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001004c7e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000113815c18 + 0x20))();
  return;
}



/* Entry: 1004c7f04; end: 1004c807f;  */

void FUN_1004c7f04(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  
  plVar7 = param_1 + 9;
  if (*plVar7 == 0) {
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = param_1;
    (**(code **)(*param_1 + 0x40))(param_1,param_1[8],*(undefined8 *)(param_2 + 0x20));
  }
  if (*(long *)(param_2 + 0x20) == 0) {
    lVar8 = 0;
  }
  else {
    plVar3 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lVar8 = *(long *)(param_2 + 0x20);
  }
  plVar3 = (long *)param_1[8];
  if (plVar3 != (long *)0x0) {
    plVar5 = plVar3 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) goto LAB_1004c8058;
  }
  do {
    param_1[8] = lVar8;
    if ((int)plVar6 == 0) {
      plVar5 = (long *)param_1[10];
      if (plVar5 != (long *)0x0) {
LAB_1004c8014:
        func_0x0001004c7e8c(auStack_90,param_2);
        (**(code **)(*plVar5 + 0x20))(plVar5,auStack_90);
        FUN_1004d89a4(auStack_90);
        return;
      }
    }
    else {
      plVar6 = (long *)0x48;
      if (param_1[9] != 0) {
        plVar6 = (long *)0x50;
        plVar7 = param_1 + 10;
      }
      plVar3 = *(long **)(param_2 + 0x20);
      (**(code **)(*plVar3 + 0x10))();
      FUN_1004c8080(&uStack_48,param_1,plVar3,*(undefined8 *)(param_2 + 0x40));
      plVar3 = *(long **)((long)param_1 + (long)plVar6);
      *(undefined8 *)((long)param_1 + (long)plVar6) = uStack_48;
      if (plVar3 != (long *)0x0) {
        (**(code **)*plVar3)();
      }
    }
    plVar5 = (long *)*plVar7;
    if (plVar5 != (long *)0x0) goto LAB_1004c8014;
    func_0x000107c2c1c4();
    param_1 = (long *)0x0;
LAB_1004c8058:
    (**(code **)(*plVar3 + 8))();
  } while( true );
}



/* Entry: 1004c8080; end: 1004c8393;  */

void FUN_1004c8080(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined8 ****ppppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *****pppppuVar9;
  undefined8 *extraout_x8;
  long lVar10;
  undefined8 ***pppuVar11;
  long *plVar12;
  undefined8 ***pppuStack_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 *puStack_1a0;
  long *plStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  undefined8 ****ppppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  long lStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_a8;
  long lStack_a0;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)0x18;
  func_0x000107c60e20();
  plVar12 = param_2 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = *plVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *plVar6 = (long)&PTR_DAT_1107c2338;
  plVar6[1] = (long)param_2;
  plVar6[2] = 0;
  lStack_120 = param_2[2];
  plStack_118 = (long *)param_2[3];
  if (plStack_118 != (long *)0x0) {
    plVar12 = plStack_118 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_e8 = (long *)0x0;
  uStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  plStack_110 = plVar6;
  uStack_108 = param_4;
  uStack_e0 = param_4;
  (**(code **)(*param_2 + 0x48))(&puStack_100,param_2,param_3,&lStack_120);
  plVar12 = plStack_110;
  plStack_110 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 8))();
  }
  plVar12 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar7 = plStack_118 + 1;
    do {
      lVar10 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      func_0x000107c60d68(plVar12);
    }
  }
  if (puStack_100 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x11e;
    pppppuVar9 = (undefined8 *****)0x2;
    lStack_140 = param_3;
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/child_policy_handler.cc"
                  ,0x11e,2,"could not create LB policy \"%s\"");
    puVar5 = puStack_100;
    *param_1 = 0;
    puStack_100 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
    }
  }
  else {
    plVar6[2] = (long)puStack_100;
    plVar12 = (long *)param_2[5];
    pcStack_78 = "Created new LB policy \"";
    uStack_70 = 0x17;
    if (param_3 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = param_3;
      func_0x000107c613d0();
    }
    puStack_d8 = &DAT_10f3b3c06;
    uStack_d0 = 1;
    lStack_a8 = param_3;
    lStack_a0 = lVar10;
    FUN_100066c24(&ppppuStack_138,&pcStack_78,&lStack_a8,&puStack_d8);
    pppppuVar9 = (undefined8 *****)ppppuStack_138;
    if (-1 < (char)bStack_121) {
      uStack_130 = (ulong)bStack_121;
      pppppuVar9 = &ppppuStack_138;
    }
    (**(code **)(*plVar12 + 0x30))(plVar12,0,pppppuVar9,uStack_130);
    if ((char)bStack_121 < '\0') {
      func_0x000107c60e14(ppppuStack_138);
    }
    puVar8 = (undefined8 *)param_2[4];
    FUN_1004c7e78(puStack_100[4]);
    *param_1 = puStack_100;
  }
  plVar12 = plStack_e8;
  plStack_e8 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 8))();
  }
  plVar6 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    plVar7 = plStack_f0 + 1;
    do {
      lVar10 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      func_0x000107c60d68();
      plVar12 = plVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    if ((int)puVar8 != 0) {
      func_0x000104bd46a0();
      plVar6 = plStack_110;
      plStack_110 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0001004c05d4(&lStack_120);
      plVar6 = plStack_e8;
      plStack_e8 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0001004c05d4(&uStack_f8);
    }
    plVar6 = plVar12;
    func_0x000107c60bd8(plVar12);
    pcStack_148 = FUN_1004c8394;
    plStack_160 = param_2;
    plStack_158 = plVar12;
    puStack_150 = &stack0xfffffffffffffff0;
    if (plRam00000001136a1db8 == (long *)0x0) {
      plVar7 = plRam00000001136a1db8;
      func_0x000107c2c1e4(0,plVar6);
      plVar12 = plStack_170;
      plStack_170 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 8))();
      }
      func_0x0001004c05d4(&uStack_180);
      func_0x000107c60bd8(plVar7);
      pcStack_188 = FUN_1004c8480;
      pppuStack_1b8 = pppppuVar9[1];
      pppuStack_1c0 = *pppppuVar9;
      pppuStack_1a8 = pppppuVar9[3];
      pppuStack_1b0 = pppppuVar9[2];
      pppppuVar9[1] = (undefined8 ****)0x0;
      pppppuVar9[2] = (undefined8 ****)0x0;
      *pppppuVar9 = (undefined8 ****)0x0;
      puStack_1a0 = puVar8;
      plStack_198 = plVar7;
      ppuStack_190 = &puStack_150;
      FUN_1004c8394(plVar6,&pppuStack_1c0);
      pppuVar4 = pppuStack_1b0;
      pppuStack_1b0 = (undefined8 ***)0x0;
      if ((undefined8 ****)pppuVar4 != (undefined8 ****)0x0) {
        (*(code *)(*pppuVar4)[1])();
      }
      pppuVar4 = pppuStack_1b8;
      if ((undefined8 ****)pppuStack_1b8 != (undefined8 ****)0x0) {
        ppppuVar1 = (undefined8 ****)(pppuStack_1b8 + 1);
        do {
          pppuVar11 = *ppppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
          if (bVar3) {
            *ppppuVar1 = (undefined8 ***)((long)pppuVar11 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (pppuVar11 == (undefined8 ***)0x0) {
          (*(code *)(*pppuStack_1b8)[2])(pppuStack_1b8);
          func_0x000107c60d68(pppuVar4);
        }
      }
      return;
    }
    plVar12 = plRam00000001136a1db8;
    FUN_1004c7318();
    if (plVar12 == (long *)0x0) {
      *extraout_x8 = 0;
    }
    else {
      plStack_178 = (long *)puVar8[1];
      uStack_180 = *puVar8;
      uStack_168 = puVar8[3];
      plStack_170 = (long *)puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      (**(code **)(*plVar12 + 0x10))(extraout_x8);
      plVar12 = plStack_170;
      plStack_170 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 8))();
      }
      plVar12 = plStack_178;
      if (plStack_178 != (long *)0x0) {
        plVar6 = plStack_178 + 1;
        do {
          lVar10 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          func_0x000107c60d68(plVar12);
        }
      }
    }
    return;
  }
  return;
}



/* Entry: 1004c8394; end: 1004c847f;  */

void FUN_1004c8394(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  if (plRam00000001136a1db8 != (long *)0x0) {
    plVar3 = plRam00000001136a1db8;
    FUN_1004c7318();
    if (plVar3 == (long *)0x0) {
      *param_1 = 0;
    }
    else {
      plStack_38 = (long *)param_3[1];
      uStack_40 = *param_3;
      uStack_28 = param_3[3];
      plStack_30 = (long *)param_3[2];
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      (**(code **)(*plVar3 + 0x10))(param_1);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar3 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar4 = plStack_38 + 1;
        do {
          lVar5 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          func_0x000107c60d68(plVar3);
        }
      }
    }
    return;
  }
  plVar4 = plRam00000001136a1db8;
  func_0x000107c2c1e4(0,param_2);
  plVar3 = plStack_30;
  plStack_30 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  func_0x0001004c05d4(&uStack_40);
  func_0x000107c60bd8(plVar4);
  pcStack_48 = FUN_1004c8480;
  plStack_78 = (long *)param_4[1];
  uStack_80 = *param_4;
  uStack_68 = param_4[3];
  plStack_70 = (long *)param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  puStack_60 = param_3;
  plStack_58 = plVar4;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1004c8394(param_2,&uStack_80);
  plVar3 = plStack_70;
  plStack_70 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar4 = plStack_78 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      func_0x000107c60d68(plVar3);
    }
  }
  return;
}



/* Entry: 1004c8480; end: 1004c8537;  */

void FUN_1004c8480(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  uStack_28 = param_3[3];
  plStack_30 = (long *)param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_1004c8394(param_2,&uStack_40);
  plVar4 = plStack_30;
  plStack_30 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      func_0x000107c60d68(plVar4);
    }
  }
  return;
}



/* Entry: 1004c8538; end: 1004c8667;  */

void FUN_1004c8538(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)0x98;
  func_0x000107c60e20();
  plStack_58 = (long *)param_3[1];
  uStack_60 = *param_3;
  uStack_48 = param_3[3];
  plStack_50 = (long *)param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  FUN_1004c7d1c(&uStack_60);
  plVar4 = plStack_50;
  plStack_50 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_58;
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
      func_0x000107c60d68(plVar4);
    }
  }
  *puVar5 = &PTR_DAT_1107c2510;
  FUN_1004c44d4(puVar5 + 6);
  *(undefined2 *)(puVar5 + 0x12) = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  *param_1 = puVar5;
  return;
}



/* Entry: 1004c8668; end: 1004c86fb;  */

void FUN_1004c8668(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *extraout_x8;
  long lVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long *)(*(long *)(param_1 + 8) + 0x170) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x58), lVar2 != 0)) {
    iVar1 = 2;
    if (param_2 != 1) {
      iVar1 = 3;
    }
    if (param_2 == 0) {
      iVar1 = 1;
    }
    FUN_1004b6808(auStack_48,param_3,param_4);
    param_1 = lVar2 + 0x70;
    param_2 = iVar1;
    FUN_10047e7e4(param_1,iVar1,auStack_48);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  *extraout_x8 = 1;
  *(long *)(extraout_x8 + 2) = param_1;
  extraout_x8[4] = param_2;
  return;
}



/* Entry: 1004c86fc; end: 1004c870f;  */

void FUN_1004c86fc(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = param_2;
  param_1[4] = param_3;
  return;
}



/* Entry: 1004c8710; end: 1004c87a3;  */

void FUN_1004c8710(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [32];
  
  FUN_1004c86fc(auStack_40,"grpc.inhibit_health_checking",1);
  lVar1 = param_2[8];
  FUN_1004c87a4(lVar1,auStack_40,1);
  lVar2 = param_2[8];
  param_2[8] = lVar1;
  FUN_10048650c(lVar2);
  if ((*param_2 != 0) && (*(long *)(param_1 + 0x50) != 0)) {
    FUN_1004c7a78(param_2,param_1 + 0x30);
  }
  FUN_1004c87b8(param_1 + 0x30,param_2);
  if (*(char *)(param_1 + 0x90) == '\0') {
    FUN_1004c8a50(param_1);
  }
  return;
}



/* Entry: 1004c87a4; end: 1004c87b7;  */

/* WARNING: Removing unreachable block (ram,0x00010047f974) */
/* WARNING: Removing unreachable block (ram,0x00010047f9cc) */
/* WARNING: Removing unreachable block (ram,0x00010047f990) */
/* WARNING: Removing unreachable block (ram,0x00010047f994) */
/* WARNING: Removing unreachable block (ram,0x00010047f9a0) */
/* WARNING: Removing unreachable block (ram,0x00010047f9b4) */
/* WARNING: Removing unreachable block (ram,0x00010047f9d0) */
/* WARNING: Removing unreachable block (ram,0x00010047fa30) */
/* WARNING: Removing unreachable block (ram,0x00010047faa8) */
/* WARNING: Removing unreachable block (ram,0x00010047fa4c) */
/* WARNING: Removing unreachable block (ram,0x00010047fa50) */
/* WARNING: Removing unreachable block (ram,0x00010047fa5c) */
/* WARNING: Removing unreachable block (ram,0x00010047fa70) */

long * FUN_1004c87a4(ulong *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((param_1 == (ulong *)0x0) || (*param_1 == 0)) {
    lVar4 = 0;
  }
  else {
    uVar5 = 0;
    lVar4 = 0;
    do {
      lVar4 = lVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != *param_1);
  }
  plVar2 = (long *)0x10;
  FUN_100460200();
  lVar4 = lVar4 + param_3;
  *plVar2 = lVar4;
  if (lVar4 != 0) {
    lVar4 = lVar4 * 0x20;
    FUN_100460200();
    plVar2[1] = lVar4;
    if ((param_1 == (ulong *)0x0) || (*param_1 == 0)) {
      lVar4 = 0;
    }
    else {
      uVar5 = 0;
      lVar4 = 0;
      do {
        FUN_10047fb38(&uStack_80,param_1[1] + uVar5 * 0x20);
        puVar1 = (undefined8 *)(plVar2[1] + lVar4 * 0x20);
        lVar4 = lVar4 + 1;
        puVar1[1] = uStack_78;
        *puVar1 = uStack_80;
        puVar1[3] = uStack_68;
        puVar1[2] = uStack_70;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *param_1);
    }
    if (param_3 != 0) {
      lVar3 = lVar4 << 5;
      lVar4 = lVar4 + param_3;
      do {
        FUN_10047fb38(&uStack_80,param_2);
        puVar1 = (undefined8 *)(plVar2[1] + lVar3);
        puVar1[1] = uStack_78;
        *puVar1 = uStack_80;
        puVar1[3] = uStack_68;
        puVar1[2] = uStack_70;
        param_2 = param_2 + 0x20;
        lVar3 = lVar3 + 0x20;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (lVar4 == *plVar2) {
      return plVar2;
    }
    func_0x000107c2c2e8();
  }
  plVar2[1] = 0;
  return plVar2;
}



/* Entry: 1004c87b8; end: 1004c886b;  */

long FUN_1004c87b8(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_1004c7a78();
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar4 != (long *)0x0) {
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_2 + 0x20) = 0;
  if (*(char *)(param_1 + 0x3f) < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 0x28));
  }
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  *(undefined1 *)(param_2 + 0x3f) = 0;
  *(undefined1 *)(param_2 + 0x28) = 0;
  FUN_10048650c(*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  return param_1;
}



/* Entry: 1004c886c; end: 1004c88c7;  */

void FUN_1004c886c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0xa8;
        FUN_1004d79ec();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    func_0x000107c60e14(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1004c88c8; end: 1004c8a4f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1004c88c8(long *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *******ppppppplVar8;
  ulong uVar9;
  code *pcVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long ******pppppplVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long *****ppppplVar19;
  int *piVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long *plStack_278;
  long *plStack_270;
  ulong uStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  long *******ppppppplStack_220;
  ulong uStack_218;
  byte bStack_209;
  long *plStack_208;
  long *plStack_200;
  ulong uStack_1f8;
  ulong *puStack_158;
  undefined8 uStack_150;
  long lStack_b0;
  
  plVar11 = param_1 + 2;
  if (param_4 <= (ulong)((*plVar11 - *param_1 >> 3) * -0x30c30c30c30c30c3)) {
    lVar16 = param_1[1] - *param_1 >> 3;
    if (param_4 <= (ulong)(lVar16 * -0x30c30c30c30c30c3)) {
      func_0x000104a834f4(param_2);
      lVar16 = param_1[1];
      while (lVar16 != param_3) {
        lVar16 = lVar16 + -0xa8;
        FUN_1004d79ec();
      }
      param_1[1] = param_3;
      return;
    }
    lVar16 = param_2 + lVar16 * 8;
    func_0x000104a834f4(param_2,lVar16);
    FUN_1004c5154(plVar11,lVar16,param_3,param_1[1]);
LAB_1004c89ec:
    param_1[1] = (long)plVar11;
    return;
  }
  FUN_1004c886c(param_1);
  if (param_4 < 0x186186186186187) {
    lVar16 = param_1[2] - *param_1 >> 3;
    uVar21 = lVar16 * -0x6186186186186186;
    if (uVar21 < param_4 || uVar21 - param_4 == 0) {
      uVar21 = param_4;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar16 * -0x30c30c30c30c30c3)) {
      uVar21 = 0x186186186186186;
    }
    FUN_1004c5078(param_1,uVar21);
    FUN_1004c5154(plVar11,param_2,param_3,param_1[1]);
    goto LAB_1004c89ec;
  }
  plVar11 = param_1;
  func_0x000104a83310();
  param_1[1] = param_2;
  func_0x000107c60bd8();
  param_1[1] = param_4;
  func_0x000107c60bd8();
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  if (plVar11[6] == 0 && &uStack_268 != (ulong *)(plVar11 + 7)) {
    FUN_1004c88c8(&uStack_268,plVar11[7],plVar11[8],
                  (plVar11[8] - plVar11[7] >> 3) * -0x30c30c30c30c30c3);
  }
  lVar16 = plVar11[0xe];
  puVar12 = (undefined8 *)0x48;
  func_0x000107c60e20();
  uStack_228 = uStack_258;
  uVar9 = uStack_260;
  uVar21 = uStack_268;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_268 = 0;
  uStack_240 = 0;
  uStack_238 = uVar21;
  uStack_230 = uVar9;
  uStack_250 = 0;
  uStack_248 = 0;
  plVar26 = (long *)plVar11[5];
  *puVar12 = &PTR_DAT_1107c25f0;
  puVar12[1] = 1;
  puVar12[2] = plVar11;
  puVar12[4] = 0;
  puVar12[3] = 0;
  puVar12[6] = 0;
  puVar12[5] = 0;
  *(undefined1 *)(puVar12 + 7) = 0;
  if (uVar9 - uVar21 != 0) {
    lVar17 = (long)(uVar9 - uVar21) >> 3;
    if (0x555555555555555 < (ulong)(lVar17 * -0x30c30c30c30c30c3)) goto LAB_1004c921c;
    lVar13 = lVar17 * -0x2492492492492490;
    func_0x000107c60e20();
    puVar12[4] = lVar13;
    puVar12[5] = lVar13;
    puVar12[6] = lVar13 + lVar17 * -0x2492492492492490;
    do {
      FUN_1004c5150(&puStack_158,uVar21);
      FUN_1004c5150(&plStack_200,&puStack_158);
      (**(code **)(*plVar26 + 0x10))(&plStack_208,plVar26,&plStack_200,lVar16);
      FUN_1004d79ec(&plStack_200);
      lVar17 = puVar12[3];
      if (plStack_208 == (long *)0x0) {
        if (lVar17 != 0) {
          func_0x000104aca84c(&ppppppplStack_220,&puStack_158);
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                        ,0x17f,1,"[%s %p] could not create subchannel for address %s, ignoring");
          if ((char)bStack_209 < '\0') {
            func_0x000107c60e14(ppppppplStack_220);
          }
          goto LAB_1004c8d60;
        }
      }
      else {
        if (lVar17 != 0) {
          func_0x000104aca84c(&ppppppplStack_220,&puStack_158);
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                        ,0x186,1,
                        "[%s %p] subchannel list %p index %lu: Created subchannel %p for address %s"
                       );
          if ((char)bStack_209 < '\0') {
            func_0x000107c60e14(ppppppplStack_220);
          }
        }
        puVar15 = (undefined8 *)puVar12[5];
        if (puVar15 < (undefined8 *)puVar12[6]) {
          puVar15[3] = 0;
          puVar15[2] = 0;
          puVar15[5] = 0;
          puVar15[4] = 0;
          puVar18 = puVar15 + 6;
          puVar15[1] = 0;
          *puVar15 = 0;
        }
        else {
          puVar27 = (undefined8 *)puVar12[4];
          lVar17 = (long)puVar15 - (long)puVar27 >> 4;
          uVar1 = lVar17 * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar1) {
            func_0x000104a845b0();
            goto LAB_1004c9220;
          }
          lVar13 = (long)puVar12[6] - (long)puVar27 >> 4;
          uVar23 = lVar13 * 0x5555555555555556;
          if (uVar23 < uVar1 || uVar23 - uVar1 == 0) {
            uVar23 = uVar1;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar13 * -0x5555555555555555)) {
            uVar23 = 0x555555555555555;
          }
          if (uVar23 == 0) {
            lVar13 = 0;
          }
          else {
            if (0x555555555555555 < uVar23) {
              func_0x000104a7757c();
              goto LAB_1004c9220;
            }
            lVar13 = uVar23 * 0x30;
            func_0x000107c60e20();
          }
          puVar18 = (undefined8 *)(lVar13 + lVar17 * 0x10);
          puVar18[3] = 0;
          puVar18[2] = 0;
          puVar18[5] = 0;
          puVar18[4] = 0;
          puVar18[1] = 0;
          *puVar18 = 0;
          puVar22 = puVar18;
          if (puVar15 != puVar27) {
            do {
              uVar29 = puVar15[-5];
              uVar28 = puVar15[-6];
              puVar7 = puVar15 + -3;
              uVar30 = puVar15[-4];
              uVar32 = puVar15[-1];
              uVar31 = puVar15[-2];
              puVar15 = puVar15 + -6;
              puVar22[-3] = *puVar7;
              puVar22[-4] = uVar30;
              puVar22[-1] = uVar32;
              puVar22[-2] = uVar31;
              puVar22[-5] = uVar29;
              puVar22[-6] = uVar28;
              puVar22 = puVar22 + -6;
            } while (puVar15 != puVar27);
            puVar15 = (undefined8 *)puVar12[4];
          }
          puVar18 = puVar18 + 6;
          puVar12[4] = puVar22;
          puVar12[5] = puVar18;
          puVar12[6] = lVar13 + uVar23 * 0x30;
          if (puVar15 != (undefined8 *)0x0) {
            func_0x000107c60e14(puVar15);
          }
        }
        plVar25 = plStack_208;
        puVar12[5] = puVar18;
        plStack_208 = (long *)0x0;
        puVar18[-4] = plVar25;
        puVar18[-3] = 0;
        *(undefined1 *)(puVar18 + -2) = 0;
        *(undefined1 *)((long)puVar18 + -0xc) = 0;
        puVar18[-1] = 0;
        puVar18[-6] = &PTR_DAT_1107c2620;
        puVar18[-5] = puVar12;
LAB_1004c8d60:
        if (plStack_208 != (long *)0x0) {
          plVar25 = plStack_208 + 1;
          do {
            lVar17 = *plVar25;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar6) {
              *plVar25 = lVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar17 + -1 == 0) {
            (**(code **)(*plStack_208 + 8))();
          }
        }
      }
      FUN_1004d79ec(&puStack_158);
      uVar21 = uVar21 + 0xa8;
    } while (uVar21 != uVar9);
    ppppplVar4 = (long *****)puVar12[5];
    for (ppppplVar3 = (long *****)puVar12[4]; ppppplVar3 != ppppplVar4; ppppplVar3 = ppppplVar3 + 6)
    {
      if (ppppplVar3[1][3] != (long ***)0x0) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                      ,0x13f,1,
                      "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): starting watch")
        ;
      }
      if (ppppplVar3[3] != (long ****)0x0) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                      ,0x146,2,"assertion failed: %s");
        func_0x000107c60ebc();
        goto LAB_1004c9220;
      }
      pppppplVar14 = (long ******)0x18;
      func_0x000107c60e20();
      ppppplVar19 = (long *****)ppppplVar3[1];
      ppppplVar2 = ppppplVar19 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppplVar2,0x10);
        if (bVar6) {
          *ppppplVar2 = (long ****)((long)*ppppplVar2 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *pppppplVar14 = (long *****)&PTR_DAT_1107c26d8;
      pppppplVar14[1] = ppppplVar3;
      pppppplVar14[2] = ppppplVar19;
      ppppplVar3[3] = (long ****)pppppplVar14;
      ppppppplStack_220 = (long *******)pppppplVar14;
      (*(code *)(*ppppplVar3[2])[2])(ppppplVar3[2],&ppppppplStack_220);
      ppppppplVar8 = ppppppplStack_220;
      ppppppplStack_220 = (long *******)0x0;
      if (ppppppplVar8 != (long *******)0x0) {
        (*(code *)(*ppppppplVar8)[1])();
      }
    }
  }
  puStack_158 = &uStack_238;
  FUN_1004c4cbc(&puStack_158);
  *puVar12 = &PTR_DAT_1107c2578;
  *(undefined1 *)((long)puVar12 + 0x39) = 0;
  puVar12[8] = 0;
  plVar26 = plVar11 + 1;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar6) {
      *plVar26 = *plVar26 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puStack_158 = &uStack_250;
  FUN_1004c4cbc(&puStack_158);
  plVar25 = plVar11 + 0x10;
  puVar15 = (undefined8 *)*plVar25;
  *plVar25 = (long)puVar12;
  if (puVar15 != (undefined8 *)0x0) {
    (**(code **)*puVar15)();
    puVar12 = (undefined8 *)*plVar25;
  }
  if (puVar12[5] == puVar12[4]) {
    uVar21 = plVar11[6];
    if (uVar21 == 0) {
      puStack_158 = (ulong *)0x10f230fb4;
      uStack_150 = 0x14;
      uStack_1f8 = plVar11[0xc];
      plStack_200 = (long *)plVar11[0xb];
      if (-1 < (char)*(byte *)((long)plVar11 + 0x6f)) {
        uStack_1f8 = (ulong)*(byte *)((long)plVar11 + 0x6f);
        plStack_200 = plVar11 + 0xb;
      }
      FUN_10047c83c(&ppppppplStack_220,&puStack_158,&plStack_200);
      ppppppplVar8 = ppppppplStack_220;
      if (-1 < (char)bStack_209) {
        uStack_218 = (ulong)bStack_209;
        ppppppplVar8 = (long *******)&ppppppplStack_220;
      }
      func_0x000107c2b9cc(&uStack_238,ppppppplVar8,uStack_218);
      if ((char)bStack_209 < '\0') {
        func_0x000107c60e14(ppppppplStack_220);
      }
    }
    else {
      uStack_238 = uVar21;
      if ((uVar21 & 1) != 0) {
        piVar20 = (int *)(uVar21 - 1);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar6) {
            *piVar20 = *piVar20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    plVar24 = (long *)plVar11[5];
    plVar26 = (long *)0x10;
    func_0x000107c60e20();
    if ((uStack_238 & 1) == 0) {
      *plVar26 = (long)&PTR_DAT_1107c1550;
      plVar26[1] = uStack_238;
    }
    else {
      piVar20 = (int *)(uStack_238 - 1);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar6) {
          *piVar20 = *piVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *plVar26 = (long)&PTR_DAT_1107c1550;
      plVar26[1] = uStack_238;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar6) {
          *piVar20 = *piVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_10084dad0();
    }
    plStack_270 = plVar26;
    (**(code **)(*plVar24 + 0x18))(plVar24,3,&uStack_238,&plStack_270);
    plVar26 = plStack_270;
    plStack_270 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 8))();
    }
    if ((uStack_238 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else if (plVar11[0xf] == 0) {
    plVar24 = (long *)plVar11[5];
    puStack_158 = (ulong *)0x0;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *plVar26 = *plVar26 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar26 = (long *)0x18;
    func_0x000107c60e20();
    *plVar26 = (long)&PTR_DAT_1107c21d0;
    plVar26[1] = (long)plVar11;
    *(undefined1 *)(plVar26 + 2) = 0;
    plStack_278 = plVar26;
    (**(code **)(*plVar24 + 0x18))(plVar24,1,&puStack_158,&plStack_278);
    plVar26 = plStack_278;
    plStack_278 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 8))();
    }
    if (((ulong)puStack_158 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if ((*(long *)(*plVar25 + 0x28) == *(long *)(*plVar25 + 0x20)) || (plVar11[0x11] == 0)) {
    plVar11[0x11] = 0;
    FUN_1004d8960(plVar11 + 0xf,plVar25);
  }
  puStack_158 = &uStack_268;
  FUN_1004c4cbc(&puStack_158);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  func_0x000107c60e78();
LAB_1004c921c:
  func_0x000104a845b0();
LAB_1004c9220:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1004c9224);
  (*pcVar10)();
}



/* Entry: 1004c8a50; end: 1004c93eb;  */

void FUN_1004c8a50(long param_1)

{
  ulong uVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *******ppppppplVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  long lVar12;
  long ******pppppplVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long *****ppppplVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long *plStack_238;
  long *plStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  long ******pppppplStack_1e0;
  ulong uStack_1d8;
  byte bStack_1c9;
  long *plStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong *puStack_118;
  undefined8 uStack_110;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  if (*(long *)(param_1 + 0x30) == 0 && &uStack_228 != (ulong *)(param_1 + 0x38)) {
    FUN_1004c88c8(&uStack_228,*(long *)(param_1 + 0x38),*(long *)(param_1 + 0x40),
                  (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 3) * -0x30c30c30c30c30c3
                 );
  }
  uVar23 = *(undefined8 *)(param_1 + 0x70);
  puVar11 = (undefined8 *)0x48;
  func_0x000107c60e20();
  uStack_1e8 = uStack_218;
  uVar9 = uStack_220;
  uVar18 = uStack_228;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_228 = 0;
  uStack_200 = 0;
  uStack_1f8 = uVar18;
  uStack_1f0 = uVar9;
  uStack_210 = 0;
  uStack_208 = 0;
  plVar25 = *(long **)(param_1 + 0x28);
  *puVar11 = &PTR_DAT_1107c25f0;
  puVar11[1] = 1;
  puVar11[2] = param_1;
  puVar11[4] = 0;
  puVar11[3] = 0;
  puVar11[6] = 0;
  puVar11[5] = 0;
  *(undefined1 *)(puVar11 + 7) = 0;
  if (uVar9 - uVar18 != 0) {
    lVar15 = (long)(uVar9 - uVar18) >> 3;
    if (0x555555555555555 < (ulong)(lVar15 * -0x30c30c30c30c30c3)) goto LAB_1004c921c;
    lVar12 = lVar15 * -0x2492492492492490;
    func_0x000107c60e20();
    puVar11[4] = lVar12;
    puVar11[5] = lVar12;
    puVar11[6] = lVar12 + lVar15 * -0x2492492492492490;
    do {
      FUN_1004c5150(&puStack_118,uVar18);
      FUN_1004c5150(&lStack_1c0,&puStack_118);
      (**(code **)(*plVar25 + 0x10))(&plStack_1c8,plVar25,&lStack_1c0,uVar23);
      FUN_1004d79ec(&lStack_1c0);
      lVar15 = puVar11[3];
      if (plStack_1c8 == (long *)0x0) {
        if (lVar15 != 0) {
          func_0x000104aca84c(&pppppplStack_1e0,&puStack_118);
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                        ,0x17f,1,"[%s %p] could not create subchannel for address %s, ignoring");
          if ((char)bStack_1c9 < '\0') {
            func_0x000107c60e14(pppppplStack_1e0);
          }
          goto LAB_1004c8d60;
        }
      }
      else {
        if (lVar15 != 0) {
          func_0x000104aca84c(&pppppplStack_1e0,&puStack_118);
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                        ,0x186,1,
                        "[%s %p] subchannel list %p index %lu: Created subchannel %p for address %s"
                       );
          if ((char)bStack_1c9 < '\0') {
            func_0x000107c60e14(pppppplStack_1e0);
          }
        }
        puVar14 = (undefined8 *)puVar11[5];
        if (puVar14 < (undefined8 *)puVar11[6]) {
          puVar14[3] = 0;
          puVar14[2] = 0;
          puVar14[5] = 0;
          puVar14[4] = 0;
          puVar16 = puVar14 + 6;
          puVar14[1] = 0;
          *puVar14 = 0;
        }
        else {
          puVar26 = (undefined8 *)puVar11[4];
          lVar15 = (long)puVar14 - (long)puVar26 >> 4;
          uVar1 = lVar15 * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar1) {
            func_0x000104a845b0();
            goto LAB_1004c9220;
          }
          lVar12 = (long)puVar11[6] - (long)puVar26 >> 4;
          uVar21 = lVar12 * 0x5555555555555556;
          if (uVar21 < uVar1 || uVar21 - uVar1 == 0) {
            uVar21 = uVar1;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
            uVar21 = 0x555555555555555;
          }
          if (uVar21 == 0) {
            lVar12 = 0;
          }
          else {
            if (0x555555555555555 < uVar21) {
              func_0x000104a7757c();
              goto LAB_1004c9220;
            }
            lVar12 = uVar21 * 0x30;
            func_0x000107c60e20();
          }
          puVar16 = (undefined8 *)(lVar12 + lVar15 * 0x10);
          puVar16[3] = 0;
          puVar16[2] = 0;
          puVar16[5] = 0;
          puVar16[4] = 0;
          puVar16[1] = 0;
          *puVar16 = 0;
          puVar20 = puVar16;
          if (puVar14 != puVar26) {
            do {
              uVar28 = puVar14[-5];
              uVar27 = puVar14[-6];
              puVar7 = puVar14 + -3;
              uVar29 = puVar14[-4];
              uVar31 = puVar14[-1];
              uVar30 = puVar14[-2];
              puVar14 = puVar14 + -6;
              puVar20[-3] = *puVar7;
              puVar20[-4] = uVar29;
              puVar20[-1] = uVar31;
              puVar20[-2] = uVar30;
              puVar20[-5] = uVar28;
              puVar20[-6] = uVar27;
              puVar20 = puVar20 + -6;
            } while (puVar14 != puVar26);
            puVar14 = (undefined8 *)puVar11[4];
          }
          puVar16 = puVar16 + 6;
          puVar11[4] = puVar20;
          puVar11[5] = puVar16;
          puVar11[6] = lVar12 + uVar21 * 0x30;
          if (puVar14 != (undefined8 *)0x0) {
            func_0x000107c60e14(puVar14);
          }
        }
        plVar24 = plStack_1c8;
        puVar11[5] = puVar16;
        plStack_1c8 = (long *)0x0;
        puVar16[-4] = plVar24;
        puVar16[-3] = 0;
        *(undefined1 *)(puVar16 + -2) = 0;
        *(undefined1 *)((long)puVar16 + -0xc) = 0;
        puVar16[-1] = 0;
        puVar16[-6] = &PTR_DAT_1107c2620;
        puVar16[-5] = puVar11;
LAB_1004c8d60:
        if (plStack_1c8 != (long *)0x0) {
          plVar24 = plStack_1c8 + 1;
          do {
            lVar15 = *plVar24;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar6) {
              *plVar24 = lVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar15 + -1 == 0) {
            (**(code **)(*plStack_1c8 + 8))();
          }
        }
      }
      FUN_1004d79ec(&puStack_118);
      uVar18 = uVar18 + 0xa8;
    } while (uVar18 != uVar9);
    ppppplVar4 = (long *****)puVar11[5];
    for (ppppplVar3 = (long *****)puVar11[4]; ppppplVar3 != ppppplVar4; ppppplVar3 = ppppplVar3 + 6)
    {
      if (ppppplVar3[1][3] != (long ***)0x0) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                      ,0x13f,1,
                      "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): starting watch")
        ;
      }
      if (ppppplVar3[3] != (long ****)0x0) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                      ,0x146,2,"assertion failed: %s");
        func_0x000107c60ebc();
        goto LAB_1004c9220;
      }
      pppppplVar13 = (long ******)0x18;
      func_0x000107c60e20();
      ppppplVar17 = (long *****)ppppplVar3[1];
      ppppplVar2 = ppppplVar17 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppplVar2,0x10);
        if (bVar6) {
          *ppppplVar2 = (long ****)((long)*ppppplVar2 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *pppppplVar13 = (long *****)&PTR_DAT_1107c26d8;
      pppppplVar13[1] = ppppplVar3;
      pppppplVar13[2] = ppppplVar17;
      ppppplVar3[3] = (long ****)pppppplVar13;
      pppppplStack_1e0 = pppppplVar13;
      (*(code *)(*ppppplVar3[2])[2])(ppppplVar3[2],&pppppplStack_1e0);
      pppppplVar13 = pppppplStack_1e0;
      pppppplStack_1e0 = (long ******)0x0;
      if (pppppplVar13 != (long ******)0x0) {
        (*(code *)(*pppppplVar13)[1])();
      }
    }
  }
  puStack_118 = &uStack_1f8;
  FUN_1004c4cbc(&puStack_118);
  *puVar11 = &PTR_DAT_1107c2578;
  *(undefined1 *)((long)puVar11 + 0x39) = 0;
  puVar11[8] = 0;
  plVar25 = (long *)(param_1 + 8);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar6) {
      *plVar25 = *plVar25 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puStack_118 = &uStack_210;
  FUN_1004c4cbc(&puStack_118);
  plVar24 = (long *)(param_1 + 0x80);
  puVar14 = (undefined8 *)*plVar24;
  *plVar24 = (long)puVar11;
  if (puVar14 != (undefined8 *)0x0) {
    (**(code **)*puVar14)();
    puVar11 = (undefined8 *)*plVar24;
  }
  if (puVar11[5] == puVar11[4]) {
    uVar18 = *(ulong *)(param_1 + 0x30);
    if (uVar18 == 0) {
      puStack_118 = (ulong *)0x10f230fb4;
      uStack_110 = 0x14;
      uStack_1b8 = *(ulong *)(param_1 + 0x60);
      lStack_1c0 = *(long *)(param_1 + 0x58);
      if (-1 < (char)*(byte *)(param_1 + 0x6f)) {
        uStack_1b8 = (ulong)*(byte *)(param_1 + 0x6f);
        lStack_1c0 = param_1 + 0x58;
      }
      FUN_10047c83c(&pppppplStack_1e0,&puStack_118,&lStack_1c0);
      ppppppplVar8 = (long *******)pppppplStack_1e0;
      if (-1 < (char)bStack_1c9) {
        uStack_1d8 = (ulong)bStack_1c9;
        ppppppplVar8 = &pppppplStack_1e0;
      }
      func_0x000107c2b9cc(&uStack_1f8,ppppppplVar8,uStack_1d8);
      if ((char)bStack_1c9 < '\0') {
        func_0x000107c60e14(pppppplStack_1e0);
      }
    }
    else {
      uStack_1f8 = uVar18;
      if ((uVar18 & 1) != 0) {
        piVar19 = (int *)(uVar18 - 1);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = *piVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    plVar22 = *(long **)(param_1 + 0x28);
    plVar25 = (long *)0x10;
    func_0x000107c60e20();
    if ((uStack_1f8 & 1) == 0) {
      *plVar25 = (long)&PTR_DAT_1107c1550;
      plVar25[1] = uStack_1f8;
    }
    else {
      piVar19 = (int *)(uStack_1f8 - 1);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar6) {
          *piVar19 = *piVar19 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *plVar25 = (long)&PTR_DAT_1107c1550;
      plVar25[1] = uStack_1f8;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar6) {
          *piVar19 = *piVar19 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_10084dad0();
    }
    plStack_230 = plVar25;
    (**(code **)(*plVar22 + 0x18))(plVar22,3,&uStack_1f8,&plStack_230);
    plVar25 = plStack_230;
    plStack_230 = (long *)0x0;
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 8))();
    }
    if ((uStack_1f8 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else if (*(long *)(param_1 + 0x78) == 0) {
    plVar22 = *(long **)(param_1 + 0x28);
    puStack_118 = (ulong *)0x0;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *plVar25 = *plVar25 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar25 = (long *)0x18;
    func_0x000107c60e20();
    *plVar25 = (long)&PTR_DAT_1107c21d0;
    plVar25[1] = param_1;
    *(undefined1 *)(plVar25 + 2) = 0;
    plStack_238 = plVar25;
    (**(code **)(*plVar22 + 0x18))(plVar22,1,&puStack_118,&plStack_238);
    plVar25 = plStack_238;
    plStack_238 = (long *)0x0;
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 8))();
    }
    if (((ulong)puStack_118 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if ((*(long *)(*plVar24 + 0x28) == *(long *)(*plVar24 + 0x20)) || (*(long *)(param_1 + 0x88) == 0)
     ) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_1004d8960(param_1 + 0x78,plVar24);
  }
  puStack_118 = &uStack_228;
  FUN_1004c4cbc(&puStack_118);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
LAB_1004c921c:
  func_0x000104a845b0();
LAB_1004c9220:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1004c9224);
  (*pcVar10)();
}



/* Entry: 1004c93ec; end: 1004c94c3;  */

undefined8 *
FUN_1004c93ec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 auStack_e0 [21];
  long lStack_38;
  
  puVar5 = auStack_e0;
  puVar3 = auStack_e0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar4 = param_3;
  if ((*(char *)(param_2[1] + 0x38) == '\0') &&
     ((puVar1 = param_2, FUN_1004c94c4(), ((ulong)puVar1 & 1) != 0 ||
      (FUN_1004d8848(), ((ulong)puVar2 & 1) != 0)))) {
    plVar9 = *(long **)(param_2[1] + 0x28);
    FUN_1004c94f0(auStack_e0,param_3);
    (**(code **)(*plVar9 + 0x10))(param_1,plVar9,auStack_e0,param_4);
    FUN_1004d79ec();
  }
  else {
    puVar3 = puVar2;
    *param_1 = 0;
    puVar5 = puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  func_0x000107c60e78();
  FUN_1004d79ec(auStack_e0);
  func_0x000107c60bd8();
  if (puVar3[2] != 0) {
    return (undefined8 *)(ulong)(puVar3[2] == *(long *)(puVar3[1] + 0x48));
  }
  func_0x000107c2c1c8();
  uVar10 = *puVar5;
  puVar3[1] = puVar5[1];
  *puVar3 = uVar10;
  uVar11 = puVar5[3];
  uVar10 = puVar5[2];
  uVar13 = puVar5[5];
  uVar12 = puVar5[4];
  uVar14 = puVar5[6];
  uVar16 = puVar5[9];
  uVar15 = puVar5[8];
  puVar3[7] = puVar5[7];
  puVar3[6] = uVar14;
  puVar3[9] = uVar16;
  puVar3[8] = uVar15;
  puVar3[3] = uVar11;
  puVar3[2] = uVar10;
  puVar3[5] = uVar13;
  puVar3[4] = uVar12;
  uVar11 = puVar5[0xb];
  uVar10 = puVar5[10];
  uVar13 = puVar5[0xd];
  uVar12 = puVar5[0xc];
  uVar15 = puVar5[0xf];
  uVar14 = puVar5[0xe];
  *(undefined4 *)(puVar3 + 0x10) = *(undefined4 *)(puVar5 + 0x10);
  puVar3[0xd] = uVar13;
  puVar3[0xc] = uVar12;
  puVar3[0xf] = uVar15;
  puVar3[0xe] = uVar14;
  puVar3[0xb] = uVar11;
  puVar3[10] = uVar10;
  puVar3[0x11] = puVar5[0x11];
  puVar3[0x12] = puVar5[0x12];
  plVar9 = puVar5 + 0x13;
  lVar7 = *plVar9;
  plVar6 = puVar3 + 0x13;
  *plVar6 = lVar7;
  lVar8 = puVar5[0x14];
  puVar3[0x14] = lVar8;
  if (lVar8 == 0) {
    puVar3[0x12] = plVar6;
  }
  else {
    *(long **)(lVar7 + 0x10) = plVar6;
    puVar5[0x12] = plVar9;
    *plVar9 = 0;
    puVar5[0x14] = 0;
  }
  puVar5[0x11] = 0;
  return puVar3;
}



/* Entry: 1004c94c4; end: 1004c94ef;  */

undefined8 * FUN_1004c94c4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1[2] != 0) {
    return (undefined8 *)(ulong)(param_1[2] == *(long *)(param_1[1] + 0x48));
  }
  func_0x000107c2c1c8();
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar8 = param_2[5];
  uVar7 = param_2[4];
  uVar9 = param_2[6];
  uVar11 = param_2[9];
  uVar10 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar9;
  param_1[9] = uVar11;
  param_1[8] = uVar10;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  uVar8 = param_2[0xd];
  uVar7 = param_2[0xc];
  uVar10 = param_2[0xf];
  uVar9 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar7;
  param_1[0xf] = uVar10;
  param_1[0xe] = uVar9;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  plVar1 = param_2 + 0x13;
  lVar3 = *plVar1;
  plVar2 = param_1 + 0x13;
  *plVar2 = lVar3;
  lVar4 = param_2[0x14];
  param_1[0x14] = lVar4;
  if (lVar4 == 0) {
    param_1[0x12] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[0x12] = plVar1;
    *plVar1 = 0;
    param_2[0x14] = 0;
  }
  param_2[0x11] = 0;
  return param_1;
}



/* Entry: 1004c94f0; end: 1004c9567;  */

void FUN_1004c94f0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar8 = param_2[5];
  uVar7 = param_2[4];
  uVar9 = param_2[6];
  uVar11 = param_2[9];
  uVar10 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar9;
  param_1[9] = uVar11;
  param_1[8] = uVar10;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  uVar8 = param_2[0xd];
  uVar7 = param_2[0xc];
  uVar10 = param_2[0xf];
  uVar9 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar7;
  param_1[0xf] = uVar10;
  param_1[0xe] = uVar9;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  plVar1 = param_2 + 0x13;
  lVar3 = *plVar1;
  plVar2 = param_1 + 0x13;
  *plVar2 = lVar3;
  lVar4 = param_2[0x14];
  param_1[0x14] = lVar4;
  if (lVar4 == 0) {
    param_1[0x12] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[0x12] = plVar1;
    *plVar1 = 0;
    param_2[0x14] = 0;
  }
  param_2[0x11] = 0;
  return;
}



/* Entry: 1004c9568; end: 1004c98d7;  */

void FUN_1004c9568(undefined8 *param_1,ulong *******param_2,ulong ******param_3,ulong ******param_4)

{
  long lVar1;
  ulong *******pppppppuVar2;
  ulong *******pppppppuVar3;
  undefined8 uVar4;
  ulong *******pppppppuVar5;
  ulong ******ppppppuVar6;
  ulong ******ppppppuVar7;
  ulong *****pppppuVar8;
  ulong ****ppppuVar9;
  ulong ****ppppuVar10;
  long lVar11;
  ulong ****ppppuVar12;
  undefined8 uStack_130;
  ulong *****pppppuStack_128;
  ulong ****appppuStack_120 [2];
  char cStack_109;
  char cStack_108;
  ulong *****apppppuStack_100 [4];
  char *pcStack_e0;
  ulong ******ppppppuStack_d8;
  char *pcStack_d0;
  undefined1 auStack_c8 [48];
  byte bStack_98;
  undefined7 uStack_97;
  ulong ******appppppuStack_90 [4];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar5 = param_2 + 1;
  if ((*pppppppuVar5)[0x2e] == (ulong *****)0x0) {
    *param_1 = 0;
  }
  else {
    appppuStack_120[0]._0_1_ = 0;
    cStack_108 = '\0';
    ppppppuVar6 = param_4;
    FUN_100481218(param_4,"grpc.internal.health_check_service_name");
    pppppuStack_128 = (ulong *****)ppppppuVar6;
    if ((ppppppuVar6 != (ulong ******)0x0) &&
       (ppppppuVar6 = param_4, FUN_100480b50(param_4,"grpc.inhibit_health_checking",0),
       ((ulong)ppppppuVar6 & 1) == 0)) {
      func_0x000104a7f734(appppuStack_120,&pppppuStack_128);
    }
    ppppppuStack_d8 = (ulong ******)0x10f230664;
    pcStack_e0 = "grpc.internal.health_check_service_name";
    pcStack_d0 = "grpc.internal.channelz_channel_node";
    FUN_1004c995c(&bStack_98,&pcStack_e0,auStack_c8,apppppuStack_100);
    FUN_1004c99a8(apppppuStack_100,(*pppppppuVar5)[0x33]);
    FUN_1004c9a58(&pcStack_e0,apppppuStack_100,&pcStack_e0,&uStack_130);
    ppppppuVar6 = param_4;
    FUN_100481218(param_4,"grpc.default_authority");
    pppppuVar8 = param_3[0x11];
    if ((pppppuVar8 != (ulong *****)0x0) &&
       (ppppuVar10 = *pppppuVar8, ppppuVar10 != (ulong ****)0x0)) {
      lVar11 = 0;
      ppppuVar12 = (ulong ****)0x0;
      do {
        ppppuVar9 = pppppuVar8[1];
        lVar1 = (long)ppppuVar9 + lVar11;
        uVar4 = *(undefined8 *)(lVar1 + 8);
        func_0x000107c613c0(uVar4,"grpc.default_authority");
        if ((int)uVar4 == 0) {
          if (ppppppuVar6 == (ulong ******)0x0) {
            ppppppuVar6 = *(ulong *******)((long)ppppuVar9 + lVar11 + 0x10);
            goto LAB_1004c96a4;
          }
        }
        else {
LAB_1004c96a4:
          func_0x000104a7f7a8(&pcStack_e0,lVar1);
          pppppuVar8 = param_3[0x11];
          ppppuVar10 = *pppppuVar8;
        }
        ppppuVar12 = (ulong ****)((long)ppppuVar12 + 1);
        lVar11 = lVar11 + 0x20;
      } while (ppppuVar12 < ppppuVar10);
    }
    if (ppppppuVar6 == (ulong ******)0x0) {
      apppppuStack_100[0] = (ulong *****)0x10f22ffcf;
      FUN_1004c9aa4(&bStack_98,apppppuStack_100);
      ppppppuVar6 = *pppppppuVar5 + 8;
      if (*(char *)((long)*pppppppuVar5 + 0x57) < '\0') {
        ppppppuVar6 = (ulong ******)*ppppppuVar6;
      }
      func_0x0001004c9ae8(apppppuStack_100,"grpc.default_authority",ppppppuVar6);
      func_0x0001004c9af4(&pcStack_e0,apppppuStack_100);
    }
    pppppppuVar2 = appppppuStack_90;
    if ((bStack_98 & 1) != 0) {
      pppppppuVar2 = (ulong *******)appppppuStack_90[0];
    }
    pppppppuVar3 = &ppppppuStack_d8;
    if (((ulong)pcStack_e0 & 1) != 0) {
      pppppppuVar3 = (ulong *******)ppppppuStack_d8;
    }
    FUN_10047f924(param_4,pppppppuVar2,CONCAT71(uStack_97,bStack_98) >> 1,pppppppuVar3,
                  (ulong)pcStack_e0 >> 1);
    ppppppuVar6 = param_4;
    (*(code *)(*(*pppppppuVar5)[2])[2])(apppppuStack_100);
    FUN_10048650c(param_4);
    if ((ulong ******)apppppuStack_100[0] == (ulong ******)0x0) {
      *param_1 = 0;
      param_4 = ppppppuVar6;
    }
    else {
      FUN_1004d7234(apppppuStack_100[0],*(undefined4 *)(*pppppppuVar5 + 0x3a));
      param_3 = apppppuStack_100;
      param_4 = (ulong ******)appppuStack_120;
      FUN_1004d72ec(&uStack_130,pppppppuVar5);
      *param_1 = uStack_130;
    }
    param_2 = (ulong *******)apppppuStack_100;
    FUN_1004d6dac();
    if (((ulong)pcStack_e0 & 1) != 0) {
      param_2 = (ulong *******)ppppppuStack_d8;
      func_0x000107c60e14();
    }
    if ((bStack_98 & 1) != 0) {
      param_2 = (ulong *******)appppppuStack_90[0];
      func_0x000107c60e14();
    }
    if ((cStack_108 != '\0') && (cStack_109 < '\0')) {
      param_2 = (ulong *******)CONCAT71(appppuStack_120[0]._1_7_,appppuStack_120[0]._0_1_);
      func_0x000107c60e14();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  if (((ulong)pcStack_e0 & 1) != 0) {
    func_0x000107c60e14(ppppppuStack_d8);
  }
  if ((bStack_98 & 1) != 0) {
    func_0x000107c60e14(appppppuStack_90[0]);
  }
  if ((cStack_108 != '\0') && (cStack_109 < '\0')) {
    func_0x000107c60e14(CONCAT71(appppuStack_120[0]._1_7_,appppuStack_120[0]._0_1_));
  }
  func_0x000107c60bd8();
  ppppppuVar6 = param_4;
  if (param_4 < (ulong ******)0x5) {
    if (param_4 == (ulong ******)0x0) goto LAB_1004c9940;
    pppppppuVar5 = param_2 + 1;
  }
  else {
    ppppppuVar7 = param_4;
    if (param_4 < (ulong ******)0x9) {
      ppppppuVar7 = (ulong ******)0x8;
    }
    pppppppuVar5 = param_2;
    func_0x000104a7f774();
    param_2[1] = (ulong ******)pppppppuVar5;
    param_2[2] = ppppppuVar7;
    *param_2 = (ulong ******)((ulong)*param_2 | 1);
  }
  do {
    *pppppppuVar5 = (ulong ******)*param_3;
    ppppppuVar6 = (ulong ******)((long)ppppppuVar6 + -1);
    pppppppuVar5 = pppppppuVar5 + 1;
    param_3 = param_3 + 1;
  } while (ppppppuVar6 != (ulong ******)0x0);
LAB_1004c9940:
  *param_2 = (ulong ******)((long)*param_2 + (long)param_4 * 2);
  return;
}



/* Entry: 1004c98d8; end: 1004c995b;  */

void FUN_1004c98d8(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_3;
  if (param_3 < 5) {
    if (param_3 == 0) goto LAB_1004c9940;
    puVar1 = param_1 + 1;
  }
  else {
    uVar2 = param_3;
    if (param_3 < 9) {
      uVar2 = 8;
    }
    puVar1 = param_1;
    func_0x000104a7f774();
    param_1[1] = (ulong)puVar1;
    param_1[2] = uVar2;
    *param_1 = *param_1 | 1;
  }
  do {
    *puVar1 = *param_2;
    uVar3 = uVar3 - 1;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  } while (uVar3 != 0);
LAB_1004c9940:
  *param_1 = *param_1 + param_3 * 2;
  return;
}



/* Entry: 1004c995c; end: 1004c99a7;  */

undefined8 * FUN_1004c995c(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  FUN_1004c98d8(param_1,param_2,param_3 - param_2 >> 3);
  return param_1;
}



/* Entry: 1004c99a8; end: 1004c99d3;  */

void FUN_1004c99a8(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 2;
  *(char **)(param_1 + 2) = "grpc.internal.subchannel_pool";
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined ***)(param_1 + 6) = &PTR_DAT_1107c34f0;
  return;
}



/* Entry: 1004c99d4; end: 1004c9a57;  */

void FUN_1004c99d4(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = param_3;
  if (param_3 < 3) {
    if (param_3 == 0) goto LAB_1004c9a3c;
    puVar1 = param_1 + 1;
  }
  else {
    uVar3 = param_3;
    if (param_3 < 5) {
      uVar3 = 4;
    }
    puVar1 = param_1;
    func_0x000104a7f324();
    param_1[1] = (ulong)puVar1;
    param_1[2] = uVar3;
    *param_1 = *param_1 | 1;
  }
  do {
    uVar3 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
    uVar2 = uVar2 - 1;
    puVar1 = puVar1 + 4;
    param_2 = param_2 + 4;
  } while (uVar2 != 0);
LAB_1004c9a3c:
  *param_1 = *param_1 + param_3 * 2;
  return;
}



/* Entry: 1004c9a58; end: 1004c9aa3;  */

undefined8 * FUN_1004c9a58(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  FUN_1004c99d4(param_1,param_2,param_3 - param_2 >> 5);
  return param_1;
}



/* Entry: 1004c9aa4; end: 1004c9b53;  */

ulong * FUN_1004c9aa4(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  uVar5 = *param_1;
  if ((uVar5 & 1) == 0) {
    uVar7 = 4;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar7 = param_1[2];
  }
  if (uVar5 >> 1 == uVar7) {
    ppuVar2 = &puStack_50;
    puVar3 = param_1 + 1;
    uVar5 = *param_1;
    if ((uVar5 & 1) == 0) {
      uVar7 = 8;
    }
    else {
      puVar3 = (ulong *)param_1[1];
      uVar7 = param_1[2] << 1;
    }
    puStack_50 = (ulong *)0x0;
    uStack_48 = 0;
    func_0x000104a7f774();
    uVar4 = uVar5 >> 1;
    puVar1 = (ulong *)(ppuVar2 + uVar4);
    puStack_50 = (ulong *)ppuVar2;
    uStack_48 = uVar7;
    *puVar1 = *param_2;
    puVar6 = puStack_50;
    if (1 < uVar5) {
      do {
        *puVar6 = *puVar3;
        uVar4 = uVar4 - 1;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0);
    }
    uVar5 = *param_1;
    if ((uVar5 & 1) != 0) {
      __ZdlPv(param_1[1]);
      uVar5 = *param_1;
      uVar7 = uStack_48;
    }
    param_1[1] = (ulong)puStack_50;
    param_1[2] = uVar7;
    *param_1 = (uVar5 | 1) + 2;
    return puVar1;
  }
  puVar3[uVar5 >> 1] = *param_2;
  *param_1 = uVar5 + 2;
  return puVar3 + (uVar5 >> 1);
}



/* Entry: 1004c9b54; end: 1004c9bc7;  */

undefined8 FUN_1004c9b54(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 2);
  func_0x000107c613c0(uVar1,"grpc.internal.channel_credentials");
  if ((int)uVar1 == 0) {
    if (*param_1 == 2) {
      return *(undefined8 *)(param_1 + 4);
    }
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/credentials.cc"
                  ,0x4c,2,"Invalid type %d for arg %s");
  }
  return 0;
}



/* Entry: 1004c9bc8; end: 1004c9c27;  */

void FUN_1004c9bc8(ulong *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_1 != (ulong *)0x0) && (*param_1 != 0)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = param_1[1] + lVar2;
      FUN_1004c9b54();
      if (lVar1 != 0) {
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while (uVar3 < *param_1);
  }
  return;
}



/* Entry: 1004c9c28; end: 1004c9faf;  */

void FUN_1004c9c28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar3 = param_4;
  FUN_1004c9bc8();
  if (plVar3 == (long *)0x0) {
    func_0x000104aaa098(auStack_78,param_4);
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                  ,0x124,2,
                  "Can\'t create subchannel: channel credentials missing for secure channel. Got args: %s"
                 );
    if (cStack_61 < '\0') {
      func_0x000107c60e14(auStack_78[0]);
    }
    goto LAB_1004c9ea8;
  }
  plVar4 = param_4;
  FUN_1004ca024();
  if (plVar4 != (long *)0x0) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                  ,300,2,
                  "Can\'t create subchannel: security connector already present in channel args.");
    goto LAB_1004c9ea8;
  }
  plVar4 = param_4;
  FUN_100481218(param_4,"grpc.default_authority");
  if (plVar4 == (long *)0x0) {
    func_0x000107c2c25c();
LAB_1004c9e88:
    (**(code **)(*plVar4 + 8))();
  }
  else {
    plStack_48 = (long *)0x0;
    plStack_58 = (long *)0x0;
    (**(code **)(*plVar3 + 0x10))(&plStack_50,plVar3,&plStack_58,plVar4,param_4,&plStack_48);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plStack_58;
      if (lVar6 + -1 == 0) goto LAB_1004c9e88;
    }
  }
  if (plStack_50 == (long *)0x0) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                  ,0x13d,2,"Failed to create secure subchannel for secure name \'%s\'");
    param_4 = (long *)0x0;
  }
  else {
    func_0x0001004d311c(auStack_78);
    if (plStack_48 != (long *)0x0) {
      param_4 = plStack_48;
    }
    FUN_1004c87a4(param_4,auStack_78,1);
    if (plStack_50 != (long *)0x0) {
      plVar3 = plStack_50 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plStack_50 + 8))();
      }
    }
    plStack_50 = (long *)0x0;
    FUN_10048650c(plStack_48);
  }
  if (plStack_50 != (long *)0x0) {
    plVar3 = plStack_50 + 1;
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plStack_50 + 8))();
    }
  }
  if (param_4 != (long *)0x0) {
    puVar5 = (undefined8 *)0x120;
    func_0x000107c60e20();
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    puVar5[0x13] = 0;
    puVar5[0x12] = 0;
    puVar5[0x15] = 0;
    puVar5[0x14] = 0;
    puVar5[0x17] = 0;
    puVar5[0x16] = 0;
    puVar5[0x19] = 0;
    puVar5[0x18] = 0;
    puVar5[0x1b] = 0;
    puVar5[0x1a] = 0;
    puVar5[0x1d] = 0;
    puVar5[0x1c] = 0;
    puVar5[0x1f] = 0;
    puVar5[0x1e] = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[0x21] = 0;
    puVar5[0x20] = 0;
    puVar5[0x23] = 0;
    puVar5[0x22] = 0;
    *puVar5 = &PTR_DAT_1107c3fa0;
    puVar5[1] = 1;
    FUN_100460318();
    puVar5[0xc] = 0;
    puVar5[0x11] = 0;
    *(undefined1 *)(puVar5 + 0x21) = 0;
    *(undefined1 *)(puVar5 + 0x22) = 0;
    puVar5[0x23] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    *(undefined1 *)(puVar5 + 0x10) = 0;
    puStack_80 = puVar5;
    FUN_1004d32d0(param_1,&puStack_80,param_3,param_4);
    puVar5 = puStack_80;
    puStack_80 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
    }
    FUN_10048650c(param_4);
    return;
  }
LAB_1004c9ea8:
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                ,0x114,2,"Failed to create channel args during subchannel creation.");
  *param_1 = 0;
  return;
}



/* Entry: 1004c9fb0; end: 1004ca023;  */

undefined8 FUN_1004c9fb0(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 2);
  func_0x000107c613c0(uVar1,"grpc.internal.security_connector");
  if ((int)uVar1 == 0) {
    if (*param_1 == 2) {
      return *(undefined8 *)(param_1 + 4);
    }
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/security_connector.cc"
                  ,0x6e,2,"Invalid type %d for arg %s");
  }
  return 0;
}



/* Entry: 1004ca024; end: 1004ca083;  */

void FUN_1004ca024(ulong *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_1 != (ulong *)0x0) && (*param_1 != 0)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = param_1[1] + lVar2;
      FUN_1004c9fb0();
      if (lVar1 != 0) {
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while (uVar3 < *param_1);
  }
  return;
}



/* Entry: 1004ca084; end: 1004ca29f;  */

void FUN_1004ca084(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,long *param_5,
                  long *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [32];
  long *plStack_70;
  long *plStack_68;
  
  if ((param_5 == (long *)0x0) || (lVar6 = *param_5, lVar6 == 0)) {
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar8 = 0;
    uVar9 = 0;
    puVar7 = (undefined8 *)(param_5[1] + 0x10);
    do {
      uVar5 = puVar7[-1];
      uVar4 = uVar5;
      func_0x000107c613c0(uVar5,"grpc.ssl_target_name_override");
      if (((int)uVar4 == 0) && (*(int *)(puVar7 + -2) == 0)) {
        uVar9 = *puVar7;
      }
      func_0x000107c613c0(uVar5,"grpc.ssl_session_cache");
      if (((int)uVar5 == 0) && (*(int *)(puVar7 + -2) == 2)) {
        uVar8 = *puVar7;
      }
      puVar7 = puVar7 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  plVar1 = param_2 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_70 = (long *)*param_3;
  *param_3 = 0;
  plStack_68 = param_2;
  FUN_1004ca2a0(param_1,&plStack_68,&plStack_70,param_2 + 2,param_4,uVar9,uVar8);
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plStack_70 + 8))();
    }
  }
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plStack_68 + 8))();
    }
  }
  if (*param_1 != 0) {
    func_0x0001004c9ae8(auStack_90,"grpc.http2_scheme","https");
    FUN_1004c87a4(param_5,auStack_90,1);
    *param_6 = (long)param_5;
  }
  return;
}



/* Entry: 1004ca2a0; end: 1004ca74b;  */

void FUN_1004ca2a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,
                  long param_5,char *param_6,undefined8 param_7)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_70;
  
  if ((param_4 == (long *)0x0) || (param_5 == 0)) {
    pcVar11 = "An ssl channel needs a config and a target name.";
    uVar10 = 0x1a3;
LAB_1004ca308:
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl/ssl_security_connector.cc"
                  ,uVar10,2,pcVar11);
    *param_1 = 0;
    return;
  }
  puVar16 = (undefined8 *)param_4[1];
  if (puVar16 == (undefined8 *)0x0) {
    puVar16 = param_2;
    func_0x000104ad0f98();
    if (puVar16 == (undefined8 *)0x0) {
      pcVar11 = "Could not get default pem root certs.";
      uVar10 = 0x1ad;
      goto LAB_1004ca308;
    }
    puVar14 = puVar16;
    func_0x000104ad0fe8();
  }
  else {
    puVar14 = (undefined8 *)0x0;
  }
  plVar7 = (long *)0x78;
  func_0x000107c60e20();
  plStack_c8 = (long *)*param_2;
  *param_2 = 0;
  plStack_d0 = (long *)*param_3;
  *param_3 = 0;
  FUN_1004ca74c();
  if (plStack_d0 != (long *)0x0) {
    plVar12 = plStack_d0 + 1;
    do {
      lVar13 = *plVar12;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plStack_d0 + 8))();
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar12 = plStack_c8 + 1;
    do {
      lVar13 = *plVar12;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plStack_c8 + 8))();
    }
  }
  *plVar7 = (long)&PTR_DAT_1107c6630;
  puVar15 = (ulong *)(plVar7 + 8);
  *puVar15 = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  pcVar11 = "";
  if (param_6 != (char *)0x0) {
    pcVar11 = param_6;
  }
  FUN_10002b024(plVar7 + 0xb,pcVar11);
  plVar7[0xe] = (long)(param_4 + 2);
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  lVar13 = param_5;
  func_0x000107c613d0(param_5);
  FUN_1004ca784(param_5,lVar13,&uStack_e0,&uStack_f0);
  uVar3 = uStack_d8;
  uVar10 = uStack_e0;
  if (0x7ffffffffffffff7 < uStack_d8) {
    func_0x000104a6fa5c(&pppppuStack_c0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1004ca620);
    (*pcVar4)();
  }
  if (uStack_d8 < 0x17) {
    uStack_b0 = (undefined8 *)CONCAT17((char)uStack_d8,(undefined7)uStack_b0);
    ppppppuVar8 = &pppppuStack_c0;
    if (uStack_d8 == 0) goto LAB_1004ca490;
  }
  else {
    uVar1 = (uStack_d8 & 0xfffffffffffffff8) + 8;
    if ((uStack_d8 | 7) != 0x17) {
      uVar1 = uStack_d8 | 7;
    }
    ppppppuVar8 = (undefined8 ******)(uVar1 + 1);
    func_0x000107c60e20();
    uStack_b0 = (undefined8 *)(uVar1 + 1 | 0x8000000000000000);
    puStack_b8 = (undefined8 *)uVar3;
    pppppuStack_c0 = ppppppuVar8;
  }
  func_0x000107c610b8(ppppppuVar8,uVar10,uVar3);
LAB_1004ca490:
  *(undefined1 *)((long)ppppppuVar8 + uVar3) = 0;
  if (*(char *)((long)plVar7 + 0x57) < '\0') {
    func_0x000107c60e14(*puVar15);
  }
  plVar7[9] = (long)puStack_b8;
  *puVar15 = (ulong)pppppuStack_c0;
  plVar7[10] = (long)uStack_b0;
  plVar12 = (long *)*param_4;
  if ((plVar12 == (long *)0x0) || (*plVar12 == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = plVar12[1] != 0;
  }
  pppppuStack_c0 = (undefined8 *****)0x0;
  puStack_a8 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_98 = 0;
  puStack_a0 = (undefined8 *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_7c = 0x100000000;
  uStack_70 = 0;
  puVar9 = &uStack_98;
  puStack_b8 = puVar16;
  uStack_b0 = puVar14;
  FUN_1004ca7ac();
  if (bVar5) {
    pppppuStack_c0 = (undefined8 *****)*param_4;
  }
  puStack_a0 = puVar9;
  func_0x0001004ca840();
  uVar6 = (undefined4)param_4[5];
  puStack_a8 = puVar9;
  uStack_90 = param_7;
  func_0x0001004ca8a0();
  uStack_7c = CONCAT44(uStack_7c._4_4_,uVar6);
  uVar6 = *(undefined4 *)((long)param_4 + 0x2c);
  func_0x0001004ca8a0();
  uStack_7c = CONCAT44(uVar6,(undefined4)uStack_7c);
  ppppppuVar8 = &pppppuStack_c0;
  FUN_1004ca8e0(ppppppuVar8,plVar7 + 7);
  FUN_100460314(puStack_a0);
  if ((int)ppppppuVar8 == 0) {
    *param_1 = plVar7;
  }
  else {
    func_0x000104ae1b68();
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl/ssl_security_connector.cc"
                  ,0x80,2,"Handshaker factory creation failed with %s.");
    *param_1 = 0;
    plVar12 = plVar7 + 1;
    do {
      lVar13 = *plVar12;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  return;
}



/* Entry: 1004ca74c; end: 1004ca783;  */

void FUN_1004ca74c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  param_1[2] = param_2;
  param_1[3] = param_3;
  *param_1 = &PTR_DAT_1107c6580;
  param_1[1] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_5;
  param_1[4] = *param_4;
  *param_4 = 0;
  param_1[5] = uVar1;
  *param_5 = 0;
  param_1[6] = 0;
  return;
}



/* Entry: 1004ca784; end: 1004ca7a3;  */

void FUN_1004ca784(void)

{
  FUN_1004c2290();
  return;
}



/* Entry: 1004ca7a4; end: 1004ca7ab;  */

undefined8 FUN_1004ca7a4(void)

{
  return 2;
}



/* Entry: 1004ca7ac; end: 1004ca817;  */

undefined * FUN_1004ca7ac(ulong *param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 != (ulong *)0x0) {
    puVar1 = param_1;
    FUN_1004ca7a4();
    *param_1 = (ulong)puVar1;
    puVar2 = (undefined *)((long)puVar1 << 3);
    FUN_100460200();
    if (*param_1 != 0) {
      uVar4 = 0;
      do {
        uVar3 = uVar4;
        FUN_1004ca818();
        *(ulong *)(puVar2 + uVar4 * 8) = uVar3;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *param_1);
    }
    return puVar2;
  }
  func_0x000107c2c3d0();
  if (param_1 < (ulong *)0x2) {
    return (&PTR_s_grpc_exp_1107c3f80)[(long)param_1];
  }
  func_0x000107c2c258();
  FUN_10045fe6c(0x1130a63e8,0x1004ca86c);
  return puRam00000001136a22e0;
}



/* Entry: 1004ca818; end: 1004ca8df;  */

undefined * FUN_1004ca818(ulong param_1)

{
  if (param_1 < 2) {
    return (&PTR_s_grpc_exp_1107c3f80)[param_1];
  }
  func_0x000107c2c258();
  FUN_10045fe6c(0x1130a63e8,0x1004ca86c);
  return puRam00000001136a22e0;
}



/* Entry: 1004ca8e0; end: 1004cacb7;  */

long FUN_1004ca8e0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar4 = 0x1130a64c0;
  FUN_10045fe6c(0x1130a64c0,FUN_1004cacc0);
  if ((param_2 == (undefined8 *)0x0) || ((*param_2 = 0, param_1[1] == 0 && (param_1[2] == 0)))) {
    return 2;
  }
  func_0x0001004cad4c();
  FUN_1001e2dc4();
  if (lVar4 == 0) {
    func_0x000104ae1748();
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                  ,0x7ed,2,"Could not create ssl context.");
    return 2;
  }
  lVar11 = lVar4;
  FUN_1004cb038();
  if ((int)lVar11 != 0) {
    return lVar11;
  }
  puVar5 = (undefined8 *)0x38;
  FUN_100460860();
  func_0x0001004cb164();
  *puVar5 = &PTR_DAT_1130a64d0;
  puVar5[2] = lVar4;
  lVar11 = param_1[6];
  if (lVar11 != 0) {
    plVar6 = (long *)(lVar11 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)puVar5[5];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    puVar5[5] = lVar11;
    func_0x000107c2b880(lVar4,&UNK_104ae17e4);
    func_0x000107c2b7e4(lVar4,1);
  }
  lVar11 = param_1[7];
  if (lVar11 != 0) {
    plVar6 = (long *)(lVar11 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)puVar5[6];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    puVar5[6] = lVar11;
    func_0x000107c2b824(lVar4,&UNK_104ae1880);
  }
  if ((param_1[6] != 0) || (param_1[7] != 0)) {
    func_0x000107c2b820(lVar4,uRam00000001130a64d8,puVar5);
  }
  lVar11 = lVar4;
  FUN_1004cb18c(lVar4,*param_1,param_1[3]);
  if ((int)lVar11 != 0) goto LAB_1004cab7c;
  if ((undefined8 *)param_1[2] == (undefined8 *)0x0) {
LAB_1004caa80:
    uVar12 = param_1[1];
    uVar7 = uVar12;
    func_0x000107c613d0(uVar12);
    lVar11 = lVar4;
    FUN_1004cb5bc(lVar4,uVar12,uVar7,0);
    if ((int)lVar11 == 0) goto LAB_1004caaf0;
    pcVar9 = "Cannot load server root certificates.";
    uVar7 = 0x825;
  }
  else {
    func_0x000107c2b5ec(*(undefined8 *)param_1[2]);
    func_0x000107c2b8ac(lVar4,*(undefined8 *)param_1[2]);
    if (param_1[2] == 0) goto LAB_1004caa80;
LAB_1004caaf0:
    if (param_1[5] == 0) {
LAB_1004cabb8:
      if (*(char *)(param_1 + 8) == '\0') {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = &UNK_104ae1934;
      }
      func_0x0001004d3110(lVar4,1,puVar8);
      if (((char *)param_1[10] != (char *)0x0) && (*(char *)param_1[10] != '\0')) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                      ,0x84e,1,"enabling client CRL checking with path: %s");
        FUN_1004cb5b4();
        func_0x000107c2b604();
        lVar11 = lVar4;
        func_0x000107c2b5e0(lVar4,0,param_1[10]);
        if ((int)lVar11 == 0) {
          pcVar9 = "Failed to load CRL File from directory.";
          uVar7 = 0x854;
          uVar12 = 2;
        }
        else {
          func_0x000107c2b600(lVar4);
          func_0x000107c2b62c();
          pcVar9 = "enabled client side CRL checking.";
          uVar7 = 0x858;
          uVar12 = 1;
        }
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                      ,uVar7,uVar12,pcVar9);
      }
      *param_2 = puVar5;
      return 0;
    }
    lVar11 = param_1[4];
    FUN_1004d2f1c(lVar11,(uint)param_1[5] & 0xffff,puVar5 + 3,puVar5 + 4);
    if ((int)lVar11 == 0) {
      if (0xfffffffe < (ulong)puVar5[4]) {
        func_0x000107c2c444();
        return 1;
      }
      lVar11 = lVar4;
      FUN_1004d3048(lVar4,puVar5[3]);
      if ((int)lVar11 == 0) {
        FUN_1004d3104(lVar4,&UNK_104ae1914,puVar5);
        goto LAB_1004cabb8;
      }
      pcVar9 = "Could not set alpn protocol list to context.";
      lVar11 = 2;
      uVar7 = 0x838;
    }
    else {
      func_0x000104ae1b68();
      pcVar9 = "Building alpn list failed with error %s.";
      uVar7 = 0x82f;
    }
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                ,uVar7,2,pcVar9);
LAB_1004cab7c:
  func_0x000100747e28(puVar5);
  return lVar11;
}



/* Entry: 1004cacb8; end: 1004cacbf;  */

undefined8 FUN_1004cacb8(void)

{
  return 1;
}



/* Entry: 1004cacc0; end: 1004cad43;  */

/* WARNING: Possible PIC construction at 0x0001004cace8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004cacec) */
/* WARNING: Removing unreachable block (ram,0x0001004cad04) */
/* WARNING: Removing unreachable block (ram,0x0001004cacfc) */

undefined4 FUN_1004cacc0(void)

{
  int iVar1;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  FUN_1004cacb8(0,0);
  uStack_18 = 0x1004cacec;
  iVar1 = 0x133118c0;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_1001e2a9c(0x1133118c0,&uStack_24,0,0,0);
  if (iVar1 == 0) {
    uStack_24 = 0xffffffff;
  }
  return uStack_24;
}



/* Entry: 1004cad44; end: 1004cad57; -[SCAExperimentUserTreatment getEventQoS] */

undefined8 FUN_1004cad44(void)

{
  return 0;
}



/* Entry: 1004cad58; end: 1004cae9f;  */

undefined8 * FUN_1004cad58(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = (undefined8 *)0x150;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x148;
    puVar4 = puVar1 + 1;
    puVar1[2] = 0;
    *puVar4 = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[0xc] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0xd] = 0;
    puVar1[0x10] = 0;
    puVar1[0xf] = 0;
    puVar1[0x12] = 0;
    puVar1[0x11] = 0;
    puVar1[0x14] = 0;
    puVar1[0x13] = 0;
    puVar1[0x16] = 0;
    puVar1[0x15] = 0;
    puVar1[0x18] = 0;
    puVar1[0x17] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x20] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x29] = 0;
    puVar1[0x22] = 0;
    puVar1[0x21] = 0;
    puVar1[0x24] = 0;
    puVar1[0x23] = 0;
    puVar1[0x26] = 0;
    puVar1[0x25] = 0;
    puVar1[0x28] = 0;
    puVar1[0x27] = 0;
    puVar5 = puVar1 + 3;
    puVar1[4] = 0;
    *puVar5 = 0;
    puVar2 = puVar5;
    func_0x000107c61284(puVar5,0);
    if ((int)puVar2 != 0) {
      func_0x000107c60ebc();
      puVar1 = puVar2;
      FUN_1004cad58();
      puVar2[0x1e] = puVar1;
      func_0x0001004caedc();
      puVar2[0x3a] = puVar1;
      return (undefined8 *)(ulong)(puVar2[0x1e] != 0 && puVar1 != (undefined8 *)0x0);
    }
    lVar3 = 0x1004d2374;
    FUN_1001e2bf4();
    puVar1[2] = lVar3;
    if (lVar3 != 0) {
      *(undefined4 *)(puVar1 + 1) = 1;
      lVar3 = 0;
      FUN_1001e2bf4();
      puVar1[0x1c] = lVar3;
      if (lVar3 != 0) {
        func_0x0001004caedc();
        puVar1[0x1d] = lVar3;
        if (lVar3 != 0) {
          *(undefined4 *)(puVar1 + 0x29) = 1;
          return puVar4;
        }
      }
    }
    func_0x000107c61280(puVar5);
    lVar3 = puVar1[0x1d];
    if (lVar3 != 0) {
      FUN_1004caf34(lVar3);
      FUN_1001e33e0(lVar3);
    }
    lVar3 = puVar1[0x1c];
    if (lVar3 != 0) {
      FUN_1001e33e0(*(undefined8 *)(lVar3 + 8));
      FUN_1001e33e0(lVar3);
    }
    lVar3 = puVar1[2];
    if (lVar3 != 0) {
      FUN_1001e33e0(*(undefined8 *)(lVar3 + 8));
      FUN_1001e33e0(lVar3);
    }
    FUN_1001e33e0(puVar4);
  }
  return (undefined8 *)0x0;
}



/* Entry: 1004caea0; end: 1004caf33;  */

bool FUN_1004caea0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1004cad58();
  *(long *)(param_1 + 0xf0) = lVar1;
  func_0x0001004caedc();
  *(long *)(param_1 + 0x1d0) = lVar1;
  return *(long *)(param_1 + 0xf0) != 0 && lVar1 != 0;
}



/* Entry: 1004caf34; end: 1004cb037;  */

void FUN_1004caf34(undefined8 *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  puVar2 = (ulong *)param_1[6];
  if (puVar2 != (ulong *)0x0) {
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      uVar3 = 0;
      do {
        if (*(long *)(puVar2[1] + uVar3 * 8) != 0) {
          FUN_1004d1a84();
          uVar1 = *puVar2;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    FUN_1001e33e0(puVar2[1]);
    FUN_1001e33e0(puVar2);
    param_1[6] = 0;
  }
  puVar2 = (ulong *)param_1[7];
  if (puVar2 != (ulong *)0x0) {
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      uVar3 = 0;
      do {
        if (*(long *)(puVar2[1] + uVar3 * 8) != 0) {
          FUN_1001e33e0();
          uVar1 = *puVar2;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    FUN_1001e33e0(puVar2[1]);
    FUN_1001e33e0(puVar2);
    param_1[7] = 0;
  }
  if (param_1[9] != 0) {
    FUN_1001e33e0();
    param_1[9] = 0;
  }
  if (param_1[10] != 0) {
    FUN_1001e33e0();
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if (param_1[0xc] != 0) {
    FUN_1001e33e0();
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}



/* Entry: 1004cb038; end: 1004cb0db;  */

undefined8 FUN_1004cb038(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x303;
LAB_1004cb064:
    FUN_1004cb0dc(param_1,uVar1);
    if (param_3 == 1) {
      uVar1 = 0x304;
    }
    else {
      if (param_3 != 0) {
        uVar1 = 0x3df;
        goto LAB_1004cb0c4;
      }
      uVar1 = 0x303;
    }
    func_0x0001004cb120(param_1,uVar1);
    uVar1 = 0;
  }
  else {
    if (param_2 == 1) {
      uVar1 = 0x304;
      goto LAB_1004cb064;
    }
    uVar1 = 0x3cc;
LAB_1004cb0c4:
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                  ,uVar1,1,"TLS version is not supported.");
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 1004cb0dc; end: 1004cb18b;  */

char * FUN_1004cb0dc(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  
  pcVar1 = (char *)*param_1;
  if (param_2 != 0) {
    FUN_1001e7668();
    return pcVar1;
  }
  uVar2 = 0xfeff;
  if (*pcVar1 == '\0') {
    uVar2 = 0x301;
  }
  *(undefined2 *)((long)param_1 + 0xda) = uVar2;
  return (char *)0x1;
}



/* Entry: 1004cb18c; end: 1004cb40f;  */

long FUN_1004cb18c(undefined8 param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  
  if (param_2 == (ulong *)0x0) {
LAB_1004cb308:
    if ((param_3 == 0) || (uVar4 = param_1, FUN_1004cb410(param_1,param_3), (int)uVar4 != 0)) {
      uVar3 = 0x19f;
      FUN_100410404(0x19f);
      uVar4 = param_1;
      FUN_1004cb510(param_1,uVar3);
      if ((int)uVar4 != 0) {
        FUN_1004cb570(param_1,0);
        FUN_100414b38(uVar3);
        return 0;
      }
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                    ,0x362,2,"Could not set ephemeral ECDH key.");
      FUN_100414b38(uVar3);
      return 7;
    }
    pcVar5 = "Invalid cipher list: %s.";
    lVar7 = 2;
    uVar4 = 0x35c;
    goto LAB_1004cb3e0;
  }
  uVar6 = param_2[1];
  if (uVar6 != 0) {
    uVar1 = uVar6;
    func_0x000107c613d0();
    if (uVar1 >> 0x1f != 0) {
      func_0x000107c2c454();
      goto LAB_1004cb40c;
    }
    FUN_1004cb630(uVar6,uVar1);
    if (uVar6 == 0) {
      lVar7 = 0xc;
    }
    else {
      uVar1 = uVar6;
      FUN_1004cb8fc();
      if (uVar1 == 0) {
        func_0x0001004d2e54(uVar6);
        lVar7 = 2;
      }
      else {
        uVar4 = param_1;
        func_0x000107c2b8b0(param_1,uVar1);
        if ((int)uVar4 != 0) {
          do {
            uVar2 = uVar6;
            func_0x000107c2b57c(uVar6,0,0,"");
            if (uVar2 == 0) {
              FUN_1001e83a0();
              lVar7 = 0;
              bVar8 = true;
              goto LAB_1004cb27c;
            }
            uVar4 = param_1;
            func_0x000107c2b8b4(param_1,uVar2);
          } while ((int)uVar4 != 0);
          FUN_1004d22bc(uVar2);
        }
        bVar8 = false;
        lVar7 = 2;
LAB_1004cb27c:
        FUN_1004d22bc(uVar1);
        func_0x0001004d2e54(uVar6);
        if (bVar8) goto LAB_1004cb290;
      }
    }
    pcVar5 = "Invalid cert chain file.";
    uVar4 = 0x34d;
    goto LAB_1004cb3e0;
  }
LAB_1004cb290:
  uVar6 = *param_2;
  if (uVar6 == 0) goto LAB_1004cb308;
  uVar1 = uVar6;
  func_0x000107c613d0();
  if (uVar1 >> 0x1f != 0) {
LAB_1004cb40c:
    func_0x000107c2c450();
    lVar7 = uVar1 + 0xe8;
    FUN_1001e341c(lVar7);
    return lVar7;
  }
  FUN_1004cb630(uVar6,uVar1);
  if (uVar6 == 0) {
    lVar7 = 0xc;
  }
  else {
    uVar1 = uVar6;
    func_0x000107c2b578();
    if (uVar1 == 0) {
LAB_1004cb3b8:
      func_0x0001004d2e54(uVar6);
    }
    else {
      uVar4 = param_1;
      func_0x000107c2b83c(param_1,uVar1);
      FUN_10021f114(uVar1);
      if ((int)uVar4 == 0) goto LAB_1004cb3b8;
      func_0x0001004d2e54(uVar6);
      uVar4 = param_1;
      func_0x000107c2b7dc();
      if ((int)uVar4 != 0) goto LAB_1004cb308;
    }
    lVar7 = 2;
  }
  pcVar5 = "Invalid private key.";
  uVar4 = 0x355;
LAB_1004cb3e0:
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                ,uVar4,2,pcVar5);
  return lVar7;
}



/* Entry: 1004cb410; end: 1004cb42b;  */

void FUN_1004cb410(long param_1,undefined8 param_2)

{
  FUN_1001e341c(param_1 + 0xe8,param_2,0);
  return;
}



/* Entry: 1004cb42c; end: 1004cb50f;  */

undefined8 FUN_1004cb42c(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined2 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  uVar1 = 0;
  lStack_40 = 0;
  lStack_38 = 0;
  FUN_1001e65cc(&lStack_40,param_3);
  if ((uVar1 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    if (param_3 != 0) {
      lVar2 = 0;
      do {
        lVar4 = 0xa8;
        puVar3 = (undefined2 *)&UNK_10e52ade4;
        while (*(int *)(puVar3 + -2) != *(int *)(param_2 + lVar2 * 4)) {
          puVar3 = puVar3 + 0xe;
          lVar4 = lVar4 + -0x1c;
          if (lVar4 == 0) {
            uVar5 = 0;
            goto LAB_1004cb4e0;
          }
        }
        *(undefined2 *)(lStack_40 + lVar2 * 2) = *puVar3;
        lVar2 = lVar2 + 1;
      } while (lVar2 != param_3);
    }
    FUN_1001e33e0(*param_1);
    *param_1 = lStack_40;
    param_1[1] = lStack_38;
    lStack_40 = 0;
    lStack_38 = 0;
    uVar5 = 1;
  }
LAB_1004cb4e0:
  FUN_1001e33e0(lStack_40);
  return uVar5;
}



/* Entry: 1004cb510; end: 1004cb56f;  */

void FUN_1004cb510(long param_1,long *param_2)

{
  undefined4 uStack_14;
  
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
    FUN_1004d2c58(0x10,0,0x43,&UNK_10f6d0a17,0xba3);
  }
  else {
    uStack_14 = *(undefined4 *)(*param_2 + 0x28);
    FUN_1004cb42c(param_1 + 0x290,&uStack_14,1);
  }
  return;
}



/* Entry: 1004cb570; end: 1004cb583;  */

uint FUN_1004cb570(long param_1,uint param_2)

{
  param_2 = *(uint *)(param_1 + 0x198) | param_2;
  *(uint *)(param_1 + 0x198) = param_2;
  return param_2;
}



/* Entry: 1004cb584; end: 1004cb5b3;  */

void FUN_1004cb584(undefined8 *param_1)

{
  long *plVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  func_0x000100411da0(*param_1);
  if (param_1 != (undefined8 *)0x0) {
    plVar1 = param_1 + -1;
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 1004cb5b4; end: 1004cb5bb;  */

undefined8 FUN_1004cb5b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 1004cb5bc; end: 1004cb60b;  */

undefined1 FUN_1004cb5bc(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  
  FUN_1004cb5b4();
  FUN_1004cb60c();
  if (param_3 >> 0x1f != 0) {
    func_0x000107c2c440();
    lVar3 = param_1;
    FUN_1001e6bb0();
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 8) = 0x100000001;
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      *(long *)(param_1 + 0x20) = lVar3;
    }
    return lVar3 != 0;
  }
  FUN_1004cb630(param_2,param_3);
  if (param_1 == 0) {
    return 2;
  }
  if (param_2 == 0) {
    return 0xc;
  }
  if (param_4 != (long *)0x0) {
    lVar3 = param_2;
    func_0x000107c2b5a0();
    *param_4 = lVar3;
    if (lVar3 == 0) {
      return 0xc;
    }
  }
  lVar3 = param_2;
  FUN_1004cb8fc(param_2,0,0,"");
  if (lVar3 == 0) {
    FUN_1001e83a0();
  }
  else {
    lVar5 = 0;
    do {
      if (param_4 != (long *)0x0) {
        lVar2 = lVar3;
        FUN_10073c350();
        if (lVar2 == 0) {
          uVar4 = 2;
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                        ,0x30c,2,"Could not get name from root certificate.");
        }
        else {
          func_0x000107c2b63c();
          if (lVar2 != 0) {
            func_0x000107c2b5b8(*param_4,lVar2);
            goto LAB_1004cb760;
          }
          uVar4 = 0xc;
        }
joined_r0x0001004cb854:
        if (lVar5 == 0) {
          uVar4 = 2;
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                        ,0x326,2,"Could not load any root certificate.");
        }
        FUN_1004d22bc(lVar3);
        goto joined_r0x0001004cb88c;
      }
LAB_1004cb760:
      FUN_1001e83a0();
      lVar2 = param_1;
      FUN_1004d1ed4(param_1,lVar3);
      uVar1 = (uint)lVar2;
      if ((uVar1 == 0) && (func_0x000107c2b284(), (uVar1 & 0xff000fff) != 0xb000069)) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                      ,0x31d,2,"Could not add root certificate to ssl context.");
        uVar4 = 7;
        goto joined_r0x0001004cb854;
      }
      FUN_1004d22bc(lVar3);
      lVar3 = param_2;
      FUN_1004cb8fc(param_2,0,0,"");
      lVar5 = lVar5 + -1;
    } while (lVar3 != 0);
    FUN_1001e83a0();
    if (lVar5 != 0) {
      uVar4 = 0;
      goto LAB_1004cb810;
    }
  }
  uVar4 = 2;
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                ,0x326,2,"Could not load any root certificate.");
joined_r0x0001004cb88c:
  if (param_4 != (long *)0x0) {
    FUN_1004d1b04(*param_4,&UNK_10ae62c70,&UNK_10ae4e8cc);
    *param_4 = 0;
  }
LAB_1004cb810:
  func_0x0001004d2e54(param_2);
  return uVar4;
}



/* Entry: 1004cb60c; end: 1004cb62f;  */

undefined8 FUN_1004cb60c(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0xe0) + 0x18) | param_2;
  if ((param_2 & 0x780) != 0) {
    uVar1 = uVar1 | 0x80;
  }
  *(ulong *)(*(long *)(param_1 + 0xe0) + 0x18) = uVar1;
  return 1;
}



/* Entry: 1004cb630; end: 1004cb6b7;  */

void FUN_1004cb630(ulong param_1,uint param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if ((int)param_2 < 0) {
    uVar3 = param_1;
    func_0x000107c613d0();
  }
  else {
    uVar3 = (ulong)param_2;
    if ((param_1 == 0) && (param_2 != 0)) {
      FUN_1004d2c58(0x11,0,0x6f,&UNK_10f6c51b9,0x4b);
      return;
    }
  }
  puVar1 = &UNK_110c7bc38;
  FUN_1001e73a4();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(ulong **)(puVar1 + 0x20);
    *puVar2 = uVar3;
    puVar2[1] = param_1;
    puVar2[2] = uVar3;
    *(uint *)(puVar1 + 0x10) = *(uint *)(puVar1 + 0x10) | 0x200;
    *(undefined4 *)(puVar1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1004cb6b8; end: 1004cb8bf;  */

undefined1 FUN_1004cb6b8(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  
  if (param_3 >> 0x1f != 0) {
    func_0x000107c2c440();
    lVar3 = param_1;
    FUN_1001e6bb0();
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 8) = 0x100000001;
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      *(long *)(param_1 + 0x20) = lVar3;
    }
    return lVar3 != 0;
  }
  FUN_1004cb630(param_2,param_3);
  if (param_1 == 0) {
    return 2;
  }
  if (param_2 == 0) {
    return 0xc;
  }
  if (param_4 != (long *)0x0) {
    lVar3 = param_2;
    func_0x000107c2b5a0();
    *param_4 = lVar3;
    if (lVar3 == 0) {
      return 0xc;
    }
  }
  lVar3 = param_2;
  FUN_1004cb8fc(param_2,0,0,"");
  if (lVar3 == 0) {
    FUN_1001e83a0();
  }
  else {
    lVar5 = 0;
    do {
      if (param_4 != (long *)0x0) {
        lVar2 = lVar3;
        FUN_10073c350();
        if (lVar2 == 0) {
          uVar4 = 2;
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                        ,0x30c,2,"Could not get name from root certificate.");
        }
        else {
          func_0x000107c2b63c();
          if (lVar2 != 0) {
            func_0x000107c2b5b8(*param_4,lVar2);
            goto LAB_1004cb760;
          }
          uVar4 = 0xc;
        }
joined_r0x0001004cb854:
        if (lVar5 == 0) {
          uVar4 = 2;
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                        ,0x326,2,"Could not load any root certificate.");
        }
        FUN_1004d22bc(lVar3);
        goto joined_r0x0001004cb88c;
      }
LAB_1004cb760:
      FUN_1001e83a0();
      lVar2 = param_1;
      FUN_1004d1ed4(param_1,lVar3);
      uVar1 = (uint)lVar2;
      if ((uVar1 == 0) && (func_0x000107c2b284(), (uVar1 & 0xff000fff) != 0xb000069)) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                      ,0x31d,2,"Could not add root certificate to ssl context.");
        uVar4 = 7;
        goto joined_r0x0001004cb854;
      }
      FUN_1004d22bc(lVar3);
      lVar3 = param_2;
      FUN_1004cb8fc(param_2,0,0,"");
      lVar5 = lVar5 + -1;
    } while (lVar3 != 0);
    FUN_1001e83a0();
    if (lVar5 != 0) {
      uVar4 = 0;
      goto LAB_1004cb810;
    }
  }
  uVar4 = 2;
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                ,0x326,2,"Could not load any root certificate.");
joined_r0x0001004cb88c:
  if (param_4 != (long *)0x0) {
    FUN_1004d1b04(*param_4,&UNK_10ae62c70,&UNK_10ae4e8cc);
    *param_4 = 0;
  }
LAB_1004cb810:
  func_0x0001004d2e54(param_2);
  return uVar4;
}



/* Entry: 1004cb8c0; end: 1004cb8fb;  */

void FUN_1004cb8c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1001e6bb0();
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = 0x100000001;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    *(long *)(param_1 + 0x20) = lVar1;
  }
  return;
}



/* Entry: 1004cb8fc; end: 1004cb91f;  */

long FUN_1004cb8fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  puVar1 = &uStack_30;
  func_0x0001004cbfb8(puVar1,&uStack_38,0,&UNK_10f6ccd83,param_1,param_3,param_4);
  if ((int)puVar1 == 0) {
    param_2 = 0;
  }
  else {
    uStack_28 = uStack_30;
    FUN_1004cccbc(param_2,&uStack_28,uStack_38);
    if (param_2 == 0) {
      FUN_1004d2c58(9,0,0xc,&UNK_10f6ccc8e,0x54);
    }
    FUN_1001e33e0(uStack_30);
  }
  return param_2;
}



/* Entry: 1004cb920; end: 1004cc2c3;  */

/* WARNING: Possible PIC construction at 0x0001004cc2fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004cc300) */
/* WARNING: Removing unreachable block (ram,0x0001004cc348) */
/* WARNING: Removing unreachable block (ram,0x0001004cc304) */
/* WARNING: Removing unreachable block (ram,0x0001004cc320) */
/* WARNING: Removing unreachable block (ram,0x0001004cc33c) */
/* WARNING: Removing unreachable block (ram,0x0001004cc34c) */

undefined1 *
FUN_1004cb920(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             long *param_5,undefined1 *param_6,undefined1 *param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *puVar21;
  undefined8 uVar22;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined8 *puStack_1c0;
  int iStack_1b4;
  undefined8 uStack_1b0;
  char cStack_1a8;
  undefined2 uStack_1a7;
  undefined8 auStack_1a5 [30];
  undefined1 uStack_b2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_1b4 = 0;
  puVar5 = param_1;
  FUN_1001e6bb0();
  puVar19 = puVar5;
  FUN_1001e6bb0();
  puVar6 = puVar19;
  FUN_1001e6bb0();
  puVar10 = puVar5;
  puVar17 = puVar6;
  if (((puVar5 != (undefined8 *)0x0) && (puVar19 != (undefined8 *)0x0)) &&
     (puVar6 != (undefined8 *)0x0)) {
    uStack_b2 = 0;
    plVar18 = &uStack_1b0;
    puVar7 = param_1;
    puStack_1e0 = param_2;
    puStack_1d8 = param_3;
    puStack_1d0 = param_4;
    plStack_1c8 = param_5;
    puStack_1c0 = puVar19;
    func_0x0001004cc3f4(param_1,&uStack_1b0,0xfe);
    puVar19 = puVar6;
    if (0 < (int)puVar7) {
      param_2 = (undefined8 *)0x204e494745422d2d;
      puVar17 = (undefined8 *)0x500000000;
      unaff_x27 = (undefined8 *)&UNK_10f6ccbcc;
LAB_1004cb9ec:
      do {
        iVar4 = (int)puVar7;
        iVar16 = iVar4;
        if (*(char *)((long)plVar18 + ((ulong)puVar7 & 0xffffffff)) < '!') {
          iVar16 = -1;
          puVar7 = (undefined8 *)(ulong)(iVar4 - 1);
          if (0 < iVar4) goto LAB_1004cb9ec;
        }
        *(undefined1 *)((long)plVar18 + (ulong)(iVar16 + 1)) = 10;
        *(undefined1 *)((long)plVar18 + (ulong)(iVar16 + 2)) = 0;
        if (CONCAT53(uStack_1b0._3_5_,CONCAT21(uStack_1b0._1_2_,(char)uStack_1b0)) ==
            0x4745422d2d2d2d2d &&
            CONCAT26(uStack_1a7,CONCAT15(cStack_1a8,uStack_1b0._3_5_)) == 0x204e494745422d2d) {
          unaff_x28 = auStack_1a5;
          func_0x000107c613d0();
          puVar8 = (undefined *)((long)plVar18 + (((long)unaff_x28 << 0x20) + 0x500000000 >> 0x20));
          func_0x000107c613d4(puVar8,&UNK_10f6ccbcc,6);
          if ((int)puVar8 == 0) {
            puVar17 = (undefined8 *)((long)unaff_x28 << 0x20);
            puVar7 = puVar5;
            FUN_1004cc558(puVar5,(long)(puVar17 + 0x120000000) >> 0x20);
            puVar10 = puStack_1c0;
            if (puVar7 == (undefined8 *)0x0) {
              puVar7 = (undefined8 *)&UNK_10f6ccb34;
              puVar11 = (undefined8 *)0x0;
              piVar12 = (int *)0x41;
              puVar13 = (undefined8 *)0x275;
              FUN_1004d2c58(9);
              puVar10 = puVar5;
              puVar20 = puStack_1c0;
              goto LAB_1004cba98;
            }
            unaff_x27 = (undefined8 *)((long)(puVar17 + -0xc0000000) >> 0x20);
            if (puVar17 + -0xc0000000 != (undefined8 *)0x0) {
              func_0x000107c610b4(puVar5[1],auStack_1a5,unaff_x27);
            }
            *(undefined1 *)(puVar5[1] + (long)unaff_x27) = 0;
            puVar7 = puVar10;
            FUN_1004cc558(puVar10,0x100);
            puVar20 = puVar10;
            if (puVar7 == (undefined8 *)0x0) {
              puVar13 = (undefined8 *)0x27f;
              goto LAB_1004cbe24;
            }
            param_2 = (undefined8 *)0x444e452d2d2d2d2d;
            *(undefined1 *)puVar10[1] = 0;
            plVar18 = &uStack_1b0;
            puVar7 = param_1;
            func_0x0001004cc3f4(param_1,&uStack_1b0,0xfe);
            if (0 < (int)puVar7) {
              puVar19 = (undefined8 *)0xa;
              unaff_x28 = (undefined8 *)0x0;
              goto LAB_1004cbbc4;
            }
            unaff_x28 = (undefined8 *)0x0;
            goto LAB_1004cbcb0;
          }
        }
        puVar7 = param_1;
        func_0x0001004cc3f4(param_1,&uStack_1b0,0xfe);
      } while (0 < (int)puVar7);
    }
    puVar7 = (undefined8 *)&UNK_10f6ccb34;
    puVar11 = (undefined8 *)0x0;
    piVar12 = (int *)0x6e;
    puVar13 = (undefined8 *)0x266;
    FUN_1004d2c58(9);
    puVar20 = puStack_1c0;
    goto LAB_1004cba98;
  }
  FUN_1004cf554(puVar5);
  FUN_1004cf554(puVar19);
  FUN_1004cf554(puVar6);
  puVar7 = (undefined8 *)&UNK_10f6ccb34;
  puVar11 = (undefined8 *)0x0;
  piVar12 = (int *)0x41;
  puVar13 = (undefined8 *)0x25d;
  FUN_1004d2c58(9);
  plVar18 = param_5;
  puVar5 = param_3;
  puVar20 = param_1;
  goto LAB_1004cbae8;
  while( true ) {
    *(undefined1 *)((long)plVar18 + (ulong)(iVar16 + 1)) = 10;
    unaff_x27 = (undefined8 *)(ulong)(iVar16 + 2);
    *(undefined1 *)((long)plVar18 + (long)unaff_x27) = 0;
    if ((char)uStack_1b0 == '\n') goto LAB_1004cbcb0;
    puVar17 = (undefined8 *)((long)unaff_x27 + ((ulong)unaff_x28 & 0xffffffff));
    puVar7 = puVar10;
    FUN_1004cc558(puVar10,(int)puVar17 + 9);
    if (puVar7 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x290;
      goto LAB_1004cbe24;
    }
    if (CONCAT53(uStack_1b0._3_5_,CONCAT21(uStack_1b0._1_2_,(char)uStack_1b0)) == 0x444e452d2d2d2d2d
        && cStack_1a8 == ' ') {
      plVar18 = (long *)0x0;
      goto LAB_1004cbcd8;
    }
    func_0x000107c610b4(puVar10[1] + ((ulong)unaff_x28 & 0xffffffff),&uStack_1b0,unaff_x27);
    *(undefined1 *)(puVar10[1] + (long)puVar17) = 0;
    puVar7 = param_1;
    func_0x0001004cc3f4(param_1,&uStack_1b0,0xfe);
    unaff_x28 = puVar17;
    if ((int)puVar7 < 1) break;
LAB_1004cbbc4:
    iVar16 = (int)puVar7;
    if (*(char *)((long)plVar18 + ((ulong)puVar7 & 0xffffffff)) < '!') {
      puVar7 = (undefined8 *)(ulong)(iVar16 - 1);
      if (0 < iVar16) goto LAB_1004cbbc4;
      iVar16 = -1;
    }
  }
  plVar18 = (long *)0x1;
LAB_1004cbcd8:
  iStack_1b4 = 0;
  puVar7 = puVar6;
  FUN_1004cc558(puVar6,0x400);
  if (puVar7 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x29e;
LAB_1004cbe24:
    puVar7 = (undefined8 *)&UNK_10f6ccb34;
    piVar12 = (int *)0x41;
    puVar11 = (undefined8 *)0x0;
    FUN_1004d2c58(9);
  }
  else {
    *(undefined1 *)puVar6[1] = 0;
    if ((int)plVar18 == 0) {
      param_4 = puVar10;
      puVar20 = puVar6;
      iVar16 = (int)unaff_x28;
    }
    else {
      unaff_x28 = (undefined8 *)0x0;
      plVar18 = &uStack_1b0;
      puVar17 = (undefined8 *)0xa;
      puVar19 = (undefined8 *)0x20;
      do {
        puVar7 = param_1;
        func_0x0001004cc3f4(param_1,&uStack_1b0,0xfe);
        iVar16 = (int)unaff_x28;
        param_4 = puVar6;
        if ((int)puVar7 < 1) goto LAB_1004cbe48;
        do {
          iVar4 = (int)puVar7;
          if (' ' < *(char *)((long)plVar18 + ((ulong)puVar7 & 0xffffffff))) goto LAB_1004cbd3c;
          puVar7 = (undefined8 *)(ulong)(iVar4 - 1);
        } while (0 < iVar4);
        iVar4 = -1;
LAB_1004cbd3c:
        *(undefined1 *)((long)plVar18 + (ulong)(iVar4 + 1)) = 10;
        uVar1 = iVar4 + 2;
        unaff_x27 = (undefined8 *)(ulong)uVar1;
        *(undefined1 *)((long)plVar18 + (long)unaff_x27) = 0;
        if ((0x3f < iVar4) ||
           (CONCAT53(uStack_1b0._3_5_,CONCAT21(uStack_1b0._1_2_,(char)uStack_1b0)) ==
            0x444e452d2d2d2d2d && cStack_1a8 == ' ')) goto LAB_1004cbe48;
        puVar7 = puVar6;
        FUN_1004cc558(puVar6,(long)(iVar16 + iVar4 + 0xb));
        if (puVar7 == (undefined8 *)0x0) {
          puVar13 = (undefined8 *)0x2b4;
          iStack_1b4 = iVar16;
          goto LAB_1004cbe24;
        }
        func_0x000107c610b4(puVar6[1] + (long)iVar16,&uStack_1b0,unaff_x27);
        unaff_x28 = (undefined8 *)((long)(int)uVar1 + (long)iVar16);
        *(undefined1 *)(puVar6[1] + (long)unaff_x28) = 0;
      } while (uVar1 == 0x41);
      iStack_1b4 = (int)unaff_x28;
      uStack_1b0._0_1_ = '\0';
      puVar17 = &uStack_1b0;
      func_0x0001004cc3f4(param_1,&uStack_1b0,0xfe);
      iVar16 = iStack_1b4;
      if (0 < (int)param_1) {
        do {
          iVar4 = (int)param_1;
          if (' ' < *(char *)((long)puVar17 + ((ulong)param_1 & 0xffffffff))) goto LAB_1004cbdf0;
          param_1 = (undefined8 *)(ulong)(iVar4 - 1);
        } while (0 < iVar4);
        iVar4 = -1;
LAB_1004cbdf0:
        *(undefined1 *)((long)&uStack_1b0 + (ulong)(iVar4 + 1)) = 10;
        *(undefined1 *)((long)&uStack_1b0 + (ulong)(iVar4 + 2)) = 0;
      }
    }
LAB_1004cbe48:
    iStack_1b4 = iVar16;
    puVar6 = param_4;
    if (CONCAT53(uStack_1b0._3_5_,CONCAT21(uStack_1b0._1_2_,(char)uStack_1b0)) == 0x444e452d2d2d2d2d
        && cStack_1a8 == ' ') {
      unaff_x27 = (undefined8 *)puVar5[1];
      puVar19 = unaff_x27;
      func_0x000107c613d0();
      puVar17 = &uStack_1b0;
      puVar7 = unaff_x27;
      func_0x000107c613d4(unaff_x27,&uStack_1a7,(long)(int)puVar19);
      if ((int)puVar7 != 0) goto LAB_1004cbeac;
      puVar8 = (undefined *)((long)puVar17 + (((long)puVar19 << 0x20) + 0x900000000 >> 0x20));
      func_0x000107c613d4(puVar8,&UNK_10f6ccbcc,6);
      if ((int)puVar8 != 0) goto LAB_1004cbeac;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      puVar11 = (undefined8 *)param_4[1];
      puVar13 = (undefined8 *)(long)(int)unaff_x28;
      iVar16 = (int)&uStack_b0;
      piVar12 = &iStack_1b4;
      puVar7 = puVar11;
      FUN_1004cc5a8();
      if (iVar16 < 0) {
        piVar12 = (int *)0x64;
        puVar13 = (undefined8 *)0x2db;
      }
      else {
        if ((uStack_80._5_1_ == '\0') && ((int)uStack_b0 == 0)) {
          if (iStack_1b4 != 0) {
            *puStack_1e0 = puVar5[1];
            *puStack_1d8 = puVar20[1];
            *puStack_1d0 = param_4[1];
            *plStack_1c8 = (long)iStack_1b4;
            FUN_1001e33e0(puVar5);
            FUN_1001e33e0(puVar20);
            FUN_1001e33e0(param_4);
            puVar9 = (undefined1 *)0x1;
            goto LAB_1004cbaec;
          }
          goto LAB_1004cba98;
        }
        piVar12 = (int *)0x64;
        puVar13 = (undefined8 *)0x2e0;
      }
    }
    else {
LAB_1004cbeac:
      piVar12 = (int *)0x66;
      puVar13 = (undefined8 *)0x2d2;
    }
    puVar7 = (undefined8 *)&UNK_10f6ccb34;
    puVar11 = (undefined8 *)0x0;
    FUN_1004d2c58(9);
  }
LAB_1004cba98:
  FUN_1004cf554(puVar5);
  FUN_1004cf554(puVar20);
  FUN_1004cf554(puVar6);
  param_4 = puVar6;
LAB_1004cbae8:
  puVar9 = (undefined1 *)0x0;
LAB_1004cbaec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar9;
  }
  uVar22 = 0x1004cbfb8;
  func_0x000107c60e78();
  ppuVar3 = &puStack_1e0;
  do {
    puVar15 = param_6;
    puVar14 = puVar13;
    puVar6 = puVar7;
    puVar21 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)((long)ppuVar3 + -0xe0);
    *(undefined8 **)((long)ppuVar3 + -0x60) = unaff_x28;
    *(undefined8 **)((long)ppuVar3 + -0x58) = unaff_x27;
    *(undefined8 **)((long)ppuVar3 + -0x50) = puVar20;
    *(undefined8 **)((long)ppuVar3 + -0x48) = puVar19;
    *(undefined8 **)((long)ppuVar3 + -0x40) = param_2;
    *(undefined8 **)((long)ppuVar3 + -0x38) = puVar5;
    *(undefined8 **)((long)ppuVar3 + -0x30) = param_4;
    *(long **)((long)ppuVar3 + -0x28) = plVar18;
    *(undefined8 **)((long)ppuVar3 + -0x20) = puVar10;
    *(undefined8 **)((long)ppuVar3 + -0x18) = puVar17;
    *(undefined1 **)((long)ppuVar3 + -0x10) = puVar21;
    *(undefined8 *)((long)ppuVar3 + -8) = uVar22;
    *(undefined1 **)((long)ppuVar3 + -0xb0) = puVar15;
    *(undefined1 **)((long)ppuVar3 + -0xa8) = param_7;
    *(undefined8 **)((long)ppuVar3 + -0xc0) = puVar11;
    *(int **)((long)ppuVar3 + -0xb8) = piVar12;
    *(undefined1 **)((long)ppuVar3 + -200) = puVar9;
    *(undefined8 *)((long)ppuVar3 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)ppuVar3 + -0x90) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x88) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x98) = 0;
    puVar7 = (undefined8 *)((long)ppuVar3 + -0x88);
    puVar13 = (undefined8 *)((long)ppuVar3 + -0x90);
    puVar19 = (undefined8 *)((long)ppuVar3 + -0x98);
    param_6 = (undefined1 *)((long)ppuVar3 + -0xa0);
    puVar10 = puVar14;
    FUN_1004cb920();
    if ((int)puVar10 != 0) {
      unaff_x27 = (undefined8 *)&UNK_10f6ccbdd;
      plVar18 = (long *)&UNK_10f6cca97;
      puVar17 = (undefined8 *)&UNK_10f6ccc0f;
      puVar5 = (undefined8 *)&UNK_10f6ccc41;
      do {
        puVar20 = *(undefined8 **)((long)ppuVar3 + -0x88);
        puVar10 = puVar20;
        func_0x000107c613c0(puVar20,puVar6);
        if ((int)puVar10 == 0) {
LAB_1004cc1f8:
          puVar17 = *(undefined8 **)((long)ppuVar3 + -0x90);
          puVar7 = (undefined8 *)((long)ppuVar3 + -0x80);
          puVar11 = puVar17;
          FUN_1004cc8d4();
          puVar10 = puVar17;
          if ((int)puVar11 == 0) {
LAB_1004cc254:
            puVar9 = (undefined1 *)0x0;
            plVar18 = (long *)0x0;
          }
          else {
            puVar11 = *(undefined8 **)((long)ppuVar3 + -0x98);
            iVar16 = (int)(undefined1 *)((long)ppuVar3 + -0x80);
            puVar13 = (undefined8 *)((long)ppuVar3 + -0xa0);
            puVar19 = *(undefined8 **)((long)ppuVar3 + -0xb0);
            param_6 = *(undefined1 **)((long)ppuVar3 + -0xa8);
            puVar7 = puVar11;
            FUN_1004ccac4();
            if (iVar16 == 0) goto LAB_1004cc254;
            puVar2 = *(undefined8 **)((long)ppuVar3 + -0xc0);
            **(undefined8 **)((long)ppuVar3 + -200) = puVar11;
            *puVar2 = *(undefined8 *)((long)ppuVar3 + -0xa0);
            if (*(undefined8 **)((long)ppuVar3 + -0xb8) != (undefined8 *)0x0) {
              **(undefined8 **)((long)ppuVar3 + -0xb8) = puVar20;
              FUN_1001e33e0();
              puVar9 = (undefined1 *)0x1;
              goto LAB_1004cc278;
            }
            puVar9 = (undefined1 *)0x1;
            plVar18 = (long *)0x1;
          }
          FUN_1001e33e0(puVar20);
          FUN_1001e33e0();
          if ((int)plVar18 == 0) {
            puVar10 = *(undefined8 **)((long)ppuVar3 + -0x98);
            FUN_1001e33e0();
            puVar5 = (undefined8 *)&UNK_10f6ccc41;
            unaff_x27 = (undefined8 *)&UNK_10f6ccbdd;
          }
          goto LAB_1004cc278;
        }
        puVar10 = puVar6;
        func_0x000107c613c0(puVar6,&UNK_10f6ccbdd);
        if ((int)puVar10 != 0) {
          param_4 = puVar20;
          func_0x000107c613c0(puVar20,&UNK_10f6cca97);
          if ((((int)param_4 != 0) ||
              (puVar10 = puVar6, func_0x000107c613c0(puVar6,&UNK_10f6cca8b), (int)puVar10 != 0)) &&
             ((puVar10 = puVar20, func_0x000107c613c0(puVar20,&UNK_10f6ccc0f), (int)puVar10 != 0 ||
              (puVar10 = puVar6, func_0x000107c613c0(puVar6,&UNK_10f6ccc27), (int)puVar10 != 0)))) {
            unaff_x28 = puVar20;
            func_0x000107c613c0(puVar20,&UNK_10f6cca8b);
            if (((((int)unaff_x28 != 0) ||
                 (puVar10 = puVar6, func_0x000107c613c0(puVar6,&UNK_10f6ccaa8), (int)puVar10 != 0))
                && (((int)param_4 != 0 ||
                    (puVar10 = puVar6, func_0x000107c613c0(puVar6,&UNK_10f6ccaa8), (int)puVar10 != 0
                    )))) &&
               (((int)unaff_x28 != 0 ||
                (puVar10 = puVar6, func_0x000107c613c0(puVar6,&UNK_10f6ccc3b), (int)puVar10 != 0))))
            {
              puVar10 = puVar20;
              func_0x000107c613c0(puVar20,&UNK_10f6ccc41);
              if ((int)puVar10 == 0) {
                puVar8 = &UNK_10f6ccc3b;
                puVar10 = puVar6;
                goto LAB_1004cc188;
              }
              goto LAB_1004cc190;
            }
          }
          goto LAB_1004cc1f8;
        }
        puVar10 = puVar20;
        func_0x000107c613c0(puVar20,&UNK_10f6ccbed);
        if (((((int)puVar10 == 0) ||
             (puVar10 = puVar20, func_0x000107c613c0(puVar20,&UNK_10f6ccc03), (int)puVar10 == 0)) ||
            (puVar10 = puVar20, func_0x000107c613c0(puVar20,&UNK_10f6cc9fb), (int)puVar10 == 0)) ||
           (puVar10 = puVar20, func_0x000107c613c0(puVar20,&UNK_10f6ccad5), (int)puVar10 == 0))
        goto LAB_1004cc1f8;
        puVar8 = &UNK_10f6ccac5;
        puVar10 = puVar20;
LAB_1004cc188:
        func_0x000107c613c0(puVar10,puVar8);
        if ((int)puVar10 == 0) goto LAB_1004cc1f8;
LAB_1004cc190:
        FUN_1001e33e0(puVar20);
        FUN_1001e33e0(*(undefined8 *)((long)ppuVar3 + -0x90));
        FUN_1001e33e0(*(undefined8 *)((long)ppuVar3 + -0x98));
        puVar7 = (undefined8 *)((long)ppuVar3 + -0x88);
        puVar13 = (undefined8 *)((long)ppuVar3 + -0x90);
        puVar19 = (undefined8 *)((long)ppuVar3 + -0x98);
        param_6 = (undefined1 *)((long)ppuVar3 + -0xa0);
        puVar10 = puVar14;
        FUN_1004cb920();
      } while ((int)puVar10 != 0);
    }
    FUN_1001f35bc();
    if (((uint)puVar10 & 0xff000fff) == 0x900006e) {
      *(undefined **)((long)ppuVar3 + -0xe0) = &UNK_10f6ccba8;
      *(undefined8 **)((long)ppuVar3 + -0xd8) = puVar6;
      puVar10 = (undefined8 *)0x2;
      FUN_1004d2d00();
    }
    puVar9 = (undefined1 *)0x0;
LAB_1004cc278:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar3 + -0x68)) {
      return puVar9;
    }
    func_0x000107c60e78();
    *(undefined1 **)((long)ppuVar3 + -0x100) = puVar9;
    *(undefined8 **)((long)ppuVar3 + -0xf8) = puVar17;
    *(undefined1 **)((long)ppuVar3 + -0xf0) = (undefined1 *)((long)ppuVar3 + -0x10);
    *(undefined8 *)((long)ppuVar3 + -0xe8) = 0x1004cc2c4;
    *(undefined8 *)((long)ppuVar3 + -0x110) = 0;
    puVar9 = (undefined1 *)((long)ppuVar3 + -0x110);
    puVar11 = (undefined8 *)((long)ppuVar3 + -0x118);
    piVar12 = (int *)0x0;
    uVar22 = 0x1004cc300;
    ppuVar3 = (undefined8 **)((long)ppuVar3 + -0x120);
    param_7 = puVar15;
    puVar17 = puVar19;
    param_2 = puVar6;
    puVar19 = puVar14;
  } while( true );
LAB_1004cbcb0:
  plVar18 = (long *)0x1;
  goto LAB_1004cbcd8;
}



/* Entry: 1004cc2c4; end: 1004cc497;  */

long FUN_1004cc2c4(code *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  puVar1 = &uStack_30;
  func_0x0001004cbfb8(puVar1,&uStack_38,0,param_2,param_3,param_5,param_6);
  if ((int)puVar1 == 0) {
    param_4 = 0;
  }
  else {
    uStack_28 = uStack_30;
    (*param_1)(param_4,&uStack_28,uStack_38);
    if (param_4 == 0) {
      FUN_1004d2c58(9,0,0xc,&UNK_10f6ccc8e,0x54);
    }
    FUN_1001e33e0(uStack_30);
  }
  return param_4;
}



/* Entry: 1004cc498; end: 1004cc557;  */

ulong FUN_1004cc498(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  
  puVar5 = *(ulong **)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x10) & 0xfffffff0;
  *(uint *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar3 = *puVar5;
  uVar2 = (uint)uVar3;
  if ((int)param_3 <= (int)(uint)uVar3) {
    uVar2 = param_3;
  }
  if (0x7ffffffe < uVar3) {
    uVar2 = param_3;
  }
  uVar4 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    if ((uVar3 == 0) && (uVar4 = (ulong)*(uint *)(param_1 + 0x18), *(uint *)(param_1 + 0x18) != 0))
    {
      *(uint *)(param_1 + 0x10) = uVar1 | 9;
    }
  }
  else {
    func_0x000107c610b4(param_2,puVar5[1],uVar4);
    uVar3 = *puVar5;
    *puVar5 = uVar3 - uVar4;
    if ((*(byte *)(param_1 + 0x11) >> 1 & 1) == 0) {
      if (uVar3 != uVar4) {
        func_0x000107c610b8(puVar5[1],puVar5[1] + uVar4);
      }
    }
    else {
      puVar5[1] = puVar5[1] + uVar4;
    }
  }
  return uVar4;
}



/* Entry: 1004cc558; end: 1004cc5a7;  */

ulong FUN_1004cc558(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = param_1;
  func_0x0001001f03f0();
  if ((int)puVar1 == 0) {
    param_2 = 0;
  }
  else {
    uVar2 = *param_1;
    if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
      func_0x000107c60ee4(param_1[1] + uVar2,param_2 - uVar2);
    }
    *param_1 = param_2;
  }
  return param_2;
}



/* Entry: 1004cc5a8; end: 1004cc6db;  */

ulong FUN_1004cc5a8(uint *param_1,long param_2,undefined4 *param_3,byte *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uStack_68;
  
  *param_3 = 0;
  if (*(char *)((long)param_1 + 0x35) != '\0') {
    return 0xffffffff;
  }
  if (param_5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      bVar3 = *param_4;
      if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
        if ((char)param_1[0xd] != '\0') {
LAB_1004cc6b0:
          *(undefined1 *)((long)param_1 + 0x35) = 1;
          return 0xffffffff;
        }
        uVar2 = *param_1;
        uVar1 = uVar2 + 1;
        *param_1 = uVar1;
        *(byte *)((long)(param_1 + 1) + (ulong)uVar2) = bVar3;
        if (uVar1 == 4) {
          lVar4 = param_2;
          FUN_1004cc780(param_2,&uStack_68,param_1 + 1);
          if ((int)lVar4 == 0) goto LAB_1004cc6b0;
          *param_1 = 0;
          if (uStack_68 < 3) {
            *(undefined1 *)(param_1 + 0xd) = 1;
          }
          uVar5 = uStack_68 + uVar5;
          param_2 = param_2 + uStack_68;
        }
      }
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
    if (uVar5 >> 0x1f != 0) {
      *(undefined1 *)((long)param_1 + 0x35) = 1;
      *param_3 = 0;
      return 0xffffffff;
    }
  }
  *param_3 = (int)uVar5;
  return (ulong)((char)param_1[0xd] == '\0');
}



/* Entry: 1004cc6dc; end: 1004cc77f;  */

uint FUN_1004cc6dc(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar2 = param_1 - 0x41;
  uVar7 = (ulong)param_1;
  uVar3 = param_1 - 0x47;
  bVar6 = 0x19 < (param_1 - 0x61 & 0xff);
  if (bVar6) {
    uVar3 = 0;
  }
  uVar8 = (uint)((long)((uVar7 ^ 0x3d) - 1) >> 0x3f);
  if ((!bVar6 || (uVar2 & 0xff) < 0x1a) || (param_1 - 0x30 & 0xff) < 10) {
    uVar8 = 0xffffffff;
  }
  if (0x19 < uVar2) {
    uVar2 = 0;
  }
  uVar1 = param_1 + 4;
  if (9 < param_1 - 0x30) {
    uVar1 = 0;
  }
  uVar4 = (uint)((uVar7 ^ 0x2b) - 1 >> 0x20);
  uVar5 = (uint)((uVar7 ^ 0x2f) - 1 >> 0x20);
  return (uVar3 | uVar2 | uVar1 | (int)uVar4 >> 0x1f & 0x3eU | (int)uVar5 >> 0x1f & 0x3fU |
         (uVar8 | (int)(uVar4 | uVar5) >> 0x1f) ^ 0xffffffff) & 0xff;
}



/* Entry: 1004cc780; end: 1004cc8d3;  */

undefined8 FUN_1004cc780(byte *param_1,undefined8 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  bVar1 = *param_3;
  uVar7 = (uint)bVar1;
  FUN_1004cc6dc();
  bVar2 = param_3[1];
  uVar10 = (uint)bVar2;
  FUN_1004cc6dc();
  bVar3 = param_3[2];
  uVar11 = (uint)bVar3;
  FUN_1004cc6dc();
  bVar4 = param_3[3];
  uVar12 = (uint)bVar4;
  FUN_1004cc6dc();
  uVar6 = 0;
  if ((((uVar7 != 0xff) && (uVar10 != 0xff)) && (uVar11 != 0xff)) && (uVar12 != 0xff)) {
    bVar5 = (byte)((uVar10 << 0xc) >> 0x10) | (byte)((uVar7 << 0x12) >> 0x10);
    uVar7 = 8;
    if (bVar1 != 0x3d) {
      uVar7 = 0;
    }
    uVar8 = 4;
    if (bVar2 != 0x3d) {
      uVar8 = 0;
    }
    uVar9 = 2;
    if (bVar3 != 0x3d) {
      uVar9 = 0;
    }
    uVar9 = uVar8 | uVar7 | uVar9;
    if (bVar4 == 0x3d) {
      uVar9 = uVar9 + 1;
    }
    if (uVar9 == 3) {
      uVar6 = 1;
      *param_2 = 1;
      *param_1 = bVar5;
    }
    else {
      uVar12 = uVar12 | uVar11 << 6;
      bVar1 = (byte)(uVar12 >> 8) | (byte)((uVar10 << 0xc) >> 8);
      if (uVar9 == 1) {
        *param_2 = 2;
        *param_1 = bVar5;
        param_1[1] = bVar1;
      }
      else {
        if (uVar9 != 0) {
          return 0;
        }
        *param_2 = 3;
        *param_1 = bVar5;
        param_1[1] = bVar1;
        param_1[2] = (byte)uVar12;
      }
      uVar6 = 1;
    }
  }
  return uVar6;
}


