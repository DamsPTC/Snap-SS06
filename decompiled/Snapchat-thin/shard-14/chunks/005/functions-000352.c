/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b331384; end: 10b3314cf;  */

long FUN_10b331384(long param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    uVar6 = 0;
    do {
      cVar1 = *(char *)(param_1 + 0x59 + uVar6);
      if (cVar1 == '\b') {
        plVar2 = *(long **)(param_1 + 0x70 + uVar6 * 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
          cVar1 = *(char *)(param_1 + 0x59 + uVar6);
          goto LAB_10b331408;
        }
      }
      else {
LAB_10b331408:
        if ((cVar1 == '\t') &&
           (puVar5 = *(undefined8 **)(param_1 + 0x70 + uVar6 * 8), puVar5 != (undefined8 *)0x0)) {
          if (puVar5[0x17] != 0) {
            plVar2 = (long *)puVar5[0x16];
            plVar4 = *(long **)(puVar5[0x15] + 8);
            *(long **)(*plVar2 + 8) = plVar4;
            *plVar4 = *plVar2;
            puVar5[0x17] = 0;
            while (plVar2 != puVar5 + 0x15) {
              plVar2 = (long *)plVar2[1];
              __ZdlPv();
            }
          }
          *puVar5 = &PTR_DAT_110cd71d0;
          lVar3 = puVar5[7];
          puVar5[7] = 0;
          if (lVar3 != 0) {
            __ZdaPv();
          }
          plVar2 = (long *)puVar5[4];
          if (plVar2 != (long *)0x0) {
            plVar7 = (long *)puVar5[5];
            plVar4 = plVar2;
            if (plVar7 != plVar2) {
              do {
                plVar7 = plVar7 + -3;
                lVar3 = *plVar7;
                *plVar7 = 0;
                if (lVar3 != 0) {
                  __ZdaPv();
                }
              } while (plVar7 != plVar2);
              plVar4 = (long *)puVar5[4];
            }
            puVar5[5] = plVar2;
            __ZdlPv(plVar4);
          }
          __ZdlPv(puVar5);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(param_1 + 0x58));
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    _free();
  }
  return param_1;
}



/* Entry: 10b3314d0; end: 10b33170f;  */

void FUN_10b3314d0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = uVar5;
  _strlen(uVar5);
  func_0x000107c2ca60(param_2,uVar5,uVar3);
  func_0x000107c2ca60();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  uVar3 = uVar5;
  _strlen(uVar5);
  func_0x000107c2ca60(param_2,uVar5,uVar3);
  func_0x000107c2ca60(param_2,&UNK_10f748a25,1);
  if ((*(char *)(param_1 + 0x58) != '\0') && (*(long *)(param_1 + 0x60) != 0)) {
    func_0x000107c2ca60(param_2,&UNK_10f748a27,3);
    if ((*(char *)(param_1 + 0x58) != '\0') && (lVar6 = *(long *)(param_1 + 0x60), lVar6 != 0)) {
      lVar4 = lVar6;
      _strlen(lVar6);
      func_0x000107c2ca60(param_2,lVar6,lVar4);
      func_0x000107c2ca60();
      ppuStack_78 = (undefined8 ***)0x0;
      uStack_70 = 0;
      uStack_68 = 0;
      FUN_10b32d91c(param_1 + 0x70,*(undefined1 *)(param_1 + 0x59),1,&ppuStack_78);
      uVar8 = uStack_70;
      pppuVar2 = (undefined8 ***)ppuStack_78;
      if (-1 < (long)uStack_68) {
        uVar8 = uStack_68 >> 0x38;
        pppuVar2 = &ppuStack_78;
      }
      func_0x000107c2ca60(param_2,pppuVar2,uVar8);
      if ((long)uStack_68 < 0) {
        __ZdlPv(ppuStack_78);
      }
      if (1 < *(byte *)(param_1 + 0x58)) {
        puVar7 = (undefined1 *)(param_1 + 0x5a);
        lVar6 = param_1 + 0x78;
        uVar8 = 1;
        do {
          if (*(long *)(lVar6 + -0x10) == 0) break;
          func_0x000107c2ca60(param_2,&UNK_10f748a2b,2);
          uVar5 = *(undefined8 *)(lVar6 + -0x10);
          uVar3 = uVar5;
          _strlen(uVar5);
          func_0x000107c2ca60(param_2,uVar5,uVar3);
          func_0x000107c2ca60();
          ppuStack_78 = (undefined8 ***)0x0;
          uStack_70 = 0;
          uStack_68 = 0;
          FUN_10b32d91c(lVar6,*puVar7,1,&ppuStack_78);
          uVar1 = uStack_70;
          pppuVar2 = (undefined8 ***)ppuStack_78;
          if (-1 < (long)uStack_68) {
            uVar1 = uStack_68 >> 0x38;
            pppuVar2 = &ppuStack_78;
          }
          func_0x000107c2ca60(param_2,pppuVar2,uVar1);
          if ((long)uStack_68 < 0) {
            __ZdlPv(ppuStack_78);
          }
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 1;
          lVar6 = lVar6 + 8;
        } while (uVar8 < *(byte *)(param_1 + 0x58));
      }
    }
    func_0x000107c2ca60(param_2,&UNK_10f748a21,1);
  }
  return;
}



/* Entry: 10b331710; end: 10b3f4027;  */

void FUN_10b331710(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2[2];
  lVar2 = *param_2;
  param_1[1] = param_1[1] + param_2[1];
  *param_1 = *param_1 + lVar2;
  param_1[2] = param_1[2] + lVar1;
  lVar1 = param_2[5];
  lVar2 = param_2[3];
  param_1[4] = param_1[4] + param_2[4];
  param_1[3] = param_1[3] + lVar2;
  param_1[5] = param_1[5] + lVar1;
  lVar1 = param_2[8];
  lVar2 = param_2[6];
  param_1[7] = param_1[7] + param_2[7];
  param_1[6] = param_1[6] + lVar2;
  param_1[8] = param_1[8] + lVar1;
  lVar1 = param_2[0xb];
  lVar2 = param_2[9];
  param_1[10] = param_1[10] + param_2[10];
  param_1[9] = param_1[9] + lVar2;
  param_1[0xb] = param_1[0xb] + lVar1;
  lVar1 = param_2[0xe];
  lVar2 = param_2[0xc];
  param_1[0xd] = param_1[0xd] + param_2[0xd];
  param_1[0xc] = param_1[0xc] + lVar2;
  param_1[0xe] = param_1[0xe] + lVar1;
  lVar1 = param_2[0x11];
  lVar2 = param_2[0xf];
  param_1[0x10] = param_1[0x10] + param_2[0x10];
  param_1[0xf] = param_1[0xf] + lVar2;
  param_1[0x11] = param_1[0x11] + lVar1;
  lVar1 = param_2[0x14];
  lVar2 = param_2[0x12];
  param_1[0x13] = param_1[0x13] + param_2[0x13];
  param_1[0x12] = param_1[0x12] + lVar2;
  param_1[0x14] = param_1[0x14] + lVar1;
  lVar1 = param_2[0x17];
  lVar2 = param_2[0x15];
  param_1[0x16] = param_1[0x16] + param_2[0x16];
  param_1[0x15] = param_1[0x15] + lVar2;
  param_1[0x17] = param_1[0x17] + lVar1;
  lVar1 = param_2[0x1a];
  lVar2 = param_2[0x18];
  param_1[0x19] = param_1[0x19] + param_2[0x19];
  param_1[0x18] = param_1[0x18] + lVar2;
  param_1[0x1a] = param_1[0x1a] + lVar1;
  lVar1 = param_2[0x1d];
  lVar2 = param_2[0x1b];
  param_1[0x1c] = param_1[0x1c] + param_2[0x1c];
  param_1[0x1b] = param_1[0x1b] + lVar2;
  param_1[0x1d] = param_1[0x1d] + lVar1;
  lVar1 = param_2[0x20];
  lVar2 = param_2[0x1e];
  param_1[0x1f] = param_1[0x1f] + param_2[0x1f];
  param_1[0x1e] = param_1[0x1e] + lVar2;
  param_1[0x20] = param_1[0x20] + lVar1;
  lVar1 = param_2[0x23];
  lVar2 = param_2[0x21];
  param_1[0x22] = param_1[0x22] + param_2[0x22];
  param_1[0x21] = param_1[0x21] + lVar2;
  param_1[0x23] = param_1[0x23] + lVar1;
  lVar1 = param_2[0x26];
  lVar2 = param_2[0x24];
  param_1[0x25] = param_1[0x25] + param_2[0x25];
  param_1[0x24] = param_1[0x24] + lVar2;
  param_1[0x26] = param_1[0x26] + lVar1;
  lVar1 = param_2[0x29];
  lVar2 = param_2[0x27];
  param_1[0x28] = param_1[0x28] + param_2[0x28];
  param_1[0x27] = param_1[0x27] + lVar2;
  param_1[0x29] = param_1[0x29] + lVar1;
  return;
}



/* Entry: 10b3f4028; end: 10b3f402b;  */

void FUN_10b3f4028(void)

{
  return;
}



/* Entry: 10b3f402c; end: 10b3f40f7;  */

undefined8 * FUN_10b3f402c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110ce00d8;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    *(undefined1 *)(param_1 + 4) = 1;
    uRam000000011383cb58 = 0;
  }
  func_0x000107c2eb50(param_1 + 0x1a,0);
  if ((param_1[0x16] != 0) && (param_1[0x17] != 0)) {
    _SCNetworkReachabilityUnscheduleFromRunLoop
              (param_1[0x16],param_1[0x17],*(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
  }
  func_0x00010b3f4398(param_1 + 0x1a);
  func_0x00010b3f4370(param_1 + 0x17);
  func_0x00010b3f443c();
  func_0x00010b3f4410();
  func_0x00010b3f4418();
  *param_1 = &PTR_DAT_110cd75c0;
  plVar2 = param_1 + 3;
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    func_0x00010b34a89c();
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    *(undefined1 *)(param_1 + 4) = 1;
    uRam000000011383cb58 = 0;
  }
  func_0x00010b347954(param_1);
  func_0x00010b348c6c(plVar2);
  func_0x00010b348c44(param_1 + 2);
  return param_1;
}



/* Entry: 10b3f40f8; end: 10b3f40fb;  */

undefined8 * FUN_10b3f40f8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110ce00d8;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    *(undefined1 *)(param_1 + 4) = 1;
    uRam000000011383cb58 = 0;
  }
  func_0x000107c2eb50(param_1 + 0x1a,0);
  if ((param_1[0x16] != 0) && (param_1[0x17] != 0)) {
    _SCNetworkReachabilityUnscheduleFromRunLoop
              (param_1[0x16],param_1[0x17],*(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
  }
  func_0x00010b3f4398(param_1 + 0x1a);
  func_0x00010b3f4370(param_1 + 0x17);
  func_0x00010b3f443c();
  func_0x00010b3f4410();
  func_0x00010b3f4418();
  *param_1 = &PTR_DAT_110cd75c0;
  plVar2 = param_1 + 3;
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    func_0x00010b34a89c();
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    *(undefined1 *)(param_1 + 4) = 1;
    uRam000000011383cb58 = 0;
  }
  func_0x00010b347954(param_1);
  func_0x00010b348c6c(plVar2);
  func_0x00010b348c44(param_1 + 2);
  return param_1;
}



/* Entry: 10b3f40fc; end: 10b3f410f;  */

void FUN_10b3f40fc(void)

{
  FUN_10b3f402c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b3f4110; end: 10b3f41a3;  */

undefined8 FUN_10b3f4110(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  (*(code *)PTR_DAT_11336f918)();
  if (puRam00000001137f6138 == (undefined *)0x0) {
    uVar1 = 1;
    func_0x000107c2d1b8(1);
    uVar2 = 10;
    func_0x000107c2d540(10);
    puVar3 = &UNK_10f75c5d8;
    func_0x000107c2cb98(&UNK_10f75c5d8,uVar1,uVar2,0x32,1);
    puRam00000001137f6138 = puVar3;
  }
  func_0x000107c2cbac();
  return param_1;
}



/* Entry: 10b3f41a4; end: 10b3f42d3;  */

void FUN_10b3f41a4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x9;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [288];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 8);
  _CFRunLoopGetCurrent();
  if (*(long *)(lVar4 + 0xb8) != 0) {
    _CFRelease();
  }
  *(long *)(lVar4 + 0xb8) = param_1;
  _CFRetain(param_1);
  uStack_190 = 0;
  puVar3 = (undefined8 *)(lVar4 + 0xb0);
  uVar1 = *puVar3;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_180 = 0;
  lStack_188 = lVar4;
  _SCNetworkReachabilitySetCallback(uVar1,FUN_10b3f42dc,&uStack_190);
  if ((int)uVar1 == 0) {
    func_0x000107c377b0();
    func_0x00010b3f4428(auStack_168);
    func_0x000107c2d0d0(auStack_158,&UNK_10f75c578);
  }
  else {
    puVar2 = *(undefined8 **)(lVar4 + 0xb0);
    _SCNetworkReachabilityScheduleWithRunLoop
              (puVar2,*(undefined8 *)(lVar4 + 0xb8),
               *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
    if ((int)puVar2 != 0) goto LAB_10b3f428c;
    func_0x000107c377b0();
    func_0x00010b3f4428(auStack_168);
    func_0x000107c2d0d0(auStack_158,&UNK_10f75c5a4);
  }
  func_0x000107c2cb34(auStack_168);
  func_0x000107c2eb5c(puVar3,0);
  puVar2 = puVar3;
LAB_10b3f428c:
  func_0x000107c37788(uStack_38);
  if (extraout_x9 == extraout_x8) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c2cb34(auStack_168);
  __Unwind_Resume(puVar2);
  return;
}



/* Entry: 10b3f42d4; end: 10b3f42db;  */

void FUN_10b3f42d4(void)

{
  return;
}



/* Entry: 10b3f42dc; end: 10b3f4343;  */

void FUN_10b3f42dc(undefined8 param_1,int param_2,long param_3)

{
  int iVar1;
  
  func_0x000107c2eb58();
  func_0x000107c2d36c(param_3 + 0x30);
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)(param_3 + 0x24) = param_2;
  _pthread_mutex_unlock();
  if (iVar1 != param_2) {
    func_0x00010b3487bc();
    func_0x00010b347990(param_2 == 6);
    func_0x00010b34891c();
  }
  if (lRam000000011383cb58 != 0) {
    func_0x000107c2d34c();
    func_0x00010b34aa0c(&UNK_10f74a740);
    func_0x000107c2cb24();
    func_0x00010b34ab5c();
    func_0x00010b348934();
    return;
  }
  return;
}



/* Entry: 10b3f4344; end: 10b3f4347;  */

void FUN_10b3f4344(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b3f4348; end: 10b3f43bb;  */

long * FUN_10b3f4348(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10b3f43bc; end: 10b3f43f3;  */

void FUN_10b3f43bc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010b3bbc68(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b3f43f4; end: 10b3f4443;  */

void FUN_10b3f43f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b3f4444; end: 10b3fa5f3;  */

void FUN_10b3f4444(undefined8 *param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  *param_1 = &PTR_DAT_110ce01a0;
  uStack_21 = 0xaa;
  func_0x000107c2cb24(auStack_48,&UNK_10f75c62b,&UNK_10f75c64a,0xa2);
  func_0x000107c2ce68(&uStack_21,auStack_48);
  func_0x00010b320adc(param_1);
  func_0x000107c2ce6c(&uStack_21);
  func_0x000107c2cb68(param_1 + 0x27);
  func_0x00010b3f4540(param_1 + 0x25);
  func_0x00010b320978(param_1);
  return;
}



/* Entry: 10b3fa5f4; end: 10b3fa6a7;  */

undefined8 FUN_10b3fa5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xaaaaaaaaaaaaaaaa;
  func_0x00010b32c0c8(&uStack_28);
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CFStringCreateMutableCopy(uVar1,0,uStack_28);
  uStack_30 = uVar1;
  _CFStringUppercase();
  FUN_10b32c194(auStack_48,uStack_30);
  func_0x000107405414(param_3,auStack_48);
  func_0x000107c28470(auStack_48);
  FUN_10b3fa6a8(&uStack_30);
  func_0x00010b3f3978(&uStack_28);
  return 1;
}



/* Entry: 10b3fa6a8; end: 10b3fa6d3;  */

long * FUN_10b3fa6a8(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10b3fa6d4; end: 10b3ff87b;  */

undefined8 FUN_10b3fa6d4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10e58a460;
  func_0x000107c613d0(&UNK_10e58a460);
  func_0x000107c60c50(param_1,&UNK_10e58a460,puVar1);
  return param_1;
}



/* Entry: 10b3ff87c; end: 10b3ff8cb;  */

undefined8 FUN_10b3ff87c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10b307048(param_1,(long)(int)param_2);
  if ((int)uVar1 != 0) {
    func_0x00010b3fcc08(param_3,param_1,param_2);
  }
  return uVar1;
}



/* Entry: 10b3ff8cc; end: 10b41c45b;  */

void FUN_10b3ff8cc(long param_1)

{
  func_0x00010b3ff958();
  if (param_1 != 0) {
    func_0x000107c37a20();
  }
  return;
}



/* Entry: 10b41c45c; end: 10b41c7bf;  */

ulong FUN_10b41c45c(ulong param_1,byte *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  byte *pbVar22;
  
  if ((param_2 != (byte *)0x0) && (0x3f < param_3)) {
    func_0x00010b41d2e4();
    return param_1 & 0xffffffff;
  }
  uVar19 = param_1 >> 0x10 & 0xffff;
  param_1 = param_1 & 0xffff;
  if (param_3 == 1) {
    param_1 = param_1 + *param_2;
    uVar16 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar16 = param_1;
    }
    uVar20 = (uVar16 + uVar19) * 0x10000;
    uVar17 = uVar20 - 0xfff10000;
    if (uVar16 + uVar19 < 0xfff1) {
      uVar17 = uVar20;
    }
    return uVar17 | uVar16;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  uVar16 = param_1;
  if (param_3 < 0x10) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar19 = uVar16 + *param_2 + uVar19;
      uVar16 = uVar16 + *param_2;
      param_2 = param_2 + 1;
    }
    param_1 = uVar16 - 0xfff1;
    if (uVar16 < 0xfff1) {
      param_1 = uVar16;
    }
    uVar19 = uVar19 % 0xfff1;
LAB_10b41c534:
    return param_1 | uVar19 << 0x10;
  }
  if (param_3 >> 4 < 0x15b) {
LAB_10b41c690:
    do {
      param_3 = param_3 - 0x10;
      lVar1 = param_1 + *param_2;
      lVar2 = lVar1 + (ulong)param_2[1];
      lVar3 = lVar2 + (ulong)param_2[2];
      lVar4 = lVar3 + (ulong)param_2[3];
      lVar5 = lVar4 + (ulong)param_2[4];
      lVar6 = lVar5 + (ulong)param_2[5];
      lVar7 = lVar6 + (ulong)param_2[6];
      lVar8 = lVar7 + (ulong)param_2[7];
      lVar9 = lVar8 + (ulong)param_2[8];
      lVar10 = lVar9 + (ulong)param_2[9];
      lVar11 = lVar10 + (ulong)param_2[10];
      lVar12 = lVar11 + (ulong)param_2[0xb];
      lVar13 = lVar12 + (ulong)param_2[0xc];
      lVar14 = lVar13 + (ulong)param_2[0xd];
      lVar15 = lVar14 + (ulong)param_2[0xe];
      param_1 = lVar15 + (ulong)param_2[0xf];
      uVar19 = lVar1 + uVar19 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
               lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
      param_2 = param_2 + 0x10;
    } while (0xf < param_3);
    if (param_3 == 0) goto LAB_10b41c778;
  }
  else {
    do {
      iVar21 = -0x15b;
      pbVar22 = param_2;
      do {
        lVar1 = param_1 + *pbVar22;
        lVar2 = lVar1 + (ulong)pbVar22[1];
        lVar3 = lVar2 + (ulong)pbVar22[2];
        lVar4 = lVar3 + (ulong)pbVar22[3];
        lVar5 = lVar4 + (ulong)pbVar22[4];
        lVar6 = lVar5 + (ulong)pbVar22[5];
        lVar7 = lVar6 + (ulong)pbVar22[6];
        lVar8 = lVar7 + (ulong)pbVar22[7];
        lVar9 = lVar8 + (ulong)pbVar22[8];
        lVar10 = lVar9 + (ulong)pbVar22[9];
        lVar11 = lVar10 + (ulong)pbVar22[10];
        lVar12 = lVar11 + (ulong)pbVar22[0xb];
        lVar13 = lVar12 + (ulong)pbVar22[0xc];
        lVar14 = lVar13 + (ulong)pbVar22[0xd];
        lVar15 = lVar14 + (ulong)pbVar22[0xe];
        param_1 = lVar15 + (ulong)pbVar22[0xf];
        uVar19 = lVar1 + uVar19 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
                 lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
        pbVar22 = pbVar22 + 0x10;
        bVar18 = iVar21 != -1;
        iVar21 = iVar21 + 1;
      } while (bVar18);
      param_3 = param_3 - 0x15b0;
      param_2 = param_2 + 0x15b0;
      param_1 = param_1 % 0xfff1;
      uVar19 = uVar19 % 0xfff1;
    } while (0x15a < param_3 >> 4);
    if (param_3 == 0) goto LAB_10b41c534;
    if (0xf < param_3) goto LAB_10b41c690;
  }
  do {
    param_1 = param_1 + *param_2;
    uVar19 = param_1 + uVar19;
    param_3 = param_3 - 1;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
LAB_10b41c778:
  return param_1 % 0xfff1 | (uVar19 % 0xfff1) * 0x10000;
}



/* Entry: 10b41c7c0; end: 10b41caeb;  */

uint FUN_10b41c7c0(uint param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  
  if (param_2 != (uint *)0x0) {
    param_1 = ~param_1;
    puVar2 = param_2;
    uVar3 = param_3;
    if ((param_3 != 0) && (((ulong)param_2 & 3) != 0)) {
      puVar2 = (uint *)((long)param_2 + 1);
      param_1 = *(uint *)(&UNK_10e58aae8 + ((ulong)((byte)*param_2 ^ param_1) & 0xff) * 4) ^
                param_1 >> 8;
      uVar3 = param_3 - 1;
      if ((uVar3 != 0) && (((ulong)puVar2 & 3) != 0)) {
        puVar2 = (uint *)((long)param_2 + 2);
        param_1 = *(uint *)(&UNK_10e58aae8 +
                           ((ulong)(*(byte *)((long)param_2 + 1) ^ param_1) & 0xff) * 4) ^
                  param_1 >> 8;
        uVar3 = param_3 - 2;
        if ((uVar3 != 0) && (((ulong)puVar2 & 3) != 0)) {
          puVar2 = (uint *)((long)param_2 + 3);
          param_1 = *(uint *)(&UNK_10e58aae8 +
                             ((ulong)(*(byte *)((long)param_2 + 2) ^ param_1) & 0xff) * 4) ^
                    param_1 >> 8;
          uVar3 = param_3 - 3;
          if ((uVar3 != 0) && (((ulong)puVar2 & 3) != 0)) {
            param_1 = *(uint *)(&UNK_10e58aae8 +
                               ((ulong)(*(byte *)((long)param_2 + 3) ^ param_1) & 0xff) * 4) ^
                      param_1 >> 8;
            puVar2 = param_2 + 1;
            uVar3 = param_3 - 4;
          }
        }
      }
    }
    for (; 0x1f < uVar3; uVar3 = uVar3 - 0x20) {
      param_1 = *puVar2 ^ param_1;
      uVar1 = *(uint *)(&UNK_10e58b2e8 + (ulong)(param_1 >> 8 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58b6e8 + (ulong)(param_1 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58aee8 + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58aae8 + (ulong)(param_1 >> 0x18) * 4) ^ puVar2[1];
      uVar1 = *(uint *)(&UNK_10e58b2e8 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58b6e8 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58aee8 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58aae8 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar2[2];
      uVar1 = *(uint *)(&UNK_10e58b2e8 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58b6e8 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58aee8 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58aae8 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar2[3];
      uVar1 = *(uint *)(&UNK_10e58b2e8 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58b6e8 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58aee8 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58aae8 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar2[4];
      uVar1 = *(uint *)(&UNK_10e58b2e8 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58b6e8 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58aee8 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58aae8 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar2[5];
      uVar1 = *(uint *)(&UNK_10e58b2e8 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58b6e8 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58aee8 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58aae8 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar2[6];
      uVar1 = *(uint *)(&UNK_10e58b2e8 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58b6e8 + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58aee8 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&UNK_10e58aae8 + (ulong)(uVar1 >> 0x18) * 4) ^ puVar2[7];
      param_1 = *(uint *)(&UNK_10e58b2e8 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(&UNK_10e58b6e8 + (ulong)(uVar1 & 0xff) * 4) ^
                *(uint *)(&UNK_10e58aee8 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&UNK_10e58aae8 + (ulong)(uVar1 >> 0x18) * 4);
      puVar2 = puVar2 + 8;
    }
    for (; 3 < uVar3; uVar3 = uVar3 - 4) {
      param_1 = *puVar2 ^ param_1;
      param_1 = *(uint *)(&UNK_10e58b2e8 + (ulong)(param_1 >> 8 & 0xff) * 4) ^
                *(uint *)(&UNK_10e58b6e8 + (ulong)(param_1 & 0xff) * 4) ^
                *(uint *)(&UNK_10e58aee8 + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&UNK_10e58aae8 + (ulong)(param_1 >> 0x18) * 4);
      puVar2 = puVar2 + 1;
    }
    if (((uVar3 != 0) &&
        (param_1 = *(uint *)(&UNK_10e58aae8 + ((ulong)((byte)*puVar2 ^ param_1) & 0xff) * 4) ^
                   param_1 >> 8, uVar3 != 1)) &&
       (param_1 = *(uint *)(&UNK_10e58aae8 +
                           ((ulong)(*(byte *)((long)puVar2 + 1) ^ param_1) & 0xff) * 4) ^
                  param_1 >> 8, uVar3 != 2)) {
      param_1 = *(uint *)(&UNK_10e58aae8 +
                         ((ulong)(*(byte *)((long)puVar2 + 2) ^ param_1) & 0xff) * 4) ^ param_1 >> 8
      ;
    }
    return ~param_1;
  }
  return 0;
}



/* Entry: 10b41caec; end: 10b41cc37;  */

undefined4 FUN_10b41caec(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  if ((((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) ||
      (pcVar4 = *(code **)(param_1 + 0x48), pcVar4 == (code *)0x0)) ||
     (plVar2 = *(long **)(param_1 + 0x38), plVar2 == (long *)0x0)) {
    return 0xfffffffe;
  }
  if (*plVar2 != param_1) {
    return 0xfffffffe;
  }
  iVar1 = (int)plVar2[1];
  if (((0x38 < iVar1 - 0x39U || (1L << ((ulong)(iVar1 - 0x39U) & 0x3f) & 0x100400400011001U) == 0)
      && (iVar1 != 0x29a)) && (iVar1 != 0x2a)) {
    return 0xfffffffe;
  }
  if (plVar2[2] != 0) {
    (*pcVar4)(*(undefined8 *)(param_1 + 0x50),plVar2[2]);
    plVar2 = *(long **)(param_1 + 0x38);
    pcVar4 = *(code **)(param_1 + 0x48);
  }
  if (plVar2[0x19] != 0) {
    (*pcVar4)(*(undefined8 *)(param_1 + 0x50),plVar2[0x19]);
    plVar2 = *(long **)(param_1 + 0x38);
    pcVar4 = *(code **)(param_1 + 0x48);
  }
  if (plVar2[0x18] != 0) {
    (*pcVar4)(*(undefined8 *)(param_1 + 0x50),plVar2[0x18]);
    plVar2 = *(long **)(param_1 + 0x38);
    pcVar4 = *(code **)(param_1 + 0x48);
  }
  if (plVar2[0x16] != 0) {
    (*pcVar4)(*(undefined8 *)(param_1 + 0x50),plVar2[0x16]);
    pcVar4 = *(code **)(param_1 + 0x48);
    plVar2 = *(long **)(param_1 + 0x38);
  }
  (*pcVar4)(*(undefined8 *)(param_1 + 0x50),plVar2);
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar3 = 0xfffffffd;
  if (iVar1 != 0x71) {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10b41cc38; end: 10b41d2d3;  */

void FUN_10b41cc38(undefined8 param_1,ushort *param_2,ulong param_3,ulong *param_4,uint *param_5,
                  undefined *param_6,ulong param_7,ulong param_8)

{
  undefined1 *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint extraout_w8;
  ulong uVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 *extraout_x9;
  undefined8 *puVar23;
  ushort *puVar24;
  ulong uVar25;
  ulong extraout_x10;
  uint uVar26;
  ushort extraout_w12;
  undefined *puVar27;
  ushort extraout_w14;
  ushort uVar28;
  ulong uVar29;
  undefined *puVar30;
  ushort extraout_w15;
  ushort uVar31;
  ushort extraout_w16;
  ushort uVar32;
  uint uVar33;
  ushort extraout_w17;
  ushort uVar34;
  uint unaff_w19;
  ulong uVar35;
  uint unaff_w20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  ushort uVar36;
  undefined1 uVar37;
  uint uStack_b4;
  ushort auStack_b0 [5];
  short sStack_a6;
  short sStack_a4;
  short sStack_a2;
  short sStack_a0;
  short sStack_9e;
  short sStack_9c;
  short sStack_9a;
  short sStack_98;
  short sStack_96;
  short sStack_94;
  short sStack_92;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((int)param_3 == 0) {
    uVar19 = *param_5;
LAB_10b41ccb0:
    if (uStack_78._2_2_ == 0) {
      if ((ushort)uStack_78 == 0) {
        if (uStack_80._6_2_ == 0) {
          if (uStack_80._4_2_ == 0) {
            if (uStack_80._2_2_ == 0) {
              if ((ushort)uStack_80 == 0) {
                if (uStack_88._6_2_ == 0) {
                  if (uStack_88._4_2_ == 0) {
                    if (uStack_88._2_2_ == 0) {
                      if ((ushort)uStack_88 == 0) {
                        if (uStack_90._6_2_ == 0) {
                          if (uStack_90._4_2_ == 0) {
                            if (uStack_90._2_2_ == 0) {
                              puVar18 = (undefined4 *)*param_4;
                              *param_4 = (ulong)(puVar18 + 1);
                              *puVar18 = 0x140;
                              puVar18 = (undefined4 *)*param_4;
                              *param_4 = (ulong)(puVar18 + 1);
                              *puVar18 = 0x140;
                              uVar19 = 1;
                              goto LAB_10b41d1dc;
                            }
                            bVar8 = 0;
                            uVar26 = 0;
                            uVar15 = 1;
                            puVar23 = (undefined8 *)0x1;
                            uVar33 = (uint)(uVar19 != 0);
                            uVar36 = uStack_90._2_2_;
                            uVar10 = uStack_90;
                            uVar11 = uStack_88;
                            uVar9 = uStack_80;
                            uVar16 = uStack_78;
                            if ((uVar19 != 0) < 2) {
                              uVar33 = 1;
                            }
                            goto joined_r0x00010b41d298;
                          }
                          uVar26 = 0;
                          puVar17 = (undefined8 *)0x2;
                        }
                        else {
                          uVar26 = 0;
                          puVar17 = (undefined8 *)0x3;
                        }
                      }
                      else {
                        uVar26 = 0;
                        puVar17 = (undefined8 *)0x4;
                      }
                    }
                    else {
                      uVar26 = 0;
                      puVar17 = (undefined8 *)0x5;
                    }
                  }
                  else {
                    uVar26 = 0;
                    puVar17 = (undefined8 *)0x6;
                  }
                }
                else {
                  uVar26 = 0;
                  puVar17 = (undefined8 *)0x7;
                }
              }
              else {
                uVar26 = 0;
                puVar17 = (undefined8 *)0x8;
              }
            }
            else {
              uVar26 = 0;
              puVar17 = (undefined8 *)0x9;
            }
          }
          else {
            uVar26 = 0;
            puVar17 = (undefined8 *)0xa;
          }
        }
        else {
          uVar26 = 0;
          puVar17 = (undefined8 *)0xb;
        }
      }
      else {
        uVar26 = 0;
        puVar17 = (undefined8 *)0xc;
      }
    }
    else {
      uVar26 = 0;
      puVar17 = (undefined8 *)0xd;
    }
  }
  else {
    uVar16 = param_3 & 0xffffffff;
    puVar24 = param_2;
    do {
      *(short *)((long)&uStack_90 + (ulong)*puVar24 * 2) =
           *(short *)((long)&uStack_90 + (ulong)*puVar24 * 2) + 1;
      uVar16 = uVar16 - 1;
      puVar24 = puVar24 + 1;
    } while (uVar16 != 0);
    uVar26 = (uint)uStack_78._6_2_;
    uVar19 = *param_5;
    if (uStack_78._6_2_ == 0) {
      if (uStack_78._4_2_ == 0) goto LAB_10b41ccb0;
      uVar26 = 0;
      puVar17 = (undefined8 *)0xe;
    }
    else {
      puVar17 = (undefined8 *)0xf;
    }
  }
  uVar15 = (uint)puVar17;
  if (uVar15 <= uVar19) {
    uVar19 = uVar15;
  }
  puVar22 = (undefined8 *)0x1;
  do {
    puVar23 = puVar22;
    if (*(short *)((long)&uStack_90 + (long)puVar22 * 2) != 0) break;
    puVar22 = (undefined8 *)((long)puVar22 + 1);
    puVar23 = puVar17;
  } while (puVar17 != puVar22);
  bVar8 = 1;
  uVar33 = uVar19;
  uVar36 = uStack_90._2_2_;
  uVar10 = uStack_90;
  uVar11 = uStack_88;
  uVar9 = uStack_80;
  uVar16 = uStack_78;
  if (uVar19 <= (uint)puVar23) {
    uVar33 = (uint)puVar23;
  }
joined_r0x00010b41d298:
  uStack_80 = uVar9;
  uStack_78 = uVar16;
  if (uVar36 < 3) {
    uVar25 = (ulong)uVar33;
    uStack_90._4_2_ = (ushort)((ulong)uVar10 >> 0x20);
    uVar19 = (uint)uStack_90._4_2_ + (uVar36 & 0x7fff) * 2;
    if (uVar19 < 5) {
      uStack_90._6_2_ = (ushort)((ulong)uVar10 >> 0x30);
      uVar19 = (uint)uStack_90._6_2_ + uVar19 * 2;
      if (uVar19 < 9) {
        uStack_88._0_2_ = (ushort)uVar11;
        uVar19 = (uint)(ushort)uStack_88 + uVar19 * 2;
        param_7 = (ulong)uVar19;
        if (uVar19 < 0x11) {
          uStack_88._2_2_ = (ushort)((ulong)uVar11 >> 0x10);
          uVar19 = (uint)uStack_88._2_2_ + uVar19 * 2;
          param_8 = (ulong)uVar19;
          if (uVar19 < 0x21) {
            uStack_88._4_2_ = (ushort)((ulong)uVar11 >> 0x20);
            param_7 = (ulong)uStack_88._4_2_;
            unaff_w19 = (uint)uStack_88._4_2_ + uVar19 * 2;
            if (unaff_w19 < 0x41) {
              uStack_88._6_2_ = (ushort)((ulong)uVar11 >> 0x30);
              param_8 = (ulong)uStack_88._6_2_;
              unaff_w20 = (uint)uStack_88._6_2_ + unaff_w19 * 2;
              if (unaff_w20 < 0x81) {
                uStack_80._0_2_ = (ushort)uVar9;
                unaff_w19 = (uint)(ushort)uStack_80;
                uVar19 = (uint)(ushort)uStack_80 + unaff_w20 * 2;
                unaff_x21 = (ulong)uVar19;
                if (uVar19 < 0x101) {
                  uStack_80._2_2_ = (ushort)((ulong)uVar9 >> 0x10);
                  unaff_w20 = (uint)uStack_80._2_2_;
                  uVar19 = (uint)uStack_80._2_2_ + uVar19 * 2;
                  unaff_x22 = (ulong)uVar19;
                  if (uVar19 < 0x201) {
                    uStack_80._4_2_ = (ushort)((ulong)uVar9 >> 0x20);
                    unaff_x21 = (ulong)uStack_80._4_2_;
                    uVar19 = (uint)uStack_80._4_2_ + uVar19 * 2;
                    unaff_x23 = (undefined8 *)(ulong)uVar19;
                    if (uVar19 < 0x401) {
                      uStack_80._6_2_ = (ushort)((ulong)uVar9 >> 0x30);
                      unaff_x22 = (ulong)uStack_80._6_2_;
                      uVar19 = (uint)uStack_80._6_2_ + uVar19 * 2;
                      unaff_x24 = (undefined8 *)(ulong)uVar19;
                      if (uVar19 < 0x801) {
                        uStack_78._0_2_ = (ushort)uVar16;
                        unaff_x23 = (undefined8 *)(uVar16 & 0xffff);
                        uVar19 = (uint)(ushort)uStack_78 + uVar19 * 2;
                        unaff_x25 = (ulong)uVar19;
                        if (uVar19 < 0x1001) {
                          uStack_78._2_2_ = (ushort)(uVar16 >> 0x10);
                          unaff_x24 = (undefined8 *)(ulong)uStack_78._2_2_;
                          uVar19 = (uint)uStack_78._2_2_ + uVar19 * 2;
                          if (uVar19 < 0x2001) {
                            uStack_78._4_2_ = (ushort)(uVar16 >> 0x20);
                            unaff_x25 = (ulong)uStack_78._4_2_;
                            uVar19 = (uint)uStack_78._4_2_ + uVar19 * 2;
                            if ((uVar19 < 0x4001) && (uVar26 = uVar26 + uVar19 * 2, uVar26 < 0x8001)
                               ) {
                              bVar3 = false;
                              if ((int)param_1 != 0) {
                                bVar3 = (bool)(bVar8 ^ 1);
                              }
                              uVar34 = uStack_88._2_2_;
                              uVar32 = (ushort)uStack_88;
                              uVar31 = uStack_90._6_2_;
                              uVar28 = uStack_90._4_2_;
                              if (bVar3) goto LAB_10b41cf0c;
                              if (uVar26 == 0x8000) goto LAB_10b41cf0c;
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
  param_1 = 0xffffffff;
  uStack_90 = uVar10;
  uStack_88 = uVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  while( true ) {
    ___stack_chk_fail();
    puVar23 = extraout_x9;
    uVar25 = extraout_x10;
    uVar15 = extraout_w8;
    uVar10 = uStack_90;
    uVar11 = uStack_88;
    uVar34 = extraout_w17;
    uVar32 = extraout_w16;
    uVar31 = extraout_w15;
    uVar28 = extraout_w14;
    uVar36 = extraout_w12;
LAB_10b41cf0c:
    uStack_88 = uVar11;
    uStack_90 = uVar10;
    uVar19 = (uint)uVar25;
    auStack_b0[1] = 0;
    auStack_b0[2] = uVar36;
    auStack_b0[3] = uVar28 + uVar36;
    auStack_b0[4] = uVar31 + uVar28 + uVar36;
    sStack_a6 = uVar32 + auStack_b0[4];
    sStack_a4 = uVar34 + sStack_a6;
    sStack_a2 = (short)param_7 + sStack_a4;
    sStack_a0 = (short)param_8 + sStack_a2;
    sStack_9e = (short)unaff_w19 + sStack_a0;
    sStack_9c = (short)unaff_w20 + sStack_9e;
    sStack_9a = (short)unaff_x21 + sStack_9c;
    sStack_98 = (short)unaff_x22 + sStack_9a;
    sStack_96 = (short)unaff_x23 + sStack_98;
    sStack_94 = (short)unaff_x24 + sStack_96;
    sStack_92 = (short)unaff_x25 + sStack_94;
    if ((int)param_3 != 0) {
      uVar16 = 0;
      do {
        uVar29 = (ulong)param_2[uVar16];
        if (uVar29 != 0) {
          uVar36 = auStack_b0[uVar29];
          auStack_b0[uVar29] = uVar36 + 1;
          *(short *)(param_6 + (ulong)uVar36 * 2) = (short)uVar16;
        }
        uVar16 = uVar16 + 1;
      } while ((param_3 & 0xffffffff) != uVar16);
    }
    iVar12 = (int)param_1;
    if (iVar12 == 0) break;
    if (iVar12 == 1) {
      if (uVar19 < 10) {
        uVar26 = 0x101;
        uStack_b4 = 0;
        bVar3 = true;
        puVar27 = &UNK_10e58cb26;
        puVar30 = &UNK_10e58cae8;
        goto LAB_10b41cffc;
      }
LAB_10b41d1e4:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
    }
    else {
      uVar26 = 0;
      puVar27 = &UNK_10e58cba4;
      puVar30 = &UNK_10e58cb64;
      if (iVar12 != 2) {
        uStack_b4 = 0;
        bVar3 = false;
        goto LAB_10b41cffc;
      }
      uStack_b4 = 1;
      bVar3 = false;
      if (uVar19 < 10) goto LAB_10b41cffc;
      param_1 = 1;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
    }
  }
  uStack_b4 = 0;
  bVar3 = false;
  uVar26 = 0x14;
  puVar27 = param_6;
  puVar30 = param_6;
LAB_10b41cffc:
  uVar29 = 0;
  param_3 = 0;
  param_7 = 0;
  uVar33 = 1 << (ulong)(uVar19 & 0x1f);
  uVar6 = uVar33 - 1;
  param_8 = *param_4;
  uVar16 = 0xffffffff;
  unaff_x21 = uVar25;
LAB_10b41d020:
  unaff_w20 = 1;
  unaff_x22 = (ulong)(uint)(1 << (ulong)((uint)unaff_x21 & 0x1f));
  unaff_x23 = (undefined8 *)0xffffffff;
  unaff_x24 = &uStack_90;
LAB_10b41d034:
  uVar36 = *(ushort *)(param_6 + uVar29 * 2);
  if (uVar36 + 1 < uVar26) {
    uVar37 = 0;
  }
  else if (uVar36 < uVar26) {
    uVar36 = 0;
    uVar37 = 0x60;
  }
  else {
    lVar7 = (ulong)(uVar36 - uVar26) * 2;
    uVar37 = puVar27[lVar7];
    uVar36 = *(ushort *)(puVar30 + lVar7);
  }
  uVar13 = (uint)param_3;
  uVar20 = (uint)puVar23;
  uVar21 = uVar20 - uVar13;
  unaff_x25 = (ulong)uVar21;
  iVar12 = -1 << (ulong)(uVar21 & 0x1f);
  uVar14 = (uint)param_7;
  uVar35 = unaff_x22;
  do {
    puVar1 = (undefined1 *)
             (param_8 + (ulong)((uVar14 >> (ulong)(uVar13 & 0x1f)) + iVar12 + (int)uVar35) * 4);
    *puVar1 = uVar37;
    puVar1[1] = (char)uVar21;
    *(ushort *)(puVar1 + 2) = uVar36;
    uVar2 = (int)uVar35 + iVar12;
    uVar35 = (ulong)uVar2;
  } while (uVar2 != 0);
  uVar2 = 1 << (ulong)(uVar20 - 1 & 0x1f);
  do {
    unaff_w19 = uVar2;
    uVar2 = unaff_w19 >> 1;
  } while ((unaff_w19 & uVar14) != 0);
  uVar2 = 0;
  if (unaff_w19 != 0) {
    uVar2 = (unaff_w19 - 1 & uVar14) + unaff_w19;
  }
  param_7 = (ulong)uVar2;
  uVar29 = (ulong)((int)uVar29 + 1);
  sVar5 = *(short *)((long)unaff_x24 + ((ulong)puVar23 & 0xffffffff) * 2) + -1;
  *(short *)((long)unaff_x24 + ((ulong)puVar23 & 0xffffffff) * 2) = sVar5;
  if (sVar5 != 0) goto LAB_10b41d0f0;
  if (uVar20 != uVar15) {
    puVar23 = (undefined8 *)(ulong)param_2[*(ushort *)(param_6 + uVar29 * 2)];
    goto LAB_10b41d0f0;
  }
  if (uVar2 != 0) {
    puVar1 = (undefined1 *)(param_8 + (ulong)uVar2 * 4);
    *puVar1 = 0x40;
    puVar1[1] = (char)uVar21;
    *(undefined2 *)(puVar1 + 2) = 0;
  }
  *param_4 = *param_4 + (ulong)uVar33 * 4;
  unaff_x21 = unaff_x22;
  unaff_x22 = (ulong)uVar6;
LAB_10b41d1dc:
  param_1 = 0;
  *param_5 = uVar19;
  goto LAB_10b41d1e4;
LAB_10b41d0f0:
  uVar21 = (uint)puVar23;
  if ((uVar21 <= uVar19) || (uVar2 = uVar2 & uVar6, unaff_x25 = (ulong)uVar2, uVar2 == (uint)uVar16)
     ) goto LAB_10b41d034;
  unaff_x23 = &uStack_90;
  uVar14 = uVar19;
  if (uVar13 != 0) {
    uVar14 = uVar13;
  }
  param_3 = (ulong)uVar14;
  uVar13 = uVar21 - uVar14;
  unaff_w20 = 1 << (ulong)(uVar13 & 0x1f);
  if (uVar21 < uVar15) {
    uVar13 = uVar15 - uVar14;
    unaff_x24 = puVar23;
    do {
      iVar12 = unaff_w20 - *(ushort *)((long)unaff_x23 + ((ulong)unaff_x24 & 0xffffffff) * 2);
      if (iVar12 < 1) {
        uVar13 = (int)unaff_x24 - uVar14;
        break;
      }
      unaff_w20 = iVar12 * 2;
      uVar21 = (int)unaff_x24 + 1;
      unaff_x24 = (undefined8 *)(ulong)uVar21;
    } while (uVar21 < uVar15);
    unaff_w20 = 1 << (ulong)(uVar13 & 0x1f);
  }
  unaff_x21 = (ulong)uVar13;
  uVar33 = unaff_w20 + uVar33;
  bVar4 = false;
  if (0x354 < uVar33) {
    bVar4 = bVar3;
  }
  unaff_w19 = 0;
  if (0x250 < uVar33) {
    unaff_w19 = uStack_b4;
  }
  param_1 = 1;
  if ((bVar4) || (unaff_w19 != 0)) goto LAB_10b41d1e4;
  param_8 = param_8 + unaff_x22 * 4;
  lVar7 = unaff_x25 * 4;
  *(char *)(*param_4 + lVar7) = (char)uVar13;
  *(char *)(*param_4 + lVar7 + 1) = (char)uVar25;
  *(short *)(*param_4 + lVar7 + 2) = (short)((uint)((int)param_8 - (int)*param_4) >> 2);
  uVar16 = unaff_x25;
  goto LAB_10b41d020;
}



/* Entry: 10b41d2d4; end: 10b41d5ab;  */

void FUN_10b41d2d4(undefined8 param_1,int param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(param_3 * param_2);
  return;
}



/* Entry: 10b41d5ac; end: 10b41dfa7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b41d5ac(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  byte bVar13;
  ushort uVar14;
  uint uVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  undefined *puVar18;
  int iVar19;
  undefined4 uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  long *plVar32;
  long *plVar33;
  ulong uVar34;
  ulong uVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  uint uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  
  lVar29 = param_1[7];
  plVar32 = (long *)*param_1;
  plVar2 = (long *)((long)plVar32 + (ulong)((int)param_1[1] - 7));
  puVar36 = (undefined8 *)param_1[3];
  uVar12 = *(uint *)(param_1 + 4);
  puVar3 = (undefined8 *)((long)puVar36 + (ulong)(uVar12 - 0x101));
  uVar6 = *(uint *)(lVar29 + 0x3c);
  uVar8 = *(uint *)(lVar29 + 0x40);
  uVar5 = *(uint *)(lVar29 + 0x44);
  if (uVar6 <= uVar8 && *(uint *)(lVar29 + 0x44) == 0) {
    uVar5 = uVar6;
  }
  puVar10 = *(undefined8 **)(lVar29 + 0x48);
  uVar35 = *(ulong *)(lVar29 + 0x50);
  uVar34 = (ulong)*(uint *)(lVar29 + 0x58);
  lVar23 = *(long *)(lVar29 + 0x68);
  lVar11 = *(long *)(lVar29 + 0x70);
  uVar7 = *(uint *)(lVar29 + 0x78);
  uVar9 = *(uint *)(lVar29 + 0x7c);
  puVar24 = puVar36;
LAB_10b41d644:
  puVar18 = &UNK_10f75e298;
  if ((uint)uVar34 < 0xf) {
    uVar35 = *plVar32 << (uVar34 & 0x3f) | uVar35;
    uVar34 = (ulong)((uint)uVar34 | 0x30);
    plVar32 = (long *)((long)plVar32 + 6);
  }
  uVar21 = uVar35 & (uint)~(-1 << (ulong)(uVar7 & 0x1f));
  while( true ) {
    pbVar4 = (byte *)(lVar23 + uVar21 * 4);
    bVar13 = *pbVar4;
    uVar14 = *(ushort *)(pbVar4 + 2);
    uVar21 = (ulong)uVar14;
    uVar35 = uVar35 >> ((ulong)pbVar4[1] & 0x3f);
    uVar30 = (int)uVar34 - (uint)pbVar4[1];
    uVar34 = (ulong)uVar30;
    if (bVar13 == 0) break;
    if ((bVar13 >> 4 & 1) != 0) {
      uVar31 = bVar13 & 0xf;
      if ((bVar13 & 0xf) != 0) {
        plVar33 = plVar32;
        if (uVar30 < uVar31) {
          plVar33 = (long *)((long)plVar32 + 6);
          uVar35 = *plVar32 << (uVar34 & 0x3f) | uVar35;
          uVar30 = uVar30 + 0x30;
        }
        uVar21 = (ulong)(((uint)uVar35 & (-1 << (ulong)uVar31 ^ 0xffffffffU)) + (uint)uVar14);
        uVar35 = uVar35 >> uVar31;
        uVar30 = uVar30 - uVar31;
        uVar34 = (ulong)uVar30;
        plVar32 = plVar33;
      }
      plVar33 = plVar32;
      if (uVar30 < 0xf) {
        plVar33 = (long *)((long)plVar32 + 6);
        uVar35 = *plVar32 << (uVar34 & 0x3f) | uVar35;
        uVar34 = (ulong)((uint)uVar34 | 0x30);
      }
      uVar22 = uVar35 & (uint)~(-1 << (ulong)(uVar9 & 0x1f));
      goto LAB_10b41d704;
    }
    if ((bVar13 >> 6 & 1) != 0) {
      if ((bVar13 >> 5 & 1) != 0) {
        uVar20 = 0x3f3f;
        goto LAB_10b41df40;
      }
      puVar18 = &UNK_10f75e2ae;
      plVar33 = plVar32;
      goto LAB_10b41df38;
    }
    uVar21 = (uVar35 & (uint)~(-1 << (ulong)(bVar13 & 0x1f))) + uVar21;
  }
  puVar37 = (undefined8 *)((long)puVar24 + 1);
  *(char *)puVar24 = (char)uVar14;
  goto LAB_10b41d6a0;
LAB_10b41d704:
  pbVar4 = (byte *)(lVar11 + uVar22 * 4);
  bVar13 = *pbVar4;
  uVar35 = uVar35 >> ((ulong)pbVar4[1] & 0x3f);
  uVar30 = (int)uVar34 - (uint)pbVar4[1];
  uVar34 = (ulong)uVar30;
  if ((bVar13 >> 4 & 1) != 0) goto LAB_10b41d738;
  if ((bVar13 >> 6 & 1) != 0) goto LAB_10b41df38;
  uVar22 = (uVar35 & (uint)~(-1 << (ulong)(bVar13 & 0x1f))) + (ulong)*(ushort *)(pbVar4 + 2);
  goto LAB_10b41d704;
LAB_10b41d738:
  uVar31 = bVar13 & 0xf;
  plVar32 = plVar33;
  if (uVar30 < uVar31) {
    plVar32 = (long *)((long)plVar33 + 6);
    uVar35 = *plVar33 << (uVar34 & 0x3f) | uVar35;
    uVar30 = uVar30 + 0x30;
  }
  uVar1 = ((uint)uVar35 & (-1 << (ulong)uVar31 ^ 0xffffffffU)) + (uint)*(ushort *)(pbVar4 + 2);
  uVar22 = (ulong)uVar1;
  uVar35 = uVar35 >> uVar31;
  uVar34 = (ulong)(uVar30 - uVar31);
  uVar15 = (int)puVar24 - ((int)puVar36 - (param_2 - uVar12));
  uVar31 = uVar1 - uVar15;
  uVar30 = (uint)uVar21;
  if (uVar1 < uVar15 || uVar31 == 0) {
    if (0xf < uVar1 || uVar30 <= uVar1) {
      uVar30 = uVar30 - 1;
      uVar39 = *(undefined8 *)((long)puVar24 - uVar22);
      puVar24[1] = ((undefined8 *)((long)puVar24 - uVar22))[1];
      *puVar24 = uVar39;
      puVar37 = (undefined8 *)((long)puVar24 + (ulong)((uVar30 & 0xf) + 1));
      if (0xf < uVar30) {
        uVar30 = uVar30 >> 4;
        puVar24 = puVar37;
        do {
          uVar39 = *(undefined8 *)((long)puVar24 - uVar22);
          puVar37 = puVar24 + 2;
          puVar24[1] = ((undefined8 *)((long)puVar24 - uVar22))[1];
          *puVar24 = uVar39;
          uVar30 = uVar30 - 1;
          puVar24 = puVar37;
        } while (uVar30 != 0);
      }
      goto LAB_10b41d6a0;
    }
    uVar15 = uVar30 - 1 & 0xf;
    uVar31 = uVar15 + 1;
    if ((int)uVar1 < 4) {
      if (uVar1 == 1) {
        uVar16 = *(undefined1 *)((long)puVar24 + -1);
        uVar39 = CONCAT17(uVar16,CONCAT16(uVar16,CONCAT15(uVar16,CONCAT14(uVar16,CONCAT13(uVar16,
                                                  CONCAT12(uVar16,CONCAT11(uVar16,uVar16)))))));
        uVar40 = CONCAT17(uVar16,CONCAT16(uVar16,CONCAT15(uVar16,CONCAT14(uVar16,CONCAT13(uVar16,
                                                  CONCAT12(uVar16,CONCAT11(uVar16,uVar16)))))));
        puVar24[1] = uVar40;
        *puVar24 = uVar39;
        puVar37 = (undefined8 *)((long)puVar24 + (ulong)uVar31);
        if (uVar30 != uVar31) {
          iVar19 = (uVar15 - uVar30) + 1;
          puVar24 = puVar37;
          do {
            puVar37 = puVar24 + 2;
            puVar24[1] = uVar40;
            *puVar24 = uVar39;
            iVar19 = iVar19 + 0x10;
            puVar24 = puVar37;
          } while (iVar19 != 0);
        }
        goto LAB_10b41d6a0;
      }
      if (uVar1 == 2) {
        uVar17 = *(undefined2 *)((long)puVar24 + -2);
        puVar24[1] = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar17,uVar17)));
        *puVar24 = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar17,uVar17)));
        puVar37 = (undefined8 *)((long)puVar24 + (ulong)uVar31);
        if (uVar30 != uVar31) {
          uVar17 = *(undefined2 *)((long)puVar37 + -2);
          iVar19 = (uVar15 - uVar30) + 1;
          puVar24 = puVar37;
          do {
            puVar37 = puVar24 + 2;
            puVar24[1] = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar17,uVar17)));
            *puVar24 = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar17,uVar17)));
            iVar19 = iVar19 + 0x10;
            puVar24 = puVar37;
          } while (iVar19 != 0);
        }
        goto LAB_10b41d6a0;
      }
    }
    else {
      if (uVar1 == 4) {
        uVar20 = *(undefined4 *)((long)puVar24 + -4);
        puVar24[1] = CONCAT44(uVar20,uVar20);
        *puVar24 = CONCAT44(uVar20,uVar20);
        puVar37 = (undefined8 *)((long)puVar24 + (ulong)uVar31);
        if (uVar30 != uVar31) {
          uVar20 = *(undefined4 *)((long)puVar37 + -4);
          iVar19 = (uVar15 - uVar30) + 1;
          puVar24 = puVar37;
          do {
            puVar37 = puVar24 + 2;
            puVar24[1] = CONCAT44(uVar20,uVar20);
            *puVar24 = CONCAT44(uVar20,uVar20);
            iVar19 = iVar19 + 0x10;
            puVar24 = puVar37;
          } while (iVar19 != 0);
        }
        goto LAB_10b41d6a0;
      }
      if (uVar1 == 8) {
        puVar24[1] = puVar24[-1];
        *puVar24 = puVar24[-1];
        puVar37 = (undefined8 *)((long)puVar24 + (ulong)uVar31);
        if (uVar30 != uVar31) {
          uVar39 = puVar37[-1];
          iVar19 = (uVar15 - uVar30) + 1;
          puVar24 = puVar37;
          do {
            puVar37 = puVar24 + 2;
            puVar24[1] = uVar39;
            *puVar24 = uVar39;
            iVar19 = iVar19 + 0x10;
            puVar24 = puVar37;
          } while (iVar19 != 0);
        }
        goto LAB_10b41d6a0;
      }
    }
    puVar37 = puVar24;
    uVar26 = uVar22;
    do {
      uVar39 = *(undefined8 *)((long)puVar24 - uVar22);
      puVar37[1] = ((undefined8 *)((long)puVar24 - uVar22))[1];
      *puVar37 = uVar39;
      puVar37 = (undefined8 *)((long)puVar37 + uVar26);
      uVar31 = (uint)uVar26;
      uVar30 = (int)uVar21 - uVar31;
      uVar21 = (ulong)uVar30;
      uVar26 = (ulong)(uVar31 << 1);
      if (7 < uVar31) break;
    } while (uVar31 << 1 < uVar30);
    puVar24 = (undefined8 *)((long)puVar37 - uVar26);
    uVar30 = uVar30 - 1;
    uVar21 = (ulong)((uVar30 & 0xf) + 1);
    uVar39 = *puVar24;
    puVar37[1] = puVar24[1];
    *puVar37 = uVar39;
    puVar37 = (undefined8 *)((long)puVar37 + uVar21);
    if (0xf < uVar30) {
      uVar30 = uVar30 >> 4;
      puVar24 = (undefined8 *)((long)puVar24 + uVar21);
      puVar25 = puVar37;
      do {
        uVar39 = *puVar24;
        puVar37 = puVar25 + 2;
        puVar25[1] = puVar24[1];
        *puVar25 = uVar39;
        uVar30 = uVar30 - 1;
        puVar24 = puVar24 + 2;
        puVar25 = puVar37;
      } while (uVar30 != 0);
    }
    goto LAB_10b41d6a0;
  }
  if ((uVar8 < uVar31) &&
     (puVar18 = &UNK_10f75e27a, plVar33 = plVar32, *(int *)(lVar29 + 0x1be8) != 0)) {
LAB_10b41df38:
    param_1[6] = (long)puVar18;
    uVar20 = 0x3f51;
    plVar32 = plVar33;
LAB_10b41df40:
    *(undefined4 *)(lVar29 + 8) = uVar20;
    puVar37 = puVar24;
LAB_10b41df44:
    lVar23 = (long)plVar32 - (uVar34 >> 3);
    *param_1 = lVar23;
    param_1[3] = (long)puVar37;
    *(int *)(param_1 + 1) = ((int)plVar2 - (int)lVar23) + 7;
    uVar5 = (uint)uVar34 & 7;
    *(int *)(param_1 + 4) = ((int)puVar3 - (int)puVar37) + 0x101;
    *(ulong *)(lVar29 + 0x50) = uVar35 & (uint)~(-1 << (ulong)uVar5);
    *(uint *)(lVar29 + 0x58) = uVar5;
    return;
  }
  if (uVar5 < uVar31) {
    uVar31 = uVar31 - uVar5;
    puVar25 = (undefined8 *)((long)puVar10 + (ulong)(uVar6 - uVar31));
    uVar15 = uVar30 - uVar31;
    if (uVar30 < uVar31 || uVar15 == 0) goto LAB_10b41d87c;
    if ((long)((long)puVar36 + ((ulong)uVar12 - (long)puVar24)) < 0x10) {
      puVar37 = puVar24;
      if ((uVar31 >> 3 & 1) != 0) {
        *puVar24 = *puVar25;
        puVar25 = puVar25 + 1;
        puVar37 = puVar24 + 1;
      }
      if ((uVar31 >> 2 & 1) != 0) {
        *(undefined4 *)puVar37 = *(undefined4 *)puVar25;
        puVar25 = (undefined8 *)((long)puVar25 + 4);
        puVar37 = (undefined8 *)((long)puVar37 + 4);
      }
      if ((uVar31 >> 1 & 1) != 0) {
        *(undefined2 *)puVar37 = *(undefined2 *)puVar25;
        puVar25 = (undefined8 *)((long)puVar25 + 2);
        puVar37 = (undefined8 *)((long)puVar37 + 2);
      }
      if ((uVar31 & 1) != 0) {
        *(undefined1 *)puVar37 = *(undefined1 *)puVar25;
        puVar37 = (undefined8 *)((long)puVar37 + 1);
      }
    }
    else {
      uVar31 = uVar31 - 1;
      uVar21 = (ulong)((uVar31 & 0xf) + 1);
      uVar39 = *puVar25;
      puVar24[1] = puVar25[1];
      *puVar24 = uVar39;
      puVar37 = (undefined8 *)((long)puVar24 + uVar21);
      if (0xf < uVar31) {
        lVar28 = (ulong)((uVar31 >> 4) - 1) * 0x10;
        _memcpy(puVar37,(long)puVar25 + uVar21,lVar28 + 0x10);
        puVar37 = (undefined8 *)((long)puVar24 + (ulong)(uVar31 & 0xf) + lVar28 + 0x11);
      }
    }
    uVar21 = (ulong)uVar15;
    lVar28 = (long)puVar36 + ((ulong)uVar12 - (long)puVar37);
    uVar38 = uVar15 - uVar5;
    puVar25 = puVar10;
    puVar24 = puVar37;
    uVar31 = uVar5;
    if (uVar5 <= uVar15 && uVar38 != 0) goto LAB_10b41d888;
  }
  else {
    puVar25 = (undefined8 *)((long)puVar10 + (ulong)(uVar5 - uVar31));
LAB_10b41d87c:
    lVar28 = (long)puVar36 + ((ulong)uVar12 - (long)puVar24);
    uVar38 = uVar30 - uVar31;
    if (uVar31 <= uVar30 && uVar38 != 0) {
LAB_10b41d888:
      uVar21 = uVar22;
      if (lVar28 < 0x10) {
        puVar37 = puVar24;
        if ((uVar31 >> 3 & 1) != 0) {
          *puVar24 = *puVar25;
          puVar25 = puVar25 + 1;
          puVar37 = puVar24 + 1;
        }
        if ((uVar31 >> 2 & 1) != 0) {
          *(undefined4 *)puVar37 = *(undefined4 *)puVar25;
          puVar25 = (undefined8 *)((long)puVar25 + 4);
          puVar37 = (undefined8 *)((long)puVar37 + 4);
        }
        if ((uVar31 >> 1 & 1) != 0) {
          *(undefined2 *)puVar37 = *(undefined2 *)puVar25;
          puVar25 = (undefined8 *)((long)puVar25 + 2);
          puVar37 = (undefined8 *)((long)puVar37 + 2);
        }
        if ((uVar31 & 1) == 0) {
          puVar24 = puVar37;
          if (uVar1 < 0x10 && uVar1 < uVar38) {
LAB_10b41da10:
            puVar24 = puVar37;
            do {
              uVar39 = *(undefined8 *)((long)puVar37 - uVar22);
              puVar24[1] = ((undefined8 *)((long)puVar37 - uVar22))[1];
              *puVar24 = uVar39;
              puVar24 = (undefined8 *)((long)puVar24 + uVar21);
              uVar30 = (uint)uVar21;
              uVar38 = uVar38 - uVar30;
              uVar21 = (ulong)(uVar30 << 1);
              if (7 < uVar30) break;
            } while (uVar30 << 1 < uVar38);
          }
        }
        else {
          puVar24 = (undefined8 *)((long)puVar37 + 1);
          *(undefined1 *)puVar37 = *(undefined1 *)puVar25;
          puVar37 = puVar24;
          if (uVar1 < 0x10 && uVar1 < uVar38) goto LAB_10b41da10;
        }
      }
      else {
        uVar31 = uVar31 - 1;
        uVar26 = (ulong)((uVar31 & 0xf) + 1);
        uVar39 = *puVar25;
        puVar24[1] = puVar25[1];
        *puVar24 = uVar39;
        puVar37 = (undefined8 *)((long)puVar24 + uVar26);
        if (0xf < uVar31) {
          lVar28 = (ulong)((uVar31 >> 4) - 1) * 0x10;
          _memcpy(puVar37,(long)puVar25 + uVar26,lVar28 + 0x10);
          puVar37 = (undefined8 *)((long)puVar24 + (ulong)(uVar31 & 0xf) + lVar28 + 0x11);
        }
        puVar24 = puVar37;
        if (uVar1 < 0x10 && uVar1 < uVar38) goto LAB_10b41da10;
      }
      uVar30 = (uint)uVar21;
      if ((long)((long)puVar36 + ((ulong)uVar12 - (long)puVar24)) < 0x30) {
        puVar37 = puVar24;
        if (uVar38 != 0) {
          if ((0x1f < uVar38) && (0x1f < uVar30)) {
            uVar26 = (ulong)uVar38;
            uVar27 = uVar26 & 0xffffffe0;
            uVar38 = uVar38 - (int)uVar27;
            puVar37 = (undefined8 *)((long)puVar24 + uVar27);
            uVar22 = uVar27;
            do {
              puVar25 = (undefined8 *)((long)puVar24 + -uVar21);
              uVar39 = *puVar25;
              uVar41 = puVar25[3];
              uVar40 = puVar25[2];
              puVar24[1] = puVar25[1];
              *puVar24 = uVar39;
              puVar24[3] = uVar41;
              puVar24[2] = uVar40;
              uVar22 = uVar22 - 0x20;
              puVar24 = puVar24 + 4;
            } while (uVar22 != 0);
            puVar24 = puVar37;
            if (uVar27 == uVar26) goto LAB_10b41d6a0;
          }
          do {
            puVar37 = (undefined8 *)((long)puVar24 + 1);
            *(undefined1 *)puVar24 = *(undefined1 *)((long)puVar24 + -uVar21);
            uVar38 = uVar38 - 1;
            puVar24 = puVar37;
          } while (uVar38 != 0);
        }
      }
      else if ((uVar30 < 0x10) && (uVar30 < uVar38)) {
        uVar1 = uVar38 - 1 & 0xf;
        uVar31 = uVar1 + 1;
        if ((int)uVar30 < 4) {
          if (uVar30 == 1) {
            uVar16 = *(undefined1 *)((long)puVar24 + -1);
            uVar39 = CONCAT17(uVar16,CONCAT16(uVar16,CONCAT15(uVar16,CONCAT14(uVar16,CONCAT13(uVar16
                                                  ,CONCAT12(uVar16,CONCAT11(uVar16,uVar16)))))));
            uVar40 = CONCAT17(uVar16,CONCAT16(uVar16,CONCAT15(uVar16,CONCAT14(uVar16,CONCAT13(uVar16
                                                  ,CONCAT12(uVar16,CONCAT11(uVar16,uVar16)))))));
            puVar24[1] = uVar40;
            *puVar24 = uVar39;
            puVar37 = (undefined8 *)((long)puVar24 + (ulong)uVar31);
            if (uVar38 != uVar31) {
              iVar19 = (uVar1 - uVar38) + 1;
              puVar24 = puVar37;
              do {
                puVar37 = puVar24 + 2;
                puVar24[1] = uVar40;
                *puVar24 = uVar39;
                iVar19 = iVar19 + 0x10;
                puVar24 = puVar37;
              } while (iVar19 != 0);
            }
            goto LAB_10b41d6a0;
          }
          if (uVar30 == 2) {
            uVar17 = *(undefined2 *)((long)puVar24 + -2);
            puVar24[1] = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar17,uVar17)));
            *puVar24 = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar17,uVar17)));
            puVar37 = (undefined8 *)((long)puVar24 + (ulong)uVar31);
            if (uVar38 != uVar31) {
              uVar17 = *(undefined2 *)((long)puVar37 + -2);
              iVar19 = (uVar1 - uVar38) + 1;
              puVar24 = puVar37;
              do {
                puVar37 = puVar24 + 2;
                puVar24[1] = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar17,uVar17)));
                *puVar24 = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar17,uVar17)));
                iVar19 = iVar19 + 0x10;
                puVar24 = puVar37;
              } while (iVar19 != 0);
            }
            goto LAB_10b41d6a0;
          }
        }
        else {
          if (uVar30 == 4) {
            uVar20 = *(undefined4 *)((long)puVar24 + -4);
            puVar24[1] = CONCAT44(uVar20,uVar20);
            *puVar24 = CONCAT44(uVar20,uVar20);
            puVar37 = (undefined8 *)((long)puVar24 + (ulong)uVar31);
            if (uVar38 != uVar31) {
              uVar20 = *(undefined4 *)((long)puVar37 + -4);
              iVar19 = (uVar1 - uVar38) + 1;
              puVar24 = puVar37;
              do {
                puVar37 = puVar24 + 2;
                puVar24[1] = CONCAT44(uVar20,uVar20);
                *puVar24 = CONCAT44(uVar20,uVar20);
                iVar19 = iVar19 + 0x10;
                puVar24 = puVar37;
              } while (iVar19 != 0);
            }
            goto LAB_10b41d6a0;
          }
          if (uVar30 == 8) {
            puVar24[1] = puVar24[-1];
            *puVar24 = puVar24[-1];
            puVar37 = (undefined8 *)((long)puVar24 + (ulong)uVar31);
            if (uVar38 != uVar31) {
              uVar39 = puVar37[-1];
              iVar19 = (uVar1 - uVar38) + 1;
              puVar24 = puVar37;
              do {
                puVar37 = puVar24 + 2;
                puVar24[1] = uVar39;
                *puVar24 = uVar39;
                iVar19 = iVar19 + 0x10;
                puVar24 = puVar37;
              } while (iVar19 != 0);
            }
            goto LAB_10b41d6a0;
          }
        }
        puVar37 = puVar24;
        uVar22 = uVar21;
        do {
          uVar39 = *(undefined8 *)((long)puVar24 - uVar21);
          puVar37[1] = ((undefined8 *)((long)puVar24 - uVar21))[1];
          *puVar37 = uVar39;
          puVar37 = (undefined8 *)((long)puVar37 + uVar22);
          uVar30 = (uint)uVar22;
          uVar38 = uVar38 - uVar30;
          uVar22 = (ulong)(uVar30 << 1);
          if (7 < uVar30) break;
        } while (uVar30 << 1 < uVar38);
        puVar24 = (undefined8 *)((long)puVar37 - uVar22);
        uVar38 = uVar38 - 1;
        uVar21 = (ulong)((uVar38 & 0xf) + 1);
        uVar39 = *puVar24;
        puVar37[1] = puVar24[1];
        *puVar37 = uVar39;
        puVar37 = (undefined8 *)((long)puVar37 + uVar21);
        if (0xf < uVar38) {
          uVar38 = uVar38 >> 4;
          puVar24 = (undefined8 *)((long)puVar24 + uVar21);
          puVar25 = puVar37;
          do {
            uVar39 = *puVar24;
            puVar37 = puVar25 + 2;
            puVar25[1] = puVar24[1];
            *puVar25 = uVar39;
            uVar38 = uVar38 - 1;
            puVar24 = puVar24 + 2;
            puVar25 = puVar37;
          } while (uVar38 != 0);
        }
      }
      else {
        uVar38 = uVar38 - 1;
        uVar39 = *(undefined8 *)((long)puVar24 - uVar21);
        puVar24[1] = ((undefined8 *)((long)puVar24 - uVar21))[1];
        *puVar24 = uVar39;
        puVar37 = (undefined8 *)((long)puVar24 + (ulong)((uVar38 & 0xf) + 1));
        if (0xf < uVar38) {
          uVar38 = uVar38 >> 4;
          puVar24 = puVar37;
          do {
            uVar39 = *(undefined8 *)((long)puVar24 - uVar21);
            puVar37 = puVar24 + 2;
            puVar24[1] = ((undefined8 *)((long)puVar24 - uVar21))[1];
            *puVar24 = uVar39;
            uVar38 = uVar38 - 1;
            puVar24 = puVar37;
          } while (uVar38 != 0);
        }
      }
      goto LAB_10b41d6a0;
    }
  }
  uVar30 = (uint)uVar21;
  if (lVar28 < 0x10) {
    if ((uVar30 >> 3 & 1) != 0) {
      *puVar24 = *puVar25;
      puVar25 = puVar25 + 1;
      puVar24 = puVar24 + 1;
    }
    if ((uVar30 >> 2 & 1) != 0) {
      *(undefined4 *)puVar24 = *(undefined4 *)puVar25;
      puVar25 = (undefined8 *)((long)puVar25 + 4);
      puVar24 = (undefined8 *)((long)puVar24 + 4);
    }
    if ((uVar30 >> 1 & 1) != 0) {
      *(undefined2 *)puVar24 = *(undefined2 *)puVar25;
      puVar25 = (undefined8 *)((long)puVar25 + 2);
      puVar24 = (undefined8 *)((long)puVar24 + 2);
    }
    puVar37 = puVar24;
    if ((uVar21 & 1) != 0) {
      *(undefined1 *)puVar24 = *(undefined1 *)puVar25;
      puVar37 = (undefined8 *)((long)puVar24 + 1);
    }
  }
  else {
    uVar30 = uVar30 - 1;
    uVar21 = (ulong)((uVar30 & 0xf) + 1);
    uVar39 = *puVar25;
    puVar24[1] = puVar25[1];
    *puVar24 = uVar39;
    puVar37 = (undefined8 *)((long)puVar24 + uVar21);
    if (0xf < uVar30) {
      lVar28 = (ulong)((uVar30 >> 4) - 1) * 0x10;
      _memcpy(puVar37,(long)puVar25 + uVar21,lVar28 + 0x10);
      puVar37 = (undefined8 *)((long)puVar24 + (ulong)(uVar30 & 0xf) + lVar28 + 0x11);
    }
  }
LAB_10b41d6a0:
  if ((plVar2 <= plVar32) || (puVar24 = puVar37, puVar3 <= puVar37)) goto LAB_10b41df44;
  goto LAB_10b41d644;
}



/* Entry: 10b41dfa8; end: 10b41e087;  */

undefined8 FUN_10b41dfa8(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
      ((plVar2 = *(long **)(param_1 + 0x38), plVar2 != (long *)0x0 && (*plVar2 == param_1)))) &&
     ((int)plVar2[1] - 0x3f34U < 0x20)) {
    plVar2[8] = 0;
    *(undefined4 *)((long)plVar2 + 0x3c) = 0;
    if (((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x48) != 0)) &&
       ((plVar2 = *(long **)(param_1 + 0x38), plVar2 != (long *)0x0 &&
        ((*plVar2 == param_1 && ((int)plVar2[1] - 0x3f34U < 0x20)))))) {
      plVar2[5] = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (*(uint *)(plVar2 + 2) != 0) {
        *(ulong *)(param_1 + 0x60) = (ulong)*(uint *)(plVar2 + 2) & 1;
      }
      plVar2[1] = 0x3f34;
      *(undefined4 *)((long)plVar2 + 0x1c) = 0x8000;
      plVar1 = plVar2 + 0xab;
      plVar2[0x12] = (long)plVar1;
      plVar2[0xd] = (long)plVar1;
      plVar2[0xe] = (long)plVar1;
      *(undefined4 *)((long)plVar2 + 0x14) = 0;
      plVar2[6] = 0;
      plVar2[10] = 0;
      *(undefined4 *)(plVar2 + 0xb) = 0;
      plVar2[0x37d] = -0xffffffff;
      return 0;
    }
  }
  return 0xfffffffe;
}



/* Entry: 10b41e088; end: 10b41e243;  */

long FUN_10b41e088(long param_1,uint param_2,char *param_3,int param_4)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  
  if (param_3 == (char *)0x0) {
    return 0xfffffffa;
  }
  if (param_4 != 0x70) {
    return 0xfffffffa;
  }
  if (*param_3 != '1') {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  pcVar2 = *(code **)(param_1 + 0x40);
  if (pcVar2 == (code *)0x0) {
    pcVar2 = FUN_10b41d2d4;
    *(code **)(param_1 + 0x40) = FUN_10b41d2d4;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    *(undefined8 *)(param_1 + 0x48) = 0x10b41d2dc;
    plVar1 = *(long **)(param_1 + 0x50);
    (*pcVar2)(plVar1,1,0x1bf8);
  }
  else {
    plVar1 = *(long **)(param_1 + 0x50);
    (*pcVar2)(plVar1,1,0x1bf8);
  }
  if (plVar1 == (long *)0x0) {
    return 0xfffffffc;
  }
  *(long **)(param_1 + 0x38) = plVar1;
  *plVar1 = param_1;
  plVar1[9] = 0;
  *(undefined4 *)(plVar1 + 1) = 0x3f34;
  plVar1[4] = 1;
  pcVar2 = *(code **)(param_1 + 0x48);
  if ((((*(long *)(param_1 + 0x40) != 0) && (pcVar2 != (code *)0x0)) &&
      (plVar3 = *(long **)(param_1 + 0x38), plVar3 != (long *)0x0)) &&
     ((*plVar3 == param_1 && ((int)plVar3[1] - 0x3f34U < 0x20)))) {
    if ((int)param_2 < 0) {
      iVar5 = 0;
      uVar6 = -param_2;
    }
    else {
      iVar5 = (param_2 >> 4) + 5;
      uVar6 = param_2 & 0xf;
      if (0x2f < param_2) {
        uVar6 = param_2;
      }
    }
    if ((uVar6 - 8 < 8) || (uVar6 == 0)) {
      if ((plVar3[9] != 0) && (*(uint *)(plVar3 + 7) != uVar6)) {
        (*pcVar2)(*(undefined8 *)(param_1 + 0x50));
        plVar3[9] = 0;
      }
      *(int *)(plVar3 + 2) = iVar5;
      *(uint *)(plVar3 + 7) = uVar6;
      lVar4 = param_1;
      FUN_10b41dfa8();
      if ((int)lVar4 == 0) {
        return 0;
      }
      pcVar2 = *(code **)(param_1 + 0x48);
      goto LAB_10b41e214;
    }
  }
  lVar4 = 0xfffffffe;
LAB_10b41e214:
  (*pcVar2)(*(undefined8 *)(param_1 + 0x50),plVar1);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return lVar4;
}



/* Entry: 10b41e244; end: 10b41e253;  */

/* WARNING: Removing unreachable block (ram,0x00010b41e1a8) */
/* WARNING: Removing unreachable block (ram,0x00010b41e16c) */
/* WARNING: Removing unreachable block (ram,0x00010b41e20c) */

long FUN_10b41e244(long param_1,char *param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  
  lVar2 = 0xfffffffa;
  if (((param_2 != (char *)0x0) && (param_3 == 0x70)) && (*param_2 == '1')) {
    if (param_1 == 0) {
      return 0xfffffffe;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    pcVar3 = *(code **)(param_1 + 0x40);
    if (pcVar3 == (code *)0x0) {
      pcVar3 = FUN_10b41d2d4;
      *(code **)(param_1 + 0x40) = FUN_10b41d2d4;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 0x10b41d2dc;
      plVar1 = *(long **)(param_1 + 0x50);
      (*pcVar3)(plVar1,1,0x1bf8);
    }
    else {
      plVar1 = *(long **)(param_1 + 0x50);
      (*pcVar3)(plVar1,1,0x1bf8);
    }
    if (plVar1 == (long *)0x0) {
      lVar2 = 0xfffffffc;
    }
    else {
      *(long **)(param_1 + 0x38) = plVar1;
      *plVar1 = param_1;
      plVar1[9] = 0;
      *(undefined4 *)(plVar1 + 1) = 0x3f34;
      plVar1[4] = 1;
      pcVar3 = *(code **)(param_1 + 0x48);
      if (((*(long *)(param_1 + 0x40) == 0) || (pcVar3 == (code *)0x0)) ||
         ((plVar4 = *(long **)(param_1 + 0x38), plVar4 == (long *)0x0 ||
          ((*plVar4 != param_1 || (0x1f < (int)plVar4[1] - 0x3f34U)))))) {
        lVar2 = 0xfffffffe;
      }
      else {
        if ((plVar4[9] != 0) && ((int)plVar4[7] != 0xf)) {
          (*pcVar3)(*(undefined8 *)(param_1 + 0x50));
          plVar4[9] = 0;
        }
        *(undefined4 *)(plVar4 + 2) = 5;
        *(undefined4 *)(plVar4 + 7) = 0xf;
        lVar2 = param_1;
        FUN_10b41dfa8();
        if ((int)lVar2 == 0) {
          return 0;
        }
        pcVar3 = *(code **)(param_1 + 0x48);
      }
      (*pcVar3)(*(undefined8 *)(param_1 + 0x50),plVar1);
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
  }
  return lVar2;
}



/* Entry: 10b41e254; end: 10b42000f;  */

undefined8 * FUN_10b41e254(long *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  byte *pbVar21;
  ushort *puVar22;
  byte *pbVar23;
  long lVar24;
  undefined *puVar25;
  ulong uVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  undefined2 uVar33;
  ulong uVar34;
  byte *pbVar35;
  ulong uVar36;
  undefined1 *puVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  byte *pbVar41;
  undefined8 *puVar42;
  undefined8 uVar43;
  uint uStack_8c;
  uint uStack_80;
  undefined4 uStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_6c = 0xaaaaaaaa;
  puVar12 = param_2;
  if ((((((param_1 != (long *)0x0) && (param_1[8] != 0)) && (param_1[9] != 0)) &&
       ((puVar42 = (undefined8 *)param_1[7], puVar42 != (undefined8 *)0x0 &&
        ((long *)*puVar42 == param_1)))) &&
      ((iVar18 = *(int *)(puVar42 + 1), iVar18 - 0x3f34U < 0x20 &&
       (puVar37 = (undefined1 *)param_1[3], puVar37 != (undefined1 *)0x0)))) &&
     ((pbVar41 = (byte *)*param_1, pbVar41 != (byte *)0x0 || ((int)param_1[1] == 0)))) {
    if (iVar18 == 0x3f3f) {
      iVar18 = 0x3f40;
      *(undefined4 *)(puVar42 + 1) = 0x3f40;
      puVar37 = (undefined1 *)param_1[3];
      pbVar41 = (byte *)*param_1;
    }
    uVar39 = (ulong)*(uint *)(param_1 + 4);
    uVar13 = *(uint *)(param_1 + 1);
    uVar26 = (ulong)uVar13;
    uVar40 = puVar42[10];
    param_4 = (ulong)*(uint *)(puVar42 + 0xb);
    puVar7 = puVar42 + 0x13;
    puVar2 = puVar42 + 0xab;
    iVar11 = (int)param_2;
    uStack_8c = 0;
    uStack_80 = *(uint *)(param_1 + 4);
LAB_10b41e394:
    uVar15 = (uint)uVar26;
    uVar14 = (uint)param_4;
    uVar38 = (uint)uVar39;
    pbVar23 = pbVar41;
    uVar31 = uVar26;
    uVar19 = 1;
    pbVar21 = pbVar41;
    switch(iVar18) {
    case 0x3f34:
      uVar19 = *(uint *)(puVar42 + 2);
      if (uVar19 != 0) {
        if (uVar14 < 0x10) {
          uVar31 = param_4 & 0xffffffff;
          uVar26 = uVar31;
          if (uVar15 != 0) {
            uVar17 = uVar15 - 1;
            pbVar23 = pbVar41 + 1;
            uVar40 = ((ulong)*pbVar41 << (param_4 & 0x3f)) + uVar40;
            param_4 = uVar31 + 8;
            if (uVar14 < 8) {
              uVar26 = param_4;
              if (uVar17 == 0) goto code_r0x00010b41fe04;
              uVar17 = uVar15 - 2;
              pbVar23 = pbVar41 + 2;
              uVar40 = ((ulong)pbVar41[1] << (param_4 & 0x3f)) + uVar40;
              param_4 = uVar31 | 0x10;
            }
            uVar26 = (ulong)uVar17;
            goto code_r0x00010b41e414;
          }
          goto code_r0x00010b41fe04;
        }
code_r0x00010b41e414:
        pbVar41 = pbVar23;
        if (((uVar19 >> 1 & 1) == 0) || (uVar40 != 0x8b1f)) {
          *(undefined4 *)(puVar42 + 3) = 0;
          if (puVar42[6] != 0) {
            *(undefined4 *)(puVar42[6] + 0x48) = 0xffffffff;
            uVar19 = *(uint *)(puVar42 + 2);
          }
          if (((uVar19 & 1) == 0) ||
             (0x842108421084210 < ((uVar40 & 0xff) * 0x100 + (uVar40 >> 8)) * -0x1084210842108421))
          {
            puVar25 = &UNK_10f75e2ca;
            goto code_r0x00010b41e384;
          }
          if ((uVar40 & 0xf) != 8) goto code_r0x00010b41fd08;
          uVar31 = uVar40 >> 4 & 0xf;
          uVar19 = (uint)uVar31;
          uVar14 = uVar19 + 8;
          uVar15 = *(uint *)(puVar42 + 7);
          if (*(uint *)(puVar42 + 7) == 0) {
            *(uint *)(puVar42 + 7) = uVar14;
            uVar15 = uVar14;
          }
          if ((uVar19 < 8) && (uVar14 <= uVar15)) {
            *(int *)((long)puVar42 + 0x1c) = 0x100 << uVar31;
            lVar10 = 0;
            param_3 = 0;
            FUN_10b41c45c(0,0);
            param_4 = 0;
            puVar42[4] = lVar10;
            param_1[0xc] = lVar10;
            uVar20 = 0x3f3f;
            if ((uVar40 & 0x2000) != 0) {
              uVar20 = 0x3f3d;
            }
            *(undefined4 *)(puVar42 + 1) = uVar20;
            uVar40 = 0;
          }
          else {
            uVar40 = uVar40 >> 4;
            param_4 = (ulong)((int)param_4 - 4);
            param_1[6] = (long)&UNK_10f75e2fc;
            *(undefined4 *)(puVar42 + 1) = 0x3f51;
          }
          puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
          iVar18 = *(int *)(puVar42 + 1);
        }
        else {
          if (*(int *)(puVar42 + 7) == 0) {
            *(undefined4 *)(puVar42 + 7) = 0xf;
          }
          uVar8 = 0;
          FUN_10b41c7c0(0,0,0);
          puVar42[4] = uVar8;
          uStack_6c = CONCAT22(uStack_6c._2_2_,0x8b1f);
          param_3 = 2;
          FUN_10b41c7c0();
          uVar40 = 0;
          param_4 = 0;
          puVar42[4] = uVar8;
          *(undefined4 *)(puVar42 + 1) = 0x3f35;
          puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
          iVar18 = 0x3f35;
        }
        goto LAB_10b41e394;
      }
      iVar18 = 0x3f40;
      break;
    case 0x3f35:
      if (uVar14 < 0x10) {
        uVar26 = param_4 & 0xffffffff;
        if (uVar15 == 0) {
code_r0x00010b41fe18:
          param_4 = param_4 & 0xffffffff;
          goto code_r0x00010b41fe1c;
        }
        uVar19 = uVar15 - 1;
        pbVar23 = pbVar41 + 1;
        uVar40 = ((ulong)*pbVar41 << (param_4 & 0x3f)) + uVar40;
        param_4 = uVar26 + 8;
        if (uVar14 < 8) {
          if (uVar19 == 0) goto code_r0x00010b41fe1c;
          uVar19 = uVar15 - 2;
          pbVar23 = pbVar41 + 2;
          uVar40 = ((ulong)pbVar41[1] << (param_4 & 0x3f)) + uVar40;
          param_4 = uVar26 | 0x10;
        }
        uVar26 = (ulong)uVar19;
      }
      uVar15 = (uint)uVar26;
      uVar14 = (uint)uVar40;
      *(uint *)(puVar42 + 3) = uVar14;
      if ((uVar14 & 0xff) == 8) {
        if ((uVar40 & 0xe000) == 0) {
          if ((uint *)puVar42[6] != (uint *)0x0) {
            *(uint *)puVar42[6] = uVar14 >> 8 & 1;
            uVar14 = *(uint *)(puVar42 + 3);
          }
          if (((uVar14 >> 9 & 1) != 0) && ((*(byte *)(puVar42 + 2) >> 2 & 1) != 0)) {
            uStack_6c = CONCAT22(uStack_6c._2_2_,(short)uVar40);
            uVar8 = puVar42[4];
            FUN_10b41c7c0(uVar8,&uStack_6c,2);
            puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
            puVar42[4] = uVar8;
          }
          param_4 = 0;
          uVar40 = 0;
          *(undefined4 *)(puVar42 + 1) = 0x3f36;
          pbVar21 = pbVar23;
          goto code_r0x00010b41f1c0;
        }
        puVar25 = &UNK_10f75e310;
      }
      else {
code_r0x00010b41fd08:
        puVar25 = &UNK_10f75e2e1;
      }
      goto code_r0x00010b41e384;
    case 0x3f36:
      uVar19 = uVar15;
      if (uVar14 < 0x20) {
code_r0x00010b41f1c0:
        uVar26 = param_4 & 0xffffffff;
        pbVar23 = pbVar21;
        uVar30 = uVar26;
        if (uVar15 != 0) {
          pbVar41 = pbVar21 + 1;
          uVar40 = ((ulong)*pbVar21 << (param_4 & 0x3f)) + uVar40;
          uVar14 = (uint)param_4;
          uVar19 = uVar15 - 1;
          if (uVar14 < 0x18) {
            pbVar23 = pbVar41;
            uVar30 = uVar26 + 8;
            if (uVar15 - 1 == 0) goto code_r0x00010b41fe4c;
            pbVar41 = pbVar21 + 2;
            uVar40 = ((ulong)pbVar21[1] << (uVar26 + 8 & 0x3f)) + uVar40;
            uVar19 = uVar15 - 2;
            if (uVar14 < 0x10) {
              pbVar23 = pbVar41;
              uVar30 = uVar26 + 0x10;
              if (uVar15 - 2 == 0) goto code_r0x00010b41fe4c;
              pbVar41 = pbVar21 + 3;
              uVar40 = ((ulong)pbVar21[2] << (uVar26 + 0x10 & 0x3f)) + uVar40;
              uVar19 = uVar15 - 3;
              if (uVar14 < 8) {
                pbVar23 = pbVar41;
                uVar30 = uVar26 + 0x18;
                if (uVar15 - 3 == 0) goto code_r0x00010b41fe4c;
                pbVar41 = pbVar21 + 4;
                uVar40 = ((ulong)pbVar21[3] << (uVar26 + 0x18 & 0x3f)) + uVar40;
                uVar19 = uVar15 - 4;
              }
            }
          }
          goto code_r0x00010b41f254;
        }
      }
      else {
code_r0x00010b41f254:
        uVar15 = uVar19;
        if (puVar42[6] != 0) {
          *(ulong *)(puVar42[6] + 8) = uVar40;
        }
        if (((*(byte *)((long)puVar42 + 0x19) >> 1 & 1) != 0) &&
           ((*(byte *)(puVar42 + 2) >> 2 & 1) != 0)) {
          uStack_6c = (undefined4)uVar40;
          uVar8 = puVar42[4];
          FUN_10b41c7c0(uVar8,&uStack_6c,4);
          puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
          puVar42[4] = uVar8;
        }
        param_4 = 0;
        uVar40 = 0;
        *(undefined4 *)(puVar42 + 1) = 0x3f37;
code_r0x00010b41f2a4:
        pbVar23 = pbVar41;
        uVar30 = param_4 & 0xffffffff;
        if (uVar15 != 0) {
          uVar14 = uVar15 - 1;
          pbVar23 = pbVar41 + 1;
          uVar40 = ((ulong)*pbVar41 << (param_4 & 0x3f)) + uVar40;
          if ((uint)param_4 < 8) {
            uVar30 = (param_4 & 0xffffffff) + 8;
            if (uVar14 == 0) goto code_r0x00010b41fe4c;
            uVar14 = uVar15 - 2;
            pbVar23 = pbVar41 + 2;
            uVar40 = ((ulong)pbVar41[1] << (uVar30 & 0x3f)) + uVar40;
          }
          uVar26 = (ulong)uVar14;
          pbVar41 = pbVar23;
          goto code_r0x00010b41f2f8;
        }
      }
      goto code_r0x00010b41fe4c;
    case 0x3f37:
      if (uVar14 < 0x10) goto code_r0x00010b41f2a4;
code_r0x00010b41f2f8:
      uVar15 = (uint)uVar26;
      if (puVar42[6] != 0) {
        *(uint *)(puVar42[6] + 0x10) = (uint)uVar40 & 0xff;
        *(int *)(puVar42[6] + 0x14) = (int)(uVar40 >> 8);
      }
      uVar19 = *(uint *)(puVar42 + 3);
      if (((uVar19 >> 9 & 1) != 0) && ((*(byte *)(puVar42 + 2) >> 2 & 1) != 0)) {
        uStack_6c = CONCAT22(uStack_6c._2_2_,(short)uVar40);
        uVar8 = puVar42[4];
        FUN_10b41c7c0(uVar8,&uStack_6c,2);
        puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
        puVar42[4] = uVar8;
      }
      uVar40 = 0;
      param_4 = 0;
      *(undefined4 *)(puVar42 + 1) = 0x3f38;
      uVar31 = 0;
      pbVar23 = pbVar41;
      if ((uVar19 >> 10 & 1) == 0) {
code_r0x00010b41f360:
        if (puVar42[6] != 0) {
          *(undefined8 *)(puVar42[6] + 0x18) = 0;
        }
        goto code_r0x00010b41f41c;
      }
code_r0x00010b41f370:
      pbVar23 = pbVar41;
      uVar30 = uVar31 & 0xffffffff;
      if (uVar15 != 0) {
        uVar14 = uVar15 - 1;
        pbVar23 = pbVar41 + 1;
        uVar40 = ((ulong)*pbVar41 << (uVar31 & 0x3f)) + uVar40;
        if ((uint)uVar31 < 8) {
          uVar30 = (uVar31 & 0xffffffff) + 8;
          if (uVar14 == 0) goto code_r0x00010b41fe4c;
          uVar14 = uVar15 - 2;
          pbVar23 = pbVar41 + 2;
          uVar40 = ((ulong)pbVar41[1] << (uVar30 & 0x3f)) + uVar40;
        }
        uVar26 = (ulong)uVar14;
        goto code_r0x00010b41f3c4;
      }
code_r0x00010b41fe4c:
      param_4 = uVar30;
      uVar15 = 0;
      uVar19 = uStack_8c;
      goto code_r0x00010b41fe54;
    case 0x3f38:
      uVar19 = *(uint *)(puVar42 + 3);
      if ((uVar19 >> 10 & 1) == 0) goto code_r0x00010b41f360;
      uVar31 = param_4;
      if (uVar14 < 0x10) goto code_r0x00010b41f370;
code_r0x00010b41f3c4:
      *(int *)((long)puVar42 + 0x5c) = (int)uVar40;
      if (puVar42[6] != 0) {
        *(int *)(puVar42[6] + 0x20) = (int)uVar40;
        uVar19 = *(uint *)(puVar42 + 3);
      }
      if (((uVar19 >> 9 & 1) == 0) || ((*(byte *)(puVar42 + 2) >> 2 & 1) == 0)) {
        uVar40 = 0;
        param_4 = 0;
      }
      else {
        uStack_6c = CONCAT22(uStack_6c._2_2_,(short)uVar40);
        uVar8 = puVar42[4];
        FUN_10b41c7c0(uVar8,&uStack_6c,2);
        puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
        uVar40 = 0;
        param_4 = 0;
        puVar42[4] = uVar8;
      }
code_r0x00010b41f41c:
      *(undefined4 *)(puVar42 + 1) = 0x3f39;
      param_3 = param_4;
    case 0x3f39:
      uVar14 = *(uint *)(puVar42 + 3);
      if ((uVar14 >> 10 & 1) != 0) {
        uVar17 = *(uint *)((long)puVar42 + 0x5c);
        uVar19 = (uint)uVar26;
        uVar15 = uVar17;
        if (uVar19 <= uVar17) {
          uVar15 = uVar19;
        }
        uVar31 = (ulong)uVar15;
        if (uVar15 != 0) {
          lVar10 = puVar42[6];
          if ((lVar10 != 0) && (*(long *)(lVar10 + 0x18) != 0)) {
            uVar17 = *(int *)(lVar10 + 0x20) - uVar17;
            uVar14 = *(uint *)(lVar10 + 0x24) - uVar17;
            if (uVar17 + uVar15 <= *(uint *)(lVar10 + 0x24)) {
              uVar14 = uVar15;
            }
            param_3 = (ulong)uVar14;
            _memcpy(*(long *)(lVar10 + 0x18) + (ulong)uVar17,pbVar23);
            puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
            uVar14 = *(uint *)(puVar42 + 3);
          }
          if (((uVar14 >> 9 & 1) != 0) && ((*(byte *)(puVar42 + 2) >> 2 & 1) != 0)) {
            uVar8 = puVar42[4];
            FUN_10b41c7c0(uVar8,pbVar23);
            puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
            puVar42[4] = uVar8;
            param_3 = uVar31;
          }
          uVar26 = (ulong)(uVar19 - uVar15);
          pbVar23 = pbVar23 + uVar15;
          uVar17 = *(int *)((long)puVar42 + 0x5c) - uVar15;
          *(uint *)((long)puVar42 + 0x5c) = uVar17;
        }
        uVar15 = (uint)uVar26;
        uVar19 = uStack_8c;
        if (uVar17 != 0) goto code_r0x00010b41fe54;
      }
      *(undefined4 *)((long)puVar42 + 0x5c) = 0;
      *(undefined4 *)(puVar42 + 1) = 0x3f3a;
code_r0x00010b41f4f4:
      if ((uVar14 >> 0xb & 1) == 0) {
        if (puVar42[6] != 0) {
          *(undefined8 *)(puVar42[6] + 0x28) = 0;
        }
      }
      else {
        if ((int)uVar26 == 0) {
          uVar15 = 0;
          uVar19 = uStack_8c;
          goto code_r0x00010b41fe54;
        }
        uVar31 = 0;
        do {
          bVar4 = pbVar23[uVar31];
          lVar10 = puVar42[6];
          if ((lVar10 != 0) && (lVar24 = *(long *)(lVar10 + 0x28), lVar24 != 0)) {
            uVar14 = *(uint *)((long)puVar42 + 0x5c);
            if (uVar14 < *(uint *)(lVar10 + 0x30)) {
              *(uint *)((long)puVar42 + 0x5c) = uVar14 + 1;
              *(byte *)(lVar24 + (ulong)uVar14) = bVar4;
            }
          }
          uVar31 = uVar31 + 1;
        } while (bVar4 != 0 && uVar31 < (uVar26 & 0xffffffff));
        if (((*(byte *)((long)puVar42 + 0x19) >> 1 & 1) != 0) &&
           ((*(byte *)(puVar42 + 2) >> 2 & 1) != 0)) {
          uVar8 = puVar42[4];
          param_3 = uVar31;
          FUN_10b41c7c0(uVar8,pbVar23);
          puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
          puVar42[4] = uVar8;
        }
        pbVar23 = pbVar23 + uVar31;
        if (bVar4 != 0) {
          uVar15 = (int)uVar26 - (int)uVar31;
          uVar19 = uStack_8c;
          goto code_r0x00010b41fe54;
        }
        uVar26 = (uVar26 & 0xffffffff) - uVar31;
      }
      *(undefined4 *)((long)puVar42 + 0x5c) = 0;
      *(undefined4 *)(puVar42 + 1) = 0x3f3b;
code_r0x00010b41f5d0:
      if ((*(byte *)((long)puVar42 + 0x19) >> 4 & 1) == 0) {
        if (puVar42[6] != 0) {
          *(undefined8 *)(puVar42[6] + 0x38) = 0;
        }
      }
      else {
        uVar15 = 0;
        uVar19 = uStack_8c;
        if ((int)uVar26 == 0) goto code_r0x00010b41fe54;
        uVar31 = 0;
        do {
          bVar4 = pbVar23[uVar31];
          lVar10 = puVar42[6];
          if ((lVar10 != 0) && (lVar24 = *(long *)(lVar10 + 0x38), lVar24 != 0)) {
            uVar14 = *(uint *)((long)puVar42 + 0x5c);
            if (uVar14 < *(uint *)(lVar10 + 0x40)) {
              *(uint *)((long)puVar42 + 0x5c) = uVar14 + 1;
              *(byte *)(lVar24 + (ulong)uVar14) = bVar4;
            }
          }
          uVar31 = uVar31 + 1;
        } while (bVar4 != 0 && uVar31 < (uVar26 & 0xffffffff));
        if (((*(byte *)((long)puVar42 + 0x19) >> 1 & 1) != 0) &&
           ((*(byte *)(puVar42 + 2) >> 2 & 1) != 0)) {
          uVar8 = puVar42[4];
          param_3 = uVar31;
          FUN_10b41c7c0(uVar8,pbVar23);
          puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
          puVar42[4] = uVar8;
        }
        pbVar23 = pbVar23 + uVar31;
        if (bVar4 != 0) {
          uVar15 = (int)uVar26 - (int)uVar31;
          goto code_r0x00010b41fe54;
        }
        uVar26 = (uVar26 & 0xffffffff) - uVar31;
      }
      *(undefined4 *)(puVar42 + 1) = 0x3f3c;
      pbVar41 = pbVar23;
code_r0x00010b41f6b4:
      pbVar23 = pbVar41;
      if ((*(uint *)(puVar42 + 3) >> 9 & 1) != 0) {
        uVar14 = (uint)param_4;
        if (uVar14 < 0x10) {
          uVar31 = param_4 & 0xffffffff;
          iVar18 = (int)uVar26;
          uVar26 = uVar31;
          if (iVar18 == 0) {
code_r0x00010b41fe04:
            param_4 = uVar26;
            uVar15 = 0;
            uVar19 = uStack_8c;
            goto code_r0x00010b41fe54;
          }
          uVar15 = iVar18 - 1;
          pbVar23 = pbVar41 + 1;
          uVar40 = ((ulong)*pbVar41 << (param_4 & 0x3f)) + uVar40;
          param_4 = uVar31 + 8;
          if (uVar14 < 8) {
            uVar26 = param_4;
            if (uVar15 == 0) goto code_r0x00010b41fe04;
            uVar15 = iVar18 - 2;
            pbVar23 = pbVar41 + 2;
            uVar40 = ((ulong)pbVar41[1] << (param_4 & 0x3f)) + uVar40;
            param_4 = uVar31 | 0x10;
          }
          uVar26 = (ulong)uVar15;
        }
        if (((*(byte *)(puVar42 + 2) >> 2 & 1) != 0) && (uVar40 != *(ushort *)(puVar42 + 4))) {
          puVar25 = &UNK_10f75e329;
          goto code_r0x00010b41e384;
        }
        uVar40 = 0;
        param_4 = 0;
      }
      if (puVar42[6] != 0) {
        *(uint *)(puVar42[6] + 0x44) = *(uint *)(puVar42 + 3) >> 9 & 1;
        *(undefined4 *)(puVar42[6] + 0x48) = 1;
      }
      lVar10 = 0;
      param_3 = 0;
      FUN_10b41c7c0(0,0);
      puVar42[4] = lVar10;
      param_1[0xc] = lVar10;
      iVar18 = 0x3f3f;
code_r0x00010b41f774:
      *(int *)(puVar42 + 1) = iVar18;
      puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
      pbVar41 = pbVar23;
      goto LAB_10b41e394;
    case 0x3f3a:
      uVar14 = *(uint *)(puVar42 + 3);
      goto code_r0x00010b41f4f4;
    case 0x3f3b:
      goto code_r0x00010b41f5d0;
    case 0x3f3c:
      goto code_r0x00010b41f6b4;
    case 0x3f3d:
      if (uVar14 < 0x20) {
        uVar31 = param_4 & 0xffffffff;
        if (uVar15 == 0) goto code_r0x00010b41fe18;
        uVar26 = (ulong)(uVar15 - 1);
        pbVar23 = pbVar41 + 1;
        uVar40 = ((ulong)*pbVar41 << (param_4 & 0x3f)) + uVar40;
        if (uVar14 < 0x18) {
          param_4 = uVar31 + 8;
          if (uVar15 - 1 == 0) {
code_r0x00010b41fe1c:
            uVar15 = 0;
            uVar19 = uStack_8c;
            goto code_r0x00010b41fe54;
          }
          uVar26 = (ulong)(uVar15 - 2);
          pbVar23 = pbVar41 + 2;
          uVar40 = ((ulong)pbVar41[1] << (param_4 & 0x3f)) + uVar40;
          if (uVar14 < 0x10) {
            param_4 = uVar31 + 0x10;
            if (uVar15 - 2 == 0) goto code_r0x00010b41fe1c;
            uVar26 = (ulong)(uVar15 - 3);
            pbVar23 = pbVar41 + 3;
            uVar40 = ((ulong)pbVar41[2] << (param_4 & 0x3f)) + uVar40;
            if (uVar14 < 8) {
              param_4 = uVar31 + 0x18;
              if (uVar15 - 3 == 0) goto code_r0x00010b41fe1c;
              uVar26 = (ulong)(uVar15 - 4);
              pbVar23 = pbVar41 + 4;
              uVar40 = ((ulong)pbVar41[3] << (param_4 & 0x3f)) + uVar40;
            }
          }
        }
      }
      param_4 = 0;
      uVar14 = ((uint)uVar40 & 0xff00ff00) >> 8 | ((uint)uVar40 & 0xff00ff) << 8;
      uVar40 = (ulong)(uVar14 >> 0x10 | uVar14 << 0x10);
      puVar42[4] = uVar40;
      param_1[0xc] = uVar40;
      *(undefined4 *)(puVar42 + 1) = 0x3f3e;
      uVar40 = 0;
      goto code_r0x00010b41eda8;
    case 0x3f3e:
code_r0x00010b41eda8:
      if (*(int *)((long)puVar42 + 0x14) == 0) {
        param_1[3] = (long)puVar37;
        *(uint *)(param_1 + 4) = uVar38;
        *param_1 = (long)pbVar23;
        *(int *)(param_1 + 1) = (int)uVar26;
        puVar42[10] = uVar40;
        puVar7 = (undefined8 *)0x2;
        *(int *)(puVar42 + 0xb) = (int)param_4;
        goto code_r0x00010b41e344;
      }
      lVar10 = 0;
      param_3 = 0;
      FUN_10b41c45c(0,0);
      puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
      puVar42[4] = lVar10;
      param_1[0xc] = lVar10;
      *(undefined4 *)(puVar42 + 1) = 0x3f3f;
code_r0x00010b41ede8:
      uVar15 = (uint)uVar26;
      uVar19 = uStack_8c;
      if (iVar11 - 5U < 2) goto code_r0x00010b41fe54;
code_r0x00010b41edf4:
      uVar14 = (uint)param_4;
      if (*(int *)((long)puVar42 + 0xc) != 0) {
        uVar40 = uVar40 >> (uVar14 & 7);
        param_4 = (ulong)(uVar14 & 0xfffffff8);
        iVar18 = 0x3f4e;
        pbVar41 = pbVar23;
        break;
      }
      if (uVar14 < 3) {
        uVar15 = 0;
        uVar19 = uStack_8c;
        if ((int)uVar26 == 0) goto code_r0x00010b41fe54;
        uVar31 = param_4 & 0x3f;
        param_4 = (ulong)(uVar14 | 8);
        uVar26 = (ulong)((int)uVar26 - 1);
        uVar40 = ((ulong)*pbVar23 << uVar31) + uVar40;
        pbVar23 = pbVar23 + 1;
      }
      uVar15 = (uint)uVar26;
      *(uint *)((long)puVar42 + 0xc) = (uint)uVar40 & 1;
      uVar14 = (uint)uVar40 >> 1 & 3;
      uVar40 = uVar40 >> 3;
      if (uVar14 < 2) {
        if (uVar14 == 0) {
          uVar20 = 0x3f41;
          goto code_r0x00010b41eeb4;
        }
        puVar42[0xd] = &UNK_10e58cc94;
        puVar42[0xe] = &UNK_10e58d494;
        puVar42[0xf] = 0x500000009;
        *(undefined4 *)(puVar42 + 1) = 0x3f47;
        if ((int)puVar12 == 6) {
          param_4 = (ulong)((int)param_4 - 3);
          uVar19 = uStack_8c;
          goto code_r0x00010b41fe54;
        }
      }
      else {
        if (uVar14 == 2) {
          uVar20 = 0x3f44;
        }
        else {
          param_1[6] = (long)&UNK_10f75e33d;
          uVar20 = 0x3f51;
        }
code_r0x00010b41eeb4:
        *(undefined4 *)(puVar42 + 1) = uVar20;
      }
      param_4 = (ulong)((int)param_4 - 3);
      iVar18 = *(int *)(puVar42 + 1);
      pbVar41 = pbVar23;
      goto LAB_10b41e394;
    case 0x3f3f:
      goto code_r0x00010b41ede8;
    case 0x3f40:
      goto code_r0x00010b41edf4;
    case 0x3f41:
      uVar40 = uVar40 >> (uVar14 & 7);
      if (uVar14 < 0x20) {
        uVar31 = param_4 & 0x18;
        uVar14 = uVar14 & 0x18;
        uVar27 = (ulong)uVar14;
        uVar30 = uVar27;
        if (uVar15 == 0) goto code_r0x00010b41fe4c;
        uVar26 = (ulong)(uVar15 - 1);
        pbVar23 = pbVar41 + 1;
        uVar40 = ((ulong)*pbVar41 << uVar27) + uVar40;
        param_4 = uVar27 + 8;
        if (uVar14 != 0x18) {
          uVar30 = param_4;
          if (uVar15 - 1 == 0) goto code_r0x00010b41fe4c;
          uVar26 = (ulong)(uVar15 - 2);
          pbVar23 = pbVar41 + 2;
          uVar40 = ((ulong)pbVar41[1] << param_4) + uVar40;
          param_4 = uVar27 + 0x10;
          if (uVar14 < 0x10) {
            uVar30 = param_4;
            if (uVar15 - 2 == 0) goto code_r0x00010b41fe4c;
            uVar26 = (ulong)(uVar15 - 3);
            pbVar23 = pbVar41 + 3;
            uVar40 = ((ulong)pbVar41[2] << param_4) + uVar40;
            param_4 = uVar27 + 0x18;
            if (uVar31 == 0) {
              uVar30 = param_4;
              if (uVar15 - 3 == 0) goto code_r0x00010b41fe4c;
              uVar26 = (ulong)(uVar15 - 4);
              pbVar23 = pbVar41 + 4;
              uVar40 = ((ulong)pbVar41[3] << param_4) + uVar40;
              param_4 = 0x20;
            }
          }
        }
      }
      else {
        param_4 = (ulong)(uVar14 & 0xfffffff8);
      }
      uVar15 = (uint)uVar26;
      if ((uVar40 & 0xffff ^ uVar40 >> 0x10) != 0xffff) {
        puVar25 = &UNK_10f75e350;
        goto code_r0x00010b41e384;
      }
      param_4 = 0;
      *(uint *)((long)puVar42 + 0x5c) = (uint)uVar40 & 0xffff;
      *(undefined4 *)(puVar42 + 1) = 0x3f42;
      uVar40 = 0;
      uVar19 = uStack_8c;
      if ((int)puVar12 != 6) goto code_r0x00010b41e9dc;
      goto code_r0x00010b41fe54;
    case 0x3f42:
code_r0x00010b41e9dc:
      *(undefined4 *)(puVar42 + 1) = 0x3f43;
code_r0x00010b41e9e4:
      uVar15 = (uint)uVar26;
      uVar14 = *(uint *)((long)puVar42 + 0x5c);
      if (uVar14 != 0) {
        if (uVar15 <= uVar14) {
          uVar14 = uVar15;
        }
        if (uVar38 <= uVar14) {
          uVar14 = uVar38;
        }
        uVar31 = (ulong)uVar14;
        uVar19 = uStack_8c;
        if (uVar14 == 0) goto code_r0x00010b41fe54;
        param_3 = uVar31;
        _memcpy(puVar37,pbVar23);
        puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
        uVar26 = (ulong)(uVar15 - uVar14);
        uVar39 = (ulong)(uVar38 - uVar14);
        puVar37 = puVar37 + uVar31;
        *(uint *)((long)puVar42 + 0x5c) = *(int *)((long)puVar42 + 0x5c) - uVar14;
        iVar18 = *(int *)(puVar42 + 1);
        pbVar41 = pbVar23 + uVar31;
        goto LAB_10b41e394;
      }
code_r0x00010b41fc74:
      iVar18 = 0x3f3f;
      pbVar41 = pbVar23;
      break;
    case 0x3f43:
      goto code_r0x00010b41e9e4;
    case 0x3f44:
      if (uVar14 < 0xe) {
        uVar26 = param_4 & 0xffffffff;
        if (uVar15 == 0) goto code_r0x00010b41fe18;
        uVar19 = uVar15 - 1;
        pbVar23 = pbVar41 + 1;
        uVar40 = ((ulong)*pbVar41 << (param_4 & 0x3f)) + uVar40;
        param_4 = uVar26 + 8;
        if (uVar14 < 6) {
          if (uVar19 == 0) goto code_r0x00010b41fe1c;
          uVar19 = uVar15 - 2;
          pbVar23 = pbVar41 + 2;
          uVar40 = ((ulong)pbVar41[1] << (param_4 & 0x3f)) + uVar40;
          param_4 = uVar26 | 0x10;
        }
        uVar26 = (ulong)uVar19;
      }
      uVar30 = uVar40 & 0x1f;
      uVar27 = uVar40 >> 5 & 0x1f;
      *(int *)((long)puVar42 + 0x84) = (int)uVar30 + 0x101;
      *(int *)(puVar42 + 0x11) = (int)uVar27 + 1;
      uVar31 = (uVar40 >> 10 & 0xf) + 4;
      *(int *)(puVar42 + 0x10) = (int)uVar31;
      uVar40 = uVar40 >> 0xe;
      param_4 = (ulong)((int)param_4 - 0xe);
      if ((0x1d < uVar30) || (0x1d < uVar27)) {
        puVar25 = &UNK_10f75e36d;
        goto code_r0x00010b41e384;
      }
      uVar27 = 0;
      *(undefined4 *)((long)puVar42 + 0x8c) = 0;
      *(undefined4 *)(puVar42 + 1) = 0x3f45;
code_r0x00010b41e8c8:
      do {
        pbVar41 = pbVar23;
        if ((uint)param_4 < 3) {
          uVar30 = param_4;
          if ((int)uVar26 == 0) goto code_r0x00010b41fe4c;
          pbVar41 = pbVar23 + 1;
          uVar30 = param_4 & 0x3f;
          param_4 = (ulong)((uint)param_4 | 8);
          uVar26 = (ulong)((int)uVar26 - 1);
          uVar40 = ((ulong)*pbVar23 << uVar30) + uVar40;
        }
        uVar30 = uVar27 + 1;
        *(int *)((long)puVar42 + 0x8c) = (int)uVar27 + 1;
        *(ushort *)((long)puVar7 + (ulong)*(ushort *)(&UNK_10e58cc6e + uVar27 * 2) * 2) =
             (ushort)uVar40 & 7;
        uVar40 = uVar40 >> 3;
        param_4 = (ulong)((int)param_4 - 3);
        uVar27 = uVar30;
        pbVar23 = pbVar41;
      } while (uVar30 < uVar31);
      uVar27 = uVar30 & 0xffffffff;
      goto code_r0x00010b41e908;
    case 0x3f45:
      uVar27 = (ulong)*(uint *)((long)puVar42 + 0x8c);
      uVar31 = (ulong)*(uint *)(puVar42 + 0x10);
      if (uVar27 < uVar31) goto code_r0x00010b41e8c8;
code_r0x00010b41e908:
      if (uVar27 < 0x13) {
        uVar31 = 0x13 - uVar27;
        if (((uVar31 < 2) || (0xfffffffe - uVar27 < (0x12 - uVar27 & 0xffffffff))) ||
           (0x12 - uVar27 >> 0x20 != 0)) {
code_r0x00010b41e92c:
          puVar22 = (ushort *)(&UNK_10e58cc6e + uVar27 * 2);
          do {
            uVar27 = uVar27 + 1;
            *(undefined2 *)((long)puVar7 + (ulong)*puVar22 * 2) = 0;
            puVar22 = puVar22 + 1;
          } while ((int)uVar27 != 0x13);
        }
        else {
          uVar32 = uVar31 & 0xfffffffffffffffe;
          puVar22 = (ushort *)(&UNK_10e58cc70 + uVar27 * 2);
          uVar30 = uVar32;
          do {
            uVar6 = *puVar22;
            *(undefined2 *)((long)puVar7 + (ulong)puVar22[-1] * 2) = 0;
            *(undefined2 *)((long)puVar7 + (ulong)uVar6 * 2) = 0;
            uVar30 = uVar30 - 2;
            puVar22 = puVar22 + 2;
          } while (uVar30 != 0);
          uVar27 = uVar32 + uVar27;
          if (uVar31 != uVar32) goto code_r0x00010b41e92c;
        }
        *(undefined4 *)((long)puVar42 + 0x8c) = 0x13;
      }
      puVar42[0x12] = puVar2;
      puVar42[0xd] = puVar2;
      *(undefined4 *)(puVar42 + 0xf) = 7;
      uStack_8c = 0;
      param_3 = 0x13;
      FUN_10b41cc38(0,puVar7,0x13,puVar42 + 0x12,puVar42 + 0xf,puVar42 + 99);
      if (uStack_8c != 0) {
        param_1[6] = (long)&UNK_10f75e391;
        iVar18 = 0x3f51;
        pbVar23 = pbVar41;
        goto code_r0x00010b41f774;
      }
      uVar27 = 0;
      uStack_8c = 0;
      *(undefined4 *)((long)puVar42 + 0x8c) = 0;
      *(undefined4 *)(puVar42 + 1) = 0x3f46;
      puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
code_r0x00010b41ea90:
      param_3 = (ulong)*(uint *)((long)puVar42 + 0x84);
      uVar14 = *(int *)(puVar42 + 0x11) + *(uint *)((long)puVar42 + 0x84);
      pbVar23 = pbVar41;
      if ((uint)uVar27 < uVar14) {
        lVar10 = puVar42[0xd];
        uVar17 = ~(-1 << (ulong)(*(uint *)(puVar42 + 0xf) & 0x1f));
        uVar30 = param_4;
        uVar31 = uVar26;
        do {
          uVar34 = (ulong)((uint)uVar40 & uVar17);
          bVar4 = *(byte *)(lVar10 + uVar34 * 4 + 1);
          uVar32 = (ulong)bVar4;
          param_4 = uVar30;
          pbVar21 = pbVar41;
          uVar26 = uVar31;
          if ((uint)uVar30 < (uint)bVar4) {
            param_4 = uVar30 & 0xffffffff;
            pbVar23 = pbVar41;
            do {
              if ((int)uVar26 == 0) goto code_r0x00010b41fd58;
              uVar26 = (ulong)((int)uVar26 - 1);
              pbVar21 = pbVar23 + 1;
              uVar40 = ((ulong)*pbVar23 << (param_4 & 0x3f)) + uVar40;
              param_4 = param_4 + 8;
              uVar34 = (ulong)((uint)uVar40 & uVar17);
              uVar32 = (ulong)*(byte *)(lVar10 + uVar34 * 4 + 1);
              pbVar23 = pbVar21;
            } while (param_4 < uVar32);
          }
          uVar6 = *(ushort *)(lVar10 + uVar34 * 4 + 2);
          iVar18 = (int)uVar32;
          uVar15 = (uint)param_4;
          uVar16 = (uint)uVar27;
          if (0xf < uVar6) {
            pbVar23 = pbVar21;
            if (uVar6 == 0x10) {
              if (uVar15 < iVar18 + 2U) {
                param_4 = param_4 & 0xffffffff;
                do {
                  uVar15 = 0;
                  uVar19 = uStack_8c;
                  if ((int)uVar26 == 0) goto code_r0x00010b41fe54;
                  uVar26 = (ulong)((int)uVar26 - 1);
                  pbVar21 = pbVar23 + 1;
                  uVar40 = ((ulong)*pbVar23 << (param_4 & 0x3f)) + uVar40;
                  param_4 = param_4 + 8;
                  pbVar23 = pbVar21;
                } while (param_4 < iVar18 + 2U);
              }
              uVar40 = uVar40 >> (uVar32 & 0x3f);
              uVar15 = (int)param_4 - iVar18;
              param_4 = (ulong)uVar15;
              if (uVar16 != 0) {
                uVar33 = *(undefined2 *)((long)puVar7 + (ulong)(uVar16 - 1) * 2);
                uVar19 = ((uint)uVar40 & 3) + 3;
                uVar40 = uVar40 >> 2;
                param_4 = (ulong)(uVar15 - 2);
                goto code_r0x00010b41ec4c;
              }
            }
            else {
              if (uVar6 == 0x11) {
                if (uVar15 < iVar18 + 3U) {
                  param_4 = param_4 & 0xffffffff;
                  do {
                    uVar30 = param_4;
                    if ((int)uVar26 == 0) goto code_r0x00010b41fe4c;
                    uVar26 = (ulong)((int)uVar26 - 1);
                    pbVar21 = pbVar23 + 1;
                    uVar40 = ((ulong)*pbVar23 << (param_4 & 0x3f)) + uVar40;
                    param_4 = param_4 + 8;
                    pbVar23 = pbVar21;
                  } while (param_4 < iVar18 + 3U);
                }
                uVar33 = 0;
                uVar40 = uVar40 >> (uVar32 & 0x3f);
                uVar19 = ((uint)uVar40 & 7) + 3;
                uVar40 = uVar40 >> 3;
                param_4 = (ulong)(((int)param_4 - iVar18) - 3);
              }
              else {
                if (uVar15 < iVar18 + 7U) {
                  param_4 = param_4 & 0xffffffff;
                  do {
                    uVar30 = param_4;
                    if ((int)uVar26 == 0) goto code_r0x00010b41fe4c;
                    uVar26 = (ulong)((int)uVar26 - 1);
                    pbVar21 = pbVar23 + 1;
                    uVar40 = ((ulong)*pbVar23 << (param_4 & 0x3f)) + uVar40;
                    param_4 = param_4 + 8;
                    pbVar23 = pbVar21;
                  } while (param_4 < iVar18 + 7U);
                }
                uVar33 = 0;
                uVar40 = uVar40 >> (uVar32 & 0x3f);
                uVar19 = ((uint)uVar40 & 0x7f) + 0xb;
                uVar40 = uVar40 >> 7;
                param_4 = (ulong)(((int)param_4 - iVar18) - 7);
              }
code_r0x00010b41ec4c:
              if (uVar19 + uVar16 <= uVar14) {
                uVar31 = uVar27;
                if (0xf < uVar19 && uVar16 <= -uVar19) {
                  uVar15 = uVar19 & 0xf0;
                  uVar8 = CONCAT26(uVar33,CONCAT24(uVar33,CONCAT22(uVar33,uVar33)));
                  uVar43 = CONCAT26(uVar33,CONCAT24(uVar33,CONCAT22(uVar33,uVar33)));
                  puVar1 = (undefined8 *)((long)puVar7 + uVar27 * 2);
                  puVar1[1] = uVar43;
                  *puVar1 = uVar8;
                  puVar1[3] = uVar43;
                  puVar1[2] = uVar8;
                  if (uVar15 != 0x10) {
                    puVar1 = (undefined8 *)((long)puVar7 + (ulong)(uVar16 + 0x10) * 2);
                    puVar1[1] = uVar43;
                    *puVar1 = uVar8;
                    puVar1[3] = uVar43;
                    puVar1[2] = uVar8;
                    if (uVar15 != 0x20) {
                      puVar1 = (undefined8 *)((long)puVar7 + (ulong)(uVar16 + 0x20) * 2);
                      puVar1[1] = uVar43;
                      *puVar1 = uVar8;
                      puVar1[3] = uVar43;
                      puVar1[2] = uVar8;
                      if (uVar15 != 0x30) {
                        puVar1 = (undefined8 *)((long)puVar7 + (ulong)(uVar16 + 0x30) * 2);
                        puVar1[1] = uVar43;
                        *puVar1 = uVar8;
                        puVar1[3] = uVar43;
                        puVar1[2] = uVar8;
                        if (uVar15 != 0x40) {
                          puVar1 = (undefined8 *)((long)puVar7 + (ulong)(uVar16 + 0x40) * 2);
                          puVar1[1] = uVar43;
                          *puVar1 = uVar8;
                          puVar1[3] = uVar43;
                          puVar1[2] = uVar8;
                          if (uVar15 != 0x50) {
                            puVar1 = (undefined8 *)((long)puVar7 + (ulong)(uVar16 + 0x50) * 2);
                            puVar1[1] = uVar43;
                            *puVar1 = uVar8;
                            puVar1[3] = uVar43;
                            puVar1[2] = uVar8;
                            if (uVar15 != 0x60) {
                              puVar1 = (undefined8 *)((long)puVar7 + (ulong)(uVar16 + 0x60) * 2);
                              puVar1[1] = uVar43;
                              *puVar1 = uVar8;
                              puVar1[3] = uVar43;
                              puVar1[2] = uVar8;
                              if (uVar15 != 0x70) {
                                puVar1 = (undefined8 *)((long)puVar7 + (ulong)(uVar16 + 0x70) * 2);
                                puVar1[1] = uVar43;
                                *puVar1 = uVar8;
                                puVar1[3] = uVar43;
                                puVar1[2] = uVar8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  uVar27 = (ulong)(uVar16 + uVar15);
                  if (uVar19 == uVar15) goto code_r0x00010b41ed2c;
                  uVar19 = uVar19 & 0xf;
                  uVar31 = uVar27;
                }
                do {
                  uVar27 = (ulong)((int)uVar31 + 1);
                  *(undefined2 *)((long)puVar7 + uVar31 * 2) = uVar33;
                  uVar19 = uVar19 - 1;
                  uVar31 = uVar27;
                } while (uVar19 != 0);
                goto code_r0x00010b41ed2c;
              }
            }
            puVar25 = &UNK_10f75e3aa;
            pbVar23 = pbVar21;
            goto code_r0x00010b41e384;
          }
          uVar40 = uVar40 >> (uVar32 & 0x3f);
          param_4 = (ulong)(uVar15 - iVar18);
          *(ushort *)((long)puVar7 + uVar27 * 2) = uVar6;
          uVar27 = (ulong)(uVar16 + 1);
code_r0x00010b41ed2c:
          *(uint *)((long)puVar42 + 0x8c) = (uint)uVar27;
          uVar30 = param_4;
          pbVar23 = pbVar21;
          pbVar41 = pbVar21;
          uVar31 = uVar26;
        } while ((uint)uVar27 < uVar14);
      }
      uVar15 = (uint)uVar26;
      if (*(short *)(puVar42 + 0x53) == 0) {
        puVar25 = &UNK_10f75e3c4;
        goto code_r0x00010b41e384;
      }
      puVar42[0x12] = puVar2;
      puVar42[0xd] = puVar2;
      *(undefined4 *)(puVar42 + 0xf) = 9;
      uStack_8c = 1;
      FUN_10b41cc38(1,puVar7,param_3,puVar42 + 0x12,puVar42 + 0xf,puVar42 + 99);
      if (uStack_8c != 0) {
        puVar25 = &UNK_10f75e3e9;
code_r0x00010b41f01c:
        param_1[6] = (long)puVar25;
        *(undefined4 *)(puVar42 + 1) = 0x3f51;
        puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
        iVar18 = 0x3f51;
        pbVar41 = pbVar23;
        goto LAB_10b41e394;
      }
      puVar42[0xe] = puVar42[0x12];
      *(undefined4 *)((long)puVar42 + 0x7c) = 6;
      param_3 = (ulong)*(uint *)(puVar42 + 0x11);
      uStack_8c = 2;
      FUN_10b41cc38(2,(long)puVar7 + (ulong)*(uint *)((long)puVar42 + 0x84) * 2,param_3,
                    puVar42 + 0x12,(long)puVar42 + 0x7c,puVar42 + 99);
      if (uStack_8c != 0) {
        puVar25 = &UNK_10f75e405;
        goto code_r0x00010b41f01c;
      }
      uStack_8c = 0;
      *(undefined4 *)(puVar42 + 1) = 0x3f47;
      puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
      uVar19 = uStack_8c;
      if (iVar11 == 6) goto code_r0x00010b41fe54;
code_r0x00010b41f7ac:
      *(undefined4 *)(puVar42 + 1) = 0x3f48;
      uVar31 = uVar26;
code_r0x00010b41f7b4:
      if ((7 < (uint)uVar31) && (0x101 < uVar38)) {
        param_1[3] = (long)puVar37;
        *(uint *)(param_1 + 4) = uVar38;
        *param_1 = (long)pbVar23;
        *(uint *)(param_1 + 1) = (uint)uVar31;
        puVar42[10] = uVar40;
        *(uint *)(puVar42 + 0xb) = (uint)param_4;
        FUN_10b41d5ac(param_1,uStack_80);
        puVar37 = (undefined1 *)param_1[3];
        uVar39 = (ulong)*(uint *)(param_1 + 4);
        pbVar41 = (byte *)*param_1;
        uVar26 = (ulong)*(uint *)(param_1 + 1);
        uVar40 = puVar42[10];
        param_4 = (ulong)*(uint *)(puVar42 + 0xb);
        if (*(int *)(puVar42 + 1) == 0x3f3f) {
          *(undefined4 *)((long)puVar42 + 0x1bec) = 0xffffffff;
          puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
          iVar18 = *(int *)(puVar42 + 1);
        }
        else {
          puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
          iVar18 = *(int *)(puVar42 + 1);
        }
        goto LAB_10b41e394;
      }
      *(undefined4 *)((long)puVar42 + 0x1bec) = 0;
      lVar10 = puVar42[0xd];
      uVar14 = -1 << (ulong)(*(uint *)(puVar42 + 0xf) & 0x1f);
      pbVar21 = (byte *)(lVar10 + (ulong)((uint)uVar40 & (uVar14 ^ 0xffffffff)) * 4);
      uVar27 = (ulong)pbVar21[1];
      uVar30 = param_4;
      pbVar41 = pbVar23;
      uVar26 = uVar31;
      if ((uint)param_4 < (uint)pbVar21[1]) {
        uVar32 = param_4 & 0xffffffff;
        pbVar35 = pbVar23;
        do {
          uVar30 = param_4;
          pbVar41 = pbVar23;
          if ((int)uVar26 == 0) goto code_r0x00010b41fd58;
          uVar26 = (ulong)((int)uVar26 - 1);
          pbVar41 = pbVar35 + 1;
          uVar40 = ((ulong)*pbVar35 << (uVar32 & 0x3f)) + uVar40;
          uVar30 = uVar32 + 8;
          pbVar21 = (byte *)(lVar10 + (ulong)((uint)uVar40 & ~uVar14) * 4);
          uVar27 = (ulong)pbVar21[1];
          uVar32 = uVar30;
          pbVar35 = pbVar41;
        } while (uVar30 < uVar27);
      }
      uVar15 = (uint)uVar27;
      uVar14 = (uint)uVar30;
      uVar6 = *(ushort *)(pbVar21 + 2);
      bVar4 = *pbVar21;
      if (bVar4 - 1 < 0xf) {
        uVar19 = -1 << (ulong)(uVar15 + bVar4 & 0x1f);
        pbVar23 = (byte *)(lVar10 + (ulong)((((uint)uVar40 & (uVar19 ^ 0xffffffff)) >>
                                            (ulong)(uVar15 & 0x1f)) + (uint)uVar6) * 4);
        bVar5 = pbVar23[1];
        uVar32 = uVar30;
        pbVar21 = pbVar41;
        uVar34 = uVar26;
        if (uVar14 < uVar15 + bVar5) {
          uVar32 = uVar30 & 0xffffffff;
          pbVar35 = pbVar41;
          do {
            uVar31 = uVar26;
            if ((int)uVar34 == 0) goto code_r0x00010b41fd58;
            uVar34 = (ulong)((int)uVar34 - 1);
            pbVar21 = pbVar35 + 1;
            uVar40 = ((ulong)*pbVar35 << (uVar32 & 0x3f)) + uVar40;
            uVar32 = uVar32 + 8;
            pbVar23 = (byte *)(lVar10 + (ulong)((((uint)uVar40 & ~uVar19) >> (ulong)(uVar15 & 0x1f))
                                               + (uint)uVar6) * 4);
            bVar5 = pbVar23[1];
            param_3 = (ulong)(uVar15 + bVar5);
            pbVar35 = pbVar21;
          } while (uVar32 < param_3);
        }
        uVar6 = *(ushort *)(pbVar23 + 2);
        bVar4 = *pbVar23;
        uVar40 = uVar40 >> (uVar27 & 0x3f);
        uVar14 = (int)uVar32 - uVar15;
        uVar27 = (ulong)bVar5;
        pbVar41 = pbVar21;
        uVar26 = uVar34;
      }
      else {
        uVar15 = 0;
      }
      uVar40 = uVar40 >> (uVar27 & 0x3f);
      param_4 = (ulong)(uVar14 - (int)uVar27);
      *(uint *)((long)puVar42 + 0x1bec) = uVar15 + (int)uVar27;
      *(uint *)((long)puVar42 + 0x5c) = (uint)uVar6;
      if (bVar4 == 0) {
        iVar18 = 0x3f4d;
        break;
      }
      pbVar23 = pbVar41;
      if ((bVar4 >> 5 & 1) != 0) {
        *(undefined4 *)((long)puVar42 + 0x1bec) = 0xffffffff;
        goto code_r0x00010b41fc74;
      }
      if ((bVar4 >> 6 & 1) == 0) {
        uVar14 = bVar4 & 0xf;
        *(uint *)((long)puVar42 + 100) = uVar14;
        *(undefined4 *)(puVar42 + 1) = 0x3f49;
        if ((bVar4 & 0xf) == 0) {
code_r0x00010b41f98c:
          iVar18 = *(int *)((long)puVar42 + 0x5c);
        }
        else {
code_r0x00010b41e4a0:
          uVar15 = (uint)param_4;
          uVar27 = param_4;
          pbVar23 = pbVar41;
          uVar32 = uVar26;
          while (uVar15 < uVar14) {
            uVar30 = param_4;
            uVar31 = uVar26;
            if ((int)uVar32 == 0) goto code_r0x00010b41fd58;
            uVar32 = (ulong)((int)uVar32 - 1);
            uVar40 = ((ulong)*pbVar23 << (uVar27 & 0x3f)) + uVar40;
            uVar15 = (int)uVar27 + 8;
            uVar27 = (ulong)uVar15;
            pbVar23 = pbVar23 + 1;
          }
          iVar18 = *(int *)((long)puVar42 + 0x5c) +
                   ((uint)uVar40 & (-1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU));
          *(int *)((long)puVar42 + 0x5c) = iVar18;
          uVar40 = uVar40 >> ((ulong)uVar14 & 0x3f);
          param_4 = (ulong)(uVar15 - uVar14);
          *(uint *)((long)puVar42 + 0x1bec) = *(int *)((long)puVar42 + 0x1bec) + uVar14;
          pbVar41 = pbVar23;
          uVar26 = uVar32;
        }
        *(int *)(puVar42 + 0x37e) = iVar18;
        *(undefined4 *)(puVar42 + 1) = 0x3f4a;
        pbVar23 = pbVar41;
        uVar31 = uVar26;
code_r0x00010b41f99c:
        lVar10 = puVar42[0xe];
        uVar14 = -1 << (ulong)(*(uint *)((long)puVar42 + 0x7c) & 0x1f);
        pbVar21 = (byte *)(lVar10 + (ulong)((uint)uVar40 & (uVar14 ^ 0xffffffff)) * 4);
        uVar32 = (ulong)pbVar21[1];
        uVar27 = param_4;
        pbVar41 = pbVar23;
        uVar26 = uVar31;
        if ((uint)param_4 < (uint)pbVar21[1]) {
          uVar27 = param_4 & 0xffffffff;
          pbVar35 = pbVar23;
          do {
            uVar30 = param_4;
            pbVar41 = pbVar23;
            if ((int)uVar26 == 0) goto code_r0x00010b41fd58;
            uVar26 = (ulong)((int)uVar26 - 1);
            pbVar41 = pbVar35 + 1;
            uVar40 = ((ulong)*pbVar35 << (uVar27 & 0x3f)) + uVar40;
            uVar27 = uVar27 + 8;
            pbVar21 = (byte *)(lVar10 + (ulong)((uint)uVar40 & ~uVar14) * 4);
            uVar32 = (ulong)pbVar21[1];
            pbVar35 = pbVar41;
          } while (uVar27 < uVar32);
        }
        uVar14 = (uint)uVar27;
        uVar6 = *(ushort *)(pbVar21 + 2);
        bVar4 = *pbVar21;
        if (bVar4 < 0x10) {
          uVar19 = (uint)uVar32;
          uVar15 = -1 << (ulong)(uVar19 + bVar4 & 0x1f);
          pbVar23 = (byte *)(lVar10 + (ulong)((((uint)uVar40 & (uVar15 ^ 0xffffffff)) >>
                                              (ulong)(uVar19 & 0x1f)) + (uint)uVar6) * 4);
          bVar5 = pbVar23[1];
          uVar34 = uVar27;
          pbVar21 = pbVar41;
          uVar36 = uVar26;
          if (uVar14 < uVar19 + bVar5) {
            uVar34 = uVar27 & 0xffffffff;
            pbVar35 = pbVar41;
            do {
              uVar30 = uVar27;
              uVar31 = uVar26;
              if ((int)uVar36 == 0) goto code_r0x00010b41fd58;
              uVar36 = (ulong)((int)uVar36 - 1);
              pbVar21 = pbVar35 + 1;
              uVar40 = ((ulong)*pbVar35 << (uVar34 & 0x3f)) + uVar40;
              uVar34 = uVar34 + 8;
              pbVar23 = (byte *)(lVar10 + (ulong)((((uint)uVar40 & ~uVar15) >>
                                                  (ulong)(uVar19 & 0x1f)) + (uint)uVar6) * 4);
              bVar5 = pbVar23[1];
              pbVar35 = pbVar21;
            } while (uVar34 < uVar19 + bVar5);
          }
          uVar6 = *(ushort *)(pbVar23 + 2);
          bVar4 = *pbVar23;
          uVar40 = uVar40 >> (uVar32 & 0x3f);
          uVar14 = (int)uVar34 - uVar19;
          iVar18 = *(int *)((long)puVar42 + 0x1bec) + uVar19;
          uVar32 = (ulong)bVar5;
          pbVar41 = pbVar21;
          uVar26 = uVar36;
        }
        else {
          iVar18 = *(int *)((long)puVar42 + 0x1bec);
        }
        uVar40 = uVar40 >> (uVar32 & 0x3f);
        param_4 = (ulong)(uVar14 - (int)uVar32);
        *(int *)((long)puVar42 + 0x1bec) = iVar18 + (int)uVar32;
        if ((bVar4 >> 6 & 1) != 0) {
          puVar25 = &UNK_10f75e298;
          pbVar23 = pbVar41;
          goto code_r0x00010b41e384;
        }
        uVar14 = bVar4 & 0xf;
        *(uint *)(puVar42 + 0xc) = (uint)uVar6;
        *(uint *)((long)puVar42 + 100) = uVar14;
        *(undefined4 *)(puVar42 + 1) = 0x3f4b;
code_r0x00010b41fae0:
        pbVar23 = pbVar41;
        uVar27 = uVar26;
        if (uVar14 != 0) {
          uVar15 = (uint)param_4;
          uVar32 = param_4;
          while (uVar15 < uVar14) {
            uVar30 = param_4;
            uVar31 = uVar26;
            if ((int)uVar27 == 0) goto code_r0x00010b41fd58;
            uVar27 = (ulong)((int)uVar27 - 1);
            uVar40 = ((ulong)*pbVar23 << (uVar32 & 0x3f)) + uVar40;
            uVar15 = (int)uVar32 + 8;
            uVar32 = (ulong)uVar15;
            pbVar23 = pbVar23 + 1;
          }
          *(uint *)(puVar42 + 0xc) =
               *(int *)(puVar42 + 0xc) +
               ((uint)uVar40 & (-1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU));
          uVar40 = uVar40 >> ((ulong)uVar14 & 0x3f);
          param_4 = (ulong)((int)uVar32 - uVar14);
          *(uint *)((long)puVar42 + 0x1bec) = *(int *)((long)puVar42 + 0x1bec) + uVar14;
        }
        *(undefined4 *)(puVar42 + 1) = 0x3f4c;
        uVar26 = uVar27;
code_r0x00010b41fb70:
        uVar15 = (uint)uVar26;
        uVar31 = param_4;
        uVar19 = uStack_8c;
        if (uVar38 == 0) goto code_r0x00010b41fe80;
        uVar15 = *(uint *)(puVar42 + 0xc);
        uVar14 = uVar15 - (uStack_80 - uVar38);
        if (uVar15 < uStack_80 - uVar38 || uVar14 == 0) {
          uVar14 = *(uint *)((long)puVar42 + 0x5c);
          if (uVar38 <= *(uint *)((long)puVar42 + 0x5c)) {
            uVar14 = uVar38;
          }
          param_3 = (ulong)uVar14;
          FUN_10b4200f8(puVar37,uVar15,param_3,puVar37 + uVar39);
        }
        else {
          if ((*(uint *)(puVar42 + 8) < uVar14) && (*(int *)(puVar42 + 0x37d) != 0)) {
            puVar25 = &UNK_10f75e27a;
            goto code_r0x00010b41e384;
          }
          uVar15 = *(uint *)((long)puVar42 + 0x44);
          uVar19 = uVar14 - uVar15;
          if (uVar14 < uVar15 || uVar19 == 0) {
            uVar15 = uVar15 - uVar14;
          }
          else {
            uVar15 = *(int *)((long)puVar42 + 0x3c) - uVar19;
            uVar14 = uVar19;
          }
          if (*(uint *)((long)puVar42 + 0x5c) <= uVar14) {
            uVar14 = *(uint *)((long)puVar42 + 0x5c);
          }
          if (uVar38 <= uVar14) {
            uVar14 = uVar38;
          }
          param_3 = (ulong)uVar14;
          FUN_10b420010(puVar37,puVar42[9] + (ulong)uVar15,param_3,puVar37 + uVar39);
        }
        uVar39 = (ulong)(uVar38 - uVar14);
        iVar18 = *(int *)((long)puVar42 + 0x5c) - uVar14;
        *(int *)((long)puVar42 + 0x5c) = iVar18;
        puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
        pbVar41 = pbVar23;
        if (iVar18 == 0) {
          *(undefined4 *)(puVar42 + 1) = 0x3f48;
          iVar18 = 0x3f48;
        }
        else {
          iVar18 = *(int *)(puVar42 + 1);
        }
        goto LAB_10b41e394;
      }
      puVar25 = &UNK_10f75e2ae;
code_r0x00010b41e384:
      param_1[6] = (long)puVar25;
      iVar18 = 0x3f51;
      pbVar41 = pbVar23;
      break;
    case 0x3f46:
      uVar27 = (ulong)*(uint *)((long)puVar42 + 0x8c);
      goto code_r0x00010b41ea90;
    case 0x3f47:
      goto code_r0x00010b41f7ac;
    case 0x3f48:
      goto code_r0x00010b41f7b4;
    case 0x3f49:
      uVar14 = *(uint *)((long)puVar42 + 100);
      if (uVar14 != 0) goto code_r0x00010b41e4a0;
      goto code_r0x00010b41f98c;
    case 0x3f4a:
      goto code_r0x00010b41f99c;
    case 0x3f4b:
      uVar14 = *(uint *)((long)puVar42 + 100);
      goto code_r0x00010b41fae0;
    case 0x3f4c:
      goto code_r0x00010b41fb70;
    case 0x3f4d:
      uVar31 = param_4;
      uVar19 = uStack_8c;
      if (uVar38 == 0) goto code_r0x00010b41fe80;
      *puVar37 = (char)*(undefined4 *)((long)puVar42 + 0x5c);
      uVar39 = (ulong)(uVar38 - 1);
      iVar18 = 0x3f48;
      puVar37 = puVar37 + 1;
      break;
    case 0x3f4e:
      uVar17 = 0;
      if (*(int *)(puVar42 + 2) == 0) {
code_r0x00010b41f090:
        *(undefined4 *)(puVar42 + 1) = 0x3f4f;
        goto code_r0x00010b41f098;
      }
      if (uVar14 < 0x20) {
        uVar31 = param_4 & 0xffffffff;
        uVar26 = uVar31;
        if (uVar15 == 0) goto code_r0x00010b41fe04;
        uVar26 = (ulong)(uVar15 - 1);
        pbVar21 = pbVar41 + 1;
        uVar40 = ((ulong)*pbVar41 << (param_4 & 0x3f)) + uVar40;
        param_4 = uVar31 + 8;
        if (uVar14 < 0x18) {
          uVar26 = param_4;
          pbVar23 = pbVar21;
          if (uVar15 - 1 == 0) goto code_r0x00010b41fe04;
          uVar26 = (ulong)(uVar15 - 2);
          pbVar21 = pbVar41 + 2;
          uVar40 = ((ulong)pbVar41[1] << (param_4 & 0x3f)) + uVar40;
          param_4 = uVar31 + 0x10;
          if (uVar14 < 0x10) {
            uVar26 = param_4;
            pbVar23 = pbVar21;
            if (uVar15 - 2 == 0) goto code_r0x00010b41fe04;
            uVar26 = (ulong)(uVar15 - 3);
            pbVar21 = pbVar41 + 3;
            uVar40 = ((ulong)pbVar41[2] << (param_4 & 0x3f)) + uVar40;
            param_4 = uVar31 + 0x18;
            if (uVar14 < 8) {
              uVar26 = param_4;
              pbVar23 = pbVar21;
              if (uVar15 - 3 == 0) goto code_r0x00010b41fe04;
              uVar26 = (ulong)(uVar15 - 4);
              pbVar21 = pbVar41 + 4;
              uVar40 = ((ulong)pbVar41[3] << (param_4 & 0x3f)) + uVar40;
              param_4 = uVar31 | 0x20;
            }
          }
        }
      }
      param_3 = (ulong)(uStack_80 - uVar38);
      param_1[5] = param_1[5] + param_3;
      puVar42[5] = puVar42[5] + param_3;
      uVar17 = *(uint *)(puVar42 + 2);
      uVar14 = uVar17 & 4;
      if (((uVar17 >> 2 & 1) != 0) && (uStack_80 != uVar38)) {
        lVar10 = puVar42[4];
        if (*(int *)(puVar42 + 3) == 0) {
          FUN_10b41c45c(lVar10,(long)puVar37 - param_3);
        }
        else {
          FUN_10b41c7c0();
        }
        puVar42[4] = lVar10;
        param_1[0xc] = lVar10;
        uVar17 = *(uint *)(puVar42 + 2);
        uVar14 = uVar17 & 4;
        puVar12 = (undefined8 *)((ulong)param_2 & 0xffffffff);
      }
      uStack_80 = uVar38;
      if (uVar14 == 0) {
code_r0x00010b41f084:
        uVar40 = 0;
        param_4 = 0;
        goto code_r0x00010b41f090;
      }
      uVar14 = ((uint)uVar40 & 0xff00ff00) >> 8 | ((uint)uVar40 & 0xff00ff) << 8;
      uVar31 = (ulong)(uVar14 >> 0x10 | uVar14 << 0x10);
      if (*(int *)(puVar42 + 3) != 0) {
        uVar31 = uVar40;
      }
      if (uVar31 == puVar42[4]) goto code_r0x00010b41f084;
      param_1[6] = (long)&UNK_10f75e41b;
      iVar18 = 0x3f51;
      *(undefined4 *)(puVar42 + 1) = 0x3f51;
      pbVar41 = pbVar21;
      goto LAB_10b41e394;
    case 0x3f4f:
      uVar17 = *(uint *)(puVar42 + 2);
code_r0x00010b41f098:
      uVar15 = (uint)uVar26;
      pbVar23 = pbVar21;
      if ((uVar17 != 0) && (*(int *)(puVar42 + 3) != 0)) {
        uVar14 = (uint)param_4;
        if (0x1f < uVar14) {
code_r0x00010b41f144:
          uVar15 = (uint)uVar26;
          if (uVar40 != *(uint *)(puVar42 + 5)) {
            puVar25 = &UNK_10f75e430;
            goto code_r0x00010b41e384;
          }
          uVar40 = 0;
          param_4 = 0;
          goto code_r0x00010b41fddc;
        }
        uVar31 = param_4 & 0xffffffff;
        uVar26 = uVar31;
        if (uVar15 != 0) {
          uVar26 = (ulong)(uVar15 - 1);
          pbVar23 = pbVar21 + 1;
          uVar40 = ((ulong)*pbVar21 << (param_4 & 0x3f)) + uVar40;
          param_4 = uVar31 + 8;
          if (uVar14 < 0x18) {
            uVar26 = param_4;
            if (uVar15 - 1 == 0) goto code_r0x00010b41fe04;
            uVar26 = (ulong)(uVar15 - 2);
            pbVar23 = pbVar21 + 2;
            uVar40 = ((ulong)pbVar21[1] << (param_4 & 0x3f)) + uVar40;
            param_4 = uVar31 + 0x10;
            if (uVar14 < 0x10) {
              uVar26 = param_4;
              if (uVar15 - 2 == 0) goto code_r0x00010b41fe04;
              uVar26 = (ulong)(uVar15 - 3);
              pbVar23 = pbVar21 + 3;
              uVar40 = ((ulong)pbVar21[2] << (param_4 & 0x3f)) + uVar40;
              param_4 = uVar31 + 0x18;
              if (uVar14 < 8) {
                uVar26 = param_4;
                if (uVar15 - 3 == 0) goto code_r0x00010b41fe04;
                uVar26 = (ulong)(uVar15 - 4);
                pbVar23 = pbVar21 + 4;
                uVar40 = ((ulong)pbVar21[3] << (param_4 & 0x3f)) + uVar40;
                param_4 = uVar31 | 0x20;
              }
            }
          }
          goto code_r0x00010b41f144;
        }
        goto code_r0x00010b41fe04;
      }
code_r0x00010b41fddc:
      *(undefined4 *)(puVar42 + 1) = 0x3f50;
    case 0x3f50:
      goto code_r0x00010b41fe54;
    case 0x3f51:
      uVar19 = 0xfffffffd;
      goto code_r0x00010b41fe54;
    case 0x3f52:
      goto code_r0x00010b41fed0;
    default:
      goto LAB_10b41e340;
    }
    *(int *)(puVar42 + 1) = iVar18;
    goto LAB_10b41e394;
  }
LAB_10b41e340:
  puVar7 = (undefined8 *)0xfffffffe;
  goto code_r0x00010b41e344;
code_r0x00010b41fd58:
  param_4 = (ulong)(uint)((int)uVar30 + (int)uVar31 * 8);
  pbVar23 = pbVar41 + (uVar31 & 0xffffffff);
  uVar15 = 0;
  uVar19 = uStack_8c;
code_r0x00010b41fe54:
  uVar31 = param_4;
  if (0xf < uVar38) {
    uVar39 = 0x10;
  }
code_r0x00010b41fe80:
  puVar12 = (undefined8 *)0x55;
  param_4 = uVar31;
  _memset(puVar37,0x55,uVar39);
  param_1[3] = (long)puVar37;
  *(uint *)(param_1 + 4) = uVar38;
  *param_1 = (long)pbVar23;
  *(uint *)(param_1 + 1) = uVar15;
  puVar42[10] = uVar40;
  *(int *)(puVar42 + 0xb) = (int)uVar31;
  uVar14 = *(uint *)(param_1 + 4);
  if ((*(int *)((long)puVar42 + 0x3c) != 0) ||
     (((uVar15 = uStack_80, uStack_80 != uVar14 &&
       (uVar15 = uVar14, *(uint *)(puVar42 + 1) < 0x3f51)) &&
      ((iVar11 != 4 || (*(uint *)(puVar42 + 1) < 0x3f4e)))))) {
    puVar12 = (undefined8 *)param_1[3];
    param_3 = (ulong)(uStack_80 - uVar14);
    plVar9 = param_1;
    FUN_10b420354();
    if ((int)plVar9 != 0) {
      *(undefined4 *)(puVar42 + 1) = 0x3f52;
code_r0x00010b41fed0:
      puVar7 = (undefined8 *)0xfffffffc;
      goto code_r0x00010b41e344;
    }
    uVar15 = *(uint *)(param_1 + 4);
  }
  uVar14 = *(uint *)(param_1 + 1);
  param_3 = (ulong)(uStack_80 - uVar15);
  param_1[2] = param_1[2] + (ulong)(uVar13 - uVar14);
  param_1[5] = param_1[5] + param_3;
  puVar42[5] = puVar42[5] + param_3;
  if (((*(byte *)(puVar42 + 2) >> 2 & 1) != 0) && (uStack_80 != uVar15)) {
    lVar10 = puVar42[4];
    puVar12 = (undefined8 *)(param_1[3] - param_3);
    if (*(int *)(puVar42 + 3) == 0) {
      FUN_10b41c45c();
    }
    else {
      FUN_10b41c7c0();
    }
    puVar42[4] = lVar10;
    param_1[0xc] = lVar10;
  }
  iVar3 = *(int *)(puVar42 + 1);
  iVar18 = 0;
  if (*(int *)((long)puVar42 + 0xc) != 0) {
    iVar18 = 0x40;
  }
  iVar28 = 0x80;
  if (iVar3 != 0x3f3f) {
    iVar28 = 0;
  }
  iVar29 = 0x100;
  if (iVar3 != 0x3f42 && iVar3 != 0x3f47) {
    iVar29 = 0;
  }
  *(int *)(param_1 + 0xb) = iVar18 + *(int *)(puVar42 + 0xb) + iVar28 + iVar29;
  uVar38 = 0xfffffffb;
  if ((uStack_80 != uVar15 || uVar13 != uVar14) && iVar11 != 4 || uVar19 != 0) {
    uVar38 = uVar19;
  }
  puVar7 = (undefined8 *)(ulong)uVar38;
code_r0x00010b41e344:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  ___stack_chk_fail();
  uVar13 = (uint)param_3;
  if (0xf < (long)(param_4 - (long)puVar7)) {
    uVar13 = uVar13 - 1;
    uVar40 = (ulong)((uVar13 & 0xf) + 1);
    uVar8 = *puVar12;
    puVar7[1] = puVar12[1];
    *puVar7 = uVar8;
    puVar42 = (undefined8 *)((long)puVar7 + uVar40);
    if (0xf < uVar13) {
      lVar10 = (ulong)((uVar13 >> 4) - 1) * 0x10;
      _memcpy(puVar42,(long)puVar12 + uVar40,lVar10 + 0x10);
      return (undefined8 *)((long)puVar7 + (ulong)(uVar13 & 0xf) + lVar10 + 0x11);
    }
    return puVar42;
  }
  if ((uVar13 >> 3 & 1) != 0) {
    *puVar7 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((uVar13 >> 2 & 1) != 0) {
    *(undefined4 *)puVar7 = *(undefined4 *)puVar12;
    puVar12 = (undefined8 *)((long)puVar12 + 4);
    puVar7 = (undefined8 *)((long)puVar7 + 4);
  }
  if ((uVar13 >> 1 & 1) != 0) {
    *(undefined2 *)puVar7 = *(undefined2 *)puVar12;
    puVar12 = (undefined8 *)((long)puVar12 + 2);
    puVar7 = (undefined8 *)((long)puVar7 + 2);
  }
  if ((param_3 & 1) == 0) {
    return puVar7;
  }
  *(undefined1 *)puVar7 = *(undefined1 *)puVar12;
  return (undefined8 *)((long)puVar7 + 1);
}



/* Entry: 10b420010; end: 10b4200f7;  */

undefined8 * FUN_10b420010(undefined8 *param_1,undefined8 *param_2,uint param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (0xf < param_4 - (long)param_1) {
    param_3 = param_3 - 1;
    uVar3 = (ulong)((param_3 & 0xf) + 1);
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    puVar1 = (undefined8 *)((long)param_1 + uVar3);
    if (0xf < param_3) {
      lVar2 = (ulong)((param_3 >> 4) - 1) * 0x10;
      _memcpy(puVar1,(long)param_2 + uVar3,lVar2 + 0x10);
      return (undefined8 *)((long)param_1 + (ulong)(param_3 & 0xf) + lVar2 + 0x11);
    }
    return puVar1;
  }
  if ((param_3 >> 3 & 1) != 0) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  if ((param_3 >> 2 & 1) != 0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    param_2 = (undefined8 *)((long)param_2 + 4);
    param_1 = (undefined8 *)((long)param_1 + 4);
  }
  if ((param_3 >> 1 & 1) != 0) {
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    param_2 = (undefined8 *)((long)param_2 + 2);
    param_1 = (undefined8 *)((long)param_1 + 2);
  }
  if ((param_3 & 1) == 0) {
    return param_1;
  }
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  return (undefined8 *)((long)param_1 + 1);
}



/* Entry: 10b4200f8; end: 10b420353;  */

undefined8 * FUN_10b4200f8(undefined8 *param_1,uint param_2,ulong param_3,long param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar7 = (uint)param_3;
  if (param_4 - (long)param_1 < 0x30) {
    if (uVar7 == 0) {
      return param_1;
    }
    if ((0x1f < uVar7) && (0x1f < param_2)) {
      uVar10 = param_3 & 0xffffffff;
      uVar12 = param_3 & 0xffffffe0;
      param_3 = (ulong)(uVar7 - (int)uVar12);
      puVar5 = (undefined8 *)((long)param_1 + uVar12);
      uVar13 = uVar12;
      do {
        puVar11 = (undefined8 *)((long)param_1 + -(ulong)param_2);
        uVar14 = *puVar11;
        uVar16 = puVar11[3];
        uVar15 = puVar11[2];
        param_1[1] = puVar11[1];
        *param_1 = uVar14;
        param_1[3] = uVar16;
        param_1[2] = uVar15;
        uVar13 = uVar13 - 0x20;
        param_1 = param_1 + 4;
      } while (uVar13 != 0);
      param_1 = puVar5;
      if (uVar12 == uVar10) {
        return puVar5;
      }
    }
    do {
      puVar5 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_1 = *(undefined1 *)((long)param_1 + -(ulong)param_2);
      uVar7 = (int)param_3 - 1;
      param_3 = (ulong)uVar7;
      param_1 = puVar5;
    } while (uVar7 != 0);
  }
  else if ((param_2 < 0x10) && (param_2 < uVar7)) {
    uVar9 = uVar7 - 1 & 0xf;
    uVar1 = uVar9 + 1;
    if ((int)param_2 < 4) {
      if (param_2 == 1) {
        uVar2 = *(undefined1 *)((long)param_1 + -1);
        uVar14 = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,CONCAT12
                                                  (uVar2,CONCAT11(uVar2,uVar2)))))));
        uVar15 = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,CONCAT12
                                                  (uVar2,CONCAT11(uVar2,uVar2)))))));
        param_1[1] = uVar15;
        *param_1 = uVar14;
        if (uVar7 == uVar1) {
          return (undefined8 *)((long)param_1 + (ulong)uVar1);
        }
        iVar8 = (uVar9 - uVar7) + 1;
        puVar5 = (undefined8 *)((long)param_1 + (ulong)uVar1);
        do {
          puVar11 = puVar5 + 2;
          puVar5[1] = uVar15;
          *puVar5 = uVar14;
          iVar8 = iVar8 + 0x10;
          puVar5 = puVar11;
        } while (iVar8 != 0);
        return puVar11;
      }
      if (param_2 == 2) {
        uVar3 = *(undefined2 *)((long)param_1 + -2);
        param_1[1] = CONCAT26(uVar3,CONCAT24(uVar3,CONCAT22(uVar3,uVar3)));
        *param_1 = CONCAT26(uVar3,CONCAT24(uVar3,CONCAT22(uVar3,uVar3)));
        param_1 = (undefined8 *)((long)param_1 + (ulong)uVar1);
        if (uVar7 == uVar1) {
          return param_1;
        }
        uVar3 = *(undefined2 *)((long)param_1 + -2);
        iVar8 = (uVar9 - uVar7) + 1;
        do {
          puVar5 = param_1 + 2;
          param_1[1] = CONCAT26(uVar3,CONCAT24(uVar3,CONCAT22(uVar3,uVar3)));
          *param_1 = CONCAT26(uVar3,CONCAT24(uVar3,CONCAT22(uVar3,uVar3)));
          iVar8 = iVar8 + 0x10;
          param_1 = puVar5;
        } while (iVar8 != 0);
        return puVar5;
      }
    }
    else {
      if (param_2 == 4) {
        uVar4 = *(undefined4 *)((long)param_1 + -4);
        param_1[1] = CONCAT44(uVar4,uVar4);
        *param_1 = CONCAT44(uVar4,uVar4);
        param_1 = (undefined8 *)((long)param_1 + (ulong)uVar1);
        if (uVar7 == uVar1) {
          return param_1;
        }
        uVar4 = *(undefined4 *)((long)param_1 + -4);
        iVar8 = (uVar9 - uVar7) + 1;
        do {
          puVar5 = param_1 + 2;
          param_1[1] = CONCAT44(uVar4,uVar4);
          *param_1 = CONCAT44(uVar4,uVar4);
          iVar8 = iVar8 + 0x10;
          param_1 = puVar5;
        } while (iVar8 != 0);
        return puVar5;
      }
      if (param_2 == 8) {
        param_1[1] = param_1[-1];
        *param_1 = param_1[-1];
        param_1 = (undefined8 *)((long)param_1 + (ulong)uVar1);
        if (uVar7 == uVar1) {
          return param_1;
        }
        uVar14 = param_1[-1];
        iVar8 = (uVar9 - uVar7) + 1;
        do {
          puVar5 = param_1 + 2;
          param_1[1] = uVar14;
          *param_1 = uVar14;
          iVar8 = iVar8 + 0x10;
          param_1 = puVar5;
        } while (iVar8 != 0);
        return puVar5;
      }
    }
    puVar5 = param_1;
    uVar7 = param_2;
    do {
      uVar14 = *(undefined8 *)((long)param_1 - (ulong)param_2);
      puVar5[1] = ((undefined8 *)((long)param_1 - (ulong)param_2))[1];
      *puVar5 = uVar14;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)uVar7);
      uVar9 = (int)param_3 - uVar7;
      param_3 = (ulong)uVar9;
      uVar1 = uVar7 << 1;
      if (7 < uVar7) break;
      uVar7 = uVar1;
    } while (uVar1 < uVar9);
    puVar11 = (undefined8 *)((long)puVar5 - (ulong)uVar1);
    uVar9 = uVar9 - 1;
    uVar13 = (ulong)((uVar9 & 0xf) + 1);
    uVar14 = *puVar11;
    puVar5[1] = puVar11[1];
    *puVar5 = uVar14;
    puVar5 = (undefined8 *)((long)puVar5 + uVar13);
    if (0xf < uVar9) {
      uVar9 = uVar9 >> 4;
      puVar6 = puVar5;
      puVar11 = (undefined8 *)((long)puVar11 + uVar13);
      do {
        uVar14 = *puVar11;
        puVar5 = puVar6 + 2;
        puVar6[1] = puVar11[1];
        *puVar6 = uVar14;
        uVar9 = uVar9 - 1;
        puVar6 = puVar5;
        puVar11 = puVar11 + 2;
      } while (uVar9 != 0);
    }
  }
  else {
    puVar5 = (undefined8 *)((long)param_1 - (ulong)param_2);
    uVar7 = uVar7 - 1;
    uVar14 = *puVar5;
    param_1[1] = puVar5[1];
    *param_1 = uVar14;
    puVar5 = (undefined8 *)((long)param_1 + (ulong)((uVar7 & 0xf) + 1));
    if (0xf < uVar7) {
      uVar7 = uVar7 >> 4;
      puVar11 = puVar5;
      do {
        puVar6 = (undefined8 *)((long)puVar11 - (ulong)param_2);
        uVar14 = *puVar6;
        puVar5 = puVar11 + 2;
        puVar11[1] = puVar6[1];
        *puVar11 = uVar14;
        uVar7 = uVar7 - 1;
        puVar11 = puVar5;
      } while (uVar7 != 0);
    }
  }
  return puVar5;
}



/* Entry: 10b420354; end: 10b420497;  */

undefined8 FUN_10b420354(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x38);
  lVar4 = *(long *)(lVar6 + 0x48);
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x50);
    (**(code **)(param_1 + 0x40))(lVar4,(1 << (ulong)(*(uint *)(lVar6 + 0x38) & 0x1f)) + 0x10,1);
    *(long *)(lVar6 + 0x48) = lVar4;
    if (lVar4 == 0) {
      return 1;
    }
  }
  uVar3 = *(uint *)(lVar6 + 0x3c);
  if (uVar3 == 0) {
    uVar3 = 1 << (ulong)(*(uint *)(lVar6 + 0x38) & 0x1f);
    *(undefined8 *)(lVar6 + 0x40) = 0;
    *(uint *)(lVar6 + 0x3c) = uVar3;
  }
  if (param_3 < uVar3) {
    uVar3 = uVar3 - *(uint *)(lVar6 + 0x44);
    uVar1 = uVar3;
    if (param_3 <= uVar3) {
      uVar1 = param_3;
    }
    _memcpy(lVar4 + (ulong)*(uint *)(lVar6 + 0x44),param_2 - (ulong)param_3,uVar1);
    if (uVar3 < param_3) {
      param_3 = param_3 - uVar1;
      _memcpy(*(undefined8 *)(lVar6 + 0x48),param_2 - (ulong)param_3,(ulong)param_3);
      iVar5 = *(int *)(lVar6 + 0x3c);
      *(uint *)(lVar6 + 0x44) = param_3;
    }
    else {
      uVar3 = *(int *)(lVar6 + 0x44) + uVar1;
      uVar2 = 0;
      if (uVar3 != *(uint *)(lVar6 + 0x3c)) {
        uVar2 = uVar3;
      }
      *(uint *)(lVar6 + 0x44) = uVar2;
      if (*(uint *)(lVar6 + 0x3c) <= *(uint *)(lVar6 + 0x40)) {
        return 0;
      }
      iVar5 = *(uint *)(lVar6 + 0x40) + uVar1;
    }
  }
  else {
    _memcpy();
    iVar5 = *(int *)(lVar6 + 0x3c);
    *(undefined4 *)(lVar6 + 0x44) = 0;
  }
  *(int *)(lVar6 + 0x40) = iVar5;
  return 0;
}



/* Entry: 10b420498; end: 10b420533;  */

undefined8 FUN_10b420498(long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) &&
      (pcVar2 = *(code **)(param_1 + 0x48), pcVar2 != (code *)0x0)) &&
     (((plVar1 = *(long **)(param_1 + 0x38), plVar1 != (long *)0x0 && (*plVar1 == param_1)) &&
      ((int)plVar1[1] - 0x3f34U < 0x20)))) {
    if (plVar1[9] != 0) {
      (*pcVar2)(*(undefined8 *)(param_1 + 0x50),plVar1[9]);
      pcVar2 = *(code **)(param_1 + 0x48);
      plVar1 = *(long **)(param_1 + 0x38);
    }
    (*pcVar2)(*(undefined8 *)(param_1 + 0x50),plVar1);
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 0;
  }
  return 0xfffffffe;
}



/* Entry: 10b420534; end: 10b42066f;  */

long FUN_10b420534(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    return 0xfffffffe;
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if (((plVar3 == (long *)0x0) || (*plVar3 != param_1)) ||
     (iVar1 = (int)plVar3[1], 0x1f < iVar1 - 0x3f34U)) {
    return 0xfffffffe;
  }
  if ((int)plVar3[2] == 0) {
    if (iVar1 != 0x3f3e) goto LAB_10b420628;
  }
  else if (iVar1 != 0x3f3e) {
    return 0xfffffffe;
  }
  lVar2 = 0;
  FUN_10b41c45c(0,0,0);
  FUN_10b41c45c();
  if (lVar2 != plVar3[4]) {
    return 0xfffffffd;
  }
LAB_10b420628:
  FUN_10b420354(param_1,param_2 + (param_3 & 0xffffffff),param_3);
  if ((int)param_1 != 0) {
    *(undefined4 *)(plVar3 + 1) = 0x3f52;
    return 0xfffffffc;
  }
  *(undefined4 *)((long)plVar3 + 0x14) = 1;
  return param_1;
}



/* Entry: 10b420670; end: 10b42081b;  */

void FUN_10b420670(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_4;
  func_0x000107c2f04c();
  if ((int)lVar9 == 0) {
    return;
  }
  iVar7 = *(int *)(param_4 + 0x28c);
LAB_10b4206c4:
  if (iVar7 != 1) goto code_r0x00010b4206cc;
  goto LAB_10b4207ac;
code_r0x00010b4206cc:
  if (iVar7 == 0) {
    uVar1 = *(uint *)(param_4 + 0x10);
    iVar7 = 0x40000000;
    if (*(ulong *)(param_4 + 0x20) < 0x40000001) {
      iVar7 = (int)*(ulong *)(param_4 + 0x20) + (0x40 - uVar1 >> 3);
    }
    iVar2 = *(int *)(param_4 + 0x108);
    if (iVar7 <= *(int *)(param_4 + 0x108)) {
      iVar2 = iVar7;
    }
    iVar3 = *(int *)(param_4 + 0x4c);
    iVar7 = *(int *)(param_4 + 0x58) - iVar3;
    if (iVar2 + iVar3 <= *(int *)(param_4 + 0x58)) {
      iVar7 = iVar2;
    }
    puVar6 = (undefined1 *)(*(long *)(param_4 + 0x78) + (long)iVar3);
    lVar9 = (long)iVar7;
    lVar8 = lVar9;
    if ((uVar1 - 0x41 < 0xfffffff8) && (puVar5 = puVar6, iVar7 != 0)) {
      do {
        puVar6 = puVar5 + 1;
        *puVar5 = (char)(*(ulong *)(param_4 + 8) >> ((ulong)uVar1 & 0x3f));
        iVar2 = *(int *)(param_4 + 0x10);
        uVar1 = iVar2 + 8;
        *(uint *)(param_4 + 0x10) = uVar1;
        lVar8 = lVar9 + -1;
        bVar4 = lVar9 != 1;
        puVar5 = puVar6;
        lVar9 = lVar8;
      } while (iVar2 - 0x39U < 0xfffffff8 && bVar4);
    }
    _memcpy(puVar6,*(undefined8 *)(param_4 + 0x18),lVar8);
    *(long *)(param_4 + 0x18) = *(long *)(param_4 + 0x18) + lVar8;
    *(long *)(param_4 + 0x20) = *(long *)(param_4 + 0x20) - lVar8;
    iVar2 = *(int *)(param_4 + 0x4c) + iVar7;
    *(int *)(param_4 + 0x4c) = iVar2;
    *(int *)(param_4 + 0x108) = *(int *)(param_4 + 0x108) - iVar7;
    if (iVar2 < 1 << (ulong)(*(uint *)(param_4 + 0x29c) & 0x1f)) {
      return;
    }
    *(undefined4 *)(param_4 + 0x28c) = 1;
LAB_10b4207ac:
    lVar9 = param_4;
    func_0x000107c2f044(param_4,param_1,param_2,param_3,0);
    if ((int)lVar9 != 1) {
      return;
    }
    if (*(int *)(param_4 + 0x58) == 1 << (ulong)(*(uint *)(param_4 + 0x29c) & 0x1f)) {
      *(undefined4 *)(param_4 + 0x54) = *(undefined4 *)(param_4 + 0x50);
    }
    iVar7 = 0;
    *(undefined4 *)(param_4 + 0x28c) = 0;
  }
  goto LAB_10b4206c4;
}



/* Entry: 10b42081c; end: 10b42085b;  */

void FUN_10b42081c(long param_1)

{
  if ((*(ushort *)(param_1 + 0x298) >> 3 & 1) != 0) {
    _memcpy(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
            (long)*(int *)(param_1 + 0x4c));
    *(ushort *)(param_1 + 0x298) = *(ushort *)(param_1 + 0x298) & 0xfff7;
  }
  return;
}



/* Entry: 10b42085c; end: 10b42098f;  */

void FUN_10b42085c(byte *param_1,uint param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar3 = 0x3020100;
  *(undefined4 *)(param_3 + 0x188) = 0x3020100;
  uVar11 = *(int *)(param_3 + 0x180) + 1;
  uVar7 = 2;
  if (2 < uVar11) {
    uVar7 = *(int *)(param_3 + 0x180) + 1;
  }
  if (uVar11 < 9) {
    uVar5 = 1;
  }
  else {
    uVar8 = (ulong)uVar7 - 1;
    uVar9 = uVar8 & 0xfffffffffffffff8;
    uVar5 = uVar9 | 1;
    iVar3 = (int)uVar9 * 0x4040404 + 0x3020100;
    iVar15 = 0xb0a0908;
    iVar16 = 0xf0e0d0c;
    iVar13 = 0x3020100;
    iVar14 = 0x7060504;
    puVar10 = (undefined8 *)(param_3 + 0x19c);
    uVar12 = uVar9;
    do {
      puVar10[-1] = CONCAT44(iVar16 + 0x4040404,iVar15 + 0x4040404);
      puVar10[-2] = CONCAT44(iVar14 + 0x4040404,iVar13 + 0x4040404);
      puVar10[1] = CONCAT44(iVar16 + 0x14141414,iVar15 + 0x14141414);
      *puVar10 = CONCAT44(iVar14 + 0x14141414,iVar13 + 0x14141414);
      iVar13 = iVar13 + 0x20202020;
      iVar14 = iVar14 + 0x20202020;
      iVar15 = iVar15 + 0x20202020;
      iVar16 = iVar16 + 0x20202020;
      puVar10 = puVar10 + 4;
      uVar12 = uVar12 - 8;
    } while (uVar12 != 0);
    if (uVar8 == uVar9) goto LAB_10b42091c;
  }
  lVar4 = uVar7 - uVar5;
  piVar6 = (int *)(param_3 + uVar5 * 4 + 0x188);
  do {
    iVar3 = iVar3 + 0x4040404;
    *piVar6 = iVar3;
    lVar4 = lVar4 + -1;
    piVar6 = piVar6 + 1;
  } while (lVar4 != 0);
LAB_10b42091c:
  if (param_2 != 0) {
    uVar11 = 0;
    uVar12 = (ulong)param_2;
    do {
      bVar1 = *param_1;
      bVar2 = *(byte *)(param_3 + 0x188 + (ulong)bVar1);
      *param_1 = bVar2;
      *(byte *)(param_3 + 0x187) = bVar2;
      _memmove(param_3 + 0x188,param_3 + 0x187,(ulong)bVar1 + 1);
      uVar11 = uVar11 | bVar1;
      uVar12 = uVar12 - 1;
      param_1 = param_1 + 1;
    } while (uVar12 != 0);
    *(uint *)(param_3 + 0x180) = uVar11 >> 2;
    return;
  }
  *(undefined4 *)(param_3 + 0x180) = 0;
  return;
}



/* Entry: 10b420990; end: 10b420cdf;  */

undefined8 FUN_10b420990(long param_1)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  undefined8 uVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint uStack_58;
  uint uStack_54;
  
  uVar3 = *(uint *)(param_1 + 0x120);
  if (uVar3 < 2) {
LAB_10b420c60:
    uVar7 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0xf8);
    lVar15 = *(long *)(param_1 + 0xf0) + 0x9e0;
    uStack_58 = 0xaaaaaaaa;
    uVar17 = *(ulong *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 0x10);
    pbVar1 = *(byte **)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar12 = uVar4 - 0x32;
    uVar13 = uVar17;
    pbVar9 = pbVar1;
    lVar14 = lVar2;
    uVar10 = uVar4;
    while (uVar12 < 0xf) {
      lVar14 = lVar14 + -1;
      if (lVar14 == -1) {
        func_0x000107c2f054(lVar15,param_1 + 8,&uStack_58);
        if ((int)lVar15 != 0) goto LAB_10b420a8c;
        goto LAB_10b420c60;
      }
      *(ulong *)(param_1 + 8) = uVar13 >> 8;
      uVar13 = uVar13 >> 8 | (ulong)*pbVar9 << 0x38;
      *(ulong *)(param_1 + 8) = uVar13;
      *(uint *)(param_1 + 0x10) = uVar10 - 8;
      *(byte **)(param_1 + 0x18) = pbVar9 + 1;
      *(long *)(param_1 + 0x20) = lVar14;
      uVar12 = uVar10 - 0x3a;
      pbVar9 = pbVar9 + 1;
      uVar10 = uVar10 - 8;
    }
    uVar13 = uVar13 >> ((ulong)uVar10 & 0x3f);
    pbVar9 = (byte *)(lVar15 + (uVar13 & 0xff) * 4);
    bVar5 = *pbVar9;
    if (8 < bVar5) {
      uVar10 = uVar10 + 8;
      *(uint *)(param_1 + 0x10) = uVar10;
      pbVar9 = pbVar9 + (ulong)(((uint)uVar13 >> 8 & (-1 << (ulong)(bVar5 - 8 & 0x1f) ^ 0xffffffffU)
                                & 0x7f) + (uint)*(ushort *)(pbVar9 + 2)) * 4;
      bVar5 = *pbVar9;
    }
    *(uint *)(param_1 + 0x10) = uVar10 + bVar5;
    uStack_58 = (uint)*(ushort *)(pbVar9 + 2);
LAB_10b420a8c:
    uStack_54 = 0xaaaaaaaa;
    if (*(int *)(param_1 + 0x294) == 0) {
      lVar8 = lVar8 + 0x630;
      uVar10 = *(uint *)(param_1 + 0x10);
      uVar13 = (ulong)uVar10;
      if (uVar10 - 0x32 < 0xf) {
        lVar15 = *(long *)(param_1 + 0x20);
        do {
          lVar15 = lVar15 + -1;
          if (lVar15 == -1) {
            func_0x000107c2f054(lVar8,param_1 + 8,&uStack_54);
            if ((int)lVar8 == 0) goto LAB_10b420c50;
            goto LAB_10b420b94;
          }
          uVar16 = *(ulong *)(param_1 + 8);
          *(ulong *)(param_1 + 8) = uVar16 >> 8;
          uVar16 = uVar16 >> 8 | (ulong)**(byte **)(param_1 + 0x18) << 0x38;
          *(ulong *)(param_1 + 8) = uVar16;
          iVar11 = (int)uVar13;
          uVar10 = iVar11 - 8;
          uVar13 = (ulong)uVar10;
          *(uint *)(param_1 + 0x10) = uVar10;
          *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
          *(long *)(param_1 + 0x20) = lVar15;
        } while (iVar11 - 0x3aU < 0xf);
        uVar16 = uVar16 >> (uVar13 & 0x3f);
        pbVar9 = (byte *)(lVar8 + (uVar16 & 0xff) * 4);
        bVar5 = *pbVar9;
      }
      else {
        uVar16 = *(ulong *)(param_1 + 8) >> (uVar13 & 0x3f);
        pbVar9 = (byte *)(lVar8 + (uVar16 & 0xff) * 4);
        bVar5 = *pbVar9;
      }
      uVar12 = (uint)bVar5;
      if (8 < bVar5) {
        uVar10 = uVar10 + 8;
        *(uint *)(param_1 + 0x10) = uVar10;
        pbVar9 = pbVar9 + (ulong)(((uint)(uVar16 >> 8) & 0xffffff &
                                   (-1 << (ulong)(uVar12 - 8 & 0x1f) ^ 0xffffffffU) & 0x7f) +
                                 (uint)*(ushort *)(pbVar9 + 2)) * 4;
        uVar12 = (uint)*pbVar9;
      }
      *(uint *)(param_1 + 0x10) = uVar10 + uVar12;
      uStack_54 = (uint)*(ushort *)(pbVar9 + 2);
    }
    else {
      uStack_54 = *(uint *)(param_1 + 0x10c);
    }
LAB_10b420b94:
    bVar5 = (&UNK_10e58ebc2)[(ulong)uStack_54 * 4];
    uVar6 = *(ushort *)(&UNK_10e58ebc0 + (ulong)uStack_54 * 4);
    uVar13 = (ulong)*(uint *)(param_1 + 0x10);
    uVar10 = 0x40 - *(uint *)(param_1 + 0x10);
    if (uVar10 < bVar5) {
      lVar15 = *(long *)(param_1 + 0x20);
      do {
        lVar15 = lVar15 + -1;
        if (lVar15 == -1) {
          *(uint *)(param_1 + 0x10c) = uStack_54;
LAB_10b420c50:
          *(undefined4 *)(param_1 + 0x294) = 0;
          *(ulong *)(param_1 + 8) = uVar17;
          *(uint *)(param_1 + 0x10) = uVar4;
          *(byte **)(param_1 + 0x18) = pbVar1;
          *(long *)(param_1 + 0x20) = lVar2;
          goto LAB_10b420c60;
        }
        uVar16 = *(ulong *)(param_1 + 8);
        *(ulong *)(param_1 + 8) = uVar16 >> 8;
        uVar16 = uVar16 >> 8 | (ulong)**(byte **)(param_1 + 0x18) << 0x38;
        *(ulong *)(param_1 + 8) = uVar16;
        uVar12 = (int)uVar13 - 8;
        uVar13 = (ulong)uVar12;
        *(uint *)(param_1 + 0x10) = uVar12;
        *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
        *(long *)(param_1 + 0x20) = lVar15;
        uVar10 = uVar10 + 8;
      } while (uVar10 < bVar5);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 8);
    }
    *(uint *)(param_1 + 0x10) = (int)uVar13 + (uint)bVar5;
    *(uint *)(param_1 + 0x114) =
         ((uint)(uVar16 >> (uVar13 & 0x3f)) & (-1 << (ulong)(bVar5 & 0x1f) ^ 0xffffffffU)) +
         (uint)uVar6;
    *(undefined4 *)(param_1 + 0x294) = 0;
    if (uStack_58 == 0) {
      uStack_58 = *(uint *)(param_1 + 0x130);
    }
    else if (uStack_58 == 1) {
      uStack_58 = *(int *)(param_1 + 0x134) + 1;
    }
    else {
      uStack_58 = uStack_58 - 2;
    }
    uVar10 = 0;
    if (uVar3 <= uStack_58) {
      uVar10 = uVar3;
    }
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x134);
    *(uint *)(param_1 + 0x134) = uStack_58 - uVar10;
    *(undefined8 *)(param_1 + 0x88) =
         *(undefined8 *)(*(long *)(param_1 + 0xc0) + (ulong)(uStack_58 - uVar10) * 8);
    uVar7 = 1;
  }
  return uVar7;
}



/* Entry: 10b420ce0; end: 10b420ef3;  */

void FUN_10b420ce0(long param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar2 = *(uint *)(param_1 + 0x120);
  if (uVar2 < 2) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0xf0) + 0x9e0;
  uVar6 = *(uint *)(param_1 + 0x10);
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar6 < 0x30) {
    lVar8 = *(long *)(param_1 + 0xf8);
    uVar11 = uVar5 >> ((ulong)uVar6 & 0x3f);
    pbVar9 = (byte *)(lVar1 + (uVar11 & 0xff) * 4);
    uVar10 = (uint)*pbVar9;
    uVar7 = uVar10;
    if (*pbVar9 < 9) goto LAB_10b420d1c;
LAB_10b420e3c:
    *(uint *)(param_1 + 0x10) = uVar6 + 8;
    uVar4 = *(ushort *)(pbVar9 + 2);
    lVar8 = lVar8 + 0x630;
    uVar6 = uVar6 + 8 +
            (uint)pbVar9[(ulong)(((uint)(uVar11 >> 8) & 0xffffff &
                                 (-1 << (ulong)(uVar7 - 8 & 0x1f) ^ 0xffffffffU)) + (uint)uVar4) * 4
                        ];
    *(uint *)(param_1 + 0x10) = uVar6;
    uVar7 = (uint)*(ushort *)
                   (pbVar9 + (ulong)(((uint)(uVar11 >> 8) & 0xffffff &
                                     (-1 << (ulong)(uVar7 - 8 & 0x1f) ^ 0xffffffffU)) + (uint)uVar4)
                             * 4 + 2);
    if (0x2f < uVar6) goto LAB_10b420e80;
LAB_10b420d34:
    uVar11 = uVar5 >> ((ulong)uVar6 & 0x3f);
    pbVar9 = (byte *)(lVar8 + (uVar11 & 0xff) * 4);
    uVar10 = (uint)*pbVar9;
    if (*pbVar9 < 9) goto LAB_10b420d74;
  }
  else {
    *(ulong *)(param_1 + 8) = uVar5 >> 0x30;
    uVar6 = uVar6 ^ 0x30;
    *(uint *)(param_1 + 0x10) = uVar6;
    uVar5 = uVar5 >> 0x30 | **(long **)(param_1 + 0x18) << 0x10;
    *(ulong *)(param_1 + 8) = uVar5;
    *(long *)(param_1 + 0x18) = (long)*(long **)(param_1 + 0x18) + 6;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -6;
    lVar8 = *(long *)(param_1 + 0xf8);
    uVar11 = uVar5 >> ((ulong)uVar6 & 0x3f);
    pbVar9 = (byte *)(lVar1 + (uVar11 & 0xff) * 4);
    uVar7 = (uint)*pbVar9;
    uVar10 = (uint)*pbVar9;
    if (8 < uVar10) goto LAB_10b420e3c;
LAB_10b420d1c:
    lVar8 = lVar8 + 0x630;
    uVar6 = uVar6 + uVar10;
    *(uint *)(param_1 + 0x10) = uVar6;
    uVar7 = (uint)*(ushort *)(pbVar9 + 2);
    if (uVar6 < 0x30) goto LAB_10b420d34;
LAB_10b420e80:
    *(ulong *)(param_1 + 8) = uVar5 >> 0x30;
    uVar6 = uVar6 ^ 0x30;
    *(uint *)(param_1 + 0x10) = uVar6;
    uVar5 = uVar5 >> 0x30 | **(long **)(param_1 + 0x18) << 0x10;
    *(ulong *)(param_1 + 8) = uVar5;
    *(long *)(param_1 + 0x18) = (long)*(long **)(param_1 + 0x18) + 6;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -6;
    uVar11 = uVar5 >> ((ulong)uVar6 & 0x3f);
    pbVar9 = (byte *)(lVar8 + (uVar11 & 0xff) * 4);
    uVar10 = (uint)*pbVar9;
    if (uVar10 < 9) goto LAB_10b420d74;
  }
  uVar6 = uVar6 + 8;
  *(uint *)(param_1 + 0x10) = uVar6;
  pbVar9 = pbVar9 + (ulong)(((uint)(uVar11 >> 8) & 0xffffff &
                            (-1 << (ulong)(uVar10 - 8 & 0x1f) ^ 0xffffffffU)) +
                           (uint)*(ushort *)(pbVar9 + 2)) * 4;
  uVar10 = (uint)*pbVar9;
LAB_10b420d74:
  uVar6 = uVar6 + uVar10;
  *(uint *)(param_1 + 0x10) = uVar6;
  bVar3 = (&UNK_10e58ebc2)[(ulong)*(ushort *)(pbVar9 + 2) * 4];
  uVar4 = *(ushort *)(&UNK_10e58ebc0 + (ulong)*(ushort *)(pbVar9 + 2) * 4);
  if (0x1f < uVar6) {
    *(ulong *)(param_1 + 8) = uVar5 >> 0x20;
    uVar6 = uVar6 ^ 0x20;
    *(uint *)(param_1 + 0x10) = uVar6;
    uVar5 = uVar5 >> 0x20 | (ulong)**(uint **)(param_1 + 0x18) << 0x20;
    *(ulong *)(param_1 + 8) = uVar5;
    *(uint **)(param_1 + 0x18) = *(uint **)(param_1 + 0x18) + 1;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -4;
  }
  *(uint *)(param_1 + 0x10) = uVar6 + bVar3;
  *(uint *)(param_1 + 0x114) =
       ((uint)(uVar5 >> ((ulong)uVar6 & 0x3f)) & (-1 << (ulong)(bVar3 & 0x1f) ^ 0xffffffffU)) +
       (uint)uVar4;
  if (uVar7 == 0) {
    uVar7 = *(uint *)(param_1 + 0x130);
  }
  else if (uVar7 == 1) {
    uVar7 = *(int *)(param_1 + 0x134) + 1;
  }
  else {
    uVar7 = uVar7 - 2;
  }
  uVar6 = 0;
  if (uVar2 <= uVar7) {
    uVar6 = uVar2;
  }
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x134);
  *(uint *)(param_1 + 0x134) = uVar7 - uVar6;
  *(undefined8 *)(param_1 + 0x88) =
       *(undefined8 *)(*(long *)(param_1 + 0xc0) + (ulong)(uVar7 - uVar6) * 8);
  return;
}



/* Entry: 10b420ef4; end: 10b421283;  */

undefined8 FUN_10b420ef4(long param_1)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint uStack_58;
  uint uStack_54;
  
  uVar3 = *(uint *)(param_1 + 0x11c);
  if (uVar3 < 2) {
LAB_10b4211bc:
    uVar7 = 0;
  }
  else {
    lVar15 = *(long *)(param_1 + 0xf0);
    lVar8 = *(long *)(param_1 + 0xf8);
    uStack_58 = 0xaaaaaaaa;
    uVar17 = *(ulong *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 0x10);
    pbVar1 = *(byte **)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar12 = uVar4 - 0x32;
    uVar13 = uVar17;
    pbVar10 = pbVar1;
    lVar14 = lVar2;
    uVar11 = uVar4;
    while (uVar12 < 0xf) {
      lVar14 = lVar14 + -1;
      if (lVar14 == -1) {
        func_0x000107c2f054(lVar15,param_1 + 8,&uStack_58);
        if ((int)lVar15 != 0) goto LAB_10b420fec;
        goto LAB_10b4211bc;
      }
      *(ulong *)(param_1 + 8) = uVar13 >> 8;
      uVar13 = uVar13 >> 8 | (ulong)*pbVar10 << 0x38;
      *(ulong *)(param_1 + 8) = uVar13;
      *(uint *)(param_1 + 0x10) = uVar11 - 8;
      *(byte **)(param_1 + 0x18) = pbVar10 + 1;
      *(long *)(param_1 + 0x20) = lVar14;
      uVar12 = uVar11 - 0x3a;
      pbVar10 = pbVar10 + 1;
      uVar11 = uVar11 - 8;
    }
    uVar13 = uVar13 >> ((ulong)uVar11 & 0x3f);
    pbVar10 = (byte *)(lVar15 + (uVar13 & 0xff) * 4);
    bVar5 = *pbVar10;
    if (8 < bVar5) {
      uVar11 = uVar11 + 8;
      *(uint *)(param_1 + 0x10) = uVar11;
      pbVar10 = pbVar10 + (ulong)(((uint)uVar13 >> 8 &
                                   (-1 << (ulong)(bVar5 - 8 & 0x1f) ^ 0xffffffffU) & 0x7f) +
                                 (uint)*(ushort *)(pbVar10 + 2)) * 4;
      bVar5 = *pbVar10;
    }
    *(uint *)(param_1 + 0x10) = uVar11 + bVar5;
    uStack_58 = (uint)*(ushort *)(pbVar10 + 2);
LAB_10b420fec:
    uStack_54 = 0xaaaaaaaa;
    if (*(int *)(param_1 + 0x294) == 0) {
      uVar11 = *(uint *)(param_1 + 0x10);
      uVar13 = (ulong)uVar11;
      if (uVar11 - 0x32 < 0xf) {
        lVar15 = *(long *)(param_1 + 0x20);
        do {
          lVar15 = lVar15 + -1;
          if (lVar15 == -1) {
            func_0x000107c2f054(lVar8,param_1 + 8,&uStack_54);
            if ((int)lVar8 == 0) goto LAB_10b4211ac;
            goto LAB_10b4210f0;
          }
          uVar16 = *(ulong *)(param_1 + 8);
          *(ulong *)(param_1 + 8) = uVar16 >> 8;
          uVar16 = uVar16 >> 8 | (ulong)**(byte **)(param_1 + 0x18) << 0x38;
          *(ulong *)(param_1 + 8) = uVar16;
          iVar9 = (int)uVar13;
          uVar11 = iVar9 - 8;
          uVar13 = (ulong)uVar11;
          *(uint *)(param_1 + 0x10) = uVar11;
          *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
          *(long *)(param_1 + 0x20) = lVar15;
        } while (iVar9 - 0x3aU < 0xf);
        uVar16 = uVar16 >> (uVar13 & 0x3f);
        pbVar10 = (byte *)(lVar8 + (uVar16 & 0xff) * 4);
        bVar5 = *pbVar10;
      }
      else {
        uVar16 = *(ulong *)(param_1 + 8) >> (uVar13 & 0x3f);
        pbVar10 = (byte *)(lVar8 + (uVar16 & 0xff) * 4);
        bVar5 = *pbVar10;
      }
      uVar12 = (uint)bVar5;
      if (8 < bVar5) {
        uVar11 = uVar11 + 8;
        *(uint *)(param_1 + 0x10) = uVar11;
        pbVar10 = pbVar10 + (ulong)(((uint)(uVar16 >> 8) & 0xffffff &
                                     (-1 << (ulong)(uVar12 - 8 & 0x1f) ^ 0xffffffffU) & 0x7f) +
                                   (uint)*(ushort *)(pbVar10 + 2)) * 4;
        uVar12 = (uint)*pbVar10;
      }
      *(uint *)(param_1 + 0x10) = uVar11 + uVar12;
      uStack_54 = (uint)*(ushort *)(pbVar10 + 2);
    }
    else {
      uStack_54 = *(uint *)(param_1 + 0x10c);
    }
LAB_10b4210f0:
    bVar5 = (&UNK_10e58ebc2)[(ulong)uStack_54 * 4];
    uVar6 = *(ushort *)(&UNK_10e58ebc0 + (ulong)uStack_54 * 4);
    uVar13 = (ulong)*(uint *)(param_1 + 0x10);
    uVar11 = 0x40 - *(uint *)(param_1 + 0x10);
    if (uVar11 < bVar5) {
      lVar15 = *(long *)(param_1 + 0x20);
      do {
        lVar15 = lVar15 + -1;
        if (lVar15 == -1) {
          *(uint *)(param_1 + 0x10c) = uStack_54;
LAB_10b4211ac:
          *(undefined4 *)(param_1 + 0x294) = 0;
          *(ulong *)(param_1 + 8) = uVar17;
          *(uint *)(param_1 + 0x10) = uVar4;
          *(byte **)(param_1 + 0x18) = pbVar1;
          *(long *)(param_1 + 0x20) = lVar2;
          goto LAB_10b4211bc;
        }
        uVar16 = *(ulong *)(param_1 + 8);
        *(ulong *)(param_1 + 8) = uVar16 >> 8;
        uVar16 = uVar16 >> 8 | (ulong)**(byte **)(param_1 + 0x18) << 0x38;
        *(ulong *)(param_1 + 8) = uVar16;
        uVar12 = (int)uVar13 - 8;
        uVar13 = (ulong)uVar12;
        *(uint *)(param_1 + 0x10) = uVar12;
        *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
        *(long *)(param_1 + 0x20) = lVar15;
        uVar11 = uVar11 + 8;
      } while (uVar11 < bVar5);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 8);
    }
    *(uint *)(param_1 + 0x10) = (int)uVar13 + (uint)bVar5;
    *(uint *)(param_1 + 0x110) =
         ((uint)(uVar16 >> (uVar13 & 0x3f)) & (-1 << (ulong)(bVar5 & 0x1f) ^ 0xffffffffU)) +
         (uint)uVar6;
    *(undefined4 *)(param_1 + 0x294) = 0;
    if (uStack_58 == 0) {
      uStack_58 = *(uint *)(param_1 + 0x128);
    }
    else if (uStack_58 == 1) {
      uStack_58 = *(int *)(param_1 + 300) + 1;
    }
    else {
      uStack_58 = uStack_58 - 2;
    }
    uVar11 = 0;
    if (uVar3 <= uStack_58) {
      uVar11 = uVar3;
    }
    uStack_58 = uStack_58 - uVar11;
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 300);
    *(uint *)(param_1 + 300) = uStack_58;
    *(ulong *)(param_1 + 0x98) = *(long *)(param_1 + 0x2a8) + (ulong)(uStack_58 * 0x40);
    *(uint *)(param_1 + 0x100) =
         *(uint *)(param_1 + (ulong)(uStack_58 >> 5) * 4 + 0x2c8) >> (ulong)(uStack_58 & 0x1f) & 1;
    *(undefined8 *)(param_1 + 0x158) =
         *(undefined8 *)
          (*(long *)(param_1 + 0xa8) +
          (ulong)*(byte *)(*(long *)(param_1 + 0x2a8) + (ulong)(uStack_58 * 0x40)) * 8);
    *(undefined **)(param_1 + 0x90) =
         &UNK_10e58ec28 +
         ((ulong)*(byte *)(*(long *)(param_1 + 0x2b0) + (ulong)uStack_58) & 3) * 0x200;
    uVar7 = 1;
  }
  return uVar7;
}



/* Entry: 10b421284; end: 10b4214d3;  */

void FUN_10b421284(long param_1)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  
  uVar1 = *(uint *)(param_1 + 0x11c);
  if (uVar1 < 2) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar5 < 0x30) {
    uVar9 = uVar4 >> ((ulong)uVar5 & 0x3f);
    pbVar8 = (byte *)(*(long *)(param_1 + 0xf0) + (uVar9 & 0xff) * 4);
    uVar7 = (uint)*pbVar8;
    uVar6 = uVar7;
    if (*pbVar8 < 9) goto LAB_10b4212b8;
LAB_10b4213d4:
    *(uint *)(param_1 + 0x10) = uVar5 + 8;
    uVar3 = *(ushort *)(pbVar8 + 2);
    lVar10 = *(long *)(param_1 + 0xf8);
    uVar5 = uVar5 + 8 +
            (uint)pbVar8[(ulong)(((uint)(uVar9 >> 8) & 0xffffff &
                                 (-1 << (ulong)(uVar6 - 8 & 0x1f) ^ 0xffffffffU)) + (uint)uVar3) * 4
                        ];
    *(uint *)(param_1 + 0x10) = uVar5;
    uVar6 = (uint)*(ushort *)
                   (pbVar8 + (ulong)(((uint)(uVar9 >> 8) & 0xffffff &
                                     (-1 << (ulong)(uVar6 - 8 & 0x1f) ^ 0xffffffffU)) + (uint)uVar3)
                             * 4 + 2);
    if (0x2f < uVar5) goto LAB_10b421418;
LAB_10b4212d0:
    uVar9 = uVar4 >> ((ulong)uVar5 & 0x3f);
    pbVar8 = (byte *)(lVar10 + (uVar9 & 0xff) * 4);
    uVar7 = (uint)*pbVar8;
    if (*pbVar8 < 9) goto LAB_10b421310;
  }
  else {
    *(ulong *)(param_1 + 8) = uVar4 >> 0x30;
    uVar5 = uVar5 ^ 0x30;
    *(uint *)(param_1 + 0x10) = uVar5;
    uVar4 = uVar4 >> 0x30 | **(long **)(param_1 + 0x18) << 0x10;
    *(ulong *)(param_1 + 8) = uVar4;
    *(long *)(param_1 + 0x18) = (long)*(long **)(param_1 + 0x18) + 6;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -6;
    uVar9 = uVar4 >> ((ulong)uVar5 & 0x3f);
    pbVar8 = (byte *)(*(long *)(param_1 + 0xf0) + (uVar9 & 0xff) * 4);
    uVar6 = (uint)*pbVar8;
    uVar7 = (uint)*pbVar8;
    if (8 < uVar7) goto LAB_10b4213d4;
LAB_10b4212b8:
    lVar10 = *(long *)(param_1 + 0xf8);
    uVar5 = uVar5 + uVar7;
    *(uint *)(param_1 + 0x10) = uVar5;
    uVar6 = (uint)*(ushort *)(pbVar8 + 2);
    if (uVar5 < 0x30) goto LAB_10b4212d0;
LAB_10b421418:
    *(ulong *)(param_1 + 8) = uVar4 >> 0x30;
    uVar5 = uVar5 ^ 0x30;
    *(uint *)(param_1 + 0x10) = uVar5;
    uVar4 = uVar4 >> 0x30 | **(long **)(param_1 + 0x18) << 0x10;
    *(ulong *)(param_1 + 8) = uVar4;
    *(long *)(param_1 + 0x18) = (long)*(long **)(param_1 + 0x18) + 6;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -6;
    uVar9 = uVar4 >> ((ulong)uVar5 & 0x3f);
    pbVar8 = (byte *)(lVar10 + (uVar9 & 0xff) * 4);
    uVar7 = (uint)*pbVar8;
    if (uVar7 < 9) goto LAB_10b421310;
  }
  uVar5 = uVar5 + 8;
  *(uint *)(param_1 + 0x10) = uVar5;
  pbVar8 = pbVar8 + (ulong)(((uint)(uVar9 >> 8) & 0xffffff &
                            (-1 << (ulong)(uVar7 - 8 & 0x1f) ^ 0xffffffffU)) +
                           (uint)*(ushort *)(pbVar8 + 2)) * 4;
  uVar7 = (uint)*pbVar8;
LAB_10b421310:
  uVar5 = uVar5 + uVar7;
  *(uint *)(param_1 + 0x10) = uVar5;
  bVar2 = (&UNK_10e58ebc2)[(ulong)*(ushort *)(pbVar8 + 2) * 4];
  uVar3 = *(ushort *)(&UNK_10e58ebc0 + (ulong)*(ushort *)(pbVar8 + 2) * 4);
  if (0x1f < uVar5) {
    *(ulong *)(param_1 + 8) = uVar4 >> 0x20;
    uVar5 = uVar5 ^ 0x20;
    *(uint *)(param_1 + 0x10) = uVar5;
    uVar4 = uVar4 >> 0x20 | (ulong)**(uint **)(param_1 + 0x18) << 0x20;
    *(ulong *)(param_1 + 8) = uVar4;
    *(uint **)(param_1 + 0x18) = *(uint **)(param_1 + 0x18) + 1;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -4;
  }
  *(uint *)(param_1 + 0x10) = uVar5 + bVar2;
  *(uint *)(param_1 + 0x110) =
       ((uint)(uVar4 >> ((ulong)uVar5 & 0x3f)) & (-1 << (ulong)(bVar2 & 0x1f) ^ 0xffffffffU)) +
       (uint)uVar3;
  if (uVar6 == 0) {
    uVar6 = *(uint *)(param_1 + 0x128);
  }
  else if (uVar6 == 1) {
    uVar6 = *(int *)(param_1 + 300) + 1;
  }
  else {
    uVar6 = uVar6 - 2;
  }
  uVar5 = 0;
  if (uVar1 <= uVar6) {
    uVar5 = uVar1;
  }
  uVar6 = uVar6 - uVar5;
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 300);
  *(uint *)(param_1 + 300) = uVar6;
  *(ulong *)(param_1 + 0x98) = *(long *)(param_1 + 0x2a8) + (ulong)(uVar6 * 0x40);
  *(uint *)(param_1 + 0x100) =
       *(uint *)(param_1 + (ulong)(uVar6 >> 5) * 4 + 0x2c8) >> (ulong)(uVar6 & 0x1f) & 1;
  *(undefined8 *)(param_1 + 0x158) =
       *(undefined8 *)
        (*(long *)(param_1 + 0xa8) +
        (ulong)*(byte *)(*(long *)(param_1 + 0x2a8) + (ulong)(uVar6 * 0x40)) * 8);
  *(undefined **)(param_1 + 0x90) =
       &UNK_10e58ec28 + ((ulong)*(byte *)(*(long *)(param_1 + 0x2b0) + (ulong)uVar6) & 3) * 0x200;
  return;
}



/* Entry: 10b4214d4; end: 10b421837;  */

undefined8 FUN_10b4214d4(long param_1)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint uStack_58;
  uint uStack_54;
  
  uVar3 = *(uint *)(param_1 + 0x124);
  if (uVar3 < 2) {
LAB_10b4217a8:
    uVar7 = 0;
  }
  else {
    lVar15 = *(long *)(param_1 + 0xf8);
    lVar13 = *(long *)(param_1 + 0xf0) + 0x13c0;
    uStack_58 = 0xaaaaaaaa;
    uVar17 = *(ulong *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 0x10);
    pbVar1 = *(byte **)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar11 = uVar4 - 0x32;
    uVar12 = uVar17;
    pbVar8 = pbVar1;
    lVar14 = lVar2;
    uVar9 = uVar4;
    while (uVar11 < 0xf) {
      lVar14 = lVar14 + -1;
      if (lVar14 == -1) {
        func_0x000107c2f054(lVar13,param_1 + 8,&uStack_58);
        if ((int)lVar13 != 0) goto LAB_10b4215d4;
        goto LAB_10b4217a8;
      }
      *(ulong *)(param_1 + 8) = uVar12 >> 8;
      uVar12 = uVar12 >> 8 | (ulong)*pbVar8 << 0x38;
      *(ulong *)(param_1 + 8) = uVar12;
      *(uint *)(param_1 + 0x10) = uVar9 - 8;
      *(byte **)(param_1 + 0x18) = pbVar8 + 1;
      *(long *)(param_1 + 0x20) = lVar14;
      uVar11 = uVar9 - 0x3a;
      pbVar8 = pbVar8 + 1;
      uVar9 = uVar9 - 8;
    }
    uVar12 = uVar12 >> ((ulong)uVar9 & 0x3f);
    pbVar8 = (byte *)(lVar13 + (uVar12 & 0xff) * 4);
    bVar5 = *pbVar8;
    if (8 < bVar5) {
      uVar9 = uVar9 + 8;
      *(uint *)(param_1 + 0x10) = uVar9;
      pbVar8 = pbVar8 + (ulong)(((uint)uVar12 >> 8 & (-1 << (ulong)(bVar5 - 8 & 0x1f) ^ 0xffffffffU)
                                & 0x7f) + (uint)*(ushort *)(pbVar8 + 2)) * 4;
      bVar5 = *pbVar8;
    }
    *(uint *)(param_1 + 0x10) = uVar9 + bVar5;
    uStack_58 = (uint)*(ushort *)(pbVar8 + 2);
LAB_10b4215d4:
    uStack_54 = 0xaaaaaaaa;
    if (*(int *)(param_1 + 0x294) == 0) {
      lVar15 = lVar15 + 0xc60;
      uVar9 = *(uint *)(param_1 + 0x10);
      uVar12 = (ulong)uVar9;
      if (uVar9 - 0x32 < 0xf) {
        lVar13 = *(long *)(param_1 + 0x20);
        do {
          lVar13 = lVar13 + -1;
          if (lVar13 == -1) {
            func_0x000107c2f054(lVar15,param_1 + 8,&uStack_54);
            if ((int)lVar15 == 0) goto LAB_10b421798;
            goto LAB_10b4216dc;
          }
          uVar16 = *(ulong *)(param_1 + 8);
          *(ulong *)(param_1 + 8) = uVar16 >> 8;
          uVar16 = uVar16 >> 8 | (ulong)**(byte **)(param_1 + 0x18) << 0x38;
          *(ulong *)(param_1 + 8) = uVar16;
          iVar10 = (int)uVar12;
          uVar9 = iVar10 - 8;
          uVar12 = (ulong)uVar9;
          *(uint *)(param_1 + 0x10) = uVar9;
          *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
          *(long *)(param_1 + 0x20) = lVar13;
        } while (iVar10 - 0x3aU < 0xf);
        uVar16 = uVar16 >> (uVar12 & 0x3f);
        pbVar8 = (byte *)(lVar15 + (uVar16 & 0xff) * 4);
        bVar5 = *pbVar8;
      }
      else {
        uVar16 = *(ulong *)(param_1 + 8) >> (uVar12 & 0x3f);
        pbVar8 = (byte *)(lVar15 + (uVar16 & 0xff) * 4);
        bVar5 = *pbVar8;
      }
      uVar11 = (uint)bVar5;
      if (8 < bVar5) {
        uVar9 = uVar9 + 8;
        *(uint *)(param_1 + 0x10) = uVar9;
        pbVar8 = pbVar8 + (ulong)(((uint)(uVar16 >> 8) & 0xffffff &
                                   (-1 << (ulong)(uVar11 - 8 & 0x1f) ^ 0xffffffffU) & 0x7f) +
                                 (uint)*(ushort *)(pbVar8 + 2)) * 4;
        uVar11 = (uint)*pbVar8;
      }
      *(uint *)(param_1 + 0x10) = uVar9 + uVar11;
      uStack_54 = (uint)*(ushort *)(pbVar8 + 2);
    }
    else {
      uStack_54 = *(uint *)(param_1 + 0x10c);
    }
LAB_10b4216dc:
    bVar5 = (&UNK_10e58ebc2)[(ulong)uStack_54 * 4];
    uVar6 = *(ushort *)(&UNK_10e58ebc0 + (ulong)uStack_54 * 4);
    uVar12 = (ulong)*(uint *)(param_1 + 0x10);
    uVar9 = 0x40 - *(uint *)(param_1 + 0x10);
    if (uVar9 < bVar5) {
      lVar15 = *(long *)(param_1 + 0x20);
      do {
        lVar15 = lVar15 + -1;
        if (lVar15 == -1) {
          *(uint *)(param_1 + 0x10c) = uStack_54;
LAB_10b421798:
          *(undefined4 *)(param_1 + 0x294) = 0;
          *(ulong *)(param_1 + 8) = uVar17;
          *(uint *)(param_1 + 0x10) = uVar4;
          *(byte **)(param_1 + 0x18) = pbVar1;
          *(long *)(param_1 + 0x20) = lVar2;
          goto LAB_10b4217a8;
        }
        uVar16 = *(ulong *)(param_1 + 8);
        *(ulong *)(param_1 + 8) = uVar16 >> 8;
        uVar16 = uVar16 >> 8 | (ulong)**(byte **)(param_1 + 0x18) << 0x38;
        *(ulong *)(param_1 + 8) = uVar16;
        uVar11 = (int)uVar12 - 8;
        uVar12 = (ulong)uVar11;
        *(uint *)(param_1 + 0x10) = uVar11;
        *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
        *(long *)(param_1 + 0x20) = lVar15;
        uVar9 = uVar9 + 8;
      } while (uVar9 < bVar5);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 8);
    }
    *(uint *)(param_1 + 0x10) = (int)uVar12 + (uint)bVar5;
    *(uint *)(param_1 + 0x118) =
         ((uint)(uVar16 >> (uVar12 & 0x3f)) & (-1 << (ulong)(bVar5 & 0x1f) ^ 0xffffffffU)) +
         (uint)uVar6;
    *(undefined4 *)(param_1 + 0x294) = 0;
    if (uStack_58 == 0) {
      uStack_58 = *(uint *)(param_1 + 0x138);
    }
    else if (uStack_58 == 1) {
      uStack_58 = *(int *)(param_1 + 0x13c) + 1;
    }
    else {
      uStack_58 = uStack_58 - 2;
    }
    uVar9 = 0;
    if (uVar3 <= uStack_58) {
      uVar9 = uVar3;
    }
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x13c);
    *(uint *)(param_1 + 0x13c) = uStack_58 - uVar9;
    lVar15 = *(long *)(param_1 + 0x150) + (ulong)((uStack_58 - uVar9) * 4);
    *(long *)(param_1 + 0xa0) = lVar15;
    *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(lVar15 + *(int *)(param_1 + 0x104));
    uVar7 = 1;
  }
  return uVar7;
}



/* Entry: 10b421838; end: 10b421a5f;  */

void FUN_10b421838(long param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar2 = *(uint *)(param_1 + 0x124);
  if (uVar2 < 2) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0xf0) + 0x13c0;
  uVar6 = *(uint *)(param_1 + 0x10);
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar6 < 0x30) {
    lVar8 = *(long *)(param_1 + 0xf8);
    uVar11 = uVar5 >> ((ulong)uVar6 & 0x3f);
    pbVar9 = (byte *)(lVar1 + (uVar11 & 0xff) * 4);
    uVar10 = (uint)*pbVar9;
    uVar7 = uVar10;
    if (*pbVar9 < 9) goto LAB_10b421878;
LAB_10b421998:
    *(uint *)(param_1 + 0x10) = uVar6 + 8;
    uVar4 = *(ushort *)(pbVar9 + 2);
    lVar8 = lVar8 + 0xc60;
    uVar6 = uVar6 + 8 +
            (uint)pbVar9[(ulong)(((uint)(uVar11 >> 8) & 0xffffff &
                                 (-1 << (ulong)(uVar7 - 8 & 0x1f) ^ 0xffffffffU)) + (uint)uVar4) * 4
                        ];
    *(uint *)(param_1 + 0x10) = uVar6;
    uVar7 = (uint)*(ushort *)
                   (pbVar9 + (ulong)(((uint)(uVar11 >> 8) & 0xffffff &
                                     (-1 << (ulong)(uVar7 - 8 & 0x1f) ^ 0xffffffffU)) + (uint)uVar4)
                             * 4 + 2);
    if (0x2f < uVar6) goto LAB_10b4219dc;
LAB_10b421890:
    uVar11 = uVar5 >> ((ulong)uVar6 & 0x3f);
    pbVar9 = (byte *)(lVar8 + (uVar11 & 0xff) * 4);
    uVar10 = (uint)*pbVar9;
    if (*pbVar9 < 9) goto LAB_10b4218d0;
  }
  else {
    *(ulong *)(param_1 + 8) = uVar5 >> 0x30;
    uVar6 = uVar6 ^ 0x30;
    *(uint *)(param_1 + 0x10) = uVar6;
    uVar5 = uVar5 >> 0x30 | **(long **)(param_1 + 0x18) << 0x10;
    *(ulong *)(param_1 + 8) = uVar5;
    *(long *)(param_1 + 0x18) = (long)*(long **)(param_1 + 0x18) + 6;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -6;
    lVar8 = *(long *)(param_1 + 0xf8);
    uVar11 = uVar5 >> ((ulong)uVar6 & 0x3f);
    pbVar9 = (byte *)(lVar1 + (uVar11 & 0xff) * 4);
    uVar7 = (uint)*pbVar9;
    uVar10 = (uint)*pbVar9;
    if (8 < uVar10) goto LAB_10b421998;
LAB_10b421878:
    lVar8 = lVar8 + 0xc60;
    uVar6 = uVar6 + uVar10;
    *(uint *)(param_1 + 0x10) = uVar6;
    uVar7 = (uint)*(ushort *)(pbVar9 + 2);
    if (uVar6 < 0x30) goto LAB_10b421890;
LAB_10b4219dc:
    *(ulong *)(param_1 + 8) = uVar5 >> 0x30;
    uVar6 = uVar6 ^ 0x30;
    *(uint *)(param_1 + 0x10) = uVar6;
    uVar5 = uVar5 >> 0x30 | **(long **)(param_1 + 0x18) << 0x10;
    *(ulong *)(param_1 + 8) = uVar5;
    *(long *)(param_1 + 0x18) = (long)*(long **)(param_1 + 0x18) + 6;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -6;
    uVar11 = uVar5 >> ((ulong)uVar6 & 0x3f);
    pbVar9 = (byte *)(lVar8 + (uVar11 & 0xff) * 4);
    uVar10 = (uint)*pbVar9;
    if (uVar10 < 9) goto LAB_10b4218d0;
  }
  uVar6 = uVar6 + 8;
  *(uint *)(param_1 + 0x10) = uVar6;
  pbVar9 = pbVar9 + (ulong)(((uint)(uVar11 >> 8) & 0xffffff &
                            (-1 << (ulong)(uVar10 - 8 & 0x1f) ^ 0xffffffffU)) +
                           (uint)*(ushort *)(pbVar9 + 2)) * 4;
  uVar10 = (uint)*pbVar9;
LAB_10b4218d0:
  uVar6 = uVar6 + uVar10;
  *(uint *)(param_1 + 0x10) = uVar6;
  bVar3 = (&UNK_10e58ebc2)[(ulong)*(ushort *)(pbVar9 + 2) * 4];
  uVar4 = *(ushort *)(&UNK_10e58ebc0 + (ulong)*(ushort *)(pbVar9 + 2) * 4);
  if (0x1f < uVar6) {
    *(ulong *)(param_1 + 8) = uVar5 >> 0x20;
    uVar6 = uVar6 ^ 0x20;
    *(uint *)(param_1 + 0x10) = uVar6;
    uVar5 = uVar5 >> 0x20 | (ulong)**(uint **)(param_1 + 0x18) << 0x20;
    *(ulong *)(param_1 + 8) = uVar5;
    *(uint **)(param_1 + 0x18) = *(uint **)(param_1 + 0x18) + 1;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -4;
  }
  *(uint *)(param_1 + 0x10) = uVar6 + bVar3;
  *(uint *)(param_1 + 0x118) =
       ((uint)(uVar5 >> ((ulong)uVar6 & 0x3f)) & (-1 << (ulong)(bVar3 & 0x1f) ^ 0xffffffffU)) +
       (uint)uVar4;
  if (uVar7 == 0) {
    uVar7 = *(uint *)(param_1 + 0x138);
  }
  else if (uVar7 == 1) {
    uVar7 = *(int *)(param_1 + 0x13c) + 1;
  }
  else {
    uVar7 = uVar7 - 2;
  }
  uVar6 = 0;
  if (uVar2 <= uVar7) {
    uVar6 = uVar2;
  }
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x13c);
  *(uint *)(param_1 + 0x13c) = uVar7 - uVar6;
  lVar1 = *(long *)(param_1 + 0x150) + (ulong)((uVar7 - uVar6) * 4);
  *(long *)(param_1 + 0xa0) = lVar1;
  *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(lVar1 + *(int *)(param_1 + 0x104));
  return;
}



/* Entry: 10b421a60; end: 10b421d23;  */

int FUN_10b421a60(uint *param_1,uint param_2,ushort *param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ulong uVar11;
  
  uVar11 = 1;
  iVar1 = 1 << (ulong)(param_2 & 0x1f);
  if (param_4 < 2) {
    if (param_4 == 0) {
      uVar3 = 0xaa00;
      puVar4 = param_1;
    }
    else {
      if (param_4 != 1) goto LAB_10b421d08;
      uVar8 = param_3[1];
      uVar3 = 0xaa01;
      puVar4 = param_1 + 1;
      if (*param_3 < uVar8) {
        *param_1 = (uint)*param_3 << 0x10 | 0xaa01;
        uVar11 = 2;
        param_3 = param_3 + 1;
      }
      else {
        *param_1 = (uint)uVar8 << 0x10 | 0xaa01;
        uVar11 = 2;
      }
    }
  }
  else {
    if (param_4 == 2) {
      *param_1 = (uint)*param_3 << 0x10 | 0xaa01;
      param_1[2] = (uint)*param_3 << 0x10 | 0xaa01;
      uVar8 = param_3[1];
      puVar7 = param_3 + 2;
      uVar3 = 0xaa02;
      if (*puVar7 <= uVar8) {
        param_1[1] = (uint)*puVar7 << 0x10 | 0xaa02;
        uVar11 = 4;
        param_3 = param_3 + 1;
        puVar4 = param_1 + 3;
        goto LAB_10b421ce4;
      }
      param_1[1] = (uint)uVar8 << 0x10 | 0xaa02;
    }
    else {
      if (param_4 != 3) {
        if (param_4 != 4) goto LAB_10b421d08;
        uVar8 = param_3[3];
        if (uVar8 < param_3[2]) {
          param_3[3] = param_3[2];
          param_3[2] = uVar8;
        }
        *param_1 = (uint)*param_3 << 0x10 | 0xaa01;
        param_1[1] = (uint)param_3[1] << 0x10 | 0xaa02;
        param_1[2] = (uint)*param_3 << 0x10 | 0xaa01;
        uVar3 = 0xaa03;
        param_1[3] = (uint)param_3[2] << 0x10 | 0xaa03;
        param_1[4] = (uint)*param_3 << 0x10 | 0xaa01;
        param_1[5] = (uint)param_3[1] << 0x10 | 0xaa02;
        param_1[6] = (uint)*param_3 << 0x10 | 0xaa01;
        uVar11 = 8;
        param_3 = param_3 + 3;
        puVar4 = param_1 + 7;
        goto LAB_10b421ce4;
      }
      uVar8 = param_3[1];
      uVar10 = *param_3;
      if (uVar8 < uVar10) {
        param_3[1] = uVar10;
        *param_3 = uVar8;
        uVar9 = param_3[2];
        bVar2 = uVar9 < uVar8;
        uVar5 = uVar8;
        uVar6 = uVar8;
        uVar8 = uVar10;
        if (bVar2) goto LAB_10b421c48;
LAB_10b421bd0:
        uVar6 = uVar9;
        uVar10 = param_3[3];
        uVar9 = uVar5;
        if (uVar10 < uVar5) goto LAB_10b421c64;
LAB_10b421be8:
        uVar5 = uVar10;
        uVar10 = uVar9;
        if (uVar6 < uVar8) goto LAB_10b421c78;
LAB_10b421bf8:
        uVar9 = uVar6;
        uVar6 = uVar8;
        if (uVar5 < uVar8) goto LAB_10b421c8c;
LAB_10b421c08:
        uVar6 = uVar5;
        if (uVar6 < uVar9) {
LAB_10b421c9c:
          param_3[3] = uVar9;
          param_3[2] = uVar6;
        }
      }
      else {
        uVar9 = param_3[2];
        uVar5 = uVar10;
        uVar6 = uVar10;
        if (uVar10 <= uVar9) goto LAB_10b421bd0;
LAB_10b421c48:
        uVar5 = uVar9;
        param_3[2] = uVar6;
        *param_3 = uVar5;
        uVar10 = param_3[3];
        uVar9 = uVar5;
        if (uVar5 <= uVar10) goto LAB_10b421be8;
LAB_10b421c64:
        param_3[3] = uVar5;
        *param_3 = uVar10;
        if (uVar8 <= uVar6) goto LAB_10b421bf8;
LAB_10b421c78:
        param_3[2] = uVar8;
        param_3[1] = uVar6;
        uVar9 = uVar8;
        if (uVar6 <= uVar5) goto LAB_10b421c08;
LAB_10b421c8c:
        param_3[3] = uVar6;
        param_3[1] = uVar5;
        if (uVar6 < uVar9) goto LAB_10b421c9c;
      }
      puVar7 = param_3 + 3;
      *param_1 = (uint)uVar10 << 0x10 | 0xaa02;
      param_1[2] = (uint)param_3[1] << 0x10 | 0xaa02;
      param_1[1] = (uint)param_3[2] << 0x10 | 0xaa02;
    }
    uVar3 = 0xaa02;
    uVar11 = 4;
    param_3 = puVar7;
    puVar4 = param_1 + 3;
  }
LAB_10b421ce4:
  *puVar4 = uVar3 | (uint)*param_3 << 0x10;
LAB_10b421d08:
  for (; (int)uVar11 != iVar1; uVar11 = (ulong)(uint)((int)uVar11 << 1)) {
    _memcpy(param_1 + uVar11,param_1);
  }
  return iVar1;
}



/* Entry: 10b421d24; end: 10b421ecb;  */

undefined8 FUN_10b421d24(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 < 0xc0) {
    if (bVar1 - 0x61 < 0x1a) {
      *param_1 = bVar1 & 0x5f;
    }
    return 1;
  }
  if (bVar1 < 0xe0) {
    param_1[1] = param_1[1] ^ 0x20;
    return 2;
  }
  param_1[2] = param_1[2] ^ 5;
  return 3;
}



/* Entry: 10b421ecc; end: 10b4798d3;  */

void FUN_10b421ecc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  int iVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 uVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  undefined8 extraout_x10_01;
  undefined8 extraout_x10_02;
  undefined8 uStack_28;
  
  func_0x000107c2d30c(param_1,&UNK_10f75e447);
  iVar2 = (int)param_1;
  if (iVar2 == 0) {
    func_0x00010b422bcc();
    if (iVar2 == 0) {
      func_0x00010b422bcc();
      if (iVar2 == 0) {
        func_0x00010b422bcc();
        if (iVar2 == 0) {
          func_0x00010b422bcc();
          if (iVar2 == 0) {
            func_0x00010b422bcc();
            if (iVar2 == 0) {
              func_0x00010b422bcc();
              if (iVar2 == 0) {
                func_0x00010b422bcc();
                if (iVar2 == 0) {
                  func_0x00010b422bcc();
                  if (iVar2 == 0) {
                    func_0x00010b422bcc();
                    if (iVar2 == 0) {
                      func_0x00010b422bcc();
                      if (iVar2 == 0) {
                        func_0x00010b422bcc();
                        if (iVar2 == 0) {
                          func_0x00010b422bcc();
                          if (iVar2 == 0) {
                            func_0x00010b422bcc();
                            if (iVar2 == 0) {
                              func_0x00010b422bcc();
                              if (iVar2 == 0) {
                                func_0x00010b422bcc();
                                if (iVar2 == 0) {
                                  func_0x00010b422bcc();
                                  if (iVar2 == 0) {
                                    func_0x00010b422bcc();
                                    if (iVar2 == 0) {
                                      func_0x00010b422bcc();
                                      if (iVar2 == 0) {
                                        func_0x00010b422bcc();
                                        if (iVar2 == 0) {
                                          func_0x00010b422bcc();
                                          if (iVar2 == 0) {
                                            func_0x00010b422bcc();
                                            if (iVar2 == 0) {
                                              func_0x00010b422bcc();
                                              if (iVar2 == 0) {
                                                func_0x00010b422bcc();
                                                if (iVar2 == 0) {
                                                  func_0x00010b422bcc();
                                                  if (iVar2 == 0) {
                                                    func_0x00010b422bcc();
                                                    if (iVar2 == 0) {
                                                      func_0x00010b422bcc();
                                                      if (iVar2 == 0) {
                                                        func_0x00010b422bcc();
                                                        if (iVar2 == 0) {
                                                          func_0x00010b422bcc();
                                                          if (iVar2 == 0) {
                                                            func_0x00010b422bcc();
                                                            if (iVar2 == 0) {
                                                              func_0x00010b422bcc();
                                                              if (iVar2 == 0) {
                                                                func_0x00010b422bcc();
                                                                if (iVar2 == 0) {
                                                                  func_0x00010b422bcc();
                                                                  if (iVar2 == 0) {
                                                                    func_0x00010b422bcc();
                                                                    if (iVar2 == 0) {
                                                                      func_0x00010b422bcc();
                                                                      if (iVar2 == 0) {
                                                                        func_0x00010b422bcc();
                                                                        if (iVar2 == 0) {
                                                                          func_0x00010b422bcc();
                                                                          if (iVar2 == 0) {
                                                                            func_0x00010b422bcc();
                                                                            if (iVar2 == 0) {
                                                                              func_0x00010b422bcc();
                                                                              if (iVar2 == 0) {
                                                                                func_0x00010b422bcc(
                                                  );
                                                  if (iVar2 == 0) {
                                                    func_0x00010b422bcc();
                                                    if (iVar2 == 0) {
                                                      func_0x00010b422bcc();
                                                      if (iVar2 == 0) {
                                                        func_0x00010b422bcc();
                                                        if (iVar2 == 0) {
                                                          func_0x00010b422bcc();
                                                          if (iVar2 == 0) {
                                                            func_0x00010b422bcc();
                                                            if (iVar2 == 0) {
                                                              func_0x00010b422bcc();
                                                              if (iVar2 == 0) {
                                                                func_0x00010b422bcc();
                                                                if (iVar2 == 0) {
                                                                  func_0x00010b422bcc();
                                                                  if (iVar2 == 0) {
                                                                    func_0x00010b422bcc();
                                                                    if (iVar2 == 0) {
                                                                      func_0x00010b422bcc();
                                                                      if (iVar2 == 0) {
                                                                        func_0x00010b422bcc();
                                                                        if (iVar2 == 0) {
                                                                          func_0x00010b422bcc();
                                                                          if (iVar2 == 0) {
                                                                            func_0x00010b422bcc();
                                                                            if (iVar2 == 0) {
                                                                              func_0x00010b422bcc();
                                                                              if (iVar2 == 0) {
                                                                                func_0x00010b422bcc(
                                                  );
                                                  if (iVar2 == 0) {
                                                    func_0x00010b422bcc();
                                                    if (iVar2 == 0) {
                                                      func_0x00010b422bcc();
                                                      if (iVar2 == 0) {
                                                        func_0x00010b422bcc();
                                                        if (iVar2 == 0) {
                                                          func_0x00010b422bcc();
                                                          if (iVar2 == 0) {
                                                            func_0x00010b422bcc();
                                                            if (iVar2 == 0) {
                                                              func_0x00010b422bcc();
                                                              if (iVar2 == 0) {
                                                                func_0x00010b422bcc();
                                                                if (iVar2 == 0) {
                                                                  func_0x00010b422bcc();
                                                                  if (iVar2 == 0) {
                                                                    func_0x00010b422bcc();
                                                                    if (iVar2 == 0) {
                                                                      func_0x00010b422bcc();
                                                                      if (iVar2 == 0) {
                                                                        func_0x00010b422bcc();
                                                                        if (iVar2 == 0) {
                                                                          func_0x00010b422bcc();
                                                                          if (iVar2 == 0) {
                                                                            func_0x00010b422bcc();
                                                                            if (iVar2 != 0) {
                                                                              puVar4 = (undefined8 *
                                                                                       )0x113370e90;
                                                                              goto LAB_10b4228c0;
                                                                            }
                                                                            func_0x00010b422bcc();
                                                                            if (iVar2 == 0) {
                                                                              func_0x00010b422bcc();
                                                                              if (iVar2 != 0) {
                                                                                puVar4 = (undefined8
                                                                                          *)
                                                  0x113370ea0;
                                                  goto LAB_10b42299c;
                                                  }
                                                  func_0x00010b422bcc();
                                                  if (iVar2 == 0) {
                                                    func_0x00010b422bcc();
                                                    if (iVar2 != 0) {
                                                      puVar4 = (undefined8 *)0x113370eb0;
                                                      goto LAB_10b4228c0;
                                                    }
                                                    func_0x00010b422bcc();
                                                    if (iVar2 == 0) {
                                                      func_0x00010b422bcc();
                                                      if (iVar2 == 0) {
                                                        func_0x00010b422bcc();
                                                        if (iVar2 != 0) {
                                                          puVar4 = (undefined8 *)0x113370ec0;
                                                          goto LAB_10b4228c0;
                                                        }
                                                        func_0x00010b422bcc();
                                                        if (iVar2 == 0) {
                                                          func_0x00010b422bcc();
                                                          if (iVar2 == 0) {
                                                            func_0x00010b422bcc();
                                                            if (iVar2 == 0) {
                                                              func_0x00010b422bcc();
                                                              if (iVar2 == 0) {
                                                                func_0x00010b422bcc();
                                                                if (iVar2 != 0) {
                                                                  puVar4 = (undefined8 *)0x113370ed0
                                                                  ;
                                                                  goto LAB_10b42279c;
                                                                }
                                                                func_0x00010b422bcc();
                                                                if (iVar2 == 0) {
                                                                  func_0x00010b422bcc();
                                                                  if (iVar2 == 0) {
                                                                    func_0x00010b422bcc();
                                                                    if (iVar2 == 0) {
                                                                      func_0x00010b422bcc();
                                                                      if (iVar2 == 0) {
                                                                        func_0x00010b422bcc();
                                                                        if (iVar2 != 0) {
                                                                          puVar4 = (undefined8 *)
                                                                                   0x113370ee8;
                                                                          goto LAB_10b4228c0;
                                                                        }
                                                                        func_0x00010b422bcc();
                                                                        if (iVar2 == 0) {
                                                                          func_0x00010b422bcc();
                                                                          if (iVar2 == 0) {
                                                                            func_0x00010b422bcc();
                                                                            if (iVar2 != 0) {
                                                                              puVar4 = (undefined8 *
                                                                                       )0x113370ef8;
LAB_10b4228c0:
                                                                              uStack_28 = 
                                                  0xffffffffffffffff;
                                                  func_0x00010b422bd4();
                                                  uVar7 = extraout_x9_01;
                                                  if (in_NG == in_OV) {
                                                    uVar7 = param_2;
                                                  }
                                                  uVar1 = extraout_x10_01;
                                                  if (-1 < (int)extraout_x8_01) {
                                                    uVar1 = extraout_x8_01;
                                                  }
                                                  func_0x00010b30550c(uVar7,uVar1,&uStack_28);
                                                  if ((int)uVar7 == 0) {
                                                    return;
                                                  }
                                                  *puVar4 = uStack_28;
                                                  return;
                                                  }
                                                  func_0x00010b422bcc();
                                                  if (iVar2 == 0) {
                                                    func_0x00010b422bcc();
                                                    if (iVar2 != 0) {
                                                      puVar4 = (undefined8 *)0x113370f08;
                                                      goto LAB_10b4228c0;
                                                    }
                                                    func_0x00010b422bcc();
                                                    if (iVar2 == 0) {
                                                      func_0x00010b422bcc();
                                                      if (iVar2 == 0) {
                                                        func_0x00010b422bcc();
                                                        if (iVar2 == 0) {
                                                          func_0x00010b422bcc();
                                                          if (iVar2 == 0) {
                                                            func_0x00010b422bcc();
                                                            if (iVar2 == 0) {
                                                              func_0x00010b422bcc();
                                                              if (iVar2 == 0) {
                                                                func_0x00010b422bcc();
                                                                if (iVar2 != 0) {
                                                                  puVar4 = (undefined8 *)0x11383d218
                                                                  ;
                                                                  goto LAB_10b42299c;
                                                                }
                                                                func_0x00010b422bcc();
                                                                if (iVar2 == 0) {
                                                                  func_0x00010b422bcc();
                                                                  if (iVar2 == 0) {
                                                                    func_0x00010b422bcc();
                                                                    if (iVar2 == 0) {
                                                                      func_0x00010b422bcc();
                                                                      if (iVar2 == 0) {
                                                                        func_0x00010b422bcc();
                                                                        if (iVar2 == 0) {
                                                                          func_0x00010b422bcc();
                                                                          if (iVar2 == 0) {
                                                                            return;
                                                                          }
                                                                          puVar3 = (undefined1 *)
                                                                                   0x11383d222;
                                                                        }
                                                                        else {
                                                                          puVar3 = (undefined1 *)
                                                                                   0x11383d221;
                                                                        }
                                                                      }
                                                                      else {
                                                                        puVar3 = (undefined1 *)
                                                                                 0x113370f28;
                                                                      }
                                                                    }
                                                                    else {
                                                                      puVar3 = (undefined1 *)
                                                                               0x113370f32;
                                                                    }
                                                                  }
                                                                  else {
                                                                    puVar3 = (undefined1 *)
                                                                             0x1137f6320;
                                                                  }
                                                                }
                                                                else {
                                                                  puVar3 = (undefined1 *)0x11383d220
                                                                  ;
                                                                }
                                                                goto LAB_10b422a50;
                                                              }
                                                              puVar5 = (undefined4 *)0x113370f24;
                                                            }
                                                            else {
                                                              puVar5 = (undefined4 *)0x113370f20;
                                                            }
                                                          }
                                                          else {
                                                            puVar5 = (undefined4 *)0x113370f1c;
                                                          }
                                                        }
                                                        else {
                                                          puVar5 = (undefined4 *)0x113370f18;
                                                        }
                                                      }
                                                      else {
                                                        puVar5 = (undefined4 *)0x113370f14;
                                                      }
                                                    }
                                                    else {
                                                      puVar5 = (undefined4 *)0x113370f10;
                                                    }
                                                  }
                                                  else {
                                                    puVar5 = (undefined4 *)0x113370f00;
                                                  }
                                                  }
                                                  else {
                                                    puVar5 = (undefined4 *)0x113370ef4;
                                                  }
                                                  }
                                                  else {
                                                    puVar5 = (undefined4 *)0x113370ef0;
                                                  }
                                                  }
                                                  else {
                                                    puVar5 = (undefined4 *)0x113370ee0;
                                                  }
                                                  }
                                                  else {
                                                    puVar5 = (undefined4 *)0x113370edc;
                                                  }
                                                  }
                                                  else {
                                                    puVar5 = (undefined4 *)0x113370ed8;
                                                  }
                                                  goto LAB_10b422974;
                                                  }
                                                  puVar3 = (undefined1 *)0x113370f31;
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370ec9;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370ec8;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x11383d212;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x11383d211;
                                                  }
                                                  goto LAB_10b422a50;
                                                  }
                                                  puVar5 = (undefined4 *)0x113370ebc;
                                                  }
                                                  else {
                                                    puVar5 = (undefined4 *)0x113370eb8;
                                                  }
                                                  }
                                                  else {
                                                    puVar5 = (undefined4 *)0x113370ea8;
                                                  }
                                                  }
                                                  else {
                                                    puVar5 = (undefined4 *)0x113370e98;
                                                  }
LAB_10b422974:
                                                  uStack_28._4_4_ = 0xaaaaaaaa;
                                                  func_0x00010b422bd4();
                                                  uVar7 = extraout_x9_02;
                                                  if (in_NG == in_OV) {
                                                    uVar7 = param_2;
                                                  }
                                                  uVar1 = extraout_x10_02;
                                                  if (-1 < (int)extraout_x8_02) {
                                                    uVar1 = extraout_x8_02;
                                                  }
                                                  func_0x000107c2cc2c(uVar7,uVar1,
                                                                      (long)&uStack_28 + 4);
                                                  if ((int)uVar7 != 0) {
                                                    *puVar5 = uStack_28._4_4_;
                                                  }
                                                  return;
                                                  }
                                                  puVar4 = (undefined8 *)0x113370f58;
                                                  }
                                                  else {
                                                    puVar4 = (undefined8 *)0x113370f50;
                                                  }
                                                  }
                                                  else {
                                                    puVar4 = (undefined8 *)0x113370f48;
                                                  }
LAB_10b42299c:
                                                  func_0x00010b422bd4();
                                                  uVar7 = extraout_x9_00;
                                                  if (in_NG == in_OV) {
                                                    uVar7 = param_2;
                                                  }
                                                  uVar8 = extraout_x10_00;
                                                  if (-1 < (int)extraout_x8_00) {
                                                    uVar8 = extraout_x8_00;
                                                  }
                                                  func_0x00010b30593c();
                                                  if ((uVar8 & 1) == 0) {
                                                    return;
                                                  }
                                                  *puVar4 = uVar7;
                                                  return;
                                                  }
                                                  puVar4 = (undefined8 *)0x113370f40;
                                                  }
                                                  else {
                                                    puVar4 = (undefined8 *)0x113370f38;
                                                  }
LAB_10b42279c:
                                                  func_0x00010b422bd4();
                                                  uVar7 = extraout_x9;
                                                  if (in_NG == in_OV) {
                                                    uVar7 = param_2;
                                                  }
                                                  uVar8 = extraout_x10;
                                                  if (-1 < (int)extraout_x8) {
                                                    uVar8 = extraout_x8;
                                                  }
                                                  func_0x000107c2cc34();
                                                  if ((uVar8 & 1) == 0) {
                                                    return;
                                                  }
                                                  *puVar4 = uVar7;
                                                  return;
                                                  }
                                                  puVar3 = (undefined1 *)0x113370e88;
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x11383d210;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370f30;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c34;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c33;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c32;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c31;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c30;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x11383d005;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c2f;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c2e;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x11383d004;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c2d;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c2c;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c2b;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c2a;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x11383d003;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c29;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c28;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x11383d002;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x11383d001;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x11383d000;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c27;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x11383cfff;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x11383cffe;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c26;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c25;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c24;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c23;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c22;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x11383cffd;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c21;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c20;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c1f;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c1e;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x113370c1d;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x11383cffc;
                                                  }
                                                  }
                                                  else {
                                                    puVar3 = (undefined1 *)0x11383cffb;
                                                  }
                                                }
                                                else {
                                                  puVar3 = (undefined1 *)0x11383cffa;
                                                }
                                              }
                                              else {
                                                puVar3 = (undefined1 *)0x11383cff9;
                                              }
                                            }
                                            else {
                                              puVar3 = (undefined1 *)0x11383cff8;
                                            }
                                          }
                                          else {
                                            puVar3 = (undefined1 *)0x11383cff7;
                                          }
                                        }
                                        else {
                                          puVar3 = (undefined1 *)0x113370c1c;
                                        }
                                      }
                                      else {
                                        puVar3 = (undefined1 *)0x113370c1b;
                                      }
                                    }
                                    else {
                                      puVar3 = (undefined1 *)0x113370c1a;
                                    }
                                  }
                                  else {
                                    puVar3 = (undefined1 *)0x113370c19;
                                  }
                                }
                                else {
                                  puVar3 = (undefined1 *)0x11383cff6;
                                }
                              }
                              else {
                                puVar3 = (undefined1 *)0x113370c18;
                              }
                            }
                            else {
                              puVar3 = (undefined1 *)0x113370c17;
                            }
                          }
                          else {
                            puVar3 = (undefined1 *)0x113370c16;
                          }
                        }
                        else {
                          puVar3 = (undefined1 *)0x11383cff5;
                        }
                      }
                      else {
                        puVar3 = (undefined1 *)0x11383cff4;
                      }
                    }
                    else {
                      puVar3 = (undefined1 *)0x113370c15;
                    }
                  }
                  else {
                    puVar3 = (undefined1 *)0x11383cff3;
                  }
                }
                else {
                  puVar3 = (undefined1 *)0x113370c14;
                }
              }
              else {
                puVar3 = (undefined1 *)0x113370c13;
              }
            }
            else {
              puVar3 = (undefined1 *)0x113370c12;
            }
          }
          else {
            puVar3 = (undefined1 *)0x11383cff2;
          }
        }
        else {
          puVar3 = (undefined1 *)0x113370c11;
        }
      }
      else {
        puVar3 = (undefined1 *)0x11383cff1;
      }
    }
    else {
      puVar3 = (undefined1 *)0x11383cff0;
    }
  }
  else {
    puVar3 = (undefined1 *)0x113370c10;
  }
LAB_10b422a50:
  puVar6 = puVar3;
  func_0x00010b422bcc(puVar3,"true");
  if ((((ulong)puVar6 & 1) == 0) && (func_0x00010b422bcc(), ((ulong)puVar6 & 1) == 0)) {
    func_0x00010b422bcc();
    iVar2 = (int)puVar6;
    if ((((ulong)puVar6 & 1) == 0) && (func_0x00010b422bcc(), iVar2 == 0)) {
      return;
    }
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  *puVar3 = uVar9;
  return;
}



/* Entry: 10b4798d4; end: 10b4798df;  */

undefined8 * FUN_10b4798d4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110cf9030;
  param_1[1] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_10b479b00(param_1,param_2);
  return param_1;
}



/* Entry: 10b4798e0; end: 10b47995b;  */

void FUN_10b4798e0(undefined8 param_1)

{
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_80;
  undefined1 auStack_78 [48];
  undefined1 auStack_48 [40];
  
  FUN_10b47995c(auStack_78,&PTR_DAT_110ce99d0);
  ppuStack_a0 = &PTR_DAT_110cf9030;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  func_0x00010b47996c(auStack_48,auStack_78,&ppuStack_a0);
  FUN_10b4798d4(param_1,auStack_48);
  FUN_10b512338(auStack_48);
  FUN_10b479c40();
  FUN_10b479c20(auStack_78);
  return;
}



/* Entry: 10b47995c; end: 10b479a2b;  */

void FUN_10b47995c(undefined1 *param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  
  uVar2 = 0;
  func_0x000107c30194(&lStack_38,*param_2,param_2[1],param_2[4],param_2[5]);
  if (lStack_38 == lStack_30) {
    *param_1 = 0;
    param_1[0x28] = 0;
  }
  else {
    ppuStack_60 = &PTR_DAT_110cf9030;
    uStack_58 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    func_0x000107c3034c(&ppuStack_60,lStack_38,(int)lStack_30 - (int)lStack_38);
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      *param_1 = 0;
    }
    else {
      FUN_10b4798d4(param_1,&ppuStack_60);
    }
    param_1[0x28] = !bVar1;
    FUN_10b479c40();
  }
  func_0x000107c27914(&lStack_38);
  return;
}



/* Entry: 10b479a2c; end: 10b479abf;  */

void FUN_10b479a2c(void)

{
  func_0x00010b479a08();
  return;
}



/* Entry: 10b479ac0; end: 10b479aff;  */

undefined8 * FUN_10b479ac0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110cf9030;
  param_1[1] = param_2;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_10b479b00(param_1,param_3);
  return param_1;
}



/* Entry: 10b479b00; end: 10b479b67;  */

long FUN_10b479b00(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10b512600(param_1);
    }
    else {
      FUN_10b5125c8(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b479b68; end: 10b479c1f;  */

void FUN_10b479b68(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  
  uVar2 = 0;
  func_0x000107c30194(&lStack_38,param_2,param_3,*(undefined8 *)(param_4 + 0x10),
                      *(undefined8 *)(param_4 + 0x18));
  if (lStack_38 == lStack_30) {
    *param_1 = 0;
    param_1[0x28] = 0;
  }
  else {
    ppuStack_60 = &PTR_DAT_110cf9030;
    uStack_58 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    func_0x000107c3034c(&ppuStack_60,lStack_38,(int)lStack_30 - (int)lStack_38);
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      *param_1 = 0;
    }
    else {
      FUN_10b4798d4(param_1,&ppuStack_60);
    }
    param_1[0x28] = !bVar1;
    FUN_10b479c40();
  }
  func_0x000107c27914(&lStack_38);
  return;
}



/* Entry: 10b479c20; end: 10b479c3f;  */

void FUN_10b479c20(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10b512338();
  }
  return;
}



/* Entry: 10b479c40; end: 10b479c47;  */

void FUN_10b479c40(void)

{
  func_0x000107c28090(&stack0x00000008);
  FUN_10b512368();
  return;
}



/* Entry: 10b479c48; end: 10b479c8b;  */

undefined8 * FUN_10b479c48(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 != 0) {
    do {
      func_0x000107c3939c();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_10b47a340(&uStack_30);
  return param_1;
}



/* Entry: 10b479c8c; end: 10b479d13;  */

void FUN_10b479c8c(long param_1)

{
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined1 auStack_30 [16];
  
  FUN_10b4798e0(auStack_58);
  FUN_10b479d14(auStack_30,auStack_58);
  FUN_10b512338(auStack_58);
  func_0x000107c2fec4(auStack_58,param_1 + 0x18);
  FUN_10b479d38(uStack_48,auStack_30);
  func_0x000107c2798c(auStack_58);
  FUN_10b47a5e8(auStack_30);
  return;
}



/* Entry: 10b479d14; end: 10b479d37;  */

void FUN_10b479d14(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b47a4a8(&uStack_11,param_1);
  return;
}



/* Entry: 10b479d38; end: 10b479d73;  */

undefined8 * FUN_10b479d38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_10b47a5e8(&uStack_30);
  return param_1;
}



/* Entry: 10b479d74; end: 10b479f6b;  */

void FUN_10b479d74(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int extraout_w10;
  long lVar3;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_78 [16];
  long *plStack_68;
  long alStack_50 [4];
  
  func_0x000107c393a0(auStack_78);
  lVar3 = *plStack_68;
  func_0x00010b47a63c();
  alStack_50[0] = 0;
  alStack_50[1] = 0;
  if (lVar3 == 0) {
    FUN_10b4798e0(auStack_78);
    FUN_10b479d14(alStack_50 + 2,auStack_78);
    FUN_10b479d38(alStack_50,alStack_50 + 2);
    FUN_10b47a5e8(alStack_50 + 2);
    FUN_10b512338(auStack_78);
  }
  func_0x000107c2fec4(auStack_78,param_2 + 0x18);
  if ((*plStack_68 == 0) && (alStack_50[0] != 0)) {
    FUN_10b479d38(plStack_68,alStack_50);
  }
  if ((plStack_68[3] == 0) || (*(long *)(plStack_68[3] + 8) == -1)) {
    FUN_10b4a1840(alStack_50 + 2);
    if (alStack_50[2] != 0) {
      func_0x000107c30044(&lStack_90,alStack_50[2] + 0xb8);
      if (lStack_90 != 0) {
        FUN_10b479c48(plStack_68 + 2,lStack_90,lStack_88);
      }
      func_0x000107c2bf10(&lStack_90);
    }
    func_0x000107c27f58(alStack_50 + 2);
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar2 = plStack_68[1];
  lVar3 = *plStack_68;
  if (plStack_68[1] != 0) {
    do {
      func_0x000107c3939c();
    } while (extraout_w10 != 0);
  }
  alStack_50[2] = 0;
  alStack_50[3] = 0;
  param_1[1] = lVar2;
  *param_1 = lVar3;
  FUN_10b47a5e8(alStack_50 + 2);
  plVar1 = plStack_68;
  lVar3 = plStack_68[3];
  if ((lVar3 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar1[2];
  }
  lStack_88 = 0;
  lStack_90 = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
  param_1[2] = lVar2;
  param_1[3] = lVar3;
  func_0x000107c2bf10(alStack_50 + 2);
  func_0x000107c2bf10(&lStack_90);
  func_0x000107c2fec8(&lStack_90,plStack_68 + 4);
  lVar2 = lStack_88;
  lVar3 = lStack_90;
  lStack_88 = 0;
  lStack_90 = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
  param_1[5] = lVar2;
  param_1[4] = lVar3;
  func_0x000107c2c5ac(alStack_50 + 2);
  func_0x000107c2c5ac(&lStack_90);
  func_0x00010b47a63c();
  FUN_10b47a5e8(alStack_50);
  return;
}



/* Entry: 10b479f6c; end: 10b47a077;  */

long FUN_10b479f6c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  int aiStack_120 [34];
  char cStack_98;
  ulong uStack_90;
  long lStack_88;
  byte bStack_80;
  char cStack_78;
  long alStack_70 [2];
  long lStack_60;
  long lStack_50;
  
  if (0 < param_2) {
    FUN_10b47a078();
    FUN_10b479d74(alStack_70,param_1);
    if ((((alStack_70[0] != 0) && (*(char *)(alStack_70[0] + 0x10) == '\x01')) && (lStack_60 != 0))
       && (((FUN_10b4a6cd4(&uStack_90), cStack_78 == '\x01' && ((bStack_80 & 1) != 0)) &&
           (uStack_90 != 0)))) {
      if (lStack_50 == 0) {
        iVar2 = 2000;
      }
      else {
        FUN_10b48c900(aiStack_120);
        iVar2 = 2000;
        if (aiStack_120[0] != 0) {
          iVar2 = aiStack_120[0];
        }
        if (cStack_98 == '\0') {
          iVar2 = 2000;
        }
        FUN_10b47a278(aiStack_120);
      }
      uVar1 = 0;
      if (uStack_90 != 0) {
        uVar1 = (ulong)(lStack_88 << 3) / uStack_90;
      }
      func_0x00010b479980(alStack_70[0],param_2,iVar2,uVar1);
      param_2 = alStack_70[0];
    }
    FUN_10b47a248(alStack_70);
  }
  return param_2;
}



/* Entry: 10b47a078; end: 10b47a247;  */

void FUN_10b47a078(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 auStack_218 [34];
  ulong uStack_190;
  long lStack_188;
  byte bStack_180;
  char cStack_178;
  undefined1 auStack_170 [136];
  undefined1 uStack_e8;
  int aiStack_e0 [34];
  char cStack_58;
  ulong auStack_50 [2];
  long lStack_40;
  long lStack_30;
  
  FUN_10b479d74(auStack_50);
  if (lStack_30 == 0) goto code_r0x00010063923c;
  FUN_10b48c900(aiStack_e0);
  if (cStack_58 == '\x01' && aiStack_e0[0] != 0) {
    if (((auStack_50[0] == 0) || (*(char *)(auStack_50[0] + 0x10) != '\x01')) || (lStack_40 == 0)) {
      func_0x00010b47a628();
      func_0x00010b47a60c();
    }
    else {
      FUN_10b4a6cd4(&uStack_190);
      if (((cStack_178 == '\x01') && ((bStack_180 & 1) != 0)) && (uStack_190 != 0)) {
        uVar1 = 0;
        if (uStack_190 != 0) {
          uVar1 = (ulong)(lStack_188 << 3) / uStack_190;
        }
        uVar2 = auStack_50[0];
        FUN_10b479a2c(auStack_50[0],aiStack_e0[0],aiStack_e0[0],uVar1);
        if (0 < (long)uVar2) {
          FUN_10b47a2b4(auStack_218,aiStack_e0);
          if (0xfffffffe < uVar2) {
            uVar2 = 0xffffffff;
          }
          auStack_218[0] = (undefined4)uVar2;
          FUN_10b47a2b4(auStack_170,auStack_218);
          uStack_e8 = 1;
          if ((*(char *)(auStack_50[0] + 0x10) == '\x01') && (*(int *)(auStack_50[0] + 0x24) == 2))
          {
            uVar3 = *(undefined4 *)(*(long *)(auStack_50[0] + 0x18) + 0x18);
          }
          else {
            uVar3 = 0;
          }
          FUN_10b48c93c(lStack_30,aiStack_e0,auStack_170,uVar3);
          func_0x00010b47a634();
          func_0x000107c2fed8(auStack_218);
          goto LAB_10b47a188;
        }
        func_0x00010b47a628();
        func_0x00010b47a60c();
      }
      else {
        func_0x00010b47a628();
        func_0x00010b47a60c();
      }
    }
    func_0x00010b47a634();
  }
LAB_10b47a188:
  FUN_10b47a278(aiStack_e0);
code_r0x00010063923c:
  FUN_10b47a248(auStack_50);
  return;
}



/* Entry: 10b47a248; end: 10b47a277;  */

undefined8 FUN_10b47a248(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c2c5ac(param_1 + 0x20);
  func_0x000107c2bf10(param_1 + 0x10);
  func_0x000107c393a8();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b47a278; end: 10b47a2b3;  */

void FUN_10b47a278(long param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    func_0x000107c2fed8();
  }
  return;
}



/* Entry: 10b47a2b4; end: 10b47a33f;  */

undefined8 * FUN_10b47a2b4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c2c784(param_1 + 1,param_2 + 1);
  func_0x000107c2b124(param_1 + 6,param_2 + 6);
  func_0x000107c283d0(param_1 + 0xb,param_2 + 0xb);
  param_1[0x10] = param_2[0x10];
  return param_1;
}



/* Entry: 10b47a340; end: 10b47a38f;  */

void FUN_10b47a340(long param_1)

{
  func_0x000107c393a8();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b47a390; end: 10b47a3a3;  */

void FUN_10b47a390(void)

{
  func_0x00010b47a364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47a3a4; end: 10b47a3eb;  */

void FUN_10b47a3a4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_SUB_110ce9a10;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c3939c();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b47a3ec; end: 10b47a3ff;  */

void FUN_10b47a3ec(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b47a3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 10b47a400; end: 10b47a463;  */

void FUN_10b47a400(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_28 = lVar1;
    if (lVar1 != 0) {
      lStack_30 = *(long *)(param_1 + 8);
      if (lStack_30 != 0) {
        FUN_10b47a078();
      }
    }
  }
  func_0x000107c2fedc(&lStack_30);
  return;
}



/* Entry: 10b47a464; end: 10b47a49b;  */

long FUN_10b47a464(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110ce9a70);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10b47a49c; end: 10b47a4a7;  */

undefined ** FUN_10b47a49c(void)

{
  return &PTR_DAT_110ce9a70;
}



/* Entry: 10b47a4a8; end: 10b47a52f;  */

undefined1 * FUN_10b47a4a8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b47a530(auStack_40,1);
  FUN_10b47a574(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010b47a5d8();
  func_0x000107c393ac(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b47a5d8();
  func_0x00010b47a620();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_10b47a558();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 10b47a530; end: 10b47a557;  */

long FUN_10b47a530(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b47a558();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b47a558; end: 10b47a573;  */

undefined8 * FUN_10b47a558(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x3a == 0) {
    puVar1 = (undefined8 *)(param_2 << 6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ce9a90;
  FUN_10b4798d4(param_1 + 3);
  return param_1;
}



/* Entry: 10b47a574; end: 10b47a5a3;  */

undefined8 * FUN_10b47a574(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ce9a90;
  FUN_10b4798d4(param_1 + 3);
  return param_1;
}



/* Entry: 10b47a5a4; end: 10b47a5a7;  */

void FUN_10b47a5a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ce9a90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b47a5a8; end: 10b47a5bb;  */

void FUN_10b47a5a8(void)

{
  func_0x00010b47a5c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47a5bc; end: 10b47a5e7;  */

long FUN_10b47a5bc(long param_1)

{
  func_0x000107c28090(param_1 + 0x20);
  FUN_10b512368(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 10b47a5e8; end: 10b47a60b;  */

void FUN_10b47a5e8(long param_1)

{
  func_0x000107c393a8();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b47a60c; end: 10b47a65b;  */

/* WARNING: Removing unreachable block (ram,0x00010b48c998) */
/* WARNING: Removing unreachable block (ram,0x00010b48c9b0) */
/* WARNING: Removing unreachable block (ram,0x00010b48c9b8) */

undefined8 FUN_10b47a60c(void)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 uVar2;
  long unaff_x29;
  
  func_0x00010b48df14();
  if (*(char *)(unaff_x19 + 0x160) == '\x01') {
    uVar1 = unaff_x19 + 0xd8;
    FUN_10b48c9f4(uVar1,unaff_x29 + -0xd0);
    if ((uVar1 & 1) != 0) {
      func_0x00010b48dfd8();
      *(long *)(unaff_x19 + 0x1a0) = *(long *)(unaff_x19 + 0x1a0) + 1;
      if (*(char *)(unaff_x19 + 0x198) == '\x01') {
        *(undefined1 *)(unaff_x19 + 0x198) = 0;
      }
      uVar2 = 1;
      goto LAB_10b48c9dc;
    }
  }
  uVar2 = 0;
LAB_10b48c9dc:
  func_0x00010b48ded8();
  return uVar2;
}



/* Entry: 10b47a65c; end: 10b47a6df;  */

void FUN_10b47a65c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined **ppuVar2;
  code **ppcVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined *puVar4;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined4 uStack_108;
  undefined8 uStack_c8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_28;
  
  func_0x000107c393d4();
  if (extraout_x9_00 != 0) {
    do {
      func_0x000107c393b4();
    } while (extraout_w10_00 != 0);
  }
  pcStack_88 = FUN_10b47acd8;
  ppuStack_80 = &PTR_FUN_110ce9cd8;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_78 = param_1;
  func_0x000107c393f0();
  ppcVar3 = &pcStack_88;
  (*extraout_x8_00)();
  func_0x000107c393e0();
  func_0x000107c2ff04(&uStack_98);
  func_0x000107c393b0(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b47b53c();
    puVar1 = &uStack_98;
    func_0x000107c2ff04();
    func_0x00010b47b528();
    puVar1 = puVar1 + -1;
    func_0x0001009d90a4();
    uStack_108 = SUB84(ppcVar3,0);
    if (extraout_x9 != 0) {
      do {
        func_0x000100638fe0();
        uStack_108 = SUB84(ppcVar3,0);
      } while (extraout_w10 != 0);
    }
    puStack_128 = &UNK_100a169ac;
    ppuStack_120 = &PTR_DAT_110ce9cf0;
    uStack_118 = param_1;
    func_0x00010063944c();
    ppuVar2 = &puStack_128;
    (*extraout_x8)();
    func_0x0001009d9174();
    func_0x0001006396d4();
    func_0x000100638fc4(uStack_c8);
    if (!(bool)in_ZR) {
      func_0x000107c60e78();
      func_0x000107c393c8();
      func_0x0001006396d4();
      func_0x000107c393b8();
      *puVar1 = &PTR_DAT_110ce9cf0;
      puVar4 = ppuVar2[1];
      puVar1[2] = ppuVar2[2];
      puVar1[1] = puVar4;
      ppuVar2[1] = (undefined *)0x0;
      ppuVar2[2] = (undefined *)0x0;
      *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(ppuVar2 + 3);
      return;
    }
  }
  return;
}



/* Entry: 10b47a6e0; end: 10b47a6e7;  */

void FUN_10b47a6e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined **ppuVar2;
  code *extraout_x8;
  long extraout_x9;
  int extraout_w10;
  undefined *puVar3;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined4 uStack_68;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)(param_2 + -8);
  func_0x0001009d90a4();
  uStack_68 = (undefined4)param_3;
  if (extraout_x9 != 0) {
    do {
      func_0x000100638fe0();
      uStack_68 = (undefined4)param_3;
    } while (extraout_w10 != 0);
  }
  puStack_88 = &UNK_100a169ac;
  ppuStack_80 = &PTR_DAT_110ce9cf0;
  uStack_78 = param_1;
  func_0x00010063944c();
  ppuVar2 = &puStack_88;
  (*extraout_x8)();
  func_0x0001009d9174();
  func_0x0001006396d4();
  func_0x000100638fc4(uStack_28);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c393c8();
    func_0x0001006396d4();
    func_0x000107c393b8();
    *puVar1 = &PTR_DAT_110ce9cf0;
    puVar3 = ppuVar2[1];
    puVar1[2] = ppuVar2[2];
    puVar1[1] = puVar3;
    ppuVar2[1] = (undefined *)0x0;
    ppuVar2[2] = (undefined *)0x0;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(ppuVar2 + 3);
    return;
  }
  return;
}



/* Entry: 10b47a6e8; end: 10b47a78b;  */

void FUN_10b47a6e8(void)

{
  long unaff_x19;
  undefined1 auStack_c0 [136];
  undefined1 uStack_38;
  long alStack_30 [2];
  
  func_0x00010b47b578();
  if (((*(byte *)(unaff_x19 + 0x168) & 1) == 0) && (*(char *)(unaff_x19 + 0x125) != '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x128);
    return;
  }
  *(undefined1 *)(unaff_x19 + 0x168) = 0;
  func_0x0001074d9c50(unaff_x19 + 0x170);
  func_0x00010b47b554();
  func_0x000107c2fec8(alStack_30,unaff_x19 + 0x70);
  if (alStack_30[0] != 0) {
    auStack_c0[0] = 0;
    uStack_38 = 0;
    FUN_10b48c75c(alStack_30[0],auStack_c0);
    func_0x00010b47b55c();
  }
  func_0x000107c2c5ac(alStack_30);
  *(undefined1 *)(unaff_x19 + 0x125) = 0;
  return;
}



/* Entry: 10b47a78c; end: 10b47aacf;  */

void FUN_10b47a78c(undefined1 *param_1,undefined1 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *unaff_x22;
  undefined8 *puVar11;
  undefined1 *unaff_x23;
  long *plVar12;
  long *plVar13;
  ulong *unaff_x24;
  undefined8 unaff_x25;
  long lVar14;
  ulong unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar4 = param_1;
    puVar9 = (undefined8 *)((long)register0x00000008 + -0x1f0);
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x160);
    puVar6 = param_2;
    func_0x000107c393cc();
    *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_x8;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    uVar10 = *(ulong *)(puVar6 + 0x28);
    *(undefined4 *)((long)register0x00000008 + -0x90) = 0x3f800000;
    uVar3 = (uVar10 & 1) == 0;
    unaff_x24 = (ulong *)(puVar6 + 0x28);
    if (!(bool)uVar3) {
      unaff_x24 = (ulong *)(uVar10 + 7);
    }
    for (lVar14 = (long)*(int *)(puVar6 + 0x30) << 3; lVar14 != 0; lVar14 = lVar14 + -8) {
      uVar2 = *(uint *)(*unaff_x24 + 0x18);
      unaff_x26 = (ulong)uVar2;
      puVar5 = (uint *)((long)register0x00000008 + -0xb0);
      func_0x0001074d68bc(puVar5,*(ulong *)(*unaff_x24 + 0x10) & 0xfffffffffffffffc);
      *puVar5 = uVar2;
      unaff_x24 = unaff_x24 + 1;
    }
    func_0x000107c2c050((undefined1 *)((long)register0x00000008 + -0xd8),*(long *)(param_2 + 0x18),
                        *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x10) * 4);
    *(undefined8 *)((long)register0x00000008 + -0x160) = *(undefined8 *)(param_2 + 0x40);
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x160);
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0x800000000;
    func_0x000107c2ff10((undefined1 *)((long)register0x00000008 + -0x158),
                        (undefined1 *)((long)register0x00000008 + -0x80),2);
    puVar7 = (undefined8 *)((long)register0x00000008 + -0xd8);
    func_0x000107c2b124((undefined1 *)((long)register0x00000008 + -0x130));
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xe8) = 0x3f800000;
    *(undefined1 *)((long)register0x00000008 + -0xe0) = 1;
    *(undefined4 *)((long)register0x00000008 + -0xdc) = param_3;
    __ZNSt3__15mutex4lockEv(puVar4 + 0x128);
    puVar4[0x168] = (char)param_4;
    puVar1 = (undefined8 *)(puVar4 + 0x170);
    if ((int)param_4 == 0) {
      func_0x0001074d9c50(puVar1);
    }
    else {
      uVar3 = puVar1 == (undefined8 *)((long)register0x00000008 + -0xb0);
      if (!(bool)uVar3) {
        *(undefined4 *)(puVar4 + 400) = *(undefined4 *)((long)register0x00000008 + -0x90);
        plVar12 = *(long **)((long)register0x00000008 + -0xa0);
        lVar14 = *(long *)(puVar4 + 0x178);
        if (lVar14 != 0) {
          puVar11 = (undefined8 *)*puVar1;
          for (; lVar14 != 0; lVar14 = lVar14 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
          puVar11 = *(undefined8 **)(puVar4 + 0x180);
          *(undefined8 *)(puVar4 + 0x180) = 0;
          *(undefined8 *)(puVar4 + 0x188) = 0;
          for (plVar13 = plVar12;
              (puVar8 = puVar11, plVar12 = plVar13, puVar8 != (undefined8 *)0x0 &&
              (plVar12 = (long *)0x0, plVar13 != (long *)0x0)); plVar13 = (long *)*plVar13) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (puVar8 + 2,plVar13 + 2);
            *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(plVar13 + 5);
            puVar11 = (undefined8 *)*puVar8;
            FUN_10b47b054(puVar1);
            puVar7 = puVar8;
          }
          func_0x00010b47b564();
        }
        unaff_x22 = puVar4 + 0x180;
        unaff_x24 = (ulong *)0x1;
        for (; unaff_x23 = (undefined1 *)0x0, plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
          puVar7 = (undefined8 *)0x30;
          __Znwm();
          *(undefined8 **)((long)register0x00000008 + -0x80) = puVar7;
          *(undefined1 **)((long)register0x00000008 + -0x78) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
          *puVar7 = 0;
          puVar7[1] = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (puVar7 + 2,plVar12 + 2);
          *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(plVar12 + 5);
          *(undefined1 *)((long)register0x00000008 + -0x70) = 1;
          puVar6 = puVar4 + 0x188;
          func_0x000107c278c4(puVar6,puVar7 + 2);
          puVar7[1] = puVar6;
          FUN_10b47b054(puVar1);
          *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
          func_0x0001074d9bd4((undefined1 *)((long)register0x00000008 + -0x80));
        }
      }
    }
    func_0x00010b47b554();
    func_0x000107c2fec8((undefined1 *)((long)register0x00000008 + -0x80),puVar4 + 0x70);
    unaff_x20 = *(long *)((long)register0x00000008 + -0x80);
    param_4 = puVar7;
    if (unaff_x20 != 0) {
      func_0x00010b47a298((undefined1 *)((long)register0x00000008 + -0x1f0),
                          (undefined1 *)((long)register0x00000008 + -0x160));
      FUN_10b48c75c(unaff_x20);
      func_0x00010b47b55c();
      puVar4[0x125] = 1;
      param_4 = puVar9;
    }
    func_0x000107c2c5ac((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x000107c2fed8((undefined1 *)((long)register0x00000008 + -0x160));
    func_0x000107c2ab24((undefined1 *)((long)register0x00000008 + -0xd8));
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x0001057061b4();
    func_0x000107c393b0(*(undefined8 *)((long)register0x00000008 + -0x68));
    if ((bool)uVar3) break;
    ___stack_chk_fail();
    func_0x00010b47b55c();
    func_0x000107c2c5ac((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x000107c2fed8((undefined1 *)((long)register0x00000008 + -0x160));
    func_0x000107c2ab24((undefined1 *)((long)register0x00000008 + -0xd8));
    func_0x0001057061b4((undefined1 *)((long)register0x00000008 + -0xb0));
    unaff_x30 = FUN_10b47aad0;
    param_1 = unaff_x21;
    __Unwind_Resume();
    if (param_1[0x118] != '\x01') {
      return;
    }
    param_3 = *(undefined4 *)(param_1 + 0x120);
    param_2 = param_1 + 200;
    unaff_x25 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1f0);
    unaff_x19 = puVar4;
  }
  return;
}



/* Entry: 10b47aad0; end: 10b47aaef;  */

void FUN_10b47aad0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x21;
  undefined8 *puVar12;
  undefined1 *unaff_x22;
  long *plVar13;
  long *plVar14;
  undefined1 *unaff_x23;
  ulong *unaff_x24;
  long lVar15;
  undefined8 unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar7 = param_1;
    if (puVar7[0x118] != '\x01') {
      return;
    }
    uVar3 = *(undefined4 *)(puVar7 + 0x120);
    puVar6 = puVar7 + 200;
    puVar10 = (undefined8 *)((long)register0x00000008 + -0x1f0);
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x160);
    func_0x000107c393cc();
    *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_x8;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    uVar11 = *(ulong *)(puVar6 + 0x28);
    *(undefined4 *)((long)register0x00000008 + -0x90) = 0x3f800000;
    uVar4 = (uVar11 & 1) == 0;
    unaff_x24 = (ulong *)(puVar6 + 0x28);
    if (!(bool)uVar4) {
      unaff_x24 = (ulong *)(uVar11 + 7);
    }
    for (lVar15 = (long)*(int *)(puVar6 + 0x30) << 3; lVar15 != 0; lVar15 = lVar15 + -8) {
      uVar2 = *(uint *)(*unaff_x24 + 0x18);
      unaff_x26 = (ulong)uVar2;
      puVar5 = (uint *)((long)register0x00000008 + -0xb0);
      func_0x0001074d68bc(puVar5,*(ulong *)(*unaff_x24 + 0x10) & 0xfffffffffffffffc);
      *puVar5 = uVar2;
      unaff_x24 = unaff_x24 + 1;
    }
    func_0x000107c2c050((undefined1 *)((long)register0x00000008 + -0xd8),*(long *)(puVar7 + 0xe0),
                        *(long *)(puVar7 + 0xe0) + (long)*(int *)(puVar7 + 0xd8) * 4);
    *(undefined8 *)((long)register0x00000008 + -0x160) = *(undefined8 *)(puVar7 + 0x108);
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x160);
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0x800000000;
    func_0x000107c2ff10((undefined1 *)((long)register0x00000008 + -0x158),
                        (undefined1 *)((long)register0x00000008 + -0x80),2);
    puVar8 = (undefined8 *)((long)register0x00000008 + -0xd8);
    func_0x000107c2b124((undefined1 *)((long)register0x00000008 + -0x130));
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xe8) = 0x3f800000;
    *(undefined1 *)((long)register0x00000008 + -0xe0) = 1;
    *(undefined4 *)((long)register0x00000008 + -0xdc) = uVar3;
    __ZNSt3__15mutex4lockEv(puVar7 + 0x128);
    puVar7[0x168] = (char)param_2;
    puVar1 = (undefined8 *)(puVar7 + 0x170);
    if ((int)param_2 == 0) {
      func_0x0001074d9c50(puVar1);
    }
    else {
      uVar4 = puVar1 == (undefined8 *)((long)register0x00000008 + -0xb0);
      if (!(bool)uVar4) {
        *(undefined4 *)(puVar7 + 400) = *(undefined4 *)((long)register0x00000008 + -0x90);
        plVar13 = *(long **)((long)register0x00000008 + -0xa0);
        lVar15 = *(long *)(puVar7 + 0x178);
        if (lVar15 != 0) {
          puVar12 = (undefined8 *)*puVar1;
          for (; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          puVar12 = *(undefined8 **)(puVar7 + 0x180);
          *(undefined8 *)(puVar7 + 0x180) = 0;
          *(undefined8 *)(puVar7 + 0x188) = 0;
          for (plVar14 = plVar13;
              (puVar9 = puVar12, plVar13 = plVar14, puVar9 != (undefined8 *)0x0 &&
              (plVar13 = (long *)0x0, plVar14 != (long *)0x0)); plVar14 = (long *)*plVar14) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (puVar9 + 2,plVar14 + 2);
            *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(plVar14 + 5);
            puVar12 = (undefined8 *)*puVar9;
            FUN_10b47b054(puVar1);
            puVar8 = puVar9;
          }
          func_0x00010b47b564();
        }
        unaff_x22 = puVar7 + 0x180;
        unaff_x24 = (ulong *)0x1;
        for (; unaff_x23 = (undefined1 *)0x0, plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          puVar8 = (undefined8 *)0x30;
          __Znwm();
          *(undefined8 **)((long)register0x00000008 + -0x80) = puVar8;
          *(undefined1 **)((long)register0x00000008 + -0x78) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (puVar8 + 2,plVar13 + 2);
          *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(plVar13 + 5);
          *(undefined1 *)((long)register0x00000008 + -0x70) = 1;
          puVar6 = puVar7 + 0x188;
          func_0x000107c278c4(puVar6,puVar8 + 2);
          puVar8[1] = puVar6;
          FUN_10b47b054(puVar1);
          *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
          func_0x0001074d9bd4((undefined1 *)((long)register0x00000008 + -0x80));
        }
      }
    }
    func_0x00010b47b554();
    func_0x000107c2fec8((undefined1 *)((long)register0x00000008 + -0x80),puVar7 + 0x70);
    unaff_x20 = *(long *)((long)register0x00000008 + -0x80);
    param_2 = puVar8;
    if (unaff_x20 != 0) {
      func_0x00010b47a298((undefined1 *)((long)register0x00000008 + -0x1f0),
                          (undefined1 *)((long)register0x00000008 + -0x160));
      FUN_10b48c75c(unaff_x20);
      func_0x00010b47b55c();
      puVar7[0x125] = 1;
      param_2 = puVar10;
    }
    func_0x000107c2c5ac((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x000107c2fed8((undefined1 *)((long)register0x00000008 + -0x160));
    func_0x000107c2ab24((undefined1 *)((long)register0x00000008 + -0xd8));
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x0001057061b4();
    func_0x000107c393b0(*(undefined8 *)((long)register0x00000008 + -0x68));
    if ((bool)uVar4) break;
    ___stack_chk_fail();
    func_0x00010b47b55c();
    func_0x000107c2c5ac((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x000107c2fed8((undefined1 *)((long)register0x00000008 + -0x160));
    func_0x000107c2ab24((undefined1 *)((long)register0x00000008 + -0xd8));
    func_0x0001057061b4((undefined1 *)((long)register0x00000008 + -0xb0));
    unaff_x30 = FUN_10b47aad0;
    param_1 = unaff_x21;
    __Unwind_Resume();
    unaff_x25 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1f0);
    unaff_x19 = puVar7;
  }
  return;
}



/* Entry: 10b47aaf0; end: 10b47ab43;  */

ulong FUN_10b47aaf0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x00010b47b578();
  if (*(char *)(unaff_x19 + 0x168) == '\x01') {
    lVar1 = unaff_x19 + 0x170;
    FUN_10b47b454(lVar1,param_2);
    if (lVar1 != 0) {
      uVar2 = (ulong)*(uint *)(lVar1 + 0x28);
      if ((int)*(uint *)(lVar1 + 0x28) < 1) {
        uVar2 = 0xffffffffffffffff;
      }
      goto LAB_10b47ab34;
    }
  }
  uVar2 = 0xffffffffffffffff;
LAB_10b47ab34:
  func_0x00010b47b554();
  return uVar2;
}



/* Entry: 10b47ab44; end: 10b47ab4f;  */

long FUN_10b47ab44(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  int aiStack_120 [34];
  char cStack_98;
  ulong uStack_90;
  long lStack_88;
  byte bStack_80;
  char cStack_78;
  long alStack_70 [2];
  long lStack_60;
  long lStack_50;
  
  uVar2 = *(undefined8 *)(param_1 + 0x198);
  if (0 < param_2) {
    FUN_10b47a078();
    FUN_10b479d74(alStack_70,uVar2);
    if ((((alStack_70[0] != 0) && (*(char *)(alStack_70[0] + 0x10) == '\x01')) && (lStack_60 != 0))
       && (((FUN_10b4a6cd4(&uStack_90), cStack_78 == '\x01' && ((bStack_80 & 1) != 0)) &&
           (uStack_90 != 0)))) {
      if (lStack_50 == 0) {
        iVar3 = 2000;
      }
      else {
        FUN_10b48c900(aiStack_120);
        iVar3 = 2000;
        if (aiStack_120[0] != 0) {
          iVar3 = aiStack_120[0];
        }
        if (cStack_98 == '\0') {
          iVar3 = 2000;
        }
        FUN_10b47a278(aiStack_120);
      }
      uVar1 = 0;
      if (uStack_90 != 0) {
        uVar1 = (ulong)(lStack_88 << 3) / uStack_90;
      }
      func_0x00010b479980(alStack_70[0],param_2,iVar3,uVar1);
      param_2 = alStack_70[0];
    }
    FUN_10b47a248(alStack_70);
  }
  return param_2;
}



/* Entry: 10b47ab50; end: 10b47ab63;  */

void FUN_10b47ab50(void)

{
  func_0x00010b47ab9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47ab64; end: 10b47ab73;  */

undefined8 * FUN_10b47ab64(undefined8 *param_1)

{
  param_1[-1] = &PTR_DAT_110ce9ae0;
  *param_1 = &PTR_FUN_110ce9b10;
  func_0x000107c2fedc(param_1 + 0x32);
  func_0x0001057061b4(param_1 + 0x2d);
  __ZNSt3__15mutexD1Ev(param_1 + 0x24);
  func_0x000107c2fefc(param_1 + 0x18);
  func_0x000107c27e70(param_1 + 0x15);
  func_0x000107c27c20(param_1 + 0x13);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  func_0x000107c2c5d4(param_1 + 0xd);
  FUN_10b47ab74(param_1 + 3);
  func_0x000107c2ff04(param_1 + 1);
  return param_1 + -1;
}



/* Entry: 10b47ab74; end: 10b47ac13;  */

void FUN_10b47ab74(long param_1)

{
  func_0x000107c27f2c(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10b47ac14; end: 10b47ac17;  */

void FUN_10b47ac14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ce9bd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b47ac18; end: 10b47ac2b;  */

void FUN_10b47ac18(void)

{
  func_0x00010b47ac34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47ac2c; end: 10b47ac43;  */

void FUN_10b47ac2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b47b538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b47ac44; end: 10b47ac57;  */

void FUN_10b47ac44(void)

{
  FUN_10b47accc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47ac58; end: 10b47ac63;  */

void FUN_10b47ac58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b47b538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b47ac64; end: 10b47ac77;  */

void FUN_10b47ac64(void)

{
  FUN_10b47ac78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47ac78; end: 10b47accb;  */

undefined8 * FUN_10b47ac78(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ce9c78;
  func_0x000107c2c5d4(param_1 + 0xf);
  FUN_10b47a340(param_1 + 0xd);
  FUN_10b47a5e8(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  func_0x000107c2fecc(param_1 + 1);
  return param_1;
}


