/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004bab20; end: 1004bab8b;  */

long FUN_1004bab20(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1004bab8c; end: 1004babdf;  */

void FUN_1004bab8c(void)

{
  return;
}



/* Entry: 1004babe0; end: 1004bad13;  */

void FUN_1004babe0(long param_1)

{
  char cVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  char *UNRECOVERED_JUMPTABLE_00;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long lVar3;
  code *extraout_x9;
  long lVar4;
  
  if (*(long *)(*(long *)(param_1 + 0x28) + 0x20) == 0) {
    if (*(long *)(*(long *)(param_1 + 0x28) + 0x28) == 0) {
      func_0x000104c019cc();
      func_0x000104c01ae0();
      (*extraout_x8_00)();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
    lVar3 = *(long *)(param_1 + 0x18);
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      UNRECOVERED_JUMPTABLE_00 = (char *)(lVar3 + 1);
      *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE_00;
      if ((code *)(*(long *)(lVar4 + 0x28) - *(long *)(lVar4 + 0x20) >> 3) <=
          UNRECOVERED_JUMPTABLE_00) {
        plVar2 = *(long **)(param_1 + 0x30);
        if (plVar2 != (long *)0x0) goto code_r0x000104c01bd4;
        goto code_r0x000104c0033c;
      }
    }
    else {
      if (lVar3 == 0) {
        if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c00338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(param_1 + 0x30) + 0x38))();
          return;
        }
code_r0x000104c0033c:
        if (*(long *)(param_1 + 0x50) == 0) {
          func_0x000104c01ae0();
          (*extraout_x9)();
          param_1 = extraout_x8_01;
        }
        plVar2 = *(long **)(param_1 + 0x50);
        if (plVar2 == (long *)0x0) {
          func_0x000104bfeb48();
          func_0x000104c00420();
          return;
        }
code_r0x000104c01bd4:
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x30))();
        return;
      }
      UNRECOVERED_JUMPTABLE_00 = (char *)(lVar3 + -1);
      *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE_00;
    }
    lVar3 = *(long *)(lVar4 + 0x20);
    if ((code *)(*(long *)(lVar4 + 0x28) - lVar3 >> 3) <= UNRECOVERED_JUMPTABLE_00) {
      func_0x000104c019cc(lVar4,param_1);
      UNRECOVERED_JUMPTABLE_00 =
           "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/server_interceptor.h"
      ;
      (*extraout_x8_02)();
      lVar3 = *(long *)(lVar4 + 0x20);
    }
    FUN_1004b97d0(lVar3);
    goto LAB_1004b97e4;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  cVar1 = *(char *)(lVar4 + 0x40);
  if (cVar1 == '\x01') {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 != *(long *)(lVar4 + 0x48)) || ((*(byte *)(param_1 + 0x21) & 1) != 0))
      goto LAB_1004bacb8;
      lVar4 = param_1;
      FUN_1004b95a4();
      func_0x000104c01b7c();
      *(undefined1 *)(param_1 + 0x21) = 1;
      UNRECOVERED_JUMPTABLE_00 = *(char **)(param_1 + 0x18);
      param_1 = lVar4;
    }
    else {
LAB_1004baca0:
      if (*(long *)(param_1 + 0x18) == 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x30) + 0x38);
LAB_1004bad0c:
                    /* WARNING: Could not recover jumptable at 0x0001004bad18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      UNRECOVERED_JUMPTABLE_00 = (char *)(*(long *)(param_1 + 0x18) + -1);
      *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE_00;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x20) & 1) != 0) goto LAB_1004baca0;
    lVar3 = *(long *)(param_1 + 0x18);
LAB_1004bacb8:
    UNRECOVERED_JUMPTABLE_00 = (char *)(lVar3 + 1);
    *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE_00;
    if (((code *)(*(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28) >> 3) <=
         UNRECOVERED_JUMPTABLE_00) ||
       ((cVar1 != '\0' && (*(code **)(lVar4 + 0x48) < UNRECOVERED_JUMPTABLE_00)))) {
      UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x30) + 0x30);
      goto LAB_1004bad0c;
    }
  }
  func_0x000100c21ce0();
  lVar4 = *(long *)(param_1 + 0x28);
  if ((code *)(*(long *)(param_1 + 0x30) - lVar4 >> 3) <= UNRECOVERED_JUMPTABLE_00) {
    func_0x000104c019cc();
    UNRECOVERED_JUMPTABLE_00 =
         "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/client_interceptor.h"
    ;
    (*extraout_x8)();
    lVar4 = *(long *)(param_1 + 0x28);
  }
  FUN_1004b97d0(lVar4);
LAB_1004b97e4:
                    /* WARNING: Could not recover jumptable at 0x0001004b97ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* Entry: 1004bad14; end: 1004bad43;  */

void FUN_1004bad14(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001004bad18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1004bad44; end: 1004bae17;  */

long * FUN_1004bad44(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long *unaff_x19;
  long lVar2;
  long *plStack_230;
  undefined8 auStack_228 [60];
  undefined8 uStack_48;
  
  func_0x0001004bad1c();
  FUN_1004bae20();
  func_0x0001004bb090(unaff_x19 + 6);
  FUN_1004bb0ac();
  plVar1 = plRam0000000113815c70;
  if (((*(byte *)((long)unaff_x19 + 0x71) & 1) != 0) && ((*(byte *)(unaff_x19 + 0xe) & 1) == 0)) {
    auStack_228[(long)plStack_230 * 10] = 2;
    auStack_228[(long)plStack_230 * 10 + 1] = 0;
    plStack_230 = (long *)((long)plStack_230 + 1);
  }
  lVar2 = unaff_x19[0x13];
  (**(code **)(*unaff_x19 + 0x20))();
  (**(code **)(*plVar1 + 0x108))(plVar1,lVar2,auStack_228,plStack_230,unaff_x19,0);
  if ((int)plVar1 != 0) {
    func_0x000104c019e4();
  }
  func_0x0001004b9658(uStack_48);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x00010002b82c(auStack_228);
    func_0x000107c613d0(lVar2);
    func_0x000107c60c50(plStack_230);
    return plStack_230;
  }
  return plVar1;
}



/* Entry: 1004bae18; end: 1004bae1f;  */

void FUN_1004bae18(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c(&stack0x00000008);
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 1004bae20; end: 1004baecf;  */

void FUN_1004bae20(byte *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_48 [24];
  
  if ((param_1[1] == 1) && ((*param_1 & 1) == 0)) {
    lVar3 = *param_3;
    *param_3 = lVar3 + 1;
    puVar5 = (undefined4 *)(param_2 + lVar3 * 0x50);
    uVar1 = *(undefined4 *)(param_1 + 4);
    *puVar5 = 0;
    puVar5[1] = uVar1;
    *(undefined8 *)(puVar5 + 2) = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    FUN_1004bae18(param_1,"");
    FUN_1004baed0(uVar4,param_1 + 8,auStack_48);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    func_0x0001004bb078();
    *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(param_1 + 0x18);
    bVar2 = param_1[0x20];
    *(byte *)(puVar5 + 8) = bVar2;
    if (bVar2 == 1) {
      puVar5[9] = *(undefined4 *)(param_1 + 0x24);
    }
  }
  return;
}



/* Entry: 1004baed0; end: 1004bb013;  */

long * FUN_1004baed0(long param_1,long param_2,undefined8 *param_3,long *param_4,long param_5)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined8 extraout_x8;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long in_register_00005008;
  long in_register_00005028;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  FUN_1004b9648();
  lVar7 = param_3[2];
  uVar1 = *(ulong *)(param_5 + 8);
  if (-1 < (char)*(byte *)(param_5 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_5 + 0x17);
  }
  uVar4 = uVar1 == 0;
  if (!(bool)uVar4) {
    lVar7 = lVar7 + 1;
  }
  *param_4 = lVar7;
  uStack_48 = extraout_x8;
  if (lVar7 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    param_4 = (long *)(lVar7 * 0x60);
    plVar8 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0x50))();
    puVar9 = (undefined8 *)*param_3;
    plVar10 = plVar8 + 4;
    while (puVar9 != param_3 + 1) {
      func_0x0001004bb01c(auStack_68,puVar9 + 4);
      func_0x0001004bb06c();
      plVar10[-3] = in_register_00005008;
      plVar10[-4] = param_1;
      plVar10[-1] = in_register_00005028;
      plVar10[-2] = param_2;
      func_0x0001004bb01c(auStack_68,puVar9 + 7);
      func_0x0001004bb06c();
      plVar10[1] = in_register_00005008;
      *plVar10 = param_1;
      plVar10[3] = in_register_00005028;
      plVar10[2] = param_2;
      FUN_10002c7d4();
      plVar10 = plVar10 + 0xc;
    }
    bVar2 = *(byte *)(param_5 + 0x17);
    uVar4 = bVar2 == 0;
    uVar1 = *(ulong *)(param_5 + 8);
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
    }
    if (uVar1 != 0) {
      param_4 = (long *)&UNK_10dd619b4;
      (**(code **)(*plRam0000000113815c70 + 400))
                (auStack_68,plRam0000000113815c70,&UNK_10dd619b4,0x17);
      func_0x0001004bb06c();
      plVar10[-3] = in_register_00005008;
      plVar10[-4] = param_1;
      plVar10[-1] = in_register_00005028;
      plVar10[-2] = param_2;
      func_0x0001004bb01c(auStack_68,param_5);
      func_0x0001004bb06c();
      plVar10[1] = in_register_00005008;
      *plVar10 = param_1;
      plVar10[3] = in_register_00005028;
      plVar10[2] = param_2;
    }
  }
  func_0x0001004b9658(uStack_48);
  if ((bool)uVar4) {
    return plVar8;
  }
  func_0x000107c60e78();
  if ((param_4 == (long *)0x0) || (plVar8 = param_4, func_0x000107c610a0(), param_4 != (long *)0x0))
  {
    return param_4;
  }
  func_0x000107c60ebc();
  lVar7 = -2;
  do {
    iVar5 = (int)(char)*param_4;
    func_0x000107c60e80();
    iVar6 = (int)(char)*plVar8;
    func_0x000107c60e80();
    bVar3 = lVar7 != 0;
    lVar7 = lVar7 + -1;
    if ((iVar6 == 0 || iVar5 == 0) || iVar5 != iVar6) break;
    plVar8 = (long *)((long)plVar8 + 1);
    param_4 = (long *)((long)param_4 + 1);
  } while (bVar3);
  return (long *)(ulong)(uint)(iVar5 - iVar6);
}



/* Entry: 1004bb014; end: 1004bb0ab;  */

char * FUN_1004bb014(undefined8 param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  
  if ((param_2 == (char *)0x0) || (pcVar4 = param_2, func_0x000107c610a0(), param_2 != (char *)0x0))
  {
    return param_2;
  }
  func_0x000107c60ebc();
  lVar5 = -2;
  do {
    iVar2 = (int)*param_2;
    func_0x000107c60e80();
    iVar3 = (int)*pcVar4;
    func_0x000107c60e80();
    bVar1 = lVar5 != 0;
    lVar5 = lVar5 + -1;
    if ((iVar3 == 0 || iVar2 == 0) || iVar2 != iVar3) break;
    pcVar4 = pcVar4 + 1;
    param_2 = param_2 + 1;
  } while (bVar1);
  return (char *)(ulong)(uint)(iVar2 - iVar3);
}



/* Entry: 1004bb0ac; end: 1004bb17b;  */

long * FUN_1004bb0ac(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  code *extraout_x8;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int aiStack_68 [14];
  
  func_0x0001004bb09c();
  if (*param_1 == 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
      return param_1;
    }
    if ((*(byte *)(unaff_x19 + 8) & 1) != 0) goto LAB_1004bb120;
  }
  else {
    if (*(char *)(unaff_x19 + 8) == '\x01') {
LAB_1004bb120:
      plVar2 = (long *)(unaff_x19 + 0x20);
      plVar3 = *(long **)(unaff_x19 + 0x38);
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
      if (plVar3 == plVar2) {
        uVar6 = 0x20;
      }
      else {
        if (plVar3 == (long *)0x0) {
          return plVar2;
        }
        uVar6 = 0x28;
      }
      func_0x000104c01a8c(uVar6,plVar3,0);
      return plVar2;
    }
    func_0x000104c00400(aiStack_68,unaff_x19 + 0x20);
    func_0x000100612328();
    if (aiStack_68[0] != 0) {
      func_0x000104c019cc();
      (*extraout_x8)();
    }
  }
  plVar2 = (long *)(unaff_x19 + 0x20);
  FUN_1006136a8(plVar2,0);
  lVar4 = *unaff_x21;
  *unaff_x21 = lVar4 + 1;
  puVar5 = (undefined4 *)(unaff_x20 + lVar4 * 0x50);
  uVar1 = *(undefined4 *)(unaff_x19 + 0x18);
  *puVar5 = 1;
  puVar5[1] = uVar1;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(puVar5 + 2) = 0;
  *(undefined8 *)(puVar5 + 4) = uVar6;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  return plVar2;
}



/* Entry: 1004bb17c; end: 1004bb1ab;  */

void FUN_1004bb17c(void)

{
  return;
}



/* Entry: 1004bb1ac; end: 1004bb267;  */

long * FUN_1004bb1ac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_5 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x0001004b62b4(&uStack_48,0);
    FUN_100460de4(auStack_90);
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,0);
    FUN_100467a48(auStack_90);
    FUN_1004b6ddc(&uStack_48);
  }
  else {
    param_1 = (long *)0x1;
  }
  return param_1;
}



/* Entry: 1004bb268; end: 1004bb38b;  */

undefined1  [16]
FUN_1004bb268(ulong param_1,uint *param_2,undefined8 param_3,long **param_4,ulong param_5)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  long **pplVar11;
  long **pplVar12;
  long **pplVar13;
  long **pplVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  long *plVar18;
  int *piVar19;
  char *pcVar20;
  long *plVar21;
  long **pplVar22;
  ulong uVar23;
  char *pcVar24;
  long lVar25;
  ulong *puVar26;
  undefined8 *puVar27;
  long **pplVar28;
  undefined8 uVar29;
  int iVar30;
  uint *puVar31;
  int iVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  long *plStack_198;
  long *plStack_190;
  long alStack_188 [4];
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  uint7 uStack_5f;
  
  if (*param_2 < 8) {
    puVar27 = (undefined8 *)
              (param_1 + *(long *)(&UNK_10dd57a38 + (long)(int)*param_2 * 8) * 8 + 0xd0);
    puVar26 = (ulong *)*puVar27;
    if (puVar26 == (ulong *)0x0) {
      puVar26 = *(ulong **)(param_1 + 8);
      do {
        uVar16 = *puVar26;
        uVar9 = uVar16 + 0xd0;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar26,0x10);
        if (bVar6) {
          *puVar26 = uVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar26[2] < uVar9) {
        param_2 = (uint *)0xd0;
        FUN_1004bbee0(puVar26,0xd0);
      }
      else {
        puVar26 = (ulong *)((long)puVar26 + uVar16 + 0x30);
      }
      puVar26[0x18] = 0;
      puVar26[0x15] = 0;
      puVar26[0x14] = 0;
      puVar26[0x17] = 0;
      puVar26[0x16] = 0;
      puVar26[0x11] = 0;
      puVar26[0x10] = 0;
      puVar26[0x13] = 0;
      puVar26[0x12] = 0;
      puVar26[0xd] = 0;
      puVar26[0xc] = 0;
      puVar26[0xf] = 0;
      puVar26[0xe] = 0;
      puVar26[9] = 0;
      puVar26[8] = 0;
      puVar26[0xb] = 0;
      puVar26[10] = 0;
      puVar26[5] = 0;
      puVar26[4] = 0;
      puVar26[7] = 0;
      puVar26[6] = 0;
      puVar26[1] = 0;
      *puVar26 = 0;
      puVar26[3] = 0;
      puVar26[2] = 0;
      *puVar27 = puVar26;
    }
    else {
      if (*puVar26 != 0) {
        puVar26 = (ulong *)0x0;
        goto LAB_1004bb35c;
      }
      FUN_1008373c8(puVar26 + 0x17);
      puVar26[2] = 0;
      puVar26[1] = 0;
      puVar26[4] = 0;
      puVar26[3] = (ulong)uStack_5f << 8;
      puVar26[6] = 0;
      puVar26[5] = 0;
      puVar26[8] = 0;
      puVar26[7] = 0;
      puVar26[0x17] = 0;
      puVar26[0x18] = 0;
    }
    *puVar26 = param_1;
    puVar26[2] = param_1 + 0x100;
LAB_1004bb35c:
    auVar35._8_8_ = param_2;
    auVar35._0_8_ = puVar26;
    return auVar35;
  }
  pcVar20 = "return 123456789";
  pcVar10 = "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
  ;
  pplVar13 = (long **)0x401;
  func_0x000104a6e964();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (pplVar13 == (long **)0x0) {
LAB_1004bbb1c:
    if ((param_5 & 1) == 0) {
      uVar9 = *(ulong *)((long)pcVar20 + 0x98);
      FUN_1004bd5bc(uVar9,param_4);
      if ((uVar9 & 1) == 0) {
        func_0x000107c2c408();
LAB_1004bbc94:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1004bbc98);
        (*pcVar7)();
      }
      lVar25 = *(long *)((long)pcVar20 + 0x98);
      plStack_158 = (long *)0x0;
      uVar29 = 0x28;
      FUN_100460200(0x28);
      pplVar14 = &plStack_158;
      FUN_1008324d0(lVar25,param_4,pplVar14,0x100834c24,0,uVar29,0);
      plVar18 = plStack_158;
      if (((ulong)plStack_158 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      plStack_160 = (long *)0x0;
      pplVar14 = &plStack_160;
      FUN_10082b8d4(&plStack_110);
      plVar18 = plStack_160;
      if (((ulong)plStack_160 & 1) != 0) {
        FUN_10084dad0();
      }
    }
LAB_1004bbb9c:
    uVar29 = 0;
  }
  else {
    uVar15 = 0;
    pplVar22 = (long **)pcVar10;
    pplVar12 = pplVar13;
    do {
      uVar4 = 1 << (ulong)(*(uint *)pplVar22 & 0x1f);
      plVar18 = (long *)pcVar20;
      pplVar11 = (long **)pcVar10;
      pplVar14 = pplVar13;
      if ((uVar4 & uVar15) != 0) goto LAB_1004bbb44;
      uVar15 = uVar4 | uVar15;
      pplVar12 = (long **)((long)pplVar12 + -1);
      pplVar22 = pplVar22 + 10;
    } while (pplVar12 != (long **)0x0);
    if (pplVar13 == (long **)0x0) goto LAB_1004bbb1c;
    plVar8 = (long *)pcVar20;
    FUN_1004bb268();
    plVar18 = plVar8;
    if (plVar8 != (long *)0x0) {
      pplVar28 = (long **)0x0;
      iVar30 = 0;
      iVar32 = 0;
      plVar8[9] = (long)param_4;
      pplVar12 = (long **)(plVar8 + 1);
      *(char *)(plVar8 + 10) = (char)param_5;
      plVar1 = (long *)((long)pcVar20 + 0x3b0);
      pplVar22 = (long **)((long)pcVar20 + 0xa88);
      plVar2 = (long *)((long)pcVar20 + 0x1a8);
      do {
        if (*(long **)((long)pcVar10 + ((long)pplVar28 * 10 + 1) * 8) != (long *)0x0) {
          uVar29 = 1;
          goto LAB_1004bbc10;
        }
        switch(*(uint *)((long)pcVar10 + (long)pplVar28 * 10 * 8)) {
        case 0:
          puVar31 = (uint *)((long)pcVar10 + ((long)pplVar28 * 0x14 + 1) * 4);
          if ((*puVar31 & 0xfffffe5b) != 0) {
code_r0x0001004bbbe4:
            uVar29 = 9;
            goto LAB_1004bbc10;
          }
          if (*(char *)((long)pcVar20 + 0xc2) != '\0') goto code_r0x0001004bbbec;
          if (*(char *)((long)pcVar10 + ((long)pplVar28 * 10 + 4) * 8) == '\0') {
            if (*(int *)(*(long *)((long)pcVar20 + 0xb0) + 0x18) != 0) {
              puVar17 = (uint *)(*(long *)((long)pcVar20 + 0xb0) + 0x1c);
              goto code_r0x0001004bb868;
            }
          }
          else {
            puVar17 = (uint *)((long)pcVar10 + ((long)pplVar28 * 0x14 + 9) * 4);
code_r0x0001004bb868:
            if ((char)*(long *)((long)pcVar20 + 0x28) == '\0') {
              pplVar11 = (long **)(ulong)*puVar17;
              plVar18 = (long *)((long)pcVar20 + 0xa34);
              func_0x000104ab1490();
              *(uint *)((long)pcVar20 + 0x1a8) = *(uint *)((long)pcVar20 + 0x1a8) | 0x100;
              *(int *)((long)pcVar20 + 0x338) = (int)plVar18;
            }
          }
          if ((ulong)*(long **)((long)pcVar10 + ((long)pplVar28 * 10 + 2) * 8) >> 0x1f == 0) {
            *(byte *)(plVar8 + 3) = *(byte *)(plVar8 + 3) | 1;
            *(char *)((long)pcVar20 + 0xc2) = '\x01';
            pplVar11 = *(long ***)((long)pcVar10 + ((long)pplVar28 * 10 + 2) * 8);
            pplVar14 = *(long ***)((long)pcVar10 + ((long)pplVar28 * 10 + 3) * 8);
            plVar18 = (long *)pcVar20;
            FUN_1004bc508();
            if ((int)plVar18 != 0) {
              uVar15 = *(uint *)((long)pcVar20 + 0x1a8);
              *(uint *)((long)pcVar20 + 0x1a8) = uVar15 & 0xffffffbf;
              if ((char)*(long *)((long)pcVar20 + 0x28) == '\0') {
                *(long **)((long)pcVar20 + 0x100) = plVar2;
                *(uint *)((long)pcVar20 + 0x108) = *puVar31;
                goto code_r0x0001004bb930;
              }
              if (*(long *)((long)pcVar20 + 0x20) != 0x7fffffffffffffff) {
                *(uint *)((long)pcVar20 + 0x1a8) = uVar15 & 0xffffffbf | 0x800;
                *(long *)((long)pcVar20 + 0x328) = *(long *)((long)pcVar20 + 0x20);
              }
              *(long **)((long)pcVar20 + 0x100) = plVar2;
              *(uint *)((long)pcVar20 + 0x108) = *puVar31;
              *(long **)((long)pcVar20 + 0x110) = (long *)((long)pcVar20 + 0x9d8);
code_r0x0001004bba9c:
              iVar30 = 1;
              break;
            }
          }
          goto code_r0x0001004bbbf4;
        case 1:
          uVar15 = *(uint *)((long)pcVar10 + ((long)pplVar28 * 0x14 + 1) * 4);
          if ((uVar15 & 0x3ffffff8) != 0) goto code_r0x0001004bbbe4;
          plVar21 = *(long **)((long)pcVar10 + ((long)pplVar28 * 10 + 2) * 8);
          if (plVar21 == (long *)0x0) {
            uVar29 = 0xb;
            goto LAB_1004bbc10;
          }
          if (*(char *)((long)pcVar20 + 0xc3) != '\0') goto code_r0x0001004bbbec;
          uVar4 = uVar15 | 0x80000000;
          if ((int)plVar21[2] < 1) {
            uVar4 = uVar15;
          }
          *(byte *)(plVar8 + 3) = *(byte *)(plVar8 + 3) | 4;
          *(char *)((long)pcVar20 + 0xc3) = '\x01';
          FUN_1006147e0(pplVar22);
          plVar18 = *(long **)((long)pcVar10 + ((long)pplVar28 * 10 + 2) * 8) + 3;
          pplVar11 = pplVar22;
          FUN_100614830();
          *(uint *)((long)pcVar20 + 0x130) = uVar4;
          *(long ***)((long)pcVar20 + 0x128) = pplVar22;
code_r0x0001004bb930:
          iVar30 = 1;
          break;
        case 2:
          if (*(uint *)((long)pcVar10 + ((long)pplVar28 * 0x14 + 1) * 4) != 0)
          goto code_r0x0001004bbbe4;
          if ((char)*(long *)((long)pcVar20 + 0x28) == '\0') {
code_r0x0001004bbc04:
            uVar29 = 2;
            goto LAB_1004bbc10;
          }
          if (*(char *)((long)pcVar20 + 0xc4) != '\0') goto code_r0x0001004bbbec;
          *(byte *)(plVar8 + 3) = *(byte *)(plVar8 + 3) | 2;
          iVar30 = 1;
          *(char *)((long)pcVar20 + 0xc4) = '\x01';
          *(long **)((long)pcVar20 + 0x118) = plVar1;
          break;
        case 3:
          if (*(uint *)((long)pcVar10 + ((long)pplVar28 * 0x14 + 1) * 4) != 0)
          goto code_r0x0001004bbbe4;
          if ((char)*(long *)((long)pcVar20 + 0x28) != '\0') {
code_r0x0001004bbbfc:
            uVar29 = 3;
            goto LAB_1004bbc10;
          }
          if (*(char *)((long)pcVar20 + 0xc4) != '\0') goto code_r0x0001004bbbec;
          if ((ulong)*(long **)((long)pcVar10 + ((long)pplVar28 * 10 + 2) * 8) >> 0x1f == 0) {
            *(byte *)(plVar8 + 3) = *(byte *)(plVar8 + 3) | 2;
            *(char *)((long)pcVar20 + 0xc4) = '\x01';
            pplVar11 = *(long ***)((long)pcVar10 + ((long)pplVar28 * 10 + 2) * 8);
            pplVar14 = *(long ***)((long)pcVar10 + ((long)pplVar28 * 10 + 3) * 8);
            plVar18 = (long *)pcVar20;
            FUN_1004bc508();
            if ((int)plVar18 == 0) goto code_r0x0001004bbbf4;
            if (*(uint *)((long)pcVar10 + ((long)pplVar28 * 10 + 4) * 8) == 0) {
              plStack_168 = (long *)0x0;
            }
            else {
              alStack_188[0] = 0;
              alStack_188[1] = 0;
              alStack_188[2] = 0;
              func_0x000104ab5920(alStack_188 + 3,2,"Server returned error",0x15,&plStack_130,
                                  alStack_188);
              pplVar14 = (long **)(long)(int)*(uint *)((long)pcVar10 + ((long)pplVar28 * 10 + 4) * 8
                                                      );
              func_0x000104abaa50(&plStack_168,alStack_188 + 3,3);
              if ((alStack_188[3] & 1U) != 0) {
                FUN_10084dad0();
              }
              plStack_110 = alStack_188;
              func_0x000100482b64(&plStack_110);
            }
            plVar18 = *(long **)((long)pcVar10 + ((long)pplVar28 * 10 + 5) * 8);
            if (plVar18 != (long *)0x0) {
              lStack_148 = plVar18[1];
              lStack_150 = *plVar18;
              lStack_138 = plVar18[3];
              lStack_140 = plVar18[2];
              FUN_1004bcbf4(&plStack_130,&lStack_150);
              uStack_108 = uStack_128;
              plStack_110 = plStack_130;
              uStack_f8 = uStack_118;
              uStack_100 = uStack_120;
              FUN_10084bde4(plVar1,&plStack_110);
              if ((long *)0x1 < plStack_110) {
                do {
                  lVar25 = *plStack_110;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
                  if (bVar6) {
                    *plStack_110 = lVar25 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar25 + -1 == 0) {
                  (*(code *)plStack_110[1])();
                }
              }
              if (plStack_168 != (long *)0x0) {
                plStack_190 = plStack_168;
                if (((ulong)plStack_168 & 1) != 0) {
                  piVar19 = (int *)((long)plStack_168 + -1);
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                    if (bVar6) {
                      *piVar19 = *piVar19 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                plVar18 = *(long **)((long)pcVar10 + ((long)pplVar28 * 10 + 5) * 8);
                pplVar14 = (long **)((long)plVar18 + 9);
                if (*plVar18 != 0) {
                  pplVar14 = (long **)plVar18[2];
                }
                uVar9 = plVar18[1] & 0xff;
                if (*plVar18 != 0) {
                  uVar9 = plVar18[1];
                }
                FUN_10084caf8(&plStack_110,&plStack_190,5,pplVar14,uVar9);
                plVar18 = plStack_168;
                if (plStack_110 == plStack_168) {
code_r0x0001004bba20:
                  if (((ulong)plVar18 & 1) != 0) {
                    FUN_10084dad0();
                  }
                }
                else {
                  plStack_168 = plStack_110;
                  plStack_110 = (long *)0x36;
                  if (((ulong)plVar18 & 1) != 0) {
                    FUN_10084dad0();
                    plVar18 = plStack_110;
                    goto code_r0x0001004bba20;
                  }
                }
                if (((ulong)plStack_190 & 1) != 0) {
                  FUN_10084dad0();
                }
              }
            }
            plStack_198 = plStack_168;
            if (((ulong)plStack_168 & 1) != 0) {
              piVar19 = (int *)((long)plStack_168 + -1);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                if (bVar6) {
                  *piVar19 = *piVar19 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            pplVar11 = &plStack_198;
            FUN_100831aec((long *)((long)pcVar20 + 0xdb8));
            if (((ulong)plStack_198 & 1) != 0) {
              FUN_10084dad0();
            }
            *(uint *)((long)pcVar20 + 0x538) =
                 *(uint *)((long)pcVar10 + ((long)pplVar28 * 10 + 4) * 8);
            *(uint *)((long)pcVar20 + 0x3b0) = *(uint *)((long)pcVar20 + 0x3b0) & 0xffffffbf | 0x400
            ;
            *(long **)((long)pcVar20 + 0x118) = plVar1;
            *(char **)((long)pcVar20 + 0x120) = (char *)((long)pcVar20 + 0xd74);
            plVar18 = plStack_168;
            if (((ulong)plStack_168 & 1) != 0) {
              FUN_10084dad0();
            }
            goto code_r0x0001004bba9c;
          }
code_r0x0001004bbbf4:
          uVar29 = 10;
          goto LAB_1004bbc10;
        case 4:
          if (*(uint *)((long)pcVar10 + ((long)pplVar28 * 0x14 + 1) * 4) != 0)
          goto code_r0x0001004bbbe4;
          if (*(char *)((long)pcVar20 + 0xc5) != '\0') goto code_r0x0001004bbbec;
          *(char *)((long)pcVar20 + 0xc5) = '\x01';
          *(long **)((long)pcVar20 + 0x9c8) =
               *(long **)((long)pcVar10 + ((long)pplVar28 * 10 + 2) * 8);
          *(code **)((long)pcVar20 + 0xd38) = FUN_10082c0f0;
          *(long **)((long)pcVar20 + 0xd40) = plVar8;
          *(long *)((long)pcVar20 + 0xd48) = 0;
          *(byte *)(plVar8 + 3) = *(byte *)(plVar8 + 3) | 8;
          *(long **)((long)pcVar20 + 0x138) = (long *)((long)pcVar20 + 0x5b8);
          *(long **)((long)pcVar20 + 0x148) = (long *)((long)pcVar20 + 0xd30);
          if ((char)*(long *)((long)pcVar20 + 0x28) == '\0') {
            *(long **)((long)pcVar20 + 0x158) = (long *)((long)pcVar20 + 0x9d8);
          }
          else {
            *(char **)((long)pcVar20 + 0x150) = (char *)((long)pcVar20 + 0xc1);
          }
code_r0x0001004bb844:
          iVar32 = iVar32 + 1;
          break;
        case 5:
          if (*(uint *)((long)pcVar10 + ((long)pplVar28 * 0x14 + 1) * 4) != 0)
          goto code_r0x0001004bbbe4;
          if (*(char *)((long)pcVar20 + 0xc6) == '\0') {
            *(char *)((long)pcVar20 + 0xc6) = '\x01';
            *(byte *)(plVar8 + 3) = *(byte *)(plVar8 + 3) | 0x10;
            plVar18 = (long *)((long)pcVar20 + 0xbb0);
            FUN_100614b50();
            *(long **)((long)pcVar20 + 0xce8) =
                 *(long **)((long)pcVar10 + ((long)pplVar28 * 10 + 2) * 8);
            *(undefined4 *)((long)pcVar20 + 0xce0) = 0;
            *(long **)((long)pcVar20 + 0x160) = (long *)((long)pcVar20 + 0xbb0);
            *(code **)((long)pcVar20 + 0xd18) = FUN_10082fef4;
            *(long **)((long)pcVar20 + 0xd20) = plVar8;
            *(long *)((long)pcVar20 + 0xd28) = 0;
            *(long **)((long)pcVar20 + 0x168) = (long *)((long)pcVar20 + 0xce0);
            *(char **)((long)pcVar20 + 0x170) = (char *)((long)pcVar20 + 0xce4);
            *(long **)((long)pcVar20 + 0x178) = (long *)((long)pcVar20 + 0xd10);
            goto code_r0x0001004bb844;
          }
          goto code_r0x0001004bbbec;
        case 6:
          if (*(uint *)((long)pcVar10 + ((long)pplVar28 * 0x14 + 1) * 4) != 0)
          goto code_r0x0001004bbbe4;
          if ((char)*(long *)((long)pcVar20 + 0x28) == '\0') goto code_r0x0001004bbc04;
          if (*(char *)((long)pcVar20 + 199) == '\0') {
            *(char *)((long)pcVar20 + 199) = '\x01';
            *(long **)((long)pcVar20 + 0x9d0) =
                 *(long **)((long)pcVar10 + ((long)pplVar28 * 10 + 2) * 8);
            *(long **)((long)pcVar20 + 0xda0) =
                 *(long **)((long)pcVar10 + ((long)pplVar28 * 10 + 3) * 8);
            *(long **)((long)pcVar20 + 0xda8) =
                 *(long **)((long)pcVar10 + ((long)pplVar28 * 10 + 4) * 8);
            *(long **)((long)pcVar20 + 0xdb0) =
                 *(long **)((long)pcVar10 + ((long)pplVar28 * 10 + 5) * 8);
            *(byte *)(plVar8 + 3) = *(byte *)(plVar8 + 3) | 0x20;
            *(long **)((long)pcVar20 + 0x180) = (long *)((long)pcVar20 + 0x7c0);
            *(long **)((long)pcVar20 + 0x188) = (long *)((long)pcVar20 + 0x9e0);
            pcVar7 = FUN_100830d1c;
code_r0x0001004bb830:
            *(code **)((long)pcVar20 + 0xd58) = pcVar7;
            *(long **)((long)pcVar20 + 0xd60) = plVar8;
            *(long *)((long)pcVar20 + 0xd68) = 0;
            *(long **)((long)pcVar20 + 400) = (long *)((long)pcVar20 + 0xd50);
            goto code_r0x0001004bb844;
          }
          goto code_r0x0001004bbbec;
        case 7:
          if (*(uint *)((long)pcVar10 + ((long)pplVar28 * 0x14 + 1) * 4) != 0)
          goto code_r0x0001004bbbe4;
          if ((char)*(long *)((long)pcVar20 + 0x28) != '\0') goto code_r0x0001004bbbfc;
          if (*(char *)((long)pcVar20 + 199) == '\0') {
            *(char *)((long)pcVar20 + 199) = '\x01';
            *(long **)((long)pcVar20 + 0xda0) =
                 *(long **)((long)pcVar10 + ((long)pplVar28 * 10 + 2) * 8);
            *(byte *)(plVar8 + 3) = *(byte *)(plVar8 + 3) | 0x20;
            *(long **)((long)pcVar20 + 0x180) = (long *)((long)pcVar20 + 0x7c0);
            *(long **)((long)pcVar20 + 0x188) = (long *)((long)pcVar20 + 0x9e0);
            pcVar7 = (code *)&UNK_104ad909c;
            goto code_r0x0001004bb830;
          }
code_r0x0001004bbbec:
          uVar29 = 8;
LAB_1004bbc10:
          bVar3 = *(byte *)(plVar8 + 3);
          param_4 = pplVar11;
          if ((bVar3 & 1) != 0) {
            *(char *)((long)pcVar20 + 0xc2) = '\0';
            FUN_10083228c(plVar2);
            plVar18 = (long *)((long)pcVar20 + 0x398);
            FUN_1004e2b40();
            bVar3 = *(byte *)(plVar8 + 3);
            param_4 = pplVar11;
          }
          if ((bVar3 >> 2 & 1) != 0) {
            *(char *)((long)pcVar20 + 0xc3) = '\0';
            bVar3 = *(byte *)(plVar8 + 3);
          }
          if ((bVar3 >> 1 & 1) != 0) {
            *(char *)((long)pcVar20 + 0xc4) = '\0';
            FUN_10083228c(plVar1);
            plVar18 = (long *)((long)pcVar20 + 0x5a0);
            FUN_1004e2b40();
            bVar3 = *(byte *)(plVar8 + 3);
          }
          if ((bVar3 >> 3 & 1) != 0) {
            *(char *)((long)pcVar20 + 0xc5) = '\0';
            bVar3 = *(byte *)(plVar8 + 3);
          }
          if ((bVar3 >> 4 & 1) != 0) {
            *(char *)((long)pcVar20 + 0xc6) = '\0';
            bVar3 = *(byte *)(plVar8 + 3);
          }
          if ((bVar3 >> 5 & 1) != 0) {
            *(char *)((long)pcVar20 + 199) = '\0';
          }
          goto LAB_1004bbba0;
        }
        pplVar28 = (long **)((long)pplVar28 + 1);
      } while (pplVar28 != pplVar13);
      plVar18 = (long *)((long)pcVar20 + 0xdd0);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *plVar18 = *plVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((param_5 & 1) == 0) {
        uVar9 = *(ulong *)((long)pcVar20 + 0x98);
        FUN_1004bd5bc(uVar9,param_4);
        if ((uVar9 & 1) == 0) {
          func_0x000107c2c40c();
          goto LAB_1004bbc94;
        }
      }
      plVar8[0x16] = (long)(iVar32 + iVar30);
      if (iVar30 != 0) {
        plVar8[0x13] = (long)FUN_100831dd8;
        plVar8[0x14] = (long)plVar8;
        plVar8[0x15] = 0;
        plVar8[1] = (long)(plVar8 + 0x12);
      }
      pplVar14 = (long **)(plVar8 + 0xe);
      FUN_1004bd700();
      plVar18 = (long *)pcVar20;
      param_4 = pplVar12;
      goto LAB_1004bbb9c;
    }
LAB_1004bbb44:
    param_4 = pplVar11;
    uVar29 = 8;
  }
LAB_1004bbba0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    auVar36._8_8_ = param_4;
    auVar36._0_8_ = uVar29;
    return auVar36;
  }
  func_0x000107c60e78();
  FUN_1004bdf74(&plStack_110);
  FUN_1004bdf74(&plStack_190);
  FUN_1004bdf74(&plStack_168);
  func_0x000107c60bd8();
  uVar9 = (long)pplVar14 - (long)param_4;
  uVar16 = uVar9;
  if (uVar9 == 0) goto LAB_1004bbe10;
  uVar23 = *(ulong *)(plVar18[3] + 0x10);
  uVar16 = *(ulong *)(plVar18[3] + 0x18);
  if (uVar16 == 0) {
    pplVar13 = (long **)0x1;
    dVar33 = 1.0;
LAB_1004bbdd0:
    uVar16 = (ulong)(((1.0 - dVar33) * (double)uVar9) / 0.2);
    if (uVar16 <= uVar9) {
      uVar9 = uVar16;
    }
  }
  else {
    dVar33 = ((double)uVar16 - (double)(long)(uVar23 & ((long)uVar23 >> 0x3f ^ 0xffffffffffffffffU))
             ) / (double)uVar16;
    dVar34 = 0.0;
    if (0.0 <= dVar33) {
      dVar34 = dVar33;
    }
    dVar33 = 1.0;
    if (dVar34 <= 1.0) {
      dVar33 = dVar34;
    }
    pplVar13 = (long **)(uVar16 >> 4);
    if (0.8 < dVar33) goto LAB_1004bbdd0;
  }
  if (pplVar13 < param_4) {
    uVar16 = 0;
  }
  else {
    uVar16 = (long)pplVar13 - (long)param_4;
    if ((long **)(uVar9 + (long)param_4) <= pplVar13) {
      uVar16 = uVar9;
    }
  }
LAB_1004bbe10:
  pcVar20 = (char *)(uVar16 + (long)param_4);
  plVar18 = plVar18 + 5;
  if (pcVar20 <= (char *)*plVar18) {
    uVar29 = 1;
    pcVar10 = (char *)*plVar18;
    do {
      pcVar24 = (char *)*plVar18;
      if (pcVar24 == pcVar10) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *plVar18 = (long)pcVar10 - (long)pcVar20;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_1004bbe6c;
      }
      else {
        ClearExclusiveLocal();
      }
      pcVar10 = pcVar24;
    } while (pcVar20 <= pcVar24);
  }
  uVar29 = 0;
  pcVar20 = (char *)0x0;
LAB_1004bbe6c:
  auVar37._8_8_ = uVar29;
  auVar37._0_8_ = pcVar20;
  return auVar37;
}



/* Entry: 1004bb38c; end: 1004bbd5f;  */

undefined1  [16]
FUN_1004bb38c(long *param_1,long **param_2,long **param_3,long **param_4,byte param_5)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long *plVar9;
  ulong uVar10;
  long **pplVar11;
  long **pplVar12;
  uint uVar13;
  uint *puVar14;
  long *plVar15;
  int *piVar16;
  ulong uVar17;
  long *plVar18;
  long **pplVar19;
  long **pplVar20;
  ulong uVar21;
  long lVar22;
  long **pplVar23;
  undefined8 uVar24;
  int iVar25;
  uint *puVar26;
  int iVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  long *plStack_128;
  long *plStack_120;
  long alStack_118 [4];
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (long **)0x0) {
LAB_1004bbb1c:
    if ((param_5 & 1) == 0) {
      uVar10 = param_1[0x13];
      FUN_1004bd5bc(uVar10,param_4);
      if ((uVar10 & 1) == 0) {
        func_0x000107c2c408();
LAB_1004bbc94:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1004bbc98);
        (*pcVar8)();
      }
      lVar22 = param_1[0x13];
      plStack_e8 = (long *)0x0;
      uVar24 = 0x28;
      FUN_100460200(0x28);
      pplVar12 = &plStack_e8;
      FUN_1008324d0(lVar22,param_4,pplVar12,0x100834c24,0,uVar24,0);
      param_1 = plStack_e8;
      if (((ulong)plStack_e8 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      plStack_f0 = (long *)0x0;
      pplVar12 = &plStack_f0;
      FUN_10082b8d4(&plStack_a0);
      param_1 = plStack_f0;
      if (((ulong)plStack_f0 & 1) != 0) {
        FUN_10084dad0();
      }
    }
LAB_1004bbb9c:
    uVar24 = 0;
    plVar15 = param_1;
  }
  else {
    uVar13 = 0;
    pplVar20 = param_2;
    pplVar19 = param_3;
    do {
      uVar5 = 1 << (ulong)(*(uint *)pplVar20 & 0x1f);
      plVar15 = param_1;
      pplVar11 = param_2;
      pplVar12 = param_3;
      if ((uVar5 & uVar13) != 0) goto LAB_1004bbb44;
      uVar13 = uVar5 | uVar13;
      pplVar19 = (long **)((long)pplVar19 + -1);
      pplVar20 = pplVar20 + 10;
    } while (pplVar19 != (long **)0x0);
    if (param_3 == (long **)0x0) goto LAB_1004bbb1c;
    plVar9 = param_1;
    FUN_1004bb268();
    plVar15 = plVar9;
    if (plVar9 != (long *)0x0) {
      pplVar23 = (long **)0x0;
      iVar25 = 0;
      iVar27 = 0;
      plVar9[9] = (long)param_4;
      pplVar19 = (long **)(plVar9 + 1);
      *(byte *)(plVar9 + 10) = param_5;
      plVar1 = param_1 + 0x76;
      pplVar20 = (long **)(param_1 + 0x151);
      plVar2 = param_1 + 0x35;
      do {
        if (param_2[(long)pplVar23 * 10 + 1] != (long *)0x0) {
          uVar24 = 1;
          goto LAB_1004bbc10;
        }
        switch(*(uint *)(param_2 + (long)pplVar23 * 10)) {
        case 0:
          puVar26 = (uint *)((long)param_2 + ((long)pplVar23 * 0x14 + 1) * 4);
          if ((*puVar26 & 0xfffffe5b) != 0) {
code_r0x0001004bbbe4:
            uVar24 = 9;
            goto LAB_1004bbc10;
          }
          if (*(char *)((long)param_1 + 0xc2) != '\0') goto code_r0x0001004bbbec;
          if (*(char *)(param_2 + (long)pplVar23 * 10 + 4) == '\0') {
            if (*(int *)(param_1[0x16] + 0x18) != 0) {
              puVar14 = (uint *)(param_1[0x16] + 0x1c);
              goto code_r0x0001004bb868;
            }
          }
          else {
            puVar14 = (uint *)((long)param_2 + ((long)pplVar23 * 0x14 + 9) * 4);
code_r0x0001004bb868:
            if ((char)param_1[5] == '\0') {
              pplVar11 = (long **)(ulong)*puVar14;
              plVar15 = (long *)((long)param_1 + 0xa34);
              func_0x000104ab1490();
              *(uint *)(param_1 + 0x35) = *(uint *)(param_1 + 0x35) | 0x100;
              *(int *)(param_1 + 0x67) = (int)plVar15;
            }
          }
          if ((ulong)param_2[(long)pplVar23 * 10 + 2] >> 0x1f == 0) {
            *(byte *)(plVar9 + 3) = *(byte *)(plVar9 + 3) | 1;
            *(undefined1 *)((long)param_1 + 0xc2) = 1;
            pplVar11 = (long **)param_2[(long)pplVar23 * 10 + 2];
            pplVar12 = (long **)param_2[(long)pplVar23 * 10 + 3];
            plVar15 = param_1;
            FUN_1004bc508();
            if ((int)plVar15 != 0) {
              uVar13 = *(uint *)(param_1 + 0x35);
              *(uint *)(param_1 + 0x35) = uVar13 & 0xffffffbf;
              if ((char)param_1[5] == '\0') {
                param_1[0x20] = (long)plVar2;
                *(uint *)(param_1 + 0x21) = *puVar26;
                goto code_r0x0001004bb930;
              }
              if (param_1[4] != 0x7fffffffffffffff) {
                *(uint *)(param_1 + 0x35) = uVar13 & 0xffffffbf | 0x800;
                param_1[0x65] = param_1[4];
              }
              param_1[0x20] = (long)plVar2;
              *(uint *)(param_1 + 0x21) = *puVar26;
              param_1[0x22] = (long)(param_1 + 0x13b);
code_r0x0001004bba9c:
              iVar25 = 1;
              break;
            }
          }
          goto code_r0x0001004bbbf4;
        case 1:
          uVar13 = *(uint *)((long)param_2 + ((long)pplVar23 * 0x14 + 1) * 4);
          if ((uVar13 & 0x3ffffff8) != 0) goto code_r0x0001004bbbe4;
          plVar18 = param_2[(long)pplVar23 * 10 + 2];
          if (plVar18 == (long *)0x0) {
            uVar24 = 0xb;
            goto LAB_1004bbc10;
          }
          if (*(char *)((long)param_1 + 0xc3) != '\0') goto code_r0x0001004bbbec;
          uVar5 = uVar13 | 0x80000000;
          if ((int)plVar18[2] < 1) {
            uVar5 = uVar13;
          }
          *(byte *)(plVar9 + 3) = *(byte *)(plVar9 + 3) | 4;
          *(undefined1 *)((long)param_1 + 0xc3) = 1;
          FUN_1006147e0(pplVar20);
          plVar15 = param_2[(long)pplVar23 * 10 + 2] + 3;
          pplVar11 = pplVar20;
          FUN_100614830();
          *(uint *)(param_1 + 0x26) = uVar5;
          param_1[0x25] = (long)pplVar20;
code_r0x0001004bb930:
          iVar25 = 1;
          break;
        case 2:
          if (*(uint *)((long)param_2 + ((long)pplVar23 * 0x14 + 1) * 4) != 0)
          goto code_r0x0001004bbbe4;
          if ((char)param_1[5] == '\0') {
code_r0x0001004bbc04:
            uVar24 = 2;
            goto LAB_1004bbc10;
          }
          if (*(char *)((long)param_1 + 0xc4) != '\0') goto code_r0x0001004bbbec;
          *(byte *)(plVar9 + 3) = *(byte *)(plVar9 + 3) | 2;
          iVar25 = 1;
          *(undefined1 *)((long)param_1 + 0xc4) = 1;
          param_1[0x23] = (long)plVar1;
          break;
        case 3:
          if (*(uint *)((long)param_2 + ((long)pplVar23 * 0x14 + 1) * 4) != 0)
          goto code_r0x0001004bbbe4;
          if ((char)param_1[5] != '\0') {
code_r0x0001004bbbfc:
            uVar24 = 3;
            goto LAB_1004bbc10;
          }
          if (*(char *)((long)param_1 + 0xc4) != '\0') goto code_r0x0001004bbbec;
          if ((ulong)param_2[(long)pplVar23 * 10 + 2] >> 0x1f == 0) {
            *(byte *)(plVar9 + 3) = *(byte *)(plVar9 + 3) | 2;
            *(undefined1 *)((long)param_1 + 0xc4) = 1;
            pplVar11 = (long **)param_2[(long)pplVar23 * 10 + 2];
            pplVar12 = (long **)param_2[(long)pplVar23 * 10 + 3];
            plVar15 = param_1;
            FUN_1004bc508();
            if ((int)plVar15 == 0) goto code_r0x0001004bbbf4;
            if (*(uint *)(param_2 + (long)pplVar23 * 10 + 4) == 0) {
              plStack_f8 = (long *)0x0;
            }
            else {
              alStack_118[0] = 0;
              alStack_118[1] = 0;
              alStack_118[2] = 0;
              func_0x000104ab5920(alStack_118 + 3,2,"Server returned error",0x15,&plStack_c0,
                                  alStack_118);
              pplVar12 = (long **)(long)(int)*(uint *)(param_2 + (long)pplVar23 * 10 + 4);
              func_0x000104abaa50(&plStack_f8,alStack_118 + 3,3);
              if ((alStack_118[3] & 1U) != 0) {
                FUN_10084dad0();
              }
              plStack_a0 = alStack_118;
              func_0x000100482b64(&plStack_a0);
            }
            plVar15 = param_2[(long)pplVar23 * 10 + 5];
            if (plVar15 != (long *)0x0) {
              lStack_d8 = plVar15[1];
              lStack_e0 = *plVar15;
              lStack_c8 = plVar15[3];
              lStack_d0 = plVar15[2];
              FUN_1004bcbf4(&plStack_c0,&lStack_e0);
              uStack_98 = uStack_b8;
              plStack_a0 = plStack_c0;
              uStack_88 = uStack_a8;
              uStack_90 = uStack_b0;
              FUN_10084bde4(plVar1,&plStack_a0);
              if ((long *)0x1 < plStack_a0) {
                do {
                  lVar22 = *plStack_a0;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plStack_a0,0x10);
                  if (bVar7) {
                    *plStack_a0 = lVar22 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar22 + -1 == 0) {
                  (*(code *)plStack_a0[1])();
                }
              }
              if (plStack_f8 != (long *)0x0) {
                plStack_120 = plStack_f8;
                if (((ulong)plStack_f8 & 1) != 0) {
                  piVar16 = (int *)((long)plStack_f8 + -1);
                  do {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                    if (bVar7) {
                      *piVar16 = *piVar16 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
                plVar15 = param_2[(long)pplVar23 * 10 + 5];
                pplVar12 = (long **)((long)plVar15 + 9);
                if (*plVar15 != 0) {
                  pplVar12 = (long **)plVar15[2];
                }
                uVar10 = plVar15[1] & 0xff;
                if (*plVar15 != 0) {
                  uVar10 = plVar15[1];
                }
                FUN_10084caf8(&plStack_a0,&plStack_120,5,pplVar12,uVar10);
                plVar15 = plStack_f8;
                if (plStack_a0 == plStack_f8) {
code_r0x0001004bba20:
                  if (((ulong)plVar15 & 1) != 0) {
                    FUN_10084dad0();
                  }
                }
                else {
                  plStack_f8 = plStack_a0;
                  plStack_a0 = (long *)0x36;
                  if (((ulong)plVar15 & 1) != 0) {
                    FUN_10084dad0();
                    plVar15 = plStack_a0;
                    goto code_r0x0001004bba20;
                  }
                }
                if (((ulong)plStack_120 & 1) != 0) {
                  FUN_10084dad0();
                }
              }
            }
            plStack_128 = plStack_f8;
            if (((ulong)plStack_f8 & 1) != 0) {
              piVar16 = (int *)((long)plStack_f8 + -1);
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                if (bVar7) {
                  *piVar16 = *piVar16 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            pplVar11 = &plStack_128;
            FUN_100831aec(param_1 + 0x1b7);
            if (((ulong)plStack_128 & 1) != 0) {
              FUN_10084dad0();
            }
            *(uint *)(param_1 + 0xa7) = *(uint *)(param_2 + (long)pplVar23 * 10 + 4);
            *(uint *)(param_1 + 0x76) = *(uint *)(param_1 + 0x76) & 0xffffffbf | 0x400;
            param_1[0x23] = (long)plVar1;
            param_1[0x24] = (long)param_1 + 0xd74;
            plVar15 = plStack_f8;
            if (((ulong)plStack_f8 & 1) != 0) {
              FUN_10084dad0();
            }
            goto code_r0x0001004bba9c;
          }
code_r0x0001004bbbf4:
          uVar24 = 10;
          goto LAB_1004bbc10;
        case 4:
          if (*(uint *)((long)param_2 + ((long)pplVar23 * 0x14 + 1) * 4) != 0)
          goto code_r0x0001004bbbe4;
          if (*(char *)((long)param_1 + 0xc5) != '\0') goto code_r0x0001004bbbec;
          *(undefined1 *)((long)param_1 + 0xc5) = 1;
          param_1[0x139] = (long)param_2[(long)pplVar23 * 10 + 2];
          param_1[0x1a7] = (long)FUN_10082c0f0;
          param_1[0x1a8] = (long)plVar9;
          param_1[0x1a9] = 0;
          *(byte *)(plVar9 + 3) = *(byte *)(plVar9 + 3) | 8;
          param_1[0x27] = (long)(param_1 + 0xb7);
          param_1[0x29] = (long)(param_1 + 0x1a6);
          if ((char)param_1[5] == '\0') {
            param_1[0x2b] = (long)(param_1 + 0x13b);
          }
          else {
            param_1[0x2a] = (long)param_1 + 0xc1;
          }
code_r0x0001004bb844:
          iVar27 = iVar27 + 1;
          break;
        case 5:
          if (*(uint *)((long)param_2 + ((long)pplVar23 * 0x14 + 1) * 4) != 0)
          goto code_r0x0001004bbbe4;
          if (*(char *)((long)param_1 + 0xc6) == '\0') {
            *(undefined1 *)((long)param_1 + 0xc6) = 1;
            *(byte *)(plVar9 + 3) = *(byte *)(plVar9 + 3) | 0x10;
            plVar15 = param_1 + 0x176;
            FUN_100614b50();
            param_1[0x19d] = (long)param_2[(long)pplVar23 * 10 + 2];
            *(undefined4 *)(param_1 + 0x19c) = 0;
            param_1[0x2c] = (long)(param_1 + 0x176);
            param_1[0x1a3] = (long)FUN_10082fef4;
            param_1[0x1a4] = (long)plVar9;
            param_1[0x1a5] = 0;
            param_1[0x2d] = (long)(param_1 + 0x19c);
            param_1[0x2e] = (long)param_1 + 0xce4;
            param_1[0x2f] = (long)(param_1 + 0x1a2);
            goto code_r0x0001004bb844;
          }
          goto code_r0x0001004bbbec;
        case 6:
          if (*(uint *)((long)param_2 + ((long)pplVar23 * 0x14 + 1) * 4) != 0)
          goto code_r0x0001004bbbe4;
          if ((char)param_1[5] == '\0') goto code_r0x0001004bbc04;
          if (*(char *)((long)param_1 + 199) == '\0') {
            *(undefined1 *)((long)param_1 + 199) = 1;
            param_1[0x13a] = (long)param_2[(long)pplVar23 * 10 + 2];
            param_1[0x1b4] = (long)param_2[(long)pplVar23 * 10 + 3];
            param_1[0x1b5] = (long)param_2[(long)pplVar23 * 10 + 4];
            param_1[0x1b6] = (long)param_2[(long)pplVar23 * 10 + 5];
            *(byte *)(plVar9 + 3) = *(byte *)(plVar9 + 3) | 0x20;
            param_1[0x30] = (long)(param_1 + 0xf8);
            param_1[0x31] = (long)(param_1 + 0x13c);
            pcVar8 = FUN_100830d1c;
code_r0x0001004bb830:
            param_1[0x1ab] = (long)pcVar8;
            param_1[0x1ac] = (long)plVar9;
            param_1[0x1ad] = 0;
            param_1[0x32] = (long)(param_1 + 0x1aa);
            goto code_r0x0001004bb844;
          }
          goto code_r0x0001004bbbec;
        case 7:
          if (*(uint *)((long)param_2 + ((long)pplVar23 * 0x14 + 1) * 4) != 0)
          goto code_r0x0001004bbbe4;
          if ((char)param_1[5] != '\0') goto code_r0x0001004bbbfc;
          if (*(char *)((long)param_1 + 199) == '\0') {
            *(undefined1 *)((long)param_1 + 199) = 1;
            param_1[0x1b4] = (long)param_2[(long)pplVar23 * 10 + 2];
            *(byte *)(plVar9 + 3) = *(byte *)(plVar9 + 3) | 0x20;
            param_1[0x30] = (long)(param_1 + 0xf8);
            param_1[0x31] = (long)(param_1 + 0x13c);
            pcVar8 = (code *)&UNK_104ad909c;
            goto code_r0x0001004bb830;
          }
code_r0x0001004bbbec:
          uVar24 = 8;
LAB_1004bbc10:
          bVar4 = *(byte *)(plVar9 + 3);
          param_4 = pplVar11;
          if ((bVar4 & 1) != 0) {
            *(undefined1 *)((long)param_1 + 0xc2) = 0;
            FUN_10083228c(plVar2);
            plVar15 = param_1 + 0x73;
            FUN_1004e2b40();
            bVar4 = *(byte *)(plVar9 + 3);
            param_4 = pplVar11;
          }
          if ((bVar4 >> 2 & 1) != 0) {
            *(undefined1 *)((long)param_1 + 0xc3) = 0;
            bVar4 = *(byte *)(plVar9 + 3);
          }
          if ((bVar4 >> 1 & 1) != 0) {
            *(undefined1 *)((long)param_1 + 0xc4) = 0;
            FUN_10083228c(plVar1);
            plVar15 = param_1 + 0xb4;
            FUN_1004e2b40();
            bVar4 = *(byte *)(plVar9 + 3);
          }
          if ((bVar4 >> 3 & 1) != 0) {
            *(undefined1 *)((long)param_1 + 0xc5) = 0;
            bVar4 = *(byte *)(plVar9 + 3);
          }
          if ((bVar4 >> 4 & 1) != 0) {
            *(undefined1 *)((long)param_1 + 0xc6) = 0;
            bVar4 = *(byte *)(plVar9 + 3);
          }
          if ((bVar4 >> 5 & 1) != 0) {
            *(undefined1 *)((long)param_1 + 199) = 0;
          }
          goto LAB_1004bbba0;
        }
        pplVar23 = (long **)((long)pplVar23 + 1);
      } while (pplVar23 != param_3);
      plVar15 = param_1 + 0x1ba;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *plVar15 = *plVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((param_5 & 1) == 0) {
        uVar10 = param_1[0x13];
        FUN_1004bd5bc(uVar10,param_4);
        if ((uVar10 & 1) == 0) {
          func_0x000107c2c40c();
          goto LAB_1004bbc94;
        }
      }
      plVar9[0x16] = (long)(iVar27 + iVar25);
      if (iVar25 != 0) {
        plVar9[0x13] = (long)FUN_100831dd8;
        plVar9[0x14] = (long)plVar9;
        plVar9[0x15] = 0;
        plVar9[1] = (long)(plVar9 + 0x12);
      }
      pplVar12 = (long **)(plVar9 + 0xe);
      FUN_1004bd700();
      param_4 = pplVar19;
      goto LAB_1004bbb9c;
    }
LAB_1004bbb44:
    param_4 = pplVar11;
    uVar24 = 8;
  }
LAB_1004bbba0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    auVar30._8_8_ = param_4;
    auVar30._0_8_ = uVar24;
    return auVar30;
  }
  func_0x000107c60e78();
  FUN_1004bdf74(&plStack_a0);
  FUN_1004bdf74(&plStack_120);
  FUN_1004bdf74(&plStack_f8);
  func_0x000107c60bd8();
  uVar17 = (long)pplVar12 - (long)param_4;
  uVar10 = uVar17;
  if (uVar17 == 0) goto LAB_1004bbe10;
  uVar21 = *(ulong *)(plVar15[3] + 0x10);
  uVar10 = *(ulong *)(plVar15[3] + 0x18);
  if (uVar10 == 0) {
    pplVar19 = (long **)0x1;
    dVar28 = 1.0;
LAB_1004bbdd0:
    uVar10 = (ulong)(((1.0 - dVar28) * (double)uVar17) / 0.2);
    if (uVar10 <= uVar17) {
      uVar17 = uVar10;
    }
  }
  else {
    dVar28 = ((double)uVar10 - (double)(long)(uVar21 & ((long)uVar21 >> 0x3f ^ 0xffffffffffffffffU))
             ) / (double)uVar10;
    dVar29 = 0.0;
    if (0.0 <= dVar28) {
      dVar29 = dVar28;
    }
    dVar28 = 1.0;
    if (dVar29 <= 1.0) {
      dVar28 = dVar29;
    }
    pplVar19 = (long **)(uVar10 >> 4);
    if (0.8 < dVar28) goto LAB_1004bbdd0;
  }
  if (pplVar19 < param_4) {
    uVar10 = 0;
  }
  else {
    uVar10 = (long)pplVar19 - (long)param_4;
    if ((long **)(uVar17 + (long)param_4) <= pplVar19) {
      uVar10 = uVar17;
    }
  }
LAB_1004bbe10:
  uVar10 = uVar10 + (long)param_4;
  puVar3 = (ulong *)(plVar15 + 5);
  if (uVar10 <= *puVar3) {
    uVar24 = 1;
    uVar17 = *puVar3;
    do {
      uVar21 = *puVar3;
      if (uVar21 == uVar17) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar7) {
          *puVar3 = uVar17 - uVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB_1004bbe6c;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar17 = uVar21;
    } while (uVar10 <= uVar21);
  }
  uVar24 = 0;
  uVar10 = 0;
LAB_1004bbe6c:
  auVar31._8_8_ = uVar24;
  auVar31._0_8_ = uVar10;
  return auVar31;
}



/* Entry: 1004bbd60; end: 1004bbe73;  */

undefined1  [16] FUN_1004bbd60(long param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  
  uVar5 = param_3 - param_2;
  uVar7 = uVar5;
  if (uVar5 == 0) goto LAB_1004bbe10;
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x10);
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x18);
  if (uVar6 == 0) {
    uVar6 = 1;
    dVar8 = 1.0;
LAB_1004bbdd0:
    uVar7 = (ulong)(((1.0 - dVar8) * (double)uVar5) / 0.2);
    if (uVar7 <= uVar5) {
      uVar5 = uVar7;
    }
  }
  else {
    dVar8 = ((double)uVar6 - (double)(long)(uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU))) /
            (double)uVar6;
    dVar9 = 0.0;
    if (0.0 <= dVar8) {
      dVar9 = dVar8;
    }
    dVar8 = 1.0;
    if (dVar9 <= 1.0) {
      dVar8 = dVar9;
    }
    uVar6 = uVar6 >> 4;
    if (0.8 < dVar8) goto LAB_1004bbdd0;
  }
  if (uVar6 < param_2) {
    uVar7 = 0;
  }
  else {
    uVar7 = uVar6 - param_2;
    if (uVar5 + param_2 <= uVar6) {
      uVar7 = uVar5;
    }
  }
LAB_1004bbe10:
  uVar7 = uVar7 + param_2;
  puVar1 = (ulong *)(param_1 + 0x28);
  if (uVar7 <= *puVar1) {
    uVar4 = 1;
    uVar5 = *puVar1;
    do {
      uVar6 = *puVar1;
      if (uVar6 == uVar5) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - uVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_1004bbe6c;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar5 = uVar6;
    } while (uVar7 <= uVar6);
  }
  uVar4 = 0;
  uVar7 = 0;
LAB_1004bbe6c:
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Entry: 1004bbe74; end: 1004bbedf;  */

long * FUN_1004bbe74(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_3 < param_2) {
    func_0x000107c2c39c();
  }
  else if (param_3 < 0x40000001) {
    while (plVar4 = param_1, uVar5 = param_2, FUN_1004bbd60(param_1,param_2,param_3),
          (uVar5 & 0xff) == 0) {
      func_0x0001004bbfac(param_1);
    }
    return plVar4;
  }
  func_0x000107c2c3a0();
  plVar4 = (long *)(param_2 + 0x10);
  (**(code **)(**(long **)param_1[4] + 0x10))(*(long **)param_1[4],plVar4,plVar4);
  plVar1 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + (long)plVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_1004b7918(plVar4,0x10);
  *plVar4 = 0;
  plVar1 = param_1 + 3;
  lVar7 = param_1[3];
  *plVar4 = lVar7;
  lVar6 = *plVar1;
  if (lVar6 == lVar7) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = (long)plVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_1004bbf9c;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    *plVar4 = lVar6;
    lVar7 = *plVar1;
    if (lVar7 == lVar6) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = (long)plVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_1004bbf90;
      bVar3 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_1004bbf90:
      bVar3 = false;
    }
    lVar6 = lVar7;
  } while (!bVar3);
LAB_1004bbf9c:
  return plVar4 + 2;
}



/* Entry: 1004bbee0; end: 1004bc04b;  */

long * FUN_1004bbee0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)(param_2 + 0x10);
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x10))
            ((long *)**(undefined8 **)(param_1 + 0x20),plVar4,plVar4);
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + (long)plVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_1004b7918(plVar4,0x10);
  *plVar4 = 0;
  plVar1 = (long *)(param_1 + 0x18);
  lVar6 = *(long *)(param_1 + 0x18);
  *plVar4 = lVar6;
  lVar5 = *plVar1;
  if (lVar5 == lVar6) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = (long)plVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_1004bbf9c;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    *plVar4 = lVar5;
    lVar6 = *plVar1;
    if (lVar6 == lVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = (long)plVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_1004bbf90;
      bVar3 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_1004bbf90:
      bVar3 = false;
    }
    lVar5 = lVar6;
  } while (!bVar3);
LAB_1004bbf9c:
  return plVar4 + 2;
}



/* Entry: 1004bc04c; end: 1004bc2ab;  */

void FUN_1004bc04c(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  
  pbVar1 = (byte *)(param_1 + 0x38);
  do {
    bVar4 = *pbVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((bVar4 & 1) == 0) {
    FUN_100460448(param_1 + 0x40);
    if (*(char *)(param_1 + 0x80) == '\0') {
      FUN_1004bc2ac(&uStack_88,param_1 + 8);
      plVar2 = plStack_80;
      if (plStack_80 == (long *)0x0) {
        *pbVar1 = 1;
      }
      else {
        plVar3 = plStack_80 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = *plVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *pbVar1 = 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = *plVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lVar10 = *(long *)(param_1 + 0x18);
      plVar7 = (long *)0x18;
      func_0x000107c60e20();
      plVar3 = *(long **)(lVar10 + 0x20);
      lVar9 = *(long *)(lVar10 + 0x28);
      if (lVar9 != 0) {
        plVar11 = (long *)(lVar9 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar11 = plVar7 + 1;
      *plVar11 = 1;
      *plVar7 = (long)&PTR_SUB_1107c5d60;
      puVar8 = (undefined8 *)0x28;
      plStack_70 = plVar3;
      lStack_68 = lVar9;
      func_0x000107c60e20();
      *puVar8 = &PTR_DAT_1107c5ea8;
      puVar8[1] = plVar3;
      puVar8[2] = lVar9;
      puVar8[3] = uStack_88;
      puVar8[4] = plVar2;
      plVar7[2] = (long)puVar8;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plStack_78 = plVar7;
      plStack_70 = plVar7;
      FUN_1004bc2ec(lVar10 + 0x20,&plStack_70);
      if (plStack_70 != (long *)0x0) {
        plVar3 = plStack_70 + 1;
        do {
          lVar9 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plStack_70 + 0x10))();
        }
      }
      FUN_1004bc3ac(param_1 + 0x88,plStack_78);
      if (plVar2 != (long *)0x0) {
        func_0x000107c60d68(plVar2);
      }
      if (plStack_80 != (long *)0x0) {
        plVar2 = plStack_80 + 1;
        do {
          lVar9 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          func_0x000107c60d68(plStack_80);
        }
      }
    }
    func_0x000100466b80(param_1 + 0x40);
  }
  return;
}



/* Entry: 1004bc2ac; end: 1004bc2eb;  */

undefined8 * FUN_1004bc2ac(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = param_2[1];
  *param_1 = *param_2;
  if (lVar5 == 0) {
    param_1[1] = 0;
  }
  else {
    func_0x000107c60d6c();
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      return param_1;
    }
  }
  plVar1 = (long *)0x0;
  func_0x000104acbc58();
  lVar5 = *plVar1;
  puVar2 = (undefined8 *)0x10;
  func_0x000107c60e20();
  uVar3 = *param_2;
  *param_2 = 0;
  *puVar2 = 0;
  puVar2[1] = uVar3;
  puVar4 = (undefined8 *)(lVar5 + 0x40);
  FUN_1004bc388(puVar4,puVar2);
  if ((int)puVar4 != 0) {
    puVar4 = (undefined8 *)*plVar1;
    FUN_100460448(puVar4);
    puVar2 = *(undefined8 **)(*plVar1 + 0x90);
    *(undefined8 *)(*plVar1 + 0x90) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)();
    }
    func_0x000100466b80(puVar4);
  }
  return puVar4;
}



/* Entry: 1004bc2ec; end: 1004bc387;  */

void FUN_1004bc2ec(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  puVar1 = (undefined8 *)0x10;
  func_0x000107c60e20();
  uVar2 = *param_2;
  *param_2 = 0;
  *puVar1 = 0;
  puVar1[1] = uVar2;
  lVar3 = lVar3 + 0x40;
  FUN_1004bc388(lVar3,puVar1);
  if ((int)lVar3 != 0) {
    lVar3 = *param_1;
    FUN_100460448(lVar3);
    puVar1 = *(undefined8 **)(*param_1 + 0x90);
    *(undefined8 *)(*param_1 + 0x90) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
    func_0x000100466b80(lVar3);
  }
  return;
}



/* Entry: 1004bc388; end: 1004bc3ab;  */

bool FUN_1004bc388(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  do {
    puVar3 = (undefined8 *)*param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *puVar3 = param_2;
  return param_1 + 9 == puVar3;
}



/* Entry: 1004bc3ac; end: 1004bc3d3;  */

void FUN_1004bc3ac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000104acb21c();
  }
  return;
}



/* Entry: 1004bc3d4; end: 1004bc507;  */

void FUN_1004bc3d4(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_79;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  lVar3 = *param_2;
  uVar6 = param_2[1];
  uVar1 = uVar6;
  if (lVar3 == 0) {
    uVar1 = uVar6 & 0xff;
  }
  if (uVar1 == 0) {
    func_0x000104ab5920(2,"Metadata keys cannot be zero length",0x23,&stack0xffffffffffffffd7,
                        &stack0xffffffffffffffb8);
  }
  else if (lVar3 == 0 || uVar6 >> 0x20 == 0) {
    pcVar5 = (char *)param_2[2];
    if (lVar3 == 0) {
      pcVar5 = (char *)((long)param_2 + 9);
    }
    if (*pcVar5 != ':') {
      pcVar5 = "Illegal header key";
      lVar3 = (long)param_2 + 9;
      if (*param_2 != 0) {
        lVar3 = param_2[2];
      }
      uVar1 = param_2[1] & 0xff;
      if (*param_2 != 0) {
        uVar1 = param_2[1];
      }
      if (uVar1 != 0) {
        uVar6 = 0;
        do {
          if ((*(ulong *)(&UNK_10dd57d70 + ((ulong)(*(byte *)(lVar3 + uVar6) >> 3) & 0x18)) >>
               ((ulong)*(byte *)(lVar3 + uVar6) & 0x3f) & 1) == 0) {
            lVar4 = lVar3;
            func_0x000104a6eea8(lVar3,uVar1,3,&uStack_60);
            lStack_68 = lVar4;
            func_0x000107c613d0("Illegal header key");
            uStack_90 = 0;
            uStack_88 = 0;
            uStack_98 = 0;
            func_0x000104ab5920(&uStack_78,2,"Illegal header key",pcVar5,&uStack_79,&uStack_98);
            lVar2 = (long)param_2 + 9;
            if (*param_2 != 0) {
              lVar2 = param_2[2];
            }
            func_0x000104abaa50(&uStack_70,&uStack_78,4,(lVar3 - lVar2) + uVar6);
            FUN_10084caf8(param_1,&uStack_70,6,lVar4,uStack_60);
            if ((uStack_70 & 1) != 0) {
              FUN_10084dad0();
            }
            if ((uStack_78 & 1) != 0) {
              FUN_10084dad0();
            }
            puStack_58 = &uStack_98;
            func_0x000100482b64(&puStack_58);
            lStack_68 = 0;
            if (lVar4 == 0) {
              return;
            }
            FUN_100460314(lVar4);
            return;
          }
          uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
      }
      *param_1 = 0;
      return;
    }
    uStack_70 = 0;
    lStack_68 = 0;
    uStack_78 = 0;
    func_0x000104ab5920(2,"Metadata keys cannot start with :",0x21,&stack0xffffffffffffffd7,
                        &uStack_78);
  }
  else {
    puStack_58 = (undefined8 *)0x0;
    uStack_60 = 0;
    func_0x000104ab5920(2,"Metadata keys cannot be larger than UINT32_MAX",0x2e,
                        &stack0xffffffffffffffd7,&uStack_60);
  }
  func_0x000100482b64(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1004bc508; end: 1004bc7e3;  */

undefined8 ** FUN_1004bc508(undefined8 **param_1,undefined8 ***param_2,char *param_3,int param_4)

{
  long lVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  char *pcVar7;
  undefined8 ***pppuVar8;
  char *pcVar9;
  int *piVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *extraout_x8;
  undefined8 ***unaff_x20;
  char *unaff_x21;
  undefined8 unaff_x22;
  undefined8 **ppuVar13;
  char *unaff_x24;
  undefined8 ***unaff_x25;
  undefined8 *puVar14;
  undefined8 **unaff_x26;
  int iVar15;
  long *plVar16;
  undefined8 ***pppuVar17;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_149;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 **ppuStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 **ppuStack_120;
  undefined8 ***pppuStack_118;
  char *pcStack_110;
  undefined8 **ppuStack_108;
  undefined8 uStack_100;
  char *pcStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 **ppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0x3b0;
  if (param_4 == 0) {
    lVar1 = 0x1a8;
  }
  pcVar9 = param_3;
  pppuVar8 = param_2;
  if (param_2 == (undefined8 ***)0x0) {
    ppuVar13 = (undefined8 **)0x1;
    param_2 = unaff_x20;
  }
  else {
    ppuVar13 = (undefined8 **)0x0;
    pppuVar17 = (undefined8 ***)0x0;
    unaff_x21 = (char *)((long)param_1 + lVar1);
    unaff_x22 = 0x60;
    pcVar7 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc";
    do {
      unaff_x26 = (undefined8 **)(param_3 + (long)pppuVar17 * 0x60);
      FUN_1004bc3d4(&ppuStack_c0,unaff_x26);
      if (ppuStack_c0 == (undefined8 **)0x0) {
        iVar15 = 1;
      }
      else {
        ppuStack_b8 = ppuStack_c0;
        if (((ulong)ppuStack_c0 & 1) != 0) {
          piVar10 = (int *)((long)ppuStack_c0 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = *piVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pppuVar8 = &ppuStack_b8;
        iVar15 = 0xf23c6aa;
        pcVar9 = pcVar7;
        func_0x000104abab1c("validate_metadata",pppuVar8,
                            "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                            ,0x34b);
        if (((ulong)ppuStack_b8 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      param_1 = ppuStack_c0;
      if (((ulong)ppuStack_c0 & 1) != 0) {
        FUN_10084dad0();
      }
      unaff_x24 = pcVar7;
      unaff_x25 = (undefined8 ***)&DAT_10f740706;
      if (iVar15 == 0) break;
      param_1 = unaff_x26;
      FUN_1004bc98c();
      if ((int)param_1 == 0) {
        func_0x0001004bc9d8(&ppuStack_c8,param_3 + (long)pppuVar17 * 0x60 + 0x20);
        if (ppuStack_c8 == (undefined8 **)0x0) {
          iVar15 = 1;
        }
        else {
          ppuStack_b8 = ppuStack_c8;
          if (((ulong)ppuStack_c8 & 1) != 0) {
            piVar10 = (int *)((long)ppuStack_c8 + -1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar4) {
                *piVar10 = *piVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          pppuVar8 = &ppuStack_b8;
          iVar15 = 0xf23c6aa;
          pcVar9 = pcVar7;
          func_0x000104abab1c("validate_metadata",pppuVar8,
                              "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                              ,0x350);
          if (((ulong)ppuStack_b8 & 1) != 0) {
            FUN_10084dad0();
          }
        }
        param_1 = ppuStack_c8;
        if (((ulong)ppuStack_c8 & 1) != 0) {
          FUN_10084dad0();
        }
        if (iVar15 == 0) break;
      }
      plVar16 = (long *)(param_3 + (long)pppuVar17 * 0x60 + 0x20);
      unaff_x24 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc";
      unaff_x25 = (undefined8 ***)&DAT_10f740706;
      if ((*plVar16 != 0) && (0xfffffffe < *(ulong *)(param_3 + (long)pppuVar17 * 0x60 + 0x28)))
      break;
      puStack_88 = unaff_x26[1];
      puStack_90 = *unaff_x26;
      puStack_78 = unaff_x26[3];
      puStack_80 = unaff_x26[2];
      param_1 = &puStack_90;
      pppuVar8 = (undefined8 ***)&DAT_10f740706;
      FUN_1004bc9ec();
      if ((int)param_1 != 0) {
        pppuVar8 = (undefined8 ***)((long)unaff_x26 + 9);
        if (*unaff_x26 != (undefined8 *)0x0) {
          pppuVar8 = (undefined8 ***)unaff_x26[2];
        }
        pcVar9 = (char *)((ulong)unaff_x26[1] & 0xff);
        if (*unaff_x26 != (undefined8 *)0x0) {
          pcVar9 = (char *)unaff_x26[1];
        }
        plVar11 = (long *)*plVar16;
        if ((long *)0x1 < plVar11) {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_a8 = *(undefined8 *)(param_3 + (long)pppuVar17 * 0x60 + 0x28);
        ppuStack_b0 = (undefined8 **)*plVar16;
        uStack_98 = *(undefined8 *)(param_3 + (long)pppuVar17 * 0x60 + 0x38);
        uStack_a0 = *(undefined8 *)(param_3 + (long)pppuVar17 * 0x60 + 0x30);
        ppuStack_b8 = unaff_x26;
        FUN_1004bcaf0(unaff_x21,pppuVar8,pcVar9,&ppuStack_b0,&ppuStack_b8,&UNK_104ad9110);
        param_1 = ppuStack_b0;
        if ((undefined8 **)0x1 < ppuStack_b0) {
          do {
            puVar12 = *ppuStack_b0;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuStack_b0,0x10);
            if (bVar4) {
              *ppuStack_b0 = (undefined8 *)((long)puVar12 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((undefined8 *)((long)puVar12 + -1) == (undefined8 *)0x0) {
            (*(code *)ppuStack_b0[1])();
          }
        }
      }
      pppuVar17 = (undefined8 ***)((long)pppuVar17 + 1);
      ppuVar13 = (undefined8 **)(ulong)(param_2 <= pppuVar17);
    } while (pppuVar17 != param_2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar13;
  }
  func_0x000107c60e78();
  if ((int)pppuVar8 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&ppuStack_b0);
  }
  ppuVar5 = param_1;
  func_0x000107c60bd8();
  pcStack_d8 = FUN_1004bc7e4;
  ppuVar2 = (undefined8 **)((long)ppuVar5 + 9);
  if (*ppuVar5 != (undefined8 *)0x0) {
    ppuVar2 = (undefined8 **)ppuVar5[2];
  }
  puVar12 = (undefined8 *)((ulong)ppuVar5[1] & 0xff);
  if (*ppuVar5 != (undefined8 *)0x0) {
    puVar12 = ppuVar5[1];
  }
  if (puVar12 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
    do {
      if ((*(ulong *)((long)pppuVar8 +
                     ((ulong)(*(byte *)((long)ppuVar2 + (long)puVar14) >> 3) & 0x18)) >>
           ((ulong)*(byte *)((long)ppuVar2 + (long)puVar14) & 0x3f) & 1) == 0) {
        ppuVar6 = ppuVar2;
        ppuStack_120 = unaff_x26;
        pppuStack_118 = unaff_x25;
        pcStack_110 = unaff_x24;
        ppuStack_108 = ppuVar13;
        uStack_100 = unaff_x22;
        pcStack_f8 = unaff_x21;
        pppuStack_f0 = param_2;
        ppuStack_e8 = param_1;
        puStack_e0 = &stack0xfffffffffffffff0;
        func_0x000104a6eea8(ppuVar2,puVar12,3,&uStack_130);
        pcVar7 = pcVar9;
        ppuStack_138 = ppuVar6;
        func_0x000107c613d0(pcVar9);
        uStack_160 = 0;
        uStack_158 = 0;
        uStack_168 = 0;
        func_0x000104ab5920(&uStack_148,2,pcVar9,pcVar7,&uStack_149,&uStack_168);
        ppuVar13 = (undefined8 **)((long)ppuVar5 + 9);
        if (*ppuVar5 != (undefined8 *)0x0) {
          ppuVar13 = (undefined8 **)ppuVar5[2];
        }
        func_0x000104abaa50(&uStack_140,&uStack_148,4,
                            (char *)((long)ppuVar2 + ((long)puVar14 - (long)ppuVar13)));
        FUN_10084caf8(extraout_x8,&uStack_140,6,ppuVar6,uStack_130);
        if ((uStack_140 & 1) != 0) {
          FUN_10084dad0();
        }
        if ((uStack_148 & 1) != 0) {
          FUN_10084dad0();
        }
        puStack_128 = &uStack_168;
        ppuVar13 = &puStack_128;
        func_0x000100482b64(ppuVar13);
        ppuStack_138 = (undefined8 **)0x0;
        if (ppuVar6 == (undefined8 **)0x0) {
          return ppuVar13;
        }
        FUN_100460314(ppuVar6);
        return ppuVar6;
      }
      puVar14 = (undefined8 *)((long)puVar14 + 1);
    } while (puVar12 != puVar14);
  }
  *extraout_x8 = 0;
  return ppuVar5;
}



/* Entry: 1004bc7e4; end: 1004bc98b;  */

void FUN_1004bc7e4(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_79;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  lVar1 = (long)param_2 + 9;
  if (*param_2 != 0) {
    lVar1 = param_2[2];
  }
  uVar2 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar2 = param_2[1];
  }
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      if ((*(ulong *)(param_3 + ((ulong)(*(byte *)(lVar1 + uVar6) >> 3) & 0x18)) >>
           ((ulong)*(byte *)(lVar1 + uVar6) & 0x3f) & 1) == 0) {
        lVar4 = lVar1;
        func_0x000104a6eea8(lVar1,uVar2,3,&uStack_60);
        uVar5 = param_4;
        lStack_68 = lVar4;
        func_0x000107c613d0(param_4);
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        func_0x000104ab5920(&uStack_78,2,param_4,uVar5,&uStack_79,&uStack_98);
        lVar3 = (long)param_2 + 9;
        if (*param_2 != 0) {
          lVar3 = param_2[2];
        }
        func_0x000104abaa50(&uStack_70,&uStack_78,4,(lVar1 - lVar3) + uVar6);
        FUN_10084caf8(param_1,&uStack_70,6,lVar4,uStack_60);
        if ((uStack_70 & 1) != 0) {
          FUN_10084dad0();
        }
        if ((uStack_78 & 1) != 0) {
          FUN_10084dad0();
        }
        puStack_58 = &uStack_98;
        func_0x000100482b64(&puStack_58);
        lStack_68 = 0;
        if (lVar4 == 0) {
          return;
        }
        FUN_100460314(lVar4);
        return;
      }
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  *param_1 = 0;
  return;
}



/* Entry: 1004bc98c; end: 1004bc9eb;  */

bool FUN_1004bc98c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar1 = param_1[1];
  }
  if (uVar1 < 5) {
    return false;
  }
  lVar2 = (long)param_1 + 9;
  if (*param_1 != 0) {
    lVar2 = param_1[2];
  }
  return *(int *)(lVar2 + uVar1 + -4) == 0x6e69622d;
}



/* Entry: 1004bc9ec; end: 1004bcaef;  */

ulong FUN_1004bc9ec(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = param_2;
  func_0x000107c613d0();
  if (*param_1 == 0) {
    uVar1 = (uint)*(byte *)(param_1 + 1) - (int)uVar2;
    if (uVar1 != 0) goto LAB_1004bca34;
    uVar3 = (long)param_1 + 9;
  }
  else {
    uVar1 = (int)param_1[1] - (int)uVar2;
    if (uVar1 != 0) {
LAB_1004bca34:
      return (ulong)uVar1;
    }
    uVar3 = param_1[2];
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcmp_11034c650)(uVar3,param_2);
  return uVar3;
}



/* Entry: 1004bcaf0; end: 1004bcbf3;  */

void FUN_1004bcaf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *extraout_x8;
  undefined8 *puVar8;
  ulong uVar9;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001004bca54(&plStack_a0,param_4);
  uStack_70 = uStack_98;
  plStack_78 = plStack_a0;
  uStack_60 = uStack_88;
  uStack_68 = uStack_90;
  uStack_98 = 0;
  plStack_a0 = (long *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = param_1;
  uStack_58 = param_5;
  uStack_50 = param_6;
  FUN_1004bcc8c(param_2,param_3,&uStack_80);
  iVar6 = (int)param_3;
  plVar4 = plStack_78;
  if ((long *)0x1 < plStack_78) {
    do {
      lVar7 = *plStack_78;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_78,0x10);
      if (bVar3) {
        *plStack_78 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_78[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  if (iVar6 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_78);
  }
  func_0x000107c60bd8();
  lVar7 = *plVar4;
  if (lVar7 == 0) {
    uVar9 = (ulong)*(byte *)(plVar4 + 1);
  }
  else {
    uVar9 = plVar4[1];
  }
  if (uVar9 < 0x18) {
    puVar5 = (undefined8 *)0x0;
    *(char *)(extraout_x8 + 1) = (char)uVar9;
    puVar8 = (undefined8 *)extraout_x8[2];
  }
  else {
    puVar5 = (undefined8 *)(uVar9 + 0x10);
    func_0x000107c60e1c();
    *puVar5 = 1;
    puVar5[1] = FUN_1005a7b18;
    puVar8 = puVar5 + 2;
    extraout_x8[1] = uVar9;
    extraout_x8[2] = puVar8;
  }
  *extraout_x8 = puVar5;
  if (lVar7 == 0) {
    lVar7 = (long)plVar4 + 9;
    uVar9 = uVar9 & 0xff;
  }
  else {
    uVar9 = plVar4[1];
    lVar7 = plVar4[2];
  }
  puVar1 = (undefined8 *)((long)extraout_x8 + 9);
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = puVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(puVar1,lVar7,uVar9);
  return;
}



/* Entry: 1004bcbf4; end: 1004bcc8b;  */

void FUN_1004bcbf4(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    uVar5 = (ulong)*(byte *)(param_2 + 1);
  }
  else {
    uVar5 = param_2[1];
  }
  if (uVar5 < 0x18) {
    puVar2 = (undefined8 *)0x0;
    *(char *)(param_1 + 1) = (char)uVar5;
    puVar3 = (undefined8 *)param_1[2];
  }
  else {
    puVar2 = (undefined8 *)(uVar5 + 0x10);
    func_0x000107c60e1c();
    *puVar2 = 1;
    puVar2[1] = FUN_1005a7b18;
    puVar3 = puVar2 + 2;
    param_1[1] = uVar5;
    param_1[2] = puVar3;
  }
  *param_1 = puVar2;
  if (lVar4 == 0) {
    lVar4 = (long)param_2 + 9;
    uVar5 = uVar5 & 0xff;
  }
  else {
    uVar5 = param_2[1];
    lVar4 = param_2[2];
  }
  puVar1 = (undefined8 *)((long)param_1 + 9);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(puVar1,lVar4,uVar5);
  return;
}



/* Entry: 1004bcc8c; end: 1004bd33f;  */

/* WARNING: Possible PIC construction at 0x000104a79a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a79518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a7936c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a791c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a79014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a78e64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a79018) */
/* WARNING: Removing unreachable block (ram,0x000104a79024) */
/* WARNING: Removing unreachable block (ram,0x000104a7902c) */
/* WARNING: Removing unreachable block (ram,0x000104a79034) */
/* WARNING: Removing unreachable block (ram,0x000104a79038) */
/* WARNING: Removing unreachable block (ram,0x000104a79040) */
/* WARNING: Removing unreachable block (ram,0x000104a79068) */
/* WARNING: Removing unreachable block (ram,0x000104a79074) */
/* WARNING: Removing unreachable block (ram,0x000104a79090) */
/* WARNING: Removing unreachable block (ram,0x000104a79058) */
/* WARNING: Removing unreachable block (ram,0x000104a791c4) */
/* WARNING: Removing unreachable block (ram,0x000104a791d0) */
/* WARNING: Removing unreachable block (ram,0x000104a791d8) */
/* WARNING: Removing unreachable block (ram,0x000104a791e0) */
/* WARNING: Removing unreachable block (ram,0x000104a791e4) */
/* WARNING: Removing unreachable block (ram,0x000104a791ec) */
/* WARNING: Removing unreachable block (ram,0x000104a79214) */
/* WARNING: Removing unreachable block (ram,0x000104a79220) */
/* WARNING: Removing unreachable block (ram,0x000104a7923c) */
/* WARNING: Removing unreachable block (ram,0x000104a79204) */
/* WARNING: Removing unreachable block (ram,0x000104a79370) */
/* WARNING: Removing unreachable block (ram,0x000104a7937c) */
/* WARNING: Removing unreachable block (ram,0x000104a79384) */
/* WARNING: Removing unreachable block (ram,0x000104a7938c) */
/* WARNING: Removing unreachable block (ram,0x000104a79390) */
/* WARNING: Removing unreachable block (ram,0x000104a79398) */
/* WARNING: Removing unreachable block (ram,0x000104a793c0) */
/* WARNING: Removing unreachable block (ram,0x000104a793cc) */
/* WARNING: Removing unreachable block (ram,0x000104a793e8) */
/* WARNING: Removing unreachable block (ram,0x000104a793b0) */
/* WARNING: Removing unreachable block (ram,0x000104a7951c) */
/* WARNING: Removing unreachable block (ram,0x000104a79528) */
/* WARNING: Removing unreachable block (ram,0x000104a79530) */
/* WARNING: Removing unreachable block (ram,0x000104a79538) */
/* WARNING: Removing unreachable block (ram,0x000104a7953c) */
/* WARNING: Removing unreachable block (ram,0x000104a79544) */
/* WARNING: Removing unreachable block (ram,0x000104a7956c) */
/* WARNING: Removing unreachable block (ram,0x000104a79578) */
/* WARNING: Removing unreachable block (ram,0x000104a79594) */
/* WARNING: Removing unreachable block (ram,0x000104a7955c) */
/* WARNING: Removing unreachable block (ram,0x000104a79a78) */
/* WARNING: Removing unreachable block (ram,0x000104a79a84) */
/* WARNING: Removing unreachable block (ram,0x000104a79a8c) */
/* WARNING: Removing unreachable block (ram,0x000104a79a94) */
/* WARNING: Removing unreachable block (ram,0x000104a79a98) */
/* WARNING: Removing unreachable block (ram,0x000104a79aa0) */
/* WARNING: Removing unreachable block (ram,0x000104a79ac8) */
/* WARNING: Removing unreachable block (ram,0x000104a79ad4) */
/* WARNING: Removing unreachable block (ram,0x000104a79af0) */
/* WARNING: Removing unreachable block (ram,0x000104a79ab8) */
/* WARNING: Removing unreachable block (ram,0x000104a78e68) */
/* WARNING: Removing unreachable block (ram,0x000104a78e74) */
/* WARNING: Removing unreachable block (ram,0x000104a78e7c) */
/* WARNING: Removing unreachable block (ram,0x000104a78e84) */
/* WARNING: Removing unreachable block (ram,0x000104a78e88) */
/* WARNING: Removing unreachable block (ram,0x000104a78e90) */
/* WARNING: Removing unreachable block (ram,0x000104a78eb8) */
/* WARNING: Removing unreachable block (ram,0x000104a78ec4) */
/* WARNING: Removing unreachable block (ram,0x000104a78ee0) */
/* WARNING: Removing unreachable block (ram,0x000104a78ea8) */

ulong * FUN_1004bcc8c(long *param_1,long param_2,ulong *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  ulong **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong *unaff_x19;
  uint *puVar13;
  ulong *puVar14;
  undefined8 unaff_x20;
  ulong *puVar15;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  ulong *puStack_50;
  ulong *puStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  if ((param_2 == 5) && ((int)*param_1 == 0x7461703a && *(char *)((long)param_1 + 4) == 'h')) {
    unaff_x29 = &stack0xfffffffffffffff0;
    uStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar9 = *param_3;
    FUN_10084bc58(&puStack_48,param_3 + 1,param_3[5],param_3[6]);
    iVar7 = (int)&puStack_48;
    FUN_1004b8034(uVar9);
    unaff_x19 = puStack_48;
    if ((ulong *)0x1 < puStack_48) {
      do {
        uVar9 = *puStack_48;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puStack_48,0x10);
        if (bVar3) {
          *puStack_48 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (*(code *)puStack_48[1])();
        unaff_x19 = puStack_48;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if (iVar7 != 0) {
      func_0x000104bd46a0();
      FUN_1004b6d90(&puStack_48);
    }
    unaff_x30 = &LAB_104a78734;
    param_3 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)&puStack_50;
  }
  else if ((param_2 != 10) || (*param_1 != 0x69726f687475613a || (short)param_1[1] != 0x7974)) {
    if ((param_2 == 7) && ((int)*param_1 == 0x74656d3a && *(int *)((long)param_1 + 3) == 0x646f6874)
       ) goto code_r0x000104a787f8;
    if ((param_2 == 7) && ((int)*param_1 == 0x6174733a && *(int *)((long)param_1 + 3) == 0x73757461)
       ) {
      puVar13 = (uint *)*param_3;
      puVar5 = param_3 + 1;
      FUN_10082ad24(puVar5,param_3[5],param_3[6]);
      *puVar13 = *puVar13 | 8;
      puVar13[0x69] = (uint)puVar5;
      return puVar5;
    }
    if ((param_2 == 7) && ((int)*param_1 == 0x6863733a && *(int *)((long)param_1 + 3) == 0x656d6568)
       ) {
      puVar13 = (uint *)*param_3;
      puVar5 = param_3 + 1;
      func_0x000104a78928(puVar5,param_3[5],param_3[6]);
      *puVar13 = *puVar13 | 0x10;
      puVar13[0x68] = (uint)puVar5;
      return puVar5;
    }
    if ((param_2 == 0xc) && (*param_1 == 0x2d746e65746e6f63 && (int)param_1[1] == 0x65707974)) {
      puVar13 = (uint *)*param_3;
      puVar5 = param_3 + 1;
      FUN_10082ae18(puVar5,param_3[5],param_3[6]);
      *puVar13 = *puVar13 | 0x20;
      puVar13[0x67] = (uint)puVar5;
      return puVar5;
    }
    if ((param_2 == 2) && ((short)*param_1 == 0x6574)) {
      puVar13 = (uint *)*param_3;
      puVar5 = param_3 + 1;
      func_0x000104a78a44(puVar5,param_3[5],param_3[6]);
      *puVar13 = *puVar13 | 0x40;
      *(char *)(puVar13 + 0x66) = (char)puVar5;
      return puVar5;
    }
    if ((param_2 == 0xd) &&
       (*param_1 == 0x636e652d63707267 && *(long *)((long)param_1 + 5) == 0x676e69646f636e65)) {
      puVar13 = (uint *)*param_3;
      puVar5 = param_3 + 1;
      FUN_10082af78(puVar5,param_3[5],param_3[6]);
      *puVar13 = *puVar13 | 0x80;
      puVar13[0x65] = (uint)puVar5;
      return puVar5;
    }
    if ((param_2 == 0x1e) &&
       (((*param_1 == 0x746e692d63707267 && param_1[1] == 0x6e652d6c616e7265) &&
        param_1[2] == 0x722d676e69646f63) && *(long *)((long)param_1 + 0x16) == 0x747365757165722d))
    {
      puVar13 = (uint *)*param_3;
      puVar5 = param_3 + 1;
      FUN_10082af78(puVar5,param_3[5],param_3[6]);
      *puVar13 = *puVar13 | 0x100;
      puVar13[100] = (uint)puVar5;
      return puVar5;
    }
    if ((param_2 == 0x14) &&
       ((*param_1 == 0x6363612d63707267 && param_1[1] == 0x6f636e652d747065) &&
        (int)param_1[2] == 0x676e6964)) {
      puVar13 = (uint *)*param_3;
      puVar5 = param_3 + 1;
      FUN_10082b274(puVar5,param_3[5],param_3[6]);
      *puVar13 = *puVar13 | 0x200;
      *(char *)(puVar13 + 99) = (char)puVar5;
      return puVar5;
    }
    if ((param_2 == 0xb) &&
       (*param_1 == 0x6174732d63707267 && *(long *)((long)param_1 + 3) == 0x7375746174732d63)) {
      puVar13 = (uint *)*param_3;
      puVar5 = param_3 + 1;
      FUN_10082e038(puVar5,param_3[5],param_3[6]);
      *puVar13 = *puVar13 | 0x400;
      puVar13[0x62] = (uint)puVar5;
      return puVar5;
    }
    if ((param_2 == 0xc) && (*param_1 == 0x6d69742d63707267 && (int)param_1[1] == 0x74756f65)) {
      puVar13 = (uint *)*param_3;
      puVar5 = param_3 + 1;
      func_0x000104a78b74(puVar5,param_3[5],param_3[6]);
      *puVar13 = *puVar13 | 0x800;
      *(ulong **)(puVar13 + 0x60) = puVar5;
      return puVar5;
    }
    if ((param_2 == 0x1a) &&
       (((*param_1 == 0x6572702d63707267 && param_1[1] == 0x70722d73756f6976) &&
        param_1[2] == 0x706d657474612d63) && (short)param_1[3] == 0x7374)) {
      puVar13 = (uint *)*param_3;
      puVar5 = param_3 + 1;
      FUN_10082ad24(puVar5,param_3[5],param_3[6]);
      *puVar13 = *puVar13 | 0x1000;
      puVar13[0x5e] = (uint)puVar5;
      return puVar5;
    }
    if ((param_2 == 0x16) &&
       ((*param_1 == 0x7465722d63707267 && param_1[1] == 0x62687375702d7972) &&
        *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
      puVar13 = (uint *)*param_3;
      puVar5 = param_3 + 1;
      func_0x000104a78ca8(puVar5,param_3[5],param_3[6]);
      *puVar13 = *puVar13 | 0x2000;
      *(ulong **)(puVar13 + 0x5c) = puVar5;
      return puVar5;
    }
    if ((param_2 == 10) && (*param_1 == 0x6567612d72657375 && (short)param_1[1] == 0x746e)) {
      unaff_x29 = &stack0xfffffffffffffff0;
      uStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar9 = *param_3;
      FUN_10084bc58(&puStack_48,param_3 + 1,param_3[5],param_3[6]);
      iVar7 = (int)&puStack_48;
      FUN_10061564c(uVar9);
      unaff_x19 = puStack_48;
      if ((ulong *)0x1 < puStack_48) {
        do {
          uVar9 = *puStack_48;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puStack_48,0x10);
          if (bVar3) {
            *puStack_48 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (*(code *)puStack_48[1])();
          unaff_x19 = puStack_48;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_28) {
        return unaff_x19;
      }
      ___stack_chk_fail();
      if (iVar7 != 0) {
        func_0x000104bd46a0();
        FUN_1004b6d90(&puStack_48);
      }
      unaff_x30 = &LAB_104a78e24;
      param_3 = unaff_x19;
      __Unwind_Resume();
      register0x00000008 = (BADSPACEBASE *)&puStack_50;
code_r0x000104a78e24:
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      *(undefined8 *)((long)register0x00000008 + -0x28) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar15 = (ulong *)*param_3;
      FUN_10084bc58((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 1,param_3[5],
                    param_3[6]);
      puVar5 = (ulong *)((long)register0x00000008 + -0x48);
      *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x68) = puVar15;
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x58) = &UNK_104a78e68;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      unaff_x19 = puVar15 + 0x22;
      uVar9 = *puVar15;
      *(uint *)puVar15 = (uint)uVar9 | 0x10000;
      if (((uint)uVar9 >> 0x10 & 1) == 0) {
        uVar17 = *(ulong *)((long)register0x00000008 + -0x40);
        uVar12 = *puVar5;
        uVar10 = *(ulong *)((long)register0x00000008 + -0x30);
        uVar9 = *(ulong *)((long)register0x00000008 + -0x38);
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *puVar5 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        puVar15[0x23] = uVar17;
        *unaff_x19 = uVar12;
        puVar15[0x25] = uVar10;
        puVar15[0x24] = uVar9;
        param_3 = puVar15;
      }
      else {
        uVar9 = *puVar5;
        uVar10 = *(ulong *)((long)register0x00000008 + -0x30);
        *(ulong *)((long)register0x00000008 + -0xd0) = uVar10;
        uVar19 = *(ulong *)((long)register0x00000008 + -0x38);
        uVar17 = *(ulong *)((long)register0x00000008 + -0x40);
        *(ulong *)((long)register0x00000008 + -0xd8) = uVar19;
        *(ulong *)((long)register0x00000008 + -0xe0) = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *puVar5 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        param_3 = (ulong *)puVar15[0x22];
        uVar12 = puVar15[0x25];
        uVar21 = puVar15[0x24];
        uVar20 = puVar15[0x23];
        puVar15[0x22] = uVar9;
        puVar15[0x24] = uVar19;
        puVar15[0x23] = uVar17;
        puVar15[0x25] = uVar10;
        *(ulong *)((long)register0x00000008 + -0xd8) = uVar21;
        *(ulong *)((long)register0x00000008 + -0xe0) = uVar20;
        *(ulong *)((long)register0x00000008 + -0xd0) = uVar12;
        if ((ulong *)0x1 < param_3) {
          do {
            uVar9 = *param_3;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
            if (bVar3) {
              *param_3 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (*(code *)param_3[1])();
          }
        }
      }
      iVar7 = (int)puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78))
      {
        return unaff_x19;
      }
      ___stack_chk_fail();
      if (iVar7 == 0) {
        __Unwind_Resume();
      }
      unaff_x30 = &LAB_104a78fd4;
      func_0x000104bd46a0();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
code_r0x000104a78fd4:
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      *(undefined8 *)((long)register0x00000008 + -0x28) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar15 = (ulong *)*param_3;
      FUN_10084bc58((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 1,param_3[5],
                    param_3[6]);
      puVar5 = (ulong *)((long)register0x00000008 + -0x48);
      *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x68) = puVar15;
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x58) = &UNK_104a79018;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar9 = *puVar15;
      unaff_x19 = puVar15 + 0x1e;
      *(uint *)puVar15 = (uint)uVar9 | 0x20000;
      if (((uint)uVar9 >> 0x11 & 1) == 0) {
        uVar17 = *(ulong *)((long)register0x00000008 + -0x40);
        uVar12 = *puVar5;
        uVar10 = *(ulong *)((long)register0x00000008 + -0x30);
        uVar9 = *(ulong *)((long)register0x00000008 + -0x38);
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *puVar5 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        puVar15[0x1f] = uVar17;
        *unaff_x19 = uVar12;
        puVar15[0x21] = uVar10;
        puVar15[0x20] = uVar9;
        param_3 = puVar15;
      }
      else {
        uVar9 = *puVar5;
        uVar10 = *(ulong *)((long)register0x00000008 + -0x30);
        *(ulong *)((long)register0x00000008 + -0xd0) = uVar10;
        uVar19 = *(ulong *)((long)register0x00000008 + -0x38);
        uVar17 = *(ulong *)((long)register0x00000008 + -0x40);
        *(ulong *)((long)register0x00000008 + -0xd8) = uVar19;
        *(ulong *)((long)register0x00000008 + -0xe0) = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *puVar5 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        param_3 = (ulong *)puVar15[0x1e];
        uVar12 = puVar15[0x21];
        uVar21 = puVar15[0x20];
        uVar20 = puVar15[0x1f];
        puVar15[0x1e] = uVar9;
        puVar15[0x20] = uVar19;
        puVar15[0x1f] = uVar17;
        puVar15[0x21] = uVar10;
        *(ulong *)((long)register0x00000008 + -0xd8) = uVar21;
        *(ulong *)((long)register0x00000008 + -0xe0) = uVar20;
        *(ulong *)((long)register0x00000008 + -0xd0) = uVar12;
        if ((ulong *)0x1 < param_3) {
          do {
            uVar9 = *param_3;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
            if (bVar3) {
              *param_3 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (*(code *)param_3[1])();
          }
        }
      }
      iVar7 = (int)puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78))
      {
        return unaff_x19;
      }
      ___stack_chk_fail();
      if (iVar7 == 0) {
        __Unwind_Resume();
      }
      unaff_x30 = &LAB_104a79180;
      func_0x000104bd46a0();
      puVar4 = (undefined1 *)((long)register0x00000008 + -0xe0);
code_r0x000104a79180:
      *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
      *(ulong **)(puVar4 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
      *(undefined **)(puVar4 + -8) = unaff_x30;
      *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar15 = (ulong *)*param_3;
      FUN_10084bc58(puVar4 + -0x48,param_3 + 1,param_3[5],param_3[6]);
      puVar5 = (ulong *)(puVar4 + -0x48);
      register0x00000008 = (BADSPACEBASE *)(puVar4 + -0xe0);
      *(undefined8 *)(puVar4 + -0x70) = unaff_x20;
      *(ulong **)(puVar4 + -0x68) = puVar15;
      *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x58) = &UNK_104a791c4;
      unaff_x29 = puVar4 + -0x60;
      *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar9 = *puVar15;
      unaff_x19 = puVar15 + 0x1a;
      *(uint *)puVar15 = (uint)uVar9 | 0x40000;
      if (((uint)uVar9 >> 0x12 & 1) == 0) {
        uVar17 = *(ulong *)(puVar4 + -0x40);
        uVar12 = *puVar5;
        uVar10 = *(ulong *)(puVar4 + -0x30);
        uVar9 = *(ulong *)(puVar4 + -0x38);
        *(undefined8 *)(puVar4 + -0x40) = 0;
        *puVar5 = 0;
        *(undefined8 *)(puVar4 + -0x30) = 0;
        *(undefined8 *)(puVar4 + -0x38) = 0;
        puVar15[0x1b] = uVar17;
        *unaff_x19 = uVar12;
        puVar15[0x1d] = uVar10;
        puVar15[0x1c] = uVar9;
        param_3 = puVar15;
      }
      else {
        uVar9 = *puVar5;
        uVar10 = *(ulong *)(puVar4 + -0x30);
        *(ulong *)(puVar4 + -0xd0) = uVar10;
        uVar19 = *(ulong *)(puVar4 + -0x38);
        uVar17 = *(ulong *)(puVar4 + -0x40);
        *(ulong *)(puVar4 + -0xd8) = uVar19;
        *(ulong *)(puVar4 + -0xe0) = uVar17;
        *(undefined8 *)(puVar4 + -0x40) = 0;
        *puVar5 = 0;
        *(undefined8 *)(puVar4 + -0x30) = 0;
        *(undefined8 *)(puVar4 + -0x38) = 0;
        param_3 = (ulong *)puVar15[0x1a];
        uVar12 = puVar15[0x1d];
        uVar21 = puVar15[0x1c];
        uVar20 = puVar15[0x1b];
        puVar15[0x1a] = uVar9;
        puVar15[0x1c] = uVar19;
        puVar15[0x1b] = uVar17;
        puVar15[0x1d] = uVar10;
        *(ulong *)(puVar4 + -0xd8) = uVar21;
        *(ulong *)(puVar4 + -0xe0) = uVar20;
        *(ulong *)(puVar4 + -0xd0) = uVar12;
        if ((ulong *)0x1 < param_3) {
          do {
            uVar9 = *param_3;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
            if (bVar3) {
              *param_3 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (*(code *)param_3[1])();
          }
        }
      }
      iVar7 = (int)puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x78)) {
        return unaff_x19;
      }
      ___stack_chk_fail();
      if (iVar7 == 0) {
        __Unwind_Resume();
      }
      unaff_x30 = &LAB_104a7932c;
      func_0x000104bd46a0();
code_r0x000104a7932c:
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      *(undefined8 *)((long)register0x00000008 + -0x28) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar15 = (ulong *)*param_3;
      FUN_10084bc58((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 1,param_3[5],
                    param_3[6]);
      puVar5 = (ulong *)((long)register0x00000008 + -0x48);
      *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x68) = puVar15;
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x58) = &UNK_104a79370;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar9 = *puVar15;
      unaff_x19 = puVar15 + 0x16;
      *(uint *)puVar15 = (uint)uVar9 | 0x80000;
      if (((uint)uVar9 >> 0x13 & 1) == 0) {
        uVar17 = *(ulong *)((long)register0x00000008 + -0x40);
        uVar12 = *puVar5;
        uVar10 = *(ulong *)((long)register0x00000008 + -0x30);
        uVar9 = *(ulong *)((long)register0x00000008 + -0x38);
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *puVar5 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        puVar15[0x17] = uVar17;
        *unaff_x19 = uVar12;
        puVar15[0x19] = uVar10;
        puVar15[0x18] = uVar9;
        param_3 = puVar15;
      }
      else {
        uVar9 = *puVar5;
        uVar10 = *(ulong *)((long)register0x00000008 + -0x30);
        *(ulong *)((long)register0x00000008 + -0xd0) = uVar10;
        uVar19 = *(ulong *)((long)register0x00000008 + -0x38);
        uVar17 = *(ulong *)((long)register0x00000008 + -0x40);
        *(ulong *)((long)register0x00000008 + -0xd8) = uVar19;
        *(ulong *)((long)register0x00000008 + -0xe0) = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *puVar5 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        param_3 = (ulong *)puVar15[0x16];
        uVar12 = puVar15[0x19];
        uVar21 = puVar15[0x18];
        uVar20 = puVar15[0x17];
        puVar15[0x16] = uVar9;
        puVar15[0x18] = uVar19;
        puVar15[0x17] = uVar17;
        puVar15[0x19] = uVar10;
        *(ulong *)((long)register0x00000008 + -0xd8) = uVar21;
        *(ulong *)((long)register0x00000008 + -0xe0) = uVar20;
        *(ulong *)((long)register0x00000008 + -0xd0) = uVar12;
        if ((ulong *)0x1 < param_3) {
          do {
            uVar9 = *param_3;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
            if (bVar3) {
              *param_3 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (*(code *)param_3[1])();
          }
        }
      }
      iVar7 = (int)puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78))
      {
        return unaff_x19;
      }
      ___stack_chk_fail();
      if (iVar7 == 0) {
        __Unwind_Resume();
      }
      unaff_x30 = &LAB_104a794d8;
      func_0x000104bd46a0();
      puVar4 = (undefined1 *)((long)register0x00000008 + -0xe0);
    }
    else {
      if ((param_2 == 0xc) && (*param_1 == 0x73656d2d63707267 && (int)param_1[1] == 0x65676173)) {
        uStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar9 = *param_3;
        FUN_10084bc58(&puStack_48,param_3 + 1,param_3[5],param_3[6]);
        ppuVar8 = &puStack_48;
        FUN_10084bde4(uVar9);
        puVar5 = puStack_48;
        if ((ulong *)0x1 < puStack_48) {
          do {
            uVar9 = *puStack_48;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puStack_48,0x10);
            if (bVar3) {
              *puStack_48 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (*(code *)puStack_48[1])();
            puVar5 = puStack_48;
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_28) {
          return puVar5;
        }
        func_0x000107c60e78();
        if ((int)ppuVar8 != 0) {
          func_0x000104bd46a0();
          FUN_1004b6d90(&puStack_48);
        }
        func_0x000107c60bd8();
        lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar9 = *puVar5;
        *(uint *)puVar5 = (uint)uVar9 | 0x8000;
        if (((uint)uVar9 >> 0xf & 1) == 0) {
          puVar16 = ppuVar8[1];
          puVar6 = *ppuVar8;
          puVar14 = ppuVar8[3];
          puVar15 = ppuVar8[2];
          ppuVar8[1] = (ulong *)0x0;
          *ppuVar8 = (ulong *)0x0;
          ppuVar8[3] = (ulong *)0x0;
          ppuVar8[2] = (ulong *)0x0;
          puVar5[0x27] = (ulong)puVar16;
          puVar5[0x26] = (ulong)puVar6;
          puVar5[0x29] = (ulong)puVar14;
          puVar5[0x28] = (ulong)puVar15;
          puVar15 = puVar5;
        }
        else {
          puVar14 = *ppuVar8;
          puVar6 = ppuVar8[3];
          puVar18 = ppuVar8[2];
          puVar16 = ppuVar8[1];
          ppuVar8[1] = (ulong *)0x0;
          *ppuVar8 = (ulong *)0x0;
          ppuVar8[3] = (ulong *)0x0;
          ppuVar8[2] = (ulong *)0x0;
          puVar15 = (ulong *)puVar5[0x26];
          puVar5[0x26] = (ulong)puVar14;
          puVar5[0x28] = (ulong)puVar18;
          puVar5[0x27] = (ulong)puVar16;
          puVar5[0x29] = (ulong)puVar6;
          if ((ulong *)0x1 < puVar15) {
            do {
              uVar9 = *puVar15;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar15,0x10);
              if (bVar3) {
                *puVar15 = uVar9 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar9 - 1 == 0) {
              (*(code *)puVar15[1])();
            }
          }
        }
        iVar7 = (int)ppuVar8;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
          return puVar5 + 0x26;
        }
        func_0x000107c60e78();
        if (iVar7 == 0) {
          func_0x000107c60bd8();
        }
        func_0x000104bd46a0();
        uVar9 = puVar15[4];
        func_0x000107c4f5c0(uVar9);
        func_0x000107c61180();
        func_0x000107c61144(auStack_108,uVar9);
        func_0x000107c61170(uVar9);
        puVar5 = (ulong *)PTR_PTR_1126b0120;
        func_0x000107c610f4(PTR_PTR_1126b0120);
        func_0x000107c6111c(auStack_110,auStack_108);
        func_0x000107c482ac(puVar5);
        func_0x000107c61120(auStack_110);
        func_0x000107c61120(auStack_108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
        return puVar5;
      }
      if ((param_2 == 4) && ((int)*param_1 == 0x74736f68)) goto code_r0x000104a78e24;
      if ((param_2 == 0x19) &&
         (((*param_1 == 0x746e696f70646e65 && param_1[1] == 0x656d2d64616f6c2d) &&
          param_1[2] == 0x69622d7363697274) && (char)param_1[3] == 'n')) goto code_r0x000104a78fd4;
      if ((param_2 == 0x15) &&
         (puVar4 = (undefined1 *)register0x00000008,
         (*param_1 == 0x7265732d63707267 && param_1[1] == 0x746174732d726576) &&
         *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) goto code_r0x000104a79180;
      if ((param_2 == 0xe) &&
         (*param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
      goto code_r0x000104a7932c;
      if ((param_2 != 0xd) ||
         (puVar4 = (undefined1 *)register0x00000008,
         *param_1 != 0x6761742d63707267 || *(long *)((long)param_1 + 5) != 0x6e69622d73676174)) {
        if ((param_2 != 0x13) ||
           ((*param_1 != 0x635f626c63707267 || param_1[1] != 0x74735f746e65696c) ||
            *(long *)((long)param_1 + 0xb) != 0x73746174735f746e)) {
          if ((param_2 == 0xb) &&
             (*param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
          {
            puVar13 = (uint *)*param_3;
            func_0x000104a79798(&uStack_40,param_3 + 1,param_3[5],param_3[6]);
            uVar1 = *puVar13;
            puVar5 = (ulong *)(puVar13 + 0x18);
            *puVar13 = uVar1 | 0x400000;
            if ((uVar1 >> 0x16 & 1) == 0) {
              puVar13[0x20] = 0;
              puVar13[0x21] = 0;
              puVar13[0x1a] = 0;
              puVar13[0x1b] = 0;
              *puVar5 = 0;
              puVar13[0x1e] = 0;
              puVar13[0x1f] = 0;
              puVar13[0x1c] = 0;
              puVar13[0x1d] = 0;
            }
            func_0x000104a7986c(puVar5,&uStack_40);
            if (uStack_28._7_1_ < '\0') {
              __ZdlPv(puStack_38);
              puVar5 = puStack_38;
            }
            return puVar5;
          }
          if ((param_2 == 8) && (*param_1 == 0x6e656b6f742d626c)) {
            uStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar14 = (ulong *)*param_3;
            FUN_10084bc58(&puStack_48,param_3 + 1,param_3[5]);
            uVar12 = uStack_30;
            puVar15 = puStack_38;
            uVar10 = uStack_40;
            puVar5 = puStack_48;
            iVar7 = (int)&puStack_48;
            lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
            uVar9 = *puVar14;
            *(uint *)puVar14 = (uint)uVar9 | 0x800000;
            if (((uint)uVar9 >> 0x17 & 1) == 0) {
              uStack_40 = 0;
              puStack_48 = (ulong *)0x0;
              uStack_30 = 0;
              puStack_38 = (ulong *)0x0;
              puVar14[9] = uVar10;
              puVar14[8] = (ulong)puVar5;
              puVar14[0xb] = uVar12;
              puVar14[10] = (ulong)puVar15;
              puVar6 = puVar14;
            }
            else {
              uStack_40 = 0;
              puStack_48 = (ulong *)0x0;
              uStack_30 = 0;
              puStack_38 = (ulong *)0x0;
              puVar6 = (ulong *)puVar14[8];
              puVar14[8] = (ulong)puVar5;
              puVar14[10] = (ulong)puVar15;
              puVar14[9] = uVar10;
              puVar14[0xb] = uVar12;
              if ((ulong *)0x1 < puVar6) {
                do {
                  uVar9 = *puVar6;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                  if (bVar3) {
                    *puVar6 = uVar9 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (uVar9 - 1 == 0) {
                  (*(code *)puVar6[1])();
                }
              }
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
              return puVar14 + 8;
            }
            ___stack_chk_fail();
            if (iVar7 == 0) {
              __Unwind_Resume();
            }
            func_0x000104bd46a0();
            func_0x000104a79c08();
            return puVar6;
          }
          uStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_48 = (ulong *)param_3[2];
          puStack_50 = (ulong *)param_3[1];
          puStack_38 = (ulong *)param_3[4];
          uStack_40 = param_3[3];
          param_3[2] = 0;
          param_3[1] = 0;
          param_3[4] = 0;
          param_3[3] = 0;
          FUN_1004bd340(*param_3 + 0x1f0,param_1,param_2,&puStack_50);
          iVar7 = (int)param_1;
          puVar5 = puStack_50;
          if ((ulong *)0x1 < puStack_50) {
            do {
              uVar9 = *puStack_50;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puStack_50,0x10);
              if (bVar3) {
                *puStack_50 = uVar9 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar9 - 1 == 0) {
              (*(code *)puStack_50[1])();
            }
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_28) {
            return puVar5;
          }
          func_0x000107c60e78();
          if (iVar7 != 0) {
            func_0x000104bd46a0();
            FUN_1004b6d90(&puStack_50);
          }
          func_0x000107c60bd8();
          puVar15 = (ulong *)puVar5[2];
          if (puVar15 == (ulong *)0x0) {
            if (puVar5[1] != 0) {
              func_0x000107c2c430();
                    /* WARNING: Could not recover jumptable at 0x0001004bd5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(puVar5[2] + 0x28))();
              return puVar5;
            }
            puVar15 = (ulong *)*puVar5;
            do {
              uVar10 = *puVar15;
              uVar9 = uVar10 + 0x290;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar15,0x10);
              if (bVar3) {
                *puVar15 = uVar9;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (puVar15[2] < uVar9) {
              FUN_1004bbee0(puVar15,0x290);
            }
            else {
              puVar15 = (ulong *)((long)puVar15 + uVar10 + 0x30);
            }
            func_0x000107c60ee4(puVar15,0x290);
            puVar5[1] = (ulong)puVar15;
          }
          else {
            if (puVar15[1] != 10) goto LAB_1004bd598;
            puVar15 = (ulong *)*puVar15;
            if (puVar15 == (ulong *)0x0) {
              puVar15 = (ulong *)*puVar5;
              do {
                uVar10 = *puVar15;
                uVar9 = uVar10 + 0x290;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar15,0x10);
                if (bVar3) {
                  *puVar15 = uVar9;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (puVar15[2] < uVar9) {
                FUN_1004bbee0(puVar15,0x290);
              }
              else {
                puVar15 = (ulong *)((long)puVar15 + uVar10 + 0x30);
              }
              func_0x000107c60ee4(puVar15,0x290);
              *(ulong **)puVar5[2] = puVar15;
            }
          }
          puVar5[2] = (ulong)puVar15;
LAB_1004bd598:
          uVar9 = puVar15[1];
          puVar15[1] = uVar9 + 1;
          return puVar15 + uVar9 * 8 + 2;
        }
        goto code_r0x000104a79684;
      }
    }
    *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
    *(ulong **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(undefined **)(puVar4 + -8) = unaff_x30;
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = (ulong *)*param_3;
    FUN_10084bc58(puVar4 + -0x48,param_3 + 1,param_3[5],param_3[6]);
    puVar5 = (ulong *)(puVar4 + -0x48);
    register0x00000008 = (BADSPACEBASE *)(puVar4 + -0xe0);
    *(undefined8 *)(puVar4 + -0x70) = unaff_x20;
    *(ulong **)(puVar4 + -0x68) = puVar15;
    *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x58) = &UNK_104a7951c;
    unaff_x29 = puVar4 + -0x60;
    *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar9 = *puVar15;
    unaff_x19 = puVar15 + 0x12;
    *(uint *)puVar15 = (uint)uVar9 | 0x100000;
    if (((uint)uVar9 >> 0x14 & 1) == 0) {
      uVar17 = *(ulong *)(puVar4 + -0x40);
      uVar12 = *puVar5;
      uVar10 = *(ulong *)(puVar4 + -0x30);
      uVar9 = *(ulong *)(puVar4 + -0x38);
      *(undefined8 *)(puVar4 + -0x40) = 0;
      *puVar5 = 0;
      *(undefined8 *)(puVar4 + -0x30) = 0;
      *(undefined8 *)(puVar4 + -0x38) = 0;
      puVar15[0x13] = uVar17;
      *unaff_x19 = uVar12;
      puVar15[0x15] = uVar10;
      puVar15[0x14] = uVar9;
      param_3 = puVar15;
    }
    else {
      uVar9 = *puVar5;
      uVar10 = *(ulong *)(puVar4 + -0x30);
      *(ulong *)(puVar4 + -0xd0) = uVar10;
      uVar19 = *(ulong *)(puVar4 + -0x38);
      uVar17 = *(ulong *)(puVar4 + -0x40);
      *(ulong *)(puVar4 + -0xd8) = uVar19;
      *(ulong *)(puVar4 + -0xe0) = uVar17;
      *(undefined8 *)(puVar4 + -0x40) = 0;
      *puVar5 = 0;
      *(undefined8 *)(puVar4 + -0x30) = 0;
      *(undefined8 *)(puVar4 + -0x38) = 0;
      param_3 = (ulong *)puVar15[0x12];
      uVar12 = puVar15[0x15];
      uVar21 = puVar15[0x14];
      uVar20 = puVar15[0x13];
      puVar15[0x12] = uVar9;
      puVar15[0x14] = uVar19;
      puVar15[0x13] = uVar17;
      puVar15[0x15] = uVar10;
      *(ulong *)(puVar4 + -0xd8) = uVar21;
      *(ulong *)(puVar4 + -0xe0) = uVar20;
      *(ulong *)(puVar4 + -0xd0) = uVar12;
      if ((ulong *)0x1 < param_3) {
        do {
          uVar9 = *param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *param_3 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (*(code *)param_3[1])();
        }
      }
    }
    iVar7 = (int)puVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if (iVar7 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = &LAB_104a79684;
    func_0x000104bd46a0();
code_r0x000104a79684:
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar13 = (uint *)*param_3;
    puVar5 = param_3 + 1;
    func_0x000104a796c0(puVar5,param_3[5],param_3[6]);
    *puVar13 = *puVar13 | 0x200000;
    *(ulong **)(puVar13 + 0x22) = puVar5;
    return puVar5;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *param_3;
  FUN_10084bc58((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 1,param_3[5],param_3[6]);
  iVar7 = (int)(undefined1 *)((long)register0x00000008 + -0x48);
  FUN_1008dc020(uVar9);
  unaff_x19 = *(ulong **)((long)register0x00000008 + -0x48);
  if ((ulong *)0x1 < unaff_x19) {
    do {
      uVar9 = *unaff_x19;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
      if (bVar3) {
        *unaff_x19 = uVar9 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar9 - 1 == 0) {
      (*(code *)unaff_x19[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28)) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90((undefined1 *)((long)register0x00000008 + -0x48));
  }
  unaff_x30 = &LAB_104a787f8;
  param_3 = unaff_x19;
  __Unwind_Resume();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
code_r0x000104a787f8:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar13 = (uint *)*param_3;
  puVar5 = param_3 + 1;
  func_0x000104a78834(puVar5,param_3[5],param_3[6]);
  *puVar13 = *puVar13 | 4;
  puVar13[0x6a] = (uint)puVar5;
  return puVar5;
}



/* Entry: 1004bd340; end: 1004bd403;  */

ulong * FUN_1004bd340(ulong *param_1,undefined8 param_2,int param_3,ulong *param_4)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  long lStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1004b6808(&uStack_90,param_2);
  plVar4 = (long *)*param_4;
  if ((long *)0x1 < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_a8 = param_4[1];
  uStack_b0 = *param_4;
  uStack_98 = param_4[3];
  uStack_a0 = param_4[2];
  FUN_1004bd4c8();
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  func_0x000107c60e78();
  FUN_1004b6d90(&uStack_b0);
  FUN_1004b6d90(&uStack_90);
  puVar3 = param_1;
  func_0x000107c60bd8();
  pcStack_b8 = FUN_1004bd404;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = puVar3[2];
  puStack_100 = (ulong *)puVar3[1];
  uStack_e8 = puVar3[4];
  uStack_f0 = puVar3[3];
  puVar3[2] = 0;
  puVar3[1] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puStack_d0 = param_4;
  puStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_1004bd340(*puVar3 + 0x1f0);
  puVar3 = puStack_100;
  if ((ulong *)0x1 < puStack_100) {
    do {
      uVar5 = *puStack_100;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_100,0x10);
      if (bVar2) {
        *puStack_100 = uVar5 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar5 - 1 == 0) {
      (*(code *)puStack_100[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return puVar3;
  }
  func_0x000107c60e78();
  if (param_3 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&puStack_100);
  }
  func_0x000107c60bd8();
  puVar7 = (ulong *)puVar3[2];
  if (puVar7 == (ulong *)0x0) {
    if (puVar3[1] != 0) {
      func_0x000107c2c430();
                    /* WARNING: Could not recover jumptable at 0x0001004bd5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar3[2] + 0x28))();
      return puVar3;
    }
    puVar7 = (ulong *)*puVar3;
    do {
      uVar6 = *puVar7;
      uVar5 = uVar6 + 0x290;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar2) {
        *puVar7 = uVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar7[2] < uVar5) {
      FUN_1004bbee0(puVar7,0x290);
    }
    else {
      puVar7 = (ulong *)((long)puVar7 + uVar6 + 0x30);
    }
    func_0x000107c60ee4(puVar7,0x290);
    puVar3[1] = (ulong)puVar7;
  }
  else {
    if (puVar7[1] != 10) goto LAB_1004bd598;
    puVar7 = (ulong *)*puVar7;
    if (puVar7 == (ulong *)0x0) {
      puVar7 = (ulong *)*puVar3;
      do {
        uVar6 = *puVar7;
        uVar5 = uVar6 + 0x290;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar2) {
          *puVar7 = uVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (puVar7[2] < uVar5) {
        FUN_1004bbee0(puVar7,0x290);
      }
      else {
        puVar7 = (ulong *)((long)puVar7 + uVar6 + 0x30);
      }
      func_0x000107c60ee4(puVar7,0x290);
      *(ulong **)puVar3[2] = puVar7;
    }
  }
  puVar3[2] = (ulong)puVar7;
LAB_1004bd598:
  uVar5 = puVar7[1];
  puVar7[1] = uVar5 + 1;
  return puVar7 + uVar5 * 8 + 2;
}



/* Entry: 1004bd404; end: 1004bd4c7;  */

ulong * FUN_1004bd404(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_48 = param_1[2];
  puStack_50 = (ulong *)param_1[1];
  lStack_38 = param_1[4];
  lStack_40 = param_1[3];
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  FUN_1004bd340(*param_1 + 0x1f0,param_2,param_3,&puStack_50);
  iVar4 = (int)param_2;
  puVar3 = puStack_50;
  if ((ulong *)0x1 < puStack_50) {
    do {
      uVar5 = *puStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_50,0x10);
      if (bVar2) {
        *puStack_50 = uVar5 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar5 - 1 == 0) {
      (*(code *)puStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  func_0x000107c60e78();
  if (iVar4 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&puStack_50);
  }
  func_0x000107c60bd8();
  puVar7 = (ulong *)puVar3[2];
  if (puVar7 == (ulong *)0x0) {
    if (puVar3[1] != 0) {
      func_0x000107c2c430();
                    /* WARNING: Could not recover jumptable at 0x0001004bd5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar3[2] + 0x28))();
      return puVar3;
    }
    puVar7 = (ulong *)*puVar3;
    do {
      uVar6 = *puVar7;
      uVar5 = uVar6 + 0x290;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar2) {
        *puVar7 = uVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar7[2] < uVar5) {
      FUN_1004bbee0(puVar7,0x290);
    }
    else {
      puVar7 = (ulong *)((long)puVar7 + uVar6 + 0x30);
    }
    func_0x000107c60ee4(puVar7,0x290);
    puVar3[1] = (ulong)puVar7;
  }
  else {
    if (puVar7[1] != 10) goto LAB_1004bd598;
    puVar7 = (ulong *)*puVar7;
    if (puVar7 == (ulong *)0x0) {
      puVar7 = (ulong *)*puVar3;
      do {
        uVar6 = *puVar7;
        uVar5 = uVar6 + 0x290;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar2) {
          *puVar7 = uVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (puVar7[2] < uVar5) {
        FUN_1004bbee0(puVar7,0x290);
      }
      else {
        puVar7 = (ulong *)((long)puVar7 + uVar6 + 0x30);
      }
      func_0x000107c60ee4(puVar7,0x290);
      *(ulong **)puVar3[2] = puVar7;
    }
  }
  puVar3[2] = (ulong)puVar7;
LAB_1004bd598:
  uVar5 = puVar7[1];
  puVar7[1] = uVar5 + 1;
  return puVar7 + uVar5 * 8 + 2;
}



/* Entry: 1004bd4c8; end: 1004bd5bb;  */

ulong * FUN_1004bd4c8(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  
  puVar5 = (ulong *)param_1[2];
  if (puVar5 == (ulong *)0x0) {
    if (param_1[1] != 0) {
      func_0x000107c2c430();
                    /* WARNING: Could not recover jumptable at 0x0001004bd5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[2] + 0x28))();
      return param_1;
    }
    puVar5 = (ulong *)*param_1;
    do {
      uVar3 = *puVar5;
      uVar4 = uVar3 + 0x290;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar2) {
        *puVar5 = uVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar5[2] < uVar4) {
      FUN_1004bbee0(puVar5,0x290);
    }
    else {
      puVar5 = (ulong *)((long)puVar5 + uVar3 + 0x30);
    }
    func_0x000107c60ee4(puVar5,0x290);
    param_1[1] = (ulong)puVar5;
  }
  else {
    if (puVar5[1] != 10) goto LAB_1004bd598;
    puVar5 = (ulong *)*puVar5;
    if (puVar5 == (ulong *)0x0) {
      puVar5 = (ulong *)*param_1;
      do {
        uVar3 = *puVar5;
        uVar4 = uVar3 + 0x290;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar2) {
          *puVar5 = uVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (puVar5[2] < uVar4) {
        FUN_1004bbee0(puVar5,0x290);
      }
      else {
        puVar5 = (ulong *)((long)puVar5 + uVar3 + 0x30);
      }
      func_0x000107c60ee4(puVar5,0x290);
      *(ulong **)param_1[2] = puVar5;
    }
  }
  param_1[2] = (ulong)puVar5;
LAB_1004bd598:
  uVar4 = puVar5[1];
  puVar5[1] = uVar4 + 1;
  return puVar5 + uVar4 * 8 + 2;
}



/* Entry: 1004bd5bc; end: 1004bd617;  */

void FUN_1004bd5bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004bd5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x28))();
  return;
}



/* Entry: 1004bd618; end: 1004bd6ff;  */

void FUN_1004bd618(long *param_1,long param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  ulong uStack_40;
  ulong uStack_38;
  
  puVar3 = &uStack_40;
  do {
    lVar4 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = *param_3;
  if (lVar4 == 0) {
    if ((uVar6 & 1) != 0) {
      piVar5 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_38 = uVar6;
    FUN_1004bd778(param_1,param_2,&uStack_38);
    if ((uVar6 & 1) != 0) {
      FUN_10084dad0(uVar6);
    }
  }
  else {
    if ((uVar6 & 1) != 0) {
      piVar5 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_40 = uVar6;
    FUN_1004bd890();
    *(ulong **)(param_2 + 0x18) = puVar3;
    if ((uStack_40 & 1) != 0) {
      FUN_10084dad0();
    }
    FUN_1004bc388(param_1 + 1,param_2);
  }
  return;
}



/* Entry: 1004bd700; end: 1004bd777;  */

void FUN_1004bd700(long param_1,long param_2,long param_3)

{
  ulong uStack_28;
  
  *(long *)(param_2 + 0x18) = param_1;
  *(code **)(param_3 + 8) = FUN_1004bd920;
  *(long *)(param_3 + 0x10) = param_2;
  *(undefined8 *)(param_3 + 0x18) = 0;
  uStack_28 = 0;
  FUN_1004bd618(param_1 + 0x38,param_3,&uStack_28,"executing batch");
  if ((uStack_28 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1004bd778; end: 1004bd7e7;  */

void FUN_1004bd778(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uStack_30 = *param_3;
  if ((uStack_30 & 1) != 0) {
    piVar3 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_1004bd7e8(&uStack_21,param_2,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1004bd7e8; end: 1004bd88f;  */

void FUN_1004bd7e8(undefined8 param_1,undefined8 *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  int *piVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uStack_28;
  
  if (param_2 != (undefined8 *)0x0) {
    uStack_28 = *param_3;
    if ((uStack_28 & 1) != 0) {
      piVar5 = (int *)(uStack_28 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puVar3 = &uStack_28;
    FUN_1004bd890();
    param_2[3] = puVar3;
    if ((uStack_28 & 1) != 0) {
      FUN_10084dad0();
    }
    ppuVar4 = &PTR___tlv_bootstrap_11340d948;
    (*(code *)PTR___tlv_bootstrap_11340d948)();
    puVar6 = *ppuVar4;
    *param_2 = 0;
    plVar7 = (long *)(puVar6 + 8);
    if (*plVar7 != 0) {
      plVar7 = *(long **)(puVar6 + 0x10);
    }
    *plVar7 = (long)param_2;
    *(undefined8 **)(puVar6 + 0x10) = param_2;
  }
  return;
}



/* Entry: 1004bd890; end: 1004bd90f;  */

void FUN_1004bd890(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int *piVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  if (uVar5 != 0) {
    puVar3 = (ulong *)0x8;
    func_0x000107c60e20();
    *puVar3 = uVar5;
    if ((uVar5 & 1) != 0) {
      piVar4 = (int *)(uVar5 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 1004bd910; end: 1004bd91f;  */

long FUN_1004bd910(long param_1,long param_2)

{
  return param_1 + param_2 * 0x18 + 0x30;
}



/* Entry: 1004bd920; end: 1004bd9bb;  */

void FUN_1004bd920(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0xdd0);
  FUN_1004bd910(puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x0001004bd954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}



/* Entry: 1004bd9bc; end: 1004bdbaf;  */

ulong * FUN_1004bd9bc(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  ulong *unaff_x22;
  ulong *puStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (**(char **)(param_1 + 8) != '\0') {
    func_0x0001004bd958(param_1,param_2);
  }
  if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
    *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)(*(long *)(param_2 + 8) + 0x90);
    *(undefined **)(lVar1 + 0xf0) = &UNK_104a76600;
    *(long *)(lVar1 + 0xf8) = param_1;
    *(undefined8 *)(lVar1 + 0x100) = 0;
    *(long *)(*(long *)(param_2 + 8) + 0x90) = lVar1 + 0xe8;
  }
  if (*(long *)(lVar1 + 0x110) != 0) {
    puVar4 = (ulong *)(*(long *)(lVar1 + 0x110) + 0x10);
    FUN_1004bd910(puVar4,0);
                    /* WARNING: Could not recover jumptable at 0x0001004e020c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)();
    return puVar4;
  }
  uVar6 = *(ulong *)(lVar1 + 0x148);
  if (uVar6 == 0) {
    if ((*(byte *)(param_2 + 0x10) >> 6 & 1) == 0) {
      FUN_1004bdc20(lVar1);
      if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
        puVar4 = *(ulong **)(lVar1 + 0x88);
        do {
          uVar7 = *puVar4;
          uVar6 = uVar7 - 1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar3) {
            *puVar4 = uVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 != 0) {
          if (uVar7 == 0) {
            func_0x000107c2c340(puVar4,"batch does not include send_initial_metadata");
            func_0x000104bd46a0();
            func_0x000104bd46a0();
            FUN_1004bdf74(&uStack_38);
            FUN_1004bdf74(&stack0xffffffffffffffd0);
            func_0x000107c60bd8(puVar4);
            return puRam0000000113815c70;
          }
          puVar4 = puVar4 + 1;
          puVar5 = puVar4;
          FUN_1004920d0(puVar4,&stack0xffffffffffffffdf);
          while (puVar5 == (ulong *)0x0) {
            puVar5 = puVar4;
            FUN_1004920d0(puVar4,&stack0xffffffffffffffdf);
          }
          func_0x0001004bd8dc(&stack0xffffffffffffffd0,puVar5[3]);
          puVar5[3] = 0;
          if (((ulong)unaff_x22 & 1) != 0) {
            piVar8 = (int *)((long)unaff_x22 + -1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar3) {
                *piVar8 = *piVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          FUN_1004bd778();
          if (((ulong)unaff_x22 & 1) != 0) {
            FUN_10084dad0(unaff_x22);
          }
          puVar4 = unaff_x22;
          if (((ulong)unaff_x22 & 1) != 0) {
            FUN_10084dad0();
            puVar4 = unaff_x22;
          }
        }
        return puVar4;
      }
      puStack_50 = (ulong *)0x0;
      FUN_1004bdc60(param_1,&puStack_50);
      if (((ulong)puStack_50 & 1) == 0) {
        return puStack_50;
      }
      FUN_10084dad0();
      return puStack_50;
    }
    puVar4 = (ulong *)(lVar1 + 0x148);
    func_0x000104a75cac(puVar4,*(long *)(param_2 + 8) + 0x98);
    uStack_40 = *puVar4;
    if ((uStack_40 & 1) != 0) {
      piVar8 = (int *)(uStack_40 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104a76694(lVar1);
    FUN_1004bdf74(&uStack_40);
    uStack_48 = *puVar4;
    if ((uStack_48 & 1) != 0) {
      piVar8 = (int *)(uStack_48 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104adfc18(param_2,&uStack_48,*(undefined8 *)(lVar1 + 0x88));
    puVar4 = &uStack_48;
  }
  else {
    if ((uVar6 & 1) != 0) {
      piVar8 = (int *)(uVar6 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = uVar6;
    func_0x000104adfc18(param_2,&uStack_38,*(undefined8 *)(lVar1 + 0x88));
    puVar4 = &uStack_38;
  }
  FUN_1004bdf74(puVar4);
  return puVar4;
}



/* Entry: 1004bdbb0; end: 1004bdc1f;  */

ulong FUN_1004bdbb0(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  ulong uStack_68;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) == 0) {
    if ((bVar1 >> 2 & 1) == 0) {
      if ((bVar1 >> 1 & 1) == 0) {
        if ((bVar1 >> 3 & 1) == 0) {
          if ((bVar1 >> 4 & 1) == 0) {
            if ((bVar1 >> 5 & 1) == 0) {
              pcVar5 = "return (size_t)-1";
              pcVar7 = 
              "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
              ;
              uVar8 = 0x7ff;
              func_0x000104a6e964();
              uVar4 = uVar8;
              FUN_1004bdbb0();
              if (*(long *)(pcVar5 + uVar4 * 8 + 0x118) == 0) {
                *(ulong *)(pcVar5 + uVar4 * 8 + 0x118) = uVar8;
                return uVar4;
              }
              func_0x000107c2c194();
              uVar6 = *(undefined8 *)(uVar4 + 0x10);
              uVar8 = *(long *)(uVar4 + 8) + 0x70;
              FUN_100460448(uVar8);
              FUN_1004bdd30(uVar6,uVar4,pcVar7);
              func_0x000100466b80(uVar8);
              if ((int)uVar6 != 0) {
                uVar10 = *(ulong *)pcVar7;
                if ((uVar10 & 1) != 0) {
                  piVar9 = (int *)(uVar10 - 1);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                    if (bVar3) {
                      *piVar9 = *piVar9 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                uStack_68 = uVar10;
                FUN_1004df59c(uVar4,&uStack_68);
                uVar8 = uVar4;
                if ((uVar10 & 1) != 0) {
                  FUN_10084dad0(uVar10);
                  uVar8 = uVar10;
                }
              }
              return uVar8;
            }
            uVar4 = 5;
          }
          else {
            uVar4 = 4;
          }
        }
        else {
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 1004bdc20; end: 1004bdc5f;  */

void FUN_1004bdc20(long param_1,ulong *param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uStack_58;
  
  lVar4 = param_3;
  FUN_1004bdbb0();
  param_1 = param_1 + lVar4 * 8;
  if (*(long *)(param_1 + 0x118) == 0) {
    *(long *)(param_1 + 0x118) = param_3;
    return;
  }
  func_0x000107c2c194();
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  lVar1 = *(long *)(lVar4 + 8) + 0x70;
  FUN_100460448(lVar1);
  FUN_1004bdd30(uVar5,lVar4,param_2);
  func_0x000100466b80(lVar1);
  if ((int)uVar5 != 0) {
    uVar7 = *param_2;
    if ((uVar7 & 1) != 0) {
      piVar6 = (int *)(uVar7 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_58 = uVar7;
    FUN_1004df59c(lVar4,&uStack_58);
    if ((uVar7 & 1) != 0) {
      FUN_10084dad0(uVar7);
    }
  }
  return;
}



/* Entry: 1004bdc60; end: 1004bdd27;  */

void FUN_1004bdc60(long param_1,ulong *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8) + 0x70;
  FUN_100460448(lVar1);
  FUN_1004bdd30(uVar4,param_1,param_2);
  func_0x000100466b80(lVar1);
  if ((int)uVar4 != 0) {
    uVar6 = *param_2;
    if ((uVar6 & 1) != 0) {
      piVar5 = (int *)(uVar6 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = uVar6;
    FUN_1004df59c(param_1,&uStack_38);
    if ((uVar6 & 1) != 0) {
      FUN_10084dad0(uVar6);
    }
  }
  return;
}



/* Entry: 1004bdd28; end: 1004bdd2f;  */

undefined4 FUN_1004bdd28(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1004bdd30; end: 1004bdf73;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_1004bdd30(long param_1,long param_2,ulong *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  int *piVar9;
  bool bVar10;
  long lVar11;
  ulong uStack_50;
  ulong uStack_48;
  ulong auStack_40 [2];
  
  lVar11 = *(long *)(param_2 + 8);
  iVar4 = (int)lVar11 + 0x140;
  FUN_1004bdd28();
  if (iVar4 == 0) {
    plVar8 = *(long **)(lVar11 + 8);
    do {
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar10) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar7 = (undefined8 *)0x30;
    FUN_100460200();
    *puVar7 = FUN_1004be394;
    puVar7[1] = lVar11;
    puVar7[3] = FUN_1004be1e0;
    puVar7[4] = puVar7;
    puVar7[5] = 0;
    auStack_40[1] = 0;
    FUN_1004bd7e8(auStack_40,puVar7 + 2,auStack_40 + 1);
    FUN_1004bdf74(auStack_40 + 1);
  }
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x118) + 8);
  if (*(char *)(lVar11 + 0xc0) == '\0') {
    uVar1 = *(uint *)(puVar7 + 1);
    auStack_40[0] = *(ulong *)(lVar11 + 0xb8);
    if ((auStack_40[0] & 1) != 0) {
      piVar9 = (int *)(auStack_40[0] - 1);
      do {
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar10) {
          *piVar9 = *piVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bVar3 = (uVar1 & 0x20) != 0;
    bVar10 = !bVar3 && auStack_40[0] != 0;
    if (bVar3 || auStack_40[0] == 0) {
      FUN_1004be000(param_1,param_2);
    }
    else {
      if (*(char *)(param_1 + 0xc1) != '\0') {
        FUN_1004da040(*(undefined8 *)(param_2 + 8),param_1 + 200,*(undefined8 *)(param_1 + 0x98));
        *(undefined1 *)(param_1 + 0xc1) = 0;
        *(undefined8 *)(param_1 + 0xd8) = 0;
      }
      if ((auStack_40[0] & 1) != 0) {
        piVar9 = (int *)(auStack_40[0] - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_50 = auStack_40[0];
      func_0x000104addba0(&uStack_48,&uStack_50);
      uVar5 = *param_3;
      if (uStack_48 != uVar5) {
        *param_3 = uStack_48;
        uStack_48 = 0x36;
        if ((uVar5 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      FUN_1004bdf74(&uStack_48);
      FUN_1004bdf74(&uStack_50);
    }
    FUN_1004bdf74(auStack_40);
  }
  else {
    if (*(char *)(param_1 + 0xc0) == '\0') {
      uVar6 = *puVar7;
      *(undefined1 *)(param_1 + 0xc0) = 1;
      FUN_1004d9a28(auStack_40,param_1,param_2,uVar6);
      uVar5 = *param_3;
      if (auStack_40[0] == uVar5) {
        if ((uVar5 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        *param_3 = auStack_40[0];
        auStack_40[0] = 0x36;
        if ((uVar5 & 1) != 0) {
          FUN_10084dad0();
        }
      }
    }
    if (*(char *)(param_1 + 0xc1) != '\0') {
      FUN_1004da040(*(undefined8 *)(param_2 + 8),param_1 + 200,*(undefined8 *)(param_1 + 0x98));
      *(undefined1 *)(param_1 + 0xc1) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    bVar10 = true;
  }
  return bVar10;
}



/* Entry: 1004bdf74; end: 1004bdf9f;  */

ulong * FUN_1004bdf74(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1004bdfa0; end: 1004bdfff;  */

void FUN_1004bdfa0(long *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong extraout_x8;
  long lVar7;
  long *plVar8;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar6 = (ulong)uVar1;
  if (uVar1 == 2) {
    if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004c7e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lRam0000000113815c18 + 0x20))(param_2,*param_1);
      return;
    }
    func_0x000107c2c374();
    uVar6 = extraout_x8;
  }
  else if (uVar1 == 1) {
    if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100481210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lRam0000000113815c18 + 0x10))(param_2,*param_1);
      return;
    }
    return;
  }
  func_0x000107c2c370();
  if (*(char *)(uVar6 + 0xc1) == '\0') {
    lVar7 = *(long *)(param_2 + 8);
    *(long *)(uVar6 + 200) = param_2;
    *(undefined1 *)(uVar6 + 0xc1) = 1;
    uVar4 = *(undefined8 *)(uVar6 + 0x98);
    *(undefined8 *)(uVar6 + 0xd0) = *(undefined8 *)(lVar7 + 0xb0);
    *(long **)(lVar7 + 0xb0) = (long *)(uVar6 + 200);
    FUN_1004bdfa0(uVar4,*(undefined8 *)(lVar7 + 0x60));
    plVar5 = (long *)0x28;
    func_0x000107c60e20();
    *plVar5 = param_2;
    lVar7 = *(long *)(param_2 + 0x10);
    plVar8 = *(long **)(lVar7 + 0x80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5[2] = (long)FUN_1004e3b2c;
    plVar5[3] = (long)plVar5;
    plVar5[4] = 0;
    FUN_1004be0b8(*(undefined8 *)(lVar7 + 0x88),plVar5 + 1);
    *(long **)(uVar6 + 0xd8) = plVar5;
  }
  return;
}



/* Entry: 1004be000; end: 1004be0b7;  */

void FUN_1004be000(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if (*(char *)(param_1 + 0xc1) == '\0') {
    lVar5 = *(long *)(param_2 + 8);
    *(long *)(param_1 + 200) = param_2;
    *(undefined1 *)(param_1 + 0xc1) = 1;
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar5 + 0xb0);
    *(long **)(lVar5 + 0xb0) = (long *)(param_1 + 200);
    FUN_1004bdfa0(uVar3,*(undefined8 *)(lVar5 + 0x60));
    plVar4 = (long *)0x28;
    func_0x000107c60e20();
    *plVar4 = param_2;
    lVar5 = *(long *)(param_2 + 0x10);
    plVar6 = *(long **)(lVar5 + 0x80);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4[2] = (long)FUN_1004e3b2c;
    plVar4[3] = (long)plVar4;
    plVar4[4] = 0;
    FUN_1004be0b8(*(undefined8 *)(lVar5 + 0x88),plVar4 + 1);
    *(long **)(param_1 + 0xd8) = plVar4;
  }
  return;
}



/* Entry: 1004be0b8; end: 1004be1df;  */

void FUN_1004be0b8(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  int *piVar3;
  ulong uVar4;
  bool bVar5;
  ulong uStack_50;
  ulong uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  
  puVar1 = (ulong *)(param_1 + 0x58);
  do {
    uVar4 = *puVar1;
    if ((uVar4 & 1) == 0) {
      uStack_38 = 0;
LAB_1004be134:
      do {
        if (*puVar1 != uVar4) {
          ClearExclusiveLocal();
          bVar5 = true;
          goto LAB_1004be188;
        }
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = param_2;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 == 0) goto LAB_1004be178;
      uStack_50 = 0;
      FUN_1004bd7e8(&uStack_39,uVar4,&uStack_50);
      if ((uStack_50 & 1) != 0) {
        FUN_10084dad0();
      }
      bVar5 = false;
      param_2 = uVar4;
    }
    else {
      func_0x000104ab6ba8(&uStack_38,uVar4 & 0xfffffffffffffffe);
      if (uStack_38 == 0) goto LAB_1004be134;
      uStack_48 = uStack_38;
      if ((uStack_38 & 1) != 0) {
        piVar3 = (int *)(uStack_38 - 1);
        do {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = *piVar3 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_1004bd7e8(&uStack_39,param_2,&uStack_48);
      if ((uStack_48 & 1) != 0) {
        FUN_10084dad0();
      }
LAB_1004be178:
      bVar5 = false;
    }
LAB_1004be188:
    if ((uStack_38 & 1) != 0) {
      FUN_10084dad0();
    }
    if (!bVar5) {
      return;
    }
  } while( true );
}



/* Entry: 1004be1e0; end: 1004be263;  */

void FUN_1004be1e0(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  ulong uStack_38;
  
  pcVar1 = (code *)*param_1;
  uVar2 = param_1[1];
  FUN_100460314();
  uStack_38 = *param_2;
  if ((uStack_38 & 1) != 0) {
    piVar5 = (int *)(uStack_38 - 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar4) {
        *piVar5 = *piVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (*pcVar1)(uVar2,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1004be264; end: 1004be2c7;  */

long FUN_1004be264(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 1004be2c8; end: 1004be393;  */

void FUN_1004be2c8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined1 uStack_99;
  undefined **ppuStack_98;
  long *plStack_90;
  undefined ***pppuStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *param_1;
  FUN_1004be264(alStack_48);
  FUN_1004be5e4(uVar8,alStack_48);
  if (plStack_30 == alStack_48) {
    lVar6 = 4;
    plVar1 = alStack_48;
LAB_1004be324:
    (**(code **)(*plVar1 + lVar6 * 8))();
  }
  else {
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      lVar6 = 5;
      goto LAB_1004be324;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  if (plStack_30 == alStack_48) {
    lVar6 = 4;
    plStack_30 = alStack_48;
LAB_1004be380:
    (**(code **)(*plStack_30 + lVar6 * 8))();
  }
  else if (plStack_30 != (long *)0x0) {
    lVar6 = 5;
    goto LAB_1004be380;
  }
  plVar2 = plVar1;
  func_0x000107c60bd8();
  plStack_70 = alStack_48;
  plStack_68 = plVar1;
  puStack_60 = &stack0xfffffffffffffff0;
  pcStack_58 = FUN_1004be394;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_98 = &PTR_DAT_1107c11a8;
  pppuVar5 = &ppuStack_98;
  plStack_90 = plVar2;
  pppuStack_80 = &ppuStack_98;
  FUN_1004be2c8(plVar2[0x26],pppuVar5,&uStack_99);
  if (pppuStack_80 == &ppuStack_98) {
    lVar6 = 4;
    pppuVar3 = &ppuStack_98;
LAB_1004be3fc:
    (*(code *)(*pppuVar3)[lVar6])();
  }
  else {
    pppuVar3 = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      lVar6 = 5;
      goto LAB_1004be3fc;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
  if (pppuStack_80 == &ppuStack_98) {
    lVar6 = 4;
    pppuVar4 = &ppuStack_98;
  }
  else {
    if (pppuStack_80 == (undefined ***)0x0) goto LAB_1004be468;
    lVar6 = 5;
    pppuVar4 = pppuStack_80;
  }
  (*(code *)(*pppuVar4)[lVar6])();
LAB_1004be468:
  func_0x000107c60bd8();
  ppuVar7 = pppuVar3[1];
  *pppuVar5 = &PTR_DAT_1107c11a8;
  pppuVar5[1] = ppuVar7;
  return;
}



/* Entry: 1004be394; end: 1004be46f;  */

void FUN_1004be394(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR_DAT_1107c11a8;
  pppuVar3 = &ppuStack_48;
  lStack_40 = param_1;
  pppuStack_30 = &ppuStack_48;
  FUN_1004be2c8(*(undefined8 *)(param_1 + 0x130),pppuVar3,&uStack_49);
  if (pppuStack_30 == &ppuStack_48) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_48;
LAB_1004be3fc:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else {
    pppuVar1 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar4 = 5;
      goto LAB_1004be3fc;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  if (pppuStack_30 == &ppuStack_48) {
    lVar4 = 4;
    pppuVar2 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_1004be468;
    lVar4 = 5;
    pppuVar2 = pppuStack_30;
  }
  (*(code *)(*pppuVar2)[lVar4])();
LAB_1004be468:
  func_0x000107c60bd8();
  ppuVar5 = pppuVar1[1];
  *pppuVar3 = &PTR_DAT_1107c11a8;
  pppuVar3[1] = ppuVar5;
  return;
}



/* Entry: 1004be470; end: 1004be483;  */

void FUN_1004be470(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c11a8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1004be484; end: 1004be593;  */

undefined *** FUN_1004be484(undefined ***param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined ***pppuStack_98;
  undefined1 uStack_89;
  undefined ***pppuStack_88;
  undefined ***pppuStack_80;
  undefined ***pppuStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 uStack_59;
  undefined **ppuStack_58;
  undefined ***pppuStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = param_1 + 0x28;
  FUN_1004bdd28();
  pppuVar3 = pppuVar4;
  pppuVar5 = param_1;
  if (((int)pppuVar4 == 0) && (param_2 != 0)) {
    ppuVar6 = param_1[1];
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar2) {
        *ppuVar6 = *ppuVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppuStack_58 = &PTR_DAT_1107c1c08;
    pppuVar5 = &ppuStack_58;
    pppuStack_50 = param_1;
    pppuStack_40 = pppuVar5;
    FUN_1004be2c8(param_1[0x26],&ppuStack_58,&uStack_59);
    if (pppuStack_40 == pppuVar5) {
      lVar7 = 4;
      pppuVar3 = &ppuStack_58;
    }
    else {
      pppuVar3 = pppuStack_40;
      if (pppuStack_40 == (undefined ***)0x0) goto LAB_1004be528;
      lVar7 = 5;
    }
    (*(code *)(*pppuVar3)[lVar7])();
  }
LAB_1004be528:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar4;
  }
  func_0x000107c60e78();
  if (pppuStack_40 == pppuVar5) {
    lVar7 = 4;
    pppuVar4 = &ppuStack_58;
  }
  else {
    if (pppuStack_40 == (undefined ***)0x0) goto LAB_1004be58c;
    lVar7 = 5;
    pppuVar4 = pppuStack_40;
  }
  (*(code *)(*pppuVar4)[lVar7])();
LAB_1004be58c:
  pppuVar4 = pppuVar3;
  func_0x000107c60bd8();
  pcStack_68 = FUN_1004be594;
  pppuStack_80 = pppuVar5;
  pppuStack_78 = pppuVar3;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_1004be484(pppuVar4[1],1);
  pppuVar4 = (undefined ***)pppuVar4[1][1];
  do {
    ppuVar6 = *pppuVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
    if (bVar2) {
      *pppuVar4 = (undefined **)((long)ppuVar6 + -1);
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((undefined **)((long)ppuVar6 + -1) == (undefined **)0x0) {
    pppuVar5 = pppuVar4;
    FUN_100836ca0();
    if ((((ulong)pppuVar5 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*pppuVar5 + 5) >> 1 & 1) != 0)) {
      pppuStack_88 = (undefined ***)0x0;
      FUN_1004c1168(pppuVar4 + 1,&pppuStack_88,0,0);
      if (((ulong)pppuStack_88 & 1) == 0) {
        return pppuStack_88;
      }
      FUN_10084dad0();
      return pppuStack_88;
    }
    pppuStack_98 = (undefined ***)0x0;
    FUN_1004bd7e8(&uStack_89,pppuVar4 + 1,&pppuStack_98);
    if (((ulong)pppuStack_98 & 1) != 0) {
      FUN_10084dad0();
    }
    return pppuStack_98;
  }
  return pppuVar4;
}



/* Entry: 1004be594; end: 1004be5e3;  */

void FUN_1004be594(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  FUN_1004be484(*(undefined8 *)(param_1 + 8),1);
  plVar3 = *(long **)(*(long *)(param_1 + 8) + 8);
  do {
    lVar5 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar4 = plVar3;
    FUN_100836ca0();
    if ((((ulong)plVar4 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar4 + 0x28) >> 1 & 1) != 0)) {
      uStack_28 = 0;
      FUN_1004c1168(plVar3 + 1,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      FUN_10084dad0();
      return;
    }
    uStack_38 = 0;
    FUN_1004bd7e8(&uStack_29,plVar3 + 1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_10084dad0();
    }
    return;
  }
  return;
}



/* Entry: 1004be5e4; end: 1004be727;  */

void FUN_1004be5e4(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uStack_88;
  undefined1 uStack_79;
  ulong uStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *apcStack_58 [2];
  undefined1 uStack_41;
  code **in_stack_ffffffffffffffc0;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (ulong *)(param_1 + 1);
  do {
    uVar11 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar11 + 0x1000000000001;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar11 >> 0x30 == 0) {
    plVar4 = (long *)param_2[3];
    puVar5 = param_2;
    if (plVar4 == (long *)0x0) goto LAB_1004be720;
    (**(code **)(*plVar4 + 0x30))();
    puVar5 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      puVar1 = (ulong *)(param_1 + 1);
      plVar4 = param_1 + 2;
      do {
        do {
          uVar11 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar11 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar11 = uVar11 & 0xffffffffffff;
        if (uVar11 == 2) {
          while (*puVar1 == 0x1000000000001) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              return;
            }
          }
          ClearExclusiveLocal();
          if ((*puVar1 & 0xffffffffffff) == 0) goto LAB_1004be82c;
        }
        else if (uVar11 == 1) {
LAB_1004be82c:
          if (param_1 != (long *)0x0) {
            (**(code **)(*param_1 + 0x10))(param_1);
          }
          return;
        }
        do {
          plVar6 = plVar4;
          FUN_1004920d0(plVar4,&uStack_41);
        } while (plVar6 == (long *)0x0);
        plVar7 = (long *)plVar6[4];
        if (plVar7 == (long *)0x0) {
          func_0x000104a71f98();
          lVar9 = plVar7[1];
          apcStack_58[0] = FUN_1004be85c;
          plStack_70 = plVar4;
          plStack_68 = param_1;
          puStack_60 = &stack0xfffffffffffffff0;
          if (*(long **)(lVar9 + 400) == (long *)0x0) {
            if (*(long *)(lVar9 + 0x170) == 0) {
              FUN_1004be8cc(lVar9);
            }
          }
          else {
            (**(code **)(**(long **)(lVar9 + 400) + 0x28))();
          }
          plVar4 = *(long **)(lVar9 + 8);
          do {
            lVar9 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 + -1 == 0) {
            plVar6 = plVar4;
            FUN_100836ca0();
            if ((((ulong)plVar6 & 1) == 0) &&
               (func_0x000100460dc4(), (*(byte *)(*plVar6 + 0x28) >> 1 & 1) != 0)) {
              uStack_78 = 0;
              FUN_1004c1168(plVar4 + 1,&uStack_78,0,0);
              if ((uStack_78 & 1) != 0) {
                FUN_10084dad0();
              }
            }
            else {
              uStack_88 = 0;
              FUN_1004bd7e8(&uStack_79,plVar4 + 1,&uStack_88);
              if ((uStack_88 & 1) != 0) {
                FUN_10084dad0();
              }
            }
            return;
          }
          return;
        }
        plVar8 = plVar6 + 1;
        (**(code **)(*plVar7 + 0x30))();
        plVar7 = (long *)plVar6[4];
        if (plVar7 == plVar8) {
          lVar9 = 4;
LAB_1004be814:
          (**(code **)(*plVar8 + lVar9 * 8))();
        }
        else if (plVar7 != (long *)0x0) {
          lVar9 = 5;
          plVar8 = plVar7;
          goto LAB_1004be814;
        }
        func_0x000107c60e14(plVar6);
      } while( true );
    }
  }
  else {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 - 0x1000000000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5 = (undefined8 *)0x30;
    func_0x000107c60e20();
    FUN_1004be264(apcStack_58,param_2);
    *puVar5 = 0;
    FUN_1004be264(puVar5 + 1,apcStack_58);
    if (in_stack_ffffffffffffffc0 == apcStack_58) {
      lVar10 = 4;
      in_stack_ffffffffffffffc0 = apcStack_58;
LAB_1004be6d8:
      (**(code **)(*in_stack_ffffffffffffffc0 + lVar10 * 8))();
    }
    else if (in_stack_ffffffffffffffc0 != (code **)0x0) {
      lVar10 = 5;
      goto LAB_1004be6d8;
    }
    plVar4 = param_1 + 2;
    FUN_1004bc388();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return;
    }
  }
  func_0x000107c60e78();
LAB_1004be720:
  func_0x000104a71f98();
  func_0x000107c60bd8();
  lVar9 = plVar4[1];
  *puVar5 = &PTR_DAT_1107c1c08;
  puVar5[1] = lVar9;
  return;
}



/* Entry: 1004be728; end: 1004be73f;  */

void FUN_1004be728(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c1c08;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1004be740; end: 1004be85b;  */

void FUN_1004be740(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uStack_88;
  undefined1 uStack_79;
  ulong uStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 uStack_41;
  
  puVar1 = (ulong *)(param_1 + 1);
  plVar7 = param_1 + 2;
  do {
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar8 = uVar8 & 0xffffffffffff;
    if (uVar8 == 2) {
      while (*puVar1 == 0x1000000000001) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          return;
        }
      }
      ClearExclusiveLocal();
      if ((*puVar1 & 0xffffffffffff) == 0) goto LAB_1004be82c;
    }
    else if (uVar8 == 1) {
LAB_1004be82c:
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x10))(param_1);
      }
      return;
    }
    do {
      plVar4 = plVar7;
      FUN_1004920d0(plVar7,&uStack_41);
    } while (plVar4 == (long *)0x0);
    plVar5 = (long *)plVar4[4];
    if (plVar5 == (long *)0x0) {
      func_0x000104a71f98();
      lVar9 = plVar5[1];
      pcStack_58 = FUN_1004be85c;
      plStack_70 = plVar7;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      if (*(long **)(lVar9 + 400) == (long *)0x0) {
        if (*(long *)(lVar9 + 0x170) == 0) {
          FUN_1004be8cc(lVar9);
        }
      }
      else {
        (**(code **)(**(long **)(lVar9 + 400) + 0x28))();
      }
      plVar7 = *(long **)(lVar9 + 8);
      do {
        lVar9 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        plVar4 = plVar7;
        FUN_100836ca0();
        if ((((ulong)plVar4 & 1) == 0) &&
           (func_0x000100460dc4(), (*(byte *)(*plVar4 + 0x28) >> 1 & 1) != 0)) {
          uStack_78 = 0;
          FUN_1004c1168(plVar7 + 1,&uStack_78,0,0);
          if ((uStack_78 & 1) != 0) {
            FUN_10084dad0();
          }
        }
        else {
          uStack_88 = 0;
          FUN_1004bd7e8(&uStack_79,plVar7 + 1,&uStack_88);
          if ((uStack_88 & 1) != 0) {
            FUN_10084dad0();
          }
        }
        return;
      }
      return;
    }
    plVar6 = plVar4 + 1;
    (**(code **)(*plVar5 + 0x30))();
    plVar5 = (long *)plVar4[4];
    if (plVar5 == plVar6) {
      lVar9 = 4;
LAB_1004be814:
      (**(code **)(*plVar6 + lVar9 * 8))();
    }
    else if (plVar5 != (long *)0x0) {
      lVar9 = 5;
      plVar6 = plVar5;
      goto LAB_1004be814;
    }
    func_0x000107c60e14(plVar4);
  } while( true );
}



/* Entry: 1004be85c; end: 1004be863;  */

void FUN_1004be85c(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(long **)(lVar3 + 400) == (long *)0x0) {
    if (*(long *)(lVar3 + 0x170) == 0) {
      FUN_1004be8cc(lVar3);
    }
  }
  else {
    (**(code **)(**(long **)(lVar3 + 400) + 0x28))();
  }
  plVar4 = *(long **)(lVar3 + 8);
  do {
    lVar3 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 == 0) {
    plVar5 = plVar4;
    FUN_100836ca0();
    if ((((ulong)plVar5 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar5 + 0x28) >> 1 & 1) != 0)) {
      uStack_28 = 0;
      FUN_1004c1168(plVar4 + 1,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      FUN_10084dad0();
      return;
    }
    uStack_38 = 0;
    FUN_1004bd7e8(&uStack_29,plVar4 + 1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_10084dad0();
    }
    return;
  }
  return;
}



/* Entry: 1004be864; end: 1004be8cb;  */

void FUN_1004be864(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  if (*(long **)(param_1 + 400) == (long *)0x0) {
    if (*(long *)(param_1 + 0x170) == 0) {
      FUN_1004be8cc(param_1);
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 400) + 0x28))();
  }
  plVar3 = *(long **)(param_1 + 8);
  do {
    lVar5 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar4 = plVar3;
    FUN_100836ca0();
    if ((((ulong)plVar4 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar4 + 0x28) >> 1 & 1) != 0)) {
      uStack_28 = 0;
      FUN_1004c1168(plVar3 + 1,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      FUN_10084dad0();
      return;
    }
    uStack_38 = 0;
    FUN_1004bd7e8(&uStack_29,plVar3 + 1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_10084dad0();
    }
    return;
  }
  return;
}



/* Entry: 1004be8cc; end: 1004beb23;  */

/* WARNING: Removing unreachable block (ram,0x0001004becd0) */

void FUN_1004be8cc(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long **pplVar8;
  undefined8 *extraout_x8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long lStack_210;
  long lStack_208;
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
  long *plStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long lStack_150;
  long lStack_148;
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
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  lVar10 = lRam0000000113815be8;
  if (lRam0000000113815be8 == 0) {
    lVar10 = param_1;
    FUN_100472138();
  }
  plVar11 = (long *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x3f) < '\0') {
    plVar11 = (long *)*plVar11;
  }
  lVar4 = (long)plVar11;
  func_0x000107c613d0();
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  uVar13 = *(undefined8 *)(param_1 + 0x60);
  uStack_58 = *(undefined8 *)(param_1 + 0x130);
  plStack_50 = *(long **)(param_1 + 0x138);
  if (plStack_50 != (long *)0x0) {
    plVar5 = plStack_50 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar5 = (long *)0x10;
  func_0x000107c60e20();
  *plVar5 = (long)&PTR_DAT_1107c18f8;
  plVar5[1] = param_1;
  plVar9 = *(long **)(param_1 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = *plVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar7 = &uStack_58;
  pplVar8 = &plStack_60;
  plStack_60 = plVar5;
  FUN_1004beb24(&puStack_48,lVar10 + 0xf0,plVar11,lVar4,uVar12,uVar13,puVar7);
  puVar3 = puStack_48;
  puStack_48 = (undefined8 *)0x0;
  puVar6 = *(undefined8 **)(param_1 + 0x170);
  *(undefined8 **)(param_1 + 0x170) = puVar3;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)();
    puVar3 = puStack_48;
    puStack_48 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)();
    }
  }
  plVar11 = plStack_60;
  plStack_60 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  plVar5 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    plVar9 = plStack_50 + 1;
    do {
      lVar10 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      func_0x000107c60d68();
      plVar11 = plVar5;
    }
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    puStack_48 = (undefined8 *)0x0;
    plVar11 = (long *)0x18;
    func_0x000107c60e20();
    *plVar11 = (long)&PTR_DAT_1107c21d0;
    plVar11[1] = 0;
    *(undefined1 *)(plVar11 + 2) = 0;
    plStack_68 = plVar11;
    FUN_1004c062c(param_1,1,&puStack_48,"started resolving",&plStack_68);
    plVar11 = plStack_68;
    plStack_68 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    if (((ulong)puStack_48 & 1) != 0) {
      FUN_10084dad0();
    }
    (**(code **)(**(long **)(param_1 + 0x170) + 0x18))();
    return;
  }
  func_0x000107c2c188();
  func_0x000104bd46a0();
  func_0x000104bd46a0();
  func_0x000104bd46a0();
  if (plStack_68 != (long *)0x0) {
    (**(code **)(*plStack_68 + 8))();
  }
  FUN_1004bdf74(&puStack_48);
  func_0x000107c60bd8();
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_160 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  plStack_f0 = (long *)0x0;
  plStack_158 = &lStack_150;
  FUN_10047b830();
  if (plVar11 == (long *)0x0) {
    *extraout_x8 = 0;
  }
  else {
    uStack_110 = uVar12;
    uStack_108 = uVar13;
    FUN_1004bed2c(&uStack_100,puVar7);
    plVar5 = *pplVar8;
    *pplVar8 = (long *)0x0;
    if (plStack_f0 != (long *)0x0) {
      lVar10 = *plStack_f0;
      plStack_f0 = plVar5;
      (**(code **)(lVar10 + 8))();
      plVar5 = plStack_f0;
    }
    plStack_f0 = plVar5;
    plStack_1b0 = plStack_f0;
    uStack_220 = uStack_160;
    uStack_248 = uStack_188;
    uStack_258 = uStack_198;
    uStack_260 = uStack_1a0;
    uStack_250 = uStack_190;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_240 = uStack_180;
    uStack_238 = uStack_178;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_228 = uStack_168;
    uStack_230 = uStack_170;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_170 = 0;
    plStack_218 = plStack_158;
    lStack_210 = lStack_150;
    lStack_208 = lStack_148;
    plVar5 = &lStack_210;
    if (lStack_148 != 0) {
      *(long **)(lStack_150 + 0x10) = &lStack_210;
      lStack_150 = 0;
      lStack_148 = 0;
      plVar5 = plStack_218;
      plStack_158 = &lStack_150;
    }
    plStack_218 = plVar5;
    uStack_1f0 = uStack_130;
    uStack_1f8 = uStack_138;
    uStack_200 = uStack_140;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    uStack_1e0 = uStack_120;
    uStack_1e8 = uStack_128;
    uStack_1d8 = uStack_118;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_1c8 = uStack_108;
    uStack_1d0 = uStack_110;
    uStack_1b8 = uStack_f8;
    uStack_1c0 = uStack_100;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_118 = 0;
    plStack_f0 = (long *)0x0;
    (**(code **)(*plVar11 + 0x20))(extraout_x8,plVar11,&uStack_260);
    FUN_1004c0530(&uStack_260);
  }
  FUN_1004c0530(&uStack_1a0);
  return;
}



/* Entry: 1004beb24; end: 1004bed2b;  */

/* WARNING: Removing unreachable block (ram,0x0001004becd0) */

void FUN_1004beb24(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
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
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
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
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  plStack_80 = (long *)0x0;
  plStack_e8 = &lStack_e0;
  FUN_10047b830();
  if (param_2 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    uStack_a0 = param_5;
    uStack_98 = param_6;
    FUN_1004bed2c(&uStack_90,param_7);
    plVar1 = (long *)*param_8;
    *param_8 = 0;
    if (plStack_80 != (long *)0x0) {
      lVar2 = *plStack_80;
      plStack_80 = plVar1;
      (**(code **)(lVar2 + 8))();
      plVar1 = plStack_80;
    }
    plStack_80 = plVar1;
    uStack_140 = plStack_80;
    uStack_1b0 = uStack_f0;
    uStack_1d8 = uStack_118;
    uStack_1e8 = uStack_128;
    uStack_1f0 = uStack_130;
    uStack_1e0 = uStack_120;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_1d0 = uStack_110;
    uStack_1c8 = uStack_108;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_1b8 = uStack_f8;
    uStack_1c0 = uStack_100;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
    plStack_1a8 = plStack_e8;
    lStack_1a0 = lStack_e0;
    lStack_198 = lStack_d8;
    plVar1 = &lStack_1a0;
    if (lStack_d8 != 0) {
      *(long **)(lStack_e0 + 0x10) = &lStack_1a0;
      lStack_e0 = 0;
      lStack_d8 = 0;
      plVar1 = plStack_1a8;
      plStack_e8 = &lStack_e0;
    }
    plStack_1a8 = plVar1;
    uStack_180 = uStack_c0;
    uStack_188 = uStack_c8;
    uStack_190 = uStack_d0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    uStack_170 = uStack_b0;
    uStack_178 = uStack_b8;
    uStack_168 = uStack_a8;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a8 = 0;
    plStack_80 = (long *)0x0;
    (**(code **)(*param_2 + 0x20))(param_1,param_2,&uStack_1f0);
    FUN_1004c0530(&uStack_1f0);
  }
  FUN_1004c0530(&uStack_130);
  return;
}



/* Entry: 1004bed2c; end: 1004bed8f;  */

undefined8 * FUN_1004bed2c(undefined8 *param_1,undefined8 *param_2)

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
      func_0x000107c60d68(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1004bed90; end: 1004bef8b;  */

void FUN_1004bed90(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  long lStack_190;
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
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
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
  
  (**(code **)(*param_2 + 0x18))();
  if ((int)param_2 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0x90);
    puVar2 = (undefined8 *)0x240;
    func_0x000107c60e20();
    FUN_10047c654(&uStack_1e8,param_3);
    uStack_98 = uStack_170;
    uStack_a0 = uStack_178;
    uStack_d0 = uStack_1a8;
    uStack_150 = *(undefined8 *)(param_3 + 0x98);
    uStack_158 = *(undefined8 *)(param_3 + 0x90);
    uStack_70 = *(undefined8 *)(param_3 + 0xa0);
    uStack_68 = *(undefined8 *)(param_3 + 0xa8);
    uStack_60 = *(undefined8 *)(param_3 + 0xb0);
    *(undefined8 *)(param_3 + 0xa8) = 0;
    *(undefined8 *)(param_3 + 0xb0) = 0;
    *(undefined8 *)(param_3 + 0xa0) = 0;
    uStack_108 = uStack_1e0;
    uStack_110 = uStack_1e8;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_f0 = uStack_1c8;
    uStack_f8 = uStack_1d0;
    uStack_100 = uStack_1d8;
    uStack_e8 = uStack_1c0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_d8 = uStack_1b0;
    uStack_e0 = uStack_1b8;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    plStack_c8 = plStack_1a0;
    lStack_c0 = lStack_198;
    lStack_b8 = lStack_190;
    plVar1 = &lStack_c0;
    if (lStack_190 != 0) {
      plStack_1a0 = &lStack_198;
      *(long **)(lStack_198 + 0x10) = &lStack_c0;
      lStack_198 = 0;
      lStack_190 = 0;
      plVar1 = plStack_c8;
    }
    plStack_c8 = plVar1;
    uStack_a8 = uStack_180;
    uStack_b0 = uStack_188;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_90 = uStack_168;
    uStack_88 = uStack_160;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uVar3 = uVar4;
    uStack_80 = uStack_158;
    uStack_78 = uStack_150;
    FUN_1004865ac(uVar4,"grpc.dns_min_time_between_resolutions_ms",30000,0x7fffffff);
    uStack_120 = 0x3fc999999999999a;
    uStack_128 = 0x3ff999999999999a;
    uStack_130 = 1000;
    uStack_118 = 120000;
    FUN_1004bf008(puVar2,&uStack_110,uVar4,(long)(int)uVar3,&uStack_130,0x1136a1dd8);
    FUN_1004c0530(&uStack_110);
    *puVar2 = &PTR_DAT_1107c2828;
    FUN_1004c0530(&uStack_1e8);
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 1004bef8c; end: 1004beff3; +[RTUSFilteringStringEqualityComparison descriptor] */

void FUN_1004bef8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0e18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c2a8c0,
                        &PTR____CFConstantStringClassReference_110f3dc98,&PTR_DAT_11333e330,
                        &PTR_DAT_11333e4a8,3,0x18,0x1c);
    puRam00000001137f0e18 = puVar1;
  }
  return;
}



/* Entry: 1004beff4; end: 1004bf007;  */

void FUN_1004beff4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107c5c18;
  param_1[1] = 1;
  return;
}



/* Entry: 1004bf008; end: 1004bf247;  */

undefined8 *
FUN_1004bf008(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar4 = param_1;
  FUN_1004beff4();
  *puVar4 = &PTR_DAT_1107c2b48;
  if (*(char *)(param_2 + 0x2f) < '\0') {
    FUN_100033dac(puVar4 + 2,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    puVar4[4] = *(undefined8 *)(param_2 + 0x28);
    puVar4[3] = uVar8;
    puVar4[2] = uVar6;
  }
  if ((char)*(byte *)(param_2 + 0x47) < '\0') {
    pcVar5 = *(char **)(param_2 + 0x30);
    uVar7 = *(ulong *)(param_2 + 0x38);
  }
  else {
    pcVar5 = (char *)(param_2 + 0x30);
    uVar7 = (ulong)*(byte *)(param_2 + 0x47);
  }
  puVar4 = param_1 + 5;
  if (uVar7 == 0) {
    uVar7 = 0;
    *(undefined1 *)((long)param_1 + 0x3f) = 0;
  }
  else {
    pcVar1 = pcVar5;
    if (*pcVar5 == '/') {
      pcVar1 = pcVar5 + 1;
    }
    uVar7 = uVar7 - (*pcVar5 == '/');
    if (0x7ffffffffffffff7 < uVar7) {
      func_0x000104a6fa5c(puVar4);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1004bf1e4);
      (*pcVar3)();
    }
    if (uVar7 < 0x17) {
      *(char *)((long)param_1 + 0x3f) = (char)uVar7;
      if (uVar7 == 0) goto LAB_1004bf158;
    }
    else {
      uVar2 = (uVar7 & 0xfffffffffffffff8) + 8;
      if ((uVar7 | 7) != 0x17) {
        uVar2 = uVar7 | 7;
      }
      puVar4 = (undefined8 *)(uVar2 + 1);
      func_0x000107c60e20();
      param_1[6] = uVar7;
      param_1[7] = uVar2 + 1 | 0x8000000000000000;
      param_1[5] = puVar4;
    }
    func_0x000107c610b8(puVar4,pcVar1,uVar7);
  }
LAB_1004bf158:
  *(undefined1 *)((long)puVar4 + uVar7) = 0;
  FUN_1004bf248();
  param_1[8] = param_3;
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  param_1[10] = *(undefined8 *)(param_2 + 0xa8);
  param_1[9] = uVar6;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  uVar6 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  param_1[0xf] = 0;
  param_1[0xb] = uVar6;
  param_1[0xc] = param_6;
  param_1[0xd] = *(undefined8 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x1c] = param_4;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  func_0x0001004bf25c(param_1 + 0x1f,param_5);
  return param_1;
}



/* Entry: 1004bf248; end: 1004bf263;  */

/* WARNING: Removing unreachable block (ram,0x00010047fa30) */
/* WARNING: Removing unreachable block (ram,0x00010047faa8) */
/* WARNING: Removing unreachable block (ram,0x00010047fa4c) */
/* WARNING: Removing unreachable block (ram,0x00010047fa50) */
/* WARNING: Removing unreachable block (ram,0x00010047fa5c) */
/* WARNING: Removing unreachable block (ram,0x00010047fa70) */
/* WARNING: Removing unreachable block (ram,0x00010047f974) */
/* WARNING: Removing unreachable block (ram,0x00010047f9cc) */
/* WARNING: Removing unreachable block (ram,0x00010047f990) */
/* WARNING: Removing unreachable block (ram,0x00010047f994) */
/* WARNING: Removing unreachable block (ram,0x00010047f9a0) */
/* WARNING: Removing unreachable block (ram,0x00010047f9b4) */
/* WARNING: Removing unreachable block (ram,0x00010047f9d0) */
/* WARNING: Removing unreachable block (ram,0x00010047facc) */
/* WARNING: Removing unreachable block (ram,0x00010047fad4) */

long * FUN_1004bf248(ulong *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((param_1 == (ulong *)0x0) || (*param_1 == 0)) {
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    lVar3 = 0;
    do {
      lVar3 = lVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != *param_1);
  }
  plVar2 = (long *)0x10;
  FUN_100460200();
  *plVar2 = lVar3;
  if (lVar3 != 0) {
    lVar3 = lVar3 << 5;
    FUN_100460200();
    plVar2[1] = lVar3;
    if ((param_1 == (ulong *)0x0) || (*param_1 == 0)) {
      lVar3 = 0;
    }
    else {
      uVar4 = 0;
      lVar3 = 0;
      do {
        FUN_10047fb38(&uStack_80,param_1[1] + uVar4 * 0x20);
        puVar1 = (undefined8 *)(plVar2[1] + lVar3 * 0x20);
        lVar3 = lVar3 + 1;
        puVar1[1] = uStack_78;
        *puVar1 = uStack_80;
        puVar1[3] = uStack_68;
        puVar1[2] = uStack_70;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *param_1);
    }
    if (lVar3 == *plVar2) {
      return plVar2;
    }
    func_0x000107c2c2e8();
  }
  plVar2[1] = 0;
  return plVar2;
}



/* Entry: 1004bf264; end: 1004bf2ef;  */

undefined8 * FUN_1004bf264(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uStack_21;
  
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  puVar1 = param_1 + 4;
  func_0x0001004bf260(param_1 + 0x26);
  param_1[0x25] = 0x20;
  puVar2 = (undefined8 *)((long)puVar1 + ((ulong)puVar1 & 8));
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = 0;
  puVar2[0x12] = 0;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0;
  puVar2[0x19] = 0;
  puVar2[0x18] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x1e] = 0;
  FUN_1004bf500(puVar1,&uStack_21);
  param_1[0x28] = *param_1;
  *(undefined1 *)(param_1 + 0x27) = 1;
  return param_1;
}



/* Entry: 1004bf2f0; end: 1004bf36f;  */

void FUN_1004bf2f0(undefined8 *param_1)

{
  int iVar1;
  
  if ((bRam00000001138370e8 & 1) == 0) {
    iVar1 = 0x138370e8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puRam00000001138370d8 = &UNK_10e52b670;
      uRam00000001138370e0 = 1;
      func_0x000107c60e4c(0x1138370e8);
    }
  }
  *param_1 = puRam00000001138370d8;
  return;
}



/* Entry: 1004bf370; end: 1004bf4ff;  */

void FUN_1004bf370(long param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if (iRam00000001137ed8c0 != 0xdd) {
    FUN_1004bf600(0x1137ed8c0,1,FUN_1004bf7a0);
  }
  ppuVar6 = &PTR___tlv_bootstrap_11340d870;
  (*(code *)PTR___tlv_bootstrap_11340d870)();
  puVar7 = *ppuVar6;
  if (puVar7 == (undefined *)0x8) {
    do {
      uVar8 = uRam00000001137ed8c8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x1137ed8c8,0x10);
      if (bVar5) {
        cVar4 = ExclusiveMonitorsStatus();
        uRam00000001137ed8c8 = uRam00000001137ed8c8 + 1;
      }
    } while (cVar4 != '\0');
    puVar7 = (undefined *)(uVar8 & 7);
    *ppuVar6 = puVar7;
  }
  lVar10 = *(long *)((long)puVar7 * 8 + 0x1137ed900);
  puVar1 = (uint *)(lVar10 + 0x100);
  uVar3 = *(uint *)(lVar10 + 0x100);
  if ((uVar3 & 1) == 0) {
    do {
      uVar2 = *puVar1;
      if (uVar2 != uVar3) {
        ClearExclusiveLocal();
        break;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 | 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar2 & 1) == 0) goto joined_r0x0001004bf4a0;
  }
  func_0x000107c2ba10();
joined_r0x0001004bf4a0:
  if (param_2 != 0) {
    uVar8 = *(ulong *)(lVar10 + 0x110);
    do {
      if (0x3f < uVar8) {
        *(undefined8 *)(lVar10 + 0x110) = 4;
        FUN_1004c020c(*(undefined8 *)(lVar10 + 0x108),lVar10);
        uVar8 = *(ulong *)(lVar10 + 0x110);
      }
      uVar9 = uVar8 * -4 + 0x100;
      if (param_2 <= uVar9) {
        uVar9 = param_2;
      }
      func_0x000107c610b4(param_1,lVar10 + uVar8 * 4,uVar9);
      param_1 = param_1 + uVar9;
      uVar8 = *(long *)(lVar10 + 0x110) + (uVar9 + 3 >> 2);
      *(ulong *)(lVar10 + 0x110) = uVar8;
      param_2 = param_2 - uVar9;
    } while (param_2 != 0);
  }
  uVar3 = *puVar1;
  do {
    uVar2 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 & 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (7 < uVar2) {
    func_0x000107c2ba14();
  }
  return;
}



/* Entry: 1004bf500; end: 1004bf5ff;  */

undefined1  [16] FUN_1004bf500(ulong param_1,undefined8 param_2,code *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  int aiStack_130 [8];
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
  long lStack_38;
  
  piVar5 = aiStack_130;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  FUN_1004bf370(aiStack_130,0x20);
  puVar9 = (undefined4 *)((long)&uStack_58 + 4);
  uVar10 = 0x3c;
  do {
    uVar1 = *puVar9;
    lVar7 = uVar10 * 2;
    *puVar9 = *(undefined4 *)((long)&uStack_140 + lVar7 + 4);
    *(undefined4 *)((long)&uStack_140 + lVar7 + 4) = uVar1;
    uVar1 = puVar9[-1];
    puVar9[-1] = *(undefined4 *)((long)&uStack_140 + lVar7);
    *(undefined4 *)((long)&uStack_140 + lVar7) = uVar1;
    uVar1 = puVar9[-2];
    puVar9[-2] = *(undefined4 *)((long)&uStack_148 + lVar7 + 4);
    *(undefined4 *)((long)&uStack_148 + lVar7 + 4) = uVar1;
    uVar10 = uVar10 - 8;
    uVar1 = puVar9[-3];
    puVar9[-3] = *(undefined4 *)((long)&uStack_148 + lVar7);
    *(undefined4 *)((long)&uStack_148 + lVar7) = uVar1;
    puVar9 = puVar9 + -8;
  } while (7 < uVar10);
  lVar7 = param_1 + (ulong)((param_1 & 0xf) != 0) * 8;
  FUN_1004c0458(aiStack_130,lVar7);
  *(undefined8 *)(param_1 + 0x108) = 0x20;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar11._8_8_ = lVar7;
    auVar11._0_8_ = piVar5;
    return auVar11;
  }
  func_0x000107c60e78();
  pcStack_138 = FUN_1004bf600;
  uStack_148 = param_1;
  uStack_140 = &stack0xfffffffffffffff0;
  do {
    piVar6 = piVar5;
    if (*piVar5 != 0) {
      ClearExclusiveLocal();
      lVar8 = 3;
      func_0x000107c2ba0c(piVar5,3,&UNK_10e52bef0,lVar7);
      if ((int)piVar6 != 0) goto LAB_1004bf688;
      break;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar4) {
      *piVar5 = 0x65c2937b;
      cVar3 = ExclusiveMonitorsStatus();
    }
    lVar8 = lVar7;
  } while (cVar3 != '\0');
  (*param_3)();
  do {
    iVar2 = *piVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar4) {
      *piVar5 = 0xdd;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 == 0x5a308d2) {
    auVar13._8_8_ = 1;
    auVar13._0_8_ = piVar5;
    return auVar13;
  }
LAB_1004bf688:
  auVar12._8_8_ = lVar8;
  auVar12._0_8_ = piVar6;
  return auVar12;
}



/* Entry: 1004bf600; end: 1004bf693;  */

undefined1  [16] FUN_1004bf600(int *param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  do {
    piVar4 = param_1;
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      uVar5 = 3;
      func_0x000107c2ba0c(param_1,3,&UNK_10e52bef0,param_2);
      if ((int)piVar4 != 0) goto LAB_1004bf688;
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0x65c2937b;
      cVar2 = ExclusiveMonitorsStatus();
    }
    uVar5 = param_2;
  } while (cVar2 != '\0');
  (*param_3)();
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0xdd;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 0x5a308d2) {
    auVar7._8_8_ = 1;
    auVar7._0_8_ = param_1;
    return auVar7;
  }
LAB_1004bf688:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = piVar4;
  return auVar6;
}



/* Entry: 1004bf694; end: 1004bf79f;  */

uint * FUN_1004bf694(long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  uint *puVar14;
  long lVar15;
  undefined8 *puVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 *puStack_930;
  undefined8 auStack_928 [2];
  char cStack_911;
  undefined8 auStack_910 [2];
  char cStack_8f9;
  long alStack_8f8 [3];
  long *plStack_8e0;
  undefined8 uStack_8d8;
  long lStack_8d0;
  uint *puStack_8c8;
  undefined1 **ppuStack_8c0;
  code *pcStack_8b8;
  long alStack_8a8 [257];
  undefined1 *puStack_60;
  code *pcStack_58;
  int iStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 != 0) {
    if (param_2 == 0) {
      puVar17 = (uint *)0x1;
      goto LAB_1004bf76c;
    }
    _iStack_48 = 0x2f7665642f;
    uStack_43 = 0x617275;
    uStack_40 = 0x6d6f646e;
    piVar7 = &iStack_48;
    func_0x000107c611c4(piVar7,0);
    if ((int)piVar7 != -1) {
      puVar16 = (undefined8 *)(param_2 << 2);
      if (puVar16 == (undefined8 *)0x0) {
        puVar17 = (uint *)0x1;
      }
      else {
        do {
          piVar8 = piVar7;
          param_3 = puVar16;
          func_0x000107c612bc(piVar7,param_1);
          piVar9 = piVar8;
          func_0x000107c60e5c();
          if ((long)piVar8 < 1) {
            puVar17 = (uint *)(ulong)(piVar8 == (int *)0xffffffffffffffff && *piVar9 == 4);
          }
          else {
            param_1 = param_1 + (long)piVar8;
            puVar16 = (undefined8 *)((long)puVar16 - (long)piVar8);
            puVar17 = (uint *)0x1;
          }
        } while ((int)puVar17 != 0 && puVar16 != (undefined8 *)0x0);
      }
      func_0x000107c60f10(piVar7);
      goto LAB_1004bf76c;
    }
  }
  puVar17 = (uint *)0x0;
LAB_1004bf76c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar17;
  }
  func_0x000107c60e78();
  pcStack_58 = FUN_1004bf7a0;
  alStack_8a8[0x100] = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = alStack_8a8;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_1004bf694(plVar10,0x200);
  if ((int)plVar10 == 0) {
    func_0x000107c2b964();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1004bf93c);
    (*pcVar6)();
  }
  lVar15 = 0;
  do {
    plVar10 = (long *)0x158;
    func_0x000107c60e1c();
    if (((ulong)plVar10 & 0x3f) != 0) {
      plVar10 = (long *)(((ulong)plVar10 & 0xffffffffffffffc0) + 0x40);
    }
    plVar10[0x22] = 0;
    plVar10[0x1f] = 0;
    plVar10[0x1e] = 0;
    plVar10[0x21] = 0;
    plVar10[0x20] = 0;
    plVar10[0x1b] = 0;
    plVar10[0x1a] = 0;
    plVar10[0x1d] = 0;
    plVar10[0x1c] = 0;
    plVar10[0x17] = 0;
    plVar10[0x16] = 0;
    plVar10[0x19] = 0;
    plVar10[0x18] = 0;
    plVar10[0x13] = 0;
    plVar10[0x12] = 0;
    plVar10[0x15] = 0;
    plVar10[0x14] = 0;
    plVar10[0xf] = 0;
    plVar10[0xe] = 0;
    plVar10[0x11] = 0;
    plVar10[0x10] = 0;
    plVar10[0xb] = 0;
    plVar10[10] = 0;
    plVar10[0xd] = 0;
    plVar10[0xc] = 0;
    plVar10[7] = 0;
    plVar10[6] = 0;
    plVar10[9] = 0;
    plVar10[8] = 0;
    plVar10[3] = 0;
    plVar10[2] = 0;
    plVar10[5] = 0;
    plVar10[4] = 0;
    plVar10[1] = 0;
    *plVar10 = 0;
    *(undefined4 *)(plVar10 + 0x20) = 2;
    puVar17 = (uint *)(plVar10 + 0x21);
    FUN_1004bf2f0();
    puVar1 = (uint *)(plVar10 + 0x20);
    *(long **)(lVar15 * 8 + 0x1137ed900) = plVar10;
    uVar3 = *puVar1;
    if ((uVar3 & 1) == 0) {
      do {
        uVar2 = *puVar1;
        if (uVar2 != uVar3) {
          ClearExclusiveLocal();
          break;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar3 | 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar2 & 1) != 0) goto LAB_1004bf880;
    }
    else {
LAB_1004bf880:
      puVar17 = puVar1;
      func_0x000107c2ba10();
    }
    lVar19 = alStack_8a8[lVar15 * 0x20 + 1];
    lVar18 = alStack_8a8[lVar15 * 0x20];
    lVar21 = alStack_8a8[lVar15 * 0x20 + 3];
    lVar20 = alStack_8a8[lVar15 * 0x20 + 2];
    lVar23 = alStack_8a8[lVar15 * 0x20 + 5];
    lVar22 = alStack_8a8[lVar15 * 0x20 + 4];
    lVar25 = alStack_8a8[lVar15 * 0x20 + 7];
    lVar24 = alStack_8a8[lVar15 * 0x20 + 6];
    lVar27 = alStack_8a8[lVar15 * 0x20 + 9];
    lVar26 = alStack_8a8[lVar15 * 0x20 + 8];
    lVar29 = alStack_8a8[lVar15 * 0x20 + 0xb];
    lVar28 = alStack_8a8[lVar15 * 0x20 + 10];
    lVar31 = alStack_8a8[lVar15 * 0x20 + 0xd];
    lVar30 = alStack_8a8[lVar15 * 0x20 + 0xc];
    lVar33 = alStack_8a8[lVar15 * 0x20 + 0xf];
    lVar32 = alStack_8a8[lVar15 * 0x20 + 0xe];
    lVar35 = alStack_8a8[lVar15 * 0x20 + 0x11];
    lVar34 = alStack_8a8[lVar15 * 0x20 + 0x10];
    lVar37 = alStack_8a8[lVar15 * 0x20 + 0x13];
    lVar36 = alStack_8a8[lVar15 * 0x20 + 0x12];
    lVar39 = alStack_8a8[lVar15 * 0x20 + 0x15];
    lVar38 = alStack_8a8[lVar15 * 0x20 + 0x14];
    lVar41 = alStack_8a8[lVar15 * 0x20 + 0x17];
    lVar40 = alStack_8a8[lVar15 * 0x20 + 0x16];
    lVar43 = alStack_8a8[lVar15 * 0x20 + 0x19];
    lVar42 = alStack_8a8[lVar15 * 0x20 + 0x18];
    lVar45 = alStack_8a8[lVar15 * 0x20 + 0x1b];
    lVar44 = alStack_8a8[lVar15 * 0x20 + 0x1a];
    lVar46 = alStack_8a8[lVar15 * 0x20 + 0x1c];
    lVar48 = alStack_8a8[lVar15 * 0x20 + 0x1f];
    lVar47 = alStack_8a8[lVar15 * 0x20 + 0x1e];
    plVar10[0x1d] = alStack_8a8[lVar15 * 0x20 + 0x1d];
    plVar10[0x1c] = lVar46;
    plVar10[0x1f] = lVar48;
    plVar10[0x1e] = lVar47;
    plVar10[0x19] = lVar43;
    plVar10[0x18] = lVar42;
    plVar10[0x1b] = lVar45;
    plVar10[0x1a] = lVar44;
    plVar10[0x15] = lVar39;
    plVar10[0x14] = lVar38;
    plVar10[0x17] = lVar41;
    plVar10[0x16] = lVar40;
    plVar10[0x11] = lVar35;
    plVar10[0x10] = lVar34;
    plVar10[0x13] = lVar37;
    plVar10[0x12] = lVar36;
    plVar10[0xd] = lVar31;
    plVar10[0xc] = lVar30;
    plVar10[0xf] = lVar33;
    plVar10[0xe] = lVar32;
    plVar10[9] = lVar27;
    plVar10[8] = lVar26;
    plVar10[0xb] = lVar29;
    plVar10[10] = lVar28;
    plVar10[5] = lVar23;
    plVar10[4] = lVar22;
    plVar10[7] = lVar25;
    plVar10[6] = lVar24;
    plVar10[1] = lVar19;
    *plVar10 = lVar18;
    plVar10[3] = lVar21;
    plVar10[2] = lVar20;
    plVar10[0x22] = 0x40;
    uVar3 = *(uint *)(plVar10 + 0x20);
    do {
      uVar2 = *puVar1;
      puVar14 = (uint *)(ulong)uVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 & 2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (7 < uVar2) {
      puVar17 = puVar1;
      func_0x000107c2ba14();
    }
    lVar15 = lVar15 + 1;
    if (lVar15 == 8) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_8a8[0x100]) {
        return puVar17;
      }
      func_0x000107c60e78();
      if ((int)puVar14 != 0) {
        func_0x000104bd46a0();
      }
      func_0x000107c60bd8();
      alStack_8f8[1] = 0x1137ed8c0;
      alStack_8f8[2] = 0x40;
      uStack_8d8 = 2;
      pcStack_8b8 = FUN_1004bf94c;
      alStack_8f8[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar16 = param_3;
      plStack_8e0 = alStack_8a8;
      lStack_8d0 = lVar15;
      puStack_8c8 = puVar1;
      ppuStack_8c0 = &puStack_60;
      func_0x000107c61174(puVar14);
      func_0x000107c61174(param_3);
      if (puVar17 != (uint *)0x0) {
        plVar10 = *(long **)(puVar17 + 2);
        func_0x000107c61174(puVar14);
        if (puVar14 == (uint *)0x0) {
          puVar17 = (uint *)&UNK_10f6ec1b9;
        }
        else {
          puVar17 = puVar14;
          func_0x000107c61178(puVar14);
          func_0x000107c3ac4c();
        }
        func_0x000107c61170(puVar14);
        FUN_10002b838(auStack_928,puVar17);
        func_0x000107c61174(param_3);
        if (param_3 == (undefined8 *)0x0) {
          puVar16 = (undefined8 *)&UNK_10f6ec1b9;
        }
        else {
          func_0x000107c61178(param_3);
          puVar16 = param_3;
          func_0x000107c3ac4c(param_3);
        }
        func_0x000107c61170(param_3);
        FUN_10002b838(auStack_910,puVar16);
        uStack_948 = 0;
        uStack_940 = 0;
        uStack_938 = 0;
        FUN_10007e1e8(&uStack_948,auStack_928,alStack_8f8,2);
        puVar16 = &uStack_948;
        (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c98c18,puVar16,param_4);
        puStack_930 = &uStack_948;
        FUN_10007e5dc(&puStack_930);
        lVar15 = 0;
        do {
          if ((&cStack_8f9)[lVar15] < '\0') {
            func_0x000107c60e14(*(undefined8 *)((long)auStack_910 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != -0x30);
      }
      func_0x000107c61170(param_3);
      puVar17 = puVar14;
      func_0x000107c61170();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_8f8[0]) {
        return puVar17;
      }
      func_0x000107c60e78();
      func_0x000107c61170(param_3);
      if (cStack_911 < '\0') {
        func_0x000107c60e14(auStack_928[0]);
      }
      func_0x000107c61170(param_3);
      func_0x000107c61170(puVar14);
      func_0x000107c60bd8(puVar17);
      func_0x000107c61174(puVar16);
      puVar11 = puVar16;
      func_0x000107c4e4f8(puVar16);
      func_0x000107c61180();
      puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c61160();
      puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c61160();
      func_0x000107c61174();
      func_0x000107c61174(puVar12);
      func_0x000107c429c4(puVar11);
      puVar17 = (uint *)PTR_PTR_1126debd8;
      func_0x000107c610f4(PTR_PTR_1126debd8);
      func_0x000107c42aec(puVar16);
      func_0x000107c41ff8(puVar16);
      func_0x000107c3ef1c(puVar16);
      func_0x000107c4f6a4(puVar16);
      func_0x000107c61170(puVar16);
      func_0x000107c467e0(puVar17);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
      return puVar17;
    }
  } while( true );
}



/* Entry: 1004bf7a0; end: 1004bf94b;  */

void FUN_1004bf7a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
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
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 *puStack_8e0;
  undefined8 auStack_8d8 [2];
  char cStack_8c1;
  undefined8 auStack_8c0 [2];
  char cStack_8a9;
  long alStack_8a8 [3];
  long *plStack_890;
  undefined8 uStack_888;
  long lStack_880;
  uint *puStack_878;
  undefined1 *puStack_870;
  code *pcStack_868;
  long alStack_858 [257];
  
  alStack_858[0x100] = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = alStack_858;
  FUN_1004bf694(plVar7,0x200);
  if ((int)plVar7 == 0) {
    func_0x000107c2b964();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1004bf93c);
    (*pcVar6)();
  }
  lVar14 = 0;
  do {
    plVar7 = (long *)0x158;
    func_0x000107c60e1c();
    if (((ulong)plVar7 & 0x3f) != 0) {
      plVar7 = (long *)(((ulong)plVar7 & 0xffffffffffffffc0) + 0x40);
    }
    plVar7[0x22] = 0;
    plVar7[0x1f] = 0;
    plVar7[0x1e] = 0;
    plVar7[0x21] = 0;
    plVar7[0x20] = 0;
    plVar7[0x1b] = 0;
    plVar7[0x1a] = 0;
    plVar7[0x1d] = 0;
    plVar7[0x1c] = 0;
    plVar7[0x17] = 0;
    plVar7[0x16] = 0;
    plVar7[0x19] = 0;
    plVar7[0x18] = 0;
    plVar7[0x13] = 0;
    plVar7[0x12] = 0;
    plVar7[0x15] = 0;
    plVar7[0x14] = 0;
    plVar7[0xf] = 0;
    plVar7[0xe] = 0;
    plVar7[0x11] = 0;
    plVar7[0x10] = 0;
    plVar7[0xb] = 0;
    plVar7[10] = 0;
    plVar7[0xd] = 0;
    plVar7[0xc] = 0;
    plVar7[7] = 0;
    plVar7[6] = 0;
    plVar7[9] = 0;
    plVar7[8] = 0;
    plVar7[3] = 0;
    plVar7[2] = 0;
    plVar7[5] = 0;
    plVar7[4] = 0;
    plVar7[1] = 0;
    *plVar7 = 0;
    *(undefined4 *)(plVar7 + 0x20) = 2;
    puVar8 = (uint *)(plVar7 + 0x21);
    FUN_1004bf2f0();
    puVar1 = (uint *)(plVar7 + 0x20);
    *(long **)(lVar14 * 8 + 0x1137ed900) = plVar7;
    uVar3 = *puVar1;
    if ((uVar3 & 1) == 0) {
      do {
        uVar2 = *puVar1;
        if (uVar2 != uVar3) {
          ClearExclusiveLocal();
          if ((uVar2 & 1) == 0) goto LAB_1004bf888;
          goto LAB_1004bf880;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar3 | 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar2 & 1) != 0) goto LAB_1004bf880;
    }
    else {
LAB_1004bf880:
      puVar8 = puVar1;
      func_0x000107c2ba10();
    }
LAB_1004bf888:
    lVar16 = alStack_858[lVar14 * 0x20 + 1];
    lVar15 = alStack_858[lVar14 * 0x20];
    lVar18 = alStack_858[lVar14 * 0x20 + 3];
    lVar17 = alStack_858[lVar14 * 0x20 + 2];
    lVar20 = alStack_858[lVar14 * 0x20 + 5];
    lVar19 = alStack_858[lVar14 * 0x20 + 4];
    lVar22 = alStack_858[lVar14 * 0x20 + 7];
    lVar21 = alStack_858[lVar14 * 0x20 + 6];
    lVar24 = alStack_858[lVar14 * 0x20 + 9];
    lVar23 = alStack_858[lVar14 * 0x20 + 8];
    lVar26 = alStack_858[lVar14 * 0x20 + 0xb];
    lVar25 = alStack_858[lVar14 * 0x20 + 10];
    lVar28 = alStack_858[lVar14 * 0x20 + 0xd];
    lVar27 = alStack_858[lVar14 * 0x20 + 0xc];
    lVar30 = alStack_858[lVar14 * 0x20 + 0xf];
    lVar29 = alStack_858[lVar14 * 0x20 + 0xe];
    lVar32 = alStack_858[lVar14 * 0x20 + 0x11];
    lVar31 = alStack_858[lVar14 * 0x20 + 0x10];
    lVar34 = alStack_858[lVar14 * 0x20 + 0x13];
    lVar33 = alStack_858[lVar14 * 0x20 + 0x12];
    lVar36 = alStack_858[lVar14 * 0x20 + 0x15];
    lVar35 = alStack_858[lVar14 * 0x20 + 0x14];
    lVar38 = alStack_858[lVar14 * 0x20 + 0x17];
    lVar37 = alStack_858[lVar14 * 0x20 + 0x16];
    lVar40 = alStack_858[lVar14 * 0x20 + 0x19];
    lVar39 = alStack_858[lVar14 * 0x20 + 0x18];
    lVar42 = alStack_858[lVar14 * 0x20 + 0x1b];
    lVar41 = alStack_858[lVar14 * 0x20 + 0x1a];
    lVar43 = alStack_858[lVar14 * 0x20 + 0x1c];
    lVar45 = alStack_858[lVar14 * 0x20 + 0x1f];
    lVar44 = alStack_858[lVar14 * 0x20 + 0x1e];
    plVar7[0x1d] = alStack_858[lVar14 * 0x20 + 0x1d];
    plVar7[0x1c] = lVar43;
    plVar7[0x1f] = lVar45;
    plVar7[0x1e] = lVar44;
    plVar7[0x19] = lVar40;
    plVar7[0x18] = lVar39;
    plVar7[0x1b] = lVar42;
    plVar7[0x1a] = lVar41;
    plVar7[0x15] = lVar36;
    plVar7[0x14] = lVar35;
    plVar7[0x17] = lVar38;
    plVar7[0x16] = lVar37;
    plVar7[0x11] = lVar32;
    plVar7[0x10] = lVar31;
    plVar7[0x13] = lVar34;
    plVar7[0x12] = lVar33;
    plVar7[0xd] = lVar28;
    plVar7[0xc] = lVar27;
    plVar7[0xf] = lVar30;
    plVar7[0xe] = lVar29;
    plVar7[9] = lVar24;
    plVar7[8] = lVar23;
    plVar7[0xb] = lVar26;
    plVar7[10] = lVar25;
    plVar7[5] = lVar20;
    plVar7[4] = lVar19;
    plVar7[7] = lVar22;
    plVar7[6] = lVar21;
    plVar7[1] = lVar16;
    *plVar7 = lVar15;
    plVar7[3] = lVar18;
    plVar7[2] = lVar17;
    plVar7[0x22] = 0x40;
    uVar3 = *(uint *)(plVar7 + 0x20);
    do {
      uVar2 = *puVar1;
      puVar13 = (undefined *)(ulong)uVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 & 2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (7 < uVar2) {
      puVar8 = puVar1;
      func_0x000107c2ba14();
    }
    lVar14 = lVar14 + 1;
    if (lVar14 == 8) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_858[0x100]) {
        return;
      }
      func_0x000107c60e78();
      if ((int)puVar13 != 0) {
        func_0x000104bd46a0();
      }
      func_0x000107c60bd8();
      alStack_8a8[1] = 0x1137ed8c0;
      alStack_8a8[2] = 0x40;
      uStack_888 = 2;
      pcStack_868 = FUN_1004bf94c;
      alStack_8a8[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar10 = param_3;
      plStack_890 = alStack_858;
      lStack_880 = lVar14;
      puStack_878 = puVar1;
      puStack_870 = &stack0xfffffffffffffff0;
      func_0x000107c61174(puVar13);
      func_0x000107c61174(param_3);
      if (puVar8 != (uint *)0x0) {
        plVar7 = *(long **)(puVar8 + 2);
        func_0x000107c61174(puVar13);
        if (puVar13 == (undefined *)0x0) {
          puVar9 = &UNK_10f6ec1b9;
        }
        else {
          puVar9 = puVar13;
          func_0x000107c61178(puVar13);
          func_0x000107c3ac4c();
        }
        func_0x000107c61170(puVar13);
        FUN_10002b838(auStack_8d8,puVar9);
        func_0x000107c61174(param_3);
        if (param_3 == (undefined8 *)0x0) {
          puVar10 = (undefined8 *)&UNK_10f6ec1b9;
        }
        else {
          func_0x000107c61178(param_3);
          puVar10 = param_3;
          func_0x000107c3ac4c(param_3);
        }
        func_0x000107c61170(param_3);
        FUN_10002b838(auStack_8c0,puVar10);
        uStack_8f8 = 0;
        uStack_8f0 = 0;
        uStack_8e8 = 0;
        FUN_10007e1e8(&uStack_8f8,auStack_8d8,alStack_8a8,2);
        puVar10 = &uStack_8f8;
        (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110c98c18,puVar10,param_4);
        puStack_8e0 = &uStack_8f8;
        FUN_10007e5dc(&puStack_8e0);
        lVar14 = 0;
        do {
          if ((&cStack_8a9)[lVar14] < '\0') {
            func_0x000107c60e14(*(undefined8 *)((long)auStack_8c0 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != -0x30);
      }
      func_0x000107c61170(param_3);
      puVar9 = puVar13;
      func_0x000107c61170();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_8a8[0]) {
        func_0x000107c60e78();
        func_0x000107c61170(param_3);
        if (cStack_8c1 < '\0') {
          func_0x000107c60e14(auStack_8d8[0]);
        }
        func_0x000107c61170(param_3);
        func_0x000107c61170(puVar13);
        func_0x000107c60bd8(puVar9);
        func_0x000107c61174(puVar10);
        puVar11 = puVar10;
        func_0x000107c4e4f8(puVar10);
        func_0x000107c61180();
        puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x000107c61160();
        puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x000107c61160();
        func_0x000107c61174();
        func_0x000107c61174(puVar13);
        func_0x000107c429c4(puVar11);
        puVar12 = PTR_PTR_1126debd8;
        func_0x000107c610f4(PTR_PTR_1126debd8);
        func_0x000107c42aec(puVar10);
        func_0x000107c41ff8(puVar10);
        func_0x000107c3ef1c(puVar10);
        func_0x000107c4f6a4(puVar10);
        func_0x000107c61170(puVar10);
        func_0x000107c467e0(puVar12);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
        return;
      }
      return;
    }
  } while( true );
}



/* Entry: 1004bf94c; end: 1004bfb7b;  */

void FUN_1004bf94c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec1b9;
    }
    else {
      puVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_78,puVar1);
    func_0x000107c61174(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ec1b9;
    }
    else {
      func_0x000107c61178(param_3);
      puVar2 = param_3;
      func_0x000107c3ac4c(param_3);
    }
    func_0x000107c61170(param_3);
    FUN_10002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110c98c18,puVar2,param_4);
    puStack_80 = &uStack_98;
    FUN_10007e5dc(&puStack_80);
    lVar6 = 0;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  func_0x000107c61170(param_3);
  puVar1 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(puVar1);
  func_0x000107c61174(puVar2);
  puVar3 = puVar2;
  func_0x000107c4e4f8(puVar2);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  func_0x000107c429c4(puVar3);
  puVar5 = PTR_PTR_1126debd8;
  func_0x000107c610f4(PTR_PTR_1126debd8);
  func_0x000107c42aec(puVar2);
  func_0x000107c41ff8(puVar2);
  func_0x000107c3ef1c(puVar2);
  func_0x000107c4f6a4(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c467e0(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1004bfb7c; end: 1004bfcd7; -[SCRTUSConfigProviderImpl _getObjCProductConfigFromConfigProtoValue:] */

void FUN_1004bfb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4e4f8(param_3);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1004bfe2c;
  puStack_78 = &UNK_110c98b48;
  puStack_70 = puVar2;
  puStack_68 = puVar3;
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  func_0x000107c429c4(uVar1,param_2,&puStack_90);
  puVar4 = PTR_PTR_1126debd8;
  func_0x000107c610f4(PTR_PTR_1126debd8);
  uVar5 = param_3;
  func_0x000107c42aec(param_3);
  uVar6 = param_3;
  func_0x000107c41ff8(param_3);
  uVar7 = param_3;
  func_0x000107c3ef1c(param_3);
  uVar8 = param_3;
  func_0x000107c4f6a4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c467e0(puVar4,param_2,uVar5,uVar6,(long)(int)uVar7,uVar8,puVar2,puVar3);
  func_0x000107c61170(puStack_68);
  func_0x000107c61170(puStack_70);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1004bfcd8; end: 1004bfd97;  */

long FUN_1004bfcd8(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_1 + 0x20);
  plVar1 = (long *)(*(long *)(param_2 + 0x40) + (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0x18));
  lVar6 = *plVar1;
  if (lVar6 == 0) {
    lVar6 = lVar7;
    FUN_1003f88a8();
    do {
      lVar8 = *plVar1;
      if (lVar8 != 0) {
        ClearExclusiveLocal();
        lVar4 = lVar7;
        func_0x000107c4c354();
        if (((int)lVar4 == 0xe) && (*(byte *)(*(long *)(lVar7 + 8) + 0x1e) - 0xd < 4)) {
          piVar5 = (int *)&DAT_112796db0;
        }
        else {
          piVar5 = (int *)&DAT_112796db4;
        }
        *(undefined8 *)(lVar6 + *piVar5) = 0;
        func_0x000107c61170(lVar6);
        return lVar8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar6;
}



/* Entry: 1004bfd98; end: 1004bfe2b; -[GPBInt32ObjectDictionary enumerateKeysAndObjectsUsingBlock:] */

void FUN_1004bfd98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x000107c4a8cc();
  do {
    lVar2 = lVar1;
    func_0x000107c4d67c();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x000107c4d9e8(lVar4);
    func_0x000107c49804(lVar2);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 1004bfe2c; end: 1004bff9b;  */

/* WARNING: Possible PIC construction at 0x0001004bfec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004bff10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004bff64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004bff74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004bff68) */
/* WARNING: Removing unreachable block (ram,0x0001004bff14) */
/* WARNING: Removing unreachable block (ram,0x0001004bff70) */
/* WARNING: Removing unreachable block (ram,0x0001004bff20) */
/* WARNING: Removing unreachable block (ram,0x0001004bfecc) */
/* WARNING: Removing unreachable block (ram,0x0001004bff78) */

void FUN_1004bfe2c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_3);
  func_0x000107c433ec();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  lVar2 = param_3;
  func_0x000107c40808();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c56bcc(uVar4);
  }
  else {
    func_0x000107c5dc14(param_3);
    func_0x000107c4d95c(puVar3);
    func_0x000107c61180();
    func_0x000107c3d798(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1004bff9c; end: 1004bffa3; -[GPBInt32Array count] */

undefined8 FUN_1004bff9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1004bffa4; end: 1004c0003; -[GPBInt32Array valueAtIndex:] */

undefined4 FUN_1004bffa4(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSRangeException_11034aaa0,
                        &PTR____CFConstantStringClassReference_11102f3b8);
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x10) + param_3 * 4);
}



/* Entry: 1004c0004; end: 1004c005f;  */

long FUN_1004c0004(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(lVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_2 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x00010bf6a980;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x00010bf6a980:
                    /* WARNING: Could not recover jumptable at 0x00010bf6a990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_defaultValue_1125b8408);
      return lVar2;
    }
  }
  return *(long *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 1004c0060; end: 1004c009f;  */

void FUN_1004c0060(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1004c00a0; end: 1004c020b; -[SCRTUSProductConfig initWithEventTTLSeconds:diskQuotaBytes:eventCountLimit:purgeEventsEnabled:eventPayloadIdToEventFieldsMap:eventPayloadIdToEventFilterParseTreeMap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004c00a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_70;
  long lStack_68;
  
  if (param_7 != 0) {
    uVar1 = 0;
    FUN_1004c0060(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = 0x11305ed58;
    FUN_1000285a8(0x11305ed58,&UNK_10dcd3688);
    uVar3 = uVar2;
    FUN_100120cb0();
    func_0x000107c5f9e8(param_7,uVar1,uVar2,uVar3);
  }
  if (param_8 == 0) {
    param_8 = 0;
  }
  else {
    uVar3 = 0;
    FUN_1004c0060(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar1 = 0;
    FUN_1004c0060(0,0x11305ed50,&PTR_PTR_1126adbd8);
    uVar2 = uVar1;
    FUN_100120cb0();
    func_0x000107c5f9e8(param_8,uVar3,uVar1,uVar2);
  }
  *(undefined8 *)(param_1 + _DAT_11305ecf8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11305ed00) = param_4;
  *(undefined8 *)(param_1 + _DAT_11305ed08) = param_5;
  *(undefined1 *)(param_1 + _DAT_11305ed10) = param_6;
  *(long *)(param_1 + _DAT_11305ed18) = param_7;
  *(long *)(param_1 + _DAT_11305ed20) = param_8;
  FUN_1004c25e4();
  lStack_70 = param_1;
  lStack_68 = param_8;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1004c020c; end: 1004c0457;  */

void FUN_1004c020c(long param_1,undefined8 *param_2)

{
  unkbyte9 *pVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
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
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  undefined1 auVar108 [16];
  undefined8 uVar109;
  undefined8 uVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  undefined8 uVar181;
  undefined8 uVar182;
  byte bVar183;
  byte bVar184;
  byte bVar185;
  byte bVar186;
  byte bVar187;
  byte bVar188;
  byte bVar189;
  byte bVar190;
  byte bVar191;
  byte bVar192;
  byte bVar193;
  byte bVar194;
  byte bVar195;
  byte bVar196;
  byte bVar197;
  byte bVar198;
  byte bVar199;
  byte bVar200;
  byte bVar201;
  byte bVar202;
  byte bVar203;
  byte bVar204;
  byte bVar205;
  byte bVar206;
  byte bVar207;
  byte bVar208;
  byte bVar209;
  byte bVar210;
  byte bVar211;
  byte bVar212;
  undefined8 uVar213;
  undefined8 uVar214;
  byte bVar215;
  byte bVar216;
  byte bVar217;
  byte bVar218;
  byte bVar219;
  byte bVar220;
  byte bVar221;
  byte bVar222;
  byte bVar223;
  byte bVar224;
  byte bVar225;
  byte bVar226;
  byte bVar227;
  byte bVar228;
  byte bVar229;
  byte bVar230;
  byte bVar231;
  byte bVar232;
  byte bVar233;
  byte bVar234;
  byte bVar235;
  byte bVar236;
  byte bVar237;
  byte bVar238;
  byte bVar239;
  byte bVar240;
  byte bVar241;
  byte bVar242;
  byte bVar243;
  byte bVar244;
  byte bVar245;
  byte bVar246;
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  byte bVar250;
  byte bVar251;
  byte bVar252;
  byte bVar253;
  byte bVar254;
  byte bVar255;
  byte bVar256;
  byte bVar257;
  byte bVar258;
  byte bVar259;
  byte bVar260;
  byte bVar261;
  byte bVar262;
  byte bVar263;
  byte bVar264;
  byte bVar265;
  byte bVar266;
  byte bVar267;
  byte bVar268;
  byte bVar269;
  byte bVar270;
  byte bVar271;
  byte bVar272;
  byte bVar273;
  byte bVar274;
  byte bVar275;
  byte bVar276;
  byte bVar277;
  byte bVar278;
  byte bVar279;
  byte bVar280;
  byte bVar281;
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  byte bVar287;
  byte bVar288;
  byte bVar289;
  byte bVar290;
  byte bVar291;
  byte bVar292;
  byte bVar293;
  byte bVar294;
  byte bVar295;
  byte bVar296;
  byte bVar297;
  byte bVar298;
  byte bVar299;
  byte bVar300;
  byte bVar301;
  byte bVar302;
  byte bVar303;
  byte bVar304;
  byte bVar305;
  byte bVar306;
  byte bVar307;
  byte bVar308;
  byte bVar309;
  byte bVar310;
  byte bVar311;
  byte bVar312;
  byte bVar313;
  byte bVar314;
  byte bVar315;
  byte bVar316;
  byte bVar317;
  byte bVar318;
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  byte bVar322;
  byte bVar323;
  byte bVar324;
  byte bVar325;
  byte bVar326;
  byte bVar327;
  byte bVar328;
  byte bVar329;
  byte bVar330;
  byte bVar331;
  byte bVar332;
  byte bVar333;
  byte bVar334;
  byte bVar335;
  byte bVar336;
  byte bVar337;
  undefined8 uStack_60;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  byte bStack_48;
  undefined7 uStack_47;
  
  lVar31 = 0;
  uVar20 = param_2[1];
  bVar199 = (byte)((ulong)uVar20 >> 8);
  bVar201 = (byte)((ulong)uVar20 >> 0x10);
  bVar203 = (byte)((ulong)uVar20 >> 0x18);
  bVar205 = (byte)((ulong)uVar20 >> 0x20);
  bVar207 = (byte)((ulong)uVar20 >> 0x28);
  bVar209 = (byte)((ulong)uVar20 >> 0x30);
  bVar211 = (byte)((ulong)uVar20 >> 0x38);
  uVar19 = *param_2;
  bVar184 = (byte)((ulong)uVar19 >> 8);
  bVar186 = (byte)((ulong)uVar19 >> 0x10);
  bVar188 = (byte)((ulong)uVar19 >> 0x18);
  bVar190 = (byte)((ulong)uVar19 >> 0x20);
  bVar192 = (byte)((ulong)uVar19 >> 0x28);
  bVar194 = (byte)((ulong)uVar19 >> 0x30);
  bVar196 = (byte)((ulong)uVar19 >> 0x38);
  uStack_50 = param_2[2];
  uVar6 = param_2[5];
  bVar78 = (byte)uVar6;
  bVar79 = (byte)((ulong)uVar6 >> 8);
  bVar80 = (byte)((ulong)uVar6 >> 0x10);
  bVar81 = (byte)((ulong)uVar6 >> 0x18);
  bVar82 = (byte)((ulong)uVar6 >> 0x20);
  bVar83 = (byte)((ulong)uVar6 >> 0x28);
  bVar84 = (byte)((ulong)uVar6 >> 0x30);
  bVar85 = (byte)((ulong)uVar6 >> 0x38);
  uVar6 = param_2[4];
  bVar70 = (byte)uVar6;
  bVar71 = (byte)((ulong)uVar6 >> 8);
  bVar72 = (byte)((ulong)uVar6 >> 0x10);
  bVar73 = (byte)((ulong)uVar6 >> 0x18);
  bVar74 = (byte)((ulong)uVar6 >> 0x20);
  bVar75 = (byte)((ulong)uVar6 >> 0x28);
  bVar76 = (byte)((ulong)uVar6 >> 0x30);
  bVar77 = (byte)((ulong)uVar6 >> 0x38);
  uStack_60 = param_2[6];
  bStack_58 = (byte)param_2[7];
  uStack_57 = (undefined7)((ulong)param_2[7] >> 8);
  bStack_48 = (byte)param_2[3];
  uStack_47 = (undefined7)((ulong)param_2[3] >> 8);
  auVar321 = *(undefined1 (*) [16])(param_2 + 8);
  uVar30 = param_2[0xb];
  uVar29 = param_2[10];
  uVar110 = param_2[0xd];
  uVar109 = param_2[0xc];
  auVar112 = *(undefined1 (*) [16])(param_2 + 0xe);
  uVar182 = param_2[0x11];
  uVar181 = param_2[0x10];
  uVar17 = param_2[0x13];
  uVar16 = param_2[0x12];
  uVar7 = param_2[0x15];
  uVar6 = param_2[0x14];
  uVar14 = param_2[0x17];
  uVar13 = param_2[0x16];
  uVar214 = param_2[0x19];
  uVar213 = param_2[0x18];
  uVar23 = param_2[0x1b];
  uVar22 = param_2[0x1a];
  auVar132 = *(undefined1 (*) [16])(param_2 + 0x1c);
  uVar26 = param_2[0x1f];
  uVar25 = param_2[0x1e];
  bVar32 = (byte)uVar6;
  bVar34 = (byte)((ulong)uVar6 >> 8);
  bVar36 = (byte)((ulong)uVar6 >> 0x10);
  bVar38 = (byte)((ulong)uVar6 >> 0x18);
  bVar40 = (byte)((ulong)uVar6 >> 0x20);
  bVar42 = (byte)((ulong)uVar6 >> 0x28);
  bVar44 = (byte)((ulong)uVar6 >> 0x30);
  bVar46 = (byte)((ulong)uVar6 >> 0x38);
  bVar48 = (byte)uVar7;
  bVar50 = (byte)((ulong)uVar7 >> 8);
  bVar52 = (byte)((ulong)uVar7 >> 0x10);
  bVar55 = (byte)((ulong)uVar7 >> 0x18);
  bVar58 = (byte)((ulong)uVar7 >> 0x20);
  bVar61 = (byte)((ulong)uVar7 >> 0x28);
  bVar64 = (byte)((ulong)uVar7 >> 0x30);
  bVar67 = (byte)((ulong)uVar7 >> 0x38);
  bVar33 = (byte)uVar13;
  bVar35 = (byte)((ulong)uVar13 >> 8);
  bVar37 = (byte)((ulong)uVar13 >> 0x10);
  bVar39 = (byte)((ulong)uVar13 >> 0x18);
  bVar41 = (byte)((ulong)uVar13 >> 0x20);
  bVar43 = (byte)((ulong)uVar13 >> 0x28);
  bVar45 = (byte)((ulong)uVar13 >> 0x30);
  bVar47 = (byte)((ulong)uVar13 >> 0x38);
  bVar49 = (byte)uVar14;
  bVar51 = (byte)((ulong)uVar14 >> 8);
  bVar54 = (byte)((ulong)uVar14 >> 0x10);
  bVar57 = (byte)((ulong)uVar14 >> 0x18);
  bVar60 = (byte)((ulong)uVar14 >> 0x20);
  bVar63 = (byte)((ulong)uVar14 >> 0x28);
  bVar66 = (byte)((ulong)uVar14 >> 0x30);
  bVar69 = (byte)((ulong)uVar14 >> 0x38);
  bVar165 = (byte)uVar16;
  bVar166 = (byte)((ulong)uVar16 >> 8);
  bVar167 = (byte)((ulong)uVar16 >> 0x10);
  bVar168 = (byte)((ulong)uVar16 >> 0x18);
  bVar169 = (byte)((ulong)uVar16 >> 0x20);
  bVar170 = (byte)((ulong)uVar16 >> 0x28);
  bVar171 = (byte)((ulong)uVar16 >> 0x30);
  bVar172 = (byte)((ulong)uVar16 >> 0x38);
  bVar173 = (byte)uVar17;
  bVar174 = (byte)((ulong)uVar17 >> 8);
  bVar175 = (byte)((ulong)uVar17 >> 0x10);
  bVar176 = (byte)((ulong)uVar17 >> 0x18);
  bVar177 = (byte)((ulong)uVar17 >> 0x20);
  bVar178 = (byte)((ulong)uVar17 >> 0x28);
  bVar179 = (byte)((ulong)uVar17 >> 0x30);
  bVar180 = (byte)((ulong)uVar17 >> 0x38);
  bVar183 = (byte)uVar19;
  bVar185 = bVar184;
  bVar187 = bVar186;
  bVar189 = bVar188;
  bVar191 = bVar190;
  bVar193 = bVar192;
  bVar195 = bVar194;
  bVar197 = bVar196;
  bVar198 = (byte)uVar20;
  bVar200 = bVar199;
  bVar202 = bVar201;
  bVar204 = bVar203;
  bVar206 = bVar205;
  bVar208 = bVar207;
  bVar210 = bVar209;
  bVar212 = bVar211;
  bVar215 = (byte)uVar22;
  bVar216 = (byte)((ulong)uVar22 >> 8);
  bVar217 = (byte)((ulong)uVar22 >> 0x10);
  bVar218 = (byte)((ulong)uVar22 >> 0x18);
  bVar219 = (byte)((ulong)uVar22 >> 0x20);
  bVar220 = (byte)((ulong)uVar22 >> 0x28);
  bVar221 = (byte)((ulong)uVar22 >> 0x30);
  bVar222 = (byte)((ulong)uVar22 >> 0x38);
  bVar223 = (byte)uVar23;
  bVar224 = (byte)((ulong)uVar23 >> 8);
  bVar225 = (byte)((ulong)uVar23 >> 0x10);
  bVar226 = (byte)((ulong)uVar23 >> 0x18);
  bVar227 = (byte)((ulong)uVar23 >> 0x20);
  bVar228 = (byte)((ulong)uVar23 >> 0x28);
  bVar229 = (byte)((ulong)uVar23 >> 0x30);
  bVar230 = (byte)((ulong)uVar23 >> 0x38);
  bVar231 = (byte)uVar25;
  bVar232 = (byte)((ulong)uVar25 >> 8);
  bVar233 = (byte)((ulong)uVar25 >> 0x10);
  bVar234 = (byte)((ulong)uVar25 >> 0x18);
  bVar235 = (byte)((ulong)uVar25 >> 0x20);
  bVar236 = (byte)((ulong)uVar25 >> 0x28);
  bVar237 = (byte)((ulong)uVar25 >> 0x30);
  bVar238 = (byte)((ulong)uVar25 >> 0x38);
  bVar239 = (byte)uVar26;
  bVar240 = (byte)((ulong)uVar26 >> 8);
  bVar241 = (byte)((ulong)uVar26 >> 0x10);
  bVar242 = (byte)((ulong)uVar26 >> 0x18);
  bVar243 = (byte)((ulong)uVar26 >> 0x20);
  bVar244 = (byte)((ulong)uVar26 >> 0x28);
  bVar245 = (byte)((ulong)uVar26 >> 0x30);
  bVar246 = (byte)((ulong)uVar26 >> 0x38);
  bVar250 = (byte)uVar29;
  bVar251 = (byte)((ulong)uVar29 >> 8);
  bVar252 = (byte)((ulong)uVar29 >> 0x10);
  bVar253 = (byte)((ulong)uVar29 >> 0x18);
  bVar254 = (byte)((ulong)uVar29 >> 0x20);
  bVar255 = (byte)((ulong)uVar29 >> 0x28);
  bVar256 = (byte)((ulong)uVar29 >> 0x30);
  bVar257 = (byte)((ulong)uVar29 >> 0x38);
  bVar258 = (byte)uVar30;
  bVar259 = (byte)((ulong)uVar30 >> 8);
  bVar260 = (byte)((ulong)uVar30 >> 0x10);
  bVar261 = (byte)((ulong)uVar30 >> 0x18);
  bVar262 = (byte)((ulong)uVar30 >> 0x20);
  bVar263 = (byte)((ulong)uVar30 >> 0x28);
  bVar264 = (byte)((ulong)uVar30 >> 0x30);
  bVar265 = (byte)((ulong)uVar30 >> 0x38);
  while( true ) {
    auVar319[9] = bVar200;
    auVar319[8] = bVar198;
    auVar319[10] = bVar202;
    auVar319[0xb] = bVar204;
    auVar319[0xc] = bVar206;
    auVar319[0xd] = bVar208;
    auVar319[0xe] = bVar210;
    auVar319[0xf] = bVar212;
    auVar319[1] = bVar185;
    auVar319[0] = bVar183;
    auVar319[2] = bVar187;
    auVar319[3] = bVar189;
    auVar319[4] = bVar191;
    auVar319[5] = bVar193;
    auVar319[6] = bVar195;
    auVar319[7] = bVar197;
    auVar247 = NEON_aese(auVar319,ZEXT216(0));
    auVar248 = NEON_aesmc(auVar247,auVar247);
    auVar282[9] = bVar79;
    auVar282[8] = bVar78;
    auVar282[10] = bVar80;
    auVar282[0xb] = bVar81;
    auVar282[0xc] = bVar82;
    auVar282[0xd] = bVar83;
    auVar282[0xe] = bVar84;
    auVar282[0xf] = bVar85;
    auVar282[1] = bVar71;
    auVar282[0] = bVar70;
    auVar282[2] = bVar72;
    auVar282[3] = bVar73;
    auVar282[4] = bVar74;
    auVar282[5] = bVar75;
    auVar282[6] = bVar76;
    auVar282[7] = bVar77;
    auVar247 = NEON_aese(auVar282,ZEXT216(0));
    auVar283 = NEON_aesmc(auVar247,auVar247);
    auVar247 = NEON_aese(auVar321,ZEXT216(0));
    auVar319 = NEON_aesmc(auVar247,auVar247);
    auVar131._8_8_ = uVar110;
    auVar131._0_8_ = uVar109;
    auVar247 = NEON_aese(auVar131,ZEXT216(0));
    auVar111 = NEON_aesmc(auVar247,auVar247);
    auVar285._8_8_ = uVar182;
    auVar285._0_8_ = uVar181;
    auVar247 = NEON_aese(auVar285,ZEXT216(0));
    auVar286 = NEON_aesmc(auVar247,auVar247);
    auVar114[9] = bVar50;
    auVar114[8] = bVar48;
    auVar114[10] = bVar52;
    auVar114[0xb] = bVar55;
    auVar114[0xc] = bVar58;
    auVar114[0xd] = bVar61;
    auVar114[0xe] = bVar64;
    auVar114[0xf] = bVar67;
    auVar114[1] = bVar34;
    auVar114[0] = bVar32;
    auVar114[2] = bVar36;
    auVar114[3] = bVar38;
    auVar114[4] = bVar40;
    auVar114[5] = bVar42;
    auVar114[6] = bVar44;
    auVar114[7] = bVar46;
    auVar247 = NEON_aese(auVar114,ZEXT216(0));
    auVar247 = NEON_aesmc(auVar247,auVar247);
    auVar249._8_8_ = uVar214;
    auVar249._0_8_ = uVar213;
    auVar113 = NEON_aese(auVar249,ZEXT216(0));
    auVar114 = NEON_aesmc(auVar113,auVar113);
    auVar113 = NEON_aese(auVar132,ZEXT216(0));
    auVar131 = NEON_aesmc(auVar113,auVar113);
    pVar1 = (unkbyte9 *)(param_1 + lVar31);
    uVar6 = *(undefined8 *)((long)pVar1 + 8);
    uVar16 = *(undefined8 *)((long)pVar1 + 0x18);
    uVar17 = *(undefined8 *)((long)pVar1 + 0x28);
    uVar7 = *(undefined8 *)((long)pVar1 + 0x38);
    uVar13 = *(undefined8 *)((long)pVar1 + 0x48);
    uVar14 = *(undefined8 *)((long)pVar1 + 0x58);
    auVar113[9] = (char)((ulong)uVar6 >> 8);
    auVar113._0_9_ = *pVar1;
    auVar113[10] = (char)((ulong)uVar6 >> 0x10);
    auVar113[0xb] = (char)((ulong)uVar6 >> 0x18);
    auVar113[0xc] = (char)((ulong)uVar6 >> 0x20);
    auVar113[0xd] = (char)((ulong)uVar6 >> 0x28);
    auVar113[0xe] = (char)((ulong)uVar6 >> 0x30);
    auVar113[0xf] = (char)((ulong)uVar6 >> 0x38);
    auVar113 = NEON_aese(auVar248,auVar113);
    auVar249 = NEON_aesmc(auVar113,auVar113);
    bVar53 = (byte)((uint7)uStack_57 >> 8);
    bVar56 = (byte)((uint7)uStack_57 >> 0x10);
    bVar59 = (byte)((uint7)uStack_57 >> 0x18);
    bVar62 = (byte)((uint7)uStack_57 >> 0x20);
    bVar65 = (byte)((uint7)uStack_57 >> 0x28);
    bVar68 = (byte)((uint7)uStack_57 >> 0x30);
    bVar96 = (byte)((uint7)uStack_47 >> 8);
    bVar98 = (byte)((uint7)uStack_47 >> 0x10);
    bVar100 = (byte)((uint7)uStack_47 >> 0x18);
    bVar102 = (byte)((uint7)uStack_47 >> 0x20);
    bVar104 = (byte)((uint7)uStack_47 >> 0x28);
    bVar106 = (byte)((uint7)uStack_47 >> 0x30);
    bVar266 = auVar249[0] ^ (byte)uStack_50;
    bVar267 = auVar249[1] ^ (byte)((ulong)uStack_50 >> 8);
    bVar268 = auVar249[2] ^ (byte)((ulong)uStack_50 >> 0x10);
    bVar269 = auVar249[3] ^ (byte)((ulong)uStack_50 >> 0x18);
    bVar270 = auVar249[4] ^ (byte)((ulong)uStack_50 >> 0x20);
    bVar271 = auVar249[5] ^ (byte)((ulong)uStack_50 >> 0x28);
    bVar272 = auVar249[6] ^ (byte)((ulong)uStack_50 >> 0x30);
    bVar273 = auVar249[7] ^ (byte)((ulong)uStack_50 >> 0x38);
    bVar274 = auVar249[8] ^ bStack_48;
    bVar275 = auVar249[9] ^ (byte)uStack_47;
    bVar276 = auVar249[10] ^ bVar96;
    bVar277 = auVar249[0xb] ^ bVar98;
    bVar278 = auVar249[0xc] ^ bVar100;
    bVar279 = auVar249[0xd] ^ bVar102;
    bVar280 = auVar249[0xe] ^ bVar104;
    bVar281 = auVar249[0xf] ^ bVar106;
    auVar284[9] = (char)((ulong)uVar16 >> 8);
    auVar284._0_9_ = pVar1[1];
    auVar284[10] = (char)((ulong)uVar16 >> 0x10);
    auVar284[0xb] = (char)((ulong)uVar16 >> 0x18);
    auVar284[0xc] = (char)((ulong)uVar16 >> 0x20);
    auVar284[0xd] = (char)((ulong)uVar16 >> 0x28);
    auVar284[0xe] = (char)((ulong)uVar16 >> 0x30);
    auVar284[0xf] = (char)((ulong)uVar16 >> 0x38);
    auVar113 = NEON_aese(auVar283,auVar284);
    auVar284 = NEON_aesmc(auVar113,auVar113);
    bVar322 = auVar284[0] ^ (byte)uStack_60;
    bVar323 = auVar284[1] ^ (byte)((ulong)uStack_60 >> 8);
    bVar324 = auVar284[2] ^ (byte)((ulong)uStack_60 >> 0x10);
    bVar325 = auVar284[3] ^ (byte)((ulong)uStack_60 >> 0x18);
    bVar326 = auVar284[4] ^ (byte)((ulong)uStack_60 >> 0x20);
    bVar327 = auVar284[5] ^ (byte)((ulong)uStack_60 >> 0x28);
    bVar328 = auVar284[6] ^ (byte)((ulong)uStack_60 >> 0x30);
    bVar329 = auVar284[7] ^ (byte)((ulong)uStack_60 >> 0x38);
    bVar330 = auVar284[8] ^ bStack_58;
    bVar331 = auVar284[9] ^ (byte)uStack_57;
    bVar332 = auVar284[10] ^ bVar53;
    bVar333 = auVar284[0xb] ^ bVar56;
    bVar334 = auVar284[0xc] ^ bVar59;
    bVar335 = auVar284[0xd] ^ bVar62;
    bVar336 = auVar284[0xe] ^ bVar65;
    bVar337 = auVar284[0xf] ^ bVar68;
    auVar320[9] = (char)((ulong)uVar17 >> 8);
    auVar320._0_9_ = pVar1[2];
    auVar320[10] = (char)((ulong)uVar17 >> 0x10);
    auVar320[0xb] = (char)((ulong)uVar17 >> 0x18);
    auVar320[0xc] = (char)((ulong)uVar17 >> 0x20);
    auVar320[0xd] = (char)((ulong)uVar17 >> 0x28);
    auVar320[0xe] = (char)((ulong)uVar17 >> 0x30);
    auVar320[0xf] = (char)((ulong)uVar17 >> 0x38);
    auVar113 = NEON_aese(auVar319,auVar320);
    auVar320 = NEON_aesmc(auVar113,auVar113);
    bVar287 = auVar320[0] ^ bVar250;
    bVar288 = auVar320[1] ^ bVar251;
    bVar289 = auVar320[2] ^ bVar252;
    bVar290 = auVar320[3] ^ bVar253;
    bVar291 = auVar320[4] ^ bVar254;
    bVar292 = auVar320[5] ^ bVar255;
    bVar293 = auVar320[6] ^ bVar256;
    bVar294 = auVar320[7] ^ bVar257;
    bVar295 = auVar320[8] ^ bVar258;
    bVar296 = auVar320[9] ^ bVar259;
    bVar297 = auVar320[10] ^ bVar260;
    bVar298 = auVar320[0xb] ^ bVar261;
    bVar299 = auVar320[0xc] ^ bVar262;
    bVar300 = auVar320[0xd] ^ bVar263;
    bVar301 = auVar320[0xe] ^ bVar264;
    bVar302 = auVar320[0xf] ^ bVar265;
    auVar248[9] = (char)((ulong)uVar7 >> 8);
    auVar248._0_9_ = pVar1[3];
    auVar248[10] = (char)((ulong)uVar7 >> 0x10);
    auVar248[0xb] = (char)((ulong)uVar7 >> 0x18);
    auVar248[0xc] = (char)((ulong)uVar7 >> 0x20);
    auVar248[0xd] = (char)((ulong)uVar7 >> 0x28);
    auVar248[0xe] = (char)((ulong)uVar7 >> 0x30);
    auVar248[0xf] = (char)((ulong)uVar7 >> 0x38);
    auVar113 = NEON_aese(auVar111,auVar248);
    auVar248 = NEON_aesmc(auVar113,auVar113);
    bVar303 = auVar248[0] ^ auVar112[0];
    bVar304 = auVar248[1] ^ auVar112[1];
    bVar305 = auVar248[2] ^ auVar112[2];
    bVar306 = auVar248[3] ^ auVar112[3];
    bVar307 = auVar248[4] ^ auVar112[4];
    bVar308 = auVar248[5] ^ auVar112[5];
    bVar309 = auVar248[6] ^ auVar112[6];
    bVar310 = auVar248[7] ^ auVar112[7];
    bVar311 = auVar248[8] ^ auVar112[8];
    bVar312 = auVar248[9] ^ auVar112[9];
    bVar313 = auVar248[10] ^ auVar112[10];
    bVar314 = auVar248[0xb] ^ auVar112[0xb];
    bVar315 = auVar248[0xc] ^ auVar112[0xc];
    bVar316 = auVar248[0xd] ^ auVar112[0xd];
    bVar317 = auVar248[0xe] ^ auVar112[0xe];
    bVar318 = auVar248[0xf] ^ auVar112[0xf];
    uVar7 = *(undefined8 *)((long)pVar1 + 0x68);
    uVar6 = *(undefined8 *)((long)pVar1 + 0x78);
    auVar283[9] = (char)((ulong)uVar13 >> 8);
    auVar283._0_9_ = pVar1[4];
    auVar283[10] = (char)((ulong)uVar13 >> 0x10);
    auVar283[0xb] = (char)((ulong)uVar13 >> 0x18);
    auVar283[0xc] = (char)((ulong)uVar13 >> 0x20);
    auVar283[0xd] = (char)((ulong)uVar13 >> 0x28);
    auVar283[0xe] = (char)((ulong)uVar13 >> 0x30);
    auVar283[0xf] = (char)((ulong)uVar13 >> 0x38);
    auVar113 = NEON_aese(auVar286,auVar283);
    auVar283 = NEON_aesmc(auVar113,auVar113);
    bVar115 = auVar283[0] ^ bVar165;
    bVar116 = auVar283[1] ^ bVar166;
    bVar117 = auVar283[2] ^ bVar167;
    bVar118 = auVar283[3] ^ bVar168;
    bVar119 = auVar283[4] ^ bVar169;
    bVar120 = auVar283[5] ^ bVar170;
    bVar121 = auVar283[6] ^ bVar171;
    bVar122 = auVar283[7] ^ bVar172;
    bVar123 = auVar283[8] ^ bVar173;
    bVar124 = auVar283[9] ^ bVar174;
    bVar125 = auVar283[10] ^ bVar175;
    bVar126 = auVar283[0xb] ^ bVar176;
    bVar127 = auVar283[0xc] ^ bVar177;
    bVar128 = auVar283[0xd] ^ bVar178;
    bVar129 = auVar283[0xe] ^ bVar179;
    bVar130 = auVar283[0xf] ^ bVar180;
    auVar286[9] = (char)((ulong)uVar14 >> 8);
    auVar286._0_9_ = pVar1[5];
    auVar286[10] = (char)((ulong)uVar14 >> 0x10);
    auVar286[0xb] = (char)((ulong)uVar14 >> 0x18);
    auVar286[0xc] = (char)((ulong)uVar14 >> 0x20);
    auVar286[0xd] = (char)((ulong)uVar14 >> 0x28);
    auVar286[0xe] = (char)((ulong)uVar14 >> 0x30);
    auVar286[0xf] = (char)((ulong)uVar14 >> 0x38);
    auVar247 = NEON_aese(auVar247,auVar286);
    auVar113 = NEON_aesmc(auVar247,auVar247);
    bVar133 = auVar113[0] ^ bVar33;
    bVar134 = auVar113[1] ^ bVar35;
    bVar135 = auVar113[2] ^ bVar37;
    bVar136 = auVar113[3] ^ bVar39;
    bVar137 = auVar113[4] ^ bVar41;
    bVar138 = auVar113[5] ^ bVar43;
    bVar139 = auVar113[6] ^ bVar45;
    bVar140 = auVar113[7] ^ bVar47;
    bVar141 = auVar113[8] ^ bVar49;
    bVar142 = auVar113[9] ^ bVar51;
    bVar143 = auVar113[10] ^ bVar54;
    bVar144 = auVar113[0xb] ^ bVar57;
    bVar145 = auVar113[0xc] ^ bVar60;
    bVar146 = auVar113[0xd] ^ bVar63;
    bVar147 = auVar113[0xe] ^ bVar66;
    bVar148 = auVar113[0xf] ^ bVar69;
    auVar111[9] = (char)((ulong)uVar7 >> 8);
    auVar111._0_9_ = pVar1[6];
    auVar111[10] = (char)((ulong)uVar7 >> 0x10);
    auVar111[0xb] = (char)((ulong)uVar7 >> 0x18);
    auVar111[0xc] = (char)((ulong)uVar7 >> 0x20);
    auVar111[0xd] = (char)((ulong)uVar7 >> 0x28);
    auVar111[0xe] = (char)((ulong)uVar7 >> 0x30);
    auVar111[0xf] = (char)((ulong)uVar7 >> 0x38);
    auVar247 = NEON_aese(auVar114,auVar111);
    auVar111 = NEON_aesmc(auVar247,auVar247);
    bVar86 = auVar111[0] ^ bVar215;
    bVar87 = auVar111[1] ^ bVar216;
    bVar88 = auVar111[2] ^ bVar217;
    bVar89 = auVar111[3] ^ bVar218;
    bVar90 = auVar111[4] ^ bVar219;
    bVar91 = auVar111[5] ^ bVar220;
    bVar92 = auVar111[6] ^ bVar221;
    bVar93 = auVar111[7] ^ bVar222;
    bVar94 = auVar111[8] ^ bVar223;
    bVar95 = auVar111[9] ^ bVar224;
    bVar97 = auVar111[10] ^ bVar225;
    bVar99 = auVar111[0xb] ^ bVar226;
    bVar101 = auVar111[0xc] ^ bVar227;
    bVar103 = auVar111[0xd] ^ bVar228;
    bVar105 = auVar111[0xe] ^ bVar229;
    bVar107 = auVar111[0xf] ^ bVar230;
    auVar247[9] = (char)((ulong)uVar6 >> 8);
    auVar247._0_9_ = pVar1[7];
    auVar247[10] = (char)((ulong)uVar6 >> 0x10);
    auVar247[0xb] = (char)((ulong)uVar6 >> 0x18);
    auVar247[0xc] = (char)((ulong)uVar6 >> 0x20);
    auVar247[0xd] = (char)((ulong)uVar6 >> 0x28);
    auVar247[0xe] = (char)((ulong)uVar6 >> 0x30);
    auVar247[0xf] = (char)((ulong)uVar6 >> 0x38);
    auVar247 = NEON_aese(auVar131,auVar247);
    auVar247 = NEON_aesmc(auVar247,auVar247);
    bVar149 = auVar247[0] ^ bVar231;
    bVar150 = auVar247[1] ^ bVar232;
    bVar151 = auVar247[2] ^ bVar233;
    bVar152 = auVar247[3] ^ bVar234;
    bVar153 = auVar247[4] ^ bVar235;
    bVar154 = auVar247[5] ^ bVar236;
    bVar155 = auVar247[6] ^ bVar237;
    bVar156 = auVar247[7] ^ bVar238;
    bVar157 = auVar247[8] ^ bVar239;
    bVar158 = auVar247[9] ^ bVar240;
    bVar159 = auVar247[10] ^ bVar241;
    bVar160 = auVar247[0xb] ^ bVar242;
    bVar161 = auVar247[0xc] ^ bVar243;
    bVar162 = auVar247[0xd] ^ bVar244;
    bVar163 = auVar247[0xe] ^ bVar245;
    bVar164 = auVar247[0xf] ^ bVar246;
    if (lVar31 == 0x800) break;
    auVar112 = NEON_aese(auVar248,auVar112);
    auVar248 = NEON_aesmc(auVar112,auVar112);
    auVar11[1] = bVar35;
    auVar11[0] = bVar33;
    auVar11[2] = bVar37;
    auVar11[3] = bVar39;
    auVar11[4] = bVar41;
    auVar11[5] = bVar43;
    auVar11[6] = bVar45;
    auVar11[7] = bVar47;
    auVar11[8] = bVar49;
    auVar11[9] = bVar51;
    auVar11[10] = bVar54;
    auVar11[0xb] = bVar57;
    auVar11[0xc] = bVar60;
    auVar11[0xd] = bVar63;
    auVar11[0xe] = bVar66;
    auVar11[0xf] = bVar69;
    auVar112 = NEON_aese(auVar113,auVar11);
    uVar6 = *(undefined8 *)((long)pVar1 + 0x88);
    uVar13 = *(undefined8 *)((long)pVar1 + 0x98);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    auVar27[1] = bVar251;
    auVar27[0] = bVar250;
    auVar27[2] = bVar252;
    auVar27[3] = bVar253;
    auVar27[4] = bVar254;
    auVar27[5] = bVar255;
    auVar27[6] = bVar256;
    auVar27[7] = bVar257;
    auVar27[8] = bVar258;
    auVar27[9] = bVar259;
    auVar27[10] = bVar260;
    auVar27[0xb] = bVar261;
    auVar27[0xc] = bVar262;
    auVar27[0xd] = bVar263;
    auVar27[0xe] = bVar264;
    auVar27[0xf] = bVar265;
    auVar286 = NEON_aese(auVar320,auVar27);
    auVar2[9] = (char)((ulong)uVar6 >> 8);
    auVar2._0_9_ = pVar1[8];
    auVar2[10] = (char)((ulong)uVar6 >> 0x10);
    auVar2[0xb] = (char)((ulong)uVar6 >> 0x18);
    auVar2[0xc] = (char)((ulong)uVar6 >> 0x20);
    auVar2[0xd] = (char)((ulong)uVar6 >> 0x28);
    auVar2[0xe] = (char)((ulong)uVar6 >> 0x30);
    auVar2[0xf] = (char)((ulong)uVar6 >> 0x38);
    auVar113 = NEON_aese(auVar248,auVar2);
    uVar6 = *(undefined8 *)((long)pVar1 + 0xa8);
    uVar14 = *(undefined8 *)((long)pVar1 + 0xb8);
    auVar3[9] = (char)((ulong)uVar6 >> 8);
    auVar3._0_9_ = pVar1[10];
    auVar3[10] = (char)((ulong)uVar6 >> 0x10);
    auVar3[0xb] = (char)((ulong)uVar6 >> 0x18);
    auVar3[0xc] = (char)((ulong)uVar6 >> 0x20);
    auVar3[0xd] = (char)((ulong)uVar6 >> 0x28);
    auVar3[0xe] = (char)((ulong)uVar6 >> 0x30);
    auVar3[0xf] = (char)((ulong)uVar6 >> 0x38);
    auVar112 = NEON_aese(auVar112,auVar3);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    auVar108._0_8_ =
         CONCAT17(auVar112[7] ^ (byte)((ulong)uVar181 >> 0x38),
                  CONCAT16(auVar112[6] ^ (byte)((ulong)uVar181 >> 0x30),
                           CONCAT15(auVar112[5] ^ (byte)((ulong)uVar181 >> 0x28),
                                    CONCAT14(auVar112[4] ^ (byte)((ulong)uVar181 >> 0x20),
                                             CONCAT13(auVar112[3] ^ (byte)((ulong)uVar181 >> 0x18),
                                                      CONCAT12(auVar112[2] ^
                                                               (byte)((ulong)uVar181 >> 0x10),
                                                               CONCAT11(auVar112[1] ^
                                                                        (byte)((ulong)uVar181 >> 8),
                                                                        auVar112[0] ^ (byte)uVar181)
                                                              ))))));
    auVar108[8] = auVar112[8] ^ (byte)uVar182;
    auVar108[9] = auVar112[9] ^ (byte)((ulong)uVar182 >> 8);
    auVar108[10] = auVar112[10] ^ (byte)((ulong)uVar182 >> 0x10);
    auVar108[0xb] = auVar112[0xb] ^ (byte)((ulong)uVar182 >> 0x18);
    auVar108[0xc] = auVar112[0xc] ^ (byte)((ulong)uVar182 >> 0x20);
    auVar108[0xd] = auVar112[0xd] ^ (byte)((ulong)uVar182 >> 0x28);
    auVar108[0xe] = auVar112[0xe] ^ (byte)((ulong)uVar182 >> 0x30);
    auVar108[0xf] = auVar112[0xf] ^ (byte)((ulong)uVar182 >> 0x38);
    uVar6 = *(undefined8 *)((long)pVar1 + 0xf8);
    auVar112 = NEON_aesmc(auVar286,auVar286);
    auVar4[9] = (char)((ulong)uVar6 >> 8);
    auVar4._0_9_ = pVar1[0xf];
    auVar4[10] = (char)((ulong)uVar6 >> 0x10);
    auVar4[0xb] = (char)((ulong)uVar6 >> 0x18);
    auVar4[0xc] = (char)((ulong)uVar6 >> 0x20);
    auVar4[0xd] = (char)((ulong)uVar6 >> 0x28);
    auVar4[0xe] = (char)((ulong)uVar6 >> 0x30);
    auVar4[0xf] = (char)((ulong)uVar6 >> 0x38);
    auVar248 = NEON_aese(auVar112,auVar4);
    auVar24[1] = bVar232;
    auVar24[0] = bVar231;
    auVar24[2] = bVar233;
    auVar24[3] = bVar234;
    auVar24[4] = bVar235;
    auVar24[5] = bVar236;
    auVar24[6] = bVar237;
    auVar24[7] = bVar238;
    auVar24[8] = bVar239;
    auVar24[9] = bVar240;
    auVar24[10] = bVar241;
    auVar24[0xb] = bVar242;
    auVar24[0xc] = bVar243;
    auVar24[0xd] = bVar244;
    auVar24[0xe] = bVar245;
    auVar24[0xf] = bVar246;
    auVar112 = NEON_aese(auVar247,auVar24);
    auVar247 = NEON_aesmc(auVar112,auVar112);
    auVar112 = NEON_aesmc(auVar113,auVar113);
    auVar113 = NEON_aesmc(auVar248,auVar248);
    uVar181 = CONCAT17(auVar113[7] ^ (byte)((ulong)uVar213 >> 0x38),
                       CONCAT16(auVar113[6] ^ (byte)((ulong)uVar213 >> 0x30),
                                CONCAT15(auVar113[5] ^ (byte)((ulong)uVar213 >> 0x28),
                                         CONCAT14(auVar113[4] ^ (byte)((ulong)uVar213 >> 0x20),
                                                  CONCAT13(auVar113[3] ^
                                                           (byte)((ulong)uVar213 >> 0x18),
                                                           CONCAT12(auVar113[2] ^
                                                                    (byte)((ulong)uVar213 >> 0x10),
                                                                    CONCAT11(auVar113[1] ^
                                                                             (byte)((ulong)uVar213
                                                                                   >> 8),
                                                                             auVar113[0] ^
                                                                             (byte)uVar213)))))));
    uVar182 = CONCAT17(auVar113[0xf] ^ (byte)((ulong)uVar214 >> 0x38),
                       CONCAT16(auVar113[0xe] ^ (byte)((ulong)uVar214 >> 0x30),
                                CONCAT15(auVar113[0xd] ^ (byte)((ulong)uVar214 >> 0x28),
                                         CONCAT14(auVar113[0xc] ^ (byte)((ulong)uVar214 >> 0x20),
                                                  CONCAT13(auVar113[0xb] ^
                                                           (byte)((ulong)uVar214 >> 0x18),
                                                           CONCAT12(auVar113[10] ^
                                                                    (byte)((ulong)uVar214 >> 0x10),
                                                                    CONCAT11(auVar113[9] ^
                                                                             (byte)((ulong)uVar214
                                                                                   >> 8),
                                                                             auVar113[8] ^
                                                                             (byte)uVar214)))))));
    uVar213 = CONCAT17(auVar112[7] ^ bVar77,
                       CONCAT16(auVar112[6] ^ bVar76,
                                CONCAT15(auVar112[5] ^ bVar75,
                                         CONCAT14(auVar112[4] ^ bVar74,
                                                  CONCAT13(auVar112[3] ^ bVar73,
                                                           CONCAT12(auVar112[2] ^ bVar72,
                                                                    CONCAT11(auVar112[1] ^ bVar71,
                                                                             auVar112[0] ^ bVar70)))
                                                 ))));
    uVar214 = CONCAT17(auVar112[0xf] ^ bVar85,
                       CONCAT16(auVar112[0xe] ^ bVar84,
                                CONCAT15(auVar112[0xd] ^ bVar83,
                                         CONCAT14(auVar112[0xc] ^ bVar82,
                                                  CONCAT13(auVar112[0xb] ^ bVar81,
                                                           CONCAT12(auVar112[10] ^ bVar80,
                                                                    CONCAT11(auVar112[9] ^ bVar79,
                                                                             auVar112[8] ^ bVar78)))
                                                 ))));
    uVar6 = *(undefined8 *)((long)pVar1 + 200);
    uVar7 = *(undefined8 *)((long)pVar1 + 0xd8);
    auVar5[9] = (char)((ulong)uVar6 >> 8);
    auVar5._0_9_ = pVar1[0xc];
    auVar5[10] = (char)((ulong)uVar6 >> 0x10);
    auVar5[0xb] = (char)((ulong)uVar6 >> 0x18);
    auVar5[0xc] = (char)((ulong)uVar6 >> 0x20);
    auVar5[0xd] = (char)((ulong)uVar6 >> 0x28);
    auVar5[0xe] = (char)((ulong)uVar6 >> 0x30);
    auVar5[0xf] = (char)((ulong)uVar6 >> 0x38);
    auVar112 = NEON_aese(auVar247,auVar5);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    bVar33 = auVar112[0] ^ bVar183;
    bVar35 = auVar112[1] ^ bVar185;
    bVar37 = auVar112[2] ^ bVar187;
    bVar39 = auVar112[3] ^ bVar189;
    bVar41 = auVar112[4] ^ bVar191;
    bVar43 = auVar112[5] ^ bVar193;
    bVar45 = auVar112[6] ^ bVar195;
    bVar47 = auVar112[7] ^ bVar197;
    bVar49 = auVar112[8] ^ bVar198;
    bVar51 = auVar112[9] ^ bVar200;
    bVar54 = auVar112[10] ^ bVar202;
    bVar57 = auVar112[0xb] ^ bVar204;
    bVar60 = auVar112[0xc] ^ bVar206;
    bVar63 = auVar112[0xd] ^ bVar208;
    bVar66 = auVar112[0xe] ^ bVar210;
    bVar69 = auVar112[0xf] ^ bVar212;
    auVar18[8] = bStack_58;
    auVar18._0_8_ = uStack_60;
    auVar18[9] = (byte)uStack_57;
    auVar18[10] = bVar53;
    auVar18[0xb] = bVar56;
    auVar18[0xc] = bVar59;
    auVar18[0xd] = bVar62;
    auVar18[0xe] = bVar65;
    auVar18[0xf] = bVar68;
    auVar112 = NEON_aese(auVar284,auVar18);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    auVar28[9] = (char)((ulong)uVar14 >> 8);
    auVar28._0_9_ = pVar1[0xb];
    auVar28[10] = (char)((ulong)uVar14 >> 0x10);
    auVar28[0xb] = (char)((ulong)uVar14 >> 0x18);
    auVar28[0xc] = (char)((ulong)uVar14 >> 0x20);
    auVar28[0xd] = (char)((ulong)uVar14 >> 0x28);
    auVar28[0xe] = (char)((ulong)uVar14 >> 0x30);
    auVar28[0xf] = (char)((ulong)uVar14 >> 0x38);
    auVar112 = NEON_aese(auVar112,auVar28);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    bVar183 = auVar112[0] ^ (byte)uVar109;
    bVar185 = auVar112[1] ^ (byte)((ulong)uVar109 >> 8);
    bVar187 = auVar112[2] ^ (byte)((ulong)uVar109 >> 0x10);
    bVar189 = auVar112[3] ^ (byte)((ulong)uVar109 >> 0x18);
    bVar191 = auVar112[4] ^ (byte)((ulong)uVar109 >> 0x20);
    bVar193 = auVar112[5] ^ (byte)((ulong)uVar109 >> 0x28);
    bVar195 = auVar112[6] ^ (byte)((ulong)uVar109 >> 0x30);
    bVar197 = auVar112[7] ^ (byte)((ulong)uVar109 >> 0x38);
    bVar198 = auVar112[8] ^ (byte)uVar110;
    bVar200 = auVar112[9] ^ (byte)((ulong)uVar110 >> 8);
    bVar202 = auVar112[10] ^ (byte)((ulong)uVar110 >> 0x10);
    bVar204 = auVar112[0xb] ^ (byte)((ulong)uVar110 >> 0x18);
    bVar206 = auVar112[0xc] ^ (byte)((ulong)uVar110 >> 0x20);
    bVar208 = auVar112[0xd] ^ (byte)((ulong)uVar110 >> 0x28);
    bVar210 = auVar112[0xe] ^ (byte)((ulong)uVar110 >> 0x30);
    bVar212 = auVar112[0xf] ^ (byte)((ulong)uVar110 >> 0x38);
    auVar21[1] = bVar216;
    auVar21[0] = bVar215;
    auVar21[2] = bVar217;
    auVar21[3] = bVar218;
    auVar21[4] = bVar219;
    auVar21[5] = bVar220;
    auVar21[6] = bVar221;
    auVar21[7] = bVar222;
    auVar21[8] = bVar223;
    auVar21[9] = bVar224;
    auVar21[10] = bVar225;
    auVar21[0xb] = bVar226;
    auVar21[0xc] = bVar227;
    auVar21[0xd] = bVar228;
    auVar21[0xe] = bVar229;
    auVar21[0xf] = bVar230;
    auVar112 = NEON_aese(auVar111,auVar21);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    auVar12[9] = (char)((ulong)uVar13 >> 8);
    auVar12._0_9_ = pVar1[9];
    auVar12[10] = (char)((ulong)uVar13 >> 0x10);
    auVar12[0xb] = (char)((ulong)uVar13 >> 0x18);
    auVar12[0xc] = (char)((ulong)uVar13 >> 0x20);
    auVar12[0xd] = (char)((ulong)uVar13 >> 0x28);
    auVar12[0xe] = (char)((ulong)uVar13 >> 0x30);
    auVar12[0xf] = (char)((ulong)uVar13 >> 0x38);
    auVar112 = NEON_aese(auVar112,auVar12);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    uVar109 = CONCAT17(auVar112[7] ^ auVar321[7],
                       CONCAT16(auVar112[6] ^ auVar321[6],
                                CONCAT15(auVar112[5] ^ auVar321[5],
                                         CONCAT14(auVar112[4] ^ auVar321[4],
                                                  CONCAT13(auVar112[3] ^ auVar321[3],
                                                           CONCAT12(auVar112[2] ^ auVar321[2],
                                                                    CONCAT11(auVar112[1] ^
                                                                             auVar321[1],
                                                                             auVar112[0] ^
                                                                             auVar321[0])))))));
    uVar110 = CONCAT17(auVar112[0xf] ^ auVar321[0xf],
                       CONCAT16(auVar112[0xe] ^ auVar321[0xe],
                                CONCAT15(auVar112[0xd] ^ auVar321[0xd],
                                         CONCAT14(auVar112[0xc] ^ auVar321[0xc],
                                                  CONCAT13(auVar112[0xb] ^ auVar321[0xb],
                                                           CONCAT12(auVar112[10] ^ auVar321[10],
                                                                    CONCAT11(auVar112[9] ^
                                                                             auVar321[9],
                                                                             auVar112[8] ^
                                                                             auVar321[8])))))));
    auVar15[1] = bVar166;
    auVar15[0] = bVar165;
    auVar15[2] = bVar167;
    auVar15[3] = bVar168;
    auVar15[4] = bVar169;
    auVar15[5] = bVar170;
    auVar15[6] = bVar171;
    auVar15[7] = bVar172;
    auVar15[8] = bVar173;
    auVar15[9] = bVar174;
    auVar15[10] = bVar175;
    auVar15[0xb] = bVar176;
    auVar15[0xc] = bVar177;
    auVar15[0xd] = bVar178;
    auVar15[0xe] = bVar179;
    auVar15[0xf] = bVar180;
    auVar112 = NEON_aese(auVar283,auVar15);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    auVar10[9] = (char)((ulong)uVar7 >> 8);
    auVar10._0_9_ = pVar1[0xd];
    auVar10[10] = (char)((ulong)uVar7 >> 0x10);
    auVar10[0xb] = (char)((ulong)uVar7 >> 0x18);
    auVar10[0xc] = (char)((ulong)uVar7 >> 0x20);
    auVar10[0xd] = (char)((ulong)uVar7 >> 0x28);
    auVar10[0xe] = (char)((ulong)uVar7 >> 0x30);
    auVar10[0xf] = (char)((ulong)uVar7 >> 0x38);
    auVar112 = NEON_aese(auVar112,auVar10);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    auVar321[0] = auVar112[0] ^ bVar32;
    auVar321[1] = auVar112[1] ^ bVar34;
    auVar321[2] = auVar112[2] ^ bVar36;
    auVar321[3] = auVar112[3] ^ bVar38;
    auVar321[4] = auVar112[4] ^ bVar40;
    auVar321[5] = auVar112[5] ^ bVar42;
    auVar321[6] = auVar112[6] ^ bVar44;
    auVar321[7] = auVar112[7] ^ bVar46;
    auVar321[8] = auVar112[8] ^ bVar48;
    auVar321[9] = auVar112[9] ^ bVar50;
    auVar321[10] = auVar112[10] ^ bVar52;
    auVar321[0xb] = auVar112[0xb] ^ bVar55;
    auVar321[0xc] = auVar112[0xc] ^ bVar58;
    auVar321[0xd] = auVar112[0xd] ^ bVar61;
    auVar321[0xe] = auVar112[0xe] ^ bVar64;
    auVar321[0xf] = auVar112[0xf] ^ bVar67;
    auVar8[8] = bStack_48;
    auVar8._0_8_ = uStack_50;
    auVar8[9] = (byte)uStack_47;
    auVar8[10] = bVar96;
    auVar8[0xb] = bVar98;
    auVar8[0xc] = bVar100;
    auVar8[0xd] = bVar102;
    auVar8[0xe] = bVar104;
    auVar8[0xf] = bVar106;
    auVar112 = NEON_aese(auVar249,auVar8);
    uVar6 = *(undefined8 *)((long)pVar1 + 0xe8);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    auVar9[9] = (char)((ulong)uVar6 >> 8);
    auVar9._0_9_ = pVar1[0xe];
    auVar9[10] = (char)((ulong)uVar6 >> 0x10);
    auVar9[0xb] = (char)((ulong)uVar6 >> 0x18);
    auVar9[0xc] = (char)((ulong)uVar6 >> 0x20);
    auVar9[0xd] = (char)((ulong)uVar6 >> 0x28);
    auVar9[0xe] = (char)((ulong)uVar6 >> 0x30);
    auVar9[0xf] = (char)((ulong)uVar6 >> 0x38);
    auVar112 = NEON_aese(auVar112,auVar9);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    bVar70 = auVar112[0] ^ auVar132[0];
    bVar71 = auVar112[1] ^ auVar132[1];
    bVar72 = auVar112[2] ^ auVar132[2];
    bVar73 = auVar112[3] ^ auVar132[3];
    bVar74 = auVar112[4] ^ auVar132[4];
    bVar75 = auVar112[5] ^ auVar132[5];
    bVar76 = auVar112[6] ^ auVar132[6];
    bVar77 = auVar112[7] ^ auVar132[7];
    bVar78 = auVar112[8] ^ auVar132[8];
    bVar79 = auVar112[9] ^ auVar132[9];
    bVar80 = auVar112[10] ^ auVar132[10];
    bVar81 = auVar112[0xb] ^ auVar132[0xb];
    bVar82 = auVar112[0xc] ^ auVar132[0xc];
    bVar83 = auVar112[0xd] ^ auVar132[0xd];
    bVar84 = auVar112[0xe] ^ auVar132[0xe];
    bVar85 = auVar112[0xf] ^ auVar132[0xf];
    lVar31 = lVar31 + 0x100;
    uStack_57 = (undefined7)
                (CONCAT17(bVar148,CONCAT16(bVar147,CONCAT15(bVar146,CONCAT14(bVar145,CONCAT13(
                                                  bVar144,CONCAT12(bVar143,CONCAT11(bVar142,bVar141)
                                                                  )))))) >> 8);
    uStack_60 = CONCAT17(bVar140,CONCAT16(bVar139,CONCAT15(bVar138,CONCAT14(bVar137,CONCAT13(bVar136
                                                  ,CONCAT12(bVar135,CONCAT11(bVar134,bVar133)))))));
    uStack_47 = (undefined7)
                (CONCAT17(bVar107,CONCAT16(bVar105,CONCAT15(bVar103,CONCAT14(bVar101,CONCAT13(bVar99
                                                  ,CONCAT12(bVar97,CONCAT11(bVar95,bVar94))))))) >>
                8);
    uStack_50 = CONCAT17(bVar93,CONCAT16(bVar92,CONCAT15(bVar91,CONCAT14(bVar90,CONCAT13(bVar89,
                                                  CONCAT12(bVar88,CONCAT11(bVar87,bVar86)))))));
    auVar112[1] = bVar323;
    auVar112[0] = bVar322;
    auVar112[2] = bVar324;
    auVar112[3] = bVar325;
    auVar112[4] = bVar326;
    auVar112[5] = bVar327;
    auVar112[6] = bVar328;
    auVar112[7] = bVar329;
    auVar112[8] = bVar330;
    auVar112[9] = bVar331;
    auVar112[10] = bVar332;
    auVar112[0xb] = bVar333;
    auVar112[0xc] = bVar334;
    auVar112[0xd] = bVar335;
    auVar112[0xe] = bVar336;
    auVar112[0xf] = bVar337;
    auVar132._8_8_ = auVar108._8_8_;
    auVar132._0_8_ = auVar108._0_8_;
    bVar32 = bVar33;
    bVar34 = bVar35;
    bVar36 = bVar37;
    bVar38 = bVar39;
    bVar40 = bVar41;
    bVar42 = bVar43;
    bVar44 = bVar45;
    bVar46 = bVar47;
    bVar48 = bVar49;
    bVar50 = bVar51;
    bVar52 = bVar54;
    bVar55 = bVar57;
    bVar58 = bVar60;
    bVar61 = bVar63;
    bVar64 = bVar66;
    bVar67 = bVar69;
    bVar33 = bVar115;
    bVar35 = bVar116;
    bVar37 = bVar117;
    bVar39 = bVar118;
    bVar41 = bVar119;
    bVar43 = bVar120;
    bVar45 = bVar121;
    bVar47 = bVar122;
    bVar49 = bVar123;
    bVar51 = bVar124;
    bVar54 = bVar125;
    bVar57 = bVar126;
    bVar60 = bVar127;
    bVar63 = bVar128;
    bVar66 = bVar129;
    bVar69 = bVar130;
    bVar165 = bVar303;
    bVar166 = bVar304;
    bVar167 = bVar305;
    bVar168 = bVar306;
    bVar169 = bVar307;
    bVar170 = bVar308;
    bVar171 = bVar309;
    bVar172 = bVar310;
    bVar173 = bVar311;
    bVar174 = bVar312;
    bVar175 = bVar313;
    bVar176 = bVar314;
    bVar177 = bVar315;
    bVar178 = bVar316;
    bVar179 = bVar317;
    bVar180 = bVar318;
    bVar215 = bVar287;
    bVar216 = bVar288;
    bVar217 = bVar289;
    bVar218 = bVar290;
    bVar219 = bVar291;
    bVar220 = bVar292;
    bVar221 = bVar293;
    bVar222 = bVar294;
    bVar223 = bVar295;
    bVar224 = bVar296;
    bVar225 = bVar297;
    bVar226 = bVar298;
    bVar227 = bVar299;
    bVar228 = bVar300;
    bVar229 = bVar301;
    bVar230 = bVar302;
    bVar231 = bVar266;
    bVar232 = bVar267;
    bVar233 = bVar268;
    bVar234 = bVar269;
    bVar235 = bVar270;
    bVar236 = bVar271;
    bVar237 = bVar272;
    bVar238 = bVar273;
    bVar239 = bVar274;
    bVar240 = bVar275;
    bVar241 = bVar276;
    bVar242 = bVar277;
    bVar243 = bVar278;
    bVar244 = bVar279;
    bVar245 = bVar280;
    bVar246 = bVar281;
    bVar250 = bVar149;
    bVar251 = bVar150;
    bVar252 = bVar151;
    bVar253 = bVar152;
    bVar254 = bVar153;
    bVar255 = bVar154;
    bVar256 = bVar155;
    bVar257 = bVar156;
    bVar258 = bVar157;
    bVar259 = bVar158;
    bVar260 = bVar159;
    bVar261 = bVar160;
    bVar262 = bVar161;
    bVar263 = bVar162;
    bVar264 = bVar163;
    bVar265 = bVar164;
    bStack_58 = bVar141;
    bStack_48 = bVar94;
  }
  param_2[5] = CONCAT17(bVar107,CONCAT16(bVar105,CONCAT15(bVar103,CONCAT14(bVar101,CONCAT13(bVar99,
                                                  CONCAT12(bVar97,CONCAT11(bVar95,bVar94)))))));
  param_2[4] = CONCAT17(bVar93,CONCAT16(bVar92,CONCAT15(bVar91,CONCAT14(bVar90,CONCAT13(bVar89,
                                                  CONCAT12(bVar88,CONCAT11(bVar87,bVar86)))))));
  param_2[7] = auVar321._8_8_;
  param_2[6] = auVar321._0_8_;
  param_2[9] = CONCAT17(bVar148,CONCAT16(bVar147,CONCAT15(bVar146,CONCAT14(bVar145,CONCAT13(bVar144,
                                                  CONCAT12(bVar143,CONCAT11(bVar142,bVar141)))))));
  param_2[8] = CONCAT17(bVar140,CONCAT16(bVar139,CONCAT15(bVar138,CONCAT14(bVar137,CONCAT13(bVar136,
                                                  CONCAT12(bVar135,CONCAT11(bVar134,bVar133)))))));
  param_2[0xb] = uVar182;
  param_2[10] = uVar181;
  *(byte *)(param_2 + 0xc) = bVar322;
  *(byte *)((long)param_2 + 0x61) = bVar323;
  *(byte *)((long)param_2 + 0x62) = bVar324;
  *(byte *)((long)param_2 + 99) = bVar325;
  *(byte *)((long)param_2 + 100) = bVar326;
  *(byte *)((long)param_2 + 0x65) = bVar327;
  *(byte *)((long)param_2 + 0x66) = bVar328;
  *(byte *)((long)param_2 + 0x67) = bVar329;
  *(byte *)(param_2 + 0xd) = bVar330;
  *(byte *)((long)param_2 + 0x69) = bVar331;
  *(byte *)((long)param_2 + 0x6a) = bVar332;
  *(byte *)((long)param_2 + 0x6b) = bVar333;
  *(byte *)((long)param_2 + 0x6c) = bVar334;
  *(byte *)((long)param_2 + 0x6d) = bVar335;
  *(byte *)((long)param_2 + 0x6e) = bVar336;
  *(byte *)((long)param_2 + 0x6f) = bVar337;
  param_2[0xf] = uVar110;
  param_2[0xe] = uVar109;
  param_2[0x11] =
       CONCAT17(bVar164,CONCAT16(bVar163,CONCAT15(bVar162,CONCAT14(bVar161,CONCAT13(bVar160,CONCAT12
                                                  (bVar159,CONCAT11(bVar158,bVar157)))))));
  param_2[0x10] =
       CONCAT17(bVar156,CONCAT16(bVar155,CONCAT15(bVar154,CONCAT14(bVar153,CONCAT13(bVar152,CONCAT12
                                                  (bVar151,CONCAT11(bVar150,bVar149)))))));
  param_2[0x13] =
       CONCAT17(bVar212,CONCAT16(bVar210,CONCAT15(bVar208,CONCAT14(bVar206,CONCAT13(bVar204,CONCAT12
                                                  (bVar202,CONCAT11(bVar200,bVar198)))))));
  param_2[0x12] =
       CONCAT17(bVar197,CONCAT16(bVar195,CONCAT15(bVar193,CONCAT14(bVar191,CONCAT13(bVar189,CONCAT12
                                                  (bVar187,CONCAT11(bVar185,bVar183)))))));
  param_2[0x15] =
       CONCAT17(bVar130,CONCAT16(bVar129,CONCAT15(bVar128,CONCAT14(bVar127,CONCAT13(bVar126,CONCAT12
                                                  (bVar125,CONCAT11(bVar124,bVar123)))))));
  param_2[0x14] =
       CONCAT17(bVar122,CONCAT16(bVar121,CONCAT15(bVar120,CONCAT14(bVar119,CONCAT13(bVar118,CONCAT12
                                                  (bVar117,CONCAT11(bVar116,bVar115)))))));
  param_2[0x17] =
       CONCAT17(bVar67,CONCAT16(bVar64,CONCAT15(bVar61,CONCAT14(bVar58,CONCAT13(bVar55,CONCAT12(
                                                  bVar52,CONCAT11(bVar50,bVar48)))))));
  param_2[0x16] =
       CONCAT17(bVar46,CONCAT16(bVar44,CONCAT15(bVar42,CONCAT14(bVar40,CONCAT13(bVar38,CONCAT12(
                                                  bVar36,CONCAT11(bVar34,bVar32)))))));
  param_2[0x19] =
       CONCAT17(bVar281,CONCAT16(bVar280,CONCAT15(bVar279,CONCAT14(bVar278,CONCAT13(bVar277,CONCAT12
                                                  (bVar276,CONCAT11(bVar275,bVar274)))))));
  param_2[0x18] =
       CONCAT17(bVar273,CONCAT16(bVar272,CONCAT15(bVar271,CONCAT14(bVar270,CONCAT13(bVar269,CONCAT12
                                                  (bVar268,CONCAT11(bVar267,bVar266)))))));
  param_2[0x1b] = auVar132._8_8_;
  param_2[0x1a] = auVar132._0_8_;
  param_2[0x1d] =
       CONCAT17(bVar302,CONCAT16(bVar301,CONCAT15(bVar300,CONCAT14(bVar299,CONCAT13(bVar298,CONCAT12
                                                  (bVar297,CONCAT11(bVar296,bVar295)))))));
  param_2[0x1c] =
       CONCAT17(bVar294,CONCAT16(bVar293,CONCAT15(bVar292,CONCAT14(bVar291,CONCAT13(bVar290,CONCAT12
                                                  (bVar289,CONCAT11(bVar288,bVar287)))))));
  param_2[0x1f] = uVar214;
  param_2[0x1e] = uVar213;
  param_2[1] = CONCAT17(bVar318 ^ bVar211,
                        CONCAT16(bVar317 ^ bVar209,
                                 CONCAT15(bVar316 ^ bVar207,
                                          CONCAT14(bVar315 ^ bVar205,
                                                   CONCAT13(bVar314 ^ bVar203,
                                                            CONCAT12(bVar313 ^ bVar201,
                                                                     CONCAT11(bVar312 ^ bVar199,
                                                                              bVar311 ^ (byte)uVar20
                                                                             )))))));
  *param_2 = CONCAT17(bVar310 ^ bVar196,
                      CONCAT16(bVar309 ^ bVar194,
                               CONCAT15(bVar308 ^ bVar192,
                                        CONCAT14(bVar307 ^ bVar190,
                                                 CONCAT13(bVar306 ^ bVar188,
                                                          CONCAT12(bVar305 ^ bVar186,
                                                                   CONCAT11(bVar304 ^ bVar184,
                                                                            bVar303 ^ (byte)uVar19))
                                                         )))));
  param_2[3] = CONCAT17(bVar85,CONCAT16(bVar84,CONCAT15(bVar83,CONCAT14(bVar82,CONCAT13(bVar81,
                                                  CONCAT12(bVar80,CONCAT11(bVar79,bVar78)))))));
  param_2[2] = CONCAT17(bVar77,CONCAT16(bVar76,CONCAT15(bVar75,CONCAT14(bVar74,CONCAT13(bVar73,
                                                  CONCAT12(bVar72,CONCAT11(bVar71,bVar70)))))));
  return;
}



/* Entry: 1004c0458; end: 1004c052f;  */

void FUN_1004c0458(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(ulong *)(param_2 + 0x18) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar4)))))
                        ));
  *(ulong *)(param_2 + 0x10) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar3 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar3 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar3 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar3 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar3)))))
                        ));
  uVar2 = param_1[3];
  uVar1 = param_1[2];
  *(ulong *)(param_2 + 0x28) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar6 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar6 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar6 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar6 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar6)))))
                        ));
  *(ulong *)(param_2 + 0x20) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar5)))))
                        ));
  uVar2 = param_1[5];
  uVar1 = param_1[4];
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  *(ulong *)(param_2 + 0x38) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar4)))))
                        ));
  *(ulong *)(param_2 + 0x30) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar3 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar3 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar3 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar3 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar3)))))
                        ));
  uVar2 = param_1[7];
  uVar1 = param_1[6];
  *(ulong *)(param_2 + 0x48) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar6 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar6 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar6 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar6 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar6)))))
                        ));
  *(ulong *)(param_2 + 0x40) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar5)))))
                        ));
  uVar2 = param_1[9];
  uVar1 = param_1[8];
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  *(ulong *)(param_2 + 0x58) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar4)))))
                        ));
  *(ulong *)(param_2 + 0x50) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar3 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar3 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar3 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar3 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar3)))))
                        ));
  uVar2 = param_1[0xb];
  uVar1 = param_1[10];
  *(ulong *)(param_2 + 0x68) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar6 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar6 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar6 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar6 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar6)))))
                        ));
  *(ulong *)(param_2 + 0x60) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar5)))))
                        ));
  uVar2 = param_1[0xd];
  uVar1 = param_1[0xc];
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  uVar5 = *(undefined8 *)(param_2 + 0x80);
  *(ulong *)(param_2 + 0x78) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar4)))))
                        ));
  *(ulong *)(param_2 + 0x70) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar3 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar3 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar3 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar3 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar3)))))
                        ));
  uVar2 = param_1[0xf];
  uVar1 = param_1[0xe];
  *(ulong *)(param_2 + 0x88) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar6 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar6 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar6 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar6 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar6)))))
                        ));
  *(ulong *)(param_2 + 0x80) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar5)))))
                        ));
  uVar2 = param_1[0x11];
  uVar1 = param_1[0x10];
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  uVar5 = *(undefined8 *)(param_2 + 0xa0);
  *(ulong *)(param_2 + 0x98) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar4)))))
                        ));
  *(ulong *)(param_2 + 0x90) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar3 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar3 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar3 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar3 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar3)))))
                        ));
  uVar2 = param_1[0x13];
  uVar1 = param_1[0x12];
  *(ulong *)(param_2 + 0xa8) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar6 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar6 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar6 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar6 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar6)))))
                        ));
  *(ulong *)(param_2 + 0xa0) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar5)))))
                        ));
  uVar2 = param_1[0x15];
  uVar1 = param_1[0x14];
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  uVar3 = *(undefined8 *)(param_2 + 0xb0);
  uVar6 = *(undefined8 *)(param_2 + 200);
  uVar5 = *(undefined8 *)(param_2 + 0xc0);
  *(ulong *)(param_2 + 0xb8) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar4)))))
                        ));
  *(ulong *)(param_2 + 0xb0) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar3 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar3 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar3 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar3 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar3)))))
                        ));
  uVar2 = param_1[0x17];
  uVar1 = param_1[0x16];
  *(ulong *)(param_2 + 200) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar6 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar6 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar6 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar6 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar6)))))
                        ));
  *(ulong *)(param_2 + 0xc0) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar5)))))
                        ));
  uVar2 = param_1[0x19];
  uVar1 = param_1[0x18];
  uVar4 = *(undefined8 *)(param_2 + 0xd8);
  uVar3 = *(undefined8 *)(param_2 + 0xd0);
  uVar6 = *(undefined8 *)(param_2 + 0xe8);
  uVar5 = *(undefined8 *)(param_2 + 0xe0);
  *(ulong *)(param_2 + 0xd8) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar4)))))
                        ));
  *(ulong *)(param_2 + 0xd0) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar3 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar3 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar3 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar3 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar3)))))
                        ));
  uVar2 = param_1[0x1b];
  uVar1 = param_1[0x1a];
  *(ulong *)(param_2 + 0xe8) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar6 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar6 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar6 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar6 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar6)))))
                        ));
  *(ulong *)(param_2 + 0xe0) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar5)))))
                        ));
  uVar2 = *(undefined8 *)(param_2 + 0xf8);
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  uVar4 = param_1[0x1d];
  uVar3 = param_1[0x1c];
  *(ulong *)(param_2 + 0xf8) =
       CONCAT17((byte)((ulong)uVar4 >> 0x38) ^ (byte)((ulong)uVar2 >> 0x38),
                CONCAT16((byte)((ulong)uVar4 >> 0x30) ^ (byte)((ulong)uVar2 >> 0x30),
                         CONCAT15((byte)((ulong)uVar4 >> 0x28) ^ (byte)((ulong)uVar2 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar4 >> 0x20) ^
                                           (byte)((ulong)uVar2 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar4 >> 0x18) ^
                                                    (byte)((ulong)uVar2 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar4 >> 0x10) ^
                                                             (byte)((ulong)uVar2 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar4 >> 8) ^
                                                                      (byte)((ulong)uVar2 >> 8),
                                                                      (byte)uVar4 ^ (byte)uVar2)))))
                        ));
  *(ulong *)(param_2 + 0xf0) =
       CONCAT17((byte)((ulong)uVar3 >> 0x38) ^ (byte)((ulong)uVar1 >> 0x38),
                CONCAT16((byte)((ulong)uVar3 >> 0x30) ^ (byte)((ulong)uVar1 >> 0x30),
                         CONCAT15((byte)((ulong)uVar3 >> 0x28) ^ (byte)((ulong)uVar1 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar3 >> 0x20) ^
                                           (byte)((ulong)uVar1 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar3 >> 0x18) ^
                                                    (byte)((ulong)uVar1 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar3 >> 0x10) ^
                                                             (byte)((ulong)uVar1 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar3 >> 8) ^
                                                                      (byte)((ulong)uVar1 >> 8),
                                                                      (byte)uVar3 ^ (byte)uVar1)))))
                        ));
  return;
}



/* Entry: 1004c0530; end: 1004c062b;  */

undefined8 * FUN_1004c0530(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  plVar1 = (long *)param_1[0x16];
  param_1[0x16] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x0001004c05d4(param_1 + 0x14);
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    func_0x000107c60e14(param_1[0xf]);
  }
  puStack_28 = param_1 + 0xc;
  FUN_10047c710(&puStack_28);
  FUN_10047c794(param_1 + 9,param_1[10]);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    func_0x000107c60e14(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    func_0x000107c60e14(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  return param_1;
}



/* Entry: 1004c062c; end: 1004c0917;  */

void FUN_1004c062c(long param_1,long **param_2,long **param_3,undefined8 param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  long **pplVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plStack_90;
  long *aplStack_88 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((int)param_2 == 4) || (*param_5 == 0)) {
    plVar3 = *(long **)(param_1 + 0x180);
    if (plVar3 != (long *)0x0) {
      plVar5 = plVar3 + 1;
      do {
        lVar9 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    *(undefined8 *)(param_1 + 0x180) = 0;
    plVar3 = *(long **)(param_1 + 0x188);
    if (plVar3 != (long *)0x0) {
      plVar5 = plVar3 + 1;
      do {
        lVar9 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    *(undefined8 *)(param_1 + 0x188) = 0;
    FUN_100460448(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0xc0) = 0;
    plVar3 = *(long **)(param_1 + 200);
    plVar5 = *(long **)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    plVar12 = *(long **)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    func_0x000100466b80(param_1 + 0x70);
    if (plVar12 != (long *)0x0) {
      plVar11 = plVar12 + 1;
      do {
        lVar9 = *plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
    if (plVar5 != (long *)0x0) {
      plVar12 = plVar5 + 1;
      do {
        lVar9 = *plVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *plVar12 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
    if (plVar3 != (long *)0x0) {
      plVar5 = plVar3 + 1;
      do {
        lVar9 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  pplVar7 = param_2;
  FUN_1004c0918(param_1 + 0x140,param_2,param_3,param_4);
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_1004c0a14(*(long *)(param_1 + 0x58),param_2);
    lVar9 = *(long *)(param_1 + 0x58);
    FUN_1004c0a24(param_2);
    FUN_10047e7b4(aplStack_88);
    param_3 = aplStack_88;
    pplVar7 = (long **)0x1;
    FUN_10047e7e4(lVar9 + 0x70);
  }
  plVar3 = (long *)(param_1 + 0xe0);
  plVar5 = plVar3;
  FUN_100460448();
  lVar9 = *(long *)(param_1 + 0x120);
  *(long *)(param_1 + 0x120) = *param_5;
  *param_5 = lVar9;
  for (puVar10 = *(undefined8 **)(param_1 + 0x128); puVar10 != (undefined8 *)0x0;
      puVar10 = (undefined8 *)puVar10[1]) {
    func_0x000100460dc4();
    *(undefined1 *)(*plVar5 + 0x34) = 0;
    aplStack_88[0] = (long *)0x0;
    iVar6 = (int)*puVar10;
    pplVar7 = aplStack_88;
    FUN_1004e332c();
    plVar5 = aplStack_88[0];
    if (iVar6 != 0) {
      uVar4 = *puVar10;
      plStack_90 = aplStack_88[0];
      if (((ulong)aplStack_88[0] & 1) != 0) {
        piVar8 = (int *)((long)aplStack_88[0] + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pplVar7 = &plStack_90;
      FUN_1008db410(uVar4);
      if (((ulong)plVar5 & 1) != 0) {
        FUN_10084dad0(plVar5);
      }
    }
    plVar5 = aplStack_88[0];
    if (((ulong)aplStack_88[0] & 1) != 0) {
      FUN_10084dad0();
    }
  }
  func_0x000100466b80();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  if ((int)pplVar7 == 0) {
    func_0x000107c60bd8(plVar3);
  }
  func_0x000104bd46a0();
  iVar6 = (int)pplVar7;
  if ((int)plVar3[1] != iVar6) {
    *(int *)(plVar3 + 1) = iVar6;
    plVar5 = (long *)plVar3[2];
    plVar12 = *param_3;
    if (plVar12 != plVar5) {
      if (((ulong)plVar12 & 1) != 0) {
        piVar8 = (int *)((long)plVar12 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plVar12 = *param_3;
      }
      plVar3[2] = (long)plVar12;
      if (((ulong)plVar5 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    plVar5 = (long *)plVar3[3];
    while (plVar5 != plVar3 + 4) {
      (**(code **)(*(long *)plVar5[5] + 0x18))((long *)plVar5[5],pplVar7,param_3);
      plVar12 = (long *)plVar5[1];
      plVar11 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar11[2];
          bVar2 = (long *)*plVar5 != plVar11;
          plVar11 = plVar5;
        } while (bVar2);
      }
      else {
        do {
          plVar5 = plVar12;
          plVar12 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    }
    if (iVar6 == 4) {
      func_0x000104add940(plVar3 + 3,plVar3[4]);
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[3] = (long)(plVar3 + 4);
    }
  }
  return;
}



/* Entry: 1004c0918; end: 1004c0a13;  */

void FUN_1004c0918(long param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  
  iVar5 = (int)param_2;
  if (*(int *)(param_1 + 8) != iVar5) {
    *(int *)(param_1 + 8) = iVar5;
    uVar4 = *(ulong *)(param_1 + 0x10);
    uVar6 = *param_3;
    if (uVar6 != uVar4) {
      if ((uVar6 & 1) != 0) {
        piVar7 = (int *)(uVar6 - 1);
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar6 = *param_3;
      }
      *(ulong *)(param_1 + 0x10) = uVar6;
      if ((uVar4 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    plVar8 = *(long **)(param_1 + 0x18);
    while (plVar8 != (long *)(param_1 + 0x20)) {
      (**(code **)(*(long *)plVar8[5] + 0x18))((long *)plVar8[5],param_2,param_3);
      plVar2 = (long *)plVar8[1];
      plVar9 = plVar8;
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar9[2];
          bVar3 = (long *)*plVar8 != plVar9;
          plVar9 = plVar8;
        } while (bVar3);
      }
      else {
        do {
          plVar8 = plVar2;
          plVar2 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
    }
    if (iVar5 == 4) {
      func_0x000104add940((long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(long **)(param_1 + 0x18) = (long *)(param_1 + 0x20);
    }
  }
  return;
}



/* Entry: 1004c0a14; end: 1004c0a23;  */

void FUN_1004c0a14(long param_1,int param_2)

{
  *(uint *)(param_1 + 0xe8) = param_2 << 1 | 1;
  return;
}



/* Entry: 1004c0a24; end: 1004c0a5f;  */

/* WARNING: Removing unreachable block (ram,0x0001004c0e04) */

long * FUN_1004c0a24(uint param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x21;
  ulong uVar10;
  
  if (param_1 < 5) {
    return (long *)(&PTR_s_Channel_state_change_to_IDLE_1107c4ba0)[(int)param_1];
  }
  pcVar4 = "return \"UNKNOWN\"";
  func_0x000104a6e964("return \"UNKNOWN\"",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channelz.cc"
                      ,0xa5);
  if ((char)*(long *)((long)pcVar4 + 0x80) != '\0') {
    return (long *)pcVar4;
  }
  if ((char)*(long *)((long)pcVar4 + 0xf0) == '\0') goto LAB_1004c0c04;
  plVar7 = (long *)pcVar4;
  func_0x000100460dc4();
  *(undefined1 *)(*plVar7 + 0x34) = 0;
  lVar8 = *(long *)((long)pcVar4 + 0xe0);
  uVar1 = *(ulong *)((long)pcVar4 + 0xe8);
  uVar10 = 0x7fffffffffffffff;
  uVar9 = 0x7fffffffffffffff;
  if (((uVar1 != 0x7fffffffffffffff && lVar8 != 0x7fffffffffffffff) &&
      (uVar9 = 0x8000000000000000, uVar1 != 0x8000000000000000)) && (lVar8 != -0x8000000000000000))
  {
    if ((long)uVar1 < 1) {
      if ((long)(-0x8000000000000000 - uVar1) <= lVar8) goto LAB_1004c0af8;
    }
    else if ((long)(uVar1 ^ 0x7fffffffffffffff) < lVar8) {
      uVar9 = 0x7fffffffffffffff;
    }
    else {
LAB_1004c0af8:
      uVar9 = lVar8 + uVar1;
    }
  }
  func_0x000100460dc4();
  puVar5 = (ulong *)*plVar7;
  FUN_1004671a4();
  if ((uVar9 != 0x7fffffffffffffff) && (puVar5 != (ulong *)0x8000000000000001)) {
    if ((uVar9 != 0x8000000000000000) && (puVar5 != (ulong *)0x8000000000000000)) {
      if ((long)uVar9 < 1) {
        if (-(long)puVar5 < (long)(-0x8000000000000000 - uVar9)) goto LAB_1004c0c04;
      }
      else if ((long)(uVar9 ^ 0x7fffffffffffffff) < -(long)puVar5) goto LAB_1004c0b74;
      uVar10 = uVar9 - (long)puVar5;
      if (0 < (long)uVar10) goto LAB_1004c0b74;
    }
LAB_1004c0c04:
    (**(code **)(*(long *)pcVar4 + 0x38))(&stack0xffffffffffffffc8);
    puVar6 = *(undefined8 **)((long)pcVar4 + 0x78);
    *(long *)((long)pcVar4 + 0x78) = unaff_x21;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)();
    }
    plVar7 = (long *)0x0;
    func_0x000100460dc4();
    plVar7 = (long *)*plVar7;
    FUN_1004671a4();
    if ((char)*(long *)((long)pcVar4 + 0xf0) == '\0') {
      *(char *)((long)pcVar4 + 0xf0) = '\x01';
    }
    *(long **)((long)pcVar4 + 0xe8) = plVar7;
    return plVar7;
  }
LAB_1004c0b74:
  *(char *)((long)pcVar4 + 0x80) = '\x01';
  plVar7 = (long *)((long)pcVar4 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined **)((long)pcVar4 + 200) = &UNK_104a85d7c;
  *(char **)((long)pcVar4 + 0xd0) = pcVar4;
  *(long *)((long)pcVar4 + 0xd8) = 0;
  plVar7 = (long *)((long)pcVar4 + 0x88);
  func_0x000100460dc4();
  uVar9 = *puVar5;
  FUN_1004671a4();
  lVar8 = 0x7fffffffffffffff;
  if (((uVar10 != 0x7fffffffffffffff) && (uVar9 != 0x7fffffffffffffff)) &&
     (lVar8 = -0x8000000000000000, uVar9 != 0x8000000000000000)) {
    lVar8 = 0x7fffffffffffffff;
    if (uVar10 <= (uVar9 ^ 0x7fffffffffffffff) || (long)uVar9 < 1) {
      lVar8 = uVar9 + uVar10;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100480ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam0000000113815c30)(plVar7,lVar8,(long *)((long)pcVar4 + 0xc0));
  return plVar7;
}



/* Entry: 1004c0a60; end: 1004c0a63;  */

/* WARNING: Removing unreachable block (ram,0x0001004c0e04) */

void FUN_1004c0a60(long *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x21;
  ulong uVar9;
  
  if ((char)param_1[0x10] != '\0') {
    return;
  }
  if ((char)param_1[0x1e] == '\0') goto LAB_1004c0c04;
  plVar4 = param_1;
  func_0x000100460dc4();
  *(undefined1 *)(*plVar4 + 0x34) = 0;
  lVar7 = param_1[0x1c];
  uVar1 = param_1[0x1d];
  uVar9 = 0x7fffffffffffffff;
  uVar8 = 0x7fffffffffffffff;
  if (((uVar1 != 0x7fffffffffffffff && lVar7 != 0x7fffffffffffffff) &&
      (uVar8 = 0x8000000000000000, uVar1 != 0x8000000000000000)) && (lVar7 != -0x8000000000000000))
  {
    if ((long)uVar1 < 1) {
      if ((long)(-0x8000000000000000 - uVar1) <= lVar7) goto LAB_1004c0af8;
    }
    else if ((long)(uVar1 ^ 0x7fffffffffffffff) < lVar7) {
      uVar8 = 0x7fffffffffffffff;
    }
    else {
LAB_1004c0af8:
      uVar8 = lVar7 + uVar1;
    }
  }
  func_0x000100460dc4();
  puVar5 = (ulong *)*plVar4;
  FUN_1004671a4();
  if ((uVar8 != 0x7fffffffffffffff) && (puVar5 != (ulong *)0x8000000000000001)) {
    if ((uVar8 != 0x8000000000000000) && (puVar5 != (ulong *)0x8000000000000000)) {
      if ((long)uVar8 < 1) {
        if (-(long)puVar5 < (long)(-0x8000000000000000 - uVar8)) goto LAB_1004c0c04;
      }
      else if ((long)(uVar8 ^ 0x7fffffffffffffff) < -(long)puVar5) goto LAB_1004c0b74;
      uVar9 = uVar8 - (long)puVar5;
      if (0 < (long)uVar9) goto LAB_1004c0b74;
    }
LAB_1004c0c04:
    (**(code **)(*param_1 + 0x38))(&stack0xffffffffffffffd8);
    puVar6 = (undefined8 *)param_1[0xf];
    param_1[0xf] = unaff_x21;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)();
    }
    plVar4 = (long *)0x0;
    func_0x000100460dc4();
    lVar7 = *plVar4;
    FUN_1004671a4();
    if ((char)param_1[0x1e] == '\0') {
      *(undefined1 *)(param_1 + 0x1e) = 1;
    }
    param_1[0x1d] = lVar7;
    return;
  }
LAB_1004c0b74:
  *(undefined1 *)(param_1 + 0x10) = 1;
  plVar4 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = *plVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1[0x19] = (long)&UNK_104a85d7c;
  param_1[0x1a] = (long)param_1;
  param_1[0x1b] = 0;
  func_0x000100460dc4();
  uVar8 = *puVar5;
  FUN_1004671a4();
  lVar7 = 0x7fffffffffffffff;
  if (((uVar9 != 0x7fffffffffffffff) && (uVar8 != 0x7fffffffffffffff)) &&
     (lVar7 = -0x8000000000000000, uVar8 != 0x8000000000000000)) {
    lVar7 = 0x7fffffffffffffff;
    if (uVar9 <= (uVar8 ^ 0x7fffffffffffffff) || (long)uVar8 < 1) {
      lVar7 = uVar8 + uVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100480ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam0000000113815c30)(param_1 + 0x11,lVar7,param_1 + 0x18);
  return;
}



/* Entry: 1004c0a64; end: 1004c0c17;  */

/* WARNING: Removing unreachable block (ram,0x0001004c0e04) */

void FUN_1004c0a64(long *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x21;
  ulong uVar9;
  
  if ((char)param_1[0x10] != '\0') {
    return;
  }
  if ((char)param_1[0x1e] == '\0') goto LAB_1004c0c04;
  plVar4 = param_1;
  func_0x000100460dc4();
  *(undefined1 *)(*plVar4 + 0x34) = 0;
  lVar7 = param_1[0x1c];
  uVar1 = param_1[0x1d];
  uVar9 = 0x7fffffffffffffff;
  uVar8 = 0x7fffffffffffffff;
  if (((uVar1 != 0x7fffffffffffffff && lVar7 != 0x7fffffffffffffff) &&
      (uVar8 = 0x8000000000000000, uVar1 != 0x8000000000000000)) && (lVar7 != -0x8000000000000000))
  {
    if ((long)uVar1 < 1) {
      if ((long)(-0x8000000000000000 - uVar1) <= lVar7) goto LAB_1004c0af8;
    }
    else if ((long)(uVar1 ^ 0x7fffffffffffffff) < lVar7) {
      uVar8 = 0x7fffffffffffffff;
    }
    else {
LAB_1004c0af8:
      uVar8 = lVar7 + uVar1;
    }
  }
  func_0x000100460dc4();
  puVar5 = (ulong *)*plVar4;
  FUN_1004671a4();
  if ((uVar8 != 0x7fffffffffffffff) && (puVar5 != (ulong *)0x8000000000000001)) {
    if ((uVar8 != 0x8000000000000000) && (puVar5 != (ulong *)0x8000000000000000)) {
      if ((long)uVar8 < 1) {
        if (-(long)puVar5 < (long)(-0x8000000000000000 - uVar8)) goto LAB_1004c0c04;
      }
      else if ((long)(uVar8 ^ 0x7fffffffffffffff) < -(long)puVar5) goto LAB_1004c0b74;
      uVar9 = uVar8 - (long)puVar5;
      if (0 < (long)uVar9) goto LAB_1004c0b74;
    }
LAB_1004c0c04:
    (**(code **)(*param_1 + 0x38))(&stack0xffffffffffffffd8);
    puVar6 = (undefined8 *)param_1[0xf];
    param_1[0xf] = unaff_x21;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)();
    }
    plVar4 = (long *)0x0;
    func_0x000100460dc4();
    lVar7 = *plVar4;
    FUN_1004671a4();
    if ((char)param_1[0x1e] == '\0') {
      *(undefined1 *)(param_1 + 0x1e) = 1;
    }
    param_1[0x1d] = lVar7;
    return;
  }
LAB_1004c0b74:
  *(undefined1 *)(param_1 + 0x10) = 1;
  plVar4 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = *plVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1[0x19] = (long)&UNK_104a85d7c;
  param_1[0x1a] = (long)param_1;
  param_1[0x1b] = 0;
  func_0x000100460dc4();
  uVar8 = *puVar5;
  FUN_1004671a4();
  lVar7 = 0x7fffffffffffffff;
  if (((uVar9 != 0x7fffffffffffffff) && (uVar8 != 0x7fffffffffffffff)) &&
     (lVar7 = -0x8000000000000000, uVar8 != 0x8000000000000000)) {
    lVar7 = 0x7fffffffffffffff;
    if (uVar9 <= (uVar8 ^ 0x7fffffffffffffff) || (long)uVar8 < 1) {
      lVar7 = uVar8 + uVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100480ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam0000000113815c30)(param_1 + 0x11,lVar7,param_1 + 0x18);
  return;
}



/* Entry: 1004c0c18; end: 1004c0c23;  */

undefined8 FUN_1004c0c18(void)

{
  return uRam00000001136a2080;
}



/* Entry: 1004c0c24; end: 1004c0db3;  */

void FUN_1004c0c24(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long alStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_2 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar6 = param_2;
  FUN_1004c0c18();
  puVar3 = PTR_s_https_1130a6290;
  if ((char)*(byte *)((long)param_2 + 0x3f) < '\0') {
    plVar7 = (long *)param_2[5];
    uVar9 = param_2[6];
  }
  else {
    plVar7 = param_2 + 5;
    uVar9 = (ulong)*(byte *)((long)param_2 + 0x3f);
  }
  puVar4 = PTR_s_https_1130a6290;
  func_0x000107c613d0(PTR_s_https_1130a6290);
  lVar10 = param_2[0xd];
  plVar5 = (long *)0x20;
  func_0x000107c60e20();
  *plVar5 = (long)&PTR_DAT_1107c2890;
  plVar5[1] = (long)FUN_1004c4544;
  plVar5[2] = 0;
  plVar5[3] = (long)param_2;
  plStack_60 = plVar5;
  (**(code **)(*plVar6 + 0x10))(plVar6,plVar7,uVar9,puVar3,puVar4,lVar10,alStack_78);
  if (plStack_60 == alStack_78) {
    lVar10 = 4;
    plVar6 = alStack_78;
  }
  else {
    if (plStack_60 == (long *)0x0) goto LAB_1004c0d24;
    lVar10 = 5;
    plVar6 = plStack_60;
  }
  (**(code **)(*plVar6 + lVar10 * 8))();
LAB_1004c0d24:
  plVar6 = (long *)0x8;
  func_0x000107c60e20();
  *plVar6 = (long)&PTR_FUN_1107c2920;
  *param_1 = plVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  plVar7 = plVar6;
  func_0x000107c60bd8();
  pcStack_88 = FUN_1004c0db4;
  plStack_a0 = alStack_78;
  plStack_98 = plVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar7 + 0x38))(&plStack_a8);
  plVar6 = plStack_a8;
  plStack_a8 = (long *)0x0;
  puVar8 = (undefined8 *)plVar7[0xf];
  plVar7[0xf] = (long)plVar6;
  plVar6 = (long *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)();
    plVar6 = plStack_a8;
    plStack_a8 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)*plVar6)();
    }
  }
  func_0x000100460dc4();
  lVar10 = *plVar6;
  FUN_1004671a4();
  if ((char)plVar7[0x1e] == '\0') {
    *(undefined1 *)(plVar7 + 0x1e) = 1;
  }
  plVar7[0x1d] = lVar10;
  return;
}



/* Entry: 1004c0db4; end: 1004c0e47;  */

void FUN_1004c0db4(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plStack_28;
  
  (**(code **)(*param_1 + 0x38))(&plStack_28);
  plVar2 = plStack_28;
  plStack_28 = (long *)0x0;
  puVar1 = (undefined8 *)param_1[0xf];
  param_1[0xf] = (long)plVar2;
  plVar2 = (long *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
    plVar2 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)*plVar2)();
    }
  }
  func_0x000100460dc4();
  lVar3 = *plVar2;
  FUN_1004671a4();
  if ((char)param_1[0x1e] == '\0') {
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  param_1[0x1d] = lVar3;
  return;
}


