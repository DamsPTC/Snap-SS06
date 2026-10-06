/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10161c3cc; end: 10161c40b;  */

void FUN_10161c3cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba518 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d730;
  func_0x000107c61520(&UNK_10d96d730,&UNK_1103e92a0);
  puRam0000000112dba518 = puVar1;
  return;
}



/* Entry: 10161c40c; end: 10161c573;  */

/* WARNING: Possible PIC construction at 0x00010161c424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010161c454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010161c484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010161c4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010161c4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010161c514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010161c544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010161c488) */
/* WARNING: Removing unreachable block (ram,0x00010161c498) */
/* WARNING: Removing unreachable block (ram,0x00010161c4a0) */
/* WARNING: Removing unreachable block (ram,0x00010161c4b0) */
/* WARNING: Removing unreachable block (ram,0x00010161c458) */
/* WARNING: Removing unreachable block (ram,0x00010161c468) */
/* WARNING: Removing unreachable block (ram,0x00010161c428) */
/* WARNING: Removing unreachable block (ram,0x00010161c438) */
/* WARNING: Removing unreachable block (ram,0x00010161c470) */
/* WARNING: Removing unreachable block (ram,0x00010161c4b8) */
/* WARNING: Removing unreachable block (ram,0x00010161c4c8) */
/* WARNING: Removing unreachable block (ram,0x00010161c4e8) */
/* WARNING: Removing unreachable block (ram,0x00010161c4f8) */
/* WARNING: Removing unreachable block (ram,0x00010161c500) */
/* WARNING: Removing unreachable block (ram,0x00010161c510) */
/* WARNING: Removing unreachable block (ram,0x00010161c4e0) */
/* WARNING: Removing unreachable block (ram,0x00010161c480) */
/* WARNING: Removing unreachable block (ram,0x00010161c450) */
/* WARNING: Removing unreachable block (ram,0x00010161c518) */
/* WARNING: Removing unreachable block (ram,0x00010161c528) */
/* WARNING: Removing unreachable block (ram,0x00010161c548) */
/* WARNING: Removing unreachable block (ram,0x00010161c564) */
/* WARNING: Removing unreachable block (ram,0x00010161c558) */
/* WARNING: Removing unreachable block (ram,0x00010161c540) */

void FUN_10161c40c(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10161c574; end: 10161c93b;  */

undefined8 * FUN_10161c574(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  uVar1 = param_2[5];
  if (0xe < uVar1 >> 0x3c) {
    uVar2 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar3;
    uVar2 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
    param_1[0x14] = param_2[0x14];
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
    uVar2 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    goto LAB_10161c750;
  }
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar2 = param_2[4];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[4] = uVar2;
  param_1[5] = uVar1;
  uVar1 = param_2[9];
  if (uVar1 >> 0x3c < 0xf) {
    param_1[6] = param_2[6];
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    uVar2 = param_2[8];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[8] = uVar2;
    param_1[9] = uVar1;
    uVar1 = param_2[0xc];
    if (0xe < uVar1 >> 0x3c) goto LAB_10161c658;
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar2 = param_2[0xb];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar1;
  }
  else {
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
LAB_10161c658:
    uVar2 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xc] = param_2[0xc];
  }
  uVar1 = param_2[0xe];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0xd];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar1;
    uVar1 = param_2[0x11];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
      uVar2 = param_2[0x10];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x10] = uVar2;
      param_1[0x11] = uVar1;
    }
    else {
      uVar2 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar2;
      param_1[0x11] = param_2[0x11];
    }
    uVar1 = param_2[0x14];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
      uVar2 = param_2[0x13];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x13] = uVar2;
      param_1[0x14] = uVar1;
    }
    else {
      uVar2 = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar2;
      param_1[0x14] = param_2[0x14];
    }
  }
  else {
    uVar2 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar2;
    uVar2 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar2;
    uVar2 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar2;
    uVar2 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar2;
  }
LAB_10161c750:
  uVar1 = param_2[0x16];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0x15];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x15] = uVar2;
    param_1[0x16] = uVar1;
    uVar1 = param_2[0x19];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      uVar2 = param_2[0x18];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x18] = uVar2;
      param_1[0x19] = uVar1;
    }
    else {
      uVar2 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar2;
      param_1[0x19] = param_2[0x19];
    }
    uVar1 = param_2[0x1c];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
      uVar2 = param_2[0x1b];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x1b] = uVar2;
      param_1[0x1c] = uVar1;
    }
    else {
      uVar2 = param_2[0x1a];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1a] = uVar2;
      param_1[0x1c] = param_2[0x1c];
    }
  }
  else {
    uVar2 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar2;
    uVar2 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar2;
    uVar2 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar2;
    uVar2 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar2;
  }
  uVar1 = param_2[0x1e];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0x1d];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x1d] = uVar2;
    param_1[0x1e] = uVar1;
    uVar1 = param_2[0x20];
    if (uVar1 >> 0x3c < 0xf) {
      uVar2 = param_2[0x1f];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x1f] = uVar2;
      param_1[0x20] = uVar1;
      uVar1 = param_2[0x23];
      if (uVar1 >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
        uVar2 = param_2[0x22];
        func_0x00010006c00c(uVar2,uVar1);
        param_1[0x22] = uVar2;
        param_1[0x23] = uVar1;
      }
      else {
        uVar2 = param_2[0x21];
        param_1[0x22] = param_2[0x22];
        param_1[0x21] = uVar2;
        param_1[0x23] = param_2[0x23];
      }
      uVar1 = param_2[0x26];
      if (uVar1 >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
        uVar2 = param_2[0x25];
        func_0x00010006c00c(uVar2,uVar1);
        param_1[0x25] = uVar2;
        param_1[0x26] = uVar1;
      }
      else {
        uVar2 = param_2[0x24];
        param_1[0x25] = param_2[0x25];
        param_1[0x24] = uVar2;
        param_1[0x26] = param_2[0x26];
      }
    }
    else {
      uVar2 = param_2[0x1f];
      uVar4 = param_2[0x22];
      uVar3 = param_2[0x21];
      param_1[0x20] = param_2[0x20];
      param_1[0x1f] = uVar2;
      param_1[0x22] = uVar4;
      param_1[0x21] = uVar3;
      uVar2 = param_2[0x23];
      uVar4 = param_2[0x26];
      uVar3 = param_2[0x25];
      param_1[0x24] = param_2[0x24];
      param_1[0x23] = uVar2;
      param_1[0x26] = uVar4;
      param_1[0x25] = uVar3;
    }
  }
  else {
    uVar2 = param_2[0x21];
    uVar4 = param_2[0x24];
    uVar3 = param_2[0x23];
    param_1[0x22] = param_2[0x22];
    param_1[0x21] = uVar2;
    param_1[0x24] = uVar4;
    param_1[0x23] = uVar3;
    uVar2 = param_2[0x25];
    param_1[0x26] = param_2[0x26];
    param_1[0x25] = uVar2;
    uVar4 = param_2[0x1d];
    uVar3 = param_2[0x20];
    uVar2 = param_2[0x1f];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar4;
    param_1[0x20] = uVar3;
    param_1[0x1f] = uVar2;
  }
  return param_1;
}



/* Entry: 10161c93c; end: 10161d3e7;  */

undefined8 * FUN_10161c93c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  func_0x00010006c00c(uVar4,uVar5);
  uVar6 = *param_1;
  uVar7 = param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar5;
  func_0x00010006c090(uVar6,uVar7);
  if ((ulong)param_1[5] >> 0x3c < 0xf) {
    if ((ulong)param_2[5] >> 0x3c < 0xf) {
      uVar4 = param_2[2];
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
      param_1[2] = uVar4;
      uVar4 = param_2[4];
      uVar5 = param_2[5];
      func_0x00010006c00c(uVar4,uVar5);
      uVar6 = param_1[4];
      uVar7 = param_1[5];
      param_1[4] = uVar4;
      param_1[5] = uVar5;
      func_0x00010006c090(uVar6,uVar7);
      if ((ulong)param_1[9] >> 0x3c < 0xf) {
        if ((ulong)param_2[9] >> 0x3c < 0xf) {
          *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
          *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
          *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
          uVar4 = param_2[8];
          uVar5 = param_2[9];
          func_0x00010006c00c(uVar4,uVar5);
          uVar6 = param_1[8];
          uVar7 = param_1[9];
          param_1[8] = uVar4;
          param_1[9] = uVar5;
          func_0x00010006c090(uVar6,uVar7);
          uVar3 = (ulong)param_2[0xc] >> 0x3c;
          if (0xe < (ulong)param_1[0xc] >> 0x3c) goto LAB_10161cbec;
          if (uVar3 < 0xf) {
            *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
            uVar4 = param_2[0xb];
            uVar5 = param_2[0xc];
            func_0x00010006c00c(uVar4,uVar5);
            uVar6 = param_1[0xb];
            uVar7 = param_1[0xc];
            param_1[0xb] = uVar4;
            param_1[0xc] = uVar5;
            func_0x00010006c090(uVar6,uVar7);
          }
          else {
            FUN_101599dcc(param_1 + 10);
            uVar4 = param_2[0xc];
            uVar6 = param_2[10];
            param_1[0xb] = param_2[0xb];
            param_1[10] = uVar6;
            param_1[0xc] = uVar4;
          }
        }
        else {
          FUN_10155b894(param_1 + 6);
          uVar7 = param_2[9];
          uVar5 = param_2[8];
          uVar6 = param_2[0xb];
          uVar4 = param_2[10];
          uVar9 = param_2[7];
          uVar8 = param_2[6];
          param_1[0xc] = param_2[0xc];
          param_1[9] = uVar7;
          param_1[8] = uVar5;
          param_1[0xb] = uVar6;
          param_1[10] = uVar4;
          param_1[7] = uVar9;
          param_1[6] = uVar8;
        }
      }
      else if ((ulong)param_2[9] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
        *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
        *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
        uVar4 = param_2[8];
        uVar6 = param_2[9];
        func_0x00010006c00c(uVar4,uVar6);
        param_1[8] = uVar4;
        param_1[9] = uVar6;
        uVar3 = (ulong)param_2[0xc] >> 0x3c;
LAB_10161cbec:
        if (uVar3 < 0xf) {
          *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
          uVar4 = param_2[0xb];
          uVar6 = param_2[0xc];
          func_0x00010006c00c(uVar4,uVar6);
          param_1[0xb] = uVar4;
          param_1[0xc] = uVar6;
        }
        else {
          uVar6 = param_2[0xb];
          uVar4 = param_2[10];
          param_1[0xc] = param_2[0xc];
          param_1[0xb] = uVar6;
          param_1[10] = uVar4;
        }
      }
      else {
        uVar6 = param_2[7];
        uVar4 = param_2[6];
        uVar7 = param_2[9];
        uVar5 = param_2[8];
        uVar9 = param_2[0xb];
        uVar8 = param_2[10];
        param_1[0xc] = param_2[0xc];
        param_1[9] = uVar7;
        param_1[8] = uVar5;
        param_1[0xb] = uVar9;
        param_1[10] = uVar8;
        param_1[7] = uVar6;
        param_1[6] = uVar4;
      }
      uVar2 = param_2[0xe];
      uVar3 = uVar2 >> 0x3c;
      if (0xe < (ulong)param_1[0xe] >> 0x3c) goto LAB_10161cc88;
      if (uVar3 < 0xf) {
        uVar5 = param_2[0xd];
        func_0x00010006c00c(uVar5,uVar2);
        uVar4 = param_1[0xd];
        uVar6 = param_1[0xe];
        param_1[0xd] = uVar5;
        param_1[0xe] = uVar2;
        func_0x00010006c090(uVar4,uVar6);
        if ((ulong)param_1[0x11] >> 0x3c < 0xf) {
          if ((ulong)param_2[0x11] >> 0x3c < 0xf) {
            *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
            uVar4 = param_2[0x10];
            uVar5 = param_2[0x11];
            func_0x00010006c00c(uVar4,uVar5);
            uVar6 = param_1[0x10];
            uVar7 = param_1[0x11];
            param_1[0x10] = uVar4;
            param_1[0x11] = uVar5;
            func_0x00010006c090(uVar6,uVar7);
          }
          else {
            FUN_101599dcc(param_1 + 0xf);
            uVar4 = param_2[0x11];
            uVar6 = param_2[0xf];
            param_1[0x10] = param_2[0x10];
            param_1[0xf] = uVar6;
            param_1[0x11] = uVar4;
          }
        }
        else if ((ulong)param_2[0x11] >> 0x3c < 0xf) {
          *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
          uVar4 = param_2[0x10];
          uVar6 = param_2[0x11];
          func_0x00010006c00c(uVar4,uVar6);
          param_1[0x10] = uVar4;
          param_1[0x11] = uVar6;
        }
        else {
          uVar6 = param_2[0x10];
          uVar4 = param_2[0xf];
          param_1[0x11] = param_2[0x11];
          param_1[0x10] = uVar6;
          param_1[0xf] = uVar4;
        }
        uVar3 = (ulong)param_2[0x14] >> 0x3c;
        if (0xe < (ulong)param_1[0x14] >> 0x3c) goto LAB_10161cd44;
        if (uVar3 < 0xf) {
          *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
          uVar4 = param_2[0x13];
          uVar5 = param_2[0x14];
          func_0x00010006c00c(uVar4,uVar5);
          uVar6 = param_1[0x13];
          uVar7 = param_1[0x14];
          param_1[0x13] = uVar4;
          param_1[0x14] = uVar5;
          func_0x00010006c090(uVar6,uVar7);
        }
        else {
          FUN_101599dcc(param_1 + 0x12);
          uVar4 = param_2[0x14];
          uVar6 = param_2[0x12];
          param_1[0x13] = param_2[0x13];
          param_1[0x12] = uVar6;
          param_1[0x14] = uVar4;
        }
      }
      else {
        func_0x00010161b2f8(param_1 + 0xd);
        uVar6 = param_2[0x10];
        uVar4 = param_2[0xf];
        uVar7 = param_2[0x12];
        uVar5 = param_2[0x11];
        uVar9 = param_2[0x14];
        uVar8 = param_2[0x13];
        uVar10 = param_2[0xd];
        param_1[0xe] = param_2[0xe];
        param_1[0xd] = uVar10;
        param_1[0x14] = uVar9;
        param_1[0x13] = uVar8;
        param_1[0x12] = uVar7;
        param_1[0x11] = uVar5;
        param_1[0x10] = uVar6;
        param_1[0xf] = uVar4;
      }
    }
    else {
      FUN_101618904(param_1 + 2);
      uVar5 = param_2[2];
      uVar6 = param_2[5];
      uVar4 = param_2[4];
      param_1[3] = param_2[3];
      param_1[2] = uVar5;
      param_1[5] = uVar6;
      param_1[4] = uVar4;
      uVar4 = param_2[10];
      uVar5 = param_2[0xd];
      uVar6 = param_2[0xc];
      uVar10 = param_2[7];
      uVar9 = param_2[6];
      uVar8 = param_2[9];
      uVar7 = param_2[8];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar4;
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar6;
      param_1[7] = uVar10;
      param_1[6] = uVar9;
      param_1[9] = uVar8;
      param_1[8] = uVar7;
      uVar7 = param_2[0x11];
      uVar5 = param_2[0x10];
      uVar6 = param_2[0x13];
      uVar4 = param_2[0x12];
      uVar9 = param_2[0xf];
      uVar8 = param_2[0xe];
      param_1[0x14] = param_2[0x14];
      param_1[0x11] = uVar7;
      param_1[0x10] = uVar5;
      param_1[0x13] = uVar6;
      param_1[0x12] = uVar4;
      param_1[0xf] = uVar9;
      param_1[0xe] = uVar8;
    }
  }
  else if ((ulong)param_2[5] >> 0x3c < 0xf) {
    uVar4 = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[2] = uVar4;
    uVar4 = param_2[4];
    uVar6 = param_2[5];
    func_0x00010006c00c(uVar4,uVar6);
    param_1[4] = uVar4;
    param_1[5] = uVar6;
    if ((ulong)param_2[9] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
      uVar4 = param_2[8];
      uVar6 = param_2[9];
      func_0x00010006c00c(uVar4,uVar6);
      param_1[8] = uVar4;
      param_1[9] = uVar6;
      if ((ulong)param_2[0xc] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
        uVar4 = param_2[0xb];
        uVar6 = param_2[0xc];
        func_0x00010006c00c(uVar4,uVar6);
        param_1[0xb] = uVar4;
        param_1[0xc] = uVar6;
      }
      else {
        uVar6 = param_2[0xb];
        uVar4 = param_2[10];
        param_1[0xc] = param_2[0xc];
        param_1[0xb] = uVar6;
        param_1[10] = uVar4;
      }
    }
    else {
      uVar6 = param_2[7];
      uVar4 = param_2[6];
      uVar7 = param_2[9];
      uVar5 = param_2[8];
      uVar9 = param_2[0xb];
      uVar8 = param_2[10];
      param_1[0xc] = param_2[0xc];
      param_1[9] = uVar7;
      param_1[8] = uVar5;
      param_1[0xb] = uVar9;
      param_1[10] = uVar8;
      param_1[7] = uVar6;
      param_1[6] = uVar4;
    }
    uVar2 = param_2[0xe];
    uVar3 = uVar2 >> 0x3c;
LAB_10161cc88:
    if (uVar3 < 0xf) {
      uVar4 = param_2[0xd];
      func_0x00010006c00c(uVar4,uVar2);
      param_1[0xd] = uVar4;
      param_1[0xe] = uVar2;
      if ((ulong)param_2[0x11] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
        uVar4 = param_2[0x10];
        uVar6 = param_2[0x11];
        func_0x00010006c00c(uVar4,uVar6);
        param_1[0x10] = uVar4;
        param_1[0x11] = uVar6;
      }
      else {
        uVar6 = param_2[0x10];
        uVar4 = param_2[0xf];
        param_1[0x11] = param_2[0x11];
        param_1[0x10] = uVar6;
        param_1[0xf] = uVar4;
      }
      uVar3 = (ulong)param_2[0x14] >> 0x3c;
LAB_10161cd44:
      if (uVar3 < 0xf) {
        *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
        uVar4 = param_2[0x13];
        uVar6 = param_2[0x14];
        func_0x00010006c00c(uVar4,uVar6);
        param_1[0x13] = uVar4;
        param_1[0x14] = uVar6;
      }
      else {
        uVar6 = param_2[0x13];
        uVar4 = param_2[0x12];
        param_1[0x14] = param_2[0x14];
        param_1[0x13] = uVar6;
        param_1[0x12] = uVar4;
      }
    }
    else {
      uVar6 = param_2[0xe];
      uVar4 = param_2[0xd];
      uVar7 = param_2[0x10];
      uVar5 = param_2[0xf];
      uVar9 = param_2[0x12];
      uVar8 = param_2[0x11];
      uVar10 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar10;
      param_1[0x12] = uVar9;
      param_1[0x11] = uVar8;
      param_1[0x10] = uVar7;
      param_1[0xf] = uVar5;
      param_1[0xe] = uVar6;
      param_1[0xd] = uVar4;
    }
  }
  else {
    uVar4 = param_2[2];
    uVar5 = param_2[5];
    uVar6 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[5] = uVar5;
    param_1[4] = uVar6;
    uVar6 = param_2[7];
    uVar4 = param_2[6];
    uVar7 = param_2[9];
    uVar5 = param_2[8];
    uVar8 = param_2[10];
    uVar10 = param_2[0xd];
    uVar9 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar8;
    param_1[0xd] = uVar10;
    param_1[0xc] = uVar9;
    param_1[7] = uVar6;
    param_1[6] = uVar4;
    param_1[9] = uVar7;
    param_1[8] = uVar5;
    uVar6 = param_2[0xf];
    uVar4 = param_2[0xe];
    uVar7 = param_2[0x11];
    uVar5 = param_2[0x10];
    uVar9 = param_2[0x13];
    uVar8 = param_2[0x12];
    param_1[0x14] = param_2[0x14];
    param_1[0x11] = uVar7;
    param_1[0x10] = uVar5;
    param_1[0x13] = uVar9;
    param_1[0x12] = uVar8;
    param_1[0xf] = uVar6;
    param_1[0xe] = uVar4;
  }
  uVar3 = param_2[0x16];
  if ((ulong)param_1[0x16] >> 0x3c < 0xf) {
    if (uVar3 >> 0x3c < 0xf) {
      uVar5 = param_2[0x15];
      func_0x00010006c00c(uVar5,uVar3);
      uVar4 = param_1[0x15];
      uVar6 = param_1[0x16];
      param_1[0x15] = uVar5;
      param_1[0x16] = uVar3;
      func_0x00010006c090(uVar4,uVar6);
      if ((ulong)param_1[0x19] >> 0x3c < 0xf) {
        if ((ulong)param_2[0x19] >> 0x3c < 0xf) {
          *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
          uVar4 = param_2[0x18];
          uVar5 = param_2[0x19];
          func_0x00010006c00c(uVar4,uVar5);
          uVar6 = param_1[0x18];
          uVar7 = param_1[0x19];
          param_1[0x18] = uVar4;
          param_1[0x19] = uVar5;
          func_0x00010006c090(uVar6,uVar7);
        }
        else {
          FUN_101599dcc(param_1 + 0x17);
          uVar4 = param_2[0x19];
          uVar6 = param_2[0x17];
          param_1[0x18] = param_2[0x18];
          param_1[0x17] = uVar6;
          param_1[0x19] = uVar4;
        }
      }
      else if ((ulong)param_2[0x19] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
        uVar4 = param_2[0x18];
        uVar6 = param_2[0x19];
        func_0x00010006c00c(uVar4,uVar6);
        param_1[0x18] = uVar4;
        param_1[0x19] = uVar6;
      }
      else {
        uVar6 = param_2[0x18];
        uVar4 = param_2[0x17];
        param_1[0x19] = param_2[0x19];
        param_1[0x18] = uVar6;
        param_1[0x17] = uVar4;
      }
      uVar3 = (ulong)param_2[0x1c] >> 0x3c;
      if (0xe < (ulong)param_1[0x1c] >> 0x3c) goto LAB_10161cf74;
      if (uVar3 < 0xf) {
        *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
        uVar4 = param_2[0x1b];
        uVar5 = param_2[0x1c];
        func_0x00010006c00c(uVar4,uVar5);
        uVar6 = param_1[0x1b];
        uVar7 = param_1[0x1c];
        param_1[0x1b] = uVar4;
        param_1[0x1c] = uVar5;
        func_0x00010006c090(uVar6,uVar7);
      }
      else {
        FUN_101599dcc(param_1 + 0x1a);
        uVar4 = param_2[0x1c];
        uVar6 = param_2[0x1a];
        param_1[0x1b] = param_2[0x1b];
        param_1[0x1a] = uVar6;
        param_1[0x1c] = uVar4;
      }
    }
    else {
      func_0x00010161b2f8(param_1 + 0x15);
      uVar6 = param_2[0x18];
      uVar4 = param_2[0x17];
      uVar7 = param_2[0x1a];
      uVar5 = param_2[0x19];
      uVar9 = param_2[0x1c];
      uVar8 = param_2[0x1b];
      uVar10 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar10;
      param_1[0x1c] = uVar9;
      param_1[0x1b] = uVar8;
      param_1[0x1a] = uVar7;
      param_1[0x19] = uVar5;
      param_1[0x18] = uVar6;
      param_1[0x17] = uVar4;
    }
  }
  else if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0x15];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x15] = uVar4;
    param_1[0x16] = uVar3;
    if ((ulong)param_2[0x19] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      uVar4 = param_2[0x18];
      uVar6 = param_2[0x19];
      func_0x00010006c00c(uVar4,uVar6);
      param_1[0x18] = uVar4;
      param_1[0x19] = uVar6;
    }
    else {
      uVar6 = param_2[0x18];
      uVar4 = param_2[0x17];
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar6;
      param_1[0x17] = uVar4;
    }
    uVar3 = (ulong)param_2[0x1c] >> 0x3c;
LAB_10161cf74:
    if (uVar3 < 0xf) {
      *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
      uVar4 = param_2[0x1b];
      uVar6 = param_2[0x1c];
      func_0x00010006c00c(uVar4,uVar6);
      param_1[0x1b] = uVar4;
      param_1[0x1c] = uVar6;
    }
    else {
      uVar6 = param_2[0x1b];
      uVar4 = param_2[0x1a];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar6;
      param_1[0x1a] = uVar4;
    }
  }
  else {
    uVar6 = param_2[0x16];
    uVar4 = param_2[0x15];
    uVar7 = param_2[0x18];
    uVar5 = param_2[0x17];
    uVar9 = param_2[0x1a];
    uVar8 = param_2[0x19];
    uVar10 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar10;
    param_1[0x1a] = uVar9;
    param_1[0x19] = uVar8;
    param_1[0x18] = uVar7;
    param_1[0x17] = uVar5;
    param_1[0x16] = uVar6;
    param_1[0x15] = uVar4;
  }
  puVar1 = param_1 + 0x1d;
  uVar3 = param_2[0x1e];
  if ((ulong)param_1[0x1e] >> 0x3c < 0xf) {
    if (0xe < uVar3 >> 0x3c) {
      func_0x00010161b324(puVar1);
      uVar4 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      *puVar1 = uVar4;
      uVar4 = param_2[0x23];
      uVar5 = param_2[0x26];
      uVar6 = param_2[0x25];
      uVar10 = param_2[0x20];
      uVar9 = param_2[0x1f];
      uVar8 = param_2[0x22];
      uVar7 = param_2[0x21];
      param_1[0x24] = param_2[0x24];
      param_1[0x23] = uVar4;
      param_1[0x26] = uVar5;
      param_1[0x25] = uVar6;
      param_1[0x20] = uVar10;
      param_1[0x1f] = uVar9;
      param_1[0x22] = uVar8;
      param_1[0x21] = uVar7;
      return param_1;
    }
    uVar5 = param_2[0x1d];
    func_0x00010006c00c(uVar5,uVar3);
    uVar4 = param_1[0x1d];
    uVar6 = param_1[0x1e];
    param_1[0x1d] = uVar5;
    param_1[0x1e] = uVar3;
    func_0x00010006c090(uVar4,uVar6);
    puVar1 = param_1 + 0x1f;
    uVar3 = param_2[0x20];
    if ((ulong)param_1[0x20] >> 0x3c < 0xf) {
      if (0xe < uVar3 >> 0x3c) {
        func_0x00010161b2f8(puVar1);
        uVar4 = param_2[0x23];
        uVar5 = param_2[0x26];
        uVar6 = param_2[0x25];
        uVar10 = param_2[0x20];
        uVar9 = param_2[0x1f];
        uVar8 = param_2[0x22];
        uVar7 = param_2[0x21];
        param_1[0x24] = param_2[0x24];
        param_1[0x23] = uVar4;
        param_1[0x26] = uVar5;
        param_1[0x25] = uVar6;
        param_1[0x20] = uVar10;
        *puVar1 = uVar9;
        param_1[0x22] = uVar8;
        param_1[0x21] = uVar7;
        return param_1;
      }
      uVar5 = param_2[0x1f];
      func_0x00010006c00c(uVar5,uVar3);
      uVar4 = param_1[0x1f];
      uVar6 = param_1[0x20];
      param_1[0x1f] = uVar5;
      param_1[0x20] = uVar3;
      func_0x00010006c090(uVar4,uVar6);
      puVar1 = param_1 + 0x21;
      if ((ulong)param_1[0x23] >> 0x3c < 0xf) {
        if ((ulong)param_2[0x23] >> 0x3c < 0xf) {
          *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
          uVar4 = param_2[0x22];
          uVar5 = param_2[0x23];
          func_0x00010006c00c(uVar4,uVar5);
          uVar6 = param_1[0x22];
          uVar7 = param_1[0x23];
          param_1[0x22] = uVar4;
          param_1[0x23] = uVar5;
          func_0x00010006c090(uVar6,uVar7);
        }
        else {
          FUN_101599dcc(puVar1);
          uVar4 = param_2[0x23];
          uVar6 = param_2[0x21];
          param_1[0x22] = param_2[0x22];
          *puVar1 = uVar6;
          param_1[0x23] = uVar4;
        }
      }
      else if ((ulong)param_2[0x23] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
        uVar4 = param_2[0x22];
        uVar6 = param_2[0x23];
        func_0x00010006c00c(uVar4,uVar6);
        param_1[0x22] = uVar4;
        param_1[0x23] = uVar6;
      }
      else {
        uVar6 = param_2[0x22];
        uVar4 = param_2[0x21];
        param_1[0x23] = param_2[0x23];
        param_1[0x22] = uVar6;
        *puVar1 = uVar4;
      }
      uVar3 = (ulong)param_2[0x26] >> 0x3c;
      if ((ulong)param_1[0x26] >> 0x3c < 0xf) {
        if (0xe < uVar3) {
          FUN_101599dcc(param_1 + 0x24);
          uVar4 = param_2[0x26];
          uVar6 = param_2[0x24];
          param_1[0x25] = param_2[0x25];
          param_1[0x24] = uVar6;
          param_1[0x26] = uVar4;
          return param_1;
        }
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
        uVar4 = param_2[0x25];
        uVar5 = param_2[0x26];
        func_0x00010006c00c(uVar4,uVar5);
        uVar6 = param_1[0x25];
        uVar7 = param_1[0x26];
        param_1[0x25] = uVar4;
        param_1[0x26] = uVar5;
        func_0x00010006c090(uVar6,uVar7);
        return param_1;
      }
      goto LAB_10161d1a8;
    }
    if (0xe < uVar3 >> 0x3c) {
      uVar6 = param_2[0x20];
      uVar4 = param_2[0x1f];
      uVar7 = param_2[0x22];
      uVar5 = param_2[0x21];
      uVar8 = param_2[0x23];
      uVar10 = param_2[0x26];
      uVar9 = param_2[0x25];
      param_1[0x24] = param_2[0x24];
      param_1[0x23] = uVar8;
      param_1[0x26] = uVar10;
      param_1[0x25] = uVar9;
      param_1[0x20] = uVar6;
      *puVar1 = uVar4;
      param_1[0x22] = uVar7;
      param_1[0x21] = uVar5;
      return param_1;
    }
    uVar4 = param_2[0x1f];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x1f] = uVar4;
    param_1[0x20] = uVar3;
  }
  else {
    if (0xe < uVar3 >> 0x3c) {
      uVar4 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      *puVar1 = uVar4;
      uVar6 = param_2[0x20];
      uVar4 = param_2[0x1f];
      uVar7 = param_2[0x22];
      uVar5 = param_2[0x21];
      uVar8 = param_2[0x23];
      uVar10 = param_2[0x26];
      uVar9 = param_2[0x25];
      param_1[0x24] = param_2[0x24];
      param_1[0x23] = uVar8;
      param_1[0x26] = uVar10;
      param_1[0x25] = uVar9;
      param_1[0x20] = uVar6;
      param_1[0x1f] = uVar4;
      param_1[0x22] = uVar7;
      param_1[0x21] = uVar5;
      return param_1;
    }
    uVar4 = param_2[0x1d];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x1d] = uVar4;
    param_1[0x1e] = uVar3;
    uVar3 = param_2[0x20];
    if (0xe < uVar3 >> 0x3c) {
      uVar6 = param_2[0x20];
      uVar4 = param_2[0x1f];
      uVar7 = param_2[0x22];
      uVar5 = param_2[0x21];
      uVar8 = param_2[0x23];
      uVar10 = param_2[0x26];
      uVar9 = param_2[0x25];
      param_1[0x24] = param_2[0x24];
      param_1[0x23] = uVar8;
      param_1[0x26] = uVar10;
      param_1[0x25] = uVar9;
      param_1[0x20] = uVar6;
      param_1[0x1f] = uVar4;
      param_1[0x22] = uVar7;
      param_1[0x21] = uVar5;
      return param_1;
    }
    uVar4 = param_2[0x1f];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x1f] = uVar4;
    param_1[0x20] = uVar3;
  }
  if ((ulong)param_2[0x23] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
    uVar4 = param_2[0x22];
    uVar6 = param_2[0x23];
    func_0x00010006c00c(uVar4,uVar6);
    param_1[0x22] = uVar4;
    param_1[0x23] = uVar6;
  }
  else {
    uVar6 = param_2[0x22];
    uVar4 = param_2[0x21];
    param_1[0x23] = param_2[0x23];
    param_1[0x22] = uVar6;
    param_1[0x21] = uVar4;
  }
  uVar3 = (ulong)param_2[0x26] >> 0x3c;
LAB_10161d1a8:
  if (uVar3 < 0xf) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    uVar4 = param_2[0x25];
    uVar6 = param_2[0x26];
    func_0x00010006c00c(uVar4,uVar6);
    param_1[0x25] = uVar4;
    param_1[0x26] = uVar6;
  }
  else {
    uVar6 = param_2[0x25];
    uVar4 = param_2[0x24];
    param_1[0x26] = param_2[0x26];
    param_1[0x25] = uVar6;
    param_1[0x24] = uVar4;
  }
  return param_1;
}



/* Entry: 10161d3e8; end: 10161d8b7;  */

undefined8 * FUN_10161d3e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[5] >> 0x3c < 0xf) {
    uVar3 = param_2[5];
    if (0xe < uVar3 >> 0x3c) {
      FUN_101618904(param_1 + 2);
      goto LAB_10161d440;
    }
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    uVar1 = param_1[4];
    param_1[4] = param_2[4];
    param_1[5] = uVar3;
    func_0x00010006c090(uVar1);
    if ((ulong)param_1[9] >> 0x3c < 0xf) {
      uVar3 = param_2[9];
      if (0xe < uVar3 >> 0x3c) {
        FUN_10155b894(param_1 + 6);
        goto LAB_10161d55c;
      }
      param_1[6] = param_2[6];
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
      uVar1 = param_1[8];
      param_1[8] = param_2[8];
      param_1[9] = uVar3;
      func_0x00010006c090(uVar1);
      if (0xe < (ulong)param_1[0xc] >> 0x3c) goto LAB_10161d564;
      uVar3 = param_2[0xc];
      if (0xe < uVar3 >> 0x3c) {
        FUN_101599dcc(param_1 + 10);
        goto LAB_10161d564;
      }
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
      uVar1 = param_1[0xb];
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = uVar3;
      func_0x00010006c090(uVar1);
    }
    else {
LAB_10161d55c:
      uVar1 = param_2[6];
      uVar4 = param_2[9];
      uVar2 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = uVar1;
      param_1[9] = uVar4;
      param_1[8] = uVar2;
LAB_10161d564:
      uVar1 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar1;
      param_1[0xc] = param_2[0xc];
    }
    if ((ulong)param_1[0xe] >> 0x3c < 0xf) {
      uVar3 = param_2[0xe];
      if (0xe < uVar3 >> 0x3c) {
        FUN_10161b2f8(param_1 + 0xd);
        goto LAB_10161d59c;
      }
      uVar1 = param_1[0xd];
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = uVar3;
      func_0x00010006c090(uVar1);
      if ((ulong)param_1[0x11] >> 0x3c < 0xf) {
        uVar3 = param_2[0x11];
        if (0xe < uVar3 >> 0x3c) {
          FUN_101599dcc(param_1 + 0xf);
          goto LAB_10161d6e4;
        }
        *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
        uVar1 = param_1[0x10];
        param_1[0x10] = param_2[0x10];
        param_1[0x11] = uVar3;
        func_0x00010006c090(uVar1);
      }
      else {
LAB_10161d6e4:
        uVar1 = param_2[0xf];
        param_1[0x10] = param_2[0x10];
        param_1[0xf] = uVar1;
        param_1[0x11] = param_2[0x11];
      }
      if ((ulong)param_1[0x14] >> 0x3c < 0xf) {
        uVar3 = param_2[0x14];
        if (0xe < uVar3 >> 0x3c) {
          FUN_101599dcc(param_1 + 0x12);
          goto LAB_10161d818;
        }
        *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
        uVar1 = param_1[0x13];
        param_1[0x13] = param_2[0x13];
        param_1[0x14] = uVar3;
        func_0x00010006c090(uVar1);
      }
      else {
LAB_10161d818:
        uVar1 = param_2[0x12];
        param_1[0x13] = param_2[0x13];
        param_1[0x12] = uVar1;
        param_1[0x14] = param_2[0x14];
      }
    }
    else {
LAB_10161d59c:
      uVar1 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar1;
      uVar1 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar1;
      uVar1 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar1;
      uVar1 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar1;
    }
  }
  else {
LAB_10161d440:
    uVar1 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar2 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar1;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar2;
    uVar1 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar1;
    param_1[0x14] = param_2[0x14];
    uVar1 = param_2[6];
    uVar4 = param_2[9];
    uVar2 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    param_1[9] = uVar4;
    param_1[8] = uVar2;
    uVar1 = param_2[10];
    uVar4 = param_2[0xd];
    uVar2 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar1;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar2;
    uVar1 = param_2[2];
    uVar4 = param_2[5];
    uVar2 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[5] = uVar4;
    param_1[4] = uVar2;
  }
  if ((ulong)param_1[0x16] >> 0x3c < 0xf) {
    uVar3 = param_2[0x16];
    if (0xe < uVar3 >> 0x3c) {
      FUN_10161b2f8(param_1 + 0x15);
      goto LAB_10161d498;
    }
    uVar1 = param_1[0x15];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = uVar3;
    func_0x00010006c090(uVar1);
    if ((ulong)param_1[0x19] >> 0x3c < 0xf) {
      uVar3 = param_2[0x19];
      if (0xe < uVar3 >> 0x3c) {
        FUN_101599dcc(param_1 + 0x17);
        goto LAB_10161d5f8;
      }
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      uVar1 = param_1[0x18];
      param_1[0x18] = param_2[0x18];
      param_1[0x19] = uVar3;
      func_0x00010006c090(uVar1);
    }
    else {
LAB_10161d5f8:
      uVar1 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar1;
      param_1[0x19] = param_2[0x19];
    }
    if ((ulong)param_1[0x1c] >> 0x3c < 0xf) {
      uVar3 = param_2[0x1c];
      if (0xe < uVar3 >> 0x3c) {
        FUN_101599dcc(param_1 + 0x1a);
        goto LAB_10161d738;
      }
      *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
      uVar1 = param_1[0x1b];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1c] = uVar3;
      func_0x00010006c090(uVar1);
    }
    else {
LAB_10161d738:
      uVar1 = param_2[0x1a];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1a] = uVar1;
      param_1[0x1c] = param_2[0x1c];
    }
  }
  else {
LAB_10161d498:
    uVar1 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar1;
    uVar1 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar1;
    uVar1 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar1;
    uVar1 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar1;
  }
  if (0xe < (ulong)param_1[0x1e] >> 0x3c) {
LAB_10161d4e8:
    uVar1 = param_2[0x21];
    uVar4 = param_2[0x24];
    uVar2 = param_2[0x23];
    param_1[0x22] = param_2[0x22];
    param_1[0x21] = uVar1;
    param_1[0x24] = uVar4;
    param_1[0x23] = uVar2;
    uVar1 = param_2[0x25];
    param_1[0x26] = param_2[0x26];
    param_1[0x25] = uVar1;
    uVar4 = param_2[0x1d];
    uVar2 = param_2[0x20];
    uVar1 = param_2[0x1f];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar4;
    param_1[0x20] = uVar2;
    param_1[0x1f] = uVar1;
    return param_1;
  }
  uVar3 = param_2[0x1e];
  if (0xe < uVar3 >> 0x3c) {
    func_0x00010161b324(param_1 + 0x1d);
    goto LAB_10161d4e8;
  }
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar3;
  func_0x00010006c090(uVar1);
  if (0xe < (ulong)param_1[0x20] >> 0x3c) {
LAB_10161d64c:
    uVar1 = param_2[0x1f];
    uVar4 = param_2[0x22];
    uVar2 = param_2[0x21];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar1;
    param_1[0x22] = uVar4;
    param_1[0x21] = uVar2;
    uVar1 = param_2[0x23];
    uVar4 = param_2[0x26];
    uVar2 = param_2[0x25];
    param_1[0x24] = param_2[0x24];
    param_1[0x23] = uVar1;
    param_1[0x26] = uVar4;
    param_1[0x25] = uVar2;
    return param_1;
  }
  uVar3 = param_2[0x20];
  if (0xe < uVar3 >> 0x3c) {
    FUN_10161b2f8(param_1 + 0x1f);
    goto LAB_10161d64c;
  }
  uVar1 = param_1[0x1f];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar3;
  func_0x00010006c090(uVar1);
  if ((ulong)param_1[0x23] >> 0x3c < 0xf) {
    uVar3 = param_2[0x23];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
      uVar1 = param_1[0x22];
      param_1[0x22] = param_2[0x22];
      param_1[0x23] = uVar3;
      func_0x00010006c090(uVar1);
      goto LAB_10161d844;
    }
    FUN_101599dcc(param_1 + 0x21);
  }
  uVar1 = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x21] = uVar1;
  param_1[0x23] = param_2[0x23];
LAB_10161d844:
  if ((ulong)param_1[0x26] >> 0x3c < 0xf) {
    uVar3 = param_2[0x26];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
      uVar1 = param_1[0x25];
      param_1[0x25] = param_2[0x25];
      param_1[0x26] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    FUN_101599dcc(param_1 + 0x24);
  }
  uVar1 = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar1;
  param_1[0x26] = param_2[0x26];
  return param_1;
}



/* Entry: 10161d8b8; end: 10161d9bb;  */

int FUN_10161d8b8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x4e] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10161d9bc; end: 10161da1b;  */

/* WARNING: Possible PIC construction at 0x00010161d9d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010161d9d8) */
/* WARNING: Removing unreachable block (ram,0x00010161d9e8) */
/* WARNING: Removing unreachable block (ram,0x00010161d9f0) */
/* WARNING: Removing unreachable block (ram,0x00010161da0c) */
/* WARNING: Removing unreachable block (ram,0x00010161da00) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10161d9bc(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10161da1c; end: 10161dd47;  */

undefined8 * FUN_10161da1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar2,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar1;
  uVar3 = param_2[4];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar2 = param_2[3];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[3] = uVar2;
    param_1[4] = uVar3;
  }
  else {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[4] = param_2[4];
  }
  uVar3 = param_2[7];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[6] = uVar2;
    param_1[7] = uVar3;
  }
  else {
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = param_2[7];
  }
  return param_1;
}



/* Entry: 10161dd48; end: 10161de0b;  */

int FUN_10161dd48(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10161de0c; end: 10161deb3;  */

/* WARNING: Possible PIC construction at 0x00010161de24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010161de54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010161de84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010161de28) */
/* WARNING: Removing unreachable block (ram,0x00010161de38) */
/* WARNING: Removing unreachable block (ram,0x00010161de58) */
/* WARNING: Removing unreachable block (ram,0x00010161de68) */
/* WARNING: Removing unreachable block (ram,0x00010161de88) */
/* WARNING: Removing unreachable block (ram,0x00010161dea4) */
/* WARNING: Removing unreachable block (ram,0x00010161de98) */
/* WARNING: Removing unreachable block (ram,0x00010161de80) */
/* WARNING: Removing unreachable block (ram,0x00010161de50) */

void FUN_10161de0c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10161deb4; end: 10161e443;  */

undefined8 * FUN_10161deb4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  func_0x00010006c00c(uVar2,uVar3);
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[7];
  if (uVar1 >> 0x3c < 0xf) {
    param_1[4] = param_2[4];
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[6] = uVar2;
    param_1[7] = uVar1;
    uVar1 = param_2[10];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      uVar2 = param_2[9];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[9] = uVar2;
      param_1[10] = uVar1;
      goto LAB_10161df70;
    }
  }
  else {
    uVar2 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
  }
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_1[10] = param_2[10];
LAB_10161df70:
  uVar1 = param_2[0xc];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0xb];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar1;
    uVar1 = param_2[0xf];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
      uVar2 = param_2[0xe];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0xe] = uVar2;
      param_1[0xf] = uVar1;
    }
    else {
      uVar2 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar2;
      param_1[0xf] = param_2[0xf];
    }
    uVar1 = param_2[0x12];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      uVar2 = param_2[0x11];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x11] = uVar2;
      param_1[0x12] = uVar1;
    }
    else {
      uVar2 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar2;
      param_1[0x12] = param_2[0x12];
    }
  }
  else {
    uVar2 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar2;
    uVar2 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar2;
    uVar2 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar2;
    uVar2 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar2;
  }
  return param_1;
}



/* Entry: 10161e444; end: 10161e637;  */

undefined8 * FUN_10161e444(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    uVar3 = param_2[7];
    if (0xe < uVar3 >> 0x3c) {
      FUN_10155b894(param_1 + 4);
      goto LAB_10161e4a4;
    }
    param_1[4] = param_2[4];
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar1 = param_1[6];
    param_1[6] = param_2[6];
    param_1[7] = uVar3;
    func_0x00010006c090(uVar1);
    if (0xe < (ulong)param_1[10] >> 0x3c) goto LAB_10161e4ac;
    uVar3 = param_2[10];
    if (0xe < uVar3 >> 0x3c) {
      FUN_101599dcc(param_1 + 8);
      goto LAB_10161e4ac;
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar1 = param_1[9];
    param_1[9] = param_2[9];
    param_1[10] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10161e4a4:
    uVar1 = param_2[4];
    uVar4 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    param_1[7] = uVar4;
    param_1[6] = uVar2;
LAB_10161e4ac:
    uVar1 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar1;
    param_1[10] = param_2[10];
  }
  if (0xe < (ulong)param_1[0xc] >> 0x3c) {
LAB_10161e4e4:
    uVar1 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar1;
    uVar1 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar1;
    uVar1 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar1;
    uVar1 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar1;
    return param_1;
  }
  uVar3 = param_2[0xc];
  if (0xe < uVar3 >> 0x3c) {
    FUN_10161b2f8(param_1 + 0xb);
    goto LAB_10161e4e4;
  }
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar3;
  func_0x00010006c090(uVar1);
  if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
    uVar3 = param_2[0xf];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
      uVar1 = param_1[0xe];
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = uVar3;
      func_0x00010006c090(uVar1);
      goto LAB_10161e5e0;
    }
    FUN_101599dcc(param_1 + 0xd);
  }
  uVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar1;
  param_1[0xf] = param_2[0xf];
LAB_10161e5e0:
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    uVar3 = param_2[0x12];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      uVar1 = param_1[0x11];
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    FUN_101599dcc(param_1 + 0x10);
  }
  uVar1 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar1;
  param_1[0x12] = param_2[0x12];
  return param_1;
}



/* Entry: 10161e638; end: 10161e7af;  */

int FUN_10161e638(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x26] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10161e7b0; end: 10161e827;  */

/* WARNING: Possible PIC construction at 0x00010161e7c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010161e7f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010161e7cc) */
/* WARNING: Removing unreachable block (ram,0x00010161e7dc) */
/* WARNING: Removing unreachable block (ram,0x00010161e7fc) */
/* WARNING: Removing unreachable block (ram,0x00010161e818) */
/* WARNING: Removing unreachable block (ram,0x00010161e80c) */
/* WARNING: Removing unreachable block (ram,0x00010161e7f4) */

void FUN_10161e7b0(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10161e828; end: 10161ecaf;  */

undefined8 * FUN_10161e828(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  uVar1 = param_2[3];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[2];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[2] = uVar2;
    param_1[3] = uVar1;
    uVar1 = param_2[6];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      uVar2 = param_2[5];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[5] = uVar2;
      param_1[6] = uVar1;
    }
    else {
      uVar2 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar2;
      param_1[6] = param_2[6];
    }
    uVar1 = param_2[9];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
      uVar2 = param_2[8];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[8] = uVar2;
      param_1[9] = uVar1;
    }
    else {
      uVar2 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar2;
      param_1[9] = param_2[9];
    }
  }
  else {
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  return param_1;
}



/* Entry: 10161ecb0; end: 10161ed77;  */

int FUN_10161ecb0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10161ed78; end: 10161ee77;  */

void FUN_10161ed78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96d69c;
  func_0x000107c61520(&DAT_10d96d69c,&UNK_1103e92a0);
  puRam0000000112dba528 = puVar1;
  return;
}



/* Entry: 10161ee78; end: 10161ee87;  */

long FUN_10161ee78(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10161ee88; end: 10161ef17;  */

bool FUN_10161ee88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    FUN_10161ef18(&uStack_50,auStack_68);
    FUN_101553ccc(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    FUN_10161ef18(&uStack_50,auStack_68);
  }
  FUN_101553ccc(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 10161ef18; end: 10161ef67;  */

undefined8 FUN_10161ef18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db6358;
  func_0x0001000285a8(0x112db6358,&UNK_10d961e20);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10161ef68; end: 10161f237;  */

bool FUN_10161ef68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(ulong *)(unaff_x20 + 0x38);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    FUN_10161ef18(&uStack_50,auStack_68);
    FUN_101553ccc(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    FUN_10161ef18(&uStack_50,auStack_68);
  }
  FUN_101553ccc(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 10161f238; end: 10161f27f;  */

void FUN_10161f238(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96da80,0x1a5,2);
  uRam0000000113801860 = uStack_38;
  uRam0000000113801858 = uStack_40;
  uRam0000000113801870 = uStack_28;
  uRam0000000113801868 = uStack_30;
  uRam0000000113801880 = uStack_18;
  uRam0000000113801878 = uStack_20;
  return;
}



/* Entry: 10161f280; end: 10161f407;  */

/* WARNING: Removing unreachable block (ram,0x00010161f404) */

void FUN_10161f280(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x10;
        break;
      case 2:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x28;
        break;
      case 3:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x40;
        break;
      case 4:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x58;
        break;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x70;
        break;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x88;
        break;
      case 7:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0xa0;
        break;
      case 8:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0xb8;
        break;
      case 9:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0xd0;
        break;
      case 10:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0xe8;
        break;
      default:
        goto LAB_10161f3f4;
      }
      (*pcVar4)(lVar2,&UNK_110790980,uVar1,param_2,param_3);
LAB_10161f3f4:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10161f408; end: 10161f53b;  */

void FUN_10161f408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10161f53c();
  if (unaff_x21 == 0) {
    FUN_10161f5c4();
    FUN_10161f64c();
    FUN_10161f6d4();
    FUN_10161f75c();
    FUN_10161f7e4();
    FUN_10161f86c();
    FUN_10161f8f4();
    FUN_10161f97c();
    FUN_10161fa04();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10161f53c; end: 10161f5c3;  */

void FUN_10161f53c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10161f5c4; end: 10161f64b;  */

void FUN_10161f5c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,2,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10161f64c; end: 10161f6d3;  */

void FUN_10161f64c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x50);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,3,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10161f6d4; end: 10161f75b;  */

void FUN_10161f6d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x68);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,4,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10161f75c; end: 10161f7e3;  */

void FUN_10161f75c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x80);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,5,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10161f7e4; end: 10161f86b;  */

void FUN_10161f7e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x98);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x90);
    uStack_60 = *(undefined8 *)(param_1 + 0x88);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,6,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10161f86c; end: 10161f8f3;  */

void FUN_10161f86c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xb0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_60 = *(undefined8 *)(param_1 + 0xa0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,7,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10161f8f4; end: 10161f97b;  */

void FUN_10161f8f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 200);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xc0);
    uStack_60 = *(undefined8 *)(param_1 + 0xb8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,8,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10161f97c; end: 10161fa03;  */

void FUN_10161f97c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xe0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xd8);
    uStack_60 = *(undefined8 *)(param_1 + 0xd0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,9,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10161fa04; end: 10161fa8b;  */

void FUN_10161fa04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xf8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xf0);
    uStack_60 = *(undefined8 *)(param_1 + 0xe8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,10,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10161fa8c; end: 10161fb03;  */

uint FUN_10161fa8c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 auStack_308 [3];
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  undefined8 uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  undefined8 uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar5 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar6 = param_2[4];
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  uStack_a0 = uVar6;
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_101620074;
    if ((float)uVar9 == (float)uVar10) {
      FUN_10161ef18(&uStack_90,&uStack_d0);
      FUN_10161ef18(&uStack_b0,&uStack_d0);
      uVar2 = uVar11;
      FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
      FUN_101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) != 0) goto LAB_1016200e0;
    }
    else {
      FUN_10161ef18(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_1016209a8:
      FUN_10161ef18(puVar3,puVar4);
      FUN_101553ccc(uVar10,uVar12,uVar6);
    }
  }
  else {
    if (0xe < uVar6 >> 0x3c) {
      FUN_10161ef18(&uStack_90,&uStack_d0);
      FUN_10161ef18(&uStack_b0,&uStack_d0);
LAB_1016200e0:
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[6];
      uVar9 = param_1[5];
      uVar5 = param_1[7];
      uVar12 = param_2[6];
      uVar10 = param_2[5];
      uVar6 = param_2[7];
      uStack_f0 = uVar10;
      uStack_e8 = uVar12;
      uStack_e0 = uVar6;
      uStack_d0 = uVar9;
      uStack_c8 = uVar11;
      uStack_c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_101620154;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_d0,&uStack_110);
        FUN_10161ef18(&uStack_f0,&uStack_110);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_101620154:
          FUN_10161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_d0,&uStack_110);
        FUN_10161ef18(&uStack_f0,&uStack_110);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[9];
      uVar9 = param_1[8];
      uVar5 = param_1[10];
      uVar12 = param_2[9];
      uVar10 = param_2[8];
      uVar6 = param_2[10];
      uStack_130 = uVar10;
      uStack_128 = uVar12;
      uStack_120 = uVar6;
      uStack_110 = uVar9;
      uStack_108 = uVar11;
      uStack_100 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_101620244;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_110,&uStack_150);
        FUN_10161ef18(&uStack_130,&uStack_150);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_101620244:
          FUN_10161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_110,&uStack_150);
        FUN_10161ef18(&uStack_130,&uStack_150);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0xc];
      uVar9 = param_1[0xb];
      uVar5 = param_1[0xd];
      uVar12 = param_2[0xc];
      uVar10 = param_2[0xb];
      uVar6 = param_2[0xd];
      uStack_170 = uVar10;
      uStack_168 = uVar12;
      uStack_160 = uVar6;
      uStack_150 = uVar9;
      uStack_148 = uVar11;
      uStack_140 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_101620334;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_150,&uStack_190);
          puVar3 = &uStack_170;
          puVar4 = &uStack_190;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_150,&uStack_190);
        FUN_10161ef18(&uStack_170,&uStack_190);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_101620334:
          FUN_10161ef18(&uStack_150,&uStack_190);
          puVar3 = &uStack_170;
          puVar4 = &uStack_190;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_150,&uStack_190);
        FUN_10161ef18(&uStack_170,&uStack_190);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0xf];
      uVar9 = param_1[0xe];
      uVar5 = param_1[0x10];
      uVar12 = param_2[0xf];
      uVar10 = param_2[0xe];
      uVar6 = param_2[0x10];
      uStack_1b0 = uVar10;
      uStack_1a8 = uVar12;
      uStack_1a0 = uVar6;
      uStack_190 = uVar9;
      uStack_188 = uVar11;
      uStack_180 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_101620424;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_190,&uStack_1d0);
          puVar3 = &uStack_1b0;
          puVar4 = &uStack_1d0;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_190,&uStack_1d0);
        FUN_10161ef18(&uStack_1b0,&uStack_1d0);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_101620424:
          FUN_10161ef18(&uStack_190,&uStack_1d0);
          puVar3 = &uStack_1b0;
          puVar4 = &uStack_1d0;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_190,&uStack_1d0);
        FUN_10161ef18(&uStack_1b0,&uStack_1d0);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0x12];
      uVar9 = param_1[0x11];
      uVar5 = param_1[0x13];
      uVar12 = param_2[0x12];
      uVar10 = param_2[0x11];
      uVar6 = param_2[0x13];
      uStack_1f0 = uVar10;
      uStack_1e8 = uVar12;
      uStack_1e0 = uVar6;
      uStack_1d0 = uVar9;
      uStack_1c8 = uVar11;
      uStack_1c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_101620514;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_1d0,&uStack_210);
          puVar3 = &uStack_1f0;
          puVar4 = &uStack_210;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_1d0,&uStack_210);
        FUN_10161ef18(&uStack_1f0,&uStack_210);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_101620514:
          FUN_10161ef18(&uStack_1d0,&uStack_210);
          puVar3 = &uStack_1f0;
          puVar4 = &uStack_210;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_1d0,&uStack_210);
        FUN_10161ef18(&uStack_1f0,&uStack_210);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0x15];
      uVar9 = param_1[0x14];
      uVar5 = param_1[0x16];
      uVar12 = param_2[0x15];
      uVar10 = param_2[0x14];
      uVar6 = param_2[0x16];
      uStack_230 = uVar10;
      uStack_228 = uVar12;
      uStack_220 = uVar6;
      uStack_210 = uVar9;
      uStack_208 = uVar11;
      uStack_200 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_101620604;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_210,&uStack_250);
          puVar3 = &uStack_230;
          puVar4 = &uStack_250;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_210,&uStack_250);
        FUN_10161ef18(&uStack_230,&uStack_250);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_101620604:
          FUN_10161ef18(&uStack_210,&uStack_250);
          puVar3 = &uStack_230;
          puVar4 = &uStack_250;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_210,&uStack_250);
        FUN_10161ef18(&uStack_230,&uStack_250);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0x18];
      uVar9 = param_1[0x17];
      uVar5 = param_1[0x19];
      uVar12 = param_2[0x18];
      uVar10 = param_2[0x17];
      uVar6 = param_2[0x19];
      uStack_270 = uVar10;
      uStack_268 = uVar12;
      uStack_260 = uVar6;
      uStack_250 = uVar9;
      uStack_248 = uVar11;
      uStack_240 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_1016206f8;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_250,&uStack_290);
          puVar3 = &uStack_270;
          puVar4 = &uStack_290;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_250,&uStack_290);
        FUN_10161ef18(&uStack_270,&uStack_290);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_1016206f8:
          FUN_10161ef18(&uStack_250,&uStack_290);
          puVar3 = &uStack_270;
          puVar4 = &uStack_290;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_250,&uStack_290);
        FUN_10161ef18(&uStack_270,&uStack_290);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0x1b];
      uVar9 = param_1[0x1a];
      uVar5 = param_1[0x1c];
      uVar12 = param_2[0x1b];
      uVar10 = param_2[0x1a];
      uVar6 = param_2[0x1c];
      uStack_2b0 = uVar10;
      uStack_2a8 = uVar12;
      uStack_2a0 = uVar6;
      uStack_290 = uVar9;
      uStack_288 = uVar11;
      uStack_280 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_1016207ec;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_290,&uStack_2d0);
          puVar3 = &uStack_2b0;
          puVar4 = &uStack_2d0;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_290,&uStack_2d0);
        FUN_10161ef18(&uStack_2b0,&uStack_2d0);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_1016207ec:
          FUN_10161ef18(&uStack_290,&uStack_2d0);
          puVar3 = &uStack_2b0;
          puVar4 = &uStack_2d0;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_290,&uStack_2d0);
        FUN_10161ef18(&uStack_2b0,&uStack_2d0);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0x1e];
      uVar9 = param_1[0x1d];
      uVar5 = param_1[0x1f];
      uVar12 = param_2[0x1e];
      uVar10 = param_2[0x1d];
      uVar6 = param_2[0x1f];
      uStack_2f0 = uVar10;
      uStack_2e8 = uVar12;
      uStack_2e0 = uVar6;
      uStack_2d0 = uVar9;
      uStack_2c8 = uVar11;
      uStack_2c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_1016208e0;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_2d0,auStack_308);
          puVar3 = &uStack_2f0;
          puVar4 = auStack_308;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_2d0,auStack_308);
        FUN_10161ef18(&uStack_2f0,auStack_308);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_1016208e0:
          FUN_10161ef18(&uStack_2d0,auStack_308);
          puVar3 = &uStack_2f0;
          puVar4 = auStack_308;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_2d0,auStack_308);
        FUN_10161ef18(&uStack_2f0,auStack_308);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      FUN_100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_1016209d0;
    }
LAB_101620074:
    FUN_10161ef18(&uStack_90,&uStack_d0);
    puVar3 = &uStack_b0;
    puVar4 = &uStack_d0;
    uVar2 = uVar5;
    uVar7 = uVar11;
    uVar8 = uVar9;
    uVar5 = uVar6;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_1016208f4:
    FUN_10161ef18(puVar3,puVar4);
    FUN_101553ccc(uVar8,uVar7,uVar2);
  }
LAB_1016209c8:
  FUN_101553ccc(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_1016209d0:
  return uVar1 & 1;
}



/* Entry: 10161fb04; end: 10161fb33;  */

undefined1  [16] FUN_10161fb04(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10161fb34; end: 10161fb67;  */

void FUN_10161fb34(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10161fb68; end: 10161fb7b;  */

undefined8 FUN_10161fb68(void)

{
  return 0x10161fb78;
}



/* Entry: 10161fb7c; end: 10161fb8f;  */

void FUN_10161fb7c(void)

{
  FUN_10161f280();
  return;
}



/* Entry: 10161fb90; end: 10161fbf7;  */

void FUN_10161fb90(void)

{
  FUN_10161f408();
  return;
}



/* Entry: 10161fbf8; end: 10161fbfb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10161fbf8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10161fbfc; end: 10161fc33;  */

uint FUN_10161fbfc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_101621a38();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10161fc34; end: 10161fce3;  */

uint FUN_10161fc34(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_58 = param_1[0x19];
  uStack_60 = param_1[0x18];
  uStack_48 = param_1[0x1b];
  uStack_50 = param_1[0x1a];
  uStack_38 = param_1[0x1d];
  uStack_40 = param_1[0x1c];
  uStack_28 = param_1[0x1f];
  uStack_30 = param_1[0x1e];
  uStack_98 = param_1[0x11];
  uStack_a0 = param_1[0x10];
  uStack_88 = param_1[0x13];
  uStack_90 = param_1[0x12];
  uStack_78 = param_1[0x15];
  uStack_80 = param_1[0x14];
  uStack_68 = param_1[0x17];
  uStack_70 = param_1[0x16];
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_158 = unaff_x20[0x19];
  uStack_160 = unaff_x20[0x18];
  uStack_148 = unaff_x20[0x1b];
  uStack_150 = unaff_x20[0x1a];
  uStack_138 = unaff_x20[0x1d];
  uStack_140 = unaff_x20[0x1c];
  uStack_128 = unaff_x20[0x1f];
  uStack_130 = unaff_x20[0x1e];
  uStack_198 = unaff_x20[0x11];
  uStack_1a0 = unaff_x20[0x10];
  uStack_188 = unaff_x20[0x13];
  uStack_190 = unaff_x20[0x12];
  uStack_178 = unaff_x20[0x15];
  uStack_180 = unaff_x20[0x14];
  uStack_168 = unaff_x20[0x17];
  uStack_170 = unaff_x20[0x16];
  uStack_1d8 = unaff_x20[9];
  uStack_1e0 = unaff_x20[8];
  uStack_1c8 = unaff_x20[0xb];
  uStack_1d0 = unaff_x20[10];
  uStack_1b8 = unaff_x20[0xd];
  uStack_1c0 = unaff_x20[0xc];
  uStack_1a8 = unaff_x20[0xf];
  uStack_1b0 = unaff_x20[0xe];
  uStack_218 = unaff_x20[1];
  uStack_220 = *unaff_x20;
  uStack_208 = unaff_x20[3];
  uStack_210 = unaff_x20[2];
  uStack_1f8 = unaff_x20[5];
  uStack_200 = unaff_x20[4];
  uStack_1e8 = unaff_x20[7];
  uStack_1f0 = unaff_x20[6];
  FUN_10161ffdc(&uStack_220,&uStack_120);
  return uVar1 & 1;
}



/* Entry: 10161fce4; end: 10161fd83;  */

/* WARNING: Possible PIC construction at 0x00010161fd30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010161fd40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010161fd34) */
/* WARNING: Removing unreachable block (ram,0x00010161fd44) */

void FUN_10161fce4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba560 != -1) {
    func_0x000107c61568(0x112dba560,FUN_10161f238);
  }
  uVar5 = uRam0000000113801880;
  uVar4 = uRam0000000113801878;
  uVar3 = uRam0000000113801870;
  uVar2 = uRam0000000113801868;
  uVar1 = uRam0000000113801860;
  *param_1 = uRam0000000113801858;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10161fd84; end: 10161fdbf;  */

void FUN_10161fd84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dba580;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dba580,&UNK_10d96da70);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10161fdc0; end: 10161ff2b;  */

void FUN_10161fdc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_178 [72];
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[0x19];
  uStack_70 = unaff_x20[0x18];
  uStack_58 = unaff_x20[0x1b];
  uStack_60 = unaff_x20[0x1a];
  uStack_48 = unaff_x20[0x1d];
  uStack_50 = unaff_x20[0x1c];
  uStack_38 = unaff_x20[0x1f];
  uStack_40 = unaff_x20[0x1e];
  uStack_a8 = unaff_x20[0x11];
  uStack_b0 = unaff_x20[0x10];
  uStack_98 = unaff_x20[0x13];
  uStack_a0 = unaff_x20[0x12];
  uStack_88 = unaff_x20[0x15];
  uStack_90 = unaff_x20[0x14];
  uStack_78 = unaff_x20[0x17];
  uStack_80 = unaff_x20[0x16];
  uStack_e8 = unaff_x20[9];
  uStack_f0 = unaff_x20[8];
  uStack_d8 = unaff_x20[0xb];
  uStack_e0 = unaff_x20[10];
  uStack_c8 = unaff_x20[0xd];
  uStack_d0 = unaff_x20[0xc];
  uStack_b8 = unaff_x20[0xf];
  uStack_c0 = unaff_x20[0xe];
  uStack_128 = unaff_x20[1];
  uStack_130 = *unaff_x20;
  uStack_118 = unaff_x20[3];
  uStack_120 = unaff_x20[2];
  uStack_108 = unaff_x20[5];
  uStack_110 = unaff_x20[4];
  uStack_f8 = unaff_x20[7];
  uStack_100 = unaff_x20[6];
  func_0x000107c6068c(auStack_178,0);
  func_0x000107c5fa50(auStack_178,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10161ff2c; end: 10161ffdb;  */

uint FUN_10161ff2c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_158 = param_1[0x19];
  uStack_160 = param_1[0x18];
  uStack_148 = param_1[0x1b];
  uStack_150 = param_1[0x1a];
  uStack_138 = param_1[0x1d];
  uStack_140 = param_1[0x1c];
  uStack_128 = param_1[0x1f];
  uStack_130 = param_1[0x1e];
  uStack_198 = param_1[0x11];
  uStack_1a0 = param_1[0x10];
  uStack_188 = param_1[0x13];
  uStack_190 = param_1[0x12];
  uStack_178 = param_1[0x15];
  uStack_180 = param_1[0x14];
  uStack_168 = param_1[0x17];
  uStack_170 = param_1[0x16];
  uStack_1d8 = param_1[9];
  uStack_1e0 = param_1[8];
  uStack_1c8 = param_1[0xb];
  uStack_1d0 = param_1[10];
  uStack_1b8 = param_1[0xd];
  uStack_1c0 = param_1[0xc];
  uStack_1a8 = param_1[0xf];
  uStack_1b0 = param_1[0xe];
  uStack_218 = param_1[1];
  uStack_220 = *param_1;
  uStack_208 = param_1[3];
  uStack_210 = param_1[2];
  uStack_1f8 = param_1[5];
  uStack_200 = param_1[4];
  uStack_1e8 = param_1[7];
  uStack_1f0 = param_1[6];
  uStack_58 = param_2[0x19];
  uStack_60 = param_2[0x18];
  uStack_48 = param_2[0x1b];
  uStack_50 = param_2[0x1a];
  uStack_38 = param_2[0x1d];
  uStack_40 = param_2[0x1c];
  uStack_28 = param_2[0x1f];
  uStack_30 = param_2[0x1e];
  uStack_98 = param_2[0x11];
  uStack_a0 = param_2[0x10];
  uStack_88 = param_2[0x13];
  uStack_90 = param_2[0x12];
  uStack_78 = param_2[0x15];
  uStack_80 = param_2[0x14];
  uStack_68 = param_2[0x17];
  uStack_70 = param_2[0x16];
  uStack_d8 = param_2[9];
  uStack_e0 = param_2[8];
  uStack_c8 = param_2[0xb];
  uStack_d0 = param_2[10];
  uStack_b8 = param_2[0xd];
  uStack_c0 = param_2[0xc];
  uStack_a8 = param_2[0xf];
  uStack_b0 = param_2[0xe];
  uStack_118 = param_2[1];
  uStack_120 = *param_2;
  uStack_108 = param_2[3];
  uStack_110 = param_2[2];
  uStack_f8 = param_2[5];
  uStack_100 = param_2[4];
  uStack_e8 = param_2[7];
  uStack_f0 = param_2[6];
  FUN_10161ffdc(&uStack_220,&uStack_120);
  return uVar1 & 1;
}



/* Entry: 10161ffdc; end: 1016209f3;  */

uint FUN_10161ffdc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 auStack_308 [3];
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  undefined8 uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  undefined8 uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar5 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar6 = param_2[4];
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  uStack_a0 = uVar6;
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_101620074;
    if ((float)uVar9 == (float)uVar10) {
      FUN_10161ef18(&uStack_90,&uStack_d0);
      FUN_10161ef18(&uStack_b0,&uStack_d0);
      uVar2 = uVar11;
      FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
      FUN_101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) != 0) goto LAB_1016200e0;
    }
    else {
      FUN_10161ef18(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_1016209a8:
      FUN_10161ef18(puVar3,puVar4);
      FUN_101553ccc(uVar10,uVar12,uVar6);
    }
  }
  else {
    if (0xe < uVar6 >> 0x3c) {
      FUN_10161ef18(&uStack_90,&uStack_d0);
      FUN_10161ef18(&uStack_b0,&uStack_d0);
LAB_1016200e0:
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[6];
      uVar9 = param_1[5];
      uVar5 = param_1[7];
      uVar12 = param_2[6];
      uVar10 = param_2[5];
      uVar6 = param_2[7];
      uStack_f0 = uVar10;
      uStack_e8 = uVar12;
      uStack_e0 = uVar6;
      uStack_d0 = uVar9;
      uStack_c8 = uVar11;
      uStack_c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_101620154;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_d0,&uStack_110);
        FUN_10161ef18(&uStack_f0,&uStack_110);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_101620154:
          FUN_10161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_d0,&uStack_110);
        FUN_10161ef18(&uStack_f0,&uStack_110);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[9];
      uVar9 = param_1[8];
      uVar5 = param_1[10];
      uVar12 = param_2[9];
      uVar10 = param_2[8];
      uVar6 = param_2[10];
      uStack_130 = uVar10;
      uStack_128 = uVar12;
      uStack_120 = uVar6;
      uStack_110 = uVar9;
      uStack_108 = uVar11;
      uStack_100 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_101620244;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_110,&uStack_150);
        FUN_10161ef18(&uStack_130,&uStack_150);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_101620244:
          FUN_10161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_110,&uStack_150);
        FUN_10161ef18(&uStack_130,&uStack_150);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0xc];
      uVar9 = param_1[0xb];
      uVar5 = param_1[0xd];
      uVar12 = param_2[0xc];
      uVar10 = param_2[0xb];
      uVar6 = param_2[0xd];
      uStack_170 = uVar10;
      uStack_168 = uVar12;
      uStack_160 = uVar6;
      uStack_150 = uVar9;
      uStack_148 = uVar11;
      uStack_140 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_101620334;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_150,&uStack_190);
          puVar3 = &uStack_170;
          puVar4 = &uStack_190;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_150,&uStack_190);
        FUN_10161ef18(&uStack_170,&uStack_190);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_101620334:
          FUN_10161ef18(&uStack_150,&uStack_190);
          puVar3 = &uStack_170;
          puVar4 = &uStack_190;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_150,&uStack_190);
        FUN_10161ef18(&uStack_170,&uStack_190);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0xf];
      uVar9 = param_1[0xe];
      uVar5 = param_1[0x10];
      uVar12 = param_2[0xf];
      uVar10 = param_2[0xe];
      uVar6 = param_2[0x10];
      uStack_1b0 = uVar10;
      uStack_1a8 = uVar12;
      uStack_1a0 = uVar6;
      uStack_190 = uVar9;
      uStack_188 = uVar11;
      uStack_180 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_101620424;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_190,&uStack_1d0);
          puVar3 = &uStack_1b0;
          puVar4 = &uStack_1d0;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_190,&uStack_1d0);
        FUN_10161ef18(&uStack_1b0,&uStack_1d0);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_101620424:
          FUN_10161ef18(&uStack_190,&uStack_1d0);
          puVar3 = &uStack_1b0;
          puVar4 = &uStack_1d0;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_190,&uStack_1d0);
        FUN_10161ef18(&uStack_1b0,&uStack_1d0);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0x12];
      uVar9 = param_1[0x11];
      uVar5 = param_1[0x13];
      uVar12 = param_2[0x12];
      uVar10 = param_2[0x11];
      uVar6 = param_2[0x13];
      uStack_1f0 = uVar10;
      uStack_1e8 = uVar12;
      uStack_1e0 = uVar6;
      uStack_1d0 = uVar9;
      uStack_1c8 = uVar11;
      uStack_1c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_101620514;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_1d0,&uStack_210);
          puVar3 = &uStack_1f0;
          puVar4 = &uStack_210;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_1d0,&uStack_210);
        FUN_10161ef18(&uStack_1f0,&uStack_210);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_101620514:
          FUN_10161ef18(&uStack_1d0,&uStack_210);
          puVar3 = &uStack_1f0;
          puVar4 = &uStack_210;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_1d0,&uStack_210);
        FUN_10161ef18(&uStack_1f0,&uStack_210);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0x15];
      uVar9 = param_1[0x14];
      uVar5 = param_1[0x16];
      uVar12 = param_2[0x15];
      uVar10 = param_2[0x14];
      uVar6 = param_2[0x16];
      uStack_230 = uVar10;
      uStack_228 = uVar12;
      uStack_220 = uVar6;
      uStack_210 = uVar9;
      uStack_208 = uVar11;
      uStack_200 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_101620604;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_210,&uStack_250);
          puVar3 = &uStack_230;
          puVar4 = &uStack_250;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_210,&uStack_250);
        FUN_10161ef18(&uStack_230,&uStack_250);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_101620604:
          FUN_10161ef18(&uStack_210,&uStack_250);
          puVar3 = &uStack_230;
          puVar4 = &uStack_250;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_210,&uStack_250);
        FUN_10161ef18(&uStack_230,&uStack_250);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0x18];
      uVar9 = param_1[0x17];
      uVar5 = param_1[0x19];
      uVar12 = param_2[0x18];
      uVar10 = param_2[0x17];
      uVar6 = param_2[0x19];
      uStack_270 = uVar10;
      uStack_268 = uVar12;
      uStack_260 = uVar6;
      uStack_250 = uVar9;
      uStack_248 = uVar11;
      uStack_240 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_1016206f8;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_250,&uStack_290);
          puVar3 = &uStack_270;
          puVar4 = &uStack_290;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_250,&uStack_290);
        FUN_10161ef18(&uStack_270,&uStack_290);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_1016206f8:
          FUN_10161ef18(&uStack_250,&uStack_290);
          puVar3 = &uStack_270;
          puVar4 = &uStack_290;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_250,&uStack_290);
        FUN_10161ef18(&uStack_270,&uStack_290);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0x1b];
      uVar9 = param_1[0x1a];
      uVar5 = param_1[0x1c];
      uVar12 = param_2[0x1b];
      uVar10 = param_2[0x1a];
      uVar6 = param_2[0x1c];
      uStack_2b0 = uVar10;
      uStack_2a8 = uVar12;
      uStack_2a0 = uVar6;
      uStack_290 = uVar9;
      uStack_288 = uVar11;
      uStack_280 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_1016207ec;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_290,&uStack_2d0);
          puVar3 = &uStack_2b0;
          puVar4 = &uStack_2d0;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_290,&uStack_2d0);
        FUN_10161ef18(&uStack_2b0,&uStack_2d0);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_1016207ec:
          FUN_10161ef18(&uStack_290,&uStack_2d0);
          puVar3 = &uStack_2b0;
          puVar4 = &uStack_2d0;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_290,&uStack_2d0);
        FUN_10161ef18(&uStack_2b0,&uStack_2d0);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0x1e];
      uVar9 = param_1[0x1d];
      uVar5 = param_1[0x1f];
      uVar12 = param_2[0x1e];
      uVar10 = param_2[0x1d];
      uVar6 = param_2[0x1f];
      uStack_2f0 = uVar10;
      uStack_2e8 = uVar12;
      uStack_2e0 = uVar6;
      uStack_2d0 = uVar9;
      uStack_2c8 = uVar11;
      uStack_2c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_1016208e0;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161ef18(&uStack_2d0,auStack_308);
          puVar3 = &uStack_2f0;
          puVar4 = auStack_308;
          goto LAB_1016209a8;
        }
        FUN_10161ef18(&uStack_2d0,auStack_308);
        FUN_10161ef18(&uStack_2f0,auStack_308);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar6);
        FUN_101553ccc(uVar10,uVar12,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_1016209c8;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_1016208e0:
          FUN_10161ef18(&uStack_2d0,auStack_308);
          puVar3 = &uStack_2f0;
          puVar4 = auStack_308;
          uVar2 = uVar5;
          uVar7 = uVar11;
          uVar8 = uVar9;
          uVar5 = uVar6;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1016208f4;
        }
        FUN_10161ef18(&uStack_2d0,auStack_308);
        FUN_10161ef18(&uStack_2f0,auStack_308);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      FUN_100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_1016209d0;
    }
LAB_101620074:
    FUN_10161ef18(&uStack_90,&uStack_d0);
    puVar3 = &uStack_b0;
    puVar4 = &uStack_d0;
    uVar2 = uVar5;
    uVar7 = uVar11;
    uVar8 = uVar9;
    uVar5 = uVar6;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_1016208f4:
    FUN_10161ef18(puVar3,puVar4);
    FUN_101553ccc(uVar8,uVar7,uVar2);
  }
LAB_1016209c8:
  FUN_101553ccc(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_1016209d0:
  return uVar1 & 1;
}



/* Entry: 1016209f4; end: 101620a33;  */

void FUN_1016209f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d9b8;
  func_0x000107c61520(&UNK_10d96d9b8,&UNK_1103e9490);
  puRam0000000112dba568 = puVar1;
  return;
}



/* Entry: 101620a34; end: 101620a57;  */

void FUN_101620a34(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101620a58();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101620a58; end: 101620a97;  */

void FUN_101620a58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba570 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d990;
  func_0x000107c61520(&UNK_10d96d990,&UNK_1103e9490);
  puRam0000000112dba570 = puVar1;
  return;
}



/* Entry: 101620a98; end: 101620ac3;  */

void FUN_101620a98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016209f4();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101618640();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101620ac4; end: 101620ac7;  */

void FUN_101620ac4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d9f8;
  func_0x000107c61520(&UNK_10d96d9f8,&UNK_1103e9490);
  puRam0000000112dba578 = puVar1;
  return;
}



/* Entry: 101620ac8; end: 101620b07;  */

void FUN_101620ac8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d9f8;
  func_0x000107c61520(&UNK_10d96d9f8,&UNK_1103e9490);
  puRam0000000112dba578 = puVar1;
  return;
}



/* Entry: 101620b08; end: 101620c53;  */

long FUN_101620b08(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101620c54; end: 101621573;  */

undefined8 * FUN_101620c54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar2,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar1;
  uVar3 = param_2[4];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar2 = param_2[3];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[3] = uVar2;
    param_1[4] = uVar3;
  }
  else {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[4] = param_2[4];
  }
  uVar3 = param_2[7];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[6] = uVar2;
    param_1[7] = uVar3;
  }
  else {
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = param_2[7];
  }
  uVar3 = param_2[10];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar2 = param_2[9];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[9] = uVar2;
    param_1[10] = uVar3;
  }
  else {
    uVar2 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[10] = param_2[10];
  }
  uVar3 = param_2[0xd];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    uVar2 = param_2[0xc];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar3;
  }
  else {
    uVar2 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar2;
    param_1[0xd] = param_2[0xd];
  }
  uVar3 = param_2[0x10];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    uVar2 = param_2[0xf];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xf] = uVar2;
    param_1[0x10] = uVar3;
  }
  else {
    uVar2 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0x10] = param_2[0x10];
  }
  uVar3 = param_2[0x13];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
    uVar2 = param_2[0x12];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
  }
  else {
    uVar2 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar2;
    param_1[0x13] = param_2[0x13];
  }
  uVar3 = param_2[0x16];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    uVar2 = param_2[0x15];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x15] = uVar2;
    param_1[0x16] = uVar3;
  }
  else {
    uVar2 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar2;
    param_1[0x16] = param_2[0x16];
  }
  uVar3 = param_2[0x19];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
    uVar2 = param_2[0x18];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x18] = uVar2;
    param_1[0x19] = uVar3;
  }
  else {
    uVar2 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar2;
    param_1[0x19] = param_2[0x19];
  }
  uVar3 = param_2[0x1c];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
    uVar2 = param_2[0x1b];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x1b] = uVar2;
    param_1[0x1c] = uVar3;
  }
  else {
    uVar2 = param_2[0x1a];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar2;
    param_1[0x1c] = param_2[0x1c];
  }
  uVar3 = param_2[0x1f];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
    uVar2 = param_2[0x1e];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x1e] = uVar2;
    param_1[0x1f] = uVar3;
  }
  else {
    uVar2 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar2;
    param_1[0x1f] = param_2[0x1f];
  }
  return param_1;
}



/* Entry: 101621574; end: 1016215b7;  */

void FUN_101621574(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar2 = param_2[0x11];
  uVar1 = param_2[0x10];
  uVar4 = param_2[0x13];
  uVar3 = param_2[0x12];
  uVar5 = param_2[0x14];
  uVar7 = param_2[0x17];
  uVar6 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar5;
  param_1[0x17] = uVar7;
  param_1[0x16] = uVar6;
  param_1[0x11] = uVar2;
  param_1[0x10] = uVar1;
  param_1[0x13] = uVar4;
  param_1[0x12] = uVar3;
  uVar2 = param_2[0x19];
  uVar1 = param_2[0x18];
  uVar4 = param_2[0x1b];
  uVar3 = param_2[0x1a];
  uVar5 = param_2[0x1c];
  uVar7 = param_2[0x1f];
  uVar6 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar5;
  param_1[0x1f] = uVar7;
  param_1[0x1e] = uVar6;
  param_1[0x19] = uVar2;
  param_1[0x18] = uVar1;
  param_1[0x1b] = uVar4;
  param_1[0x1a] = uVar3;
  return;
}



/* Entry: 1016215b8; end: 101621943;  */

undefined8 * FUN_1016215b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[4] >> 0x3c < 0xf) {
    uVar3 = param_2[4];
    if (0xe < uVar3 >> 0x3c) {
      FUN_101599dcc(param_1 + 2);
      goto LAB_101621610;
    }
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar1 = param_1[3];
    param_1[3] = param_2[3];
    param_1[4] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_101621610:
    uVar1 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[4] = param_2[4];
  }
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    uVar3 = param_2[7];
    if (0xe < uVar3 >> 0x3c) {
      FUN_101599dcc(param_1 + 5);
      goto LAB_101621664;
    }
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar1 = param_1[6];
    param_1[6] = param_2[6];
    param_1[7] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_101621664:
    uVar1 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar1;
    param_1[7] = param_2[7];
  }
  if ((ulong)param_1[10] >> 0x3c < 0xf) {
    uVar3 = param_2[10];
    if (0xe < uVar3 >> 0x3c) {
      FUN_101599dcc(param_1 + 8);
      goto LAB_1016216b8;
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar1 = param_1[9];
    param_1[9] = param_2[9];
    param_1[10] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_1016216b8:
    uVar1 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar1;
    param_1[10] = param_2[10];
  }
  if ((ulong)param_1[0xd] >> 0x3c < 0xf) {
    uVar3 = param_2[0xd];
    if (0xe < uVar3 >> 0x3c) {
      FUN_101599dcc(param_1 + 0xb);
      goto LAB_10162170c;
    }
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    uVar1 = param_1[0xc];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10162170c:
    uVar1 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar1;
    param_1[0xd] = param_2[0xd];
  }
  if ((ulong)param_1[0x10] >> 0x3c < 0xf) {
    uVar3 = param_2[0x10];
    if (0xe < uVar3 >> 0x3c) {
      FUN_101599dcc(param_1 + 0xe);
      goto LAB_101621760;
    }
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    uVar1 = param_1[0xf];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_101621760:
    uVar1 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar1;
    param_1[0x10] = param_2[0x10];
  }
  if ((ulong)param_1[0x13] >> 0x3c < 0xf) {
    uVar3 = param_2[0x13];
    if (0xe < uVar3 >> 0x3c) {
      FUN_101599dcc(param_1 + 0x11);
      goto LAB_1016217b4;
    }
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
    uVar1 = param_1[0x12];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_1016217b4:
    uVar1 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar1;
    param_1[0x13] = param_2[0x13];
  }
  if ((ulong)param_1[0x16] >> 0x3c < 0xf) {
    uVar3 = param_2[0x16];
    if (0xe < uVar3 >> 0x3c) {
      FUN_101599dcc(param_1 + 0x14);
      goto LAB_101621808;
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    uVar1 = param_1[0x15];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_101621808:
    uVar1 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar1;
    param_1[0x16] = param_2[0x16];
  }
  if ((ulong)param_1[0x19] >> 0x3c < 0xf) {
    uVar3 = param_2[0x19];
    if (0xe < uVar3 >> 0x3c) {
      FUN_101599dcc(param_1 + 0x17);
      goto LAB_10162185c;
    }
    *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
    uVar1 = param_1[0x18];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10162185c:
    uVar1 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar1;
    param_1[0x19] = param_2[0x19];
  }
  if ((ulong)param_1[0x1c] >> 0x3c < 0xf) {
    uVar3 = param_2[0x1c];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
      uVar1 = param_1[0x1b];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1c] = uVar3;
      func_0x00010006c090(uVar1);
      goto LAB_1016218dc;
    }
    FUN_101599dcc(param_1 + 0x1a);
  }
  uVar1 = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar1;
  param_1[0x1c] = param_2[0x1c];
LAB_1016218dc:
  if ((ulong)param_1[0x1f] >> 0x3c < 0xf) {
    uVar3 = param_2[0x1f];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
      uVar1 = param_1[0x1e];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1f] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    FUN_101599dcc(param_1 + 0x1d);
  }
  uVar1 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar1;
  param_1[0x1f] = param_2[0x1f];
  return param_1;
}



/* Entry: 101621944; end: 101621a37;  */

int FUN_101621944(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x40] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101621a38; end: 101621a77;  */

void FUN_101621a38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96d964;
  func_0x000107c61520(&DAT_10d96d964,&UNK_1103e9490);
  puRam0000000112dba588 = puVar1;
  return;
}



/* Entry: 101621a78; end: 101621aa7;  */

void FUN_101621a78(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 101621aa8; end: 101621ae7;  */

void FUN_101621aa8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dba5e8;
  func_0x0001000285a8(0x112dba5e8,&UNK_10d96dc30);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101621ae8; end: 101621b0f;  */

void FUN_101621ae8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 101621b10; end: 101621bbb;  */

void FUN_101621b10(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101621bbc; end: 101621bcf;  */

bool FUN_101621bbc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101621bd0; end: 101621c17;  */

void FUN_101621bd0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96df10,0x60,2);
  uRam0000000113801890 = uStack_38;
  uRam0000000113801888 = uStack_40;
  uRam00000001138018a0 = uStack_28;
  uRam0000000113801898 = uStack_30;
  uRam00000001138018b0 = uStack_18;
  uRam00000001138018a8 = uStack_20;
  return;
}



/* Entry: 101621c18; end: 101621d07;  */

void FUN_101621c18(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x180);
        FUN_101621e34();
LAB_101621c8c:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x180);
          FUN_101621e34();
          goto LAB_101621c8c;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x180);
          FUN_101621e34();
          goto LAB_101621c8c;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101621d08; end: 101621e33;  */

void FUN_101621d08(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar2 = &lStack_50;
  plVar3 = &lStack_50;
  puVar1 = param_1;
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    lStack_50 = *unaff_x20;
    FUN_101621e34();
    (*pcVar4)(&lStack_50,1,&UNK_1103e9740,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    uStack_48 = (undefined1)unaff_x20[3];
    pcVar4 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[2];
    FUN_101621e34();
    (*pcVar4)(&lStack_50,2,&UNK_1103e9740,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar3;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[4] != 0) {
    uStack_48 = (undefined1)unaff_x20[5];
    pcVar4 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[4];
    FUN_101621e34();
    (*pcVar4)(&lStack_50,3,&UNK_1103e9740,puVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  return;
}



/* Entry: 101621e34; end: 101621e73;  */

void FUN_101621e34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba5f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96dc38;
  func_0x000107c61520(&DAT_10d96dc38,&UNK_1103e9740);
  puRam0000000112dba5f8 = puVar1;
  return;
}



/* Entry: 101621e74; end: 101621ec7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101621e74(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
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
  undefined1 auVar43 [16];
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 != 0) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 1) {
      if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 2) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  lVar19 = param_1[2];
  lVar22 = param_2[2];
  if ((char)param_2[3] == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 != 0) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 1) {
      if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 2) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  lVar19 = param_1[4];
  lVar22 = param_2[4];
  if ((char)param_2[5] == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 == 0) goto LAB_1016223c0;
    }
    else if (lVar22 == 1) {
      if (lVar19 == 1) {
LAB_1016223c0:
        pbVar10 = (byte *)param_1[6];
        pbVar26 = (byte *)param_1[7];
        lVar19 = param_2[6];
        uVar16 = param_2[7];
        puVar7 = (undefined1 *)register0x00000008;
        do {
          *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
          *(byte **)(puVar7 + -0x48) = unaff_x25;
          *(byte **)(puVar7 + -0x40) = unaff_x24;
          *(byte **)(puVar7 + -0x38) = unaff_x23;
          *(ulong *)(puVar7 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
          *(ulong *)(puVar7 + -0x20) = unaff_x20;
          *(byte **)(puVar7 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar7 + -8) = unaff_x30;
          *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar4 = (uint)((ulong)pbVar26 >> 0x20);
          uVar18 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar16 >> 0x20);
          uVar23 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar13 = pbVar26;
          if ((ulong)pbVar26 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                (uVar16 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
LAB_100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar21 = (ulong)(iVar20 - iVar8);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar16 >> 0x30 & 0xff;
              goto LAB_100e2608c;
            }
            iVar20 = (int)((ulong)lVar19 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar19)) goto LAB_100e26094;
LAB_100e26154:
            pbVar9 = (byte *)0x0;
          }
          else {
            if (uVar18 == 2) {
              uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar21 = 0;
            if (uVar23 < 2) goto LAB_100e26084;
LAB_100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
              if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
LAB_100e2608c:
              if (uVar21 != uVar24) goto LAB_100e26154;
LAB_100e26094:
              if ((long)uVar21 < 1) goto LAB_100e26128;
              if (uVar18 < 2) {
                if (uVar18 == 0) {
                  puVar7[-0x70] = (char)pbVar10;
                  puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                  puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                  puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                  puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                  puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                  puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                  puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                  puVar7[-0x68] = (char)pbVar26;
                  puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                  puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                  puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                  puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                  puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                  pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
                  unaff_x21 = 0;
                  FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                  goto LAB_100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar8;
                unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar26;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar13 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar13) {
                      pbVar13 = unaff_x23;
                    }
                    pbVar13 = pbVar13 + (long)pbVar10;
                    goto LAB_100e262a4;
                  }
                }
                pbVar13 = (byte *)0x0;
              }
              else {
                if (uVar18 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar13 = puVar7 + -0x70;
                  goto LAB_100e26260;
                }
                lVar22 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar13 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
                }
                unaff_x23 = unaff_x24 + -lVar22;
                if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar26;
                if (pbVar10 == (byte *)0x0) {
                  pbVar13 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                }
              }
LAB_100e262a4:
              unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar16;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar21 == 0);
            }
          }
LAB_100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
            return pbVar9;
          }
          func_0x000107c60e78();
          *(byte **)(puVar7 + -0xc0) = unaff_x24;
          *(byte **)(puVar7 + -0xb8) = unaff_x23;
          *(ulong *)(puVar7 + -0xb0) = unaff_x22;
          *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
          *(ulong *)(puVar7 + -0xa0) = unaff_x20;
          *(byte **)(puVar7 + -0x98) = unaff_x19;
          *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
          *(code **)(puVar7 + -0x88) = FUN_100e26304;
          pbVar12 = *(byte **)pbVar9;
          pbVar10 = *(byte **)(pbVar9 + 8);
          pbVar25 = *(byte **)(pbVar9 + 0x18);
          bVar27 = pbVar9[0x28];
          pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar14 = pbVar10;
          if (bVar27 < 3) {
            if (bVar27 == 0) {
              if (pbVar13[0x28] == 0) {
                lVar19 = *(long *)pbVar13;
                uVar11 = 0;
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
                return (byte *)(ulong)((uint)pbVar12 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar27 == 1) {
              if (pbVar13[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar17 = *(byte **)(pbVar13 + 0x10);
              lVar19 = *(long *)pbVar13;
              uVar11 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar13[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              lVar19 = *(long *)(pbVar13 + 0x18);
              if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
                if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar19 == 0) {
                  return (byte *)0x0;
                }
                FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar19);
                func_0x000107c61174();
                pbVar10 = pbVar25;
                func_0x000107c60118();
                func_0x000107c61170(pbVar25);
                func_0x000107c61170(lVar19);
                pbVar25 = pbVar10;
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
            }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar12,pbVar14,pbVar15,pbVar17,0);
            return pbVar12;
          }
          lVar22 = *(long *)(pbVar9 + 0x20);
          if (bVar27 < 5) {
            if (bVar27 != 3) {
              if (pbVar13[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                 (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                 pbVar17 = *(byte **)(pbVar13 + 0x18),
                 pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar13[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar19 = *(long *)(pbVar13 + 0x20);
            if (pbVar26 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar17 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar19 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar19 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar27 != 5) {
            if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                lVar22 == 0) && pbVar26 == (byte *)0x0) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar13 + 0x20);
              lVar19 = *(long *)(pbVar13 + 0x18);
              bVar27 = pbVar13[8] | (byte)lVar19;
              bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
              bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar35 = pbVar13[0x10] | (byte)lVar22;
              bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar43[1] = bVar28;
              auVar43[0] = bVar27;
              auVar43[2] = bVar29;
              auVar43[3] = bVar30;
              auVar43[4] = bVar31;
              auVar43[5] = bVar32;
              auVar43[6] = bVar33;
              auVar43[7] = bVar34;
              auVar43[8] = bVar35;
              auVar43[9] = bVar36;
              auVar43[10] = bVar37;
              auVar43[0xb] = bVar38;
              auVar43[0xc] = bVar39;
              auVar43[0xd] = bVar40;
              auVar43[0xe] = bVar41;
              auVar43[0xf] = bVar42;
              auVar3[1] = bVar28;
              auVar3[0] = bVar27;
              auVar3[2] = bVar29;
              auVar3[3] = bVar30;
              auVar3[4] = bVar31;
              auVar3[5] = bVar32;
              auVar3[6] = bVar33;
              auVar3[7] = bVar34;
              auVar3[8] = bVar35;
              auVar3[9] = bVar36;
              auVar3[10] = bVar37;
              auVar3[0xb] = bVar38;
              auVar3[0xc] = bVar39;
              auVar3[0xd] = bVar40;
              auVar3[0xe] = bVar41;
              auVar3[0xf] = bVar42;
              auVar43 = NEON_ext(auVar43,auVar3,8,1);
              if (CONCAT17(bVar34 | auVar43[7],
                           CONCAT16(bVar33 | auVar43[6],
                                    CONCAT15(bVar32 | auVar43[5],
                                             CONCAT14(bVar31 | auVar43[4],
                                                      CONCAT13(bVar30 | auVar43[3],
                                                               CONCAT12(bVar29 | auVar43[2],
                                                                        CONCAT11(bVar28 | auVar43[1]
                                                                                 ,bVar27 | auVar43[0
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                lVar22 == 0)) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 2) {
                return (byte *)0x0;
              }
            }
            lVar22 = *(long *)(pbVar13 + 0x20);
            lVar19 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar19;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar22;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar1[1] = bVar28;
            auVar1[0] = bVar27;
            auVar1[2] = bVar29;
            auVar1[3] = bVar30;
            auVar1[4] = bVar31;
            auVar1[5] = bVar32;
            auVar1[6] = bVar33;
            auVar1[7] = bVar34;
            auVar1[8] = bVar35;
            auVar1[9] = bVar36;
            auVar1[10] = bVar37;
            auVar1[0xb] = bVar38;
            auVar1[0xc] = bVar39;
            auVar1[0xd] = bVar40;
            auVar1[0xe] = bVar41;
            auVar1[0xf] = bVar42;
            auVar2[1] = bVar28;
            auVar2[0] = bVar27;
            auVar2[2] = bVar29;
            auVar2[3] = bVar30;
            auVar2[4] = bVar31;
            auVar2[5] = bVar32;
            auVar2[6] = bVar33;
            auVar2[7] = bVar34;
            auVar2[8] = bVar35;
            auVar2[9] = bVar36;
            auVar2[10] = bVar37;
            auVar2[0xb] = bVar38;
            auVar2[0xc] = bVar39;
            auVar2[0xd] = bVar40;
            auVar2[0xe] = bVar41;
            auVar2[0xf] = bVar42;
            auVar43 = NEON_ext(auVar1,auVar2,8,1);
            lVar19 = CONCAT17(bVar34 | auVar43[7],
                              CONCAT16(bVar33 | auVar43[6],
                                       CONCAT15(bVar32 | auVar43[5],
                                                CONCAT14(bVar31 | auVar43[4],
                                                         CONCAT13(bVar30 | auVar43[3],
                                                                  CONCAT12(bVar29 | auVar43[2],
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar19 = *(long *)(pbVar13 + 8);
          uVar16 = *(ulong *)(pbVar13 + 0x10);
          lVar22 = *(long *)pbVar13;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar22,uVar11);
          if (((ulong)pbVar12 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
          unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
          unaff_x20 = *(ulong *)(puVar7 + -0xa0);
          unaff_x19 = *(byte **)(puVar7 + -0x98);
          unaff_x22 = *(ulong *)(puVar7 + -0xb0);
          unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
          unaff_x24 = *(byte **)(puVar7 + -0xc0);
          unaff_x23 = *(byte **)(puVar7 + -0xb8);
          puVar7 = puVar7 + -0x80;
        } while( true );
      }
    }
    else if (lVar19 == 2) goto LAB_1016223c0;
  }
  else if (lVar19 == lVar22) goto LAB_1016223c0;
  return (byte *)0x0;
}



/* Entry: 101621ec8; end: 101621ef7;  */

undefined1  [16] FUN_101621ec8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 101621ef8; end: 101621f2b;  */

void FUN_101621ef8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 101621f2c; end: 101621f3f;  */

undefined1  [16] FUN_101621f2c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x101621f3c;
  return auVar1;
}



/* Entry: 101621f40; end: 101621f67;  */

void FUN_101621f40(void)

{
  FUN_101621c18();
  return;
}



/* Entry: 101621f68; end: 101621f6b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101621f68(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101621f6c; end: 101621fa3;  */

uint FUN_101621f6c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_101622928();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 101621fa4; end: 101621feb;  */

uint FUN_101621fa4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_1016222fc(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101621fec; end: 10162208b;  */

/* WARNING: Possible PIC construction at 0x000101622038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101622048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010162203c) */
/* WARNING: Removing unreachable block (ram,0x00010162204c) */

void FUN_101621fec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba5f0 != -1) {
    func_0x000107c61568(0x112dba5f0,FUN_101621bd0);
  }
  uVar5 = uRam00000001138018b0;
  uVar4 = uRam00000001138018a8;
  uVar3 = uRam00000001138018a0;
  uVar2 = uRam0000000113801898;
  uVar1 = uRam0000000113801890;
  *param_1 = uRam0000000113801888;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10162208c; end: 1016220c7;  */

void FUN_10162208c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dba648;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dba648,&UNK_10d96deb0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1016220c8; end: 1016221cb;  */

void FUN_1016220c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016221cc; end: 10162225b;  */

uint FUN_1016221cc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_1016222fc(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10162225c; end: 1016222fb;  */

/* WARNING: Possible PIC construction at 0x0001016222a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016222b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016222ac) */
/* WARNING: Removing unreachable block (ram,0x0001016222bc) */

void FUN_10162225c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba608 != -1) {
    func_0x000107c61568(0x112dba608,0x101622214);
  }
  uVar5 = uRam00000001138018e0;
  uVar4 = uRam00000001138018d8;
  uVar3 = uRam00000001138018d0;
  uVar2 = uRam00000001138018c8;
  uVar1 = uRam00000001138018c0;
  *param_1 = uRam00000001138018b8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1016222fc; end: 1016223eb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1016222fc(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
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
  undefined1 auVar43 [16];
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 != 0) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 1) {
      if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 2) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  lVar19 = param_1[2];
  lVar22 = param_2[2];
  if ((char)param_2[3] == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 != 0) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 1) {
      if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 2) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  lVar19 = param_1[4];
  lVar22 = param_2[4];
  if ((char)param_2[5] == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 == 0) goto LAB_1016223c0;
    }
    else if (lVar22 == 1) {
      if (lVar19 == 1) {
LAB_1016223c0:
        pbVar10 = (byte *)param_1[6];
        pbVar26 = (byte *)param_1[7];
        lVar19 = param_2[6];
        uVar16 = param_2[7];
        puVar7 = (undefined1 *)register0x00000008;
        do {
          *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
          *(byte **)(puVar7 + -0x48) = unaff_x25;
          *(byte **)(puVar7 + -0x40) = unaff_x24;
          *(byte **)(puVar7 + -0x38) = unaff_x23;
          *(ulong *)(puVar7 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
          *(ulong *)(puVar7 + -0x20) = unaff_x20;
          *(byte **)(puVar7 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar7 + -8) = unaff_x30;
          *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar4 = (uint)((ulong)pbVar26 >> 0x20);
          uVar18 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar16 >> 0x20);
          uVar23 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar13 = pbVar26;
          if ((ulong)pbVar26 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                (uVar16 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
LAB_100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar21 = (ulong)(iVar20 - iVar8);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar16 >> 0x30 & 0xff;
              goto LAB_100e2608c;
            }
            iVar20 = (int)((ulong)lVar19 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar19)) goto LAB_100e26094;
LAB_100e26154:
            pbVar9 = (byte *)0x0;
          }
          else {
            if (uVar18 == 2) {
              uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar21 = 0;
            if (uVar23 < 2) goto LAB_100e26084;
LAB_100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
              if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
LAB_100e2608c:
              if (uVar21 != uVar24) goto LAB_100e26154;
LAB_100e26094:
              if ((long)uVar21 < 1) goto LAB_100e26128;
              if (uVar18 < 2) {
                if (uVar18 == 0) {
                  puVar7[-0x70] = (char)pbVar10;
                  puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                  puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                  puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                  puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                  puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                  puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                  puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                  puVar7[-0x68] = (char)pbVar26;
                  puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                  puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                  puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                  puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                  puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                  pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
                  unaff_x21 = 0;
                  FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                  goto LAB_100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar8;
                unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar26;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar13 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar13) {
                      pbVar13 = unaff_x23;
                    }
                    pbVar13 = pbVar13 + (long)pbVar10;
                    goto LAB_100e262a4;
                  }
                }
                pbVar13 = (byte *)0x0;
              }
              else {
                if (uVar18 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar13 = puVar7 + -0x70;
                  goto LAB_100e26260;
                }
                lVar22 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar13 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
                }
                unaff_x23 = unaff_x24 + -lVar22;
                if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar26;
                if (pbVar10 == (byte *)0x0) {
                  pbVar13 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                }
              }
LAB_100e262a4:
              unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar16;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar21 == 0);
            }
          }
LAB_100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
            return pbVar9;
          }
          func_0x000107c60e78();
          *(byte **)(puVar7 + -0xc0) = unaff_x24;
          *(byte **)(puVar7 + -0xb8) = unaff_x23;
          *(ulong *)(puVar7 + -0xb0) = unaff_x22;
          *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
          *(ulong *)(puVar7 + -0xa0) = unaff_x20;
          *(byte **)(puVar7 + -0x98) = unaff_x19;
          *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
          *(code **)(puVar7 + -0x88) = FUN_100e26304;
          pbVar12 = *(byte **)pbVar9;
          pbVar10 = *(byte **)(pbVar9 + 8);
          pbVar25 = *(byte **)(pbVar9 + 0x18);
          bVar27 = pbVar9[0x28];
          pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar14 = pbVar10;
          if (bVar27 < 3) {
            if (bVar27 == 0) {
              if (pbVar13[0x28] == 0) {
                lVar19 = *(long *)pbVar13;
                uVar11 = 0;
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
                return (byte *)(ulong)((uint)pbVar12 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar27 == 1) {
              if (pbVar13[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar17 = *(byte **)(pbVar13 + 0x10);
              lVar19 = *(long *)pbVar13;
              uVar11 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar13[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              lVar19 = *(long *)(pbVar13 + 0x18);
              if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
                if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar19 == 0) {
                  return (byte *)0x0;
                }
                FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar19);
                func_0x000107c61174();
                pbVar10 = pbVar25;
                func_0x000107c60118();
                func_0x000107c61170(pbVar25);
                func_0x000107c61170(lVar19);
                pbVar25 = pbVar10;
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
            }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar12,pbVar14,pbVar15,pbVar17,0);
            return pbVar12;
          }
          lVar22 = *(long *)(pbVar9 + 0x20);
          if (bVar27 < 5) {
            if (bVar27 != 3) {
              if (pbVar13[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                 (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                 pbVar17 = *(byte **)(pbVar13 + 0x18),
                 pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar13[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar19 = *(long *)(pbVar13 + 0x20);
            if (pbVar26 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar17 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar19 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar19 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar27 != 5) {
            if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                lVar22 == 0) && pbVar26 == (byte *)0x0) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar13 + 0x20);
              lVar19 = *(long *)(pbVar13 + 0x18);
              bVar27 = pbVar13[8] | (byte)lVar19;
              bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
              bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar35 = pbVar13[0x10] | (byte)lVar22;
              bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar43[1] = bVar28;
              auVar43[0] = bVar27;
              auVar43[2] = bVar29;
              auVar43[3] = bVar30;
              auVar43[4] = bVar31;
              auVar43[5] = bVar32;
              auVar43[6] = bVar33;
              auVar43[7] = bVar34;
              auVar43[8] = bVar35;
              auVar43[9] = bVar36;
              auVar43[10] = bVar37;
              auVar43[0xb] = bVar38;
              auVar43[0xc] = bVar39;
              auVar43[0xd] = bVar40;
              auVar43[0xe] = bVar41;
              auVar43[0xf] = bVar42;
              auVar3[1] = bVar28;
              auVar3[0] = bVar27;
              auVar3[2] = bVar29;
              auVar3[3] = bVar30;
              auVar3[4] = bVar31;
              auVar3[5] = bVar32;
              auVar3[6] = bVar33;
              auVar3[7] = bVar34;
              auVar3[8] = bVar35;
              auVar3[9] = bVar36;
              auVar3[10] = bVar37;
              auVar3[0xb] = bVar38;
              auVar3[0xc] = bVar39;
              auVar3[0xd] = bVar40;
              auVar3[0xe] = bVar41;
              auVar3[0xf] = bVar42;
              auVar43 = NEON_ext(auVar43,auVar3,8,1);
              if (CONCAT17(bVar34 | auVar43[7],
                           CONCAT16(bVar33 | auVar43[6],
                                    CONCAT15(bVar32 | auVar43[5],
                                             CONCAT14(bVar31 | auVar43[4],
                                                      CONCAT13(bVar30 | auVar43[3],
                                                               CONCAT12(bVar29 | auVar43[2],
                                                                        CONCAT11(bVar28 | auVar43[1]
                                                                                 ,bVar27 | auVar43[0
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                lVar22 == 0)) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 2) {
                return (byte *)0x0;
              }
            }
            lVar22 = *(long *)(pbVar13 + 0x20);
            lVar19 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar19;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar22;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar1[1] = bVar28;
            auVar1[0] = bVar27;
            auVar1[2] = bVar29;
            auVar1[3] = bVar30;
            auVar1[4] = bVar31;
            auVar1[5] = bVar32;
            auVar1[6] = bVar33;
            auVar1[7] = bVar34;
            auVar1[8] = bVar35;
            auVar1[9] = bVar36;
            auVar1[10] = bVar37;
            auVar1[0xb] = bVar38;
            auVar1[0xc] = bVar39;
            auVar1[0xd] = bVar40;
            auVar1[0xe] = bVar41;
            auVar1[0xf] = bVar42;
            auVar2[1] = bVar28;
            auVar2[0] = bVar27;
            auVar2[2] = bVar29;
            auVar2[3] = bVar30;
            auVar2[4] = bVar31;
            auVar2[5] = bVar32;
            auVar2[6] = bVar33;
            auVar2[7] = bVar34;
            auVar2[8] = bVar35;
            auVar2[9] = bVar36;
            auVar2[10] = bVar37;
            auVar2[0xb] = bVar38;
            auVar2[0xc] = bVar39;
            auVar2[0xd] = bVar40;
            auVar2[0xe] = bVar41;
            auVar2[0xf] = bVar42;
            auVar43 = NEON_ext(auVar1,auVar2,8,1);
            lVar19 = CONCAT17(bVar34 | auVar43[7],
                              CONCAT16(bVar33 | auVar43[6],
                                       CONCAT15(bVar32 | auVar43[5],
                                                CONCAT14(bVar31 | auVar43[4],
                                                         CONCAT13(bVar30 | auVar43[3],
                                                                  CONCAT12(bVar29 | auVar43[2],
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar19 = *(long *)(pbVar13 + 8);
          uVar16 = *(ulong *)(pbVar13 + 0x10);
          lVar22 = *(long *)pbVar13;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar22,uVar11);
          if (((ulong)pbVar12 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
          unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
          unaff_x20 = *(ulong *)(puVar7 + -0xa0);
          unaff_x19 = *(byte **)(puVar7 + -0x98);
          unaff_x22 = *(ulong *)(puVar7 + -0xb0);
          unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
          unaff_x24 = *(byte **)(puVar7 + -0xc0);
          unaff_x23 = *(byte **)(puVar7 + -0xb8);
          puVar7 = puVar7 + -0x80;
        } while( true );
      }
    }
    else if (lVar19 == 2) goto LAB_1016223c0;
  }
  else if (lVar19 == lVar22) goto LAB_1016223c0;
  return (byte *)0x0;
}



/* Entry: 1016223ec; end: 10162242b;  */

void FUN_1016223ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96dda8;
  func_0x000107c61520(&UNK_10d96dda8,&UNK_1103e96a0);
  puRam0000000112dba600 = puVar1;
  return;
}



/* Entry: 10162242c; end: 10162243f;  */

void FUN_10162242c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101622440();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101622480)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101622440; end: 1016224bf;  */

void FUN_101622440(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96dcd0;
  func_0x000107c61520(&UNK_10d96dcd0,&UNK_1103e9740);
  puRam0000000112dba610 = puVar1;
  return;
}



/* Entry: 1016224c0; end: 1016224c3;  */

void FUN_1016224c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dba620 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dba628;
  func_0x00010002969c(0x112dba628,&UNK_10d96dc58);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dba620 = puVar2;
  return;
}



/* Entry: 1016224c4; end: 101622513;  */

void FUN_1016224c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dba620 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dba628;
  func_0x00010002969c(0x112dba628,&UNK_10d96dc58);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dba620 = puVar2;
  return;
}



/* Entry: 101622514; end: 101622517;  */

void FUN_101622514(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96dd10;
  func_0x000107c61520(&UNK_10d96dd10,&UNK_1103e9740);
  puRam0000000112dba630 = puVar1;
  return;
}



/* Entry: 101622518; end: 101622557;  */

void FUN_101622518(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96dd10;
  func_0x000107c61520(&UNK_10d96dd10,&UNK_1103e9740);
  puRam0000000112dba630 = puVar1;
  return;
}



/* Entry: 101622558; end: 10162257b;  */

void FUN_101622558(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10162257c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10162257c; end: 1016225bb;  */

void FUN_10162257c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96dd80;
  func_0x000107c61520(&UNK_10d96dd80,&UNK_1103e96a0);
  puRam0000000112dba638 = puVar1;
  return;
}



/* Entry: 1016225bc; end: 1016225cf;  */

void FUN_1016225bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016223ec();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1016185c0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016225d0; end: 1016225ff;  */

void FUN_1016225d0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101622600; end: 101622603;  */

void FUN_101622600(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96dde8;
  func_0x000107c61520(&UNK_10d96dde8,&UNK_1103e96a0);
  puRam0000000112dba640 = puVar1;
  return;
}



/* Entry: 101622604; end: 101622643;  */

void FUN_101622604(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96dde8;
  func_0x000107c61520(&UNK_10d96dde8,&UNK_1103e96a0);
  puRam0000000112dba640 = puVar1;
  return;
}



/* Entry: 101622644; end: 10162266f;  */

long FUN_101622644(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101622670; end: 10162267b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101622670(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x38) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x38) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10162267c; end: 10162275b;  */

undefined8 * FUN_10162267c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return param_1;
}



/* Entry: 10162275c; end: 1016227c3;  */

undefined8 * FUN_10162275c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}


