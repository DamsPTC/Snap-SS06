/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c54f98; end: 104c5500f;  */

void FUN_104c54f98(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  *(undefined1 *)(param_1 + 0xf) = 0;
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,param_2[2]);
  lVar3 = param_2[1];
  lVar2 = *param_2;
  lVar5 = param_2[3];
  lVar4 = param_2[2];
  lVar6 = param_2[4];
  param_1[0xe] = param_2[5];
  param_1[0xd] = lVar6;
  param_1[0xc] = lVar5;
  param_1[0xb] = lVar4;
  param_1[10] = lVar3;
  param_1[9] = lVar2;
  plVar1 = param_1;
  func_0x000104c5586c();
  if ((int)plVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104c55000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))(param_1);
    return;
  }
  return;
}



/* Entry: 104c55010; end: 104c55047;  */

undefined8 FUN_104c55010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104c55048; end: 104c55177;  */

void FUN_104c55048(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 *puVar9;
  code *pcVar10;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 auStack_1d8 [50];
  long lStack_48;
  
  plVar8 = plRam0000000113815c70;
  puVar9 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = &uStack_228;
  if (param_1[2] == 0) {
    lVar4 = 0;
  }
  else if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar3 = auStack_1d8;
    lStack_218 = param_1[2] + 8;
    uStack_228 = 4;
    uStack_220 = 0;
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    puVar3 = &uStack_228;
  }
  if ((param_1[4] != 0) && ((*(byte *)((long)param_1 + 0x31) & 1) == 0)) {
    lVar4 = lVar4 + 1;
    *puVar3 = 5;
    puVar3[1] = 0;
    puVar3[2] = param_1 + 5;
  }
  lVar6 = param_1[0xb];
  (**(code **)(*param_1 + 0x20))();
  plVar1 = plVar8;
  (**(code **)(*plVar8 + 0x108))(plVar8,lVar6,&uStack_228,lVar4,param_1,0);
  if ((int)plVar1 != 0) {
    plVar1 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,&DAT_10f6842c6,
               "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/call_op_set.h"
               ,0x3d9);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = 0x113815c70;
  pcVar10 = FUN_104c55178;
  *(undefined1 *)(plVar1 + 0xf) = 1;
  plVar2 = plRam0000000113815c70;
  lVar5 = plVar1[0xb];
  (**(code **)(*plVar1 + 0x20))();
  (**(code **)(*plVar2 + 0x108))
            (plVar2,lVar5,0,0,plVar1,0,in_x6,in_x7,uVar7,lVar6,plVar8,lVar4,puVar9,pcVar10);
  if ((int)plVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104c55210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000113815c70 + 0x10))
            (plRam0000000113815c70,
             "g_core_codegen_interface->grpc_call_start_batch( call_.call(), nullptr, 0, core_cq_tag(), nullptr) == GRPC_CALL_OK"
             ,
             "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/call_op_set.h"
             ,0x3e5);
  return;
}



/* Entry: 104c55178; end: 104c552fb;  */

void FUN_104c55178(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0xf) = 1;
  plVar1 = plRam0000000113815c70;
  lVar2 = param_1[0xb];
  (**(code **)(*param_1 + 0x20))();
  (**(code **)(*plVar1 + 0x108))(plVar1,lVar2,0,0,param_1,0);
  if ((int)plVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104c55210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000113815c70 + 0x10))
            (plRam0000000113815c70,
             "g_core_codegen_interface->grpc_call_start_batch( call_.call(), nullptr, 0, core_cq_tag(), nullptr) == GRPC_CALL_OK"
             ,
             "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/call_op_set.h"
             ,0x3e5);
  return;
}



/* Entry: 104c552fc; end: 104c5533f;  */

undefined8 FUN_104c552fc(long param_1)

{
  code *extraout_x8;
  long lVar1;
  
  *(undefined2 *)(param_1 + 0xa0) = 1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8d) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(param_1 + 0x90) = 1;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (*(undefined1 *)(param_1 + 0x91) = 1, (*(byte *)(param_1 + 0x18) & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if (*(long *)(param_1 + 0xb0) == 0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    FUN_104c0070c(param_1 + 0x80);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    func_0x0001004b972c(param_1 + 0x80);
  }
  return 0;
}



/* Entry: 104c55340; end: 104c556ab;  */

/* WARNING: Removing unreachable block (ram,0x000104c55570) */
/* WARNING: Removing unreachable block (ram,0x000104c55598) */
/* WARNING: Removing unreachable block (ram,0x000104c55528) */
/* WARNING: Removing unreachable block (ram,0x000104c55614) */
/* WARNING: Removing unreachable block (ram,0x000104c5547c) */

void FUN_104c55340(undefined4 *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uStack_148;
  long lStack_140;
  undefined7 uStack_138;
  char cStack_131;
  undefined8 *puStack_130;
  ulong uStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined7 uStack_e8;
  char cStack_e1;
  undefined4 uStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  if (param_2 == (long *)0x0) {
    func_0x00010002d4d8(&uStack_f8,"No payload");
    *param_1 = 0xd;
    if (cStack_e1 < '\0') {
      func_0x000100033dac(param_1 + 2,uStack_f8,uStack_f0);
      *(undefined8 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      if (cStack_e1 < '\0') {
        __ZdlPv(uStack_f8);
      }
    }
    else {
      *(undefined8 *)(param_1 + 4) = uStack_f0;
      *(undefined8 *)(param_1 + 2) = uStack_f8;
      *(ulong *)(param_1 + 6) = CONCAT17(cStack_e1,uStack_e8);
      *(undefined8 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  else {
    plVar1 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0x1b0))();
    uStack_88 = (undefined4)*plVar1;
    if (*(char *)((long)plVar1 + 0x1f) < '\0') {
      func_0x000100033dac(&uStack_80,plVar1[1],plVar1[2]);
    }
    else {
      lStack_78 = plVar1[2];
      uStack_80 = plVar1[1];
      uStack_70 = plVar1[3];
    }
    if (*(char *)((long)plVar1 + 0x37) < '\0') {
      func_0x000100033dac(&lStack_68,plVar1[4],plVar1[5]);
    }
    else {
      lStack_60 = plVar1[5];
      lStack_68 = plVar1[4];
      lStack_58 = plVar1[6];
    }
    func_0x00010084f36c(&uStack_f8,param_2);
    FUN_104c556ac(&puStack_130,&uStack_f8);
    if (lStack_100 < 0) {
      __ZdlPv(uStack_110);
    }
    if ((long)uStack_118 < 0) {
      __ZdlPv(uStack_128);
    }
    if ((int)puStack_130 == 0) {
      puStack_130 = &uStack_f8;
      uVar2 = param_3;
      func_0x00010084f504(param_3,&puStack_130);
      if ((uVar2 & 1) == 0) {
        func_0x00010b4d12e4(&uStack_148,param_3);
        puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,0xd);
        if (cStack_131 < '\0') {
          func_0x000100033dac(&uStack_128,uStack_148,lStack_140);
          uStack_88 = (int)puStack_130;
        }
        else {
          lStack_120 = lStack_140;
          uStack_128 = uStack_148;
          uStack_118 = CONCAT17(cStack_131,uStack_138);
          uStack_88 = 0xd;
        }
        uStack_108 = 0;
        lStack_78 = lStack_120;
        uStack_80 = uStack_128;
        uStack_70 = uStack_118;
        uStack_118 = uStack_118 & 0xffffffffffffff;
        uStack_128 = uStack_128 & 0xffffffffffffff00;
        lStack_60 = 0;
        lStack_68 = 0;
        lStack_58 = 0;
        lStack_100 = 0;
        uStack_110 = 0;
        if (cStack_131 < '\0') {
          __ZdlPv(uStack_148);
        }
      }
      func_0x00010084f950(&uStack_f8);
      if (*param_2 != 0) {
        (**(code **)(*plRam0000000113815c70 + 0xc0))();
        *param_2 = 0;
      }
      *param_1 = uStack_88;
      *(long *)(param_1 + 4) = lStack_78;
      *(ulong *)(param_1 + 2) = uStack_80;
      *(ulong *)(param_1 + 6) = uStack_70;
      *(long *)(param_1 + 10) = lStack_60;
      *(long *)(param_1 + 8) = lStack_68;
      *(long *)(param_1 + 0xc) = lStack_58;
    }
    else {
      FUN_104c556ac(param_1,&uStack_f8);
      func_0x00010084f950(&uStack_f8);
    }
  }
  return;
}



/* Entry: 104c556ac; end: 104c5574b;  */

void FUN_104c556ac(undefined4 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = *(undefined4 *)(param_2 + 0x38);
  if (*(char *)(param_2 + 0x57) < '\0') {
    func_0x000100033dac(param_1 + 2,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48))
    ;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 0x50);
  }
  if (*(char *)(param_2 + 0x6f) < '\0') {
    func_0x000100033dac(param_1 + 8,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x60))
    ;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x68);
  }
  return;
}



/* Entry: 104c5574c; end: 104c5574f;  */

undefined8 * FUN_104c5574c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec8b8;
  if (*(int *)(param_1 + 7) == 0) {
    (**(code **)(*plRam0000000113815c70 + 0xd8))(plRam0000000113815c70,param_1 + 3);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    func_0x000107c60e14(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    func_0x000107c60e14(param_1[8]);
  }
  return param_1;
}



/* Entry: 104c55750; end: 104c55763;  */

void FUN_104c55750(void)

{
  func_0x00010084f950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c55764; end: 104c5585f;  */

void FUN_104c55764(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  if (*plVar2 == 0) {
    uVar1 = (uint)*(byte *)(plVar2 + 1);
  }
  else {
    uVar1 = (uint)plVar2[1];
  }
  if ((int)uVar1 < param_2) {
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,"count <= static_cast<int>(GRPC_SLICE_LENGTH(*slice_))",
               "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/proto_buffer_reader.h"
               ,0x68);
  }
  *(long *)(param_1 + 0x10) = (long)param_2;
  return;
}



/* Entry: 104c55860; end: 104c558f3;  */

long FUN_104c55860(long param_1)

{
  return *(long *)(param_1 + 8) - *(long *)(param_1 + 0x10);
}



/* Entry: 104c558f4; end: 104c5594b;  */

long FUN_104c558f4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 104c5594c; end: 104c55a83;  */

long * FUN_104c5594c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  puVar4 = puVar3;
  if ((undefined8 *)param_1[2] != puVar3) {
    uVar2 = param_1[4];
    plVar5 = puVar3 + uVar2 / 0x49;
    lVar1 = *plVar5 + (uVar2 % 0x49) * 0x38;
    lVar6 = puVar3[(param_1[5] + uVar2) / 0x49] + ((param_1[5] + uVar2) % 0x49) * 0x38;
    puVar4 = (undefined8 *)param_1[2];
    if (lVar1 != lVar6) {
      do {
        func_0x00010ae19c2c();
        lVar1 = lVar1 + 0x38;
        if (lVar1 - *plVar5 == 0xff8) {
          plVar5 = plVar5 + 1;
          lVar1 = *plVar5;
        }
      } while (lVar1 != lVar6);
      puVar3 = (undefined8 *)param_1[1];
      puVar4 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar1 = (long)puVar4 - (long)puVar3;
  while (uVar2 = lVar1 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar3);
    puVar4 = (undefined8 *)param_1[2];
    puVar3 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar3;
    lVar1 = (long)puVar4 - (long)puVar3;
  }
  if (uVar2 == 1) {
    lVar1 = 0x24;
  }
  else {
    if (uVar2 != 2) goto LAB_104c55a64;
    lVar1 = 0x49;
  }
  param_1[4] = lVar1;
LAB_104c55a64:
  for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c55a84; end: 104c55acf;  */

long * FUN_104c55a84(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c55ad0; end: 104c55ad3;  */

void FUN_104c55ad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c55ad4; end: 104c55ae7;  */

void FUN_104c55ad4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c55ae8; end: 104c55aef;  */

/* WARNING: Possible PIC construction at 0x000104c54bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c54c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c54bc8) */
/* WARNING: Removing unreachable block (ram,0x000104c54bfc) */
/* WARNING: Removing unreachable block (ram,0x000104c54bec) */
/* WARNING: Removing unreachable block (ram,0x000104c54bf0) */
/* WARNING: Removing unreachable block (ram,0x000104c54c00) */
/* WARNING: Removing unreachable block (ram,0x000104c54c0c) */
/* WARNING: Removing unreachable block (ram,0x000104c54c28) */

long FUN_104c55ae8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    *(undefined ***)(lVar2 + 0x4b0) = &PTR_FUN_1107ea658;
    lVar1 = lVar2 + 0x560;
    func_0x000104c01b44(&UNK_1107e9f40);
    *unaff_x20 = extraout_x8;
    func_0x000100613080(lVar1 + 0x70);
    func_0x0001006393ec(unaff_x20 + 7);
    return lVar2 + 0x560;
  }
  return 0;
}



/* Entry: 104c55af0; end: 104c55b27;  */

undefined8 FUN_104c55af0(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000334dc(param_2,&PTR_DAT_1107ec7b0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104c55b28; end: 104c55b2b;  */

void FUN_104c55b28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c55b2c; end: 104c55bb3;  */

void FUN_104c55b2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  byte bStack_21;
  
  *(int *)(param_2 + 0x18) = (int)param_4;
  *(char *)(param_2 + 0x1c) = (char)((ulong)param_4 >> 0x20);
  FUN_104c55bb4(param_1,param_3,param_2 + 0x10,&bStack_21);
  if ((bStack_21 & 1) == 0) {
    plVar1 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0xb8))
              (plRam0000000113815c70,*(undefined8 *)(param_2 + 0x10));
    *(long **)(param_2 + 0x10) = plVar1;
  }
  return;
}



/* Entry: 104c55bb4; end: 104c55f7b;  */

/* WARNING: Possible PIC construction at 0x000104c55f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c55e7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c55f5c) */
/* WARNING: Removing unreachable block (ram,0x000104c55f74) */
/* WARNING: Removing unreachable block (ram,0x000104c55ff0) */
/* WARNING: Removing unreachable block (ram,0x000104c55ff8) */
/* WARNING: Removing unreachable block (ram,0x000104c55ffc) */
/* WARNING: Removing unreachable block (ram,0x000104c55fdc) */

long * FUN_104c55bb4(undefined4 *param_1,long *param_2,long *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 auVar2 [8];
  long *plVar3;
  int iVar4;
  undefined **ppuVar5;
  long *unaff_x23;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  long *plStack_100;
  undefined4 *puStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  ulong uStack_d8;
  undefined8 uStack_c8;
  char cStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined7 uStack_68;
  char cStack_61;
  undefined8 uStack_60;
  long lStack_58;
  
  iVar4 = (int)&ppuStack_e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_4 = 1;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x28))();
  if ((uint)plVar3 < 0x18) {
    unaff_x23 = (long *)0x113815c70;
    (**(code **)(*plRam0000000113815c70 + 0x148))(&ppuStack_78);
    auVar2 = auStack_70;
    ppuVar5 = ppuStack_78;
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x30))();
    puVar1 = auStack_70 + 1;
    if (ppuVar5 != (undefined **)0x0) {
      puVar1 = (undefined1 *)CONCAT17(cStack_61,uStack_68);
    }
    ppuStack_e0 = (undefined **)(puVar1 + *(int *)((long)param_2 + (ulong)*(uint *)(plVar3 + 3)));
    uStack_d8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a6 = uRam000000011383d940;
    uStack_a5 = 0;
    (**(code **)(*param_2 + 0x38))(param_2,puVar1,&ppuStack_e0);
    plVar3 = (long *)(auStack_70 + 1 + ((ulong)auVar2 & 0xff));
    if (ppuVar5 != (undefined **)0x0) {
      plVar3 = (long *)((undefined1 *)CONCAT17(cStack_61,uStack_68) + (long)auVar2);
    }
    if (plVar3 != param_2) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "slice.end() == msg.SerializeWithCachedSizesToArray( const_cast<uint8_t*>(slice.begin()))"
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/proto_utils.h"
                 ,0x3b);
    }
    plVar3 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0xf0))(plRam0000000113815c70,&ppuStack_78,1);
    ppuVar5 = (undefined **)*param_3;
    *param_3 = (long)plVar3;
    plVar3 = plRam0000000113815c70;
    ppuStack_e0 = ppuVar5;
    (**(code **)(*plRam0000000113815c70 + 0x1b0))();
    *param_1 = (int)*plVar3;
    if (*(char *)((long)plVar3 + 0x1f) < '\0') {
      func_0x000100033dac(param_1 + 2,plVar3[1],plVar3[2]);
    }
    else {
      lVar7 = plVar3[2];
      lVar6 = plVar3[1];
      *(long *)(param_1 + 6) = plVar3[3];
      *(long *)(param_1 + 4) = lVar7;
      *(long *)(param_1 + 2) = lVar6;
    }
    if (*(char *)((long)plVar3 + 0x37) < '\0') {
      func_0x000100033dac(param_1 + 8,plVar3[4],plVar3[5]);
    }
    else {
      lVar7 = plVar3[5];
      lVar6 = plVar3[4];
      *(long *)(param_1 + 0xc) = plVar3[6];
      *(long *)(param_1 + 10) = lVar7;
      *(long *)(param_1 + 8) = lVar6;
    }
    if (ppuVar5 != (undefined **)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0xc0))(plRam0000000113815c70,ppuVar5);
    }
    uStack_d8 = (ulong)auStack_70;
    ppuStack_e0 = ppuStack_78;
    uStack_c8 = uStack_60;
    param_3 = plRam0000000113815c70;
    iVar4 = (int)&ppuStack_e0;
    (**(code **)(*plRam0000000113815c70 + 0x150))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return param_3;
    }
    ___stack_chk_fail();
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(*ppuVar5);
    }
    uStack_e8 = 0x104c55f5c;
  }
  else {
    func_0x0001006af6cc(&ppuStack_e0,param_3,0x100000,plVar3);
    func_0x0001006af788();
    if ((int)param_2 == 0) {
      iVar4 = 0xf246356;
      func_0x00010002d4d8(&ppuStack_78);
      *param_1 = 0xd;
      if (cStack_61 < '\0') {
        ppuVar5 = ppuStack_78;
        func_0x000100033dac(param_1 + 2,ppuStack_78,auStack_70);
        iVar4 = (int)ppuVar5;
        *(undefined8 *)(param_1 + 10) = 0;
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        if (cStack_61 < '\0') {
          __ZdlPv(ppuStack_78);
        }
      }
      else {
        *(undefined1 (*) [8])(param_1 + 4) = auStack_70;
        *(undefined ***)(param_1 + 2) = ppuStack_78;
        *(ulong *)(param_1 + 6) = CONCAT17(cStack_61,uStack_68);
        *(undefined8 *)(param_1 + 10) = 0;
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
      }
    }
    else {
      param_3 = plRam0000000113815c70;
      (**(code **)(*plRam0000000113815c70 + 0x1b0))();
      *param_1 = (int)*param_3;
      if (*(char *)((long)param_3 + 0x1f) < '\0') {
        lVar6 = param_3[1];
        func_0x000100033dac(param_1 + 2,lVar6,param_3[2]);
        iVar4 = (int)lVar6;
      }
      else {
        lVar7 = param_3[2];
        lVar6 = param_3[1];
        *(long *)(param_1 + 6) = param_3[3];
        *(long *)(param_1 + 4) = lVar7;
        *(long *)(param_1 + 2) = lVar6;
      }
      if (*(char *)((long)param_3 + 0x37) < '\0') {
        lVar6 = param_3[4];
        func_0x000100033dac(param_1 + 8,lVar6,param_3[5]);
        iVar4 = (int)lVar6;
      }
      else {
        lVar7 = param_3[5];
        lVar6 = param_3[4];
        *(long *)(param_1 + 0xc) = param_3[6];
        *(long *)(param_1 + 10) = lVar7;
        *(long *)(param_1 + 8) = lVar6;
      }
    }
    uStack_e8 = 0x104c55e80;
  }
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR_FUN_1107ec918;
  plStack_100 = param_3;
  puStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  if (cStack_c0 == '\x01') {
    uStack_120 = CONCAT44(uStack_a4,CONCAT13(uStack_a5,CONCAT12(uStack_a6,uStack_a8)));
    uStack_128 = uStack_b0;
    uStack_130 = uStack_b8;
    uStack_118 = uStack_a0;
    iVar4 = (int)&uStack_130;
    (**(code **)(*plRam0000000113815c70 + 0x150))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return (long *)&ppuStack_e0;
  }
  func_0x000107c60e78();
  if (iVar4 == 0) {
    func_0x000107c60bd8();
  }
  FUN_104bd46a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x23);
  return unaff_x23;
}



/* Entry: 104c55f7c; end: 104c55fff;  */

long * FUN_104c55f7c(long *param_1)

{
  long *plVar1;
  int iVar2;
  long *unaff_x23;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_28;
  
  iVar2 = (int)&lStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_48 = param_1[1];
  lStack_50 = *param_1;
  lStack_38 = param_1[3];
  lStack_40 = param_1[2];
  plVar1 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0x150))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar2 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *plVar1 = (long)&PTR_FUN_1107ec918;
  if ((char)plVar1[4] == '\x01') {
    lStack_98 = plVar1[6];
    lStack_a0 = plVar1[5];
    lStack_88 = plVar1[8];
    lStack_90 = plVar1[7];
    iVar2 = (int)&lStack_a0;
    (**(code **)(*plRam0000000113815c70 + 0x150))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return plVar1;
  }
  func_0x000107c60e78();
  if (iVar2 == 0) {
    func_0x000107c60bd8();
  }
  FUN_104bd46a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return unaff_x23;
}



/* Entry: 104c56000; end: 104c56003;  */

undefined8 * FUN_104c56000(undefined8 *param_1,int param_2)

{
  undefined8 *unaff_x23;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_1107ec918;
  if (*(char *)(param_1 + 4) == '\x01') {
    uStack_48 = param_1[6];
    uStack_50 = param_1[5];
    uStack_38 = param_1[8];
    uStack_40 = param_1[7];
    param_2 = (int)&uStack_50;
    (**(code **)(*plRam0000000113815c70 + 0x150))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  func_0x000107c60e78();
  if (param_2 == 0) {
    func_0x000107c60bd8();
  }
  FUN_104bd46a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return unaff_x23;
}



/* Entry: 104c56004; end: 104c56017;  */

void FUN_104c56004(void)

{
  func_0x0001006b0df4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c56018; end: 104c56027;  */

undefined8 FUN_104c56018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104c56028; end: 104c56097;  */

void FUN_104c56028(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  __ZNSt3__15mutex4lockEv();
  uVar1 = param_2;
  __ZNSt3__15mutex8try_lockEv();
  if ((uVar1 & 1) == 0) {
    do {
      __ZNSt3__15mutex6unlockEv(param_1);
      _sched_yield();
      __ZNSt3__15mutex4lockEv(param_2);
      uVar1 = param_1;
      __ZNSt3__15mutex8try_lockEv();
      if ((uVar1 & 1) != 0) {
        return;
      }
      __ZNSt3__15mutex6unlockEv(param_2);
      _sched_yield();
      __ZNSt3__15mutex4lockEv(param_1);
      uVar1 = param_2;
      __ZNSt3__15mutex8try_lockEv();
    } while ((int)uVar1 == 0);
  }
  return;
}



/* Entry: 104c56098; end: 104c563a7;  */

void FUN_104c56098(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  if (0x48 < param_1[4]) {
    param_1[4] = param_1[4] - 0x49;
    puVar10 = (undefined8 *)param_1[1] + 1;
    uVar3 = *(undefined8 *)param_1[1];
LAB_104c560d0:
    param_1[1] = (ulong)puVar10;
    puVar10 = (undefined8 *)param_1[2];
    if (puVar10 == (undefined8 *)param_1[3]) {
      uVar15 = *param_1;
      uVar5 = param_1[1];
      if (uVar5 < uVar15 || uVar5 - uVar15 == 0) {
        uVar8 = (long)((long)puVar10 - uVar15) >> 2;
        if ((long)puVar10 - uVar15 == 0) {
          uVar8 = 1;
        }
        uVar15 = uVar8;
        FUN_104c564a4();
        puVar11 = (undefined8 *)(uVar15 + (uVar8 >> 2) * 8);
        lVar12 = param_1[2] - (long)param_1[1];
        puVar10 = puVar11;
        if (lVar12 != 0) {
          puVar10 = (undefined8 *)((long)puVar11 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar11;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar8 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar11;
        param_1[2] = (ulong)puVar10;
        param_1[3] = uVar15 + uVar5 * 8;
        if (uVar8 != 0) {
          __ZdlPv(uVar8);
          puVar10 = (undefined8 *)param_1[2];
        }
      }
      else {
        lVar12 = (((long)(uVar5 - uVar15) >> 3) + 1) / 2;
        lVar13 = uVar5 + lVar12 * -8;
        lVar1 = (long)puVar10 - uVar5;
        if (lVar1 != 0) {
          _memmove(lVar13,uVar5,lVar1);
          uVar5 = param_1[1];
        }
        puVar10 = (undefined8 *)(lVar13 + lVar1);
        param_1[1] = uVar5 + lVar12 * -8;
        param_1[2] = (ulong)puVar10;
      }
    }
    *puVar10 = uVar3;
    param_1[2] = param_1[2] + 8;
    return;
  }
  puVar11 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar15 = (long)puVar11 - (long)puVar10;
  if (uVar15 < (ulong)((long)puVar9 - (long)puVar7)) {
    uVar3 = 0xff8;
    __Znwm();
    if (puVar9 == puVar11) {
      if (puVar10 == puVar7) {
        uVar15 = (long)puVar9 - (long)puVar10 >> 2;
        if (puVar11 == puVar10) {
          uVar15 = 1;
        }
        lVar12 = uVar15 * 2;
        FUN_104c564a4();
        puVar10 = (undefined8 *)(uVar15 + (lVar12 + 6U & 0xfffffffffffffff8));
        lVar12 = param_1[2] - (long)param_1[1];
        puVar11 = puVar10;
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)((long)puVar10 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar10;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar5 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar10;
        param_1[2] = (ulong)puVar11;
        param_1[3] = uVar15 + (long)param_2 * 8;
        if (uVar5 != 0) {
          __ZdlPv(uVar5);
          puVar10 = (undefined8 *)param_1[1];
        }
      }
      puVar10[-1] = uVar3;
      puVar10 = (undefined8 *)param_1[1];
      param_1[1] = (ulong)(puVar10 + -1);
      uVar3 = puVar10[-1];
      goto LAB_104c560d0;
    }
    *puVar11 = uVar3;
    param_1[2] = param_1[2] + 8;
  }
  else {
    puVar6 = (undefined8 *)((long)puVar9 - (long)puVar7 >> 2);
    if (puVar9 == puVar7) {
      puVar6 = (undefined8 *)0x1;
    }
    FUN_104c564a4();
    uVar3 = 0xff8;
    puVar4 = param_2;
    __Znwm();
    puVar7 = (undefined8 *)((long)puVar6 + uVar15);
    puVar9 = puVar6 + (long)param_2;
    puVar2 = puVar6;
    if (uVar15 == (long)param_2 * 8) {
      if ((long)uVar15 < 1) {
        puVar7 = (undefined8 *)((long)puVar7 - (long)puVar6 >> 2);
        if (puVar11 == puVar10) {
          puVar7 = (undefined8 *)0x1;
        }
        puVar2 = puVar7;
        FUN_104c564a4();
        puVar7 = puVar2 + ((ulong)puVar7 >> 2);
        puVar9 = puVar2 + (long)puVar4;
        if (puVar6 != (undefined8 *)0x0) {
          __ZdlPv(puVar6);
        }
      }
      else {
        lVar12 = ((long)puVar7 - (long)puVar6 >> 3) + 1;
        puVar7 = puVar7 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
      }
    }
    puVar10 = puVar7 + 1;
    *puVar7 = uVar3;
    puVar11 = (undefined8 *)param_1[2];
    puVar6 = puVar2;
    if (puVar11 != (undefined8 *)param_1[1]) {
      do {
        puVar2 = puVar6;
        puVar14 = puVar7;
        if (puVar7 == puVar6) {
          if (puVar10 < puVar9) {
            lVar12 = ((long)puVar9 - (long)puVar10 >> 3) + 1;
            lVar1 = (long)puVar10 - (long)puVar6;
            lVar13 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar10 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
            puVar14 = (undefined8 *)((long)puVar10 - lVar1);
            if (lVar13 != 0) {
              _memmove(puVar14,puVar7,lVar13);
              puVar4 = puVar7;
            }
          }
          else {
            puVar14 = (undefined8 *)((long)puVar9 - (long)puVar6 >> 2);
            if ((long)puVar9 - (long)puVar6 == 0) {
              puVar14 = (undefined8 *)0x1;
            }
            puVar2 = puVar14;
            FUN_104c564a4();
            puVar14 = (undefined8 *)((long)puVar2 + ((long)puVar14 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar14;
            if (lVar12 != 0) {
              puVar10 = (undefined8 *)((long)puVar14 + lVar12);
              puVar9 = puVar14;
              do {
                *puVar9 = *puVar7;
                lVar12 = lVar12 + -8;
                puVar9 = puVar9 + 1;
                puVar7 = puVar7 + 1;
              } while (lVar12 != 0);
            }
            puVar9 = puVar2 + (long)puVar4;
            if (puVar6 != (undefined8 *)0x0) {
              __ZdlPv(puVar6);
            }
          }
        }
        puVar11 = puVar11 + -1;
        puVar7 = puVar14 + -1;
        *puVar7 = *puVar11;
        puVar6 = puVar2;
      } while (puVar11 != (undefined8 *)param_1[1]);
    }
    uVar15 = *param_1;
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar10;
    param_1[3] = (ulong)puVar9;
    if (uVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 104c563a8; end: 104c564a3;  */

void FUN_104c563a8(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_104c564a4();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 104c564a4; end: 104c564d7;  */

void FUN_104c564a4(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  if (param_2 != 0) {
    plVar1 = (long *)*param_1;
    uVar3 = param_2 + (param_1[1] - *plVar1 >> 3) * 0x6db6db6db6db6db7;
    if ((long)uVar3 < 1) {
      uVar4 = (0x48 - uVar3) / 0x49;
      *param_1 = (long)(plVar1 + -uVar4);
      lVar2 = plVar1[-uVar4] + (uVar4 * 0x49 - (0x48 - uVar3)) * 0x38 + 0xfc0;
    }
    else {
      *param_1 = (long)(plVar1 + uVar3 / 0x49);
      lVar2 = plVar1[uVar3 / 0x49] + (uVar3 % 0x49) * 0x38;
    }
    param_1[1] = lVar2;
  }
  return;
}



/* Entry: 104c564d8; end: 104c5658b;  */

void FUN_104c564d8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    plVar1 = (long *)*param_1;
    uVar3 = param_2 + (param_1[1] - *plVar1 >> 3) * 0x6db6db6db6db6db7;
    if ((long)uVar3 < 1) {
      uVar4 = (0x48 - uVar3) / 0x49;
      *param_1 = (long)(plVar1 + -uVar4);
      lVar2 = plVar1[-uVar4] + (uVar4 * 0x49 - (0x48 - uVar3)) * 0x38 + 0xfc0;
    }
    else {
      *param_1 = (long)(plVar1 + uVar3 / 0x49);
      lVar2 = plVar1[uVar3 / 0x49] + (uVar3 % 0x49) * 0x38;
    }
    param_1[1] = lVar2;
  }
  return;
}



/* Entry: 104c5658c; end: 104c5672f;  */

void FUN_104c5658c(long *param_1,long param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  if (param_2 != param_3) {
    lVar6 = *param_4;
    lVar13 = param_3;
    while( true ) {
      lVar7 = (param_5 - lVar6 >> 3) * 0x6db6db6db6db6db7;
      lVar6 = (lVar13 - param_2 >> 3) * 0x6db6db6db6db6db7;
      if (lVar7 <= lVar6) {
        lVar6 = lVar7;
      }
      lVar7 = lVar13 + lVar6 * -0x38;
      if (lVar6 != 0) {
        lVar6 = 0;
        do {
          lVar1 = param_5 + lVar6;
          lVar2 = lVar13 + lVar6;
          if (lVar13 != param_5) {
            uVar8 = *(ulong *)(lVar1 + -0x30);
            uVar9 = uVar8;
            if ((uVar8 & 1) != 0) {
              uVar9 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
            }
            uVar11 = *(ulong *)(lVar13 + lVar6 + -0x30);
            uVar12 = uVar11;
            if ((uVar11 & 1) != 0) {
              uVar12 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
            }
            if (uVar9 == uVar12) {
              *(ulong *)(lVar1 + -0x30) = uVar11;
              *(ulong *)(lVar13 + lVar6 + -0x30) = uVar8;
              lVar3 = param_5 + lVar6;
              lVar4 = lVar13 + lVar6;
              uVar10 = *(undefined8 *)(lVar3 + -0x28);
              *(undefined8 *)(lVar3 + -0x28) = *(undefined8 *)(lVar4 + -0x28);
              *(undefined8 *)(lVar4 + -0x28) = uVar10;
              uVar10 = *(undefined8 *)(lVar3 + -0x20);
              *(undefined8 *)(lVar3 + -0x20) = *(undefined8 *)(lVar4 + -0x20);
              *(undefined8 *)(lVar4 + -0x20) = uVar10;
              uVar5 = *(undefined4 *)(lVar3 + -0x14);
              *(undefined4 *)(lVar3 + -0x14) = *(undefined4 *)(lVar4 + -0x14);
              *(undefined4 *)(lVar4 + -0x14) = uVar5;
            }
            else {
              func_0x00010ae19c8c(lVar1 + -0x38);
              func_0x00010ae19f9c(lVar1 + -0x38,lVar2 + -0x38);
            }
          }
          uVar10 = *(undefined8 *)(lVar2 + -0x10);
          *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(lVar2 + -8);
          *(undefined8 *)(lVar1 + -0x10) = uVar10;
          lVar6 = lVar6 + -0x38;
        } while (lVar2 + -0x38 != lVar7);
        param_5 = param_5 + lVar6;
      }
      if (lVar7 == param_2) break;
      param_4 = param_4 + -1;
      lVar6 = *param_4;
      param_5 = lVar6 + 0xff8;
      lVar13 = lVar7;
    }
    param_2 = param_3;
    if (*param_4 + 0xff8 == param_5) {
      param_4 = param_4 + 1;
      param_5 = *param_4;
    }
  }
  *param_1 = param_2;
  param_1[1] = (long)param_4;
  param_1[2] = param_5;
  return;
}



/* Entry: 104c56730; end: 104c568db;  */

void FUN_104c56730(long *param_1,long param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  if (param_2 != param_3) {
    lVar6 = *param_4;
    lVar13 = param_2;
    do {
      lVar7 = ((lVar6 - param_5) + 0xff8 >> 3) * 0x6db6db6db6db6db7;
      lVar6 = (param_3 - lVar13 >> 3) * 0x6db6db6db6db6db7;
      if (lVar7 <= lVar6) {
        lVar6 = lVar7;
      }
      param_2 = lVar13;
      if (lVar6 != 0) {
        lVar7 = 0;
        param_2 = lVar13 + lVar6 * 0x38;
        do {
          lVar1 = param_5 + lVar7;
          lVar2 = lVar13 + lVar7;
          if (lVar13 != param_5) {
            uVar8 = *(ulong *)(lVar1 + 8);
            uVar9 = uVar8;
            if ((uVar8 & 1) != 0) {
              uVar9 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
            }
            uVar11 = *(ulong *)(lVar13 + lVar7 + 8);
            uVar12 = uVar11;
            if ((uVar11 & 1) != 0) {
              uVar12 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
            }
            if (uVar9 == uVar12) {
              *(ulong *)(lVar1 + 8) = uVar11;
              *(ulong *)(lVar13 + lVar7 + 8) = uVar8;
              lVar3 = param_5 + lVar7;
              lVar4 = lVar13 + lVar7;
              uVar10 = *(undefined8 *)(lVar3 + 0x10);
              *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
              *(undefined8 *)(lVar4 + 0x10) = uVar10;
              uVar10 = *(undefined8 *)(lVar3 + 0x18);
              *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
              *(undefined8 *)(lVar4 + 0x18) = uVar10;
              uVar5 = *(undefined4 *)(lVar3 + 0x24);
              *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar4 + 0x24);
              *(undefined4 *)(lVar4 + 0x24) = uVar5;
            }
            else {
              func_0x00010ae19c8c(lVar1);
              func_0x00010ae19f9c(lVar1,lVar2);
            }
          }
          uVar10 = *(undefined8 *)(lVar2 + 0x28);
          *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
          *(undefined8 *)(lVar1 + 0x28) = uVar10;
          lVar7 = lVar7 + 0x38;
        } while (lVar6 * 0x38 != lVar7);
        if (param_3 == param_2) goto LAB_104c5688c;
      }
      param_4 = param_4 + 1;
      lVar6 = *param_4;
      param_5 = lVar6;
      lVar13 = param_2;
    } while( true );
  }
LAB_104c568b0:
  *param_1 = param_2;
  param_1[1] = (long)param_4;
  param_1[2] = param_5;
  return;
LAB_104c5688c:
  param_5 = param_5 + lVar7;
  if (param_5 == *param_4 + 0xff8) {
    param_4 = param_4 + 1;
    param_5 = *param_4;
  }
  goto LAB_104c568b0;
}



/* Entry: 104c568dc; end: 104c5698f;  */

undefined8 * FUN_104c568dc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *in_x6;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)in_x6[1];
  *in_x6 = 0;
  in_x6[1] = 0;
  FUN_104c52fec();
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
  *param_1 = &PTR_FUN_1107ec980;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  *(undefined8 *)((long)param_1 + 0x3c4) = 0;
  *(undefined8 *)((long)param_1 + 0x3bc) = 0;
  return param_1;
}



/* Entry: 104c56990; end: 104c569f3;  */

undefined8 * FUN_104c56990(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 104c569f4; end: 104c56b2b;  */

void FUN_104c569f4(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined **ppuStack_48;
  ulong uStack_40;
  long lStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  ppuVar4 = &PTR_PTR_1130a8958;
  func_0x00010ae079a0(0,&PTR_PTR_1130a8958);
  func_0x00010ae07cd4(ppuVar4,&PTR_PTR_1130a8958);
  if (*(char *)((long)param_1 + 0x3c7) < '\0') {
    if (param_1[0x77] == 0) {
      return;
    }
  }
  else if (*(char *)((long)param_1 + 0x3c7) == '\0') {
    return;
  }
  uStack_28 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  ppuStack_48 = &PTR_DAT_110c7a6e0;
  func_0x00010ae194bc(&ppuStack_48);
  uStack_28 = CONCAT44(0xc,(undefined4)uStack_28);
  uVar3 = uStack_40;
  if ((uStack_40 & 1) != 0) {
    uVar3 = *(ulong *)(uStack_40 & 0xfffffffffffffffe);
  }
  func_0x000104c57028();
  uVar5 = *(ulong *)(uVar3 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  lVar1 = uVar3 + 0x18;
  uStack_30 = uVar3;
  func_0x0001001a53d4(lVar1,param_1 + 0x76,uVar5);
  *(uint *)(uVar3 + 0x28) = (uint)((int)param_1[0x79] == 1);
  __ZNSt3__16chrono12system_clock3nowEv();
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x10))();
  lStack_38 = lVar1 / 1000 - (long)plVar2;
  FUN_104c547d8(param_1,&ppuStack_48,0xffffffff);
  func_0x00010ae19c2c(&ppuStack_48);
  return;
}



/* Entry: 104c56b2c; end: 104c56cb3;  */

void FUN_104c56b2c(long param_1,long param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined1 uStack_39;
  char *pcStack_38;
  
  pcStack_38 = "NONE";
  if (*(char **)(param_2 + 8) != (char *)0x0) {
    pcStack_38 = *(char **)(param_2 + 8);
  }
  uStack_39 = *(undefined1 *)(param_1 + 0x2f9);
  func_0x000104c57214(param_2,&pcStack_38,&uStack_39);
  ppuVar2 = &PTR_PTR_1130a8980;
  func_0x00010ae079a0();
  func_0x000104c5724c();
  func_0x00010ae07cd4(ppuVar2,&PTR_PTR_1130a8980);
  if ((((*(byte *)(param_1 + 0x2f9) & 1) == 0) && (*(long *)(param_1 + 0x3a0) != 0)) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x38), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
  }
  return;
}



/* Entry: 104c56cb4; end: 104c56eab;  */

void FUN_104c56cb4(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x5f) & 1) != 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 < 0x19) {
    if (iVar1 != 0xe) {
      if (iVar1 != 0xf) {
        return;
      }
      ppuVar5 = &PTR_PTR_1130a89f8;
      func_0x00010ae079a0(0,&PTR_PTR_1130a89f8);
      func_0x00010ae07cd4(ppuVar5,&PTR_PTR_1130a89f8);
      if (param_1[0x74] == 0) {
        return;
      }
      plVar2 = *(long **)(param_1[0x74] + 0x18);
      if (plVar2 == (long *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000104c56d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x30))();
      return;
    }
    func_0x000104c575e0(&ppuStack_58,*(undefined8 *)(param_2 + 0x18));
    if (param_1[0x74] == 0) {
      return;
    }
    plVar2 = *(long **)(param_1[0x74] + 0x58);
  }
  else {
    if (iVar1 == 0x19) {
      uStack_38 = 0;
      uStack_50 = 0;
      lStack_48 = 0;
      ppuStack_58 = &PTR_DAT_110c7a6e0;
      uVar6 = *(ulong *)(param_2 + 0x18);
      func_0x00010ae194bc(&ppuStack_58);
      uStack_38 = CONCAT44(0x19,(undefined4)uStack_38);
      uVar3 = uStack_50;
      if ((uStack_50 & 1) != 0) {
        uVar3 = *(ulong *)(uStack_50 & 0xfffffffffffffffe);
      }
      func_0x000104c57084();
      uStack_40 = uVar3;
      if (uVar6 != uVar3) {
        func_0x00010ae18990(uVar3);
        func_0x00010ae1892c(uVar3,uVar6);
      }
      __ZNSt3__16chrono12system_clock3nowEv();
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x10))();
      lStack_48 = (long)uVar3 / 1000 - (long)plVar2;
      FUN_104c547d8(param_1,&ppuStack_58,0xffffffff);
      func_0x00010ae19c2c(&ppuStack_58);
      return;
    }
    if (iVar1 != 0x1c) {
      return;
    }
    lStack_48 = *(undefined8 *)(param_2 + 0x10);
    ppuVar5 = (undefined **)(*(ulong *)(*(long *)(param_2 + 0x18) + 0x10) & 0xfffffffffffffffc);
    ppuStack_58 = (undefined **)*ppuVar5;
    if (-1 < *(char *)((long)ppuVar5 + 0x17)) {
      ppuStack_58 = ppuVar5;
    }
    puVar4 = (ulong *)(*(ulong *)(*(long *)(param_2 + 0x18) + 0x18) & 0xfffffffffffffffc);
    uStack_50 = *puVar4;
    if (-1 < *(char *)((long)puVar4 + 0x17)) {
      uStack_50 = (ulong)puVar4;
    }
    if (param_1[0x74] == 0) {
      return;
    }
    plVar2 = *(long **)(param_1[0x74] + 0x78);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&ppuStack_58);
  }
  return;
}



/* Entry: 104c56eac; end: 104c56f9b;  */

void FUN_104c56eac(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined **ppuStack_48;
  ulong uStack_40;
  long lStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  ppuStack_48 = &PTR_DAT_110c7a6e0;
  func_0x00010ae194bc(&ppuStack_48);
  uStack_28 = CONCAT44(0x1b,(undefined4)uStack_28);
  uStack_30 = uStack_40;
  if ((uStack_40 & 1) != 0) {
    uStack_30 = *(ulong *)(uStack_40 & 0xfffffffffffffffe);
  }
  func_0x000104c570cc();
  uVar3 = *(ulong *)(uStack_30 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  lVar1 = uStack_30 + 0x10;
  func_0x0001001a53d4(lVar1,param_2,uVar3);
  __ZNSt3__16chrono12system_clock3nowEv();
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x10))();
  lStack_38 = lVar1 / 1000 - (long)plVar2;
  FUN_104c547d8(param_1,&ppuStack_48,0xffffffff);
  func_0x00010ae19c2c(&ppuStack_48);
  return;
}



/* Entry: 104c56f9c; end: 104c5727f;  */

undefined8 * FUN_104c56f9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec980;
  if (*(char *)((long)param_1 + 0x3c7) < '\0') {
    __ZdlPv(param_1[0x76]);
  }
  func_0x000104c571bc(param_1 + 0x74);
  *param_1 = &PTR_FUN_1107ec718;
  func_0x000104c4fda0(param_1 + 0x72);
  if (*(char *)((long)param_1 + 0x38f) < '\0') {
    __ZdlPv(param_1[0x6f]);
  }
  FUN_104c5594c(param_1 + 0x68);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  __ZNSt3__15mutexD1Ev(param_1 + 0x57);
  FUN_104c558f4(param_1 + 0x54);
  func_0x00010ae19c2c(param_1 + 0x4f);
  if (*(char *)((long)param_1 + 0x277) < '\0') {
    __ZdlPv(param_1[0x4c]);
  }
  if (*(char *)((long)param_1 + 0x25f) < '\0') {
    __ZdlPv(param_1[0x49]);
  }
  FUN_104c4f64c(param_1 + 0x39);
  func_0x000100836b24(param_1 + 1);
  return param_1;
}



/* Entry: 104c57280; end: 104c572df;  */

void FUN_104c57280(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  puVar1 = (ulong *)*puVar2;
  if (-1 < *(char *)((long)puVar2 + 0x17)) {
    puVar1 = puVar2;
  }
  *param_1 = (ulong)puVar1;
  param_1[1] = *(ulong *)(param_2 + 0x28);
  puVar2 = (ulong *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
  puVar1 = (ulong *)*puVar2;
  if (-1 < *(char *)((long)puVar2 + 0x17)) {
    puVar1 = puVar2;
  }
  param_1[2] = (ulong)puVar1;
  puVar2 = (ulong *)(*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc);
  puVar1 = (ulong *)*puVar2;
  if (-1 < *(char *)((long)puVar2 + 0x17)) {
    puVar1 = puVar2;
  }
  param_1[3] = (ulong)puVar1;
  return;
}



/* Entry: 104c572e0; end: 104c5737f;  */

void FUN_104c572e0(long *param_1,long *param_2,ulong *param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (0 < (int)param_3[1]) {
    lVar2 = 0;
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = 8;
    do {
      puVar1 = param_3;
      if ((*param_3 & 1) != 0) {
        puVar1 = (ulong *)(*param_3 + lVar5 + -1);
      }
      FUN_104c57380(*param_1 + lVar2,*param_2 + lVar3,*puVar1);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 8;
      lVar3 = lVar3 + 0x18;
      lVar2 = lVar2 + 0x38;
    } while (lVar4 < (int)param_3[1]);
  }
  return;
}



/* Entry: 104c57380; end: 104c574c3;  */

void FUN_104c57380(ulong *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  
  puVar3 = (ulong *)(*(ulong *)(param_3 + 0x10) & 0xfffffffffffffffc);
  puVar2 = (ulong *)*puVar3;
  if (-1 < *(char *)((long)puVar3 + 0x17)) {
    puVar2 = puVar3;
  }
  *param_1 = (ulong)puVar2;
  puVar3 = (ulong *)(*(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
  puVar2 = (ulong *)*puVar3;
  if (-1 < *(char *)((long)puVar3 + 0x17)) {
    puVar2 = puVar3;
  }
  param_1[1] = (ulong)puVar2;
  param_1[6] = *(ulong *)(param_3 + 0x38);
  puVar2 = (ulong *)(*(ulong *)(param_3 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    if (puVar2[1] == 0) goto LAB_104c5745c;
    puVar2 = (ulong *)*puVar2;
  }
  else if (*(char *)((long)puVar2 + 0x17) == '\0') goto LAB_104c5745c;
  FUN_104c58fe8(&lStack_48,puVar2);
  FUN_104c58c64(&uStack_60,lStack_48,lStack_40,lStack_40 - lStack_48);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __ZdlPv(*param_2);
  }
  param_2[1] = uStack_58;
  *param_2 = uStack_60;
  param_2[2] = uStack_50;
  puVar1 = (undefined8 *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    puVar1 = param_2;
  }
  param_1[2] = (ulong)puVar1;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
LAB_104c5745c:
  puVar3 = (ulong *)(*(ulong *)(param_3 + 0x20) & 0xfffffffffffffffc);
  puVar2 = (ulong *)*puVar3;
  if (-1 < *(char *)((long)puVar3 + 0x17)) {
    puVar2 = puVar3;
  }
  param_1[3] = (ulong)puVar2;
  puVar3 = (ulong *)(*(ulong *)(param_3 + 0x30) & 0xfffffffffffffffc);
  puVar2 = (ulong *)*puVar3;
  if (-1 < *(char *)((long)puVar3 + 0x17)) {
    puVar2 = puVar3;
  }
  param_1[4] = (ulong)puVar2;
  return;
}



/* Entry: 104c574c4; end: 104c5783f;  */

void FUN_104c574c4(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  
  uVar2 = (ulong)(uint)param_2[1];
  if (0 < (int)(uint)param_2[1]) {
    lVar3 = 8;
    lVar4 = 8;
    do {
      puVar5 = param_2;
      if ((*param_2 & 1) != 0) {
        puVar5 = (ulong *)(*param_2 + lVar4 + -1);
      }
      puVar5 = (ulong *)*puVar5;
      puVar1 = (ulong *)*puVar5;
      if (-1 < *(char *)((long)puVar5 + 0x17)) {
        puVar1 = puVar5;
      }
      *(ulong **)(*param_1 + lVar3) = puVar1;
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + 0x38;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 104c57840; end: 104c578ff;  */

void FUN_104c57840(long *param_1,long *param_2,ulong *param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (0 < (int)param_3[1]) {
    lVar4 = 0;
    lVar5 = 0;
    lVar6 = 0x30;
    lVar7 = 8;
    do {
      puVar1 = param_3;
      if ((*param_3 & 1) != 0) {
        puVar1 = (ulong *)(*param_3 + lVar7 + -1);
      }
      uVar3 = *puVar1;
      lVar2 = *param_1;
      lVar8 = *param_2;
      func_0x000104c57770((undefined8 *)(lVar2 + lVar6) + -6,uVar3);
      FUN_104c57900(lVar8 + lVar4,uVar3);
      *(undefined8 *)(lVar2 + lVar6) = *(undefined8 *)(lVar8 + lVar4);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
      lVar6 = lVar6 + 0x40;
      lVar7 = lVar7 + 8;
    } while (lVar5 < (int)param_3[1]);
  }
  return;
}



/* Entry: 104c57900; end: 104c57a73;  */

void FUN_104c57900(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long *plStack_40;
  long *plStack_38;
  
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
    plStack_40 = (long *)0x0;
    plStack_38 = (long *)0x0;
    FUN_104c57a74(param_1,&plStack_40);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    lVar5 = *(long *)(param_2 + 0x38);
    plVar4 = (long *)0x40;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_1107ec9e0;
    plVar4[6] = 0;
    plVar4[5] = 0;
    plVar4[7] = 0;
    plStack_40 = plVar4 + 3;
    plVar4[4] = 0;
    *plStack_40 = 0;
    plStack_38 = plVar4;
    FUN_104c57a74(param_1,&plStack_40);
    plVar4 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    puVar7 = (ulong *)(*(ulong *)(lVar5 + 0x10) & 0xfffffffffffffffc);
    puVar8 = (ulong *)*puVar7;
    if (-1 < *(char *)((long)puVar7 + 0x17)) {
      puVar8 = puVar7;
    }
    *(ulong **)*param_1 = puVar8;
    puVar7 = (ulong *)(*(ulong *)(lVar5 + 0x18) & 0xfffffffffffffffc);
    puVar8 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) < '\0') {
      puVar8 = (ulong *)*puVar7;
    }
    lVar6 = *param_1;
    *(ulong **)(lVar6 + 8) = puVar8;
    uVar9 = (ulong)*(char *)((long)puVar7 + 0x17);
    if ((long)uVar9 < 0) {
      uVar9 = puVar7[1];
    }
    *(ulong *)(lVar6 + 0x10) = uVar9;
    puVar7 = (ulong *)(*(ulong *)(lVar5 + 0x20) & 0xfffffffffffffffc);
    puVar8 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) < '\0') {
      puVar8 = (ulong *)*puVar7;
    }
    *(ulong **)(lVar6 + 0x18) = puVar8;
    uVar9 = (ulong)*(char *)((long)puVar7 + 0x17);
    if ((long)uVar9 < 0) {
      uVar9 = puVar7[1];
    }
    *(ulong *)(lVar6 + 0x20) = uVar9;
  }
  return;
}



/* Entry: 104c57a74; end: 104c57ad7;  */

undefined8 * FUN_104c57a74(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 104c57ad8; end: 104c57e0f;  */

void FUN_104c57ad8(long *param_1,long *param_2,long *param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  long *plVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  ulong uVar31;
  ulong uVar32;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  undefined4 *puStack_1b0;
  uint uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  long lStack_188;
  ulong uStack_180;
  ulong uStack_178;
  long lStack_170;
  long *plStack_168;
  long lStack_160;
  long *plStack_158;
  undefined1 ***pppuStack_150;
  code *pcStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long *plStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  ulong *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  ulong uStack_a8;
  long *plStack_a0;
  ulong *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined4 *puStack_70;
  uint uStack_68;
  
  puVar20 = (ulong *)((long)param_4 + 0x10);
  puVar12 = puVar20;
  if ((*puVar20 & 1) != 0) {
    puVar12 = (ulong *)(*puVar20 + 7);
  }
  if (*(int *)((long)param_4 + 0x18) == 0) {
    uVar31 = 0;
  }
  else {
    uVar31 = 0;
    lVar13 = (long)*(int *)((long)param_4 + 0x18) << 3;
    do {
      uVar31 = (ulong)(uint)(*(int *)(*puVar12 + 0x18) + (int)uVar31);
      lVar13 = lVar13 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar13 != 0);
  }
  iVar30 = (int)uVar31;
  uVar26 = (ulong)iVar30;
  lVar13 = *param_2;
  lVar27 = param_2[1];
  lVar28 = lVar27 - lVar13;
  uVar24 = lVar28 >> 6;
  plStack_a0 = param_1;
  if (uVar26 <= uVar24) {
    if (uVar26 < uVar24) {
      param_2[1] = lVar13 + uVar26 * 0x40;
    }
LAB_104c57c30:
    FUN_104c57e10(param_3,uVar26);
    if ((*(ulong *)((long)param_4 + 0x10) & 1) != 0) {
      puVar20 = (ulong *)(*(ulong *)((long)param_4 + 0x10) + 7);
    }
    if (*(int *)((long)param_4 + 0x18) != 0) {
      lVar13 = 0;
      puStack_98 = puVar20 + *(int *)((long)param_4 + 0x18);
      do {
        puVar12 = (ulong *)(*puVar20 + 0x10);
        uVar31 = *puVar12;
        if ((uVar31 & 1) != 0) {
          puVar12 = (ulong *)(uVar31 + 7);
        }
        iVar5 = *(int *)(*puVar20 + 0x18);
        if (iVar5 != 0) {
          lVar13 = (long)(int)lVar13;
          puVar18 = puVar12 + iVar5;
          do {
            uVar31 = *puVar12;
            puVar1 = (ulong *)(*param_2 + lVar13 * 0x40);
            iVar5 = *(int *)(uVar31 + 0x50);
            if (2 < iVar5 - 1U) {
              iVar5 = 0;
            }
            *(int *)(puVar1 + 4) = iVar5;
            puVar14 = (ulong *)(*(ulong *)(uVar31 + 0x38) & 0xfffffffffffffffc);
            if (*(char *)((long)puVar14 + 0x17) < '\0') {
              puVar14 = (ulong *)*puVar14;
            }
            puVar1[3] = (ulong)puVar14;
            puVar14 = (ulong *)(*(ulong *)(uVar31 + 0x40) & 0xfffffffffffffffc);
            if (*(char *)((long)puVar14 + 0x17) < '\0') {
              puVar14 = (ulong *)*puVar14;
            }
            puVar1[6] = (ulong)puVar14;
            *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(uVar31 + 0x54);
            *(undefined1 *)((long)puVar1 + 0x39) = *(undefined1 *)(uVar31 + 0x55);
            puVar14 = (ulong *)(*(ulong *)(uVar31 + 0x30) & 0xfffffffffffffffc);
            if (*(char *)((long)puVar14 + 0x17) < '\0') {
              puVar14 = (ulong *)*puVar14;
            }
            *puVar1 = (ulong)puVar14;
            puStack_70 = (undefined4 *)(uVar31 + 0x10);
            uVar4 = *puStack_70;
            puVar1[5] = *(ulong *)(uVar31 + 0x48);
            *(undefined4 *)(puVar1 + 2) = uVar4;
            uStack_68 = *(uint *)(uVar31 + 0x1c);
            if (uStack_68 != *(uint *)(uVar31 + 0x14)) {
              uStack_78 = *(ulong *)(*(long *)(uVar31 + 0x20) + (ulong)uStack_68 * 8);
              if ((uStack_78 & 1) != 0) {
                uStack_78 = *(ulong *)(**(long **)(uStack_78 - 1) + 0x20);
              }
              do {
                lStack_90 = uStack_78 + 8;
                if (*(char *)(uStack_78 + 0x1f) < '\0') {
                  lStack_90 = *(long *)lStack_90;
                }
                lStack_80 = (long)*(char *)(uStack_78 + 0x37);
                if (lStack_80 < 0) {
                  lStack_88 = *(long *)(uStack_78 + 0x20);
                  lStack_80 = *(long *)(uStack_78 + 0x28);
                }
                else {
                  lStack_88 = uStack_78 + 0x20;
                }
                FUN_104c57fbc(*param_3 + lVar13 * 0x18,&lStack_90);
                func_0x00010063bf60(&uStack_78);
              } while (uStack_78 != 0);
            }
            puVar1[1] = *(ulong *)(*param_3 + lVar13 * 0x18);
            lVar13 = lVar13 + 1;
            puVar12 = puVar12 + 1;
          } while (puVar12 != puVar18);
        }
        puVar20 = puVar20 + 1;
      } while (puVar20 != puStack_98);
    }
    *(int *)(plStack_a0 + 1) = iVar30;
    *plStack_a0 = *param_2;
    return;
  }
  uVar32 = uVar26 - uVar24;
  puStack_98 = param_4;
  if (uVar32 <= (ulong)(param_2[2] - lVar27 >> 6)) {
    _bzero(lVar27,uVar32 * 0x40);
    param_2[1] = lVar27 + uVar32 * 0x40;
    param_4 = puStack_98;
    goto LAB_104c57c30;
  }
  plVar21 = param_2;
  plVar10 = param_3;
  if (iVar30 < 0) {
    func_0x000104c58cfc();
  }
  else {
    uVar11 = param_2[2] - lVar13;
    uStack_a8 = (long)uVar11 >> 5;
    if (uStack_a8 <= uVar26) {
      uStack_a8 = uVar26;
    }
    if (0x7fffffffffffffbf < uVar11) {
      uStack_a8 = 0x3ffffffffffffff;
    }
    if (uStack_a8 >> 0x3a == 0) {
      lVar7 = uStack_a8 << 6;
      __Znwm();
      lVar27 = lVar7 + lVar28;
      uStack_a8 = lVar7 + uStack_a8 * 0x40;
      _bzero(lVar27,uVar32 * 0x40);
      lVar7 = lVar27 + uVar24 * -0x40;
      _memcpy(lVar7,lVar13,lVar28);
      param_4 = puStack_98;
      *param_2 = lVar7;
      param_2[1] = lVar27 + uVar32 * 0x40;
      param_2[2] = uStack_a8;
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
      }
      goto LAB_104c57c30;
    }
  }
  func_0x000104c4f740();
  pcStack_b8 = FUN_104c57e10;
  lVar7 = *param_1;
  plVar23 = (long *)param_1[1];
  lVar22 = (long)plVar23 - lVar7;
  bVar6 = plVar21 < (long *)((lVar22 >> 3) * -0x5555555555555555);
  uVar11 = (long)plVar21 + (lVar22 >> 3) * 0x5555555555555555;
  lStack_100 = lVar27;
  lStack_f8 = lVar28;
  lStack_f0 = lVar13;
  uStack_e8 = uVar26;
  uStack_e0 = uVar24;
  plStack_d8 = param_3;
  plStack_d0 = param_2;
  puStack_c8 = puVar20;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (bVar6 || uVar11 == 0) {
    if (bVar6) {
      plVar21 = (long *)(lVar7 + (long)plVar21 * 0x18);
      while (plVar10 = plVar23, plVar10 != plVar21) {
        plVar23 = plVar10 + -3;
        if (*plVar23 != 0) {
          plVar10[-2] = *plVar23;
          __ZdlPv();
        }
      }
      param_1[1] = (long)plVar21;
    }
    return;
  }
  if (uVar11 <= (ulong)((param_1[2] - (long)plVar23 >> 3) * -0x5555555555555555)) {
    uVar31 = (uVar11 * 0x18 - 0x18) / 0x18;
    _bzero(plVar23,uVar31 * 0x18 + 0x18);
    param_1[1] = (long)(plVar23 + uVar31 * 3 + 3);
    return;
  }
  plVar8 = param_1;
  if (plVar21 < (long *)0xaaaaaaaaaaaaaab) {
    lVar13 = param_1[2] - lVar7 >> 3;
    plVar16 = (long *)(lVar13 * 0x5555555555555556);
    if (plVar16 < plVar21 || (long)plVar16 - (long)plVar21 == 0) {
      plVar16 = plVar21;
    }
    if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
      plVar16 = (long *)0xaaaaaaaaaaaaaaa;
    }
    lVar28 = -0x5555555555555555;
    if (plVar16 < (long *)0xaaaaaaaaaaaaaab) {
      lVar13 = (long)plVar16 * 0x18;
      __Znwm();
      lVar27 = ((uVar11 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar13 + lVar22,lVar27);
      _memcpy(lVar13,lVar7,lVar22);
      *param_1 = lVar13;
      param_1[1] = lVar13 + lVar22 + lVar27;
      param_1[2] = lVar13 + (long)plVar16 * 0x18;
      if (lVar7 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar7);
      return;
    }
  }
  else {
    func_0x000104c58d10();
  }
  func_0x000104c4f740();
  pcStack_108 = FUN_104c57fbc;
  plVar16 = (long *)plVar8[1];
  if (plVar16 < (long *)plVar8[2]) {
    lVar27 = plVar21[1];
    lVar13 = *plVar21;
    plVar16[2] = plVar21[2];
    plVar16[1] = lVar27;
    *plVar16 = lVar13;
    plVar16 = plVar16 + 3;
LAB_104c580a4:
    plVar8[1] = (long)plVar16;
    return;
  }
  lVar13 = *plVar8;
  lVar25 = (long)plVar16 - lVar13;
  uVar24 = (lVar25 >> 3) * -0x5555555555555555 + 1;
  plVar16 = plVar8;
  plVar9 = plVar21;
  uStack_140 = uVar11;
  uStack_138 = uVar26;
  plStack_130 = plVar23;
  lStack_128 = lVar22;
  lStack_120 = lVar7;
  plStack_118 = param_1;
  ppuStack_110 = &puStack_c0;
  if (uVar24 < 0xaaaaaaaaaaaaaab) {
    lVar7 = plVar8[2] - lVar13 >> 3;
    uVar17 = lVar7 * 0x5555555555555556;
    if (uVar17 < uVar24 || uVar17 - uVar24 == 0) {
      uVar17 = uVar24;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar17 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar17 < 0xaaaaaaaaaaaaaab) {
      lVar27 = uVar17 * 0x18;
      __Znwm();
      plVar16 = (long *)(lVar27 + lVar25);
      lVar28 = *plVar21;
      plVar16[1] = plVar21[1];
      *plVar16 = lVar28;
      plVar16[2] = plVar21[2];
      plVar16 = plVar16 + 3;
      _memcpy();
      *plVar8 = lVar27;
      plVar8[1] = (long)plVar16;
      plVar8[2] = lVar27 + uVar17 * 0x18;
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
      }
      goto LAB_104c580a4;
    }
  }
  else {
    func_0x000104c58d24();
  }
  func_0x000104c4f740();
  pcStack_148 = FUN_104c580c4;
  puVar20 = (ulong *)((long)param_4 + 0x10);
  puVar12 = puVar20;
  if ((*puVar20 & 1) != 0) {
    puVar12 = (ulong *)(*puVar20 + 7);
  }
  if (*(int *)((long)param_4 + 0x18) == 0) {
    iVar30 = 0;
  }
  else {
    iVar30 = 0;
    lVar7 = (long)*(int *)((long)param_4 + 0x18) << 3;
    do {
      iVar30 = *(int *)(*puVar12 + 0x18) + iVar30;
      lVar7 = lVar7 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar7 != 0);
  }
  uVar24 = (ulong)iVar30;
  lVar22 = *plVar9;
  lVar7 = plVar9[1];
  lVar29 = lVar7 - lVar22;
  uVar17 = lVar29 >> 5;
  uStack_1a0 = uVar32;
  uStack_198 = uVar31;
  lStack_190 = lVar27;
  lStack_188 = lVar28;
  uStack_180 = uVar11;
  uStack_178 = uVar26;
  lStack_170 = lVar25;
  plStack_168 = plVar21;
  lStack_160 = lVar13;
  plStack_158 = plVar8;
  pppuStack_150 = &ppuStack_110;
  if (uVar17 < uVar24) {
    uVar31 = uVar24 - uVar17;
    if ((ulong)(plVar9[2] - lVar7 >> 5) < uVar31) {
      if (iVar30 < 0) {
        func_0x000104c58d38();
      }
      else {
        uVar32 = plVar9[2] - lVar22;
        uVar26 = (long)uVar32 >> 4;
        if (uVar26 <= uVar24) {
          uVar26 = uVar24;
        }
        if (0x7fffffffffffffdf < uVar32) {
          uVar26 = 0x7ffffffffffffff;
        }
        if (uVar26 >> 0x3b == 0) {
          lVar27 = uVar26 << 5;
          __Znwm();
          lVar13 = lVar27 + lVar29;
          _bzero(lVar13,uVar31 * 0x20);
          lVar28 = lVar13 + uVar17 * -0x20;
          _memcpy(lVar28,lVar22,lVar29);
          *plVar9 = lVar28;
          plVar9[1] = lVar13 + uVar31 * 0x20;
          plVar9[2] = lVar27 + uVar26 * 0x20;
          if (lVar22 != 0) {
            __ZdlPv(lVar22);
          }
          goto LAB_104c58204;
        }
      }
      func_0x000104c4f740();
      puVar20 = (ulong *)(plVar10 + 2);
      puVar12 = puVar20;
      if ((*puVar20 & 1) != 0) {
        puVar12 = (ulong *)(*puVar20 + 7);
      }
      if ((int)plVar10[3] == 0) {
        iVar30 = 0;
      }
      else {
        iVar30 = 0;
        lVar13 = (long)(int)plVar10[3] << 3;
        do {
          iVar30 = *(int *)(*puVar12 + 0x18) + iVar30;
          lVar13 = lVar13 + -8;
          puVar12 = puVar12 + 1;
        } while (lVar13 != 0);
      }
      FUN_104c584e4(plVar9,(long)iVar30);
      if ((plVar10[2] & 1U) != 0) {
        puVar20 = (ulong *)(plVar10[2] + 7);
      }
      if ((int)plVar10[3] != 0) {
        uVar31 = 0;
        puVar12 = puVar20 + (int)plVar10[3];
        do {
          uVar24 = *puVar20;
          uVar26 = *(ulong *)(uVar24 + 0x10);
          puVar18 = (ulong *)(uVar24 + 0x10);
          if ((uVar26 & 1) != 0) {
            puVar18 = (ulong *)(uVar26 + 7);
          }
          if (*(int *)(uVar24 + 0x18) != 0) {
            uVar26 = -(uVar31 >> 0x1f) & 0xfffffff000000000 | uVar31 << 4;
            lVar13 = (long)*(int *)(uVar24 + 0x18) * 8;
            uVar31 = (ulong)((int)uVar31 + (int)(lVar13 - 8U >> 3) + 1);
            do {
              puVar19 = (undefined8 *)*puVar18;
              lVar27 = *plVar9;
              puVar3 = (undefined8 *)*puVar19;
              if (-1 < *(char *)((long)puVar19 + 0x17)) {
                puVar3 = puVar19;
              }
              *(undefined8 *)(lVar27 + uVar26) = puVar3;
              puVar19 = (undefined8 *)(*(ulong *)(uVar24 + 0x28) & 0xfffffffffffffffc);
              puVar3 = (undefined8 *)*puVar19;
              if (-1 < *(char *)((long)puVar19 + 0x17)) {
                puVar3 = puVar19;
              }
              ((undefined8 *)(lVar27 + uVar26))[1] = puVar3;
              uVar26 = uVar26 + 0x10;
              lVar13 = lVar13 + -8;
              puVar18 = puVar18 + 1;
            } while (lVar13 != 0);
          }
          puVar20 = puVar20 + 1;
        } while (puVar20 != puVar12);
      }
      *(int *)(plVar16 + 1) = iVar30;
      *plVar16 = *plVar9;
      return;
    }
    _bzero(lVar7,uVar31 * 0x20);
    lVar7 = lVar7 + uVar31 * 0x20;
  }
  else {
    if (uVar17 <= uVar24) goto LAB_104c58204;
    lVar7 = lVar22 + uVar24 * 0x20;
  }
  plVar9[1] = lVar7;
LAB_104c58204:
  FUN_104c57e10(plVar10,uVar24);
  if ((*(ulong *)((long)param_4 + 0x10) & 1) != 0) {
    puVar20 = (ulong *)(*(ulong *)((long)param_4 + 0x10) + 7);
  }
  if (*(int *)((long)param_4 + 0x18) != 0) {
    lVar13 = 0;
    puVar12 = puVar20 + *(int *)((long)param_4 + 0x18);
    do {
      uVar24 = *puVar20;
      uVar31 = *(ulong *)(uVar24 + 0x10);
      puVar18 = (ulong *)(uVar24 + 0x10);
      if ((uVar31 & 1) != 0) {
        puVar18 = (ulong *)(uVar31 + 7);
      }
      if (*(int *)(uVar24 + 0x18) != 0) {
        lVar13 = (long)(int)lVar13;
        puVar1 = puVar18 + *(int *)(uVar24 + 0x18);
        do {
          uVar31 = *puVar18;
          puVar14 = (ulong *)(*plVar9 + lVar13 * 0x20);
          puVar15 = (ulong *)(*(ulong *)(uVar31 + 0x30) & 0xfffffffffffffffc);
          puVar2 = (ulong *)*puVar15;
          if (-1 < *(char *)((long)puVar15 + 0x17)) {
            puVar2 = puVar15;
          }
          *puVar14 = (ulong)puVar2;
          puVar15 = (ulong *)(*(ulong *)(uVar24 + 0x28) & 0xfffffffffffffffc);
          puVar2 = (ulong *)*puVar15;
          if (-1 < *(char *)((long)puVar15 + 0x17)) {
            puVar2 = puVar15;
          }
          puStack_1b0 = (undefined4 *)(uVar31 + 0x10);
          uVar4 = *puStack_1b0;
          puVar14[3] = (ulong)puVar2;
          *(undefined4 *)(puVar14 + 2) = uVar4;
          uStack_1a8 = *(uint *)(uVar31 + 0x1c);
          if (uStack_1a8 != *(uint *)(uVar31 + 0x14)) {
            uStack_1b8 = *(ulong *)(*(long *)(uVar31 + 0x20) + (ulong)uStack_1a8 * 8);
            if ((uStack_1b8 & 1) != 0) {
              uStack_1b8 = *(ulong *)(**(long **)(uStack_1b8 - 1) + 0x20);
            }
            do {
              lStack_1d0 = uStack_1b8 + 8;
              if (*(char *)(uStack_1b8 + 0x1f) < '\0') {
                lStack_1d0 = *(long *)lStack_1d0;
              }
              lStack_1c0 = (long)*(char *)(uStack_1b8 + 0x37);
              if (lStack_1c0 < 0) {
                lStack_1c8 = *(long *)(uStack_1b8 + 0x20);
                lStack_1c0 = *(long *)(uStack_1b8 + 0x28);
              }
              else {
                lStack_1c8 = uStack_1b8 + 0x20;
              }
              FUN_104c57fbc(*plVar10 + lVar13 * 0x18,&lStack_1d0);
              func_0x00010063bf60(&uStack_1b8);
            } while (uStack_1b8 != 0);
          }
          puVar14[1] = *(ulong *)(*plVar10 + lVar13 * 0x18);
          lVar13 = lVar13 + 1;
          puVar18 = puVar18 + 1;
        } while (puVar18 != puVar1);
      }
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar12);
  }
  *(int *)(plVar16 + 1) = iVar30;
  *plVar16 = *plVar9;
  return;
}



/* Entry: 104c57e10; end: 104c57fbb;  */

void FUN_104c57e10(long *param_1,long *param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long *plVar6;
  bool bVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  ulong *puVar25;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  undefined4 *puStack_100;
  uint uStack_f8;
  
  lVar20 = *param_1;
  plVar13 = (long *)param_1[1];
  lVar21 = (long)plVar13 - lVar20;
  bVar7 = param_2 < (long *)((lVar21 >> 3) * -0x5555555555555555);
  uVar14 = (long)param_2 + (lVar21 >> 3) * 0x5555555555555555;
  if (bVar7 || uVar14 == 0) {
    if (bVar7) {
      plVar19 = (long *)(lVar20 + (long)param_2 * 0x18);
      while (plVar6 = plVar13, plVar6 != plVar19) {
        plVar13 = plVar6 + -3;
        if (*plVar13 != 0) {
          plVar6[-2] = *plVar13;
          __ZdlPv();
        }
      }
      param_1[1] = (long)plVar19;
    }
    return;
  }
  if (uVar14 <= (ulong)((param_1[2] - (long)plVar13 >> 3) * -0x5555555555555555)) {
    uVar14 = (uVar14 * 0x18 - 0x18) / 0x18;
    _bzero(plVar13,uVar14 * 0x18 + 0x18);
    param_1[1] = (long)(plVar13 + uVar14 * 3 + 3);
    return;
  }
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    lVar10 = param_1[2] - lVar20 >> 3;
    plVar13 = (long *)(lVar10 * 0x5555555555555556);
    if (plVar13 < param_2 || (long)plVar13 - (long)param_2 == 0) {
      plVar13 = param_2;
    }
    if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
      plVar13 = (long *)0xaaaaaaaaaaaaaaa;
    }
    if (plVar13 < (long *)0xaaaaaaaaaaaaaab) {
      lVar10 = (long)plVar13 * 0x18;
      __Znwm();
      lVar23 = ((uVar14 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar10 + lVar21,lVar23);
      _memcpy(lVar10,lVar20,lVar21);
      *param_1 = lVar10;
      param_1[1] = lVar10 + lVar21 + lVar23;
      param_1[2] = lVar10 + (long)plVar13 * 0x18;
      if (lVar20 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar20);
      return;
    }
  }
  else {
    func_0x000104c58d10();
  }
  func_0x000104c4f740();
  plVar13 = (long *)param_1[1];
  if (plVar13 < (long *)param_1[2]) {
    lVar21 = param_2[1];
    lVar20 = *param_2;
    plVar13[2] = param_2[2];
    plVar13[1] = lVar21;
    *plVar13 = lVar20;
    plVar13 = plVar13 + 3;
LAB_104c580a4:
    param_1[1] = (long)plVar13;
    return;
  }
  lVar20 = *param_1;
  uVar14 = ((long)plVar13 - lVar20 >> 3) * -0x5555555555555555 + 1;
  if (uVar14 < 0xaaaaaaaaaaaaaab) {
    lVar21 = param_1[2] - lVar20 >> 3;
    uVar15 = lVar21 * 0x5555555555555556;
    if (uVar15 < uVar14 || uVar15 - uVar14 == 0) {
      uVar15 = uVar14;
    }
    if (0x555555555555554 < (ulong)(lVar21 * -0x5555555555555555)) {
      uVar15 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar15 < 0xaaaaaaaaaaaaaab) {
      lVar21 = uVar15 * 0x18;
      __Znwm();
      plVar13 = (long *)(lVar21 + ((long)plVar13 - lVar20));
      lVar10 = *param_2;
      plVar13[1] = param_2[1];
      *plVar13 = lVar10;
      plVar13[2] = param_2[2];
      plVar13 = plVar13 + 3;
      _memcpy();
      *param_1 = lVar21;
      param_1[1] = (long)plVar13;
      param_1[2] = lVar21 + uVar15 * 0x18;
      if (lVar20 != 0) {
        __ZdlPv(lVar20);
      }
      goto LAB_104c580a4;
    }
  }
  else {
    func_0x000104c58d24();
  }
  func_0x000104c4f740();
  puVar25 = (ulong *)(param_4 + 0x10);
  puVar9 = puVar25;
  if ((*puVar25 & 1) != 0) {
    puVar9 = (ulong *)(*puVar25 + 7);
  }
  if (*(int *)(param_4 + 0x18) == 0) {
    iVar22 = 0;
  }
  else {
    iVar22 = 0;
    lVar20 = (long)*(int *)(param_4 + 0x18) << 3;
    do {
      iVar22 = *(int *)(*puVar9 + 0x18) + iVar22;
      lVar20 = lVar20 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar20 != 0);
  }
  uVar14 = (ulong)iVar22;
  lVar21 = *param_2;
  lVar20 = param_2[1];
  lVar10 = lVar20 - lVar21;
  uVar15 = lVar10 >> 5;
  if (uVar15 < uVar14) {
    uVar18 = uVar14 - uVar15;
    if ((ulong)(param_2[2] - lVar20 >> 5) < uVar18) {
      if (iVar22 < 0) {
        func_0x000104c58d38();
      }
      else {
        uVar8 = param_2[2] - lVar21;
        uVar11 = (long)uVar8 >> 4;
        if (uVar11 <= uVar14) {
          uVar11 = uVar14;
        }
        if (0x7fffffffffffffdf < uVar8) {
          uVar11 = 0x7ffffffffffffff;
        }
        if (uVar11 >> 0x3b == 0) {
          lVar23 = uVar11 << 5;
          __Znwm();
          lVar20 = lVar23 + lVar10;
          _bzero(lVar20,uVar18 * 0x20);
          lVar24 = lVar20 + uVar15 * -0x20;
          _memcpy(lVar24,lVar21,lVar10);
          *param_2 = lVar24;
          param_2[1] = lVar20 + uVar18 * 0x20;
          param_2[2] = lVar23 + uVar11 * 0x20;
          if (lVar21 != 0) {
            __ZdlPv(lVar21);
          }
          goto LAB_104c58204;
        }
      }
      func_0x000104c4f740();
      puVar25 = (ulong *)(param_3 + 2);
      puVar9 = puVar25;
      if ((*puVar25 & 1) != 0) {
        puVar9 = (ulong *)(*puVar25 + 7);
      }
      if ((int)param_3[3] == 0) {
        iVar22 = 0;
      }
      else {
        iVar22 = 0;
        lVar20 = (long)(int)param_3[3] << 3;
        do {
          iVar22 = *(int *)(*puVar9 + 0x18) + iVar22;
          lVar20 = lVar20 + -8;
          puVar9 = puVar9 + 1;
        } while (lVar20 != 0);
      }
      FUN_104c584e4(param_2,(long)iVar22);
      if ((param_3[2] & 1U) != 0) {
        puVar25 = (ulong *)(param_3[2] + 7);
      }
      if ((int)param_3[3] != 0) {
        uVar14 = 0;
        puVar9 = puVar25 + (int)param_3[3];
        do {
          uVar15 = *puVar25;
          uVar18 = *(ulong *)(uVar15 + 0x10);
          puVar16 = (ulong *)(uVar15 + 0x10);
          if ((uVar18 & 1) != 0) {
            puVar16 = (ulong *)(uVar18 + 7);
          }
          if (*(int *)(uVar15 + 0x18) != 0) {
            uVar18 = -(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4;
            lVar20 = (long)*(int *)(uVar15 + 0x18) * 8;
            uVar14 = (ulong)((int)uVar14 + (int)(lVar20 - 8U >> 3) + 1);
            do {
              puVar17 = (undefined8 *)*puVar16;
              lVar21 = *param_2;
              puVar4 = (undefined8 *)*puVar17;
              if (-1 < *(char *)((long)puVar17 + 0x17)) {
                puVar4 = puVar17;
              }
              *(undefined8 *)(lVar21 + uVar18) = puVar4;
              puVar17 = (undefined8 *)(*(ulong *)(uVar15 + 0x28) & 0xfffffffffffffffc);
              puVar4 = (undefined8 *)*puVar17;
              if (-1 < *(char *)((long)puVar17 + 0x17)) {
                puVar4 = puVar17;
              }
              ((undefined8 *)(lVar21 + uVar18))[1] = puVar4;
              uVar18 = uVar18 + 0x10;
              lVar20 = lVar20 + -8;
              puVar16 = puVar16 + 1;
            } while (lVar20 != 0);
          }
          puVar25 = puVar25 + 1;
        } while (puVar25 != puVar9);
      }
      *(int *)(param_1 + 1) = iVar22;
      *param_1 = *param_2;
      return;
    }
    _bzero(lVar20,uVar18 * 0x20);
    lVar20 = lVar20 + uVar18 * 0x20;
  }
  else {
    if (uVar15 <= uVar14) goto LAB_104c58204;
    lVar20 = lVar21 + uVar14 * 0x20;
  }
  param_2[1] = lVar20;
LAB_104c58204:
  FUN_104c57e10(param_3,uVar14);
  if ((*(ulong *)(param_4 + 0x10) & 1) != 0) {
    puVar25 = (ulong *)(*(ulong *)(param_4 + 0x10) + 7);
  }
  if (*(int *)(param_4 + 0x18) != 0) {
    lVar20 = 0;
    puVar9 = puVar25 + *(int *)(param_4 + 0x18);
    do {
      uVar15 = *puVar25;
      uVar14 = *(ulong *)(uVar15 + 0x10);
      puVar16 = (ulong *)(uVar15 + 0x10);
      if ((uVar14 & 1) != 0) {
        puVar16 = (ulong *)(uVar14 + 7);
      }
      if (*(int *)(uVar15 + 0x18) != 0) {
        lVar20 = (long)(int)lVar20;
        puVar1 = puVar16 + *(int *)(uVar15 + 0x18);
        do {
          uVar14 = *puVar16;
          puVar2 = (ulong *)(*param_2 + lVar20 * 0x20);
          puVar12 = (ulong *)(*(ulong *)(uVar14 + 0x30) & 0xfffffffffffffffc);
          puVar3 = (ulong *)*puVar12;
          if (-1 < *(char *)((long)puVar12 + 0x17)) {
            puVar3 = puVar12;
          }
          *puVar2 = (ulong)puVar3;
          puVar12 = (ulong *)(*(ulong *)(uVar15 + 0x28) & 0xfffffffffffffffc);
          puVar3 = (ulong *)*puVar12;
          if (-1 < *(char *)((long)puVar12 + 0x17)) {
            puVar3 = puVar12;
          }
          puStack_100 = (undefined4 *)(uVar14 + 0x10);
          uVar5 = *puStack_100;
          puVar2[3] = (ulong)puVar3;
          *(undefined4 *)(puVar2 + 2) = uVar5;
          uStack_f8 = *(uint *)(uVar14 + 0x1c);
          if (uStack_f8 != *(uint *)(uVar14 + 0x14)) {
            uStack_108 = *(ulong *)(*(long *)(uVar14 + 0x20) + (ulong)uStack_f8 * 8);
            if ((uStack_108 & 1) != 0) {
              uStack_108 = *(ulong *)(**(long **)(uStack_108 - 1) + 0x20);
            }
            do {
              lStack_120 = uStack_108 + 8;
              if (*(char *)(uStack_108 + 0x1f) < '\0') {
                lStack_120 = *(long *)lStack_120;
              }
              lStack_110 = (long)*(char *)(uStack_108 + 0x37);
              if (lStack_110 < 0) {
                lStack_118 = *(long *)(uStack_108 + 0x20);
                lStack_110 = *(long *)(uStack_108 + 0x28);
              }
              else {
                lStack_118 = uStack_108 + 0x20;
              }
              FUN_104c57fbc(*param_3 + lVar20 * 0x18,&lStack_120);
              func_0x00010063bf60(&uStack_108);
            } while (uStack_108 != 0);
          }
          puVar2[1] = *(ulong *)(*param_3 + lVar20 * 0x18);
          lVar20 = lVar20 + 1;
          puVar16 = puVar16 + 1;
        } while (puVar16 != puVar1);
      }
      puVar25 = puVar25 + 1;
    } while (puVar25 != puVar9);
  }
  *(int *)(param_1 + 1) = iVar22;
  *param_1 = *param_2;
  return;
}



/* Entry: 104c57fbc; end: 104c580c3;  */

void FUN_104c57fbc(long *param_1,long *param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  ulong *puVar22;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined4 *puStack_b0;
  uint uStack_a8;
  
  plVar18 = (long *)param_1[1];
  if (plVar18 < (long *)param_1[2]) {
    lVar9 = param_2[1];
    lVar17 = *param_2;
    plVar18[2] = param_2[2];
    plVar18[1] = lVar9;
    *plVar18 = lVar17;
    plVar18 = plVar18 + 3;
LAB_104c580a4:
    param_1[1] = (long)plVar18;
    return;
  }
  lVar17 = *param_1;
  uVar12 = ((long)plVar18 - lVar17 >> 3) * -0x5555555555555555 + 1;
  if (uVar12 < 0xaaaaaaaaaaaaaab) {
    lVar9 = param_1[2] - lVar17 >> 3;
    uVar13 = lVar9 * 0x5555555555555556;
    if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
      uVar13 = uVar12;
    }
    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar13 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar13 < 0xaaaaaaaaaaaaaab) {
      lVar9 = uVar13 * 0x18;
      __Znwm();
      plVar18 = (long *)(lVar9 + ((long)plVar18 - lVar17));
      lVar20 = *param_2;
      plVar18[1] = param_2[1];
      *plVar18 = lVar20;
      plVar18[2] = param_2[2];
      plVar18 = plVar18 + 3;
      _memcpy();
      *param_1 = lVar9;
      param_1[1] = (long)plVar18;
      param_1[2] = lVar9 + uVar13 * 0x18;
      if (lVar17 != 0) {
        __ZdlPv(lVar17);
      }
      goto LAB_104c580a4;
    }
  }
  else {
    func_0x000104c58d24();
  }
  func_0x000104c4f740();
  puVar22 = (ulong *)(param_4 + 0x10);
  puVar8 = puVar22;
  if ((*puVar22 & 1) != 0) {
    puVar8 = (ulong *)(*puVar22 + 7);
  }
  if (*(int *)(param_4 + 0x18) == 0) {
    iVar19 = 0;
  }
  else {
    iVar19 = 0;
    lVar17 = (long)*(int *)(param_4 + 0x18) << 3;
    do {
      iVar19 = *(int *)(*puVar8 + 0x18) + iVar19;
      lVar17 = lVar17 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar17 != 0);
  }
  uVar12 = (ulong)iVar19;
  lVar9 = *param_2;
  lVar17 = param_2[1];
  lVar20 = lVar17 - lVar9;
  uVar13 = lVar20 >> 5;
  if (uVar13 < uVar12) {
    uVar16 = uVar12 - uVar13;
    if ((ulong)(param_2[2] - lVar17 >> 5) < uVar16) {
      if (iVar19 < 0) {
        func_0x000104c58d38();
      }
      else {
        uVar7 = param_2[2] - lVar9;
        uVar10 = (long)uVar7 >> 4;
        if (uVar10 <= uVar12) {
          uVar10 = uVar12;
        }
        if (0x7fffffffffffffdf < uVar7) {
          uVar10 = 0x7ffffffffffffff;
        }
        if (uVar10 >> 0x3b == 0) {
          lVar6 = uVar10 << 5;
          __Znwm();
          lVar17 = lVar6 + lVar20;
          _bzero(lVar17,uVar16 * 0x20);
          lVar21 = lVar17 + uVar13 * -0x20;
          _memcpy(lVar21,lVar9,lVar20);
          *param_2 = lVar21;
          param_2[1] = lVar17 + uVar16 * 0x20;
          param_2[2] = lVar6 + uVar10 * 0x20;
          if (lVar9 != 0) {
            __ZdlPv(lVar9);
          }
          goto LAB_104c58204;
        }
      }
      func_0x000104c4f740();
      puVar22 = (ulong *)(param_3 + 2);
      puVar8 = puVar22;
      if ((*puVar22 & 1) != 0) {
        puVar8 = (ulong *)(*puVar22 + 7);
      }
      if ((int)param_3[3] == 0) {
        iVar19 = 0;
      }
      else {
        iVar19 = 0;
        lVar17 = (long)(int)param_3[3] << 3;
        do {
          iVar19 = *(int *)(*puVar8 + 0x18) + iVar19;
          lVar17 = lVar17 + -8;
          puVar8 = puVar8 + 1;
        } while (lVar17 != 0);
      }
      FUN_104c584e4(param_2,(long)iVar19);
      if ((param_3[2] & 1U) != 0) {
        puVar22 = (ulong *)(param_3[2] + 7);
      }
      if ((int)param_3[3] != 0) {
        uVar12 = 0;
        puVar8 = puVar22 + (int)param_3[3];
        do {
          uVar13 = *puVar22;
          uVar16 = *(ulong *)(uVar13 + 0x10);
          puVar14 = (ulong *)(uVar13 + 0x10);
          if ((uVar16 & 1) != 0) {
            puVar14 = (ulong *)(uVar16 + 7);
          }
          if (*(int *)(uVar13 + 0x18) != 0) {
            uVar16 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
            lVar17 = (long)*(int *)(uVar13 + 0x18) * 8;
            uVar12 = (ulong)((int)uVar12 + (int)(lVar17 - 8U >> 3) + 1);
            do {
              puVar15 = (undefined8 *)*puVar14;
              lVar9 = *param_2;
              puVar4 = (undefined8 *)*puVar15;
              if (-1 < *(char *)((long)puVar15 + 0x17)) {
                puVar4 = puVar15;
              }
              *(undefined8 *)(lVar9 + uVar16) = puVar4;
              puVar15 = (undefined8 *)(*(ulong *)(uVar13 + 0x28) & 0xfffffffffffffffc);
              puVar4 = (undefined8 *)*puVar15;
              if (-1 < *(char *)((long)puVar15 + 0x17)) {
                puVar4 = puVar15;
              }
              ((undefined8 *)(lVar9 + uVar16))[1] = puVar4;
              uVar16 = uVar16 + 0x10;
              lVar17 = lVar17 + -8;
              puVar14 = puVar14 + 1;
            } while (lVar17 != 0);
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 != puVar8);
      }
      *(int *)(param_1 + 1) = iVar19;
      *param_1 = *param_2;
      return;
    }
    _bzero(lVar17,uVar16 * 0x20);
    lVar17 = lVar17 + uVar16 * 0x20;
  }
  else {
    if (uVar13 <= uVar12) goto LAB_104c58204;
    lVar17 = lVar9 + uVar12 * 0x20;
  }
  param_2[1] = lVar17;
LAB_104c58204:
  FUN_104c57e10(param_3,uVar12);
  if ((*(ulong *)(param_4 + 0x10) & 1) != 0) {
    puVar22 = (ulong *)(*(ulong *)(param_4 + 0x10) + 7);
  }
  if (*(int *)(param_4 + 0x18) != 0) {
    lVar17 = 0;
    puVar8 = puVar22 + *(int *)(param_4 + 0x18);
    do {
      uVar13 = *puVar22;
      uVar12 = *(ulong *)(uVar13 + 0x10);
      puVar14 = (ulong *)(uVar13 + 0x10);
      if ((uVar12 & 1) != 0) {
        puVar14 = (ulong *)(uVar12 + 7);
      }
      if (*(int *)(uVar13 + 0x18) != 0) {
        lVar17 = (long)(int)lVar17;
        puVar1 = puVar14 + *(int *)(uVar13 + 0x18);
        do {
          uVar12 = *puVar14;
          puVar2 = (ulong *)(*param_2 + lVar17 * 0x20);
          puVar11 = (ulong *)(*(ulong *)(uVar12 + 0x30) & 0xfffffffffffffffc);
          puVar3 = (ulong *)*puVar11;
          if (-1 < *(char *)((long)puVar11 + 0x17)) {
            puVar3 = puVar11;
          }
          *puVar2 = (ulong)puVar3;
          puVar11 = (ulong *)(*(ulong *)(uVar13 + 0x28) & 0xfffffffffffffffc);
          puVar3 = (ulong *)*puVar11;
          if (-1 < *(char *)((long)puVar11 + 0x17)) {
            puVar3 = puVar11;
          }
          puStack_b0 = (undefined4 *)(uVar12 + 0x10);
          uVar5 = *puStack_b0;
          puVar2[3] = (ulong)puVar3;
          *(undefined4 *)(puVar2 + 2) = uVar5;
          uStack_a8 = *(uint *)(uVar12 + 0x1c);
          if (uStack_a8 != *(uint *)(uVar12 + 0x14)) {
            uStack_b8 = *(ulong *)(*(long *)(uVar12 + 0x20) + (ulong)uStack_a8 * 8);
            if ((uStack_b8 & 1) != 0) {
              uStack_b8 = *(ulong *)(**(long **)(uStack_b8 - 1) + 0x20);
            }
            do {
              lStack_d0 = uStack_b8 + 8;
              if (*(char *)(uStack_b8 + 0x1f) < '\0') {
                lStack_d0 = *(long *)lStack_d0;
              }
              lStack_c0 = (long)*(char *)(uStack_b8 + 0x37);
              if (lStack_c0 < 0) {
                lStack_c8 = *(long *)(uStack_b8 + 0x20);
                lStack_c0 = *(long *)(uStack_b8 + 0x28);
              }
              else {
                lStack_c8 = uStack_b8 + 0x20;
              }
              FUN_104c57fbc(*param_3 + lVar17 * 0x18,&lStack_d0);
              func_0x00010063bf60(&uStack_b8);
            } while (uStack_b8 != 0);
          }
          puVar2[1] = *(ulong *)(*param_3 + lVar17 * 0x18);
          lVar17 = lVar17 + 1;
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar1);
      }
      puVar22 = puVar22 + 1;
    } while (puVar22 != puVar8);
  }
  *(int *)(param_1 + 1) = iVar19;
  *param_1 = *param_2;
  return;
}



/* Entry: 104c580c4; end: 104c583ab;  */

void FUN_104c580c4(long *param_1,long *param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined4 *puStack_70;
  uint uStack_68;
  
  puVar21 = (ulong *)(param_4 + 0x10);
  puVar8 = puVar21;
  if ((*puVar21 & 1) != 0) {
    puVar8 = (ulong *)(*puVar21 + 7);
  }
  if (*(int *)(param_4 + 0x18) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = 0;
    lVar9 = (long)*(int *)(param_4 + 0x18) << 3;
    do {
      iVar16 = *(int *)(*puVar8 + 0x18) + iVar16;
      lVar9 = lVar9 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
  }
  uVar17 = (ulong)iVar16;
  lVar14 = *param_2;
  lVar9 = param_2[1];
  lVar18 = lVar9 - lVar14;
  uVar20 = lVar18 >> 5;
  if (uVar20 < uVar17) {
    uVar15 = uVar17 - uVar20;
    if ((ulong)(param_2[2] - lVar9 >> 5) < uVar15) {
      if (iVar16 < 0) {
        func_0x000104c58d38();
      }
      else {
        uVar7 = param_2[2] - lVar14;
        uVar10 = (long)uVar7 >> 4;
        if (uVar10 <= uVar17) {
          uVar10 = uVar17;
        }
        if (0x7fffffffffffffdf < uVar7) {
          uVar10 = 0x7ffffffffffffff;
        }
        if (uVar10 >> 0x3b == 0) {
          lVar6 = uVar10 << 5;
          __Znwm();
          lVar9 = lVar6 + lVar18;
          _bzero(lVar9,uVar15 * 0x20);
          lVar19 = lVar9 + uVar20 * -0x20;
          _memcpy(lVar19,lVar14,lVar18);
          *param_2 = lVar19;
          param_2[1] = lVar9 + uVar15 * 0x20;
          param_2[2] = lVar6 + uVar10 * 0x20;
          if (lVar14 != 0) {
            __ZdlPv(lVar14);
          }
          goto LAB_104c58204;
        }
      }
      func_0x000104c4f740();
      puVar21 = (ulong *)(param_3 + 2);
      puVar8 = puVar21;
      if ((*puVar21 & 1) != 0) {
        puVar8 = (ulong *)(*puVar21 + 7);
      }
      if ((int)param_3[3] == 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = 0;
        lVar9 = (long)(int)param_3[3] << 3;
        do {
          iVar16 = *(int *)(*puVar8 + 0x18) + iVar16;
          lVar9 = lVar9 + -8;
          puVar8 = puVar8 + 1;
        } while (lVar9 != 0);
      }
      FUN_104c584e4(param_2,(long)iVar16);
      if ((param_3[2] & 1U) != 0) {
        puVar21 = (ulong *)(param_3[2] + 7);
      }
      if ((int)param_3[3] != 0) {
        uVar17 = 0;
        puVar8 = puVar21 + (int)param_3[3];
        do {
          uVar20 = *puVar21;
          uVar15 = *(ulong *)(uVar20 + 0x10);
          puVar12 = (ulong *)(uVar20 + 0x10);
          if ((uVar15 & 1) != 0) {
            puVar12 = (ulong *)(uVar15 + 7);
          }
          if (*(int *)(uVar20 + 0x18) != 0) {
            uVar15 = -(uVar17 >> 0x1f) & 0xfffffff000000000 | uVar17 << 4;
            lVar9 = (long)*(int *)(uVar20 + 0x18) * 8;
            uVar17 = (ulong)((int)uVar17 + (int)(lVar9 - 8U >> 3) + 1);
            do {
              puVar13 = (undefined8 *)*puVar12;
              lVar14 = *param_2;
              puVar4 = (undefined8 *)*puVar13;
              if (-1 < *(char *)((long)puVar13 + 0x17)) {
                puVar4 = puVar13;
              }
              *(undefined8 *)(lVar14 + uVar15) = puVar4;
              puVar13 = (undefined8 *)(*(ulong *)(uVar20 + 0x28) & 0xfffffffffffffffc);
              puVar4 = (undefined8 *)*puVar13;
              if (-1 < *(char *)((long)puVar13 + 0x17)) {
                puVar4 = puVar13;
              }
              ((undefined8 *)(lVar14 + uVar15))[1] = puVar4;
              uVar15 = uVar15 + 0x10;
              lVar9 = lVar9 + -8;
              puVar12 = puVar12 + 1;
            } while (lVar9 != 0);
          }
          puVar21 = puVar21 + 1;
        } while (puVar21 != puVar8);
      }
      *(int *)(param_1 + 1) = iVar16;
      *param_1 = *param_2;
      return;
    }
    _bzero(lVar9,uVar15 * 0x20);
    lVar9 = lVar9 + uVar15 * 0x20;
  }
  else {
    if (uVar20 <= uVar17) goto LAB_104c58204;
    lVar9 = lVar14 + uVar17 * 0x20;
  }
  param_2[1] = lVar9;
LAB_104c58204:
  FUN_104c57e10(param_3,uVar17);
  if ((*(ulong *)(param_4 + 0x10) & 1) != 0) {
    puVar21 = (ulong *)(*(ulong *)(param_4 + 0x10) + 7);
  }
  if (*(int *)(param_4 + 0x18) != 0) {
    lVar9 = 0;
    puVar8 = puVar21 + *(int *)(param_4 + 0x18);
    do {
      uVar20 = *puVar21;
      uVar17 = *(ulong *)(uVar20 + 0x10);
      puVar12 = (ulong *)(uVar20 + 0x10);
      if ((uVar17 & 1) != 0) {
        puVar12 = (ulong *)(uVar17 + 7);
      }
      if (*(int *)(uVar20 + 0x18) != 0) {
        lVar9 = (long)(int)lVar9;
        puVar1 = puVar12 + *(int *)(uVar20 + 0x18);
        do {
          uVar17 = *puVar12;
          puVar2 = (ulong *)(*param_2 + lVar9 * 0x20);
          puVar11 = (ulong *)(*(ulong *)(uVar17 + 0x30) & 0xfffffffffffffffc);
          puVar3 = (ulong *)*puVar11;
          if (-1 < *(char *)((long)puVar11 + 0x17)) {
            puVar3 = puVar11;
          }
          *puVar2 = (ulong)puVar3;
          puVar11 = (ulong *)(*(ulong *)(uVar20 + 0x28) & 0xfffffffffffffffc);
          puVar3 = (ulong *)*puVar11;
          if (-1 < *(char *)((long)puVar11 + 0x17)) {
            puVar3 = puVar11;
          }
          puStack_70 = (undefined4 *)(uVar17 + 0x10);
          uVar5 = *puStack_70;
          puVar2[3] = (ulong)puVar3;
          *(undefined4 *)(puVar2 + 2) = uVar5;
          uStack_68 = *(uint *)(uVar17 + 0x1c);
          if (uStack_68 != *(uint *)(uVar17 + 0x14)) {
            uStack_78 = *(ulong *)(*(long *)(uVar17 + 0x20) + (ulong)uStack_68 * 8);
            if ((uStack_78 & 1) != 0) {
              uStack_78 = *(ulong *)(**(long **)(uStack_78 - 1) + 0x20);
            }
            do {
              lStack_90 = uStack_78 + 8;
              if (*(char *)(uStack_78 + 0x1f) < '\0') {
                lStack_90 = *(long *)lStack_90;
              }
              lStack_80 = (long)*(char *)(uStack_78 + 0x37);
              if (lStack_80 < 0) {
                lStack_88 = *(long *)(uStack_78 + 0x20);
                lStack_80 = *(long *)(uStack_78 + 0x28);
              }
              else {
                lStack_88 = uStack_78 + 0x20;
              }
              FUN_104c57fbc(*param_3 + lVar9 * 0x18,&lStack_90);
              func_0x00010063bf60(&uStack_78);
            } while (uStack_78 != 0);
          }
          puVar2[1] = *(ulong *)(*param_3 + lVar9 * 0x18);
          lVar9 = lVar9 + 1;
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar1);
      }
      puVar21 = puVar21 + 1;
    } while (puVar21 != puVar8);
  }
  *(int *)(param_1 + 1) = iVar16;
  *param_1 = *param_2;
  return;
}



/* Entry: 104c583ac; end: 104c584e3;  */

void FUN_104c583ac(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  ulong *puVar11;
  
  puVar11 = (ulong *)(param_3 + 0x10);
  puVar2 = puVar11;
  if ((*puVar11 & 1) != 0) {
    puVar2 = (ulong *)(*puVar11 + 7);
  }
  if (*(int *)(param_3 + 0x18) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    lVar3 = (long)*(int *)(param_3 + 0x18) << 3;
    do {
      iVar10 = *(int *)(*puVar2 + 0x18) + iVar10;
      lVar3 = lVar3 + -8;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
  }
  FUN_104c584e4(param_2,(long)iVar10);
  if ((*(ulong *)(param_3 + 0x10) & 1) != 0) {
    puVar11 = (ulong *)(*(ulong *)(param_3 + 0x10) + 7);
  }
  if (*(int *)(param_3 + 0x18) != 0) {
    uVar4 = 0;
    puVar2 = puVar11 + *(int *)(param_3 + 0x18);
    do {
      uVar5 = *puVar11;
      uVar7 = *(ulong *)(uVar5 + 0x10);
      puVar6 = (ulong *)(uVar5 + 0x10);
      if ((uVar7 & 1) != 0) {
        puVar6 = (ulong *)(uVar7 + 7);
      }
      if (*(int *)(uVar5 + 0x18) != 0) {
        uVar7 = -(uVar4 >> 0x1f) & 0xfffffff000000000 | uVar4 << 4;
        lVar3 = (long)*(int *)(uVar5 + 0x18) * 8;
        uVar4 = (ulong)((int)uVar4 + (int)(lVar3 - 8U >> 3) + 1);
        do {
          puVar8 = (undefined8 *)*puVar6;
          lVar9 = *param_2;
          puVar1 = (undefined8 *)*puVar8;
          if (-1 < *(char *)((long)puVar8 + 0x17)) {
            puVar1 = puVar8;
          }
          *(undefined8 *)(lVar9 + uVar7) = puVar1;
          puVar8 = (undefined8 *)(*(ulong *)(uVar5 + 0x28) & 0xfffffffffffffffc);
          puVar1 = (undefined8 *)*puVar8;
          if (-1 < *(char *)((long)puVar8 + 0x17)) {
            puVar1 = puVar8;
          }
          ((undefined8 *)(lVar9 + uVar7))[1] = puVar1;
          uVar7 = uVar7 + 0x10;
          lVar3 = lVar3 + -8;
          puVar6 = puVar6 + 1;
        } while (lVar3 != 0);
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar2);
  }
  *(int *)(param_1 + 1) = iVar10;
  *param_1 = *param_2;
  return;
}



/* Entry: 104c584e4; end: 104c58513;  */

void FUN_104c584e4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar5 = param_1[1] - *param_1 >> 4;
  if (param_2 <= uVar5) {
    if (param_2 < uVar5) {
      param_1[1] = *param_1 + param_2 * 0x10;
    }
    return;
  }
  param_2 = param_2 - uVar5;
  lVar9 = param_1[1];
  if ((ulong)(param_1[2] - lVar9 >> 4) < param_2) {
    lVar8 = *param_1;
    lVar9 = lVar9 - lVar8;
    uVar5 = param_2 + (lVar9 >> 4);
    if (uVar5 >> 0x3c != 0) {
      FUN_104c58e60();
LAB_104c58e5c:
      func_0x000104c4f740();
      FUN_104c4f6cc("vector");
      FUN_104c4f6cc("vector");
      pcVar3 = "vector";
      FUN_104c4f6cc();
      if (param_2 >> 0x3d == 0) {
        __Znwm(param_2 << 3);
        return;
      }
      func_0x000104c4f740();
      *(undefined ***)pcVar3 = &PTR_FUN_1107ec9e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
      return;
    }
    uVar4 = param_1[2] - lVar8;
    uVar6 = (long)uVar4 >> 3;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar2 = 0;
    }
    else {
      if (uVar6 >> 0x3c != 0) goto LAB_104c58e5c;
      lVar2 = uVar6 << 4;
      __Znwm();
    }
    lVar1 = lVar2 + lVar9;
    _bzero(lVar1,param_2 * 0x10);
    lVar7 = lVar1 + (lVar9 >> 4) * -0x10;
    _memcpy(lVar7,lVar8,lVar9);
    *param_1 = lVar7;
    param_1[1] = lVar1 + param_2 * 0x10;
    param_1[2] = lVar2 + uVar6 * 0x10;
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar8);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      _bzero(lVar9,param_2 * 0x10);
      lVar9 = lVar9 + param_2 * 0x10;
    }
    param_1[1] = lVar9;
  }
  return;
}



/* Entry: 104c58514; end: 104c58753;  */

void FUN_104c58514(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  
  puVar18 = (ulong *)(param_3 + 0x10);
  puVar5 = puVar18;
  if ((*puVar18 & 1) != 0) {
    puVar5 = (ulong *)(*puVar18 + 7);
  }
  if (*(int *)(param_3 + 0x18) == 0) {
    iVar17 = 0;
  }
  else {
    iVar17 = 0;
    lVar8 = (long)*(int *)(param_3 + 0x18) << 3;
    do {
      iVar17 = *(int *)(*puVar5 + 0x18) + iVar17;
      lVar8 = lVar8 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar8 != 0);
  }
  uVar6 = (ulong)iVar17;
  lVar3 = *param_2;
  lVar8 = param_2[1];
  lVar15 = lVar8 - lVar3;
  uVar20 = lVar15 >> 5;
  if (uVar20 < uVar6) {
    uVar19 = uVar6 - uVar20;
    if ((ulong)(param_2[2] - lVar8 >> 5) < uVar19) {
      if (iVar17 < 0) {
        func_0x000104c58e74();
      }
      else {
        uVar9 = param_2[2] - lVar3;
        uVar11 = (long)uVar9 >> 4;
        if (uVar11 <= uVar6) {
          uVar11 = uVar6;
        }
        if (0x7fffffffffffffdf < uVar9) {
          uVar11 = 0x7ffffffffffffff;
        }
        if (uVar11 >> 0x3b == 0) {
          lVar4 = uVar11 << 5;
          __Znwm();
          lVar8 = lVar4 + lVar15;
          _bzero(lVar8,uVar19 * 0x20);
          lVar16 = lVar8 + uVar20 * -0x20;
          _memcpy(lVar16,lVar3,lVar15);
          *param_2 = lVar16;
          param_2[1] = lVar8 + uVar19 * 0x20;
          param_2[2] = lVar4 + uVar11 * 0x20;
          if (lVar3 != 0) {
            __ZdlPv(lVar3);
          }
          goto LAB_104c58650;
        }
      }
      func_0x000104c4f740();
      plVar7 = (long *)(param_2[4] & 0xfffffffffffffffc);
      plVar10 = (long *)*plVar7;
      if (-1 < *(char *)((long)plVar7 + 0x17)) {
        plVar10 = plVar7;
      }
      *param_1 = (long)plVar10;
      plVar7 = (long *)(param_2[2] & 0xfffffffffffffffc);
      plVar10 = (long *)*plVar7;
      if (-1 < *(char *)((long)plVar7 + 0x17)) {
        plVar10 = plVar7;
      }
      param_1[1] = (long)plVar10;
      plVar7 = (long *)(param_2[3] & 0xfffffffffffffffc);
      plVar10 = plVar7;
      if (*(char *)((long)plVar7 + 0x17) < '\0') {
        plVar10 = (long *)*plVar7;
      }
      param_1[2] = (long)plVar10;
      lVar8 = (long)*(char *)((long)plVar7 + 0x17);
      if (lVar8 < 0) {
        lVar8 = plVar7[1];
      }
      param_1[3] = lVar8;
      return;
    }
    _bzero(lVar8,uVar19 * 0x20);
    lVar8 = lVar8 + uVar19 * 0x20;
  }
  else {
    if (uVar20 <= uVar6) goto LAB_104c58650;
    lVar8 = lVar3 + uVar6 * 0x20;
  }
  param_2[1] = lVar8;
LAB_104c58650:
  if ((*(ulong *)(param_3 + 0x10) & 1) != 0) {
    puVar18 = (ulong *)(*(ulong *)(param_3 + 0x10) + 7);
  }
  if (*(int *)(param_3 + 0x18) != 0) {
    uVar6 = 0;
    puVar5 = puVar18 + *(int *)(param_3 + 0x18);
    do {
      uVar20 = *puVar18;
      uVar19 = *(ulong *)(uVar20 + 0x10);
      puVar12 = (ulong *)(uVar20 + 0x10);
      if ((uVar19 & 1) != 0) {
        puVar12 = (ulong *)(uVar19 + 7);
      }
      if (*(int *)(uVar20 + 0x18) != 0) {
        uVar19 = -(uVar6 >> 0x1f) & 0xffffffe000000000 | uVar6 << 5;
        lVar8 = (long)*(int *)(uVar20 + 0x18) * 8;
        uVar6 = (ulong)((int)uVar6 + (int)(lVar8 - 8U >> 3) + 1);
        do {
          puVar13 = (undefined8 *)*puVar12;
          puVar14 = (undefined8 *)(*(ulong *)(uVar20 + 0x28) & 0xfffffffffffffffc);
          puVar1 = (undefined8 *)(*param_2 + uVar19);
          puVar2 = (undefined8 *)*puVar14;
          if (-1 < *(char *)((long)puVar14 + 0x17)) {
            puVar2 = puVar14;
          }
          puVar1[1] = puVar2;
          puVar14 = (undefined8 *)(*(ulong *)(uVar20 + 0x30) & 0xfffffffffffffffc);
          puVar2 = (undefined8 *)*puVar14;
          if (-1 < *(char *)((long)puVar14 + 0x17)) {
            puVar2 = puVar14;
          }
          puVar1[2] = puVar2;
          *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(uVar20 + 0x38);
          puVar2 = (undefined8 *)*puVar13;
          if (-1 < *(char *)((long)puVar13 + 0x17)) {
            puVar2 = puVar13;
          }
          *puVar1 = puVar2;
          uVar19 = uVar19 + 0x20;
          lVar8 = lVar8 + -8;
          puVar12 = puVar12 + 1;
        } while (lVar8 != 0);
      }
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar5);
  }
  *(int *)(param_1 + 1) = iVar17;
  *param_1 = *param_2;
  return;
}



/* Entry: 104c58754; end: 104c587bb;  */

void FUN_104c58754(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  puVar1 = (ulong *)(*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc);
  puVar2 = (ulong *)*puVar1;
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    puVar2 = puVar1;
  }
  *param_1 = (ulong)puVar2;
  puVar1 = (ulong *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  puVar2 = (ulong *)*puVar1;
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    puVar2 = puVar1;
  }
  param_1[1] = (ulong)puVar2;
  puVar1 = (ulong *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
  puVar2 = puVar1;
  if (*(char *)((long)puVar1 + 0x17) < '\0') {
    puVar2 = (ulong *)*puVar1;
  }
  param_1[2] = (ulong)puVar2;
  uVar3 = (ulong)*(char *)((long)puVar1 + 0x17);
  if ((long)uVar3 < 0) {
    uVar3 = puVar1[1];
  }
  param_1[3] = uVar3;
  return;
}



/* Entry: 104c587bc; end: 104c589cf;  */

void FUN_104c587bc(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long lStack_38;
  
  puVar2 = (ulong *)(*(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
  puVar5 = (ulong *)*puVar2;
  if (-1 < *(char *)((long)puVar2 + 0x17)) {
    puVar5 = puVar2;
  }
  *param_1 = (ulong)puVar5;
  param_2[1] = *param_2;
  func_0x000104c58880(param_2,(long)*(int *)(param_3 + 0x18));
  uVar3 = *(ulong *)(param_3 + 0x10);
  puVar5 = (ulong *)(param_3 + 0x10);
  if ((uVar3 & 1) != 0) {
    puVar5 = (ulong *)(uVar3 + 7);
  }
  if (*(int *)(param_3 + 0x18) != 0) {
    lVar4 = (long)*(int *)(param_3 + 0x18) << 3;
    do {
      lStack_38 = *puVar5;
      if (*(char *)(lStack_38 + 0x17) < '\0') {
        lStack_38 = *(long *)lStack_38;
      }
      func_0x000104c5890c(param_2,&lStack_38);
      puVar5 = puVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  uVar3 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = uVar3;
  *(int *)(param_1 + 3) = (int)(uVar1 - uVar3 >> 3);
  return;
}



/* Entry: 104c589d0; end: 104c58c63;  */

void FUN_104c589d0(undefined4 *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  long param_6)

{
  undefined **ppuVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long *plStack_68;
  
  ppuVar1 = &PTR_PTR_113310538;
  if (*(undefined ***)(param_6 + 0x28) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_6 + 0x28);
  }
  *param_1 = *(undefined4 *)(ppuVar1 + 0xe);
  param_2[1] = *param_2;
  func_0x000104c58880(param_2,(long)*(int *)(ppuVar1 + 3));
  puVar4 = ppuVar1[2];
  ppuVar5 = ppuVar1 + 2;
  if (((ulong)puVar4 & 1) != 0) {
    ppuVar5 = (undefined **)(puVar4 + 7);
  }
  if (*(int *)(ppuVar1 + 3) != 0) {
    lVar6 = (long)*(int *)(ppuVar1 + 3) << 3;
    do {
      plStack_68 = (long *)*ppuVar5;
      if (*(char *)((long)plStack_68 + 0x17) < '\0') {
        plStack_68 = (long *)*plStack_68;
      }
      func_0x000104c5890c(param_2,&plStack_68);
      ppuVar5 = ppuVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  lVar6 = *param_2;
  *(long *)(param_1 + 2) = lVar6;
  param_1[4] = (int)((ulong)(param_2[1] - lVar6) >> 3);
  param_1[5] = *(undefined4 *)((long)ppuVar1 + 0x74);
  param_3[1] = *param_3;
  func_0x000104c58880(param_3,(long)*(int *)(ppuVar1 + 6));
  puVar4 = ppuVar1[5];
  ppuVar5 = ppuVar1 + 5;
  if (((ulong)puVar4 & 1) != 0) {
    ppuVar5 = (undefined **)(puVar4 + 7);
  }
  if (*(int *)(ppuVar1 + 6) != 0) {
    lVar6 = (long)*(int *)(ppuVar1 + 6) << 3;
    do {
      plStack_68 = (long *)*ppuVar5;
      if (*(char *)((long)plStack_68 + 0x17) < '\0') {
        plStack_68 = (long *)*plStack_68;
      }
      func_0x000104c5890c(param_3,&plStack_68);
      ppuVar5 = ppuVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  lVar6 = *param_3;
  *(long *)(param_1 + 6) = lVar6;
  param_1[8] = (int)((ulong)(param_3[1] - lVar6) >> 3);
  param_4[1] = *param_4;
  func_0x000104c58880(param_4,(long)*(int *)(ppuVar1 + 9));
  puVar4 = ppuVar1[8];
  ppuVar5 = ppuVar1 + 8;
  if (((ulong)puVar4 & 1) != 0) {
    ppuVar5 = (undefined **)(puVar4 + 7);
  }
  if (*(int *)(ppuVar1 + 9) != 0) {
    lVar6 = (long)*(int *)(ppuVar1 + 9) << 3;
    do {
      plStack_68 = (long *)*ppuVar5;
      if (*(char *)((long)plStack_68 + 0x17) < '\0') {
        plStack_68 = (long *)*plStack_68;
      }
      func_0x000104c5890c(param_4,&plStack_68);
      ppuVar5 = ppuVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  lVar6 = *param_4;
  *(long *)(param_1 + 10) = lVar6;
  param_1[0xc] = (int)((ulong)(param_4[1] - lVar6) >> 3);
  param_5[1] = *param_5;
  func_0x000104c58880(param_5,(long)*(int *)(ppuVar1 + 0xc));
  puVar4 = ppuVar1[0xb];
  ppuVar5 = ppuVar1 + 0xb;
  if (((ulong)puVar4 & 1) != 0) {
    ppuVar5 = (undefined **)(puVar4 + 7);
  }
  if (*(int *)(ppuVar1 + 0xc) != 0) {
    lVar6 = (long)*(int *)(ppuVar1 + 0xc) << 3;
    do {
      plStack_68 = (long *)*ppuVar5;
      if (*(char *)((long)plStack_68 + 0x17) < '\0') {
        plStack_68 = (long *)*plStack_68;
      }
      func_0x000104c5890c(param_5,&plStack_68);
      ppuVar5 = ppuVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  lVar6 = *param_5;
  *(long *)(param_1 + 0xe) = lVar6;
  param_1[0x10] = (int)((ulong)(param_5[1] - lVar6) >> 3);
  puVar3 = (ulong *)(*(ulong *)(param_6 + 0x18) & 0xfffffffffffffffc);
  puVar2 = (ulong *)*puVar3;
  if (-1 < *(char *)((long)puVar3 + 0x17)) {
    puVar2 = puVar3;
  }
  *(ulong **)(param_1 + 0x12) = puVar2;
  puVar3 = (ulong *)(*(ulong *)(param_6 + 0x20) & 0xfffffffffffffffc);
  puVar2 = (ulong *)*puVar3;
  if (-1 < *(char *)((long)puVar3 + 0x17)) {
    puVar2 = puVar3;
  }
  *(ulong **)(param_1 + 0x14) = puVar2;
  return;
}



/* Entry: 104c58c64; end: 104c58cfb;  */

void FUN_104c58c64(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
      puVar4 = param_1;
    }
    else {
      puVar3 = (undefined8 *)0x19;
      if ((param_4 | 7) != 0x17) {
        puVar3 = (undefined8 *)((param_4 | 7) + 1);
      }
      puVar4 = puVar3;
      __Znwm();
      param_1[1] = param_4;
      param_1[2] = (ulong)puVar3 | 0x8000000000000000;
      *param_1 = puVar4;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)puVar4 = *param_2;
      puVar4 = (undefined8 *)((long)puVar4 + 1);
    }
    *(undefined1 *)puVar4 = 0;
    return;
  }
  FUN_104c4f6b8();
  FUN_104c4f6cc("vector");
  FUN_104c4f6cc("vector");
  FUN_104c4f6cc("vector");
  pcVar5 = "vector";
  FUN_104c4f6cc();
  lVar11 = *(long *)((long)pcVar5 + 8);
  if ((undefined1 *)(*(long *)((long)pcVar5 + 0x10) - lVar11 >> 4) < param_2) {
    lVar10 = *(long *)pcVar5;
    lVar11 = lVar11 - lVar10;
    puVar1 = param_2 + (lVar11 >> 4);
    if ((ulong)puVar1 >> 0x3c != 0) {
      FUN_104c58e60();
LAB_104c58e5c:
      func_0x000104c4f740();
      FUN_104c4f6cc("vector");
      FUN_104c4f6cc("vector");
      pcVar5 = "vector";
      FUN_104c4f6cc();
      if ((ulong)param_2 >> 0x3d == 0) {
        __Znwm((long)param_2 << 3);
        return;
      }
      func_0x000104c4f740();
      *(undefined ***)pcVar5 = &PTR_FUN_1107ec9e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
      return;
    }
    uVar7 = *(long *)((long)pcVar5 + 0x10) - lVar10;
    puVar8 = (undefined1 *)((long)uVar7 >> 3);
    if (puVar8 <= puVar1) {
      puVar8 = puVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      puVar8 = (undefined1 *)0xfffffffffffffff;
    }
    if (puVar8 == (undefined1 *)0x0) {
      lVar6 = 0;
    }
    else {
      if ((ulong)puVar8 >> 0x3c != 0) goto LAB_104c58e5c;
      lVar6 = (long)puVar8 << 4;
      __Znwm();
    }
    lVar2 = lVar6 + lVar11;
    _bzero(lVar2,(long)param_2 << 4);
    lVar9 = lVar2 + (lVar11 >> 4) * -0x10;
    _memcpy(lVar9,lVar10,lVar11);
    *(long *)pcVar5 = lVar9;
    *(long *)((long)pcVar5 + 8) = lVar2 + (long)param_2 * 0x10;
    *(long *)((long)pcVar5 + 0x10) = lVar6 + (long)puVar8 * 0x10;
    if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar10);
      return;
    }
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      _bzero(lVar11,(long)param_2 << 4);
      lVar11 = lVar11 + (long)param_2 * 0x10;
    }
    *(long *)((long)pcVar5 + 8) = lVar11;
  }
  return;
}



/* Entry: 104c58cfc; end: 104c58d4b;  */

void FUN_104c58cfc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  FUN_104c4f6cc("vector");
  FUN_104c4f6cc("vector");
  FUN_104c4f6cc("vector");
  pcVar3 = "vector";
  FUN_104c4f6cc();
  lVar9 = *(long *)((long)pcVar3 + 8);
  if ((ulong)(*(long *)((long)pcVar3 + 0x10) - lVar9 >> 4) < param_2) {
    lVar8 = *(long *)pcVar3;
    lVar9 = lVar9 - lVar8;
    uVar1 = param_2 + (lVar9 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_104c58e60();
LAB_104c58e5c:
      func_0x000104c4f740();
      FUN_104c4f6cc("vector");
      FUN_104c4f6cc("vector");
      pcVar3 = "vector";
      FUN_104c4f6cc();
      if (param_2 >> 0x3d == 0) {
        __Znwm(param_2 << 3);
        return;
      }
      func_0x000104c4f740();
      *(undefined ***)pcVar3 = &PTR_FUN_1107ec9e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
      return;
    }
    uVar5 = *(long *)((long)pcVar3 + 0x10) - lVar8;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar6 >> 0x3c != 0) goto LAB_104c58e5c;
      lVar4 = uVar6 << 4;
      __Znwm();
    }
    lVar2 = lVar4 + lVar9;
    _bzero(lVar2,param_2 << 4);
    lVar7 = lVar2 + (lVar9 >> 4) * -0x10;
    _memcpy(lVar7,lVar8,lVar9);
    *(long *)pcVar3 = lVar7;
    *(ulong *)((long)pcVar3 + 8) = lVar2 + param_2 * 0x10;
    *(ulong *)((long)pcVar3 + 0x10) = lVar4 + uVar6 * 0x10;
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar8);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      _bzero(lVar9,param_2 << 4);
      lVar9 = lVar9 + param_2 * 0x10;
    }
    *(long *)((long)pcVar3 + 8) = lVar9;
  }
  return;
}



/* Entry: 104c58d4c; end: 104c58e5f;  */

void FUN_104c58d4c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_1[1];
  if ((ulong)(param_1[2] - lVar9 >> 4) < param_2) {
    lVar8 = *param_1;
    lVar9 = lVar9 - lVar8;
    uVar1 = param_2 + (lVar9 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_104c58e60();
LAB_104c58e5c:
      func_0x000104c4f740();
      FUN_104c4f6cc("vector");
      FUN_104c4f6cc("vector");
      pcVar4 = "vector";
      FUN_104c4f6cc();
      if (param_2 >> 0x3d == 0) {
        __Znwm(param_2 << 3);
        return;
      }
      func_0x000104c4f740();
      *(undefined ***)pcVar4 = &PTR_FUN_1107ec9e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
      return;
    }
    uVar5 = param_1[2] - lVar8;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar6 >> 0x3c != 0) goto LAB_104c58e5c;
      lVar3 = uVar6 << 4;
      __Znwm();
    }
    lVar2 = lVar3 + lVar9;
    _bzero(lVar2,param_2 << 4);
    lVar7 = lVar2 + (lVar9 >> 4) * -0x10;
    _memcpy(lVar7,lVar8,lVar9);
    *param_1 = lVar7;
    param_1[1] = lVar2 + param_2 * 0x10;
    param_1[2] = lVar3 + uVar6 * 0x10;
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar8);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      _bzero(lVar9,param_2 << 4);
      lVar9 = lVar9 + param_2 * 0x10;
    }
    param_1[1] = lVar9;
  }
  return;
}



/* Entry: 104c58e60; end: 104c58e9b;  */

void FUN_104c58e60(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  
  FUN_104c4f6cc("vector");
  FUN_104c4f6cc("vector");
  pcVar1 = "vector";
  FUN_104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  *(undefined ***)pcVar1 = &PTR_FUN_1107ec9e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c58e9c; end: 104c58ecf;  */

void FUN_104c58e9c(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  *param_1 = &PTR_FUN_1107ec9e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c58ed0; end: 104c58edf;  */

void FUN_104c58ed0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec9e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c58ee0; end: 104c58eff;  */

void FUN_104c58ee0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec9e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c58f00; end: 104c58f07;  */

void FUN_104c58f00(void)

{
  return;
}



/* Entry: 104c58f08; end: 104c58fe7;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

ulong * FUN_104c58f08(ulong *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  if (param_3 - 1U < 0xbffffffffffffffd) {
    FUN_104c59120(param_1,(param_3 + 2U) / 3 << 2 | 1,0);
    puVar5 = (ulong *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar5 = param_1;
    }
    func_0x00010073e1ec(puVar5,param_2,param_3);
    uVar1 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_1,uVar1 - 1,0);
    return param_1;
  }
  puVar3 = (undefined1 *)register0x00000008;
  puVar5 = (ulong *)"";
  while( true ) {
    puVar7 = puVar5;
    puVar4 = param_1;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(ulong **)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
    *(ulong **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = unaff_x30;
    puVar5 = puVar7;
    func_0x000107c613d0();
    if (puVar5 < (ulong *)0x7ffffffffffffff8) break;
    FUN_104c4f6b8();
    *(undefined8 *)(puVar3 + -0x60) = unaff_x20;
    *(ulong **)(puVar3 + -0x58) = puVar4;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x48) = &UNK_10002d57c;
    unaff_x29 = puVar3 + -0x50;
    if ((bRam00000001132dfb00 & 1) != 0) {
      return puVar5;
    }
    puVar5 = (ulong *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)puVar5 == 0) {
      return puVar5;
    }
    unaff_x30 = &UNK_10002d5bc;
    puVar3 = puVar3 + -0x60;
    param_1 = (ulong *)0x1132dfae8;
    puVar5 = (ulong *)&UNK_10f5738ce;
    unaff_x19 = puVar4;
    unaff_x21 = puVar7;
  }
  if (puVar5 < (ulong *)0x17) {
    *(char *)((long)puVar4 + 0x17) = (char)puVar5;
    puVar6 = puVar4;
    if (puVar5 == (ulong *)0x0) goto code_r0x00010002d55c;
  }
  else {
    puVar2 = (ulong *)0x19;
    if (((ulong)puVar5 | 7) != 0x17) {
      puVar2 = (ulong *)(((ulong)puVar5 | 7) + 1);
    }
    puVar6 = puVar2;
    func_0x000107c60e20();
    puVar4[1] = (ulong)puVar5;
    puVar4[2] = (ulong)puVar2 | 0x8000000000000000;
    *puVar4 = (ulong)puVar6;
  }
  func_0x000107c610b8(puVar6,puVar7,puVar5);
code_r0x00010002d55c:
  *(char *)((long)puVar6 + (long)puVar5) = '\0';
  return puVar4;
}



/* Entry: 104c58fe8; end: 104c5911f;  */

void FUN_104c58fe8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *******pppppppuVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uStack_40;
  undefined8 ******ppppppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_104c54c8c(&ppppppuStack_38,param_2,param_3);
  uVar4 = uStack_30;
  if (-1 < (char)bStack_21) {
    uVar4 = (ulong)bStack_21;
  }
  if ((uVar4 & 3) != 0 || uVar4 == 0) {
    if (((uint)(int)(char)bStack_21 >> 7 & 1) == 0) {
      return;
    }
    goto LAB_104c5903c;
  }
  lVar3 = (uVar4 >> 1) + (uVar4 >> 2);
  func_0x000100651d8c(param_1,lVar3);
  lVar2 = *param_1;
  uStack_40 = 0;
  pppppppuVar1 = (undefined8 *******)ppppppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppppppuVar1 = &ppppppuStack_38;
  }
  func_0x000100651e88(lVar2,&uStack_40,lVar3,pppppppuVar1,uStack_30);
  if ((int)lVar2 == 1) {
    uVar4 = param_1[1] - *param_1;
    if (uStack_40 < uVar4 || uStack_40 - uVar4 == 0) {
      if (uStack_40 < uVar4) {
        lVar3 = *param_1 + uStack_40;
        goto LAB_104c590d8;
      }
    }
    else {
      func_0x000100651d8c(param_1,uStack_40 - uVar4);
    }
  }
  else {
    lVar3 = *param_1;
    if (param_1[1] != lVar3) {
LAB_104c590d8:
      param_1[1] = lVar3;
    }
  }
  if (-1 < (char)bStack_21) {
    return;
  }
LAB_104c5903c:
  __ZdlPv(ppppppuStack_38);
  return;
}



/* Entry: 104c59120; end: 104c591bb;  */

/* WARNING: Removing unreachable block (ram,0x000104c59c6c) */
/* WARNING: Removing unreachable block (ram,0x000104c59c70) */
/* WARNING: Removing unreachable block (ram,0x000104c59bb4) */
/* WARNING: Removing unreachable block (ram,0x000104c59bb8) */
/* WARNING: Removing unreachable block (ram,0x000104c59afc) */
/* WARNING: Removing unreachable block (ram,0x000104c59b00) */
/* WARNING: Removing unreachable block (ram,0x000104c59a44) */
/* WARNING: Removing unreachable block (ram,0x000104c59a48) */
/* WARNING: Removing unreachable block (ram,0x000104c5998c) */
/* WARNING: Removing unreachable block (ram,0x000104c59990) */
/* WARNING: Removing unreachable block (ram,0x000104c598d4) */
/* WARNING: Removing unreachable block (ram,0x000104c598d8) */
/* WARNING: Removing unreachable block (ram,0x000104c597cc) */
/* WARNING: Removing unreachable block (ram,0x000104c597d0) */
/* WARNING: Removing unreachable block (ram,0x000104c59790) */
/* WARNING: Removing unreachable block (ram,0x000104c59898) */
/* WARNING: Removing unreachable block (ram,0x000104c59950) */
/* WARNING: Removing unreachable block (ram,0x000104c59a08) */
/* WARNING: Removing unreachable block (ram,0x000104c59ac0) */
/* WARNING: Removing unreachable block (ram,0x000104c59b78) */
/* WARNING: Removing unreachable block (ram,0x000104c59c30) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffe08 : 0x000104c59c4c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong * FUN_104c59120(ulong *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,long param_6,char *param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     undefined8 param_13,long param_14,undefined8 param_15)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  char *pcVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined4 unaff_w24;
  long *plVar14;
  char *pcStack_360;
  long *plStack_358;
  long *plStack_350;
  long lStack_348;
  long **pplStack_340;
  long lStack_338;
  long lStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  code *pcStack_320;
  undefined4 uStack_318;
  undefined8 uStack_310;
  long *plStack_308;
  ulong auStack_2f8 [2];
  char cStack_2e1;
  undefined8 uStack_2d0;
  long *plStack_2c8;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long **pplStack_2a8;
  long lStack_2a0;
  undefined7 uStack_298;
  char cStack_291;
  long *plStack_290;
  long *plStack_288;
  undefined7 uStack_280;
  char cStack_279;
  undefined **ppuStack_278;
  char *pcStack_270;
  long lStack_268;
  undefined ***pppuStack_260;
  undefined **ppuStack_258;
  char *pcStack_250;
  undefined8 uStack_248;
  undefined ***pppuStack_240;
  undefined **ppuStack_238;
  char *pcStack_230;
  undefined8 uStack_228;
  undefined ***pppuStack_220;
  undefined **ppuStack_218;
  char *pcStack_210;
  undefined8 uStack_208;
  undefined ***pppuStack_200;
  undefined **ppuStack_1f8;
  char *pcStack_1f0;
  undefined **ppuStack_138;
  char *pcStack_130;
  undefined8 uStack_128;
  undefined ***pppuStack_120;
  undefined **ppuStack_118;
  char *pcStack_110;
  undefined **ppuStack_f8;
  char *pcStack_f0;
  undefined8 uStack_e8;
  undefined ***pppuStack_e0;
  long alStack_d8 [3];
  long *plStack_c0;
  long lStack_b8;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  
  if (param_2 < 0x7ffffffffffffff8) {
    if (param_2 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_2;
      puVar4 = param_1;
      if (param_2 == 0) goto LAB_104c5919c;
    }
    else {
      puVar6 = (ulong *)0x19;
      if ((param_2 | 7) != 0x17) {
        puVar6 = (ulong *)((param_2 | 7) + 1);
      }
      puVar4 = puVar6;
      __Znwm();
      param_1[1] = param_2;
      param_1[2] = (ulong)puVar6 | 0x8000000000000000;
      *param_1 = (ulong)puVar4;
    }
    _memset(puVar4,param_3,param_2);
LAB_104c5919c:
    *(undefined1 *)((long)puVar4 + param_2) = 0;
    return param_1;
  }
  FUN_104c4f6b8();
  pcVar5 = "vector";
  FUN_104c4f6cc();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(pcVar5 + 0x90) = param_15;
  func_0x00010002d4d8(auStack_2f8);
  FUN_104c533e8(&plStack_290,auStack_2f8);
  plVar8 = plStack_288;
  plVar13 = plStack_290;
  plStack_290 = (long *)0x0;
  plStack_288 = (long *)0x0;
  plVar14 = *(long **)(pcVar5 + 0x70);
  *(long **)(pcVar5 + 0x70) = plVar8;
  *(long **)(pcVar5 + 0x68) = plVar13;
  if (plVar14 != (long *)0x0) {
    plVar13 = plVar14 + 1;
    do {
      lVar11 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  plVar13 = plStack_288;
  if (plStack_288 != (long *)0x0) {
    plVar8 = plStack_288 + 1;
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
      (**(code **)(*plStack_288 + 0x10))(plStack_288);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  FUN_104c5a118(auStack_2f8,pcVar5);
  if (param_6 != 0) {
    func_0x00010002d4d8(&plStack_290,"lenscore_version");
    puVar6 = auStack_2f8;
    pplStack_2a8 = &plStack_290;
    FUN_104c5bc74(puVar6,&plStack_290,&UNK_10dd5b8f9,&pplStack_2a8,auStack_2c0);
    func_0x000100042ef0(puVar6 + 5,param_6);
    if (cStack_279 < '\0') {
      __ZdlPv(plStack_290);
    }
  }
  puVar7 = (undefined8 *)0x3f0;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_1107ecba8;
  func_0x00010002d4d8(&plStack_290,param_2);
  func_0x00010002d4d8(&pplStack_2a8,param_4);
  func_0x00010002d4d8(auStack_2c0,param_5);
  plStack_2c8 = *(long **)(pcVar5 + 0x70);
  uStack_2d0 = *(undefined8 *)(pcVar5 + 0x68);
  if (*(long *)(pcVar5 + 0x70) != 0) {
    plVar13 = (long *)(*(long *)(pcVar5 + 0x70) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_104c5e2f4(puVar7 + 3,&plStack_290,&pplStack_2a8,auStack_2c0,param_8,auStack_2f8,&uStack_2d0);
  plVar13 = plStack_2c8;
  if (plStack_2c8 != (long *)0x0) {
    plVar8 = plStack_2c8 + 1;
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
      (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  if (cStack_2a9 < '\0') {
    __ZdlPv(auStack_2c0[0]);
  }
  if (cStack_291 < '\0') {
    __ZdlPv(pplStack_2a8);
  }
  if (cStack_279 < '\0') {
    __ZdlPv(plStack_290);
  }
  plVar13 = *(long **)(pcVar5 + 0x20);
  *(undefined8 **)(pcVar5 + 0x18) = puVar7 + 3;
  *(undefined8 **)(pcVar5 + 0x20) = puVar7;
  if (plVar13 != (long *)0x0) {
    plVar8 = plVar13 + 1;
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
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  plVar13 = (long *)0x1f8;
  __Znwm();
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&PTR_DAT_1107ecbf8;
  plVar13[6] = 0;
  plVar13[5] = 0;
  plVar13[8] = 0;
  plVar13[7] = 0;
  plVar13[10] = 0;
  plVar13[9] = 0;
  plVar13[0xc] = 0;
  plVar13[0xb] = 0;
  plVar13[0xe] = 0;
  plVar13[0xd] = 0;
  plVar13[0x10] = 0;
  plVar13[0xf] = 0;
  plVar13[0x12] = 0;
  plVar13[0x11] = 0;
  plVar13[0x14] = 0;
  plVar13[0x13] = 0;
  plVar13[0x16] = 0;
  plVar13[0x15] = 0;
  plVar13[0x18] = 0;
  plVar13[0x17] = 0;
  plVar13[0x1a] = 0;
  plVar13[0x19] = 0;
  plVar13[0x1c] = 0;
  plVar13[0x1b] = 0;
  plVar13[0x1e] = 0;
  plVar13[0x1d] = 0;
  plStack_290 = plVar13 + 3;
  plVar13[4] = 0;
  *plStack_290 = 0;
  plVar13[0x20] = 0;
  plVar13[0x1f] = 0;
  plVar13[0x22] = 0;
  plVar13[0x21] = 0;
  plVar13[0x24] = 0;
  plVar13[0x23] = 0;
  plVar13[0x26] = 0;
  plVar13[0x25] = 0;
  plVar13[0x28] = 0;
  plVar13[0x27] = 0;
  plVar13[0x2a] = 0;
  plVar13[0x29] = 0;
  plVar13[0x2c] = 0;
  plVar13[0x2b] = 0;
  plVar13[0x2e] = 0;
  plVar13[0x2d] = 0;
  plVar13[0x30] = 0;
  plVar13[0x2f] = 0;
  plVar13[0x32] = 0;
  plVar13[0x31] = 0;
  plVar13[0x34] = 0;
  plVar13[0x33] = 0;
  plVar13[0x36] = 0;
  plVar13[0x35] = 0;
  plVar13[0x38] = 0;
  plVar13[0x37] = 0;
  plVar13[0x3a] = 0;
  plVar13[0x39] = 0;
  plVar13[0x3c] = 0;
  plVar13[0x3b] = 0;
  plVar13[0x3e] = 0;
  plVar13[0x3d] = 0;
  plStack_288 = plVar13;
  FUN_104c5a164(pcVar5 + 0x28,&plStack_290);
  plVar13 = plStack_288;
  if (plStack_288 != (long *)0x0) {
    plVar8 = plStack_288 + 1;
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
      (**(code **)(*plStack_288 + 0x10))(plStack_288);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  lVar11 = *(long *)(pcVar5 + 0x18);
  plStack_308 = *(long **)(pcVar5 + 0x30);
  uStack_310 = *(undefined8 *)(pcVar5 + 0x28);
  if (*(long *)(pcVar5 + 0x30) != 0) {
    plVar13 = (long *)(*(long *)(pcVar5 + 0x30) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_104c5a164(lVar11 + 0x3c8,&uStack_310);
  plVar13 = plStack_308;
  if (plStack_308 != (long *)0x0) {
    plVar8 = plStack_308 + 1;
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
      (**(code **)(*plStack_308 + 0x10))(plStack_308);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  func_0x00010002d4d8(&plStack_290,param_3);
  pcVar1 = "";
  if (param_7 != (char *)0x0) {
    pcVar1 = param_7;
  }
  func_0x00010002d4d8(&pplStack_2a8,pcVar1);
  uVar12 = *(undefined8 *)(pcVar5 + 0x28);
  pcStack_360 = pcVar5;
  if (cStack_279 < '\0') {
    func_0x000100033dac(&plStack_358,plStack_290,plStack_288);
  }
  else {
    plStack_350 = plStack_288;
    plStack_358 = plStack_290;
    lStack_348 = CONCAT17(cStack_279,uStack_280);
  }
  if (cStack_291 < '\0') {
    func_0x000100033dac(&pplStack_340,pplStack_2a8,lStack_2a0);
  }
  else {
    lStack_338 = lStack_2a0;
    pplStack_340 = pplStack_2a8;
    lStack_330 = CONCAT17(cStack_291,uStack_298);
  }
  uStack_50 = SUB84(&stack0xfffffffffffffff0,0);
  uStack_4c = (undefined1)((ulong)&stack0xfffffffffffffff0 >> 0x20);
  uStack_328 = uStack_50;
  uStack_324 = CONCAT31(uStack_324._1_3_,uStack_4c);
  pcStack_320 = FUN_104c591bc;
  plVar13 = (long *)0x58;
  uStack_318 = unaff_w24;
  __Znwm();
  *plVar13 = (long)&PTR_DAT_1107ecc48;
  plVar13[1] = (long)pcStack_360;
  plVar13[3] = (long)plStack_350;
  plVar13[2] = (long)plStack_358;
  plVar13[4] = lStack_348;
  plStack_358 = (long *)0x0;
  plStack_350 = (long *)0x0;
  lStack_348 = 0;
  plVar13[6] = lStack_338;
  plVar13[5] = (long)pplStack_340;
  plVar13[7] = lStack_330;
  pplStack_340 = (long **)0x0;
  lStack_338 = 0;
  lStack_330 = 0;
  plVar13[9] = (long)pcStack_320;
  plVar13[8] = CONCAT44(uStack_324,uStack_328);
  *(undefined4 *)(plVar13 + 10) = uStack_318;
  *(undefined4 *)((long)plVar13 + 0x54) = 0;
  plStack_c0 = plVar13;
  FUN_104c5b990(uVar12,alStack_d8);
  if (plStack_c0 == alStack_d8) {
    lVar11 = 0x20;
LAB_104c596b4:
    (**(code **)(*plStack_c0 + lVar11))();
  }
  else if (plStack_c0 != (long *)0x0) {
    lVar11 = 0x28;
    goto LAB_104c596b4;
  }
  if (lStack_330 < 0) {
    __ZdlPv(pplStack_340);
  }
  if (lStack_348 < 0) {
    __ZdlPv(plStack_358);
  }
  ppuStack_f8 = &PTR_FUN_1107eccc8;
  uStack_e8 = param_11;
  pcStack_f0 = pcVar5;
  pppuStack_e0 = &ppuStack_f8;
  func_0x000104c5ba1c(*(long *)(pcVar5 + 0x28) + 0x20,&ppuStack_f8);
  if (pppuStack_e0 == &ppuStack_f8) {
    lVar11 = 0x20;
LAB_104c59728:
    (**(code **)((long)*pppuStack_e0 + lVar11))();
  }
  else if (pppuStack_e0 != (undefined ***)0x0) {
    lVar11 = 0x28;
    goto LAB_104c59728;
  }
  lVar11 = *(long *)(pcVar5 + 0x28);
  ppuStack_118 = &PTR_DAT_1107ecd58;
  pcStack_110 = pcVar5;
  plVar13 = (long *)(lVar11 + 0xa0);
  plVar8 = *(long **)(lVar11 + 0xb8);
  *(undefined8 *)(lVar11 + 0xb8) = 0;
  if (plVar8 == plVar13) {
    lVar10 = 0x20;
LAB_104c59770:
    (**(code **)(*plVar8 + lVar10))();
    if (&ppuStack_118 != (undefined ***)0x0) goto LAB_104c597a8;
    *(undefined8 *)(lVar11 + 0xb8) = 0;
  }
  else {
    if (plVar8 != (long *)0x0) {
      lVar10 = 0x28;
      goto LAB_104c59770;
    }
LAB_104c597a8:
    *(long **)(lVar11 + 0xb8) = plVar13;
    (*(code *)ppuStack_118[3])(&ppuStack_118,plVar13);
    (*(code *)ppuStack_118[4])();
  }
  ppuStack_138 = &PTR_DAT_1107ecde8;
  uStack_128 = param_12;
  iVar9 = (int)&ppuStack_138;
  pcStack_130 = pcVar5;
  pppuStack_120 = &ppuStack_138;
  func_0x000104c5baa8(*(long *)(pcVar5 + 0x28) + 0x40);
  if (pppuStack_120 == &ppuStack_138) {
    lVar11 = 0x20;
LAB_104c59830:
    (**(code **)((long)*pppuStack_120 + lVar11))();
  }
  else if (pppuStack_120 != (undefined ***)0x0) {
    lVar11 = 0x28;
    goto LAB_104c59830;
  }
  lVar11 = *(long *)(pcVar5 + 0x28);
  plVar13 = (long *)(lVar11 + 0x60);
  plVar8 = *(long **)(lVar11 + 0x78);
  *(undefined8 *)(lVar11 + 0x78) = 0;
  if (plVar8 == plVar13) {
    lVar10 = 0x20;
LAB_104c59878:
    (**(code **)(*plVar8 + lVar10))();
    if (&param_9 != (undefined8 *)0x158) goto LAB_104c598b0;
    *(undefined8 *)(lVar11 + 0x78) = 0;
  }
  else {
    if (plVar8 != (long *)0x0) {
      lVar10 = 0x28;
      goto LAB_104c59878;
    }
LAB_104c598b0:
    *(long **)(lVar11 + 0x78) = plVar13;
    FUN_104c5c7d8(FUN_104c5c7d8);
    iVar9 = (int)plVar13;
    (*(code *)(undefined *)0x104c5c7f0)();
  }
  lVar11 = *(long *)(pcVar5 + 0x28);
  plVar13 = (long *)(lVar11 + 0x80);
  plVar8 = *(long **)(lVar11 + 0x98);
  *(undefined8 *)(lVar11 + 0x98) = 0;
  if (plVar8 == plVar13) {
    lVar10 = 0x20;
LAB_104c59930:
    (**(code **)(*plVar8 + lVar10))();
    if (&param_9 != (undefined8 *)0x178) goto LAB_104c59968;
    *(undefined8 *)(lVar11 + 0x98) = 0;
  }
  else {
    if (plVar8 != (long *)0x0) {
      lVar10 = 0x28;
      goto LAB_104c59930;
    }
LAB_104c59968:
    *(long **)(lVar11 + 0x98) = plVar13;
    FUN_104c5c88c(FUN_104c5c88c);
    iVar9 = (int)plVar13;
    (*(code *)(undefined *)0x104c5c8a4)();
  }
  lVar11 = *(long *)(pcVar5 + 0x28);
  plVar13 = (long *)(lVar11 + 0xe0);
  plVar8 = *(long **)(lVar11 + 0xf8);
  *(undefined8 *)(lVar11 + 0xf8) = 0;
  if (plVar8 == plVar13) {
    lVar10 = 0x20;
LAB_104c599e8:
    (**(code **)(*plVar8 + lVar10))();
    if (&param_9 != (undefined8 *)0x198) goto LAB_104c59a20;
    *(undefined8 *)(lVar11 + 0xf8) = 0;
  }
  else {
    if (plVar8 != (long *)0x0) {
      lVar10 = 0x28;
      goto LAB_104c599e8;
    }
LAB_104c59a20:
    *(long **)(lVar11 + 0xf8) = plVar13;
    FUN_104c5c940(FUN_104c5c940);
    iVar9 = (int)plVar13;
    (*(code *)(undefined *)0x104c5c958)();
  }
  lVar11 = *(long *)(pcVar5 + 0x28);
  plVar13 = (long *)(lVar11 + 0x120);
  plVar8 = *(long **)(lVar11 + 0x138);
  *(undefined8 *)(lVar11 + 0x138) = 0;
  if (plVar8 == plVar13) {
    lVar10 = 0x20;
LAB_104c59aa0:
    (**(code **)(*plVar8 + lVar10))();
    if (&param_9 != (undefined8 *)0x1b8) goto LAB_104c59ad8;
    *(undefined8 *)(lVar11 + 0x138) = 0;
  }
  else {
    if (plVar8 != (long *)0x0) {
      lVar10 = 0x28;
      goto LAB_104c59aa0;
    }
LAB_104c59ad8:
    *(long **)(lVar11 + 0x138) = plVar13;
    FUN_104c5c9f4(FUN_104c5c9f4);
    iVar9 = (int)plVar13;
    (*(code *)(undefined *)0x104c5ca0c)();
  }
  lVar11 = *(long *)(pcVar5 + 0x28);
  plVar13 = (long *)(lVar11 + 0x100);
  plVar8 = *(long **)(lVar11 + 0x118);
  *(undefined8 *)(lVar11 + 0x118) = 0;
  if (plVar8 == plVar13) {
    lVar10 = 0x20;
LAB_104c59b58:
    (**(code **)(*plVar8 + lVar10))();
    if (&param_9 != (undefined8 *)0x1d8) goto LAB_104c59b90;
    *(undefined8 *)(lVar11 + 0x118) = 0;
  }
  else {
    if (plVar8 != (long *)0x0) {
      lVar10 = 0x28;
      goto LAB_104c59b58;
    }
LAB_104c59b90:
    *(long **)(lVar11 + 0x118) = plVar13;
    FUN_104c5caa8(FUN_104c5caa8);
    iVar9 = (int)plVar13;
    (*(code *)(undefined *)0x104c5cac0)();
  }
  lVar11 = *(long *)(pcVar5 + 0x28);
  ppuStack_1f8 = &PTR_DAT_1107ed148;
  pcStack_1f0 = pcVar5;
  plVar13 = (long *)(lVar11 + 0x140);
  plVar8 = *(long **)(lVar11 + 0x158);
  *(undefined8 *)(lVar11 + 0x158) = 0;
  if (plVar8 == plVar13) {
    lVar10 = 0x20;
LAB_104c59c10:
    (**(code **)(*plVar8 + lVar10))();
    if (&param_9 != (undefined8 *)0x1f8) goto LAB_104c59c48;
    *(undefined8 *)(lVar11 + 0x158) = 0;
  }
  else {
    if (plVar8 != (long *)0x0) {
      lVar10 = 0x28;
      goto LAB_104c59c10;
    }
LAB_104c59c48:
    *(long **)(lVar11 + 0x158) = plVar13;
    (*(code *)ppuStack_1f8[3])();
    iVar9 = (int)plVar13;
    (*(code *)ppuStack_1f8[4])();
  }
  lVar11 = *(long *)(pcVar5 + 0x28);
  ppuStack_218 = &PTR_DAT_1107ed1d8;
  pcStack_210 = pcVar5;
  uStack_208 = param_9;
  pppuStack_200 = &ppuStack_218;
  plVar13 = (long *)(lVar11 + 0x160);
  plVar8 = *(long **)(lVar11 + 0x178);
  *(undefined8 *)(lVar11 + 0x178) = 0;
  if (plVar8 == plVar13) {
    lVar10 = 0x20;
LAB_104c59cc8:
    (**(code **)(*plVar8 + lVar10))();
    if (pppuStack_200 == (undefined ***)0x0) {
      *(undefined8 *)(lVar11 + 0x178) = 0;
    }
    else {
      if (pppuStack_200 == &ppuStack_218) goto LAB_104c59d00;
      *(undefined ****)(lVar11 + 0x178) = pppuStack_200;
      pppuStack_200 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar8 != (long *)0x0) {
      lVar10 = 0x28;
      goto LAB_104c59cc8;
    }
LAB_104c59d00:
    *(long **)(lVar11 + 0x178) = plVar13;
    (*(code *)(*pppuStack_200)[3])();
    iVar9 = (int)plVar13;
    if (pppuStack_200 == &ppuStack_218) {
      lVar11 = 0x20;
    }
    else {
      if (pppuStack_200 == (undefined ***)0x0) goto LAB_104c59d40;
      lVar11 = 0x28;
    }
    (**(code **)((long)*pppuStack_200 + lVar11))();
  }
LAB_104c59d40:
  lVar11 = *(long *)(pcVar5 + 0x28);
  ppuStack_238 = &PTR_DAT_1107ed268;
  pcStack_230 = pcVar5;
  uStack_228 = param_10;
  pppuStack_220 = &ppuStack_238;
  plVar13 = (long *)(lVar11 + 0x180);
  plVar8 = *(long **)(lVar11 + 0x198);
  *(undefined8 *)(lVar11 + 0x198) = 0;
  if (plVar8 == plVar13) {
    lVar10 = 0x20;
LAB_104c59d80:
    (**(code **)(*plVar8 + lVar10))();
    if (pppuStack_220 == (undefined ***)0x0) {
      *(undefined8 *)(lVar11 + 0x198) = 0;
    }
    else {
      if (pppuStack_220 == &ppuStack_238) goto LAB_104c59db8;
      *(undefined ****)(lVar11 + 0x198) = pppuStack_220;
      pppuStack_220 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar8 != (long *)0x0) {
      lVar10 = 0x28;
      goto LAB_104c59d80;
    }
LAB_104c59db8:
    *(long **)(lVar11 + 0x198) = plVar13;
    (*(code *)(*pppuStack_220)[3])();
    iVar9 = (int)plVar13;
    if (pppuStack_220 == &ppuStack_238) {
      lVar11 = 0x20;
    }
    else {
      if (pppuStack_220 == (undefined ***)0x0) goto LAB_104c59df8;
      lVar11 = 0x28;
    }
    (**(code **)((long)*pppuStack_220 + lVar11))();
  }
LAB_104c59df8:
  lVar11 = *(long *)(pcVar5 + 0x28);
  ppuStack_258 = &PTR_DAT_1107ed2f8;
  pcStack_250 = pcVar5;
  uStack_248 = param_13;
  pppuStack_240 = &ppuStack_258;
  plVar13 = (long *)(lVar11 + 0x1a0);
  plVar8 = *(long **)(lVar11 + 0x1b8);
  *(undefined8 *)(lVar11 + 0x1b8) = 0;
  if (plVar8 == plVar13) {
    lVar10 = 0x20;
LAB_104c59e38:
    (**(code **)(*plVar8 + lVar10))();
    if (pppuStack_240 == (undefined ***)0x0) {
      *(undefined8 *)(lVar11 + 0x1b8) = 0;
    }
    else {
      if (pppuStack_240 == &ppuStack_258) goto LAB_104c59e70;
      *(undefined ****)(lVar11 + 0x1b8) = pppuStack_240;
      pppuStack_240 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar8 != (long *)0x0) {
      lVar10 = 0x28;
      goto LAB_104c59e38;
    }
LAB_104c59e70:
    *(long **)(lVar11 + 0x1b8) = plVar13;
    (*(code *)(*pppuStack_240)[3])();
    iVar9 = (int)plVar13;
    if (pppuStack_240 == &ppuStack_258) {
      lVar11 = 0x20;
    }
    else {
      if (pppuStack_240 == (undefined ***)0x0) goto LAB_104c59eb0;
      lVar11 = 0x28;
    }
    (**(code **)((long)*pppuStack_240 + lVar11))();
  }
LAB_104c59eb0:
  if (param_14 == 0) goto LAB_104c59f6c;
  lVar11 = *(long *)(pcVar5 + 0x28);
  ppuStack_278 = &PTR_DAT_1107ed388;
  pcStack_270 = pcVar5;
  lStack_268 = param_14;
  pppuStack_260 = &ppuStack_278;
  plVar13 = (long *)(lVar11 + 0x1c0);
  plVar8 = *(long **)(lVar11 + 0x1d8);
  *(undefined8 *)(lVar11 + 0x1d8) = 0;
  if (plVar8 == plVar13) {
    lVar10 = 0x20;
LAB_104c59ef4:
    (**(code **)(*plVar8 + lVar10))();
    if (pppuStack_260 == (undefined ***)0x0) {
      *(undefined8 *)(lVar11 + 0x1d8) = 0;
      goto LAB_104c59f6c;
    }
    if (pppuStack_260 != &ppuStack_278) {
      *(undefined ****)(lVar11 + 0x1d8) = pppuStack_260;
      pppuStack_260 = (undefined ***)0x0;
      goto LAB_104c59f6c;
    }
  }
  else if (plVar8 != (long *)0x0) {
    lVar10 = 0x28;
    goto LAB_104c59ef4;
  }
  *(long **)(lVar11 + 0x1d8) = plVar13;
  (*(code *)(*pppuStack_260)[3])();
  iVar9 = (int)plVar13;
  if (pppuStack_260 == &ppuStack_278) {
    lVar11 = 0x20;
  }
  else {
    if (pppuStack_260 == (undefined ***)0x0) goto LAB_104c59f6c;
    lVar11 = 0x28;
  }
  (**(code **)((long)*pppuStack_260 + lVar11))();
LAB_104c59f6c:
  FUN_104c53560(*(undefined8 *)(pcVar5 + 0x18));
  if (cStack_291 < '\0') {
    __ZdlPv(pplStack_2a8);
  }
  if (cStack_279 < '\0') {
    __ZdlPv(plStack_290);
  }
  puVar6 = auStack_2f8;
  func_0x000104c4f944(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return puVar6;
  }
  ___stack_chk_fail();
  if (iVar9 != 0) {
    FUN_104bd46a0(puVar6);
    func_0x000104c5a1c8(&pcStack_360);
    if (cStack_291 < '\0') {
      __ZdlPv(pplStack_2a8);
    }
    if (cStack_279 < '\0') {
      __ZdlPv(plStack_290);
    }
    func_0x000104c4f944(auStack_2f8);
  }
  do {
    __Unwind_Resume(puVar6);
  } while( true );
}



/* Entry: 104c591bc; end: 104c591cf;  */

void FUN_104c591bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,char *param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,long param_23,undefined8 param_24)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 unaff_x29;
  long unaff_x30;
  char *pcStack_320;
  long *plStack_318;
  long *plStack_310;
  long lStack_308;
  long **pplStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  long lStack_2e0;
  undefined4 uStack_2d8;
  undefined8 uStack_2d0;
  long *plStack_2c8;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 uStack_290;
  long *plStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long **pplStack_268;
  long lStack_260;
  undefined7 uStack_258;
  char cStack_251;
  long *plStack_250;
  long *plStack_248;
  undefined7 uStack_240;
  char cStack_239;
  undefined **ppuStack_238;
  char *pcStack_230;
  long lStack_228;
  undefined ***pppuStack_220;
  undefined **ppuStack_218;
  char *pcStack_210;
  undefined8 uStack_208;
  undefined ***pppuStack_200;
  undefined **ppuStack_1f8;
  char *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined ***pppuStack_1e0;
  undefined **ppuStack_1d8;
  char *pcStack_1d0;
  undefined8 uStack_1c8;
  undefined ***pppuStack_1c0;
  undefined **ppuStack_1b8;
  char *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined ***pppuStack_1a0;
  undefined **ppuStack_198;
  char *pcStack_190;
  undefined8 uStack_188;
  undefined ***pppuStack_180;
  undefined **ppuStack_178;
  char *pcStack_170;
  undefined8 uStack_168;
  undefined ***pppuStack_160;
  undefined **ppuStack_158;
  char *pcStack_150;
  undefined8 uStack_148;
  undefined ***pppuStack_140;
  undefined **ppuStack_138;
  char *pcStack_130;
  undefined8 uStack_128;
  undefined ***pppuStack_120;
  undefined **ppuStack_118;
  char *pcStack_110;
  undefined8 uStack_108;
  undefined ***pppuStack_100;
  undefined **ppuStack_f8;
  char *pcStack_f0;
  undefined8 uStack_e8;
  undefined ***pppuStack_e0;
  undefined **ppuStack_d8;
  char *pcStack_d0;
  undefined8 uStack_c8;
  undefined ***pppuStack_c0;
  undefined **ppuStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  undefined ***pppuStack_a0;
  long alStack_98 [3];
  long *plStack_80;
  long lStack_78;
  
  pcVar4 = "vector";
  FUN_104c4f6cc();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(pcVar4 + 0x90) = param_24;
  func_0x00010002d4d8(auStack_2b8);
  FUN_104c533e8(&plStack_250,auStack_2b8);
  plVar6 = plStack_248;
  plVar11 = plStack_250;
  plStack_250 = (long *)0x0;
  plStack_248 = (long *)0x0;
  plVar12 = *(long **)(pcVar4 + 0x70);
  *(long **)(pcVar4 + 0x70) = plVar6;
  *(long **)(pcVar4 + 0x68) = plVar11;
  if (plVar12 != (long *)0x0) {
    plVar11 = plVar12 + 1;
    do {
      lVar9 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar11 = plStack_248;
  if (plStack_248 != (long *)0x0) {
    plVar6 = plStack_248 + 1;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_248 + 0x10))(plStack_248);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  FUN_104c5a118(auStack_2b8,pcVar4);
  if (param_6 != 0) {
    func_0x00010002d4d8(&plStack_250,"lenscore_version");
    puVar5 = auStack_2b8;
    pplStack_268 = &plStack_250;
    FUN_104c5bc74(puVar5,&plStack_250,&UNK_10dd5b8f9,&pplStack_268,auStack_280);
    func_0x000100042ef0(puVar5 + 5,param_6);
    if (cStack_239 < '\0') {
      __ZdlPv(plStack_250);
    }
  }
  puVar5 = (undefined8 *)0x3f0;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_1107ecba8;
  func_0x00010002d4d8(&plStack_250,param_2);
  func_0x00010002d4d8(&pplStack_268,param_4);
  func_0x00010002d4d8(auStack_280,param_5);
  plStack_288 = *(long **)(pcVar4 + 0x70);
  uStack_290 = *(undefined8 *)(pcVar4 + 0x68);
  if (*(long *)(pcVar4 + 0x70) != 0) {
    plVar11 = (long *)(*(long *)(pcVar4 + 0x70) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_104c5e2f4(puVar5 + 3,&plStack_250,&pplStack_268,auStack_280,param_8,auStack_2b8,&uStack_290);
  plVar11 = plStack_288;
  if (plStack_288 != (long *)0x0) {
    plVar6 = plStack_288 + 1;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_288 + 0x10))(plStack_288);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if (cStack_269 < '\0') {
    __ZdlPv(auStack_280[0]);
  }
  if (cStack_251 < '\0') {
    __ZdlPv(pplStack_268);
  }
  if (cStack_239 < '\0') {
    __ZdlPv(plStack_250);
  }
  plVar11 = *(long **)(pcVar4 + 0x20);
  *(undefined8 **)(pcVar4 + 0x18) = puVar5 + 3;
  *(undefined8 **)(pcVar4 + 0x20) = puVar5;
  if (plVar11 != (long *)0x0) {
    plVar6 = plVar11 + 1;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = (long *)0x1f8;
  __Znwm();
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&PTR_DAT_1107ecbf8;
  plVar11[6] = 0;
  plVar11[5] = 0;
  plVar11[8] = 0;
  plVar11[7] = 0;
  plVar11[10] = 0;
  plVar11[9] = 0;
  plVar11[0xc] = 0;
  plVar11[0xb] = 0;
  plVar11[0xe] = 0;
  plVar11[0xd] = 0;
  plVar11[0x10] = 0;
  plVar11[0xf] = 0;
  plVar11[0x12] = 0;
  plVar11[0x11] = 0;
  plVar11[0x14] = 0;
  plVar11[0x13] = 0;
  plVar11[0x16] = 0;
  plVar11[0x15] = 0;
  plVar11[0x18] = 0;
  plVar11[0x17] = 0;
  plVar11[0x1a] = 0;
  plVar11[0x19] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1b] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1d] = 0;
  plStack_250 = plVar11 + 3;
  plVar11[4] = 0;
  *plStack_250 = 0;
  plVar11[0x20] = 0;
  plVar11[0x1f] = 0;
  plVar11[0x22] = 0;
  plVar11[0x21] = 0;
  plVar11[0x24] = 0;
  plVar11[0x23] = 0;
  plVar11[0x26] = 0;
  plVar11[0x25] = 0;
  plVar11[0x28] = 0;
  plVar11[0x27] = 0;
  plVar11[0x2a] = 0;
  plVar11[0x29] = 0;
  plVar11[0x2c] = 0;
  plVar11[0x2b] = 0;
  plVar11[0x2e] = 0;
  plVar11[0x2d] = 0;
  plVar11[0x30] = 0;
  plVar11[0x2f] = 0;
  plVar11[0x32] = 0;
  plVar11[0x31] = 0;
  plVar11[0x34] = 0;
  plVar11[0x33] = 0;
  plVar11[0x36] = 0;
  plVar11[0x35] = 0;
  plVar11[0x38] = 0;
  plVar11[0x37] = 0;
  plVar11[0x3a] = 0;
  plVar11[0x39] = 0;
  plVar11[0x3c] = 0;
  plVar11[0x3b] = 0;
  plVar11[0x3e] = 0;
  plVar11[0x3d] = 0;
  plStack_248 = plVar11;
  FUN_104c5a164(pcVar4 + 0x28,&plStack_250);
  plVar11 = plStack_248;
  if (plStack_248 != (long *)0x0) {
    plVar6 = plStack_248 + 1;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_248 + 0x10))(plStack_248);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  lVar9 = *(long *)(pcVar4 + 0x18);
  plStack_2c8 = *(long **)(pcVar4 + 0x30);
  uStack_2d0 = *(undefined8 *)(pcVar4 + 0x28);
  if (*(long *)(pcVar4 + 0x30) != 0) {
    plVar11 = (long *)(*(long *)(pcVar4 + 0x30) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_104c5a164(lVar9 + 0x3c8,&uStack_2d0);
  plVar11 = plStack_2c8;
  if (plStack_2c8 != (long *)0x0) {
    plVar6 = plStack_2c8 + 1;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  func_0x00010002d4d8(&plStack_250,param_3);
  pcVar1 = "";
  if (param_7 != (char *)0x0) {
    pcVar1 = param_7;
  }
  func_0x00010002d4d8(&pplStack_268,pcVar1);
  uVar10 = *(undefined8 *)(pcVar4 + 0x28);
  pcStack_320 = pcVar4;
  if (cStack_239 < '\0') {
    func_0x000100033dac(&plStack_318,plStack_250,plStack_248);
  }
  else {
    plStack_310 = plStack_248;
    plStack_318 = plStack_250;
    lStack_308 = CONCAT17(cStack_239,uStack_240);
  }
  if (cStack_251 < '\0') {
    func_0x000100033dac(&pplStack_300,pplStack_268,lStack_260);
  }
  else {
    lStack_2f8 = lStack_260;
    pplStack_300 = pplStack_268;
    lStack_2f0 = CONCAT17(cStack_251,uStack_258);
  }
  uStack_2e8 = (undefined4)unaff_x29;
  uStack_2e4 = CONCAT31(uStack_2e4._1_3_,(char)((ulong)unaff_x29 >> 0x20));
  uStack_2d8 = param_9;
  plVar11 = (long *)0x58;
  lStack_2e0 = unaff_x30;
  __Znwm();
  *plVar11 = (long)&PTR_DAT_1107ecc48;
  plVar11[1] = (long)pcStack_320;
  plVar11[3] = (long)plStack_310;
  plVar11[2] = (long)plStack_318;
  plVar11[4] = lStack_308;
  plStack_318 = (long *)0x0;
  plStack_310 = (long *)0x0;
  lStack_308 = 0;
  plVar11[6] = lStack_2f8;
  plVar11[5] = (long)pplStack_300;
  plVar11[7] = lStack_2f0;
  pplStack_300 = (long **)0x0;
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  plVar11[9] = lStack_2e0;
  plVar11[8] = CONCAT44(uStack_2e4,uStack_2e8);
  *(undefined4 *)(plVar11 + 10) = uStack_2d8;
  *(undefined4 *)((long)plVar11 + 0x54) = 0;
  plStack_80 = plVar11;
  FUN_104c5b990(uVar10,alStack_98);
  if (plStack_80 == alStack_98) {
    lVar9 = 0x20;
LAB_104c596b4:
    (**(code **)(*plStack_80 + lVar9))();
  }
  else if (plStack_80 != (long *)0x0) {
    lVar9 = 0x28;
    goto LAB_104c596b4;
  }
  if (lStack_2f0 < 0) {
    __ZdlPv(pplStack_300);
  }
  if (lStack_308 < 0) {
    __ZdlPv(plStack_318);
  }
  ppuStack_b8 = &PTR_FUN_1107eccc8;
  uStack_a8 = param_20;
  pcStack_b0 = pcVar4;
  pppuStack_a0 = &ppuStack_b8;
  func_0x000104c5ba1c(*(long *)(pcVar4 + 0x28) + 0x20,&ppuStack_b8);
  if (pppuStack_a0 == &ppuStack_b8) {
    lVar9 = 0x20;
LAB_104c59728:
    (**(code **)((long)*pppuStack_a0 + lVar9))();
  }
  else if (pppuStack_a0 != (undefined ***)0x0) {
    lVar9 = 0x28;
    goto LAB_104c59728;
  }
  lVar9 = *(long *)(pcVar4 + 0x28);
  ppuStack_d8 = &PTR_DAT_1107ecd58;
  pcStack_d0 = pcVar4;
  uStack_c8 = param_11;
  pppuStack_c0 = &ppuStack_d8;
  plVar11 = (long *)(lVar9 + 0xa0);
  plVar6 = *(long **)(lVar9 + 0xb8);
  *(undefined8 *)(lVar9 + 0xb8) = 0;
  if (plVar6 == plVar11) {
    lVar8 = 0x20;
LAB_104c59770:
    (**(code **)(*plVar6 + lVar8))();
    if (pppuStack_c0 == (undefined ***)0x0) {
      *(undefined8 *)(lVar9 + 0xb8) = 0;
    }
    else {
      if (pppuStack_c0 == &ppuStack_d8) goto LAB_104c597a8;
      *(undefined ****)(lVar9 + 0xb8) = pppuStack_c0;
      pppuStack_c0 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar6 != (long *)0x0) {
      lVar8 = 0x28;
      goto LAB_104c59770;
    }
LAB_104c597a8:
    *(long **)(lVar9 + 0xb8) = plVar11;
    (*(code *)(*pppuStack_c0)[3])(pppuStack_c0,plVar11);
    if (pppuStack_c0 == &ppuStack_d8) {
      lVar9 = 0x20;
    }
    else {
      if (pppuStack_c0 == (undefined ***)0x0) goto LAB_104c597e8;
      lVar9 = 0x28;
    }
    (**(code **)((long)*pppuStack_c0 + lVar9))();
  }
LAB_104c597e8:
  ppuStack_f8 = &PTR_DAT_1107ecde8;
  uStack_e8 = param_21;
  iVar7 = (int)&ppuStack_f8;
  pcStack_f0 = pcVar4;
  pppuStack_e0 = &ppuStack_f8;
  func_0x000104c5baa8(*(long *)(pcVar4 + 0x28) + 0x40);
  if (pppuStack_e0 == &ppuStack_f8) {
    lVar9 = 0x20;
LAB_104c59830:
    (**(code **)((long)*pppuStack_e0 + lVar9))();
  }
  else if (pppuStack_e0 != (undefined ***)0x0) {
    lVar9 = 0x28;
    goto LAB_104c59830;
  }
  lVar9 = *(long *)(pcVar4 + 0x28);
  ppuStack_118 = &PTR_DAT_1107ece78;
  pcStack_110 = pcVar4;
  uStack_108 = param_12;
  pppuStack_100 = &ppuStack_118;
  plVar11 = (long *)(lVar9 + 0x60);
  plVar6 = *(long **)(lVar9 + 0x78);
  *(undefined8 *)(lVar9 + 0x78) = 0;
  if (plVar6 == plVar11) {
    lVar8 = 0x20;
LAB_104c59878:
    (**(code **)(*plVar6 + lVar8))();
    if (pppuStack_100 == (undefined ***)0x0) {
      *(undefined8 *)(lVar9 + 0x78) = 0;
    }
    else {
      if (pppuStack_100 == &ppuStack_118) goto LAB_104c598b0;
      *(undefined ****)(lVar9 + 0x78) = pppuStack_100;
      pppuStack_100 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar6 != (long *)0x0) {
      lVar8 = 0x28;
      goto LAB_104c59878;
    }
LAB_104c598b0:
    *(long **)(lVar9 + 0x78) = plVar11;
    (*(code *)(*pppuStack_100)[3])();
    iVar7 = (int)plVar11;
    if (pppuStack_100 == &ppuStack_118) {
      lVar9 = 0x20;
    }
    else {
      if (pppuStack_100 == (undefined ***)0x0) goto LAB_104c598f0;
      lVar9 = 0x28;
    }
    (**(code **)((long)*pppuStack_100 + lVar9))();
  }
LAB_104c598f0:
  lVar9 = *(long *)(pcVar4 + 0x28);
  ppuStack_138 = &PTR_DAT_1107ecf08;
  pcStack_130 = pcVar4;
  uStack_128 = param_13;
  pppuStack_120 = &ppuStack_138;
  plVar11 = (long *)(lVar9 + 0x80);
  plVar6 = *(long **)(lVar9 + 0x98);
  *(undefined8 *)(lVar9 + 0x98) = 0;
  if (plVar6 == plVar11) {
    lVar8 = 0x20;
LAB_104c59930:
    (**(code **)(*plVar6 + lVar8))();
    if (pppuStack_120 == (undefined ***)0x0) {
      *(undefined8 *)(lVar9 + 0x98) = 0;
    }
    else {
      if (pppuStack_120 == &ppuStack_138) goto LAB_104c59968;
      *(undefined ****)(lVar9 + 0x98) = pppuStack_120;
      pppuStack_120 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar6 != (long *)0x0) {
      lVar8 = 0x28;
      goto LAB_104c59930;
    }
LAB_104c59968:
    *(long **)(lVar9 + 0x98) = plVar11;
    (*(code *)(*pppuStack_120)[3])();
    iVar7 = (int)plVar11;
    if (pppuStack_120 == &ppuStack_138) {
      lVar9 = 0x20;
    }
    else {
      if (pppuStack_120 == (undefined ***)0x0) goto LAB_104c599a8;
      lVar9 = 0x28;
    }
    (**(code **)((long)*pppuStack_120 + lVar9))();
  }
LAB_104c599a8:
  lVar9 = *(long *)(pcVar4 + 0x28);
  ppuStack_158 = &PTR_DAT_1107ecf98;
  pcStack_150 = pcVar4;
  uStack_148 = param_14;
  pppuStack_140 = &ppuStack_158;
  plVar11 = (long *)(lVar9 + 0xe0);
  plVar6 = *(long **)(lVar9 + 0xf8);
  *(undefined8 *)(lVar9 + 0xf8) = 0;
  if (plVar6 == plVar11) {
    lVar8 = 0x20;
LAB_104c599e8:
    (**(code **)(*plVar6 + lVar8))();
    if (pppuStack_140 == (undefined ***)0x0) {
      *(undefined8 *)(lVar9 + 0xf8) = 0;
    }
    else {
      if (pppuStack_140 == &ppuStack_158) goto LAB_104c59a20;
      *(undefined ****)(lVar9 + 0xf8) = pppuStack_140;
      pppuStack_140 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar6 != (long *)0x0) {
      lVar8 = 0x28;
      goto LAB_104c599e8;
    }
LAB_104c59a20:
    *(long **)(lVar9 + 0xf8) = plVar11;
    (*(code *)(*pppuStack_140)[3])();
    iVar7 = (int)plVar11;
    if (pppuStack_140 == &ppuStack_158) {
      lVar9 = 0x20;
    }
    else {
      if (pppuStack_140 == (undefined ***)0x0) goto LAB_104c59a60;
      lVar9 = 0x28;
    }
    (**(code **)((long)*pppuStack_140 + lVar9))();
  }
LAB_104c59a60:
  lVar9 = *(long *)(pcVar4 + 0x28);
  ppuStack_178 = &PTR_DAT_1107ed028;
  pcStack_170 = pcVar4;
  uStack_168 = param_15;
  pppuStack_160 = &ppuStack_178;
  plVar11 = (long *)(lVar9 + 0x120);
  plVar6 = *(long **)(lVar9 + 0x138);
  *(undefined8 *)(lVar9 + 0x138) = 0;
  if (plVar6 == plVar11) {
    lVar8 = 0x20;
LAB_104c59aa0:
    (**(code **)(*plVar6 + lVar8))();
    if (pppuStack_160 == (undefined ***)0x0) {
      *(undefined8 *)(lVar9 + 0x138) = 0;
    }
    else {
      if (pppuStack_160 == &ppuStack_178) goto LAB_104c59ad8;
      *(undefined ****)(lVar9 + 0x138) = pppuStack_160;
      pppuStack_160 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar6 != (long *)0x0) {
      lVar8 = 0x28;
      goto LAB_104c59aa0;
    }
LAB_104c59ad8:
    *(long **)(lVar9 + 0x138) = plVar11;
    (*(code *)(*pppuStack_160)[3])();
    iVar7 = (int)plVar11;
    if (pppuStack_160 == &ppuStack_178) {
      lVar9 = 0x20;
    }
    else {
      if (pppuStack_160 == (undefined ***)0x0) goto LAB_104c59b18;
      lVar9 = 0x28;
    }
    (**(code **)((long)*pppuStack_160 + lVar9))();
  }
LAB_104c59b18:
  lVar9 = *(long *)(pcVar4 + 0x28);
  ppuStack_198 = &PTR_DAT_1107ed0b8;
  pcStack_190 = pcVar4;
  uStack_188 = param_16;
  pppuStack_180 = &ppuStack_198;
  plVar11 = (long *)(lVar9 + 0x100);
  plVar6 = *(long **)(lVar9 + 0x118);
  *(undefined8 *)(lVar9 + 0x118) = 0;
  if (plVar6 == plVar11) {
    lVar8 = 0x20;
LAB_104c59b58:
    (**(code **)(*plVar6 + lVar8))();
    if (pppuStack_180 == (undefined ***)0x0) {
      *(undefined8 *)(lVar9 + 0x118) = 0;
    }
    else {
      if (pppuStack_180 == &ppuStack_198) goto LAB_104c59b90;
      *(undefined ****)(lVar9 + 0x118) = pppuStack_180;
      pppuStack_180 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar6 != (long *)0x0) {
      lVar8 = 0x28;
      goto LAB_104c59b58;
    }
LAB_104c59b90:
    *(long **)(lVar9 + 0x118) = plVar11;
    (*(code *)(*pppuStack_180)[3])();
    iVar7 = (int)plVar11;
    if (pppuStack_180 == &ppuStack_198) {
      lVar9 = 0x20;
    }
    else {
      if (pppuStack_180 == (undefined ***)0x0) goto LAB_104c59bd0;
      lVar9 = 0x28;
    }
    (**(code **)((long)*pppuStack_180 + lVar9))();
  }
LAB_104c59bd0:
  lVar9 = *(long *)(pcVar4 + 0x28);
  ppuStack_1b8 = &PTR_DAT_1107ed148;
  pcStack_1b0 = pcVar4;
  uStack_1a8 = param_17;
  pppuStack_1a0 = &ppuStack_1b8;
  plVar11 = (long *)(lVar9 + 0x140);
  plVar6 = *(long **)(lVar9 + 0x158);
  *(undefined8 *)(lVar9 + 0x158) = 0;
  if (plVar6 == plVar11) {
    lVar8 = 0x20;
LAB_104c59c10:
    (**(code **)(*plVar6 + lVar8))();
    if (pppuStack_1a0 == (undefined ***)0x0) {
      *(undefined8 *)(lVar9 + 0x158) = 0;
    }
    else {
      if (pppuStack_1a0 == &ppuStack_1b8) goto LAB_104c59c48;
      *(undefined ****)(lVar9 + 0x158) = pppuStack_1a0;
      pppuStack_1a0 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar6 != (long *)0x0) {
      lVar8 = 0x28;
      goto LAB_104c59c10;
    }
LAB_104c59c48:
    *(long **)(lVar9 + 0x158) = plVar11;
    (*(code *)(*pppuStack_1a0)[3])();
    iVar7 = (int)plVar11;
    if (pppuStack_1a0 == &ppuStack_1b8) {
      lVar9 = 0x20;
    }
    else {
      if (pppuStack_1a0 == (undefined ***)0x0) goto LAB_104c59c88;
      lVar9 = 0x28;
    }
    (**(code **)((long)*pppuStack_1a0 + lVar9))();
  }
LAB_104c59c88:
  lVar9 = *(long *)(pcVar4 + 0x28);
  ppuStack_1d8 = &PTR_DAT_1107ed1d8;
  pcStack_1d0 = pcVar4;
  uStack_1c8 = param_18;
  pppuStack_1c0 = &ppuStack_1d8;
  plVar11 = (long *)(lVar9 + 0x160);
  plVar6 = *(long **)(lVar9 + 0x178);
  *(undefined8 *)(lVar9 + 0x178) = 0;
  if (plVar6 == plVar11) {
    lVar8 = 0x20;
LAB_104c59cc8:
    (**(code **)(*plVar6 + lVar8))();
    if (pppuStack_1c0 == (undefined ***)0x0) {
      *(undefined8 *)(lVar9 + 0x178) = 0;
    }
    else {
      if (pppuStack_1c0 == &ppuStack_1d8) goto LAB_104c59d00;
      *(undefined ****)(lVar9 + 0x178) = pppuStack_1c0;
      pppuStack_1c0 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar6 != (long *)0x0) {
      lVar8 = 0x28;
      goto LAB_104c59cc8;
    }
LAB_104c59d00:
    *(long **)(lVar9 + 0x178) = plVar11;
    (*(code *)(*pppuStack_1c0)[3])();
    iVar7 = (int)plVar11;
    if (pppuStack_1c0 == &ppuStack_1d8) {
      lVar9 = 0x20;
    }
    else {
      if (pppuStack_1c0 == (undefined ***)0x0) goto LAB_104c59d40;
      lVar9 = 0x28;
    }
    (**(code **)((long)*pppuStack_1c0 + lVar9))();
  }
LAB_104c59d40:
  lVar9 = *(long *)(pcVar4 + 0x28);
  ppuStack_1f8 = &PTR_DAT_1107ed268;
  pcStack_1f0 = pcVar4;
  uStack_1e8 = param_19;
  pppuStack_1e0 = &ppuStack_1f8;
  plVar11 = (long *)(lVar9 + 0x180);
  plVar6 = *(long **)(lVar9 + 0x198);
  *(undefined8 *)(lVar9 + 0x198) = 0;
  if (plVar6 == plVar11) {
    lVar8 = 0x20;
LAB_104c59d80:
    (**(code **)(*plVar6 + lVar8))();
    if (pppuStack_1e0 == (undefined ***)0x0) {
      *(undefined8 *)(lVar9 + 0x198) = 0;
    }
    else {
      if (pppuStack_1e0 == &ppuStack_1f8) goto LAB_104c59db8;
      *(undefined ****)(lVar9 + 0x198) = pppuStack_1e0;
      pppuStack_1e0 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar6 != (long *)0x0) {
      lVar8 = 0x28;
      goto LAB_104c59d80;
    }
LAB_104c59db8:
    *(long **)(lVar9 + 0x198) = plVar11;
    (*(code *)(*pppuStack_1e0)[3])();
    iVar7 = (int)plVar11;
    if (pppuStack_1e0 == &ppuStack_1f8) {
      lVar9 = 0x20;
    }
    else {
      if (pppuStack_1e0 == (undefined ***)0x0) goto LAB_104c59df8;
      lVar9 = 0x28;
    }
    (**(code **)((long)*pppuStack_1e0 + lVar9))();
  }
LAB_104c59df8:
  lVar9 = *(long *)(pcVar4 + 0x28);
  ppuStack_218 = &PTR_DAT_1107ed2f8;
  pcStack_210 = pcVar4;
  uStack_208 = param_22;
  pppuStack_200 = &ppuStack_218;
  plVar11 = (long *)(lVar9 + 0x1a0);
  plVar6 = *(long **)(lVar9 + 0x1b8);
  *(undefined8 *)(lVar9 + 0x1b8) = 0;
  if (plVar6 == plVar11) {
    lVar8 = 0x20;
LAB_104c59e38:
    (**(code **)(*plVar6 + lVar8))();
    if (pppuStack_200 == (undefined ***)0x0) {
      *(undefined8 *)(lVar9 + 0x1b8) = 0;
    }
    else {
      if (pppuStack_200 == &ppuStack_218) goto LAB_104c59e70;
      *(undefined ****)(lVar9 + 0x1b8) = pppuStack_200;
      pppuStack_200 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar6 != (long *)0x0) {
      lVar8 = 0x28;
      goto LAB_104c59e38;
    }
LAB_104c59e70:
    *(long **)(lVar9 + 0x1b8) = plVar11;
    (*(code *)(*pppuStack_200)[3])();
    iVar7 = (int)plVar11;
    if (pppuStack_200 == &ppuStack_218) {
      lVar9 = 0x20;
    }
    else {
      if (pppuStack_200 == (undefined ***)0x0) goto LAB_104c59eb0;
      lVar9 = 0x28;
    }
    (**(code **)((long)*pppuStack_200 + lVar9))();
  }
LAB_104c59eb0:
  if (param_23 == 0) goto LAB_104c59f6c;
  lVar9 = *(long *)(pcVar4 + 0x28);
  ppuStack_238 = &PTR_DAT_1107ed388;
  pcStack_230 = pcVar4;
  lStack_228 = param_23;
  pppuStack_220 = &ppuStack_238;
  plVar11 = (long *)(lVar9 + 0x1c0);
  plVar6 = *(long **)(lVar9 + 0x1d8);
  *(undefined8 *)(lVar9 + 0x1d8) = 0;
  if (plVar6 == plVar11) {
    lVar8 = 0x20;
LAB_104c59ef4:
    (**(code **)(*plVar6 + lVar8))();
    if (pppuStack_220 == (undefined ***)0x0) {
      *(undefined8 *)(lVar9 + 0x1d8) = 0;
      goto LAB_104c59f6c;
    }
    if (pppuStack_220 != &ppuStack_238) {
      *(undefined ****)(lVar9 + 0x1d8) = pppuStack_220;
      pppuStack_220 = (undefined ***)0x0;
      goto LAB_104c59f6c;
    }
  }
  else if (plVar6 != (long *)0x0) {
    lVar8 = 0x28;
    goto LAB_104c59ef4;
  }
  *(long **)(lVar9 + 0x1d8) = plVar11;
  (*(code *)(*pppuStack_220)[3])();
  iVar7 = (int)plVar11;
  if (pppuStack_220 == &ppuStack_238) {
    lVar9 = 0x20;
  }
  else {
    if (pppuStack_220 == (undefined ***)0x0) goto LAB_104c59f6c;
    lVar9 = 0x28;
  }
  (**(code **)((long)*pppuStack_220 + lVar9))();
LAB_104c59f6c:
  FUN_104c53560(*(undefined8 *)(pcVar4 + 0x18));
  if (cStack_251 < '\0') {
    __ZdlPv(pplStack_268);
  }
  if (cStack_239 < '\0') {
    __ZdlPv(plStack_250);
  }
  puVar5 = auStack_2b8;
  func_0x000104c4f944(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    if (iVar7 != 0) {
      FUN_104bd46a0(puVar5);
      func_0x000104c5a1c8(&pcStack_320);
      if (cStack_251 < '\0') {
        __ZdlPv(pplStack_268);
      }
      if (cStack_239 < '\0') {
        __ZdlPv(plStack_250);
      }
      func_0x000104c4f944(auStack_2b8);
    }
    do {
      __Unwind_Resume(puVar5);
    } while( true );
  }
  return;
}



/* Entry: 104c591d0; end: 104c5a117;  */

void FUN_104c591d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,char *param_7,undefined8 param_8,
                  undefined4 param_9,undefined1 param_10,long param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,long param_26,undefined8 param_27)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lStack_310;
  long *plStack_308;
  long *plStack_300;
  long lStack_2f8;
  long **pplStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  long lStack_2d0;
  undefined4 uStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  undefined8 auStack_2a8 [2];
  char cStack_291;
  undefined8 uStack_280;
  long *plStack_278;
  undefined8 auStack_270 [2];
  char cStack_259;
  long **pplStack_258;
  long lStack_250;
  undefined7 uStack_248;
  char cStack_241;
  long *plStack_240;
  long *plStack_238;
  undefined7 uStack_230;
  char cStack_229;
  undefined **ppuStack_228;
  long lStack_220;
  long lStack_218;
  undefined ***pppuStack_210;
  undefined **ppuStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined ***pppuStack_1f0;
  undefined **ppuStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined ***pppuStack_1d0;
  undefined **ppuStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined ***pppuStack_1b0;
  undefined **ppuStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined ***pppuStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined ***pppuStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined ***pppuStack_150;
  undefined **ppuStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined ***pppuStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined ***pppuStack_110;
  undefined **ppuStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined ***pppuStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined ***pppuStack_d0;
  undefined **ppuStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined ***pppuStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined ***pppuStack_90;
  long alStack_88 [3];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x90) = param_27;
  func_0x00010002d4d8(auStack_2a8);
  FUN_104c533e8(&plStack_240,auStack_2a8);
  plVar5 = plStack_238;
  plVar10 = plStack_240;
  plStack_240 = (long *)0x0;
  plStack_238 = (long *)0x0;
  plVar11 = *(long **)(param_1 + 0x70);
  *(long **)(param_1 + 0x70) = plVar5;
  *(long **)(param_1 + 0x68) = plVar10;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 1;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar10 = plStack_238;
  if (plStack_238 != (long *)0x0) {
    plVar5 = plStack_238 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (cStack_291 < '\0') {
    __ZdlPv(auStack_2a8[0]);
  }
  FUN_104c5a118(auStack_2a8,param_1);
  if (param_6 != 0) {
    func_0x00010002d4d8(&plStack_240,"lenscore_version");
    puVar4 = auStack_2a8;
    pplStack_258 = &plStack_240;
    FUN_104c5bc74(puVar4,&plStack_240,&UNK_10dd5b8f9,&pplStack_258,auStack_270);
    func_0x000100042ef0(puVar4 + 5,param_6);
    if (cStack_229 < '\0') {
      __ZdlPv(plStack_240);
    }
  }
  puVar4 = (undefined8 *)0x3f0;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_1107ecba8;
  func_0x00010002d4d8(&plStack_240,param_2);
  func_0x00010002d4d8(&pplStack_258,param_4);
  func_0x00010002d4d8(auStack_270,param_5);
  plStack_278 = *(long **)(param_1 + 0x70);
  uStack_280 = *(undefined8 *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar10 = (long *)(*(long *)(param_1 + 0x70) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_104c5e2f4(puVar4 + 3,&plStack_240,&pplStack_258,auStack_270,param_8,auStack_2a8,&uStack_280);
  plVar10 = plStack_278;
  if (plStack_278 != (long *)0x0) {
    plVar5 = plStack_278 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_278 + 0x10))(plStack_278);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (cStack_259 < '\0') {
    __ZdlPv(auStack_270[0]);
  }
  if (cStack_241 < '\0') {
    __ZdlPv(pplStack_258);
  }
  if (cStack_229 < '\0') {
    __ZdlPv(plStack_240);
  }
  plVar10 = *(long **)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x18) = puVar4 + 3;
  *(undefined8 **)(param_1 + 0x20) = puVar4;
  if (plVar10 != (long *)0x0) {
    plVar5 = plVar10 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = (long *)0x1f8;
  __Znwm();
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_DAT_1107ecbf8;
  plVar10[6] = 0;
  plVar10[5] = 0;
  plVar10[8] = 0;
  plVar10[7] = 0;
  plVar10[10] = 0;
  plVar10[9] = 0;
  plVar10[0xc] = 0;
  plVar10[0xb] = 0;
  plVar10[0xe] = 0;
  plVar10[0xd] = 0;
  plVar10[0x10] = 0;
  plVar10[0xf] = 0;
  plVar10[0x12] = 0;
  plVar10[0x11] = 0;
  plVar10[0x14] = 0;
  plVar10[0x13] = 0;
  plVar10[0x16] = 0;
  plVar10[0x15] = 0;
  plVar10[0x18] = 0;
  plVar10[0x17] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x19] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1e] = 0;
  plVar10[0x1d] = 0;
  plStack_240 = plVar10 + 3;
  plVar10[4] = 0;
  *plStack_240 = 0;
  plVar10[0x20] = 0;
  plVar10[0x1f] = 0;
  plVar10[0x22] = 0;
  plVar10[0x21] = 0;
  plVar10[0x24] = 0;
  plVar10[0x23] = 0;
  plVar10[0x26] = 0;
  plVar10[0x25] = 0;
  plVar10[0x28] = 0;
  plVar10[0x27] = 0;
  plVar10[0x2a] = 0;
  plVar10[0x29] = 0;
  plVar10[0x2c] = 0;
  plVar10[0x2b] = 0;
  plVar10[0x2e] = 0;
  plVar10[0x2d] = 0;
  plVar10[0x30] = 0;
  plVar10[0x2f] = 0;
  plVar10[0x32] = 0;
  plVar10[0x31] = 0;
  plVar10[0x34] = 0;
  plVar10[0x33] = 0;
  plVar10[0x36] = 0;
  plVar10[0x35] = 0;
  plVar10[0x38] = 0;
  plVar10[0x37] = 0;
  plVar10[0x3a] = 0;
  plVar10[0x39] = 0;
  plVar10[0x3c] = 0;
  plVar10[0x3b] = 0;
  plVar10[0x3e] = 0;
  plVar10[0x3d] = 0;
  plStack_238 = plVar10;
  FUN_104c5a164(param_1 + 0x28,&plStack_240);
  plVar10 = plStack_238;
  if (plStack_238 != (long *)0x0) {
    plVar5 = plStack_238 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  lVar8 = *(long *)(param_1 + 0x18);
  plStack_2b8 = *(long **)(param_1 + 0x30);
  uStack_2c0 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_104c5a164(lVar8 + 0x3c8,&uStack_2c0);
  plVar10 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    plVar5 = plStack_2b8 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  func_0x00010002d4d8(&plStack_240,param_3);
  pcVar1 = "";
  if (param_7 != (char *)0x0) {
    pcVar1 = param_7;
  }
  func_0x00010002d4d8(&pplStack_258,pcVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  lStack_310 = param_1;
  if (cStack_229 < '\0') {
    func_0x000100033dac(&plStack_308,plStack_240,plStack_238);
  }
  else {
    plStack_300 = plStack_238;
    plStack_308 = plStack_240;
    lStack_2f8 = CONCAT17(cStack_229,uStack_230);
  }
  if (cStack_241 < '\0') {
    func_0x000100033dac(&pplStack_2f0,pplStack_258,lStack_250);
  }
  else {
    lStack_2e8 = lStack_250;
    pplStack_2f0 = pplStack_258;
    lStack_2e0 = CONCAT17(cStack_241,uStack_248);
  }
  uStack_2d8 = param_9;
  uStack_2d4 = CONCAT31(uStack_2d4._1_3_,param_10);
  lStack_2d0 = param_11;
  uStack_2c8 = param_12;
  plVar10 = (long *)0x58;
  __Znwm();
  *plVar10 = (long)&PTR_DAT_1107ecc48;
  plVar10[1] = lStack_310;
  plVar10[3] = (long)plStack_300;
  plVar10[2] = (long)plStack_308;
  plVar10[4] = lStack_2f8;
  plStack_308 = (long *)0x0;
  plStack_300 = (long *)0x0;
  lStack_2f8 = 0;
  plVar10[6] = lStack_2e8;
  plVar10[5] = (long)pplStack_2f0;
  plVar10[7] = lStack_2e0;
  pplStack_2f0 = (long **)0x0;
  lStack_2e8 = 0;
  lStack_2e0 = 0;
  plVar10[9] = lStack_2d0;
  plVar10[8] = CONCAT44(uStack_2d4,uStack_2d8);
  *(undefined4 *)(plVar10 + 10) = uStack_2c8;
  *(undefined4 *)((long)plVar10 + 0x54) = 0;
  plStack_70 = plVar10;
  FUN_104c5b990(uVar9,alStack_88);
  if (plStack_70 == alStack_88) {
    lVar8 = 0x20;
LAB_104c596b4:
    (**(code **)(*plStack_70 + lVar8))();
  }
  else if (plStack_70 != (long *)0x0) {
    lVar8 = 0x28;
    goto LAB_104c596b4;
  }
  if (lStack_2e0 < 0) {
    __ZdlPv(pplStack_2f0);
  }
  if (lStack_2f8 < 0) {
    __ZdlPv(plStack_308);
  }
  ppuStack_a8 = &PTR_FUN_1107eccc8;
  uStack_98 = param_23;
  lStack_a0 = param_1;
  pppuStack_90 = &ppuStack_a8;
  func_0x000104c5ba1c(*(long *)(param_1 + 0x28) + 0x20,&ppuStack_a8);
  if (pppuStack_90 == &ppuStack_a8) {
    lVar8 = 0x20;
LAB_104c59728:
    (**(code **)((long)*pppuStack_90 + lVar8))();
  }
  else if (pppuStack_90 != (undefined ***)0x0) {
    lVar8 = 0x28;
    goto LAB_104c59728;
  }
  lVar8 = *(long *)(param_1 + 0x28);
  ppuStack_c8 = &PTR_DAT_1107ecd58;
  lStack_c0 = param_1;
  uStack_b8 = param_14;
  pppuStack_b0 = &ppuStack_c8;
  plVar10 = (long *)(lVar8 + 0xa0);
  plVar5 = *(long **)(lVar8 + 0xb8);
  *(undefined8 *)(lVar8 + 0xb8) = 0;
  if (plVar5 == plVar10) {
    lVar7 = 0x20;
LAB_104c59770:
    (**(code **)(*plVar5 + lVar7))();
    if (pppuStack_b0 == (undefined ***)0x0) {
      *(undefined8 *)(lVar8 + 0xb8) = 0;
    }
    else {
      if (pppuStack_b0 == &ppuStack_c8) goto LAB_104c597a8;
      *(undefined ****)(lVar8 + 0xb8) = pppuStack_b0;
      pppuStack_b0 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar5 != (long *)0x0) {
      lVar7 = 0x28;
      goto LAB_104c59770;
    }
LAB_104c597a8:
    *(long **)(lVar8 + 0xb8) = plVar10;
    (*(code *)(*pppuStack_b0)[3])(pppuStack_b0,plVar10);
    if (pppuStack_b0 == &ppuStack_c8) {
      lVar8 = 0x20;
    }
    else {
      if (pppuStack_b0 == (undefined ***)0x0) goto LAB_104c597e8;
      lVar8 = 0x28;
    }
    (**(code **)((long)*pppuStack_b0 + lVar8))();
  }
LAB_104c597e8:
  ppuStack_e8 = &PTR_DAT_1107ecde8;
  uStack_d8 = param_24;
  iVar6 = (int)&ppuStack_e8;
  lStack_e0 = param_1;
  pppuStack_d0 = &ppuStack_e8;
  func_0x000104c5baa8(*(long *)(param_1 + 0x28) + 0x40);
  if (pppuStack_d0 == &ppuStack_e8) {
    lVar8 = 0x20;
LAB_104c59830:
    (**(code **)((long)*pppuStack_d0 + lVar8))();
  }
  else if (pppuStack_d0 != (undefined ***)0x0) {
    lVar8 = 0x28;
    goto LAB_104c59830;
  }
  lVar8 = *(long *)(param_1 + 0x28);
  ppuStack_108 = &PTR_DAT_1107ece78;
  lStack_100 = param_1;
  uStack_f8 = param_15;
  pppuStack_f0 = &ppuStack_108;
  plVar10 = (long *)(lVar8 + 0x60);
  plVar5 = *(long **)(lVar8 + 0x78);
  *(undefined8 *)(lVar8 + 0x78) = 0;
  if (plVar5 == plVar10) {
    lVar7 = 0x20;
LAB_104c59878:
    (**(code **)(*plVar5 + lVar7))();
    if (pppuStack_f0 == (undefined ***)0x0) {
      *(undefined8 *)(lVar8 + 0x78) = 0;
    }
    else {
      if (pppuStack_f0 == &ppuStack_108) goto LAB_104c598b0;
      *(undefined ****)(lVar8 + 0x78) = pppuStack_f0;
      pppuStack_f0 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar5 != (long *)0x0) {
      lVar7 = 0x28;
      goto LAB_104c59878;
    }
LAB_104c598b0:
    *(long **)(lVar8 + 0x78) = plVar10;
    (*(code *)(*pppuStack_f0)[3])();
    iVar6 = (int)plVar10;
    if (pppuStack_f0 == &ppuStack_108) {
      lVar8 = 0x20;
    }
    else {
      if (pppuStack_f0 == (undefined ***)0x0) goto LAB_104c598f0;
      lVar8 = 0x28;
    }
    (**(code **)((long)*pppuStack_f0 + lVar8))();
  }
LAB_104c598f0:
  lVar8 = *(long *)(param_1 + 0x28);
  ppuStack_128 = &PTR_DAT_1107ecf08;
  lStack_120 = param_1;
  uStack_118 = param_16;
  pppuStack_110 = &ppuStack_128;
  plVar10 = (long *)(lVar8 + 0x80);
  plVar5 = *(long **)(lVar8 + 0x98);
  *(undefined8 *)(lVar8 + 0x98) = 0;
  if (plVar5 == plVar10) {
    lVar7 = 0x20;
LAB_104c59930:
    (**(code **)(*plVar5 + lVar7))();
    if (pppuStack_110 == (undefined ***)0x0) {
      *(undefined8 *)(lVar8 + 0x98) = 0;
    }
    else {
      if (pppuStack_110 == &ppuStack_128) goto LAB_104c59968;
      *(undefined ****)(lVar8 + 0x98) = pppuStack_110;
      pppuStack_110 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar5 != (long *)0x0) {
      lVar7 = 0x28;
      goto LAB_104c59930;
    }
LAB_104c59968:
    *(long **)(lVar8 + 0x98) = plVar10;
    (*(code *)(*pppuStack_110)[3])();
    iVar6 = (int)plVar10;
    if (pppuStack_110 == &ppuStack_128) {
      lVar8 = 0x20;
    }
    else {
      if (pppuStack_110 == (undefined ***)0x0) goto LAB_104c599a8;
      lVar8 = 0x28;
    }
    (**(code **)((long)*pppuStack_110 + lVar8))();
  }
LAB_104c599a8:
  lVar8 = *(long *)(param_1 + 0x28);
  ppuStack_148 = &PTR_DAT_1107ecf98;
  lStack_140 = param_1;
  uStack_138 = param_17;
  pppuStack_130 = &ppuStack_148;
  plVar10 = (long *)(lVar8 + 0xe0);
  plVar5 = *(long **)(lVar8 + 0xf8);
  *(undefined8 *)(lVar8 + 0xf8) = 0;
  if (plVar5 == plVar10) {
    lVar7 = 0x20;
LAB_104c599e8:
    (**(code **)(*plVar5 + lVar7))();
    if (pppuStack_130 == (undefined ***)0x0) {
      *(undefined8 *)(lVar8 + 0xf8) = 0;
    }
    else {
      if (pppuStack_130 == &ppuStack_148) goto LAB_104c59a20;
      *(undefined ****)(lVar8 + 0xf8) = pppuStack_130;
      pppuStack_130 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar5 != (long *)0x0) {
      lVar7 = 0x28;
      goto LAB_104c599e8;
    }
LAB_104c59a20:
    *(long **)(lVar8 + 0xf8) = plVar10;
    (*(code *)(*pppuStack_130)[3])();
    iVar6 = (int)plVar10;
    if (pppuStack_130 == &ppuStack_148) {
      lVar8 = 0x20;
    }
    else {
      if (pppuStack_130 == (undefined ***)0x0) goto LAB_104c59a60;
      lVar8 = 0x28;
    }
    (**(code **)((long)*pppuStack_130 + lVar8))();
  }
LAB_104c59a60:
  lVar8 = *(long *)(param_1 + 0x28);
  ppuStack_168 = &PTR_DAT_1107ed028;
  lStack_160 = param_1;
  uStack_158 = param_18;
  pppuStack_150 = &ppuStack_168;
  plVar10 = (long *)(lVar8 + 0x120);
  plVar5 = *(long **)(lVar8 + 0x138);
  *(undefined8 *)(lVar8 + 0x138) = 0;
  if (plVar5 == plVar10) {
    lVar7 = 0x20;
LAB_104c59aa0:
    (**(code **)(*plVar5 + lVar7))();
    if (pppuStack_150 == (undefined ***)0x0) {
      *(undefined8 *)(lVar8 + 0x138) = 0;
    }
    else {
      if (pppuStack_150 == &ppuStack_168) goto LAB_104c59ad8;
      *(undefined ****)(lVar8 + 0x138) = pppuStack_150;
      pppuStack_150 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar5 != (long *)0x0) {
      lVar7 = 0x28;
      goto LAB_104c59aa0;
    }
LAB_104c59ad8:
    *(long **)(lVar8 + 0x138) = plVar10;
    (*(code *)(*pppuStack_150)[3])();
    iVar6 = (int)plVar10;
    if (pppuStack_150 == &ppuStack_168) {
      lVar8 = 0x20;
    }
    else {
      if (pppuStack_150 == (undefined ***)0x0) goto LAB_104c59b18;
      lVar8 = 0x28;
    }
    (**(code **)((long)*pppuStack_150 + lVar8))();
  }
LAB_104c59b18:
  lVar8 = *(long *)(param_1 + 0x28);
  ppuStack_188 = &PTR_DAT_1107ed0b8;
  lStack_180 = param_1;
  uStack_178 = param_19;
  pppuStack_170 = &ppuStack_188;
  plVar10 = (long *)(lVar8 + 0x100);
  plVar5 = *(long **)(lVar8 + 0x118);
  *(undefined8 *)(lVar8 + 0x118) = 0;
  if (plVar5 == plVar10) {
    lVar7 = 0x20;
LAB_104c59b58:
    (**(code **)(*plVar5 + lVar7))();
    if (pppuStack_170 == (undefined ***)0x0) {
      *(undefined8 *)(lVar8 + 0x118) = 0;
    }
    else {
      if (pppuStack_170 == &ppuStack_188) goto LAB_104c59b90;
      *(undefined ****)(lVar8 + 0x118) = pppuStack_170;
      pppuStack_170 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar5 != (long *)0x0) {
      lVar7 = 0x28;
      goto LAB_104c59b58;
    }
LAB_104c59b90:
    *(long **)(lVar8 + 0x118) = plVar10;
    (*(code *)(*pppuStack_170)[3])();
    iVar6 = (int)plVar10;
    if (pppuStack_170 == &ppuStack_188) {
      lVar8 = 0x20;
    }
    else {
      if (pppuStack_170 == (undefined ***)0x0) goto LAB_104c59bd0;
      lVar8 = 0x28;
    }
    (**(code **)((long)*pppuStack_170 + lVar8))();
  }
LAB_104c59bd0:
  lVar8 = *(long *)(param_1 + 0x28);
  ppuStack_1a8 = &PTR_DAT_1107ed148;
  lStack_1a0 = param_1;
  uStack_198 = param_20;
  pppuStack_190 = &ppuStack_1a8;
  plVar10 = (long *)(lVar8 + 0x140);
  plVar5 = *(long **)(lVar8 + 0x158);
  *(undefined8 *)(lVar8 + 0x158) = 0;
  if (plVar5 == plVar10) {
    lVar7 = 0x20;
LAB_104c59c10:
    (**(code **)(*plVar5 + lVar7))();
    if (pppuStack_190 == (undefined ***)0x0) {
      *(undefined8 *)(lVar8 + 0x158) = 0;
    }
    else {
      if (pppuStack_190 == &ppuStack_1a8) goto LAB_104c59c48;
      *(undefined ****)(lVar8 + 0x158) = pppuStack_190;
      pppuStack_190 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar5 != (long *)0x0) {
      lVar7 = 0x28;
      goto LAB_104c59c10;
    }
LAB_104c59c48:
    *(long **)(lVar8 + 0x158) = plVar10;
    (*(code *)(*pppuStack_190)[3])();
    iVar6 = (int)plVar10;
    if (pppuStack_190 == &ppuStack_1a8) {
      lVar8 = 0x20;
    }
    else {
      if (pppuStack_190 == (undefined ***)0x0) goto LAB_104c59c88;
      lVar8 = 0x28;
    }
    (**(code **)((long)*pppuStack_190 + lVar8))();
  }
LAB_104c59c88:
  lVar8 = *(long *)(param_1 + 0x28);
  ppuStack_1c8 = &PTR_DAT_1107ed1d8;
  lStack_1c0 = param_1;
  uStack_1b8 = param_21;
  pppuStack_1b0 = &ppuStack_1c8;
  plVar10 = (long *)(lVar8 + 0x160);
  plVar5 = *(long **)(lVar8 + 0x178);
  *(undefined8 *)(lVar8 + 0x178) = 0;
  if (plVar5 == plVar10) {
    lVar7 = 0x20;
LAB_104c59cc8:
    (**(code **)(*plVar5 + lVar7))();
    if (pppuStack_1b0 == (undefined ***)0x0) {
      *(undefined8 *)(lVar8 + 0x178) = 0;
    }
    else {
      if (pppuStack_1b0 == &ppuStack_1c8) goto LAB_104c59d00;
      *(undefined ****)(lVar8 + 0x178) = pppuStack_1b0;
      pppuStack_1b0 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar5 != (long *)0x0) {
      lVar7 = 0x28;
      goto LAB_104c59cc8;
    }
LAB_104c59d00:
    *(long **)(lVar8 + 0x178) = plVar10;
    (*(code *)(*pppuStack_1b0)[3])();
    iVar6 = (int)plVar10;
    if (pppuStack_1b0 == &ppuStack_1c8) {
      lVar8 = 0x20;
    }
    else {
      if (pppuStack_1b0 == (undefined ***)0x0) goto LAB_104c59d40;
      lVar8 = 0x28;
    }
    (**(code **)((long)*pppuStack_1b0 + lVar8))();
  }
LAB_104c59d40:
  lVar8 = *(long *)(param_1 + 0x28);
  ppuStack_1e8 = &PTR_DAT_1107ed268;
  lStack_1e0 = param_1;
  uStack_1d8 = param_22;
  pppuStack_1d0 = &ppuStack_1e8;
  plVar10 = (long *)(lVar8 + 0x180);
  plVar5 = *(long **)(lVar8 + 0x198);
  *(undefined8 *)(lVar8 + 0x198) = 0;
  if (plVar5 == plVar10) {
    lVar7 = 0x20;
LAB_104c59d80:
    (**(code **)(*plVar5 + lVar7))();
    if (pppuStack_1d0 == (undefined ***)0x0) {
      *(undefined8 *)(lVar8 + 0x198) = 0;
    }
    else {
      if (pppuStack_1d0 == &ppuStack_1e8) goto LAB_104c59db8;
      *(undefined ****)(lVar8 + 0x198) = pppuStack_1d0;
      pppuStack_1d0 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar5 != (long *)0x0) {
      lVar7 = 0x28;
      goto LAB_104c59d80;
    }
LAB_104c59db8:
    *(long **)(lVar8 + 0x198) = plVar10;
    (*(code *)(*pppuStack_1d0)[3])();
    iVar6 = (int)plVar10;
    if (pppuStack_1d0 == &ppuStack_1e8) {
      lVar8 = 0x20;
    }
    else {
      if (pppuStack_1d0 == (undefined ***)0x0) goto LAB_104c59df8;
      lVar8 = 0x28;
    }
    (**(code **)((long)*pppuStack_1d0 + lVar8))();
  }
LAB_104c59df8:
  lVar8 = *(long *)(param_1 + 0x28);
  ppuStack_208 = &PTR_DAT_1107ed2f8;
  lStack_200 = param_1;
  uStack_1f8 = param_25;
  pppuStack_1f0 = &ppuStack_208;
  plVar10 = (long *)(lVar8 + 0x1a0);
  plVar5 = *(long **)(lVar8 + 0x1b8);
  *(undefined8 *)(lVar8 + 0x1b8) = 0;
  if (plVar5 == plVar10) {
    lVar7 = 0x20;
LAB_104c59e38:
    (**(code **)(*plVar5 + lVar7))();
    if (pppuStack_1f0 == (undefined ***)0x0) {
      *(undefined8 *)(lVar8 + 0x1b8) = 0;
    }
    else {
      if (pppuStack_1f0 == &ppuStack_208) goto LAB_104c59e70;
      *(undefined ****)(lVar8 + 0x1b8) = pppuStack_1f0;
      pppuStack_1f0 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar5 != (long *)0x0) {
      lVar7 = 0x28;
      goto LAB_104c59e38;
    }
LAB_104c59e70:
    *(long **)(lVar8 + 0x1b8) = plVar10;
    (*(code *)(*pppuStack_1f0)[3])();
    iVar6 = (int)plVar10;
    if (pppuStack_1f0 == &ppuStack_208) {
      lVar8 = 0x20;
    }
    else {
      if (pppuStack_1f0 == (undefined ***)0x0) goto LAB_104c59eb0;
      lVar8 = 0x28;
    }
    (**(code **)((long)*pppuStack_1f0 + lVar8))();
  }
LAB_104c59eb0:
  if (param_26 == 0) goto LAB_104c59f6c;
  lVar8 = *(long *)(param_1 + 0x28);
  ppuStack_228 = &PTR_DAT_1107ed388;
  lStack_220 = param_1;
  lStack_218 = param_26;
  pppuStack_210 = &ppuStack_228;
  plVar10 = (long *)(lVar8 + 0x1c0);
  plVar5 = *(long **)(lVar8 + 0x1d8);
  *(undefined8 *)(lVar8 + 0x1d8) = 0;
  if (plVar5 == plVar10) {
    lVar7 = 0x20;
LAB_104c59ef4:
    (**(code **)(*plVar5 + lVar7))();
    if (pppuStack_210 == (undefined ***)0x0) {
      *(undefined8 *)(lVar8 + 0x1d8) = 0;
      goto LAB_104c59f6c;
    }
    if (pppuStack_210 != &ppuStack_228) {
      *(undefined ****)(lVar8 + 0x1d8) = pppuStack_210;
      pppuStack_210 = (undefined ***)0x0;
      goto LAB_104c59f6c;
    }
  }
  else if (plVar5 != (long *)0x0) {
    lVar7 = 0x28;
    goto LAB_104c59ef4;
  }
  *(long **)(lVar8 + 0x1d8) = plVar10;
  (*(code *)(*pppuStack_210)[3])();
  iVar6 = (int)plVar10;
  if (pppuStack_210 == &ppuStack_228) {
    lVar8 = 0x20;
  }
  else {
    if (pppuStack_210 == (undefined ***)0x0) goto LAB_104c59f6c;
    lVar8 = 0x28;
  }
  (**(code **)((long)*pppuStack_210 + lVar8))();
LAB_104c59f6c:
  FUN_104c53560(*(undefined8 *)(param_1 + 0x18));
  if (cStack_241 < '\0') {
    __ZdlPv(pplStack_258);
  }
  if (cStack_229 < '\0') {
    __ZdlPv(plStack_240);
  }
  puVar4 = auStack_2a8;
  func_0x000104c4f944(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (iVar6 != 0) {
      FUN_104bd46a0(puVar4);
      func_0x000104c5a1c8(&lStack_310);
      if (cStack_241 < '\0') {
        __ZdlPv(pplStack_258);
      }
      if (cStack_229 < '\0') {
        __ZdlPv(plStack_240);
      }
      func_0x000104c4f944(auStack_2a8);
    }
    do {
      __Unwind_Resume(puVar4);
    } while( true );
  }
  return;
}



/* Entry: 104c5a118; end: 104c5a163;  */

void FUN_104c5a118(undefined8 param_1,long param_2)

{
  __ZNSt3__15mutex4lockEv(param_2 + 0xc0);
  func_0x00010028b0c8(param_1,param_2 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0xc0);
  return;
}



/* Entry: 104c5a164; end: 104c5a207;  */

undefined8 * FUN_104c5a164(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 104c5a208; end: 104c5a2c7;  */

void FUN_104c5a208(long param_1,undefined ***param_2)

{
  undefined ***pppuVar1;
  long *plVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined **ppuStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_38;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = param_2;
  if (*(long *)(param_1 + 0x28) != 0) {
    ppuStack_48 = &PTR_DAT_1107ed418;
    pppuVar4 = &ppuStack_48;
    lStack_40 = param_1;
    pppuStack_38 = param_2;
    pppuStack_30 = &ppuStack_48;
    FUN_104c5b990(*(long *)(param_1 + 0x28) + 0xc0);
    if (pppuStack_30 == &ppuStack_48) {
      lVar6 = 0x20;
    }
    else {
      if (pppuStack_30 == (undefined ***)0x0) goto LAB_104c5a27c;
      lVar6 = 0x28;
    }
    (**(code **)((long)*pppuStack_30 + lVar6))();
  }
LAB_104c5a27c:
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
    pppuVar4 = (undefined ***)(param_1 + 0x78);
    FUN_104c5f1ac();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if ((int)pppuVar4 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  plVar7 = *(long **)(lVar6 + 0x18);
  pppuVar1 = pppuVar4;
  _strlen(pppuVar4);
  uStack_98 = 0;
  uStack_b0 = 0;
  lStack_a8 = 0;
  ppuStack_b8 = &PTR_DAT_110c7a6e0;
  func_0x00010ae194bc(&ppuStack_b8,lVar6 + 0x78);
  uStack_98 = CONCAT44(0x12,(undefined4)uStack_98);
  uVar3 = uStack_b0;
  if ((uStack_b0 & 1) != 0) {
    uVar3 = *(ulong *)(uStack_b0 & 0xfffffffffffffffe);
  }
  func_0x000104c60978();
  uVar5 = *(ulong *)(uVar3 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  lVar6 = uVar3 + 0x28;
  uStack_a0 = uVar3;
  func_0x00010b4bf088(lVar6,pppuVar4,pppuVar1,uVar5);
  *(undefined4 *)(uVar3 + 0x30) = 0;
  __ZNSt3__16chrono12system_clock3nowEv();
  plVar2 = plVar7;
  (**(code **)(*plVar7 + 0x10))();
  lStack_a8 = lVar6 / 1000 - (long)plVar2;
  FUN_104c547d8(plVar7,&ppuStack_b8,0xffffffff);
  func_0x00010ae19c2c(&ppuStack_b8);
  return;
}



/* Entry: 104c5a2c8; end: 104c5a363;  */

void FUN_104c5a2c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined **ppuStack_68;
  ulong uStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  plVar6 = *(long **)(param_1 + 0x18);
  uVar1 = param_2;
  _strlen(param_2);
  uStack_48 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  ppuStack_68 = &PTR_DAT_110c7a6e0;
  func_0x00010ae194bc(&ppuStack_68,param_1 + 0x78);
  uStack_48 = CONCAT44(0x12,(undefined4)uStack_48);
  uVar4 = uStack_60;
  if ((uStack_60 & 1) != 0) {
    uVar4 = *(ulong *)(uStack_60 & 0xfffffffffffffffe);
  }
  func_0x000104c60978();
  uVar5 = *(ulong *)(uVar4 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  lVar2 = uVar4 + 0x28;
  uStack_50 = uVar4;
  func_0x00010b4bf088(lVar2,param_2,uVar1,uVar5);
  *(undefined4 *)(uVar4 + 0x30) = 0;
  __ZNSt3__16chrono12system_clock3nowEv();
  plVar3 = plVar6;
  (**(code **)(*plVar6 + 0x10))();
  lStack_58 = lVar2 / 1000 - (long)plVar3;
  FUN_104c547d8(plVar6,&ppuStack_68,0xffffffff);
  func_0x00010ae19c2c(&ppuStack_68);
  return;
}



/* Entry: 104c5a364; end: 104c5a3a3;  */

void FUN_104c5a364(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined **ppuStack_68;
  ulong uStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  plVar5 = *(long **)(param_1 + 0x18);
  uStack_48 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  ppuStack_68 = &PTR_DAT_110c7a6e0;
  func_0x00010ae194bc(&ppuStack_68,param_1 + 0x78);
  uStack_48 = CONCAT44(0x12,(undefined4)uStack_48);
  uVar3 = uStack_60;
  if ((uStack_60 & 1) != 0) {
    uVar3 = *(ulong *)(uStack_60 & 0xfffffffffffffffe);
  }
  func_0x000104c60978();
  uVar4 = *(ulong *)(uVar3 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar1 = uVar3 + 0x28;
  uStack_50 = uVar3;
  func_0x00010b4bf088(lVar1,param_2,param_3,uVar4);
  *(undefined4 *)(uVar3 + 0x30) = 1;
  __ZNSt3__16chrono12system_clock3nowEv();
  plVar2 = plVar5;
  (**(code **)(*plVar5 + 0x10))();
  lStack_58 = lVar1 / 1000 - (long)plVar2;
  FUN_104c547d8(plVar5,&ppuStack_68,0xffffffff);
  func_0x00010ae19c2c(&ppuStack_68);
  return;
}



/* Entry: 104c5a3a4; end: 104c5a407;  */

long FUN_104c5a3a4(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  lVar2 = param_1;
  __ZNSt3__16chrono12system_clock3nowEv();
  lVar2 = lVar2 / 1000;
  if (lVar3 != 0) {
    plVar1 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar1 + 0x10))();
    lVar2 = lVar2 - (long)plVar1;
  }
  return lVar2;
}



/* Entry: 104c5a408; end: 104c5a41f;  */

void FUN_104c5a408(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c5a418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104c5a420; end: 104c5a5af;  */

/* WARNING: Removing unreachable block (ram,0x000104c5a4dc) */

void FUN_104c5a420(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_b0 [40];
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined1 auStack_58 [24];
  
  *(undefined8 *)(param_1 + 0x90) = param_5;
  FUN_104c5a118(auStack_b0,param_1);
  puVar4 = (undefined8 *)0x168;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1107ed498;
  func_0x00010002d4d8(auStack_58,param_2);
  func_0x00010002d4d8(auStack_70,param_3);
  func_0x00010002d4d8(auStack_88,param_4);
  FUN_104c4d250(puVar4 + 3,auStack_58,auStack_70,auStack_88,auStack_b0);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  plVar6 = *(long **)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 8) = puVar4 + 3;
  *(undefined8 **)(param_1 + 0x10) = puVar4;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  func_0x000104c4f944(auStack_b0);
  return;
}



/* Entry: 104c5a5b0; end: 104c5a6ef;  */

undefined ***
FUN_104c5a5b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined ****ppppuVar11;
  undefined ****ppppuVar12;
  undefined ***pppuVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined **ppuStack_338;
  ulong uStack_330;
  long lStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  long alStack_310 [4];
  undefined **ppuStack_288;
  undefined ***pppuStack_280;
  undefined8 uStack_278;
  undefined ***pppuStack_270;
  undefined **ppuStack_268;
  undefined ****ppppuStack_260;
  undefined8 uStack_258;
  undefined ***pppuStack_250;
  long lStack_248;
  undefined ***pppuStack_240;
  undefined ***pppuStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined ***apppuStack_218 [2];
  char cStack_201;
  undefined ***apppuStack_200 [2];
  char cStack_1e9;
  undefined **ppuStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined ***pppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined ***pppuStack_1b0;
  long lStack_1a8;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  undefined **ppuStack_148;
  undefined ***pppuStack_140;
  undefined8 uStack_138;
  undefined ***pppuStack_130;
  undefined **ppuStack_128;
  undefined ***pppuStack_120;
  undefined8 uStack_118;
  undefined ***pppuStack_110;
  long lStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined ***pppuStack_c0;
  undefined **ppuStack_b8;
  undefined ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined ***pppuStack_a0;
  long lStack_98;
  undefined ***pppuStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined ***pppuStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = *(undefined ****)(param_1 + 8);
  ppuStack_48 = &PTR_DAT_1107ed4e8;
  pppuStack_30 = &ppuStack_48;
  ppuStack_68 = &PTR_DAT_1107ed578;
  pppuVar17 = &ppuStack_48;
  pppuVar6 = &ppuStack_68;
  uStack_60 = param_4;
  uStack_58 = param_5;
  pppuStack_50 = &ppuStack_68;
  uStack_40 = param_3;
  uStack_38 = param_5;
  FUN_104c4d620(pppuVar3);
  if (pppuStack_50 == &ppuStack_68) {
    lVar14 = 0x20;
LAB_104c5a628:
    (**(code **)((long)*pppuStack_50 + lVar14))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5a628;
  }
  pppuVar4 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar14 = 0x20;
LAB_104c5a654:
    (**(code **)((long)*pppuStack_30 + lVar14))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5a654;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  if (pppuStack_50 == &ppuStack_68) {
    lVar14 = 0x20;
LAB_104c5a6b0:
    (**(code **)((long)*pppuStack_50 + lVar14))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5a6b0;
  }
  if (pppuStack_30 == &ppuStack_48) {
    lVar14 = 0x20;
LAB_104c5a6dc:
    (**(code **)((long)*pppuStack_30 + lVar14))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5a6dc;
  }
  pppuVar3 = pppuVar4;
  __Unwind_Resume();
  pcStack_78 = FUN_104c5a6f0;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = (undefined ***)pppuVar3[1];
  ppuStack_b8 = &PTR_DAT_1107ed608;
  pppuStack_a0 = &ppuStack_b8;
  ppuStack_d8 = &PTR_DAT_1107ed688;
  pppuVar3 = &ppuStack_b8;
  pppuVar13 = &ppuStack_d8;
  pppuStack_d0 = pppuVar6;
  uStack_c8 = param_5;
  pppuStack_c0 = &ppuStack_d8;
  pppuStack_b0 = pppuVar17;
  uStack_a8 = param_5;
  pppuStack_90 = &ppuStack_68;
  pppuStack_88 = pppuVar4;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_104c4e400(pppuVar5);
  if (pppuStack_c0 == &ppuStack_d8) {
    lVar14 = 0x20;
LAB_104c5a768:
    (**(code **)((long)*pppuStack_c0 + lVar14))();
  }
  else if (pppuStack_c0 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5a768;
  }
  pppuVar17 = pppuStack_a0;
  if (pppuStack_a0 == &ppuStack_b8) {
    lVar14 = 0x20;
LAB_104c5a794:
    (**(code **)((long)*pppuStack_a0 + lVar14))();
  }
  else if (pppuStack_a0 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5a794;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  if (pppuStack_c0 == &ppuStack_d8) {
    lVar14 = 0x20;
LAB_104c5a7f0:
    (**(code **)((long)*pppuStack_c0 + lVar14))();
  }
  else if (pppuStack_c0 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5a7f0;
  }
  if (pppuStack_a0 == &ppuStack_b8) {
    lVar14 = 0x20;
LAB_104c5a81c:
    (**(code **)((long)*pppuStack_a0 + lVar14))();
  }
  else if (pppuStack_a0 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5a81c;
  }
  pppuVar6 = pppuVar17;
  __Unwind_Resume();
  pcStack_e8 = FUN_104c5a830;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = (undefined ***)pppuVar6[1];
  ppuStack_128 = &PTR_DAT_1107ed708;
  pppuStack_110 = &ppuStack_128;
  ppuStack_148 = &PTR_DAT_1107ed798;
  pppuVar6 = &ppuStack_128;
  pppuVar4 = &ppuStack_148;
  pppuStack_140 = pppuVar13;
  uStack_138 = param_5;
  pppuStack_130 = &ppuStack_148;
  pppuStack_120 = pppuVar3;
  uStack_118 = param_5;
  pppuStack_100 = &ppuStack_d8;
  pppuStack_f8 = pppuVar17;
  ppuStack_f0 = &puStack_80;
  FUN_104c4decc(pppuVar5);
  if (pppuStack_130 == &ppuStack_148) {
    lVar14 = 0x20;
LAB_104c5a8a8:
    (**(code **)((long)*pppuStack_130 + lVar14))();
  }
  else if (pppuStack_130 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5a8a8;
  }
  pppuVar17 = pppuStack_110;
  if (pppuStack_110 == &ppuStack_128) {
    lVar14 = 0x20;
LAB_104c5a8d4:
    (**(code **)((long)*pppuStack_110 + lVar14))();
  }
  else if (pppuStack_110 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5a8d4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  if (pppuStack_130 == &ppuStack_148) {
    lVar14 = 0x20;
LAB_104c5a930:
    (**(code **)((long)*pppuStack_130 + lVar14))();
  }
  else if (pppuStack_130 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5a930;
  }
  if (pppuStack_110 == &ppuStack_128) {
    lVar14 = 0x20;
LAB_104c5a95c:
    (**(code **)((long)*pppuStack_110 + lVar14))();
  }
  else if (pppuStack_110 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5a95c;
  }
  __Unwind_Resume();
  pcStack_158 = FUN_104c5a970;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = (undefined ***)pppuVar17[1];
  pppuStack_160 = &ppuStack_f0;
  func_0x00010002d4d8(apppuStack_200);
  func_0x00010002d4d8(apppuStack_218,pppuVar6);
  ppuStack_1c8 = &PTR_DAT_1107ed818;
  pppuStack_1b0 = &ppuStack_1c8;
  ppuStack_1e8 = &PTR_DAT_1107ed8a8;
  ppppuVar11 = apppuStack_200;
  ppppuVar12 = apppuStack_218;
  pppuVar17 = pppuVar4;
  uStack_1e0 = param_7;
  uStack_1d8 = param_8;
  pppuStack_1d0 = &ppuStack_1e8;
  uStack_1c0 = param_6;
  uStack_1b8 = param_8;
  FUN_104c4e930(pppuVar3);
  if (pppuStack_1d0 == &ppuStack_1e8) {
    lVar14 = 0x20;
LAB_104c5aa34:
    (**(code **)((long)*pppuStack_1d0 + lVar14))();
  }
  else if (pppuStack_1d0 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5aa34;
  }
  pppuVar6 = pppuStack_1b0;
  if (pppuStack_1b0 == &ppuStack_1c8) {
    lVar14 = 0x20;
LAB_104c5aa60:
    (**(code **)((long)*pppuStack_1b0 + lVar14))();
  }
  else if (pppuStack_1b0 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5aa60;
  }
  if (cStack_201 < '\0') {
    pppuVar6 = apppuStack_218[0];
    __ZdlPv();
  }
  if (cStack_1e9 < '\0') {
    pppuVar6 = apppuStack_200[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  if (pppuStack_1d0 == &ppuStack_1e8) {
    lVar14 = 0x20;
LAB_104c5aae8:
    (**(code **)((long)*pppuStack_1d0 + lVar14))();
  }
  else if (pppuStack_1d0 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5aae8;
  }
  if (pppuStack_1b0 == &ppuStack_1c8) {
    lVar14 = 0x20;
LAB_104c5ab14:
    (**(code **)((long)*pppuStack_1b0 + lVar14))();
  }
  else if (pppuStack_1b0 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5ab14;
  }
  if (cStack_201 < '\0') {
    __ZdlPv(apppuStack_218[0]);
  }
  if (cStack_1e9 < '\0') {
    __ZdlPv(apppuStack_200[0]);
  }
  pppuVar3 = pppuVar6;
  __Unwind_Resume();
  pcStack_228 = FUN_104c5ab58;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = (undefined ***)pppuVar3[1];
  ppuStack_268 = &PTR_DAT_1107ed928;
  pppuStack_250 = &ppuStack_268;
  ppuStack_288 = &PTR_DAT_1107ed9b8;
  pppuStack_280 = pppuVar17;
  uStack_278 = param_5;
  pppuStack_270 = &ppuStack_288;
  ppppuStack_260 = ppppuVar12;
  uStack_258 = param_5;
  pppuStack_240 = pppuVar4;
  pppuStack_238 = pppuVar6;
  pppuStack_230 = &pppuStack_160;
  FUN_104c4edf8(pppuVar3);
  if (pppuStack_270 == &ppuStack_288) {
    lVar14 = 0x20;
LAB_104c5abd0:
    (**(code **)((long)*pppuStack_270 + lVar14))();
  }
  else if (pppuStack_270 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5abd0;
  }
  pppuVar17 = pppuStack_250;
  if (pppuStack_250 == &ppuStack_268) {
    lVar14 = 0x20;
LAB_104c5abfc:
    (**(code **)((long)*pppuStack_250 + lVar14))();
  }
  else if (pppuStack_250 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5abfc;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  if (pppuStack_270 == &ppuStack_288) {
    lVar14 = 0x20;
LAB_104c5ac58:
    (**(code **)((long)*pppuStack_270 + lVar14))();
  }
  else if (pppuStack_270 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_104c5ac58;
  }
  if (pppuStack_250 == &ppuStack_268) {
    lVar14 = 0x20;
  }
  else {
    if (pppuStack_250 == (undefined ***)0x0) goto LAB_104c5ac90;
    lVar14 = 0x28;
  }
  (**(code **)((long)*pppuStack_250 + lVar14))();
LAB_104c5ac90:
  __Unwind_Resume();
  ppuVar7 = pppuVar17[3];
  uStack_318 = 0;
  uStack_330 = 0;
  lStack_328 = 0;
  ppuStack_338 = &PTR_DAT_110c7a6e0;
  func_0x00010ae194bc(&ppuStack_338);
  uStack_318 = CONCAT44(3,(undefined4)uStack_318);
  uVar10 = uStack_330;
  if ((uStack_330 & 1) != 0) {
    uVar10 = *(ulong *)(uStack_330 & 0xfffffffffffffffe);
  }
  func_0x000104c60a7c();
  uVar15 = uVar10;
  uStack_320 = uVar10;
  if (0 < *(int *)(ppppuVar11 + 1)) {
    lVar14 = 0;
    do {
      pppuVar17 = *ppppuVar11;
      lVar8 = uVar10 + 0x10;
      func_0x000100627dec(lVar8,0x104c60e68);
      uVar15 = *(ulong *)(lVar8 + 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
      }
      pppuVar17 = pppuVar17 + lVar14 * 8;
      ppuVar18 = *pppuVar17;
      ppuVar9 = ppuVar18;
      _strlen(ppuVar18);
      func_0x00010b4bf088(lVar8 + 0x30,ppuVar18,ppuVar9,uVar15);
      uVar15 = *(ulong *)(lVar8 + 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
      }
      ppuVar18 = pppuVar17[3];
      ppuVar9 = ppuVar18;
      _strlen(ppuVar18);
      func_0x00010b4bf088(lVar8 + 0x38,ppuVar18,ppuVar9,uVar15);
      uVar16 = *(ulong *)(lVar8 + 8);
      if ((uVar16 & 1) != 0) {
        uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
      }
      ppuVar18 = pppuVar17[6];
      ppuVar9 = ppuVar18;
      _strlen(ppuVar18);
      uVar15 = lVar8 + 0x40;
      func_0x00010b4bf088(uVar15,ppuVar18,ppuVar9,uVar16);
      iVar2 = *(int *)(pppuVar17 + 4);
      if (2 < iVar2 - 1U) {
        iVar2 = 0;
      }
      *(int *)(lVar8 + 0x50) = iVar2;
      *(undefined1 *)(lVar8 + 0x54) = *(undefined1 *)(pppuVar17 + 7);
      *(undefined1 *)(lVar8 + 0x55) = *(undefined1 *)((long)pppuVar17 + 0x39);
      if (0 < *(int *)(pppuVar17 + 2)) {
        lVar19 = 0;
        lVar20 = 0;
        do {
          lVar1 = (long)pppuVar17[1] + lVar19;
          FUN_104c54c8c(&uStack_350,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
          uVar15 = lVar8 + 0x10;
          FUN_104c60f48(alStack_310,uVar15,lVar1);
          lVar1 = alStack_310[0];
          if (*(char *)(alStack_310[0] + 0x37) < '\0') {
            uVar15 = *(ulong *)(alStack_310[0] + 0x20);
            __ZdlPv();
          }
          *(undefined8 *)(lVar1 + 0x28) = uStack_348;
          *(undefined8 *)(lVar1 + 0x20) = uStack_350;
          *(undefined8 *)(lVar1 + 0x30) = uStack_340;
          lVar20 = lVar20 + 1;
          lVar19 = lVar19 + 0x18;
        } while (lVar20 < *(int *)(pppuVar17 + 2));
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(ppppuVar11 + 1));
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  ppuVar9 = ppuVar7;
  (**(code **)(*ppuVar7 + 0x10))();
  lStack_328 = (long)uVar15 / 1000 - (long)ppuVar9;
  FUN_104c547d8(ppuVar7,&ppuStack_338,0xffffffff);
  pppuVar17 = &ppuStack_338;
  func_0x00010ae19c2c(pppuVar17);
  return pppuVar17;
}



/* Entry: 104c5a6f0; end: 104c5a82f;  */

undefined ***
FUN_104c5a6f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined ****ppppuVar10;
  undefined ****ppppuVar11;
  undefined ***pppuVar12;
  long lVar13;
  undefined ***pppuVar14;
  ulong uVar15;
  ulong uVar16;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined **ppuStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  long alStack_2a0 [4];
  undefined **ppuStack_218;
  undefined ***pppuStack_210;
  undefined8 uStack_208;
  undefined ***pppuStack_200;
  undefined **ppuStack_1f8;
  undefined ****ppppuStack_1f0;
  undefined8 uStack_1e8;
  undefined ***pppuStack_1e0;
  long lStack_1d8;
  undefined ***pppuStack_1d0;
  undefined ***pppuStack_1c8;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined ***apppuStack_1a8 [2];
  char cStack_191;
  undefined ***apppuStack_190 [2];
  char cStack_179;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined ***pppuStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined ***pppuStack_c0;
  undefined **ppuStack_b8;
  undefined ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined ***pppuStack_a0;
  long lStack_98;
  undefined ***pppuStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined ***pppuStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = *(undefined ****)(param_1 + 8);
  ppuStack_48 = &PTR_DAT_1107ed608;
  pppuStack_30 = &ppuStack_48;
  ppuStack_68 = &PTR_DAT_1107ed688;
  pppuVar17 = &ppuStack_48;
  pppuVar14 = &ppuStack_68;
  uStack_60 = param_4;
  uStack_58 = param_5;
  pppuStack_50 = &ppuStack_68;
  uStack_40 = param_3;
  uStack_38 = param_5;
  FUN_104c4e400(pppuVar3);
  if (pppuStack_50 == &ppuStack_68) {
    lVar13 = 0x20;
LAB_104c5a768:
    (**(code **)((long)*pppuStack_50 + lVar13))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_104c5a768;
  }
  pppuVar4 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar13 = 0x20;
LAB_104c5a794:
    (**(code **)((long)*pppuStack_30 + lVar13))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_104c5a794;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  if (pppuStack_50 == &ppuStack_68) {
    lVar13 = 0x20;
LAB_104c5a7f0:
    (**(code **)((long)*pppuStack_50 + lVar13))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_104c5a7f0;
  }
  if (pppuStack_30 == &ppuStack_48) {
    lVar13 = 0x20;
LAB_104c5a81c:
    (**(code **)((long)*pppuStack_30 + lVar13))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_104c5a81c;
  }
  pppuVar3 = pppuVar4;
  __Unwind_Resume();
  pcStack_78 = FUN_104c5a830;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = (undefined ***)pppuVar3[1];
  ppuStack_b8 = &PTR_DAT_1107ed708;
  pppuStack_a0 = &ppuStack_b8;
  ppuStack_d8 = &PTR_DAT_1107ed798;
  pppuVar3 = &ppuStack_b8;
  pppuVar12 = &ppuStack_d8;
  pppuStack_d0 = pppuVar14;
  uStack_c8 = param_5;
  pppuStack_c0 = &ppuStack_d8;
  pppuStack_b0 = pppuVar17;
  uStack_a8 = param_5;
  pppuStack_90 = &ppuStack_68;
  pppuStack_88 = pppuVar4;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_104c4decc(pppuVar5);
  if (pppuStack_c0 == &ppuStack_d8) {
    lVar13 = 0x20;
LAB_104c5a8a8:
    (**(code **)((long)*pppuStack_c0 + lVar13))();
  }
  else if (pppuStack_c0 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_104c5a8a8;
  }
  pppuVar17 = pppuStack_a0;
  if (pppuStack_a0 == &ppuStack_b8) {
    lVar13 = 0x20;
LAB_104c5a8d4:
    (**(code **)((long)*pppuStack_a0 + lVar13))();
  }
  else if (pppuStack_a0 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_104c5a8d4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  if (pppuStack_c0 == &ppuStack_d8) {
    lVar13 = 0x20;
LAB_104c5a930:
    (**(code **)((long)*pppuStack_c0 + lVar13))();
  }
  else if (pppuStack_c0 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_104c5a930;
  }
  if (pppuStack_a0 == &ppuStack_b8) {
    lVar13 = 0x20;
LAB_104c5a95c:
    (**(code **)((long)*pppuStack_a0 + lVar13))();
  }
  else if (pppuStack_a0 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_104c5a95c;
  }
  __Unwind_Resume();
  pcStack_e8 = FUN_104c5a970;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar14 = (undefined ***)pppuVar17[1];
  ppuStack_f0 = &puStack_80;
  func_0x00010002d4d8(apppuStack_190);
  func_0x00010002d4d8(apppuStack_1a8,pppuVar3);
  ppuStack_158 = &PTR_DAT_1107ed818;
  pppuStack_140 = &ppuStack_158;
  ppuStack_178 = &PTR_DAT_1107ed8a8;
  ppppuVar10 = apppuStack_190;
  ppppuVar11 = apppuStack_1a8;
  pppuVar17 = pppuVar12;
  uStack_170 = param_7;
  uStack_168 = param_8;
  pppuStack_160 = &ppuStack_178;
  uStack_150 = param_6;
  uStack_148 = param_8;
  FUN_104c4e930(pppuVar14);
  if (pppuStack_160 == &ppuStack_178) {
    lVar13 = 0x20;
LAB_104c5aa34:
    (**(code **)((long)*pppuStack_160 + lVar13))();
  }
  else if (pppuStack_160 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_104c5aa34;
  }
  pppuVar3 = pppuStack_140;
  if (pppuStack_140 == &ppuStack_158) {
    lVar13 = 0x20;
LAB_104c5aa60:
    (**(code **)((long)*pppuStack_140 + lVar13))();
  }
  else if (pppuStack_140 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_104c5aa60;
  }
  if (cStack_191 < '\0') {
    pppuVar3 = apppuStack_1a8[0];
    __ZdlPv();
  }
  if (cStack_179 < '\0') {
    pppuVar3 = apppuStack_190[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return pppuVar14;
  }
  ___stack_chk_fail();
  if (pppuStack_160 == &ppuStack_178) {
    lVar13 = 0x20;
LAB_104c5aae8:
    (**(code **)((long)*pppuStack_160 + lVar13))();
  }
  else if (pppuStack_160 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_104c5aae8;
  }
  if (pppuStack_140 == &ppuStack_158) {
    lVar13 = 0x20;
LAB_104c5ab14:
    (**(code **)((long)*pppuStack_140 + lVar13))();
  }
  else if (pppuStack_140 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_104c5ab14;
  }
  if (cStack_191 < '\0') {
    __ZdlPv(apppuStack_1a8[0]);
  }
  if (cStack_179 < '\0') {
    __ZdlPv(apppuStack_190[0]);
  }
  pppuVar14 = pppuVar3;
  __Unwind_Resume();
  pcStack_1b8 = FUN_104c5ab58;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar14 = (undefined ***)pppuVar14[1];
  ppuStack_1f8 = &PTR_DAT_1107ed928;
  pppuStack_1e0 = &ppuStack_1f8;
  ppuStack_218 = &PTR_DAT_1107ed9b8;
  pppuStack_210 = pppuVar17;
  uStack_208 = param_5;
  pppuStack_200 = &ppuStack_218;
  ppppuStack_1f0 = ppppuVar11;
  uStack_1e8 = param_5;
  pppuStack_1d0 = pppuVar12;
  pppuStack_1c8 = pppuVar3;
  pppuStack_1c0 = &ppuStack_f0;
  FUN_104c4edf8(pppuVar14);
  if (pppuStack_200 == &ppuStack_218) {
    lVar13 = 0x20;
LAB_104c5abd0:
    (**(code **)((long)*pppuStack_200 + lVar13))();
  }
  else if (pppuStack_200 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_104c5abd0;
  }
  pppuVar17 = pppuStack_1e0;
  if (pppuStack_1e0 == &ppuStack_1f8) {
    lVar13 = 0x20;
LAB_104c5abfc:
    (**(code **)((long)*pppuStack_1e0 + lVar13))();
  }
  else if (pppuStack_1e0 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_104c5abfc;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return pppuVar14;
  }
  ___stack_chk_fail();
  if (pppuStack_200 == &ppuStack_218) {
    lVar13 = 0x20;
LAB_104c5ac58:
    (**(code **)((long)*pppuStack_200 + lVar13))();
  }
  else if (pppuStack_200 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_104c5ac58;
  }
  if (pppuStack_1e0 == &ppuStack_1f8) {
    lVar13 = 0x20;
  }
  else {
    if (pppuStack_1e0 == (undefined ***)0x0) goto LAB_104c5ac90;
    lVar13 = 0x28;
  }
  (**(code **)((long)*pppuStack_1e0 + lVar13))();
LAB_104c5ac90:
  __Unwind_Resume();
  ppuVar6 = pppuVar17[3];
  uStack_2a8 = 0;
  uStack_2c0 = 0;
  lStack_2b8 = 0;
  ppuStack_2c8 = &PTR_DAT_110c7a6e0;
  func_0x00010ae194bc(&ppuStack_2c8);
  uStack_2a8 = CONCAT44(3,(undefined4)uStack_2a8);
  uVar9 = uStack_2c0;
  if ((uStack_2c0 & 1) != 0) {
    uVar9 = *(ulong *)(uStack_2c0 & 0xfffffffffffffffe);
  }
  func_0x000104c60a7c();
  uVar15 = uVar9;
  uStack_2b0 = uVar9;
  if (0 < *(int *)(ppppuVar10 + 1)) {
    lVar13 = 0;
    do {
      pppuVar17 = *ppppuVar10;
      lVar7 = uVar9 + 0x10;
      func_0x000100627dec(lVar7,0x104c60e68);
      uVar15 = *(ulong *)(lVar7 + 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
      }
      pppuVar17 = pppuVar17 + lVar13 * 8;
      ppuVar18 = *pppuVar17;
      ppuVar8 = ppuVar18;
      _strlen(ppuVar18);
      func_0x00010b4bf088(lVar7 + 0x30,ppuVar18,ppuVar8,uVar15);
      uVar15 = *(ulong *)(lVar7 + 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
      }
      ppuVar18 = pppuVar17[3];
      ppuVar8 = ppuVar18;
      _strlen(ppuVar18);
      func_0x00010b4bf088(lVar7 + 0x38,ppuVar18,ppuVar8,uVar15);
      uVar16 = *(ulong *)(lVar7 + 8);
      if ((uVar16 & 1) != 0) {
        uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
      }
      ppuVar18 = pppuVar17[6];
      ppuVar8 = ppuVar18;
      _strlen(ppuVar18);
      uVar15 = lVar7 + 0x40;
      func_0x00010b4bf088(uVar15,ppuVar18,ppuVar8,uVar16);
      iVar2 = *(int *)(pppuVar17 + 4);
      if (2 < iVar2 - 1U) {
        iVar2 = 0;
      }
      *(int *)(lVar7 + 0x50) = iVar2;
      *(undefined1 *)(lVar7 + 0x54) = *(undefined1 *)(pppuVar17 + 7);
      *(undefined1 *)(lVar7 + 0x55) = *(undefined1 *)((long)pppuVar17 + 0x39);
      if (0 < *(int *)(pppuVar17 + 2)) {
        lVar19 = 0;
        lVar20 = 0;
        do {
          lVar1 = (long)pppuVar17[1] + lVar19;
          FUN_104c54c8c(&uStack_2e0,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
          uVar15 = lVar7 + 0x10;
          FUN_104c60f48(alStack_2a0,uVar15,lVar1);
          lVar1 = alStack_2a0[0];
          if (*(char *)(alStack_2a0[0] + 0x37) < '\0') {
            uVar15 = *(ulong *)(alStack_2a0[0] + 0x20);
            __ZdlPv();
          }
          *(undefined8 *)(lVar1 + 0x28) = uStack_2d8;
          *(undefined8 *)(lVar1 + 0x20) = uStack_2e0;
          *(undefined8 *)(lVar1 + 0x30) = uStack_2d0;
          lVar20 = lVar20 + 1;
          lVar19 = lVar19 + 0x18;
        } while (lVar20 < *(int *)(pppuVar17 + 2));
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(ppppuVar10 + 1));
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  ppuVar8 = ppuVar6;
  (**(code **)(*ppuVar6 + 0x10))();
  lStack_2b8 = (long)uVar15 / 1000 - (long)ppuVar8;
  FUN_104c547d8(ppuVar6,&ppuStack_2c8,0xffffffff);
  pppuVar17 = &ppuStack_2c8;
  func_0x00010ae19c2c(pppuVar17);
  return pppuVar17;
}



/* Entry: 104c5a830; end: 104c5a96f;  */

undefined ***
FUN_104c5a830(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined ****ppppuVar9;
  undefined ****ppppuVar10;
  undefined ***pppuVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined **ppuStack_258;
  ulong uStack_250;
  long lStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  long alStack_230 [4];
  undefined **ppuStack_1a8;
  undefined ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined ***pppuStack_190;
  undefined **ppuStack_188;
  undefined ****ppppuStack_180;
  undefined8 uStack_178;
  undefined ***pppuStack_170;
  long lStack_168;
  undefined ***pppuStack_160;
  undefined ***pppuStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined ***apppuStack_138 [2];
  char cStack_121;
  undefined ***apppuStack_120 [2];
  char cStack_109;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined ***pppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined ***pppuStack_d0;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined ***pppuStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = *(undefined ****)(param_1 + 8);
  ppuStack_48 = &PTR_DAT_1107ed708;
  pppuStack_30 = &ppuStack_48;
  ppuStack_68 = &PTR_DAT_1107ed798;
  pppuVar15 = &ppuStack_48;
  pppuVar11 = &ppuStack_68;
  uStack_60 = param_4;
  uStack_58 = param_5;
  pppuStack_50 = &ppuStack_68;
  uStack_40 = param_3;
  uStack_38 = param_5;
  FUN_104c4decc(pppuVar3);
  if (pppuStack_50 == &ppuStack_68) {
    lVar12 = 0x20;
LAB_104c5a8a8:
    (**(code **)((long)*pppuStack_50 + lVar12))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar12 = 0x28;
    goto LAB_104c5a8a8;
  }
  pppuVar4 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar12 = 0x20;
LAB_104c5a8d4:
    (**(code **)((long)*pppuStack_30 + lVar12))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar12 = 0x28;
    goto LAB_104c5a8d4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  if (pppuStack_50 == &ppuStack_68) {
    lVar12 = 0x20;
LAB_104c5a930:
    (**(code **)((long)*pppuStack_50 + lVar12))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar12 = 0x28;
    goto LAB_104c5a930;
  }
  if (pppuStack_30 == &ppuStack_48) {
    lVar12 = 0x20;
LAB_104c5a95c:
    (**(code **)((long)*pppuStack_30 + lVar12))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar12 = 0x28;
    goto LAB_104c5a95c;
  }
  __Unwind_Resume();
  pcStack_78 = FUN_104c5a970;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = (undefined ***)pppuVar4[1];
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010002d4d8(apppuStack_120);
  func_0x00010002d4d8(apppuStack_138,pppuVar15);
  ppuStack_e8 = &PTR_DAT_1107ed818;
  pppuStack_d0 = &ppuStack_e8;
  ppuStack_108 = &PTR_DAT_1107ed8a8;
  ppppuVar9 = apppuStack_120;
  ppppuVar10 = apppuStack_138;
  pppuVar15 = pppuVar11;
  uStack_100 = param_7;
  uStack_f8 = param_8;
  pppuStack_f0 = &ppuStack_108;
  uStack_e0 = param_6;
  uStack_d8 = param_8;
  FUN_104c4e930(pppuVar3);
  if (pppuStack_f0 == &ppuStack_108) {
    lVar12 = 0x20;
LAB_104c5aa34:
    (**(code **)((long)*pppuStack_f0 + lVar12))();
  }
  else if (pppuStack_f0 != (undefined ***)0x0) {
    lVar12 = 0x28;
    goto LAB_104c5aa34;
  }
  pppuVar4 = pppuStack_d0;
  if (pppuStack_d0 == &ppuStack_e8) {
    lVar12 = 0x20;
LAB_104c5aa60:
    (**(code **)((long)*pppuStack_d0 + lVar12))();
  }
  else if (pppuStack_d0 != (undefined ***)0x0) {
    lVar12 = 0x28;
    goto LAB_104c5aa60;
  }
  if (cStack_121 < '\0') {
    pppuVar4 = apppuStack_138[0];
    __ZdlPv();
  }
  if (cStack_109 < '\0') {
    pppuVar4 = apppuStack_120[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  if (pppuStack_f0 == &ppuStack_108) {
    lVar12 = 0x20;
LAB_104c5aae8:
    (**(code **)((long)*pppuStack_f0 + lVar12))();
  }
  else if (pppuStack_f0 != (undefined ***)0x0) {
    lVar12 = 0x28;
    goto LAB_104c5aae8;
  }
  if (pppuStack_d0 == &ppuStack_e8) {
    lVar12 = 0x20;
LAB_104c5ab14:
    (**(code **)((long)*pppuStack_d0 + lVar12))();
  }
  else if (pppuStack_d0 != (undefined ***)0x0) {
    lVar12 = 0x28;
    goto LAB_104c5ab14;
  }
  if (cStack_121 < '\0') {
    __ZdlPv(apppuStack_138[0]);
  }
  if (cStack_109 < '\0') {
    __ZdlPv(apppuStack_120[0]);
  }
  pppuVar3 = pppuVar4;
  __Unwind_Resume();
  pcStack_148 = FUN_104c5ab58;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = (undefined ***)pppuVar3[1];
  ppuStack_188 = &PTR_DAT_1107ed928;
  pppuStack_170 = &ppuStack_188;
  ppuStack_1a8 = &PTR_DAT_1107ed9b8;
  pppuStack_1a0 = pppuVar15;
  uStack_198 = param_5;
  pppuStack_190 = &ppuStack_1a8;
  ppppuStack_180 = ppppuVar10;
  uStack_178 = param_5;
  pppuStack_160 = pppuVar11;
  pppuStack_158 = pppuVar4;
  ppuStack_150 = &puStack_80;
  FUN_104c4edf8(pppuVar3);
  if (pppuStack_190 == &ppuStack_1a8) {
    lVar12 = 0x20;
LAB_104c5abd0:
    (**(code **)((long)*pppuStack_190 + lVar12))();
  }
  else if (pppuStack_190 != (undefined ***)0x0) {
    lVar12 = 0x28;
    goto LAB_104c5abd0;
  }
  pppuVar15 = pppuStack_170;
  if (pppuStack_170 == &ppuStack_188) {
    lVar12 = 0x20;
LAB_104c5abfc:
    (**(code **)((long)*pppuStack_170 + lVar12))();
  }
  else if (pppuStack_170 != (undefined ***)0x0) {
    lVar12 = 0x28;
    goto LAB_104c5abfc;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  if (pppuStack_190 == &ppuStack_1a8) {
    lVar12 = 0x20;
LAB_104c5ac58:
    (**(code **)((long)*pppuStack_190 + lVar12))();
  }
  else if (pppuStack_190 != (undefined ***)0x0) {
    lVar12 = 0x28;
    goto LAB_104c5ac58;
  }
  if (pppuStack_170 == &ppuStack_188) {
    lVar12 = 0x20;
  }
  else {
    if (pppuStack_170 == (undefined ***)0x0) goto LAB_104c5ac90;
    lVar12 = 0x28;
  }
  (**(code **)((long)*pppuStack_170 + lVar12))();
LAB_104c5ac90:
  __Unwind_Resume();
  ppuVar5 = pppuVar15[3];
  uStack_238 = 0;
  uStack_250 = 0;
  lStack_248 = 0;
  ppuStack_258 = &PTR_DAT_110c7a6e0;
  func_0x00010ae194bc(&ppuStack_258);
  uStack_238 = CONCAT44(3,(undefined4)uStack_238);
  uVar8 = uStack_250;
  if ((uStack_250 & 1) != 0) {
    uVar8 = *(ulong *)(uStack_250 & 0xfffffffffffffffe);
  }
  func_0x000104c60a7c();
  uVar13 = uVar8;
  uStack_240 = uVar8;
  if (0 < *(int *)(ppppuVar9 + 1)) {
    lVar12 = 0;
    do {
      pppuVar15 = *ppppuVar9;
      lVar6 = uVar8 + 0x10;
      func_0x000100627dec(lVar6,0x104c60e68);
      uVar13 = *(ulong *)(lVar6 + 8);
      if ((uVar13 & 1) != 0) {
        uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
      }
      pppuVar15 = pppuVar15 + lVar12 * 8;
      ppuVar16 = *pppuVar15;
      ppuVar7 = ppuVar16;
      _strlen(ppuVar16);
      func_0x00010b4bf088(lVar6 + 0x30,ppuVar16,ppuVar7,uVar13);
      uVar13 = *(ulong *)(lVar6 + 8);
      if ((uVar13 & 1) != 0) {
        uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
      }
      ppuVar16 = pppuVar15[3];
      ppuVar7 = ppuVar16;
      _strlen(ppuVar16);
      func_0x00010b4bf088(lVar6 + 0x38,ppuVar16,ppuVar7,uVar13);
      uVar14 = *(ulong *)(lVar6 + 8);
      if ((uVar14 & 1) != 0) {
        uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
      }
      ppuVar16 = pppuVar15[6];
      ppuVar7 = ppuVar16;
      _strlen(ppuVar16);
      uVar13 = lVar6 + 0x40;
      func_0x00010b4bf088(uVar13,ppuVar16,ppuVar7,uVar14);
      iVar2 = *(int *)(pppuVar15 + 4);
      if (2 < iVar2 - 1U) {
        iVar2 = 0;
      }
      *(int *)(lVar6 + 0x50) = iVar2;
      *(undefined1 *)(lVar6 + 0x54) = *(undefined1 *)(pppuVar15 + 7);
      *(undefined1 *)(lVar6 + 0x55) = *(undefined1 *)((long)pppuVar15 + 0x39);
      if (0 < *(int *)(pppuVar15 + 2)) {
        lVar17 = 0;
        lVar18 = 0;
        do {
          lVar1 = (long)pppuVar15[1] + lVar17;
          FUN_104c54c8c(&uStack_270,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
          uVar13 = lVar6 + 0x10;
          FUN_104c60f48(alStack_230,uVar13,lVar1);
          lVar1 = alStack_230[0];
          if (*(char *)(alStack_230[0] + 0x37) < '\0') {
            uVar13 = *(ulong *)(alStack_230[0] + 0x20);
            __ZdlPv();
          }
          *(undefined8 *)(lVar1 + 0x28) = uStack_268;
          *(undefined8 *)(lVar1 + 0x20) = uStack_270;
          *(undefined8 *)(lVar1 + 0x30) = uStack_260;
          lVar18 = lVar18 + 1;
          lVar17 = lVar17 + 0x18;
        } while (lVar18 < *(int *)(pppuVar15 + 2));
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(ppppuVar9 + 1));
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  ppuVar7 = ppuVar5;
  (**(code **)(*ppuVar5 + 0x10))();
  lStack_248 = (long)uVar13 / 1000 - (long)ppuVar7;
  FUN_104c547d8(ppuVar5,&ppuStack_258,0xffffffff);
  pppuVar15 = &ppuStack_258;
  func_0x00010ae19c2c(pppuVar15);
  return pppuVar15;
}



/* Entry: 104c5a970; end: 104c5ab57;  */

undefined ***
FUN_104c5a970(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined ****ppppuVar8;
  undefined ****ppppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined ***pppuVar12;
  ulong uVar13;
  ulong uVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined **ppuStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  long alStack_1c0 [4];
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined ***pppuStack_120;
  undefined **ppuStack_118;
  undefined ****ppppuStack_110;
  undefined8 uStack_108;
  undefined ***pppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined ***apppuStack_c8 [2];
  char cStack_b1;
  undefined ***apppuStack_b0 [2];
  char cStack_99;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined ***pppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar12 = *(undefined ****)(param_1 + 8);
  func_0x00010002d4d8(apppuStack_b0);
  func_0x00010002d4d8(apppuStack_c8,param_3);
  ppuStack_78 = &PTR_DAT_1107ed818;
  pppuStack_60 = &ppuStack_78;
  ppuStack_98 = &PTR_DAT_1107ed8a8;
  ppppuVar8 = apppuStack_b0;
  ppppuVar9 = apppuStack_c8;
  uVar10 = param_4;
  uStack_90 = param_7;
  uStack_88 = param_8;
  pppuStack_80 = &ppuStack_98;
  uStack_70 = param_6;
  uStack_68 = param_8;
  FUN_104c4e930(pppuVar12);
  if (pppuStack_80 == &ppuStack_98) {
    lVar11 = 0x20;
LAB_104c5aa34:
    (**(code **)((long)*pppuStack_80 + lVar11))();
  }
  else if (pppuStack_80 != (undefined ***)0x0) {
    lVar11 = 0x28;
    goto LAB_104c5aa34;
  }
  pppuVar3 = pppuStack_60;
  if (pppuStack_60 == &ppuStack_78) {
    lVar11 = 0x20;
LAB_104c5aa60:
    (**(code **)((long)*pppuStack_60 + lVar11))();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar11 = 0x28;
    goto LAB_104c5aa60;
  }
  if (cStack_b1 < '\0') {
    pppuVar3 = apppuStack_c8[0];
    __ZdlPv();
  }
  if (cStack_99 < '\0') {
    pppuVar3 = apppuStack_b0[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppuVar12;
  }
  ___stack_chk_fail();
  if (pppuStack_80 == &ppuStack_98) {
    lVar11 = 0x20;
LAB_104c5aae8:
    (**(code **)((long)*pppuStack_80 + lVar11))();
  }
  else if (pppuStack_80 != (undefined ***)0x0) {
    lVar11 = 0x28;
    goto LAB_104c5aae8;
  }
  if (pppuStack_60 == &ppuStack_78) {
    lVar11 = 0x20;
LAB_104c5ab14:
    (**(code **)((long)*pppuStack_60 + lVar11))();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar11 = 0x28;
    goto LAB_104c5ab14;
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(apppuStack_c8[0]);
  }
  if (cStack_99 < '\0') {
    __ZdlPv(apppuStack_b0[0]);
  }
  pppuVar12 = pppuVar3;
  __Unwind_Resume();
  pcStack_d8 = FUN_104c5ab58;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar12 = (undefined ***)pppuVar12[1];
  ppuStack_118 = &PTR_DAT_1107ed928;
  pppuStack_100 = &ppuStack_118;
  ppuStack_138 = &PTR_DAT_1107ed9b8;
  uStack_130 = uVar10;
  uStack_128 = param_5;
  pppuStack_120 = &ppuStack_138;
  ppppuStack_110 = ppppuVar9;
  uStack_108 = param_5;
  uStack_f0 = param_4;
  pppuStack_e8 = pppuVar3;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_104c4edf8(pppuVar12);
  if (pppuStack_120 == &ppuStack_138) {
    lVar11 = 0x20;
LAB_104c5abd0:
    (**(code **)((long)*pppuStack_120 + lVar11))();
  }
  else if (pppuStack_120 != (undefined ***)0x0) {
    lVar11 = 0x28;
    goto LAB_104c5abd0;
  }
  pppuVar3 = pppuStack_100;
  if (pppuStack_100 == &ppuStack_118) {
    lVar11 = 0x20;
LAB_104c5abfc:
    (**(code **)((long)*pppuStack_100 + lVar11))();
  }
  else if (pppuStack_100 != (undefined ***)0x0) {
    lVar11 = 0x28;
    goto LAB_104c5abfc;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return pppuVar12;
  }
  ___stack_chk_fail();
  if (pppuStack_120 == &ppuStack_138) {
    lVar11 = 0x20;
LAB_104c5ac58:
    (**(code **)((long)*pppuStack_120 + lVar11))();
  }
  else if (pppuStack_120 != (undefined ***)0x0) {
    lVar11 = 0x28;
    goto LAB_104c5ac58;
  }
  if (pppuStack_100 == &ppuStack_118) {
    lVar11 = 0x20;
  }
  else {
    if (pppuStack_100 == (undefined ***)0x0) goto LAB_104c5ac90;
    lVar11 = 0x28;
  }
  (**(code **)((long)*pppuStack_100 + lVar11))();
LAB_104c5ac90:
  __Unwind_Resume();
  ppuVar4 = pppuVar3[3];
  uStack_1c8 = 0;
  uStack_1e0 = 0;
  lStack_1d8 = 0;
  ppuStack_1e8 = &PTR_DAT_110c7a6e0;
  func_0x00010ae194bc(&ppuStack_1e8);
  uStack_1c8 = CONCAT44(3,(undefined4)uStack_1c8);
  uVar7 = uStack_1e0;
  if ((uStack_1e0 & 1) != 0) {
    uVar7 = *(ulong *)(uStack_1e0 & 0xfffffffffffffffe);
  }
  func_0x000104c60a7c();
  uVar13 = uVar7;
  uStack_1d0 = uVar7;
  if (0 < *(int *)(ppppuVar8 + 1)) {
    lVar11 = 0;
    do {
      pppuVar12 = *ppppuVar8;
      lVar5 = uVar7 + 0x10;
      func_0x000100627dec(lVar5,0x104c60e68);
      uVar13 = *(ulong *)(lVar5 + 8);
      if ((uVar13 & 1) != 0) {
        uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
      }
      pppuVar12 = pppuVar12 + lVar11 * 8;
      ppuVar15 = *pppuVar12;
      ppuVar6 = ppuVar15;
      _strlen(ppuVar15);
      func_0x00010b4bf088(lVar5 + 0x30,ppuVar15,ppuVar6,uVar13);
      uVar13 = *(ulong *)(lVar5 + 8);
      if ((uVar13 & 1) != 0) {
        uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
      }
      ppuVar15 = pppuVar12[3];
      ppuVar6 = ppuVar15;
      _strlen(ppuVar15);
      func_0x00010b4bf088(lVar5 + 0x38,ppuVar15,ppuVar6,uVar13);
      uVar14 = *(ulong *)(lVar5 + 8);
      if ((uVar14 & 1) != 0) {
        uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
      }
      ppuVar15 = pppuVar12[6];
      ppuVar6 = ppuVar15;
      _strlen(ppuVar15);
      uVar13 = lVar5 + 0x40;
      func_0x00010b4bf088(uVar13,ppuVar15,ppuVar6,uVar14);
      iVar2 = *(int *)(pppuVar12 + 4);
      if (2 < iVar2 - 1U) {
        iVar2 = 0;
      }
      *(int *)(lVar5 + 0x50) = iVar2;
      *(undefined1 *)(lVar5 + 0x54) = *(undefined1 *)(pppuVar12 + 7);
      *(undefined1 *)(lVar5 + 0x55) = *(undefined1 *)((long)pppuVar12 + 0x39);
      if (0 < *(int *)(pppuVar12 + 2)) {
        lVar16 = 0;
        lVar17 = 0;
        do {
          lVar1 = (long)pppuVar12[1] + lVar16;
          FUN_104c54c8c(&uStack_200,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
          uVar13 = lVar5 + 0x10;
          FUN_104c60f48(alStack_1c0,uVar13,lVar1);
          lVar1 = alStack_1c0[0];
          if (*(char *)(alStack_1c0[0] + 0x37) < '\0') {
            uVar13 = *(ulong *)(alStack_1c0[0] + 0x20);
            __ZdlPv();
          }
          *(undefined8 *)(lVar1 + 0x28) = uStack_1f8;
          *(undefined8 *)(lVar1 + 0x20) = uStack_200;
          *(undefined8 *)(lVar1 + 0x30) = uStack_1f0;
          lVar17 = lVar17 + 1;
          lVar16 = lVar16 + 0x18;
        } while (lVar17 < *(int *)(pppuVar12 + 2));
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(ppppuVar8 + 1));
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  ppuVar6 = ppuVar4;
  (**(code **)(*ppuVar4 + 0x10))();
  lStack_1d8 = (long)uVar13 / 1000 - (long)ppuVar6;
  FUN_104c547d8(ppuVar4,&ppuStack_1e8,0xffffffff);
  pppuVar12 = &ppuStack_1e8;
  func_0x00010ae19c2c(pppuVar12);
  return pppuVar12;
}



/* Entry: 104c5ab58; end: 104c5ac97;  */

undefined ***
FUN_104c5ab58(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  long alStack_f0 [4];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined ***pppuStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = *(undefined ****)(param_1 + 8);
  ppuStack_48 = &PTR_DAT_1107ed928;
  pppuStack_30 = &ppuStack_48;
  ppuStack_68 = &PTR_DAT_1107ed9b8;
  uStack_60 = param_4;
  uStack_58 = param_5;
  pppuStack_50 = &ppuStack_68;
  uStack_40 = param_3;
  uStack_38 = param_5;
  FUN_104c4edf8(pppuVar4,param_2,&ppuStack_48,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar11 = 0x20;
LAB_104c5abd0:
    (**(code **)((long)*pppuStack_50 + lVar11))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar11 = 0x28;
    goto LAB_104c5abd0;
  }
  pppuVar5 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar11 = 0x20;
LAB_104c5abfc:
    (**(code **)((long)*pppuStack_30 + lVar11))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar11 = 0x28;
    goto LAB_104c5abfc;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  if (pppuStack_50 == &ppuStack_68) {
    lVar11 = 0x20;
LAB_104c5ac58:
    (**(code **)((long)*pppuStack_50 + lVar11))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar11 = 0x28;
    goto LAB_104c5ac58;
  }
  if (pppuStack_30 == &ppuStack_48) {
    lVar11 = 0x20;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_104c5ac90;
    lVar11 = 0x28;
  }
  (**(code **)((long)*pppuStack_30 + lVar11))();
LAB_104c5ac90:
  __Unwind_Resume();
  ppuVar6 = pppuVar5[3];
  uStack_f8 = 0;
  uStack_110 = 0;
  lStack_108 = 0;
  ppuStack_118 = &PTR_DAT_110c7a6e0;
  func_0x00010ae194bc(&ppuStack_118);
  uStack_f8 = CONCAT44(3,(undefined4)uStack_f8);
  uVar10 = uStack_110;
  if ((uStack_110 & 1) != 0) {
    uVar10 = *(ulong *)(uStack_110 & 0xfffffffffffffffe);
  }
  func_0x000104c60a7c();
  uVar12 = uVar10;
  uStack_100 = uVar10;
  if (0 < (int)param_2[1]) {
    lVar11 = 0;
    do {
      lVar14 = *param_2;
      lVar7 = uVar10 + 0x10;
      func_0x000100627dec(lVar7,0x104c60e68);
      uVar12 = *(ulong *)(lVar7 + 8);
      if ((uVar12 & 1) != 0) {
        uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
      }
      puVar1 = (undefined8 *)(lVar14 + lVar11 * 0x40);
      uVar15 = *puVar1;
      uVar8 = uVar15;
      _strlen(uVar15);
      func_0x00010b4bf088(lVar7 + 0x30,uVar15,uVar8,uVar12);
      uVar12 = *(ulong *)(lVar7 + 8);
      if ((uVar12 & 1) != 0) {
        uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
      }
      uVar15 = puVar1[3];
      uVar8 = uVar15;
      _strlen(uVar15);
      func_0x00010b4bf088(lVar7 + 0x38,uVar15,uVar8,uVar12);
      uVar13 = *(ulong *)(lVar7 + 8);
      if ((uVar13 & 1) != 0) {
        uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
      }
      uVar15 = puVar1[6];
      uVar8 = uVar15;
      _strlen(uVar15);
      uVar12 = lVar7 + 0x40;
      func_0x00010b4bf088(uVar12,uVar15,uVar8,uVar13);
      iVar3 = *(int *)(puVar1 + 4);
      if (2 < iVar3 - 1U) {
        iVar3 = 0;
      }
      *(int *)(lVar7 + 0x50) = iVar3;
      *(undefined1 *)(lVar7 + 0x54) = *(undefined1 *)(puVar1 + 7);
      *(undefined1 *)(lVar7 + 0x55) = *(undefined1 *)((long)puVar1 + 0x39);
      if (0 < *(int *)(puVar1 + 2)) {
        lVar16 = 0;
        lVar14 = 0;
        do {
          lVar2 = puVar1[1] + lVar16;
          FUN_104c54c8c(&uStack_130,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
          uVar12 = lVar7 + 0x10;
          FUN_104c60f48(alStack_f0,uVar12,lVar2);
          lVar2 = alStack_f0[0];
          if (*(char *)(alStack_f0[0] + 0x37) < '\0') {
            uVar12 = *(ulong *)(alStack_f0[0] + 0x20);
            __ZdlPv();
          }
          *(undefined8 *)(lVar2 + 0x28) = uStack_128;
          *(undefined8 *)(lVar2 + 0x20) = uStack_130;
          *(undefined8 *)(lVar2 + 0x30) = uStack_120;
          lVar14 = lVar14 + 1;
          lVar16 = lVar16 + 0x18;
        } while (lVar14 < *(int *)(puVar1 + 2));
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_2[1]);
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  ppuVar9 = ppuVar6;
  (**(code **)(*ppuVar6 + 0x10))();
  lStack_108 = (long)uVar12 / 1000 - (long)ppuVar9;
  FUN_104c547d8(ppuVar6,&ppuStack_118,0xffffffff);
  pppuVar4 = &ppuStack_118;
  func_0x00010ae19c2c(pppuVar4);
  return pppuVar4;
}



/* Entry: 104c5ac98; end: 104c5ace7;  */

void FUN_104c5ac98(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long alStack_80 [4];
  
  plVar4 = *(long **)(param_1 + 0x18);
  uStack_88 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  ppuStack_a8 = &PTR_DAT_110c7a6e0;
  func_0x00010ae194bc(&ppuStack_a8);
  uStack_88 = CONCAT44(3,(undefined4)uStack_88);
  uVar8 = uStack_a0;
  if ((uStack_a0 & 1) != 0) {
    uVar8 = *(ulong *)(uStack_a0 & 0xfffffffffffffffe);
  }
  func_0x000104c60a7c();
  uVar9 = uVar8;
  uStack_90 = uVar8;
  if (0 < (int)param_2[1]) {
    lVar14 = 0;
    do {
      lVar11 = *param_2;
      lVar5 = uVar8 + 0x10;
      func_0x000100627dec(lVar5,0x104c60e68);
      uVar9 = *(ulong *)(lVar5 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      puVar1 = (undefined8 *)(lVar11 + lVar14 * 0x40);
      uVar12 = *puVar1;
      uVar6 = uVar12;
      _strlen(uVar12);
      func_0x00010b4bf088(lVar5 + 0x30,uVar12,uVar6,uVar9);
      uVar9 = *(ulong *)(lVar5 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      uVar12 = puVar1[3];
      uVar6 = uVar12;
      _strlen(uVar12);
      func_0x00010b4bf088(lVar5 + 0x38,uVar12,uVar6,uVar9);
      uVar10 = *(ulong *)(lVar5 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      uVar12 = puVar1[6];
      uVar6 = uVar12;
      _strlen(uVar12);
      uVar9 = lVar5 + 0x40;
      func_0x00010b4bf088(uVar9,uVar12,uVar6,uVar10);
      iVar3 = *(int *)(puVar1 + 4);
      if (2 < iVar3 - 1U) {
        iVar3 = 0;
      }
      *(int *)(lVar5 + 0x50) = iVar3;
      *(undefined1 *)(lVar5 + 0x54) = *(undefined1 *)(puVar1 + 7);
      *(undefined1 *)(lVar5 + 0x55) = *(undefined1 *)((long)puVar1 + 0x39);
      if (0 < *(int *)(puVar1 + 2)) {
        lVar13 = 0;
        lVar11 = 0;
        do {
          lVar2 = puVar1[1] + lVar13;
          FUN_104c54c8c(&uStack_c0,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
          uVar9 = lVar5 + 0x10;
          FUN_104c60f48(alStack_80,uVar9,lVar2);
          lVar2 = alStack_80[0];
          if (*(char *)(alStack_80[0] + 0x37) < '\0') {
            uVar9 = *(ulong *)(alStack_80[0] + 0x20);
            __ZdlPv();
          }
          *(undefined8 *)(lVar2 + 0x28) = uStack_b8;
          *(undefined8 *)(lVar2 + 0x20) = uStack_c0;
          *(undefined8 *)(lVar2 + 0x30) = uStack_b0;
          lVar11 = lVar11 + 1;
          lVar13 = lVar13 + 0x18;
        } while (lVar11 < *(int *)(puVar1 + 2));
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)param_2[1]);
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  plVar7 = plVar4;
  (**(code **)(*plVar4 + 0x10))();
  lStack_98 = (long)uVar9 / 1000 - (long)plVar7;
  FUN_104c547d8(plVar4,&ppuStack_a8,0xffffffff);
  func_0x00010ae19c2c(&ppuStack_a8);
  return;
}



/* Entry: 104c5ace8; end: 104c5ad53;  */

void FUN_104c5ace8(long param_1,long param_2)

{
  long lVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if ((param_2 != 0) && (lVar1 = *(long *)(param_1 + 0x48), lVar1 != 0)) {
    func_0x00010002d4d8(auStack_38);
    FUN_104c56eac(lVar1,auStack_38);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 104c5ad54; end: 104c5ae17;  */

void FUN_104c5ad54(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined1 uStack_39;
  undefined8 *puStack_38;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    __ZNSt3__15mutex4lockEv(param_1 + 0xc0);
    func_0x00010002d4d8(auStack_58,param_2);
    lVar1 = param_1 + 0x98;
    puStack_38 = auStack_58;
    FUN_104c5bc74(lVar1,auStack_58,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
    func_0x000100042ef0(lVar1 + 0x28,param_3);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    __ZNSt3__15mutex6unlockEv(param_1 + 0xc0);
  }
  return;
}



/* Entry: 104c5ae18; end: 104c5ae27;  */

void FUN_104c5ae18(long param_1,undefined4 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined **ppuStack_68;
  ulong uStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    uStack_48 = 0;
    uStack_60 = 0;
    lStack_58 = 0;
    ppuStack_68 = &PTR_DAT_110c7a6e0;
    func_0x00010ae194bc(&ppuStack_68);
    uStack_48 = CONCAT44(0x1d,(undefined4)uStack_48);
    uVar4 = uStack_60;
    if ((uStack_60 & 1) != 0) {
      uVar4 = *(ulong *)(uStack_60 & 0xfffffffffffffffe);
    }
    func_0x000104c609d0();
    *(uint *)(uVar4 + 0x10) = *(uint *)(uVar4 + 0x10) | 1;
    uVar2 = uVar4;
    uVar5 = *(ulong *)(uVar4 + 0x18);
    uStack_50 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) == 0) {
      uVar2 = *(ulong *)(uVar4 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000104c60a18();
      *(ulong *)(uVar4 + 0x18) = uVar2;
      uVar5 = uVar2;
    }
    *(undefined4 *)(uVar5 + 0x70) = *param_2;
    if (0 < (int)param_2[4]) {
      lVar6 = 0;
      do {
        uVar2 = uVar5 + 0x10;
        func_0x000100068f84();
        func_0x000100042ef0();
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_2[4]);
    }
    *(undefined4 *)(uVar5 + 0x74) = param_2[5];
    if (0 < (int)param_2[8]) {
      lVar6 = 0;
      do {
        uVar2 = uVar5 + 0x28;
        func_0x000100068f84();
        func_0x000100042ef0();
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_2[8]);
    }
    if (0 < (int)param_2[0xc]) {
      lVar6 = 0;
      do {
        uVar2 = uVar5 + 0x40;
        func_0x000100068f84();
        func_0x000100042ef0();
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_2[0xc]);
    }
    if (0 < (int)param_2[0x10]) {
      lVar6 = 0;
      do {
        uVar2 = uVar5 + 0x58;
        func_0x000100068f84();
        func_0x000100042ef0();
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_2[0x10]);
    }
    __ZNSt3__16chrono12system_clock3nowEv();
    plVar3 = plVar1;
    (**(code **)(*plVar1 + 0x10))();
    lStack_58 = (long)uVar2 / 1000 - (long)plVar3;
    FUN_104c547d8(plVar1,&ppuStack_68,0xffffffff);
    func_0x00010ae19c2c(&ppuStack_68);
    return;
  }
  return;
}



/* Entry: 104c5ae28; end: 104c5ae8b;  */

void FUN_104c5ae28(long param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x00010002d4d8(auStack_38);
  func_0x000104c4f36c(*(undefined8 *)(param_1 + 8),auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 104c5ae8c; end: 104c5aec3;  */

void FUN_104c5ae8c(long param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  long *plVar4;
  long *****ppppplVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long ******pppppplVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long *****ppppplVar18;
  long ******pppppplVar19;
  long *****ppppplVar20;
  long lVar21;
  long *****ppppplVar22;
  long *plVar23;
  long ******pppppplVar24;
  ulong uVar25;
  ulong uVar26;
  long ******pppppplVar27;
  long *****ppppplStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *****ppppplStack_a8;
  long *****ppppplStack_a0;
  undefined1 uStack_98;
  undefined6 uStack_97;
  char cStack_91;
  long lStack_80;
  undefined8 uStack_78;
  char cStack_69;
  int aiStack_68 [2];
  
  plVar6 = *(long **)(param_1 + 0x18);
  if ((int)plVar6[0x56] == 1) {
    cStack_69 = '\0';
    uVar7 = 1;
    plVar3 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0x1c0))(plRam0000000113815c70,1);
    plVar4 = plVar6 + 0x39;
    func_0x000100491574(plVar4,aiStack_68,&cStack_69,plVar3,uVar7);
    if ((int)plVar4 == 1) {
      do {
        ppuVar9 = &PTR_PTR_1130a8810;
        __ZNSt3__15mutex4lockEv(plVar6 + 0x57);
        if (cStack_69 == '\x01') {
          if (aiStack_68[0] < 2) {
            if (aiStack_68[0] == 0) {
              *(undefined4 *)(plVar6 + 0x56) = 2;
              if ((*(byte *)(plVar6 + 0x5f) & 1) == 0) {
                (**(code **)(*plVar6 + 0x20))(plVar6);
                goto LAB_104c539e0;
              }
            }
            else if (aiStack_68[0] == 1) {
              if ((char)plVar6[0x5f] == '\x01') {
                if ((int)plVar6[0x56] != 3) {
                  FUN_104c54564(plVar6[0x54],3);
                }
              }
              else {
                plVar4 = plVar6 + 0x60;
                __ZNSt3__15mutex4lockEv();
                __ZNSt3__16chrono12steady_clock3nowEv();
                lVar16 = plVar6[0x6d];
                lVar21 = plVar6[0x69];
                uVar26 = plVar6[0x6c];
                plVar3 = (long *)(lVar21 + (uVar26 / 0x49) * 8);
                lVar10 = plVar6[0x6a];
                lVar14 = lVar16;
                if (lVar10 == lVar21) {
                  pppppplVar24 = (long ******)0x0;
                  pppppplVar13 = (long ******)0x0;
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = uVar26 + lVar16;
                  plVar4 = (long *)(lVar21 + (SUB168(auVar2 * ZEXT816(0x70381c0e070381c1),8) >> 2 &
                                             0x1ffffffffffffff8));
                  lVar10 = lVar21;
                }
                else {
                  pppppplVar19 = *(long *******)(lVar21 + (uVar26 / 0x49) * 8);
                  pppppplVar13 = pppppplVar19 + (uVar26 % 0x49) * 7;
                  uVar25 = uVar26 + lVar16;
                  uVar17 = uVar25 / 0x49;
                  pppppplVar24 = (long ******)
                                 (*(long *)(lVar21 + uVar17 * 8) + (uVar25 % 0x49) * 0x38);
                  if (pppppplVar13 == pppppplVar24) {
LAB_104c53b64:
                    plVar23 = plVar3;
                    pppppplVar27 = pppppplVar13;
                    if (pppppplVar13 != pppppplVar24) {
                      while( true ) {
                        pppppplVar13 = pppppplVar13 + 7;
                        if ((long)pppppplVar13 - (long)pppppplVar19 == 0xff8) {
                          plVar3 = plVar3 + 1;
                          pppppplVar13 = (long ******)*plVar3;
                        }
                        if (pppppplVar13 == pppppplVar24) break;
                        if ((long)plVar4 <= (long)pppppplVar13[6]) {
                          if (pppppplVar27 != pppppplVar13) {
                            ppppplVar22 = pppppplVar27[1];
                            ppppplVar5 = ppppplVar22;
                            if (((ulong)ppppplVar22 & 1) != 0) {
                              ppppplVar5 = *(long ******)((ulong)ppppplVar22 & 0xfffffffffffffffe);
                            }
                            ppppplVar18 = pppppplVar13[1];
                            ppppplVar20 = ppppplVar18;
                            if (((ulong)ppppplVar18 & 1) != 0) {
                              ppppplVar20 = *(long ******)((ulong)ppppplVar18 & 0xfffffffffffffffe);
                            }
                            if (ppppplVar5 == ppppplVar20) {
                              pppppplVar27[1] = ppppplVar18;
                              pppppplVar13[1] = ppppplVar22;
                              ppppplVar5 = pppppplVar27[2];
                              pppppplVar27[2] = pppppplVar13[2];
                              pppppplVar13[2] = ppppplVar5;
                              ppppplVar5 = pppppplVar27[3];
                              pppppplVar27[3] = pppppplVar13[3];
                              pppppplVar13[3] = ppppplVar5;
                              uVar1 = *(undefined4 *)((long)pppppplVar27 + 0x24);
                              *(undefined4 *)((long)pppppplVar27 + 0x24) =
                                   *(undefined4 *)((long)pppppplVar13 + 0x24);
                              *(undefined4 *)((long)pppppplVar13 + 0x24) = uVar1;
                            }
                            else {
                              func_0x00010ae19c8c(pppppplVar27);
                              func_0x00010ae19f9c(pppppplVar27,pppppplVar13);
                            }
                          }
                          ppppplVar5 = pppppplVar13[5];
                          pppppplVar27[6] = pppppplVar13[6];
                          pppppplVar27[5] = ppppplVar5;
                          pppppplVar27 = pppppplVar27 + 7;
                          if ((long)pppppplVar27 - *plVar23 == 0xff8) {
                            plVar23 = plVar23 + 1;
                            pppppplVar27 = (long ******)*plVar23;
                          }
                        }
                        pppppplVar19 = (long ******)*plVar3;
                      }
                      uVar26 = plVar6[0x6c];
                      lVar21 = plVar6[0x69];
                      lVar10 = plVar6[0x6a];
                      uVar25 = uVar26 + plVar6[0x6d];
                      uVar17 = uVar25 / 0x49;
                      plVar3 = plVar23;
                      lVar14 = plVar6[0x6d];
                      pppppplVar24 = pppppplVar27;
                    }
                  }
                  else {
                    do {
                      if ((long)pppppplVar13[6] < (long)plVar4) goto LAB_104c53b64;
                      pppppplVar13 = pppppplVar13 + 7;
                      if ((long)pppppplVar13 - (long)pppppplVar19 == 0xff8) {
                        plVar3 = plVar3 + 1;
                        pppppplVar19 = (long ******)*plVar3;
                        pppppplVar13 = pppppplVar19;
                      }
                    } while (pppppplVar13 != pppppplVar24);
                  }
                  plVar4 = (long *)(lVar21 + uVar17 * 8);
                  if (lVar10 == lVar21) {
                    pppppplVar13 = (long ******)0x0;
                  }
                  else {
                    pppppplVar13 = (long ******)(*plVar4 + (uVar25 % 0x49) * 0x38);
                  }
                }
                if (pppppplVar13 == pppppplVar24) {
                  lVar11 = 0;
                }
                else {
                  lVar11 = ((long)plVar4 - (long)plVar3 >> 3) * 0x49 +
                           ((long)pppppplVar13 - *plVar4 >> 3) * 0x6db6db6db6db6db7 +
                           ((long)pppppplVar24 - *plVar3 >> 3) * -0x6db6db6db6db6db7;
                }
                pppppplVar13 = (long ******)(lVar21 + (uVar26 / 0x49) * 8);
                if (lVar10 == lVar21) {
                  pppppplVar19 = (long ******)0x0;
                }
                else {
                  pppppplVar19 = (long ******)(*pppppplVar13 + (uVar26 % 0x49) * 7);
                }
                if (pppppplVar19 == pppppplVar24) {
                  uVar25 = 0;
                }
                else {
                  uVar25 = ((long)plVar3 - (long)pppppplVar13 >> 3) * 0x49 +
                           ((long)pppppplVar24 - *plVar3 >> 3) * 0x6db6db6db6db6db7 +
                           ((long)pppppplVar19 - (long)*pppppplVar13 >> 3) * -0x6db6db6db6db6db7;
                }
                ppppplStack_a8 = (long *****)pppppplVar13;
                ppppplStack_a0 = (long *****)pppppplVar19;
                FUN_104c564d8(&ppppplStack_a8,uVar25);
                ppppplVar5 = ppppplStack_a0;
                pppppplVar24 = (long ******)ppppplStack_a8;
                if (0 < lVar11) {
                  if ((ulong)(lVar14 - lVar11) >> 1 < uVar25) {
                    FUN_104c564d8(&ppppplStack_a8);
                    pppppplVar19 = (long ******)ppppplStack_a8;
                    pppppplVar13 = (long ******)(lVar21 + ((uVar26 + lVar14) / 0x49) * 8);
                    if (lVar10 == lVar21) {
                      ppppplVar22 = (long *****)0x0;
                    }
                    else {
                      ppppplVar22 = *pppppplVar13 + ((uVar26 + lVar14) % 0x49) * 7;
                    }
                    if ((long ******)ppppplStack_a8 == pppppplVar13) {
                      FUN_104c56730(&ppppplStack_a8,ppppplStack_a0,ppppplVar22,pppppplVar24,
                                    ppppplVar5);
                      ppppplVar5 = (long *****)CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                    }
                    else {
                      FUN_104c56730(&ppppplStack_a8,ppppplStack_a0,*ppppplStack_a8 + 0x1ff,
                                    pppppplVar24,ppppplVar5);
                      uVar7 = CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                      while (pppppplVar19 = pppppplVar19 + 1, pppppplVar19 != pppppplVar13) {
                        FUN_104c56730(&ppppplStack_a8,*pppppplVar19,*pppppplVar19 + 0x1ff,
                                      ppppplStack_a0,uVar7);
                        uVar7 = CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                      }
                      FUN_104c56730(&ppppplStack_a8,*pppppplVar19,ppppplVar22,ppppplStack_a0,uVar7);
                      ppppplVar5 = (long *****)CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                    }
                    lVar14 = plVar6[0x69];
                    lVar10 = plVar6[0x6a];
                    if (lVar10 == lVar14) {
                      ppppplVar22 = (long *****)0x0;
                    }
                    else {
                      ppppplVar22 = (long *****)
                                    (*(long *)(lVar14 + ((ulong)(plVar6[0x6d] + plVar6[0x6c]) / 0x49
                                                        ) * 8) +
                                    ((ulong)(plVar6[0x6d] + plVar6[0x6c]) % 0x49) * 0x38);
                    }
                    pppppplVar24 = (long ******)ppppplStack_a0;
                    if (ppppplVar22 != ppppplVar5) {
                      do {
                        func_0x00010ae19c2c();
                        ppppplVar5 = ppppplVar5 + 7;
                        if ((long)ppppplVar5 - (long)*pppppplVar24 == 0xff8) {
                          pppppplVar24 = pppppplVar24 + 1;
                          ppppplVar5 = *pppppplVar24;
                        }
                      } while (ppppplVar5 != ppppplVar22);
                      lVar10 = plVar6[0x6a];
                      lVar14 = plVar6[0x69];
                    }
                    lVar21 = 0;
                    if (lVar10 - lVar14 != 0) {
                      lVar21 = (lVar10 - lVar14 >> 3) * 0x49 + -1;
                    }
                    lVar14 = plVar6[0x6d] - lVar11;
                    plVar6[0x6d] = lVar14;
                    uVar26 = lVar21 - (plVar6[0x6c] + lVar14);
                    while (0x91 < uVar26) {
                      __ZdlPv(*(undefined8 *)(lVar10 + -8));
                      lVar10 = plVar6[0x6a] + -8;
                      plVar6[0x6a] = lVar10;
                      lVar21 = 0;
                      if (lVar10 - plVar6[0x69] != 0) {
                        lVar21 = (lVar10 - plVar6[0x69] >> 3) * 0x49 + -1;
                      }
                      lVar14 = plVar6[0x6d];
                      uVar26 = lVar21 - (lVar14 + plVar6[0x6c]);
                    }
                  }
                  else {
                    FUN_104c564d8(&ppppplStack_a8);
                    if (pppppplVar24 == pppppplVar13) {
                      FUN_104c5658c(&ppppplStack_a8,pppppplVar19,ppppplVar5,ppppplStack_a8,
                                    ppppplStack_a0);
                      pppppplVar24 = (long ******)CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                    }
                    else {
                      FUN_104c5658c(&ppppplStack_a8,*pppppplVar24,ppppplVar5,ppppplStack_a8,
                                    ppppplStack_a0);
                      uVar7 = CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                      while (pppppplVar24 = pppppplVar24 + -1, pppppplVar24 != pppppplVar13) {
                        FUN_104c5658c(&ppppplStack_a8,*pppppplVar24,*pppppplVar24 + 0x1ff,
                                      ppppplStack_a0,uVar7);
                        uVar7 = CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                      }
                      FUN_104c5658c(&ppppplStack_a8,pppppplVar19,*pppppplVar24 + 0x1ff,
                                    ppppplStack_a0,uVar7);
                      pppppplVar24 = (long ******)CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                    }
                    while (pppppplVar19 != pppppplVar24) {
                      func_0x00010ae19c2c(pppppplVar19);
                      pppppplVar19 = pppppplVar19 + 7;
                      if ((long)pppppplVar19 - (long)*pppppplVar13 == 0xff8) {
                        pppppplVar13 = pppppplVar13 + 1;
                        pppppplVar19 = (long ******)*pppppplVar13;
                      }
                    }
                    lVar14 = plVar6[0x6d] - lVar11;
                    plVar6[0x6d] = lVar14;
                    lVar10 = plVar6[0x6c];
                    plVar6[0x6c] = lVar10 + lVar11;
                    if (0x91 < (ulong)(lVar10 + lVar11)) {
                      puVar12 = (undefined8 *)plVar6[0x69];
                      do {
                        __ZdlPv(*puVar12);
                        puVar12 = (undefined8 *)(plVar6[0x69] + 8);
                        plVar6[0x69] = (long)puVar12;
                        lVar14 = plVar6[0x6c];
                        plVar6[0x6c] = lVar14 - 0x49U;
                      } while (0x91 < lVar14 - 0x49U);
                      lVar14 = plVar6[0x6d];
                    }
                  }
                }
                if (lVar16 - lVar14 != 0) {
                  func_0x00010ae02f70(0,lVar16 - lVar14);
                  func_0x00010ae02f70();
                  ppuVar9 = &PTR_PTR_1130a88d8;
                  func_0x00010ae079a0();
                  func_0x00010ae02f80();
                  func_0x00010ae02f80();
                  func_0x00010ae07cd4(ppuVar9,&PTR_PTR_1130a88d8);
                  lVar16 = plVar6[0x6d];
                }
                if (lVar16 == 0) {
                  *(undefined1 *)(plVar6 + 0x6e) = 0;
                }
                else if ((*(byte *)(plVar6 + 0x5f) & 1) == 0) {
                  lVar14 = *(long *)(plVar6[0x69] + ((ulong)plVar6[0x6c] / 0x49) * 8) +
                           ((ulong)plVar6[0x6c] % 0x49) * 0x38;
                  func_0x00010ae19a28(&ppppplStack_a8,0,lVar14);
                  uStack_78 = *(undefined8 *)(lVar14 + 0x30);
                  lStack_80 = *(long *)(lVar14 + 0x28);
                  func_0x00010ae19c2c(*(long *)(plVar6[0x69] + ((ulong)plVar6[0x6c] / 0x49) * 8) +
                                      ((ulong)plVar6[0x6c] % 0x49) * 0x38);
                  lVar14 = plVar6[0x6c];
                  plVar6[0x6d] = plVar6[0x6d] + -1;
                  plVar6[0x6c] = lVar14 + 1U;
                  if (0x91 < lVar14 + 1U) {
                    __ZdlPv(*(undefined8 *)plVar6[0x69]);
                    plVar6[0x69] = plVar6[0x69] + 8;
                    plVar6[0x6c] = plVar6[0x6c] + -0x49;
                  }
                  lVar14 = plVar6[0x54];
                  FUN_104c545dc(lVar14,&ppppplStack_a8,1);
                  __ZNSt3__16chrono12steady_clock3nowEv();
                  func_0x00010ae02ef0(0,(lVar14 - lStack_80) / 1000000);
                  ppuVar9 = &PTR_PTR_1130a87e0;
                  func_0x00010ae079a0();
                  func_0x00010ae02f00();
                  func_0x00010ae07cd4(ppuVar9,&PTR_PTR_1130a87e0);
                  func_0x00010ae19c2c(&ppppplStack_a8);
                }
                else {
                  func_0x00010ae02f70(0);
                  ppuVar9 = &PTR_PTR_1130a8848;
                  func_0x00010ae079a0();
                  func_0x00010ae02f80();
                  func_0x00010ae07cd4(ppuVar9,&PTR_PTR_1130a8848);
                  puVar12 = (undefined8 *)plVar6[0x69];
                  puVar15 = puVar12;
                  if ((undefined8 *)plVar6[0x6a] != puVar12) {
                    uVar26 = plVar6[0x6c];
                    plVar4 = puVar12 + uVar26 / 0x49;
                    lVar14 = *plVar4 + (uVar26 % 0x49) * 0x38;
                    lVar10 = puVar12[(plVar6[0x6d] + uVar26) / 0x49] +
                             ((plVar6[0x6d] + uVar26) % 0x49) * 0x38;
                    puVar15 = (undefined8 *)plVar6[0x6a];
                    if (lVar14 != lVar10) {
                      do {
                        func_0x00010ae19c2c();
                        lVar14 = lVar14 + 0x38;
                        if (lVar14 - *plVar4 == 0xff8) {
                          plVar4 = plVar4 + 1;
                          lVar14 = *plVar4;
                        }
                      } while (lVar14 != lVar10);
                      puVar12 = (undefined8 *)plVar6[0x69];
                      puVar15 = (undefined8 *)plVar6[0x6a];
                    }
                  }
                  plVar6[0x6d] = 0;
                  lVar14 = (long)puVar15 - (long)puVar12;
                  while (uVar26 = lVar14 >> 3, 2 < uVar26) {
                    __ZdlPv(*puVar12);
                    puVar12 = (undefined8 *)(plVar6[0x69] + 8);
                    plVar6[0x69] = (long)puVar12;
                    lVar14 = plVar6[0x6a] - (long)puVar12;
                  }
                  if (uVar26 == 1) {
                    lVar14 = 0x24;
                  }
                  else {
                    if (uVar26 != 2) goto LAB_104c54420;
                    lVar14 = 0x49;
                  }
                  plVar6[0x6c] = lVar14;
                }
LAB_104c54420:
                __ZNSt3__15mutex6unlockEv(plVar6 + 0x60);
              }
            }
          }
          else if (aiStack_68[0] == 2) {
            (**(code **)(*plVar6 + 0x18))(plVar6,plVar6 + 0x4f);
LAB_104c539e0:
            if ((*(byte *)(plVar6 + 0x5f) & 1) == 0) {
              FUN_104c544cc(plVar6[0x54],plVar6 + 0x4f,2);
            }
          }
          else {
            if (aiStack_68[0] == 3) goto LAB_104c53a30;
            if (aiStack_68[0] == 4) {
              ppppplStack_a0 = (long *****)0x0;
              uStack_98 = 0;
              ppppplStack_a8 = (long *****)CONCAT62(ppppplStack_a8._2_6_,(short)(int)plVar6[0x48]);
              if (*(char *)((long)plVar6 + 0x277) < '\0') {
                func_0x000100033dac(&ppppplStack_c0,plVar6[0x4c],plVar6[0x4d]);
              }
              else {
                lStack_b8 = plVar6[0x4d];
                ppppplStack_c0 = (long *****)plVar6[0x4c];
                lStack_b0 = plVar6[0x4e];
              }
              ppppplStack_a0 = ppppplStack_c0;
              if (-1 < lStack_b0) {
                ppppplStack_a0 = (long *****)&ppppplStack_c0;
              }
              (**(code **)(*plVar6 + 0x28))(plVar6,&ppppplStack_a8);
              FUN_104ae3ee8(plVar6 + 0x39);
              pppppplVar24 = (long ******)ppppplStack_c0;
              if (lStack_b0 < 0) goto LAB_104c53b5c;
            }
          }
        }
        else {
          if (aiStack_68[0] < 2) {
            if (aiStack_68[0] != 0) {
              if (aiStack_68[0] == 1) {
                func_0x00010002d4d8(&ppppplStack_a8,"Error sending message");
                (**(code **)(*plVar6 + 0x30))(plVar6,&ppppplStack_a8);
                pppppplVar24 = (long ******)ppppplStack_a8;
                if (cStack_91 < '\0') {
LAB_104c53b5c:
                  __ZdlPv(pppppplVar24);
                }
              }
              goto LAB_104c53a38;
            }
            func_0x00010002d4d8(&ppppplStack_a8,"Error connecting to gRPC server");
            (**(code **)(*plVar6 + 0x30))(plVar6,&ppppplStack_a8);
            if (cStack_91 < '\0') {
              __ZdlPv(ppppplStack_a8);
            }
          }
          else {
            if (aiStack_68[0] == 2) {
              ppuVar9 = &PTR_PTR_1130a8890;
            }
            else if (aiStack_68[0] != 3) {
              if (aiStack_68[0] == 4) {
                func_0x00010002d4d8(&ppppplStack_a8,"Error finishing stream");
                (**(code **)(*plVar6 + 0x30))(plVar6,&ppppplStack_a8);
                if (cStack_91 < '\0') {
                  __ZdlPv(ppppplStack_a8);
                }
                FUN_104ae3ee8(plVar6 + 0x39);
              }
              goto LAB_104c53a38;
            }
            ppuVar8 = ppuVar9;
            func_0x00010ae079a0(0,ppuVar9);
            func_0x00010ae07cd4(ppuVar8,ppuVar9);
          }
LAB_104c53a30:
          FUN_104c546d0(plVar6);
        }
LAB_104c53a38:
        __ZNSt3__15mutex6unlockEv(plVar6 + 0x57);
        uVar7 = 1;
        plVar3 = plRam0000000113815c70;
        (**(code **)(*plRam0000000113815c70 + 0x1c0))(plRam0000000113815c70,1);
        plVar4 = plVar6 + 0x39;
        func_0x000100491574(plVar4,aiStack_68,&cStack_69,plVar3,uVar7);
      } while ((int)plVar4 == 1);
    }
  }
  return;
}



/* Entry: 104c5aec4; end: 104c5afa7;  */

void FUN_104c5aec4(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  puVar4 = (undefined8 *)0x108;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1107eda38;
  func_0x00010002d4d8(auStack_48,param_2);
  FUN_104c51800(puVar4 + 3,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  plVar6 = *(long **)(param_1 + 0x40);
  *(undefined8 **)(param_1 + 0x38) = puVar4 + 3;
  *(undefined8 **)(param_1 + 0x40) = puVar4;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 104c5afa8; end: 104c5afd7;  */

void FUN_104c5afa8(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c5afb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x38))();
    return;
  }
  return;
}



/* Entry: 104c5afd8; end: 104c5b397;  */

/* WARNING: Removing unreachable block (ram,0x000104c5b07c) */
/* WARNING: Type propagation algorithm not settling */

undefined **
FUN_104c5afd8(long param_1,undefined ***param_2,undefined8 *param_3,undefined ****param_4,
             undefined ***param_5,code **param_6,undefined ***param_7,code **param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined4 *puVar5;
  long *plVar6;
  int iVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  undefined ****ppppuVar10;
  undefined ***pppuVar11;
  code **ppcVar12;
  undefined ***pppuVar13;
  undefined4 uVar14;
  code **ppcVar15;
  long lVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined *puStack_288;
  char *pcStack_280;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined8 auStack_248 [2];
  char cStack_231;
  long **applStack_230 [2];
  char cStack_219;
  long *plStack_218;
  long *plStack_210;
  char cStack_201;
  undefined **ppuStack_200;
  code *pcStack_1f8;
  undefined **ppuStack_1f0;
  undefined ***pppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined ****ppppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined ***pppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined ***pppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined ***pppuStack_1a8;
  long lStack_1a0;
  undefined ***pppuStack_130;
  undefined ****ppppuStack_128;
  code *pcStack_120;
  undefined **ppuStack_118;
  char cStack_109;
  undefined **appuStack_108 [2];
  char cStack_f1;
  undefined ***apppuStack_f0 [2];
  char cStack_d9;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined **appuStack_c0 [2];
  char cStack_a9;
  undefined ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined ****ppppuStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined ***pppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = param_2;
  puVar9 = param_3;
  ppppuVar10 = param_4;
  pppuVar11 = param_5;
  ppcVar12 = param_6;
  pppuVar13 = param_7;
  ppcVar15 = param_8;
  if (param_2 != (undefined ***)0x0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0xc0);
    func_0x00010002d4d8(&ppuStack_88,"snap_access_token");
    puVar9 = (undefined8 *)&UNK_10dd5b8f9;
    lVar16 = param_1 + 0x98;
    ppppuVar10 = &pppuStack_a8;
    pppuVar11 = appuStack_c0;
    pppuStack_a8 = &ppuStack_88;
    FUN_104c5bc74(lVar16,&ppuStack_88,&UNK_10dd5b8f9,ppppuVar10,pppuVar11);
    func_0x000100042ef0(lVar16 + 0x28,param_2);
    __ZNSt3__15mutex6unlockEv(param_1 + 0xc0);
  }
  uVar14 = SUB84(ppcVar15,0);
  ppuStack_88 = &PTR_DAT_1107eda88;
  uStack_80 = param_9;
  uStack_78 = param_11;
  pppuStack_70 = &ppuStack_88;
  pppuStack_a8 = (undefined ***)&PTR_DAT_1107edb18;
  uStack_a0 = param_10;
  uStack_98 = param_11;
  ppppuStack_90 = &pppuStack_a8;
  if ((int)param_6 == 1) {
    ppuVar18 = *(undefined ***)(param_1 + 0x38);
    func_0x00010002d4d8(appuStack_c0,param_2);
    func_0x00010002d4d8(&uStack_d8,param_3);
    func_0x00010002d4d8(apppuStack_f0,param_4);
    pppuVar8 = appuStack_c0;
    puVar9 = &uStack_d8;
    ppppuVar10 = apppuStack_f0;
    pppuVar13 = &ppuStack_88;
    uVar14 = SUB84(&pppuStack_a8,0);
    (**(code **)(*ppuVar18 + 0x18))(ppuVar18,pppuVar8,puVar9,ppppuVar10,param_7,param_8,pppuVar13);
LAB_104c5b1bc:
    pppuVar11 = param_7;
    ppcVar12 = param_8;
    if (cStack_d9 < '\0') {
      __ZdlPv(apppuStack_f0[0]);
      pppuVar11 = param_7;
      ppcVar12 = param_8;
    }
    if (lStack_c8 < 0) {
      __ZdlPv(uStack_d8);
    }
    if (cStack_a9 < '\0') {
      __ZdlPv(appuStack_c0[0]);
    }
    if (ppppuStack_90 == &pppuStack_a8) goto LAB_104c5b20c;
    if (ppppuStack_90 != (undefined ****)0x0) {
      lVar16 = 0x28;
      goto LAB_104c5b210;
    }
  }
  else {
    if ((int)param_6 == 0) {
      ppuVar18 = *(undefined ***)(param_1 + 0x38);
      func_0x00010002d4d8(appuStack_c0,param_2);
      uStack_d8 = 0;
      uStack_d0 = 0;
      lStack_c8 = 0;
      func_0x00010002d4d8(apppuStack_f0,param_3);
      func_0x00010002d4d8(appuStack_108,param_4);
      func_0x00010002d4d8(&pcStack_120,param_5);
      ppppuStack_128 = &pppuStack_a8;
      pppuStack_130 = &ppuStack_88;
      pppuVar8 = appuStack_c0;
      puVar9 = &uStack_d8;
      ppppuVar10 = apppuStack_f0;
      pppuVar11 = appuStack_108;
      ppcVar12 = &pcStack_120;
      pppuVar13 = param_7;
      (**(code **)(*ppuVar18 + 0x10))
                (ppuVar18,pppuVar8,puVar9,ppppuVar10,pppuVar11,ppcVar12,param_7);
      uVar14 = SUB84(param_8,0);
      param_7 = pppuVar11;
      param_8 = ppcVar12;
      if (cStack_109 < '\0') {
        __ZdlPv(pcStack_120);
        param_7 = pppuVar11;
        param_8 = ppcVar12;
      }
      if (cStack_f1 < '\0') {
        __ZdlPv(appuStack_108[0]);
      }
      goto LAB_104c5b1bc;
    }
    ppuVar18 = (undefined **)0xffffffff;
LAB_104c5b20c:
    lVar16 = 0x20;
LAB_104c5b210:
    (**(code **)((long)*ppppuStack_90 + lVar16))();
  }
  pppuVar4 = pppuStack_70;
  if (pppuStack_70 == &ppuStack_88) {
    lVar16 = 0x20;
LAB_104c5b23c:
    (**(code **)((long)*pppuStack_70 + lVar16))();
  }
  else if (pppuStack_70 != (undefined ***)0x0) {
    lVar16 = 0x28;
    goto LAB_104c5b23c;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar18;
  }
  ___stack_chk_fail();
  if (cStack_109 < '\0') {
    __ZdlPv(pcStack_120);
  }
  if (cStack_f1 < '\0') {
    __ZdlPv(appuStack_108[0]);
  }
  if (cStack_d9 < '\0') {
    __ZdlPv(apppuStack_f0[0]);
  }
  if (lStack_c8 < 0) {
    __ZdlPv(uStack_d8);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  if (ppppuStack_90 == &pppuStack_a8) {
    lVar16 = 0x20;
LAB_104c5b330:
    (**(code **)((long)*ppppuStack_90 + lVar16))();
  }
  else if (ppppuStack_90 != (undefined ****)0x0) {
    lVar16 = 0x28;
    goto LAB_104c5b330;
  }
  if (pppuStack_70 == &ppuStack_88) {
    lVar16 = 0x20;
LAB_104c5b35c:
    (**(code **)((long)*pppuStack_70 + lVar16))();
  }
  else if (pppuStack_70 != (undefined ***)0x0) {
    lVar16 = 0x28;
    goto LAB_104c5b35c;
  }
  __Unwind_Resume();
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (pppuVar4[0xd] == (undefined **)0x0) {
    ppuVar18 = &PTR_PTR_1130a8a50;
    ppuVar19 = ppuVar18;
    func_0x00010ae079a0(0);
    func_0x00010ae07cd4();
    iVar7 = (int)ppuVar18;
    if (pcStack_120 != (code *)0x0) {
      pcStack_280 = "Game stream must be started before chat stream";
      puStack_288._0_4_ = 3;
      iVar7 = (int)&puStack_288;
      (*pcStack_120)();
      ppuVar19 = ppuStack_118;
    }
    goto LAB_104c5b85c;
  }
  FUN_104c5a118(&puStack_288,pppuVar4);
  if (ppcVar12 != (code **)0x0) {
    func_0x00010002d4d8(&plStack_218,"lenscore_version");
    puVar5 = (undefined4 *)&puStack_288;
    applStack_230[0] = &plStack_218;
    FUN_104c5bc74(puVar5,&plStack_218,&UNK_10dd5b8f9,applStack_230,auStack_248);
    func_0x000100042ef0(puVar5 + 10,ppcVar12);
    if (cStack_201 < '\0') {
      __ZdlPv(plStack_218);
    }
  }
  ppuVar18 = (undefined **)0x3e8;
  __Znwm();
  ppuVar18[1] = (undefined *)0x0;
  ppuVar18[2] = (undefined *)0x0;
  *ppuVar18 = (undefined *)&PTR_DAT_1107edb98;
  func_0x00010002d4d8(&plStack_218,pppuVar8);
  func_0x00010002d4d8(applStack_230,ppppuVar10);
  func_0x00010002d4d8(auStack_248,pppuVar11);
  ppuStack_258 = pppuVar4[0xe];
  ppuStack_260 = pppuVar4[0xd];
  if (pppuVar4[0xe] != (undefined **)0x0) {
    ppuVar19 = pppuVar4[0xe] + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar3) {
        *ppuVar19 = *ppuVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_104c568dc(ppuVar18 + 3,&plStack_218,applStack_230,auStack_248,pppuVar13,&puStack_288,
                &ppuStack_260);
  ppuVar19 = ppuStack_258;
  if (ppuStack_258 != (undefined **)0x0) {
    ppuVar20 = ppuStack_258 + 1;
    do {
      puVar17 = *ppuVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar3) {
        *ppuVar20 = puVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar17 == (undefined *)0x0) {
      (**(code **)(*ppuStack_258 + 0x10))(ppuStack_258);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
    }
  }
  if (cStack_231 < '\0') {
    __ZdlPv(auStack_248[0]);
  }
  if (cStack_219 < '\0') {
    __ZdlPv(applStack_230[0]);
  }
  if (cStack_201 < '\0') {
    __ZdlPv(plStack_218);
  }
  ppuVar19 = pppuVar4[10];
  pppuVar4[9] = ppuVar18 + 3;
  pppuVar4[10] = ppuVar18;
  if (ppuVar19 != (undefined **)0x0) {
    ppuVar18 = ppuVar19 + 1;
    do {
      puVar17 = *ppuVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
      if (bVar3) {
        *ppuVar18 = puVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar17 == (undefined *)0x0) {
      (**(code **)(*ppuVar19 + 0x10))(ppuVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
    }
  }
  plVar6 = (long *)0x98;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_1107edbe8;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  plVar6[10] = 0;
  plVar6[9] = 0;
  plVar6[0xc] = 0;
  plVar6[0xb] = 0;
  plVar6[0xe] = 0;
  plVar6[0xd] = 0;
  plVar6[0x10] = 0;
  plVar6[0xf] = 0;
  plVar6[0x12] = 0;
  plVar6[0x11] = 0;
  plStack_218 = plVar6 + 3;
  plVar6[4] = 0;
  *plStack_218 = 0;
  plStack_210 = plVar6;
  FUN_104c56990(pppuVar4 + 0xb,&plStack_218);
  plVar6 = plStack_210;
  if (plStack_210 != (long *)0x0) {
    plVar1 = plStack_210 + 1;
    do {
      lVar16 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_210 + 0x10))(plStack_210);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  ppuVar18 = pppuVar4[9];
  ppuStack_298 = pppuVar4[0xc];
  ppuStack_2a0 = pppuVar4[0xb];
  if (pppuVar4[0xc] != (undefined **)0x0) {
    ppuVar19 = pppuVar4[0xc] + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar3) {
        *ppuVar19 = *ppuVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_104c56990(ppuVar18 + 0x74,&ppuStack_2a0);
  ppuVar18 = ppuStack_298;
  if (ppuStack_298 != (undefined **)0x0) {
    ppuVar19 = ppuStack_298 + 1;
    do {
      puVar17 = *ppuVar19;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar3) {
        *ppuVar19 = puVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar17 == (undefined *)0x0) {
      (**(code **)(*ppuStack_298 + 0x10))(ppuStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    }
  }
  ppuVar20 = pppuVar4[0xb];
  ppuStack_1c0 = &PTR_DAT_1107edc38;
  pppuStack_1b8 = pppuStack_130;
  ppuStack_1b0 = ppuStack_118;
  pppuStack_1a8 = &ppuStack_1c0;
  ppuVar18 = ppuVar20 + 0xc;
  ppuVar19 = (undefined **)ppuVar20[0xf];
  ppuVar20[0xf] = (undefined *)0x0;
  if (ppuVar19 == ppuVar18) {
    lVar16 = 0x20;
LAB_104c5b6fc:
    (**(code **)(*ppuVar19 + lVar16))();
    if (pppuStack_1a8 == (undefined ***)0x0) {
      ppuVar20[0xf] = (undefined *)0x0;
    }
    else {
      if (pppuStack_1a8 == &ppuStack_1c0) goto LAB_104c5b734;
      ppuVar20[0xf] = (undefined *)pppuStack_1a8;
      pppuStack_1a8 = (undefined ***)0x0;
    }
  }
  else {
    if (ppuVar19 != (undefined **)0x0) {
      lVar16 = 0x28;
      goto LAB_104c5b6fc;
    }
LAB_104c5b734:
    ppuVar20[0xf] = (undefined *)ppuVar18;
    (*(code *)(*pppuStack_1a8)[3])(pppuStack_1a8,ppuVar18);
    if (pppuStack_1a8 == &ppuStack_1c0) {
      lVar16 = 0x20;
    }
    else {
      if (pppuStack_1a8 == (undefined ***)0x0) goto LAB_104c5b774;
      lVar16 = 0x28;
    }
    (**(code **)((long)*pppuStack_1a8 + lVar16))();
  }
LAB_104c5b774:
  ppuStack_1e0 = &PTR_DAT_1107edcc8;
  ppppuStack_1d8 = ppppuStack_128;
  ppuStack_1d0 = ppuStack_118;
  pppuStack_1c8 = &ppuStack_1e0;
  func_0x000104c5ba1c(pppuVar4[0xb] + 4,&ppuStack_1e0);
  if (pppuStack_1c8 == &ppuStack_1e0) {
    lVar16 = 0x20;
LAB_104c5b7b8:
    (**(code **)((long)*pppuStack_1c8 + lVar16))();
  }
  else if (pppuStack_1c8 != (undefined ***)0x0) {
    lVar16 = 0x28;
    goto LAB_104c5b7b8;
  }
  ppuStack_200 = &PTR_DAT_1107edd48;
  pcStack_1f8 = pcStack_120;
  ppuStack_1f0 = ppuStack_118;
  pppuStack_1e8 = &ppuStack_200;
  func_0x000104c5baa8(pppuVar4[0xb] + 8,&ppuStack_200);
  if (pppuStack_1e8 == &ppuStack_200) {
    lVar16 = 0x20;
LAB_104c5b804:
    (**(code **)((long)*pppuStack_1e8 + lVar16))();
  }
  else if (pppuStack_1e8 != (undefined ***)0x0) {
    lVar16 = 0x28;
    goto LAB_104c5b804;
  }
  func_0x00010002d4d8(&plStack_218,puVar9);
  ppuVar18 = pppuVar4[9];
  iVar7 = (int)&plStack_218;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(ppuVar18 + 0x76);
  *(undefined4 *)(ppuVar18 + 0x79) = uVar14;
  FUN_104c53560(pppuVar4[9]);
  FUN_104c53794(pppuVar4[9]);
  if (cStack_201 < '\0') {
    __ZdlPv(plStack_218);
  }
  ppuVar19 = &puStack_288;
  func_0x000104c4f944();
LAB_104c5b85c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return ppuVar19;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    FUN_104bd46a0();
    func_0x000104c4f944(&puStack_288);
  }
  __Unwind_Resume();
  puVar17 = ppuVar19[9];
  if (puVar17 != (undefined *)0x0) {
    FUN_104c56028(puVar17 + 0x2b8,puVar17 + 0x300);
    puVar17[0x2f9] = 1;
    if (((puVar17[0x2f8] & 1) == 0) && (puVar17[0x2f8] = 1, (puVar17[0x370] & 1) == 0)) {
      if (*(int *)(puVar17 + 0x2b0) == 2) {
        FUN_104c54564(*(undefined8 *)(puVar17 + 0x2a0),3);
      }
      else {
        FUN_104ae33d8(puVar17 + 8);
      }
    }
    __ZNSt3__15mutex6unlockEv(puVar17 + 0x2b8);
    ppuVar18 = (undefined **)(puVar17 + 0x300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(ppuVar18);
    return ppuVar18;
  }
  return (undefined **)0x0;
}



/* Entry: 104c5b398; end: 104c5b953;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104c5b398(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,code *param_11,undefined **param_12)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_170;
  long *plStack_168;
  undefined4 auStack_158 [2];
  char *pcStack_150;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 auStack_118 [2];
  char cStack_101;
  long **applStack_100 [2];
  char cStack_e9;
  long *plStack_e8;
  long *plStack_e0;
  char cStack_d1;
  undefined **ppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined ***pppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined ***pppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x68) == 0) {
    ppuVar3 = &PTR_PTR_1130a8a50;
    ppuVar6 = ppuVar3;
    func_0x00010ae079a0(0);
    func_0x00010ae07cd4();
    iVar8 = (int)ppuVar3;
    if (param_11 != (code *)0x0) {
      pcStack_150 = "Game stream must be started before chat stream";
      auStack_158[0] = 3;
      iVar8 = (int)auStack_158;
      (*param_11)();
      ppuVar6 = param_12;
    }
    goto LAB_104c5b85c;
  }
  FUN_104c5a118(auStack_158,param_1);
  if (param_6 != 0) {
    func_0x00010002d4d8(&plStack_e8,"lenscore_version");
    ppuVar3 = (undefined **)auStack_158;
    applStack_100[0] = &plStack_e8;
    FUN_104c5bc74(ppuVar3,&plStack_e8,&UNK_10dd5b8f9,applStack_100,auStack_118);
    func_0x000100042ef0(ppuVar3 + 5,param_6);
    if (cStack_d1 < '\0') {
      __ZdlPv(plStack_e8);
    }
  }
  puVar4 = (undefined8 *)0x3e8;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1107edb98;
  func_0x00010002d4d8(&plStack_e8,param_2);
  func_0x00010002d4d8(applStack_100,param_4);
  func_0x00010002d4d8(auStack_118,param_5);
  plStack_128 = *(long **)(param_1 + 0x70);
  uStack_130 = *(undefined8 *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar11 = (long *)(*(long *)(param_1 + 0x70) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104c568dc(puVar4 + 3,&plStack_e8,applStack_100,auStack_118,param_7,auStack_158,&uStack_130);
  plVar11 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar5 = plStack_128 + 1;
    do {
      lVar10 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  if (cStack_e9 < '\0') {
    __ZdlPv(applStack_100[0]);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(plStack_e8);
  }
  plVar11 = *(long **)(param_1 + 0x50);
  *(undefined8 **)(param_1 + 0x48) = puVar4 + 3;
  *(undefined8 **)(param_1 + 0x50) = puVar4;
  if (plVar11 != (long *)0x0) {
    plVar5 = plVar11 + 1;
    do {
      lVar10 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = (long *)0x98;
  __Znwm();
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&PTR_DAT_1107edbe8;
  plVar11[6] = 0;
  plVar11[5] = 0;
  plVar11[8] = 0;
  plVar11[7] = 0;
  plVar11[10] = 0;
  plVar11[9] = 0;
  plVar11[0xc] = 0;
  plVar11[0xb] = 0;
  plVar11[0xe] = 0;
  plVar11[0xd] = 0;
  plVar11[0x10] = 0;
  plVar11[0xf] = 0;
  plVar11[0x12] = 0;
  plVar11[0x11] = 0;
  plStack_e8 = plVar11 + 3;
  plVar11[4] = 0;
  *plStack_e8 = 0;
  plStack_e0 = plVar11;
  FUN_104c56990(param_1 + 0x58,&plStack_e8);
  plVar11 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar5 = plStack_e0 + 1;
    do {
      lVar10 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  lVar10 = *(long *)(param_1 + 0x48);
  plStack_168 = *(long **)(param_1 + 0x60);
  uStack_170 = *(undefined8 *)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar11 = (long *)(*(long *)(param_1 + 0x60) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104c56990(lVar10 + 0x3a0,&uStack_170);
  plVar11 = plStack_168;
  if (plStack_168 != (long *)0x0) {
    plVar5 = plStack_168 + 1;
    do {
      lVar10 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  lVar10 = *(long *)(param_1 + 0x58);
  ppuStack_90 = &PTR_DAT_1107edc38;
  uStack_88 = param_9;
  ppuStack_80 = param_12;
  pppuStack_78 = &ppuStack_90;
  plVar11 = (long *)(lVar10 + 0x60);
  plVar5 = *(long **)(lVar10 + 0x78);
  *(undefined8 *)(lVar10 + 0x78) = 0;
  if (plVar5 == plVar11) {
    lVar9 = 0x20;
LAB_104c5b6fc:
    (**(code **)(*plVar5 + lVar9))();
    if (pppuStack_78 == (undefined ***)0x0) {
      *(undefined8 *)(lVar10 + 0x78) = 0;
    }
    else {
      if (pppuStack_78 == &ppuStack_90) goto LAB_104c5b734;
      *(undefined ****)(lVar10 + 0x78) = pppuStack_78;
      pppuStack_78 = (undefined ***)0x0;
    }
  }
  else {
    if (plVar5 != (long *)0x0) {
      lVar9 = 0x28;
      goto LAB_104c5b6fc;
    }
LAB_104c5b734:
    *(long **)(lVar10 + 0x78) = plVar11;
    (*(code *)(*pppuStack_78)[3])(pppuStack_78,plVar11);
    if (pppuStack_78 == &ppuStack_90) {
      lVar10 = 0x20;
    }
    else {
      if (pppuStack_78 == (undefined ***)0x0) goto LAB_104c5b774;
      lVar10 = 0x28;
    }
    (**(code **)((long)*pppuStack_78 + lVar10))();
  }
LAB_104c5b774:
  ppuStack_b0 = &PTR_DAT_1107edcc8;
  uStack_a8 = param_10;
  ppuStack_a0 = param_12;
  pppuStack_98 = &ppuStack_b0;
  func_0x000104c5ba1c(*(long *)(param_1 + 0x58) + 0x20,&ppuStack_b0);
  if (pppuStack_98 == &ppuStack_b0) {
    lVar10 = 0x20;
LAB_104c5b7b8:
    (**(code **)((long)*pppuStack_98 + lVar10))();
  }
  else if (pppuStack_98 != (undefined ***)0x0) {
    lVar10 = 0x28;
    goto LAB_104c5b7b8;
  }
  ppuStack_d0 = &PTR_DAT_1107edd48;
  pcStack_c8 = param_11;
  ppuStack_c0 = param_12;
  pppuStack_b8 = &ppuStack_d0;
  func_0x000104c5baa8(*(long *)(param_1 + 0x58) + 0x40,&ppuStack_d0);
  if (pppuStack_b8 == &ppuStack_d0) {
    lVar10 = 0x20;
LAB_104c5b804:
    (**(code **)((long)*pppuStack_b8 + lVar10))();
  }
  else if (pppuStack_b8 != (undefined ***)0x0) {
    lVar10 = 0x28;
    goto LAB_104c5b804;
  }
  func_0x00010002d4d8(&plStack_e8,param_3);
  lVar10 = *(long *)(param_1 + 0x48);
  iVar8 = (int)&plStack_e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar10 + 0x3b0);
  *(undefined4 *)(lVar10 + 0x3c8) = param_8;
  FUN_104c53560(*(undefined8 *)(param_1 + 0x48));
  FUN_104c53794(*(undefined8 *)(param_1 + 0x48));
  if (cStack_d1 < '\0') {
    __ZdlPv(plStack_e8);
  }
  ppuVar6 = (undefined **)auStack_158;
  func_0x000104c4f944();
LAB_104c5b85c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    FUN_104bd46a0();
    func_0x000104c4f944(auStack_158);
  }
  __Unwind_Resume();
  puVar7 = ppuVar6[9];
  if (puVar7 == (undefined *)0x0) {
    return;
  }
  FUN_104c56028(puVar7 + 0x2b8,puVar7 + 0x300);
  puVar7[0x2f9] = 1;
  if (((puVar7[0x2f8] & 1) == 0) && (puVar7[0x2f8] = 1, (puVar7[0x370] & 1) == 0)) {
    if (*(int *)(puVar7 + 0x2b0) == 2) {
      FUN_104c54564(*(undefined8 *)(puVar7 + 0x2a0),3);
    }
    else {
      FUN_104ae33d8(puVar7 + 8);
    }
  }
  __ZNSt3__15mutex6unlockEv(puVar7 + 0x2b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(puVar7 + 0x300);
  return;
}



/* Entry: 104c5b954; end: 104c5b97b;  */

void FUN_104c5b954(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    FUN_104c56028(lVar1 + 0x2b8,lVar1 + 0x300);
    *(undefined1 *)(lVar1 + 0x2f9) = 1;
    if (((*(byte *)(lVar1 + 0x2f8) & 1) == 0) &&
       (*(undefined1 *)(lVar1 + 0x2f8) = 1, (*(byte *)(lVar1 + 0x370) & 1) == 0)) {
      if (*(int *)(lVar1 + 0x2b0) == 2) {
        FUN_104c54564(*(undefined8 *)(lVar1 + 0x2a0),3);
      }
      else {
        FUN_104ae33d8(lVar1 + 8);
      }
    }
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x2b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar1 + 0x300);
    return;
  }
  return;
}



/* Entry: 104c5b97c; end: 104c5b98f;  */

void FUN_104c5b97c(void)

{
  func_0x000104c5bb34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c5b990; end: 104c5bc73;  */

long * FUN_104c5b990(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_104c5b9d0;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_104c5b9d0:
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    param_1[3] = 0;
  }
  else if (lVar2 == param_2) {
    param_1[3] = (long)param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    param_1[3] = lVar2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 104c5bc74; end: 104c5bec3;  */

undefined1  [16]
FUN_104c5bc74(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  plVar4 = param_1;
  func_0x000100032e5c();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar4);
    }
    else {
      unaff_x25 = plVar4;
      if (plVar8 <= plVar4) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar4 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar4 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar4) {
          plVar3 = param_1;
          FUN_104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_104c5be84;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  plVar7 = (long *)0x40;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar4;
  plVar3 = (long *)*param_4;
  lVar10 = plVar3[1];
  lVar6 = *plVar3;
  plVar7[4] = plVar3[2];
  plVar7[3] = lVar10;
  plVar7[2] = lVar6;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[5] = 0;
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_104c4f9b8(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar4);
    }
    else {
      unaff_x25 = plVar4;
      if (plVar8 <= plVar4) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar4 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar4 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + (long)unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar7 = *plVar4;
    *plVar4 = (long)plVar7;
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar4;
    if (*plVar7 == 0) goto LAB_104c5be74;
    plVar4 = *(long **)(*plVar7 + 8);
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      plVar4 = (long *)((ulong)plVar4 & (long)plVar8 - 1U);
    }
    else if (plVar8 <= plVar4) {
      uVar9 = 0;
      if (plVar8 != (long *)0x0) {
        uVar9 = (ulong)plVar4 / (ulong)plVar8;
      }
      plVar4 = (long *)((long)plVar4 - uVar9 * (long)plVar8);
    }
    plVar4 = (long *)(*param_1 + (long)plVar4 * 8);
  }
  else {
    *plVar7 = *plVar4;
  }
  *plVar4 = (long)plVar7;
LAB_104c5be74:
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_104c5be84:
  auVar11._8_8_ = uVar1;
  auVar11._0_8_ = plVar7;
  return auVar11;
}



/* Entry: 104c5bec4; end: 104c5bed3;  */

void FUN_104c5bec4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ecba8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c5bed4; end: 104c5bef3;  */

void FUN_104c5bed4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ecba8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c5bef4; end: 104c5bf13;  */

void FUN_104c5bef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c5befc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104c5bf14; end: 104c5bf33;  */

void FUN_104c5bf14(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107ecbf8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


